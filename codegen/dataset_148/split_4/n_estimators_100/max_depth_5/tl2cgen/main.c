
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
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2066.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9894179894179894;
            result[5] += 0.010582010582010581;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)84) ) ) {
            result[0] += 0.002429543245869777;
            result[1] += 0.0004859086491739553;
            result[2] += 0;
            result[3] += 0.9951409135082605;
            result[4] += 0;
            result[5] += 0.0019436345966958213;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8181818181818182;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.18181818181818182;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)32.5) ) ) {
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
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)33.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9988574692944873;
            result[1] += 0;
            result[2] += 0.000856898029134533;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00028563267637817766;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)3.5) ) ) {
            result[0] += 0.7777777777777778;
            result[1] += 0.03508771929824561;
            result[2] += 0;
            result[3] += 0.1871345029239766;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.6694214876033058;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3305785123966942;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
            result[0] += 0.03691813804173355;
            result[1] += 0.014446227929373997;
            result[2] += 0.04173354735152488;
            result[3] += 0.9069020866773676;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.5912905779889153;
            result[1] += 0;
            result[2] += 0.004117181314330958;
            result[3] += 0.40459224069675376;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
            result[0] += 0.9822857142857143;
            result[1] += 0;
            result[2] += 0.00019047619047619048;
            result[3] += 0.017523809523809525;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9911268855368234;
            result[1] += 0;
            result[2] += 0.006876663708961846;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.001996450754214729;
          }
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)85) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
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
            result[3] += 0.9459459459459459;
            result[4] += 0.05405405405405406;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
            result[0] += 0.02247191011235955;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.21348314606741572;
            result[4] += 0.7640449438202247;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.12162162162162163;
            result[2] += 0;
            result[3] += 0.8378378378378378;
            result[4] += 0.04054054054054054;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.17857142857142858;
            result[4] += 0.8214285714285714;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.006369426751592357;
            result[4] += 0.9936305732484076;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.16666666666666666;
            result[2] += 0;
            result[3] += 0.8333333333333334;
            result[4] += 0;
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
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)100.5) ) ) {
            result[0] += 0.10714285714285714;
            result[1] += 0;
            result[2] += 0.017857142857142856;
            result[3] += 0.875;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.28292682926829266;
            result[1] += 0.05853658536585366;
            result[2] += 0;
            result[3] += 0.6585365853658537;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.984;
            result[1] += 0;
            result[2] += 0.016;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += 0.9926470588235294;
            result[1] += 0;
            result[2] += 0.007352941176470588;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9999584631360332;
            result[1] += 0;
            result[2] += 4.153686396677051e-05;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)40) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)14.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.013824884792626729;
            result[2] += 0;
            result[3] += 0.9861751152073732;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
            result[0] += 0.9707508060801474;
            result[1] += 0.0027637033625057578;
            result[2] += 0.0027637033625057578;
            result[3] += 0.022570244127130355;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0011515430677107323;
          } else {
            result[0] += 0.6770186335403726;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.32298136645962733;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
            result[0] += 0.19205298013245034;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8079470198675497;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.8461538461538461;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.15384615384615385;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)42) ) ) {
            result[0] += 0.984822934232715;
            result[1] += 0;
            result[2] += 0.010961214165261383;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.0008431703204047217;
            result[6] += 0.003372681281618887;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.17647058823529413;
            result[3] += 0.01680672268907563;
            result[4] += 0.8067226890756303;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
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
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)92) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
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
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
            result[0] += 0.4236734693877551;
            result[1] += 0;
            result[2] += 0.013877551020408163;
            result[3] += 0.5624489795918367;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.7125567322239031;
            result[1] += 0;
            result[2] += 0.01664145234493192;
            result[3] += 0.2708018154311649;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-5.5) ) ) {
            result[0] += 0.18238993710691823;
            result[1] += 0.012578616352201259;
            result[2] += 0;
            result[3] += 0.8050314465408805;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.10792079207920792;
            result[1] += 0.009900990099009901;
            result[2] += 0.01089108910891089;
            result[3] += 0.8712871287128713;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)50) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.998324958123953;
            result[4] += 0;
            result[5] += 0.0016750418760469012;
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
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
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
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)31.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9928909952606635;
            result[1] += 0;
            result[2] += 0.0071090047393364926;
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
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)36.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90) ) ) {
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
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-5.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.3759036144578313;
            result[1] += 0;
            result[2] += 0.05301204819277108;
            result[3] += 0.5253012048192771;
            result[4] += 0.043373493975903614;
            result[5] += 0.0024096385542168677;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-1) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
            result[0] += 0.45454545454545453;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5454545454545454;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.15129151291512916;
            result[1] += 0.02029520295202952;
            result[2] += 0;
            result[3] += 0.8284132841328413;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.6921940408766314;
            result[1] += 0;
            result[2] += 0.004186161044077813;
            result[3] += 0.30189608470819995;
            result[4] += 0;
            result[5] += 0.0009849790691947797;
            result[6] += 0.0007387343018960847;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)82.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9748062015503876;
            result[4] += 0.02131782945736434;
            result[5] += 0.003875968992248062;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06164383561643835;
            result[3] += 0.2945205479452055;
            result[4] += 0.6438356164383562;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)10.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
            result[0] += 0.009708737864077669;
            result[1] += 0.019417475728155338;
            result[2] += 0.016643550624133148;
            result[3] += 0.9542302357836339;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.0034602076124567475;
            result[2] += 0.0017301038062283738;
            result[3] += 0.9948096885813149;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9468085106382979;
            result[1] += 0;
            result[2] += 0.05319148936170213;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)5624.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            result[0] += 0.989247311827957;
            result[1] += 0;
            result[2] += 0.01003584229390681;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0007168458781362007;
          } else {
            result[0] += 0.999761122723201;
            result[1] += 0;
            result[2] += 0.00023887727679904448;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)875.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
            result[0] += 0.00322061191626409;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9967793880837359;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.010183299389002037;
            result[2] += 0.014256619144602852;
            result[3] += 0.9704684317718941;
            result[4] += 0;
            result[5] += 0.0050916496945010185;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
            result[0] += 0.6326479438314945;
            result[1] += 0;
            result[2] += 0.0010030090270812437;
            result[3] += 0.36584754262788366;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0005015045135406219;
          } else {
            result[0] += 0.8887809616318602;
            result[1] += 0;
            result[2] += 0.007285089849441476;
            result[3] += 0.10344827586206896;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00048567265662943174;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)112) ) ) {
            result[0] += 0.0006331117442228553;
            result[1] += 0.00031655587211142766;
            result[2] += 0;
            result[3] += 0.9971509971509972;
            result[4] += 0.0015827793605571383;
            result[5] += 0.00031655587211142766;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)74) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)18) ) ) {
            result[0] += 0.978021978021978;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.02197802197802198;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8235294117647058;
            result[3] += 0;
            result[4] += 0.058823529411764705;
            result[5] += 0.11764705882352941;
            result[6] += 0;
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
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)53) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)41) ) ) {
            result[0] += 0.9981774440475323;
            result[1] += 0.000583217904789677;
            result[2] += 0.0007654735000364511;
            result[3] += 0.00021870671429612888;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0002551578333454837;
          } else {
            result[0] += 0.8909090909090909;
            result[1] += 0;
            result[2] += 0.10545454545454545;
            result[3] += 0.0036363636363636364;
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
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)183) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.03717472118959108;
            result[2] += 0;
            result[3] += 0.9628252788104089;
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
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
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
            result[2] += 0.21621621621621623;
            result[3] += 0.7837837837837838;
            result[4] += 0;
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
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)40) ) ) {
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
            result[2] += 0.006243838317449885;
            result[3] += 0.9875123233651002;
            result[4] += 0.004929346040092014;
            result[5] += 0.0013144922773578706;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-191) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)55) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9888740542946151;
            result[1] += 0;
            result[2] += 0.009790832220738763;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0013351134846461949;
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)83) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
            result[0] += 0.9864130434782609;
            result[1] += 0;
            result[2] += 0.01358695652173913;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9333333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.06666666666666667;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += 0.9921875;
            result[1] += 0;
            result[2] += 0.0078125;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)34.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
            result[0] += 0.9879518072289156;
            result[1] += 0;
            result[2] += 0.012048192771084338;
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
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
            result[0] += 0.9999042787403082;
            result[1] += 0;
            result[2] += 9.572125969177755e-05;
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
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-141) ) ) {
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-348) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2306.5) ) ) {
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
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
            result[0] += 0;
            result[1] += 0.023411371237458192;
            result[2] += 0;
            result[3] += 0.11705685618729098;
            result[4] += 0.8595317725752508;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.021081830790568655;
            result[1] += 0.009708737864077669;
            result[2] += 0.004160887656033287;
            result[3] += 0.9631067961165048;
            result[4] += 0.0005547850208044383;
            result[5] += 0.0013869625520110957;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1232876712328767;
            result[4] += 0.8767123287671232;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.03913630229419703;
            result[3] += 0.2874493927125506;
            result[4] += 0.6734143049932524;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
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
            result[2] += 0.05389221556886228;
            result[3] += 0.937125748502994;
            result[4] += 0;
            result[5] += 0.008982035928143712;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-190) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9830464267083986;
            result[1] += 0;
            result[2] += 0.005346896191966615;
            result[3] += 0.009780907668231613;
            result[4] += 0;
            result[5] += 0.00013041210224308815;
            result[6] += 0.001695357329160146;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9774193548387097;
            result[1] += 0;
            result[2] += 0.02258064516129032;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)103.5) ) ) {
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
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-108) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
            result[0] += 0.016144349477682812;
            result[1] += 0.015194681861348529;
            result[2] += 0.017094017094017096;
            result[3] += 0.9515669515669516;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0012578616352201257;
            result[3] += 0.9987421383647799;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)49) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
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
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.0078125;
            result[1] += 0.03125;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9609375;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)16) ) ) {
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
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.028645833333333332;
            result[3] += 0.5885416666666666;
            result[4] += 0.3828125;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.0014958863126402395;
            result[2] += 0.0037397157816005987;
            result[3] += 0.9783096484667166;
            result[4] += 0.011967090501121916;
            result[5] += 0.004487658937920719;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)55.5) ) ) {
            result[0] += 0.9977695463416575;
            result[1] += 0.0009559087107181262;
            result[2] += 0.0007169315330385947;
            result[3] += 0.0005177838849723184;
            result[4] += 0;
            result[5] += 0;
            result[6] += 3.9829529613255264e-05;
          } else {
            result[0] += 0.9500412881915773;
            result[1] += 0;
            result[2] += 0.0066061106523534275;
            result[3] += 0.04335260115606937;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)40) ) ) {
            result[0] += 0.8657223796033995;
            result[1] += 0;
            result[2] += 0.0056657223796034;
            result[3] += 0.12521246458923513;
            result[4] += 0;
            result[5] += 0.0008498583569405099;
            result[6] += 0.0025495750708215297;
          } else {
            result[0] += 0.5131150679686004;
            result[1] += 0;
            result[2] += 0.0026804518475971664;
            result[3] += 0.4842044801838024;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-141) ) ) {
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
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)27) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.000839630562552477;
            result[2] += 0;
            result[3] += 0.9983207388748951;
            result[4] += 0.000839630562552477;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
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
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)95) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)3.5) ) ) {
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
            result[3] += 0.5;
            result[4] += 0.5;
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
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
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
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
            result[0] += 0;
            result[1] += 0.036036036036036036;
            result[2] += 0;
            result[3] += 0.0045045045045045045;
            result[4] += 0.9594594594594594;
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
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)75) ) ) {
            result[0] += 0;
            result[1] += 1;
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)58.5) ) ) {
            result[0] += 0.9765397601583421;
            result[1] += 0.0007567819303760624;
            result[2] += 0.00209570380719525;
            result[3] += 0.02054954010944231;
            result[4] += 0;
            result[5] += 0;
            result[6] += 5.821399464431249e-05;
          } else {
            result[0] += 0.0784313725490196;
            result[1] += 0;
            result[2] += 0.0196078431372549;
            result[3] += 0.9019607843137255;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.5252092661086237;
            result[1] += 0;
            result[2] += 0.003698656803581857;
            result[3] += 0.47070274479268054;
            result[4] += 0;
            result[5] += 0.00019466614755693986;
            result[6] += 0.00019466614755693986;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)94.5) ) ) {
            result[0] += 0.9962943356273161;
            result[1] += 0;
            result[2] += 0.0037056643726839597;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.3150684931506849;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.684931506849315;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)94.5) ) ) {
            result[0] += 0.9952341236744907;
            result[1] += 0;
            result[2] += 0.003216966519718814;
            result[3] += 0.0005957345406886693;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0009531752651018707;
          } else {
            result[0] += 0.75;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-327) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-3.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9990749306197965;
            result[1] += 0;
            result[2] += 0.0009250693802035153;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
            result[0] += 0.9869402985074628;
            result[1] += 0;
            result[2] += 0.009328358208955225;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00373134328358209;
          } else {
            result[0] += 0.9987519500780031;
            result[1] += 0;
            result[2] += 0.0012480499219968799;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)3.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)97.5) ) ) {
            result[0] += 0.02341255764455481;
            result[1] += 0.009932600212841435;
            result[2] += 0.014544164597374957;
            result[3] += 0.9304717985101101;
            result[4] += 0.020219936147570065;
            result[5] += 0.0014189428875487763;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05048543689320388;
            result[3] += 0;
            result[4] += 0.941747572815534;
            result[5] += 0.007766990291262136;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
            result[0] += 0.577639751552795;
            result[1] += 0;
            result[2] += 0.005060961582700713;
            result[3] += 0.4166091557395905;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0006901311249137336;
          } else {
            result[0] += 0.9613494923026532;
            result[1] += 0;
            result[2] += 0.010809040288241076;
            result[3] += 0.02620373403209958;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0016377333770062237;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-9) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
            result[0] += 0.017371601208459216;
            result[1] += 0;
            result[2] += 0.0022658610271903325;
            result[3] += 0.8361027190332326;
            result[4] += 0.14425981873111782;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.7887323943661971;
            result[1] += 0;
            result[2] += 0.0008802816901408451;
            result[3] += 0.2092136150234742;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0011737089201877935;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)18.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-6419.5) ) ) {
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
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)35.5) ) ) {
            result[0] += 0.9978768577494692;
            result[1] += 0;
            result[2] += 0.0021231422505307855;
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
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
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
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9285714285714286;
            result[1] += 0;
            result[2] += 0.05952380952380952;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.011904761904761904;
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
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
            result[0] += 0.9958563535911602;
            result[1] += 0;
            result[2] += 0.004143646408839779;
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
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
            result[0] += 0.0025;
            result[1] += 0.0175;
            result[2] += 0;
            result[3] += 0.98;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9801451750640479;
            result[1] += 0;
            result[2] += 0.005123825789923143;
            result[3] += 0.013236549957301452;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0014944491887275832;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
            result[0] += 0.9066032123735871;
            result[1] += 0;
            result[2] += 0.001189767995240928;
            result[3] += 0.09220701963117192;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9876288659793815;
            result[1] += 0;
            result[2] += 0.0006872852233676976;
            result[3] += 0.01168384879725086;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
            result[0] += 0.1563255439161966;
            result[1] += 0.0036261079774375505;
            result[2] += 0.004431909750201451;
            result[3] += 0.8082191780821918;
            result[4] += 0.0273972602739726;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.11100292112950341;
            result[1] += 0.008763388510223954;
            result[2] += 0;
            result[3] += 0.7205452775073028;
            result[4] += 0.1596884128529698;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.1172069825436409;
            result[1] += 0;
            result[2] += 0.10224438902743142;
            result[3] += 0.773067331670823;
            result[4] += 0;
            result[5] += 0.007481296758104738;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)33) ) ) {
            result[0] += 0;
            result[1] += 0.022813688212927757;
            result[2] += 0;
            result[3] += 0.9771863117870723;
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
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-3.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
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
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
            result[0] += 0.9980104712041885;
            result[1] += 0;
            result[2] += 0.001989528795811518;
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
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4.5) ) ) {
            result[0] += 0.9989373007438895;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0010626992561105207;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.014428857715430862;
            result[1] += 0.006012024048096192;
            result[2] += 0.009218436873747494;
            result[3] += 0.9683366733466934;
            result[4] += 0.0016032064128256513;
            result[5] += 0.0004008016032064128;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
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
            result[2] += 0.12398921832884097;
            result[3] += 0.8679245283018868;
            result[4] += 0;
            result[5] += 0.008086253369272238;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
            result[0] += 0.9966531618812753;
            result[1] += 0;
            result[2] += 0.0026422406200457987;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0007045974986788797;
          } else {
            result[0] += 0.9543958627174425;
            result[1] += 0;
            result[2] += 0.00987306064880113;
            result[3] += 0.03196991067230842;
            result[4] += 0;
            result[5] += 0.00047014574518100614;
            result[6] += 0.0032910202162670433;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
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
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)109) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-41) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23) ) ) {
            result[0] += 0;
            result[1] += 1;
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
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)23) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
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
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-130) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
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
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
            result[0] += 0;
            result[1] += 0.03982300884955752;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9601769911504425;
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
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
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
            result[0] += 0.3659889094269871;
            result[1] += 0.031423290203327174;
            result[2] += 0;
            result[3] += 0.6025878003696857;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)49) ) ) {
            result[0] += 0.9310344827586207;
            result[1] += 0;
            result[2] += 0.06896551724137931;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.01639344262295082;
            result[3] += 0.9836065573770492;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1973.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9927007299270073;
            result[5] += 0.0072992700729927005;
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
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0.00038774718883288094;
            result[2] += 0.008918185343156262;
            result[3] += 0.9895308259015122;
            result[4] += 0;
            result[5] += 0.0011632415664986429;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)31) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9649122807017544;
            result[4] += 0;
            result[5] += 0.03508771929824561;
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.07692307692307693;
            result[1] += 0.9230769230769231;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
            result[0] += 0.9762282091917591;
            result[1] += 0;
            result[2] += 0.021394611727416798;
            result[3] += 0.002377179080824089;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9892920880428316;
            result[1] += 0.002379535990481856;
            result[2] += 0.006246281975014872;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.002082093991671624;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
            result[0] += 0.997143484948363;
            result[1] += 0.0007690617446715008;
            result[2] += 0.0013183915622940012;
            result[3] += 0.0005493298176225005;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00021973192704900023;
          } else {
            result[0] += 0.9999267077103489;
            result[1] += 0;
            result[2] += 7.32922896511287e-05;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)45) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0009354536950420954;
            result[3] += 0.9990645463049579;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.995571302037201;
            result[1] += 0;
            result[2] += 0.0044286979627989375;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9375;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.0625;
            result[6] += 0;
          } else {
            result[0] += 0.9853372434017595;
            result[1] += 0;
            result[2] += 0.010752688172043012;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0039100684261974585;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += 0.9946808510638298;
            result[1] += 0;
            result[2] += 0.005319148936170213;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9981470043236566;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0018529956763434219;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2991.5) ) ) {
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)27) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.000927070457354759;
            result[2] += 0.002472187886279357;
            result[3] += 0.9953646477132262;
            result[4] += 0;
            result[5] += 0.0012360939431396785;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)33.5) ) ) {
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
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
            result[0] += 0.9973757585697884;
            result[1] += 0.0013121207151057896;
            result[2] += 0.001148105625717566;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0001640150893882237;
          } else {
            result[0] += 0.9995902199153122;
            result[1] += 0;
            result[2] += 0.00040978008468788414;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)53.5) ) ) {
            result[0] += 0.9918262494161607;
            result[1] += 0.0021018215787015414;
            result[2] += 0.0011676786548341896;
            result[3] += 0.004904250350303597;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.901556420233463;
            result[1] += 0;
            result[2] += 0.005577172503242542;
            result[3] += 0.09182879377431907;
            result[4] += 0;
            result[5] += 0.00012970168612191958;
            result[6] += 0.0009079118028534371;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
            result[0] += 0.9012875536480687;
            result[1] += 0.04721030042918455;
            result[2] += 0.05150214592274678;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.023131672597864767;
            result[3] += 0.9768683274021353;
            result[4] += 0;
            result[5] += 0;
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
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
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
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9722222222222222;
            result[1] += 0;
            result[2] += 0.027777777777777776;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += 0.9868421052631579;
            result[1] += 0;
            result[2] += 0.013157894736842105;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9997981632859017;
            result[1] += 0;
            result[2] += 0.0002018367140982945;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)109) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.009510086455331412;
            result[1] += 0.008069164265129682;
            result[2] += 0.0037463976945244955;
            result[3] += 0.9760806916426513;
            result[4] += 0.0020172910662824206;
            result[5] += 0.0005763688760806917;
            result[6] += 0;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)73) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.95;
            result[3] += 0;
            result[4] += 0.05;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.014473684210526316;
            result[4] += 0.9855263157894737;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)97.5) ) ) {
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
            result[2] += 0.045112781954887216;
            result[3] += 0;
            result[4] += 0.9473684210526315;
            result[5] += 0.007518796992481203;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)94.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
            result[0] += 0.7313432835820896;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.26865671641791045;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9914082928651475;
            result[1] += 0;
            result[2] += 0.0011206574523720584;
            result[3] += 0.007097497198356369;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00037355248412401944;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)38) ) ) {
            result[0] += 0.9744645799011532;
            result[1] += 0;
            result[2] += 0.018121911037891267;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.007413509060955519;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0008499787505312367;
            result[3] += 0.9991500212494687;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)86.5) ) ) {
            result[0] += 0.9961152476529621;
            result[1] += 0;
            result[2] += 0.0029135642602784073;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0009711880867594691;
          } else {
            result[0] += 0.9688581314878892;
            result[1] += 0;
            result[2] += 0.02768166089965398;
            result[3] += 0.0034602076124567475;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)49) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9970059880239521;
            result[4] += 0;
            result[5] += 0.0029940119760479044;
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
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)5624.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-327) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-3.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9985556959740025;
            result[1] += 0;
            result[2] += 0.0014443040259974724;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9996811224489796;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00031887755102040814;
          }
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
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)116.5) ) ) {
            result[0] += 0.013370865587614356;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9831104855735397;
            result[4] += 0.003518648838845883;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.10833333333333334;
            result[2] += 0;
            result[3] += 0.36666666666666664;
            result[4] += 0.525;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11409395973154363;
            result[3] += 0.87248322147651;
            result[4] += 0.013422818791946308;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.003963011889035667;
            result[3] += 0.14002642007926025;
            result[4] += 0.8546895640686922;
            result[5] += 0.001321003963011889;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)38) ) ) {
            result[0] += 0.9843217450579415;
            result[1] += 0;
            result[2] += 0.012951601908657125;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0027266530334015;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0011235955056179776;
            result[3] += 0.998876404494382;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)40.5) ) ) {
            result[0] += 0.7171314741035857;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2788844621513944;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00398406374501992;
          } else {
            result[0] += 0.9597501734906315;
            result[1] += 0;
            result[2] += 0.004163775156141568;
            result[3] += 0.03608605135322693;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
            result[0] += 0.007722007722007722;
            result[1] += 0.04247104247104247;
            result[2] += 0;
            result[3] += 0.9459459459459459;
            result[4] += 0;
            result[5] += 0.003861003861003861;
            result[6] += 0;
          } else {
            result[0] += 0.9888244143563293;
            result[1] += 0;
            result[2] += 0.002364066193853428;
            result[3] += 0.007951859015688803;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0008596604341285192;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
            result[0] += 0.16314496314496316;
            result[1] += 0.007371007371007371;
            result[2] += 0.019656019656019656;
            result[3] += 0.7832923832923833;
            result[4] += 0.025552825552825554;
            result[5] += 0.0009828009828009828;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.002904865649963689;
            result[2] += 0;
            result[3] += 0.11909949164851126;
            result[4] += 0.8779956427015251;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)101) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
            result[0] += 0;
            result[1] += 0.004807692307692308;
            result[2] += 0;
            result[3] += 0.9939903846153846;
            result[4] += 0.001201923076923077;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.998992950654582;
            result[4] += 0.0010070493454179255;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)66) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5;
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
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.01;
            result[2] += 0;
            result[3] += 0.99;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
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
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
            result[0] += 0.9962277707921682;
            result[1] += 0.0014370396982216634;
            result[2] += 0.0013472247170828093;
            result[3] += 0.0008981498113885396;
            result[4] += 0;
            result[5] += 0;
            result[6] += 8.981498113885396e-05;
          } else {
            result[0] += 0.9996469549867608;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.000176522506619594;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.000176522506619594;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9128205128205128;
            result[1] += 0;
            result[2] += 0.08717948717948718;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)94.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
            result[0] += 0.9996639408535902;
            result[1] += 0;
            result[2] += 0.00033605914640976814;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9966918714555766;
            result[1] += 0;
            result[2] += 0.0023629489603024575;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.000945179584120983;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
            result[0] += 0.401928444557219;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.598071555442781;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9944068295554902;
            result[1] += 0;
            result[2] += 0.003238151309979394;
            result[3] += 0.0008831321754489256;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0014718869590815429;
          }
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)27) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
            result[0] += 0.005254515599343186;
            result[1] += 0.0022988505747126436;
            result[2] += 0.008210180623973728;
            result[3] += 0.9832512315270936;
            result[4] += 0.0006568144499178982;
            result[5] += 0.0003284072249589491;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6023391812865497;
            result[4] += 0.39766081871345027;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
            result[0] += 0.7741935483870968;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.22580645161290322;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9914236706689536;
            result[1] += 0;
            result[2] += 0.008576329331046312;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
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
            result[0] += 0.011363636363636364;
            result[1] += 0.011363636363636364;
            result[2] += 0;
            result[3] += 0.9772727272727273;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.08032128514056225;
            result[4] += 0.9196787148594378;
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
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)42) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)67) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
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
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)53.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
            result[0] += 0.8660968660968662;
            result[1] += 0.010683760683760686;
            result[2] += 0.0007122507122507124;
            result[3] += 0.12108262108262109;
            result[4] += 0.0014245014245014248;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9882851864292912;
            result[1] += 0.00016795431642593214;
            result[2] += 0.0005458515283842794;
            result[3] += 0.010581121934833725;
            result[4] += 0.0001259657373194491;
            result[5] += 0.0001259657373194491;
            result[6] += 0.00016795431642593214;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02101028162717926;
            result[3] += 0.8636566830576665;
            result[4] += 0.11488600804649084;
            result[5] += 0.0004470272686633885;
            result[6] += 0;
          } else {
            result[0] += 0.9936674008810573;
            result[1] += 0;
            result[2] += 0.005506607929515419;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0008259911894273128;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += 0.38286620835536755;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6171337916446324;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.503988603988604;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.496011396011396;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)58) ) ) {
            result[0] += 0.9827882960413081;
            result[1] += 0;
            result[2] += 0.007573149741824441;
            result[3] += 0.0024096385542168677;
            result[4] += 0.0051635111876075735;
            result[5] += 0.0006884681583476765;
            result[6] += 0.001376936316695353;
          } else {
            result[0] += 0.9088145896656535;
            result[1] += 0;
            result[2] += 0.0911854103343465;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-102.5) ) ) {
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
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)107) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-29) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)10.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
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
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
            result[0] += 0.36900369003690037;
            result[1] += 0;
            result[2] += 0.02952029520295203;
            result[3] += 0.6014760147601476;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.015717092337917484;
            result[2] += 0;
            result[3] += 0.9842829076620825;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
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
            result[3] += 0.011111111111111112;
            result[4] += 0.9888888888888889;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)25) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8636363636363636;
            result[5] += 0.13636363636363635;
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)102) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.4;
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)18.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09090909090909091;
            result[3] += 0.9090909090909091;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0038022813688212928;
            result[3] += 0.9946134347275032;
            result[4] += 0;
            result[5] += 0.0015842839036755386;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
            result[0] += 0.9972260748959778;
            result[1] += 0;
            result[2] += 0.0027739251040221915;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)33.5) ) ) {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0.5;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
            result[0] += 0;
            result[1] += 0.4411764705882353;
            result[2] += 0.5294117647058824;
            result[3] += 0.029411764705882353;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9971188475390156;
            result[1] += 0;
            result[2] += 0.0026410564225690276;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00024009603841536616;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
            result[0] += 0.2;
            result[1] += 0.8;
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
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)40) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)49.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0107095046854083;
            result[3] += 0.9879518072289156;
            result[4] += 0;
            result[5] += 0.0013386880856760374;
            result[6] += 0;
          } else {
            result[0] += 0.9925857275254866;
            result[1] += 0;
            result[2] += 0.005560704355885079;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0018535681186283596;
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
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.004985459077690071;
            result[3] += 0.9950145409223099;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-327) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
            result[0] += 0.9990700557966522;
            result[1] += 0;
            result[2] += 0.0009299442033477991;
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
            result[0] += 0.9954591321897074;
            result[1] += 0;
            result[2] += 0.0025227043390514633;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0020181634712411706;
          } else {
            result[0] += 0.9997041420118343;
            result[1] += 0;
            result[2] += 0.0002958579881656805;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += 0.7878654649373489;
            result[1] += 0.0019784568036931194;
            result[2] += 0.003077599472411519;
            result[3] += 0.20553967905034073;
            result[4] += 0;
            result[5] += 0.00043965706748735987;
            result[6] += 0.0010991426687183997;
          } else {
            result[0] += 0;
            result[1] += 0.0013676148796498905;
            result[2] += 0.006017505470459519;
            result[3] += 0.8022428884026258;
            result[4] += 0.19009846827133478;
            result[5] += 0.0002735229759299781;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
            result[0] += 0.06181818181818182;
            result[1] += 0;
            result[2] += 0.03272727272727273;
            result[3] += 0.9054545454545454;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9896079357581484;
            result[1] += 0;
            result[2] += 0.008266414737836562;
            result[3] += 0.001180916391119509;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0009447331128956072;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
            result[0] += 0.05462962962962963;
            result[1] += 0;
            result[2] += 0.016666666666666666;
            result[3] += 0.9231481481481482;
            result[4] += 0.004629629629629629;
            result[5] += 0.000925925925925926;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.45535714285714285;
            result[4] += 0.5446428571428571;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79) ) ) {
            result[0] += 0.75;
            result[1] += 0.07352941176470588;
            result[2] += 0;
            result[3] += 0.17647058823529413;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
            result[0] += 0.019230769230769232;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9807692307692307;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.04878048780487805;
            result[2] += 0;
            result[3] += 0.9512195121951219;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
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
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)13) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.00196078431372549;
            result[1] += 0.00784313725490196;
            result[2] += 0;
            result[3] += 0.9882352941176471;
            result[4] += 0;
            result[5] += 0.00196078431372549;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)46.5) ) ) {
            result[0] += 0.9711538461538461;
            result[1] += 0;
            result[2] += 0.019230769230769232;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.009615384615384616;
          } else {
            result[0] += 0.9974184463740906;
            result[1] += 0;
            result[2] += 0.002346866932644919;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0002346866932644919;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
            result[0] += 0.9893048128342246;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0106951871657754;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.014545454545454545;
            result[2] += 0;
            result[3] += 0.9818181818181818;
            result[4] += 0;
            result[5] += 0.0036363636363636364;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
            result[0] += 0.9653179190751445;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03468208092485549;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9986511182664695;
            result[1] += 8.702462796971542e-05;
            result[2] += 0.0007397093377425812;
            result[3] += 0.0003480985118788617;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00017404925593943085;
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-41) ) ) {
            result[0] += 0.023809523809523808;
            result[1] += 0.08333333333333333;
            result[2] += 0;
            result[3] += 0.13095238095238096;
            result[4] += 0.7619047619047619;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.1413738019169329;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8586261980830671;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)16) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.40298507462686567;
            result[1] += 0;
            result[2] += 0.07462686567164178;
            result[3] += 0.5223880597014925;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)104.5) ) ) {
            result[0] += 0.12473423104181433;
            result[1] += 0.009922041105598868;
            result[2] += 0.02905740609496811;
            result[3] += 0.5485471296952517;
            result[4] += 0.2863217576187102;
            result[5] += 0.0014174344436569811;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.06387665198237885;
            result[4] += 0.9361233480176211;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)11.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.16584887144259078;
            result[1] += 0;
            result[2] += 0.004906771344455349;
            result[3] += 0.8292443572129539;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += 0.735632183908046;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.26436781609195403;
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
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)40) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
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
            result[4] += 0.75;
            result[5] += 0.25;
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
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)26) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)32.5) ) ) {
            result[0] += 0.9933660224978368;
            result[1] += 0;
            result[2] += 0.004614940871070089;
            result[3] += 0.0011537352177675222;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0008653014133256418;
          } else {
            result[0] += 0.6363636363636364;
            result[1] += 0;
            result[2] += 0.18181818181818182;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.18181818181818182;
          }
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2991.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9795918367346939;
            result[5] += 0.02040816326530612;
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
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)115.5) ) ) {
            result[0] += 0;
            result[1] += 0.0003924646781789639;
            result[2] += 0.007456828885400314;
            result[3] += 0.9894034536891679;
            result[4] += 0;
            result[5] += 0.0027472527472527475;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)31) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)31) ) ) {
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
            result[3] += 0.8;
            result[4] += 0;
            result[5] += 0.2;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)41) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
            result[0] += 0.9969659512304754;
            result[1] += 0.0008427913248679627;
            result[2] += 0.0017979548263849872;
            result[3] += 0.0001123721766490617;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0002809304416226542;
          } else {
            result[0] += 0.9996806812134114;
            result[1] += 0;
            result[2] += 0.00010643959552953698;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00021287919105907396;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.96;
            result[3] += 0.04;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9725;
            result[1] += 0;
            result[2] += 0.0275;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-5536) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)27.5) ) ) {
            result[0] += 0;
            result[1] += 0.007220216606498195;
            result[2] += 0;
            result[3] += 0.9927797833935018;
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
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
            result[0] += 0.8464730290456431;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.15352697095435686;
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
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += 0.2345876701361089;
            result[1] += 0;
            result[2] += 0.007205764611689352;
            result[3] += 0.7582065652522018;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.41802980734278444;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5819701926572156;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)89.5) ) ) {
            result[0] += 0.05555555555555555;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0.8333333333333334;
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
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)40) ) ) {
            result[0] += 0.886949055523755;
            result[1] += 0;
            result[2] += 0.005724098454493417;
            result[3] += 0.10532341156267888;
            result[4] += 0;
            result[5] += 0.0005724098454493417;
            result[6] += 0.0014310246136233543;
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
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)25) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
            result[0] += 0.5999587798845837;
            result[1] += 0;
            result[2] += 0.005770816158285243;
            result[3] += 0.39262159934047813;
            result[4] += 0.0006183017312448475;
            result[5] += 0.00020610057708161583;
            result[6] += 0.0008244023083264633;
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
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.5271565495207667;
            result[1] += 0;
            result[2] += 0.051118210862619806;
            result[3] += 0;
            result[4] += 0.4217252396166134;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
            result[0] += 0.17992424242424243;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8143939393939394;
            result[4] += 0.005681818181818182;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9954445491674522;
            result[1] += 0.0010995915802701857;
            result[2] += 0.002670436694941879;
            result[3] += 0.00047125353440150805;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0003141690229343387;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
            result[0] += 0.7407407407407408;
            result[1] += 0.01851851851851852;
            result[2] += 0;
            result[3] += 0.2098765432098766;
            result[4] += 0.01851851851851852;
            result[5] += 0.012345679012345682;
            result[6] += 0;
          } else {
            result[0] += 0.9988573915882257;
            result[1] += 0.00032645954622123076;
            result[2] += 0.00027204962185102565;
            result[3] += 0.0005440992437020513;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)101) ) ) {
            result[0] += 0.006456241032998565;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9935437589670014;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.044642857142857144;
            result[3] += 0;
            result[4] += 0.9553571428571429;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
            result[0] += 0.9584086799276673;
            result[1] += 0;
            result[2] += 0.009945750452079566;
            result[3] += 0.02802893309222423;
            result[4] += 0;
            result[5] += 0.00135623869801085;
            result[6] += 0.0022603978300180833;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8583333333333333;
            result[4] += 0.125;
            result[5] += 0.016666666666666666;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)183) ) ) {
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
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
            result[0] += 0.3589041095890411;
            result[1] += 0;
            result[2] += 0.01643835616438356;
            result[3] += 0.6246575342465753;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.1485981308411215;
            result[1] += 0.012149532710280374;
            result[2] += 0;
            result[3] += 0.8392523364485981;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)95) ) ) {
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
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
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
            result[3] += 0.9954887218045113;
            result[4] += 0.0030075187969924814;
            result[5] += 0.0015037593984962407;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)13) ) ) {
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
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)26) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-156.5) ) ) {
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
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
            result[2] += 0.24193548387096775;
            result[3] += 0;
            result[4] += 0.7419354838709677;
            result[5] += 0.016129032258064516;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
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
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
            result[0] += 0.6257668711656442;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.37423312883435583;
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
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
            result[0] += 0.9969579843962494;
            result[1] += 0.0005368262830148165;
            result[2] += 0.0013599599169708682;
            result[3] += 0.0009304988905590151;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00021473051320592657;
          } else {
            result[0] += 0.8255813953488372;
            result[1] += 0;
            result[2] += 0.1744186046511628;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)61) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)89) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05116279069767442;
            result[3] += 0.9488372093023256;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.8314606741573034;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.16853932584269662;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
            result[0] += 0.18518518518518517;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8148148148148148;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.001851851851851852;
            result[1] += 0.009259259259259259;
            result[2] += 0;
            result[3] += 0.9888888888888889;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)102.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.75;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)28.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9867080194949048;
            result[1] += 0;
            result[2] += 0.008418254319893665;
            result[3] += 0.0026583961010190524;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0022153300841825435;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)75) ) ) {
            result[0] += 0.8571428571428571;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.14285714285714285;
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
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)67.5) ) ) {
            result[0] += 0.6;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.0006700167504187605;
            result[2] += 0;
            result[3] += 0.9989949748743718;
            result[4] += 0;
            result[5] += 0.00033500837520938025;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9836065573770492;
            result[5] += 0.01639344262295082;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8666666666666667;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.13333333333333333;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)62) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12) ) ) {
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)114) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)77.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
            result[0] += 0.9943760449916401;
            result[1] += 0.001823985408116735;
            result[2] += 0.0030399756801945585;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0007599939200486396;
          } else {
            result[0] += 0.9988106447296694;
            result[1] += 0.0003468952871797413;
            result[2] += 0.000545121165568165;
            result[3] += 0.0002973388175826354;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8888888888888888;
            result[3] += 0.1111111111111111;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9909297052154195;
            result[1] += 0;
            result[2] += 0.009070294784580499;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)27.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.05714285714285714;
            result[2] += 0;
            result[3] += 0.9428571428571428;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)134) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
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
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
            result[0] += 0.22510578279266572;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7748942172073343;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.7290242386575513;
            result[1] += 0;
            result[2] += 0.00435052827843381;
            result[3] += 0.2666252330640149;
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
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)27.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9690721649484536;
            result[1] += 0;
            result[2] += 0.02491408934707904;
            result[3] += 0.002577319587628866;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.003436426116838488;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-7.5) ) ) {
            result[0] += 0.3333333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.6666666666666666;
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
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)10.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)25) ) ) {
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
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)67.5) ) ) {
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
            result[3] += 0.9996102883865939;
            result[4] += 0;
            result[5] += 0.0003897116134060795;
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
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.8461538461538461;
            result[1] += 0.038461538461538464;
            result[2] += 0;
            result[3] += 0.11538461538461539;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)13) ) ) {
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
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)111) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
            result[0] += 0;
            result[1] += 0.25;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.75;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0044004400440044;
            result[3] += 0;
            result[4] += 0.9944994499449945;
            result[5] += 0.0011001100110011;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-41) ) ) {
            result[0] += 0;
            result[1] += 0.03968253968253968;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9603174603174603;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.007407407407407408;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9925925925925926;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9959455545902114;
            result[1] += 0;
            result[2] += 0.0026064291920069507;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0014480162177816392;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
            result[0] += 0.6762086513994912;
            result[1] += 0.00954198473282443;
            result[2] += 0.012086513994910944;
            result[3] += 0.2996183206106871;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0025445292620865146;
          } else {
            result[0] += 0.36034056577863227;
            result[1] += 0;
            result[2] += 0.0008239494644328481;
            result[3] += 0.6382861851139797;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0005492996429552321;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)38) ) ) {
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
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-195.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9569757727652465;
            result[1] += 0;
            result[2] += 0.007727652464494569;
            result[3] += 0.03467000835421888;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0006265664160401002;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
            result[0] += 0;
            result[1] += 0.008130081300813009;
            result[2] += 0.01987353206865402;
            result[3] += 0.971093044263776;
            result[4] += 0;
            result[5] += 0.0009033423667570009;
            result[6] += 0;
          } else {
            result[0] += 0.9947916666666666;
            result[1] += 0;
            result[2] += 0.005208333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
            result[0] += 0.9972875226039783;
            result[1] += 0;
            result[2] += 0.0027124773960217;
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
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9626556016597511;
            result[1] += 0;
            result[2] += 0.029045643153526972;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.008298755186721992;
          }
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
            result[0] += 0.9624060150375939;
            result[1] += 0;
            result[2] += 0.03759398496240601;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
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
            result[0] += 0.9997980409976774;
            result[1] += 0;
            result[2] += 0.00020195900232252852;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
            result[0] += 0.0022271714922049;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9955456570155903;
            result[5] += 0.0022271714922049;
            result[6] += 0;
          } else {
            result[0] += 0.017986510117411942;
            result[1] += 0.005745690731951037;
            result[2] += 0.014738945790657007;
            result[3] += 0.9600299775168624;
            result[4] += 0;
            result[5] += 0.0014988758431176618;
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
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
            result[0] += 0;
            result[1] += 0.08411214953271028;
            result[2] += 0;
            result[3] += 0.411214953271028;
            result[4] += 0.5046728971962616;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.072;
            result[4] += 0.928;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0.005025125628140704;
            result[2] += 0;
            result[3] += 0.09798994974874371;
            result[4] += 0.8969849246231156;
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
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)41) ) ) {
            result[0] += 0.9966234227830105;
            result[1] += 0;
            result[2] += 0.002488004265150169;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.000888572951839346;
          } else {
            result[0] += 0.9762611275964391;
            result[1] += 0;
            result[2] += 0.02373887240356083;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9543927028324533;
            result[1] += 0;
            result[2] += 0.008641382621219397;
            result[3] += 0.03360537686029765;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0033605376860297654;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)103.5) ) ) {
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
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.8571428571428571;
            result[1] += 0;
            result[2] += 0.14285714285714285;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            result[0] += 0.9860583016476553;
            result[1] += 0;
            result[2] += 0.010139416983523447;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0038022813688212928;
          } else {
            result[0] += 0.9994657168299198;
            result[1] += 0;
            result[2] += 0.0005342831700801424;
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)28.5) ) ) {
            result[0] += 0.6;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.4;
            result[6] += 0;
          } else {
            result[0] += 0.9935576234788833;
            result[1] += 0;
            result[2] += 0.0035790980672870437;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.002863278453829635;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42) ) ) {
            result[0] += 0;
            result[1] += 0.021645021645021644;
            result[2] += 0;
            result[3] += 0.9783549783549783;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.8338900698451261;
            result[1] += 0.00334041907075615;
            result[2] += 0.00334041907075615;
            result[3] += 0.15912541755238388;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00030367446097783184;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)112) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9971112181030333;
            result[4] += 0.002888781896966779;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9617021276595745;
            result[1] += 0.010638297872340427;
            result[2] += 0.027659574468085108;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)182) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
            result[0] += 0.021518987341772152;
            result[1] += 0.015189873417721518;
            result[2] += 0;
            result[3] += 0.7721518987341772;
            result[4] += 0.189873417721519;
            result[5] += 0.0012658227848101266;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.016722408026755852;
            result[3] += 0.018060200668896322;
            result[4] += 0.9638795986622074;
            result[5] += 0.0013377926421404682;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0019083969465648854;
            result[3] += 0.9933206106870229;
            result[4] += 0.0028625954198473282;
            result[5] += 0.0019083969465648854;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.039603960396039604;
            result[3] += 0;
            result[4] += 0.9603960396039604;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)27.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)105.5) ) ) {
            result[0] += 0.9954248366013072;
            result[1] += 0;
            result[2] += 0.00196078431372549;
            result[3] += 0.00261437908496732;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9410377358490566;
            result[1] += 0;
            result[2] += 0.054245283018867926;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0047169811320754715;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)8.5) ) ) {
            result[0] += 0.6666666666666666;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.3333333333333333;
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
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)25) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)46) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
            result[0] += 0.045454545454545456;
            result[1] += 0.2727272727272727;
            result[2] += 0.6363636363636364;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.045454545454545456;
            result[6] += 0;
          } else {
            result[0] += 0.0019755037534571317;
            result[1] += 0.0007902015013828526;
            result[2] += 0;
            result[3] += 0.99723429474516;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)60) ) ) {
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
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-3.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9990974729241877;
            result[1] += 0;
            result[2] += 0.0009025270758122744;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
            result[0] += 0.9974683544303797;
            result[1] += 0;
            result[2] += 0.002531645569620253;
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
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)55) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)38) ) ) {
            result[0] += 0.9915632754342432;
            result[1] += 0.0012406947890818859;
            result[2] += 0.00620347394540943;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0009925558312655087;
          } else {
            result[0] += 0;
            result[1] += 0.0027810885975367503;
            result[2] += 0.0031783869686134287;
            result[3] += 0.9940405244338498;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
            result[0] += 0.9537299338999057;
            result[1] += 0.0018885741265344668;
            result[2] += 0.012590494176896444;
            result[3] += 0.0311614730878187;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0006295247088448223;
          } else {
            result[0] += 0.649867374005305;
            result[1] += 0;
            result[2] += 0.005968169761273209;
            result[3] += 0.3421750663129973;
            result[4] += 0;
            result[5] += 0.001989389920424403;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78) ) ) {
            result[0] += 0;
            result[1] += 0.6111111111111112;
            result[2] += 0;
            result[3] += 0.3888888888888889;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0010504201680672268;
            result[3] += 0.9989495798319328;
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
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2306.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
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
            result[4] += 0.9925373134328358;
            result[5] += 0.007462686567164179;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)84) ) ) {
            result[0] += 0.0009041591320072334;
            result[1] += 0.0004520795660036167;
            result[2] += 0;
            result[3] += 0.9981916817359856;
            result[4] += 0;
            result[5] += 0.0004520795660036167;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8888888888888888;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.1111111111111111;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)32) ) ) {
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)77.5) ) ) {
            result[0] += 0.9980620877277978;
            result[1] += 0.0007453508739238997;
            result[2] += 0.0009689561361010695;
            result[3] += 7.453508739238997e-05;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00014907017478477995;
          } else {
            result[0] += 0.9573002754820937;
            result[1] += 0;
            result[2] += 0.041322314049586785;
            result[3] += 0.0013774104683195595;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += 0.8472755180353031;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.15272448196469685;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.32326863167984665;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6767313683201533;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47.5) ) ) {
            result[0] += 0.8661417322834646;
            result[1] += 0;
            result[2] += 0.13385826771653545;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9907635467980296;
            result[1] += 0;
            result[2] += 0.006157635467980296;
            result[3] += 0.0012315270935960591;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0018472906403940886;
          }
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)109) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0.010901883052527254;
            result[2] += 0;
            result[3] += 0.9890981169474727;
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
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)125.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
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
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.1;
            result[1] += 0.9;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)48) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)49.5) ) ) {
            result[0] += 0.6818181818181818;
            result[1] += 0;
            result[2] += 0.3181818181818182;
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
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
            result[2] += 0.02702702702702703;
            result[3] += 0.972972972972973;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)16) ) ) {
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-5.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
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
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
            result[0] += 0.9957142857142857;
            result[1] += 0;
            result[2] += 0.004285714285714286;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.7567567567567568;
            result[1] += 0;
            result[2] += 0.21621621621621623;
            result[3] += 0.02702702702702703;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)103.5) ) ) {
            result[0] += 0.2901023890784983;
            result[1] += 0.05460750853242321;
            result[2] += 0;
            result[3] += 0.6518771331058021;
            result[4] += 0.0034129692832764505;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.825503355704698;
            result[4] += 0.174496644295302;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)10) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.044126416219439475;
            result[1] += 0;
            result[2] += 0.0011926058437686344;
            result[3] += 0.9546809779367919;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)102) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)203) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)117) ) ) {
            result[0] += 0;
            result[1] += 0.02877697841726619;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9712230215827338;
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
            result[0] += 0.0019582245430809398;
            result[1] += 0.0006527415143603133;
            result[2] += 0.005221932114882507;
            result[3] += 0.9902088772845953;
            result[4] += 0;
            result[5] += 0.0019582245430809398;
            result[6] += 0;
          } else {
            result[0] += 0.9166666666666666;
            result[1] += 0;
            result[2] += 0.08333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)25) ) ) {
            result[0] += 0.9492333901192505;
            result[1] += 0;
            result[2] += 0.010221465076660987;
            result[3] += 0.037819420783645655;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00272572402044293;
          } else {
            result[0] += 0.9983345519538549;
            result[1] += 0.0006905516288894305;
            result[2] += 0.0005686895767324722;
            result[3] += 0.0004062068405231944;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
            result[0] += 0.4466529158072379;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.553347084192762;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9871607820250948;
            result[1] += 0;
            result[2] += 0.008754012255617158;
            result[3] += 0.0008754012255617158;
            result[4] += 0;
            result[5] += 0.0008754012255617158;
            result[6] += 0.0023344032681645753;
          }
        }
      }
    } else {
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
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)124.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)23) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
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
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.26666666666666666;
            result[1] += 0.7333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-108) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.005773672055427252;
            result[1] += 0.006928406466512702;
            result[2] += 0.013279445727482679;
            result[3] += 0.9740184757505773;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-1) ) ) {
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
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)56.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)18) ) ) {
            result[0] += 0.988139451299868;
            result[1] += 0;
            result[2] += 0.0005990176111177667;
            result[3] += 0.010902120522343356;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00035941056667066005;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9935483870967742;
            result[4] += 0;
            result[5] += 0.0064516129032258064;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
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
            result[2] += 0.007366482504604052;
            result[3] += 0.9447513812154696;
            result[4] += 0.04788213627992634;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.23323262839879155;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7667673716012084;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)40.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0958904109589041;
            result[3] += 0;
            result[4] += 0.8995433789954338;
            result[5] += 0.0045662100456621;
            result[6] += 0;
          } else {
            result[0] += 0.9878665318503539;
            result[1] += 0;
            result[2] += 0.00910010111223458;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.003033367037411527;
          }
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)3.5) ) ) {
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
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
            result[0] += 0.9926470588235294;
            result[1] += 0;
            result[2] += 0.0055147058823529415;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.001838235294117647;
          } else {
            result[0] += 0.9997092177958709;
            result[1] += 0;
            result[2] += 0.0002907822041291073;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)13) ) ) {
            result[0] += 0.004158004158004158;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9958419958419958;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.02459016393442623;
            result[2] += 0;
            result[3] += 0.9754098360655737;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
            result[0] += 0.761917372881356;
            result[1] += 0.0013241525423728813;
            result[2] += 0.0066207627118644065;
            result[3] += 0.1986228813559322;
            result[4] += 0.03045550847457627;
            result[5] += 0.00026483050847457627;
            result[6] += 0.0007944915254237289;
          } else {
            result[0] += 0.46018808777429454;
            result[1] += 0;
            result[2] += 0.0021943573667711595;
            result[3] += 0.5351097178683385;
            result[4] += 0.0021943573667711595;
            result[5] += 0.0003134796238244514;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4918.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
            result[0] += 0.9984317825405122;
            result[1] += 0;
            result[2] += 0.0015682174594877157;
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
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-310) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
            result[0] += 0.5094339622641509;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.48427672955974843;
            result[4] += 0.006289308176100629;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.0015957446808510637;
            result[1] += 0.006914893617021276;
            result[2] += 0.01675531914893617;
            result[3] += 0.9569148936170213;
            result[4] += 0.015691489361702126;
            result[5] += 0.002127659574468085;
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
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += 0.995850622406639;
            result[1] += 0;
            result[2] += 0.0022342802425789976;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.001915097350781998;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0007861635220125787;
            result[3] += 0.9992138364779874;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)32) ) ) {
            result[0] += 0.9739978331527628;
            result[1] += 0;
            result[2] += 0.005200433369447454;
            result[3] += 0.020368364030335862;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0004333694474539545;
          } else {
            result[0] += 0.8596491228070176;
            result[1] += 0;
            result[2] += 0.03859649122807018;
            result[3] += 0.08070175438596491;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.021052631578947368;
          }
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-13) ) ) {
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
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-2.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5174418604651163;
            result[4] += 0.48255813953488375;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3023255813953488;
            result[4] += 0.6976744186046512;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2815533980582524;
            result[4] += 0.7184466019417476;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.008368200836820083;
            result[1] += 0.03347280334728033;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9581589958158996;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.05;
            result[2] += 0;
            result[3] += 0.95;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-35) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)25.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.00030940594059405946;
            result[2] += 0;
            result[3] += 0.9978341584158417;
            result[4] += 0.0015470297029702973;
            result[5] += 0.00030940594059405946;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)33.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.1;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.16666666666666666;
            result[2] += 0.16666666666666666;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)77.5) ) ) {
            result[0] += 0.9982841455044612;
            result[1] += 0.0005719514985129262;
            result[2] += 0.0009913825974224052;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00015252039960344697;
          } else {
            result[0] += 0.9407806191117093;
            result[1] += 0;
            result[2] += 0.059219380888290714;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-26) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)148) ) ) {
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
            result[0] += 0;
            result[1] += 0.04205607476635514;
            result[2] += 0;
            result[3] += 0.9579439252336449;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.042105263157894736;
            result[3] += 0.9578947368421052;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9019455252918288;
            result[1] += 0;
            result[2] += 0.010505836575875487;
            result[3] += 0.0840466926070039;
            result[4] += 0;
            result[5] += 0.0015564202334630351;
            result[6] += 0.0019455252918287938;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.010869565217391304;
            result[3] += 0.9891304347826086;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0006207324643078833;
            result[3] += 0.9993792675356921;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)25.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.0006213109661385523;
            result[2] += 0;
            result[3] += 0.9990680335507922;
            result[4] += 0;
            result[5] += 0.00031065548306927616;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)22) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)13) ) ) {
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
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)74) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
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
            result[2] += 0.782608695652174;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.21739130434782608;
            result[6] += 0;
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
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
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35) ) ) {
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9993580141236893;
            result[1] += 0;
            result[2] += 0.0006419858763107211;
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
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)41) ) ) {
            result[0] += 0.9762840837032339;
            result[1] += 0.000507292327203551;
            result[2] += 0.0057070386810399495;
            result[3] += 0.015599239061509194;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0019023462270133164;
          } else {
            result[0] += 0.04417670682730924;
            result[1] += 0;
            result[2] += 0.15261044176706828;
            result[3] += 0.8032128514056225;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)103.5) ) ) {
            result[0] += 0;
            result[1] += 0.0032017075773745998;
            result[2] += 0;
            result[3] += 0.9967982924226254;
            result[4] += 0;
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
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-327) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.8674698795180723;
            result[1] += 0;
            result[2] += 0.13253012048192772;
            result[3] += 0;
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
            result[0] += 0.9995089313117672;
            result[1] += 0;
            result[2] += 0.0004910686882327666;
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
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
            result[0] += 0.013574660633484165;
            result[1] += 0.031674208144796386;
            result[2] += 0;
            result[3] += 0.9389140271493214;
            result[4] += 0.011312217194570137;
            result[5] += 0.004524886877828056;
            result[6] += 0;
          } else {
            result[0] += 0.9947347104090726;
            result[1] += 0;
            result[2] += 0.0032401782098015397;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0020251113811259624;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
            result[0] += 0;
            result[1] += 0.07339449541284404;
            result[2] += 0;
            result[3] += 0.9174311926605505;
            result[4] += 0.009174311926605505;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)112) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
            result[0] += 0.9406976744186047;
            result[1] += 0;
            result[2] += 0.0005813953488372094;
            result[3] += 0.058720930232558144;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.1973633191159364;
            result[1] += 0.002714230321830167;
            result[2] += 0.0077549437766576195;
            result[3] += 0.7921675067855758;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-115) ) ) {
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
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.592485549132948;
            result[1] += 0.004046242774566475;
            result[2] += 0.017919075144508675;
            result[3] += 0.38554913294797694;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.04891304347826087;
            result[3] += 0.9510869565217391;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9103600293901543;
            result[1] += 0;
            result[2] += 0.005878030859662013;
            result[3] += 0.07714915503306392;
            result[4] += 0.002571638501102131;
            result[5] += 0.0007347538574577516;
            result[6] += 0.0033063923585598823;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
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
            result[2] += 0.0014858841010401188;
            result[3] += 0;
            result[4] += 0.9955423476968797;
            result[5] += 0.0029717682020802376;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-5.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0027624309392265192;
            result[3] += 0.9972375690607734;
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
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
            result[0] += 0.0684931506849315;
            result[1] += 0;
            result[2] += 0.0958904109589041;
            result[3] += 0;
            result[4] += 0.8082191780821918;
            result[5] += 0.0273972602739726;
            result[6] += 0;
          } else {
            result[0] += 0.0012738853503184713;
            result[1] += 0;
            result[2] += 0.0015923566878980893;
            result[3] += 0.9968152866242038;
            result[4] += 0;
            result[5] += 0.0003184713375796178;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7751196172248804;
            result[4] += 0.22488038277511962;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.004372267332916927;
            result[2] += 0;
            result[3] += 0.014990630855715179;
            result[4] += 0.9806371018113679;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)41) ) ) {
            result[0] += 0.998031926525257;
            result[1] += 0.0005831328814053503;
            result[2] += 0.0009840367373715286;
            result[3] += 3.644580508783439e-05;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0003644580508783439;
          } else {
            result[0] += 0.9037656903765691;
            result[1] += 0;
            result[2] += 0.09623430962343096;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)83.5) ) ) {
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
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)104) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
            result[0] += 0;
            result[1] += 0.02857142857142857;
            result[2] += 0;
            result[3] += 0.9714285714285714;
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)49) ) ) {
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
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
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.42424242424242425;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5757575757575758;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
            result[0] += 0.9596005447117567;
            result[1] += 0;
            result[2] += 0.008624602814344077;
            result[3] += 0.029959146618247844;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0018157058556513845;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8907563025210085;
            result[4] += 0.10084033613445378;
            result[5] += 0.008403361344537815;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)34) ) ) {
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.966996699669967;
            result[1] += 0.033003300330033;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-5) ) ) {
            result[0] += 0.0015748031496062992;
            result[1] += 0.014173228346456693;
            result[2] += 0;
            result[3] += 0.984251968503937;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.2420091324200913;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7579908675799086;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
            result[0] += 0.6210235131396957;
            result[1] += 0;
            result[2] += 0.022821576763485476;
            result[3] += 0.3561549100968188;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.10576923076923077;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8942307692307693;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
            result[0] += 0.13306451612903225;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8669354838709677;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.994627988181574;
            result[1] += 0.0012087026591458502;
            result[2] += 0.0030889067955949504;
            result[3] += 0.00026860059092130003;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0008058017727639;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
            result[0] += 0.9988198470932321;
            result[1] += 0.00020524398378572527;
            result[2] += 0.0003591769716250192;
            result[3] += 0.0004617989635178819;
            result[4] += 0.00015393298783929397;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.7602739726027398;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.23972602739726026;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)20.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0.5;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.21428571428571427;
            result[3] += 0;
            result[4] += 0.7857142857142857;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)84) ) ) {
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
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
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
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.007962840079628402;
            result[3] += 0.9860650298606503;
            result[4] += 0.0046449900464499;
            result[5] += 0.0013271400132714001;
            result[6] += 0;
          } else {
            result[0] += 0.9870522227017695;
            result[1] += 0;
            result[2] += 0.009926629261976695;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0030211480362537764;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)191) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
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
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)5624.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9892761394101877;
            result[1] += 0;
            result[2] += 0.00938337801608579;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0013404825737265416;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9996232102486813;
            result[1] += 0;
            result[2] += 0.00037678975131876413;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
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
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)74) ) ) {
            result[0] += 0.03408146300914381;
            result[1] += 0.0029093931837073984;
            result[2] += 0.01662510390689942;
            result[3] += 0.9451371571072319;
            result[4] += 0;
            result[5] += 0.0012468827930174563;
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
            result[0] += 0.9075630252100841;
            result[1] += 0;
            result[2] += 0.011204481792717089;
            result[3] += 0.07282913165266108;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.008403361344537816;
          } else {
            result[0] += 0.9911634756995582;
            result[1] += 0;
            result[2] += 0.0042843754183960366;
            result[3] += 0.0036149417592716564;
            result[4] += 0;
            result[5] += 0.00013388673182487614;
            result[6] += 0.000803320390949257;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)101) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
            result[0] += 0;
            result[1] += 0.0068212824010914054;
            result[2] += 0;
            result[3] += 0.9918144611186903;
            result[4] += 0.001364256480218281;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9991071428571429;
            result[4] += 0;
            result[5] += 0.0008928571428571428;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
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
            result[2] += 0.6756756756756757;
            result[3] += 0;
            result[4] += 0.2702702702702703;
            result[5] += 0.05405405405405406;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)111.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
            result[0] += 0.2662807525325615;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7120115774240231;
            result[4] += 0.02170767004341534;
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
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
            result[0] += 0;
            result[1] += 0.04504504504504504;
            result[2] += 0;
            result[3] += 0.3963963963963964;
            result[4] += 0.5585585585585585;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.042682926829268296;
            result[4] += 0.9573170731707317;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.13383458646616542;
            result[1] += 0.03458646616541353;
            result[2] += 0;
            result[3] += 0.8315789473684211;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
            result[0] += 0.007502679528403001;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.015005359056806002;
            result[4] += 0.977491961414791;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.07453416149068323;
            result[1] += 0;
            result[2] += 0.055900621118012424;
            result[3] += 0.8695652173913043;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-6.5) ) ) {
            result[0] += 0.4;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0.8;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)50) ) ) {
            result[0] += 0.00055005500550055;
            result[1] += 0.0022002200220022;
            result[2] += 0;
            result[3] += 0.9966996699669967;
            result[4] += 0;
            result[5] += 0.00055005500550055;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)41) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
            result[0] += 0.7124463519313304;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2875536480686695;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9971308761862725;
            result[1] += 0.0004046200250128743;
            result[2] += 0.0010299418818509529;
            result[3] += 0.001140292797763555;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00029426910910027227;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)27.5) ) ) {
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
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)17) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13157894736842105;
            result[3] += 0;
            result[4] += 0.868421052631579;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.009399855386840203;
            result[2] += 0.01373825018076645;
            result[3] += 0.9768618944323934;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
            result[0] += 0.75;
            result[1] += 0.1;
            result[2] += 0.1;
            result[3] += 0.05;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9818621523579202;
            result[1] += 0;
            result[2] += 0.018137847642079808;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)102) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.0021929824561403508;
            result[1] += 0.007675438596491228;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9901315789473685;
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
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
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)34) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.008595988538681949;
            result[3] += 0.9888570518943012;
            result[4] += 0.001591849729385546;
            result[5] += 0.0009551098376313276;
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)68.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.931924882629108;
            result[1] += 0;
            result[2] += 0.04929577464788732;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.018779342723004695;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)113.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)124.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)22.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
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
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)106) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.2;
            result[1] += 0.8;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)8.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
            result[0] += 0.9897039897039897;
            result[1] += 0;
            result[2] += 0.010296010296010296;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.7636363636363637;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.03636363636363636;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-13) ) ) {
            result[0] += 0.13140726933830382;
            result[1] += 0.007455731593662628;
            result[2] += 0;
            result[3] += 0.5554520037278659;
            result[4] += 0.30568499534016774;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0016750418760469012;
            result[3] += 0.6806253489670575;
            result[4] += 0.3176996091568956;
            result[5] += 0;
            result[6] += 0;
          }
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
            result[0] += 0.996523754345307;
            result[1] += 0;
            result[2] += 0.0034762456546929316;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.968454258675079;
            result[1] += 0;
            result[2] += 0.02523659305993691;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.006309148264984228;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
            result[0] += 0.9996729888816219;
            result[1] += 0;
            result[2] += 0.0003270111183780249;
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
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
            result[0] += 0.41852756454989537;
            result[1] += 0.003489183531053734;
            result[2] += 0.006803907885554781;
            result[3] += 0.5532100488485695;
            result[4] += 0.01762037683182136;
            result[5] += 0;
            result[6] += 0.0003489183531053734;
          } else {
            result[0] += 0.9540816326530612;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04591836734693878;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
            result[0] += 0.0029850746268656717;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9970149253731343;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.07061958694203864;
            result[1] += 0;
            result[2] += 0.016655562958027982;
            result[3] += 0.9087275149900067;
            result[4] += 0;
            result[5] += 0.003997335109926716;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)42) ) ) {
            result[0] += 0.9989429175475687;
            result[1] += 0;
            result[2] += 0.0010570824524312897;
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)52.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9713818479149633;
            result[1] += 0;
            result[2] += 0.023712183156173346;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.004905968928863452;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
            result[0] += 0.9536082474226805;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.04639175257731959;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.0008143322475570034;
            result[2] += 0;
            result[3] += 0.9967426710097721;
            result[4] += 0.001221498371335505;
            result[5] += 0.001221498371335505;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)47) ) ) {
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
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7692307692307693;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.23076923076923078;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)20.5) ) ) {
          result[0] += 0;
          result[1] += 1;
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)99.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.8425925925925926;
            result[1] += 0.1574074074074074;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
            result[0] += 0.9770992366412213;
            result[1] += 0;
            result[2] += 0.022900763358778626;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.22413793103448276;
            result[3] += 0.7758620689655172;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)78) ) ) {
            result[0] += 0.9980725623582767;
            result[1] += 0.00045351473922902497;
            result[2] += 0.0011715797430083144;
            result[3] += 3.779289493575208e-05;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00026455026455026457;
          } else {
            result[0] += 0.82;
            result[1] += 0;
            result[2] += 0.18;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += 0.8037775445960126;
            result[1] += 0;
            result[2] += 0.014690451206715634;
            result[3] += 0.17733473242392445;
            result[4] += 0;
            result[5] += 0.001049317943336831;
            result[6] += 0.0031479538300104933;
          } else {
            result[0] += 0.884781269254467;
            result[1] += 0;
            result[2] += 0.004929143561306223;
            result[3] += 0.11028958718422674;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
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
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-9.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-165) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)3.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)6504) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.3333333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += 0.9918256130790191;
            result[1] += 0;
            result[2] += 0.008174386920980926;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9998066437217217;
            result[1] += 0;
            result[2] += 0.00011601376696701342;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 7.734251131134228e-05;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)3.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
            result[0] += 0.3994949494949495;
            result[1] += 0.004545454545454545;
            result[2] += 0.008585858585858586;
            result[3] += 0.5833333333333334;
            result[4] += 0.002777777777777778;
            result[5] += 0;
            result[6] += 0.0012626262626262627;
          } else {
            result[0] += 0.924924924924925;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.07507507507507508;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += 0.9495128432240921;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.049601417183348095;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0008857395925597874;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9037304452466908;
            result[4] += 0.09626955475330927;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)52.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91) ) ) {
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)74) ) ) {
            result[0] += 0.9897785349233391;
            result[1] += 0;
            result[2] += 0.004258943781942079;
            result[3] += 0.0045428733674048845;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0014196479273140264;
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
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)53) ) ) {
            result[0] += 0.09090909090909091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7272727272727273;
            result[5] += 0.18181818181818182;
            result[6] += 0;
          } else {
            result[0] += 0.00356102298478472;
            result[1] += 0.004208481709291033;
            result[2] += 0.012301715765619942;
            result[3] += 0.9624473939786339;
            result[4] += 0.016833926837164132;
            result[5] += 0.0006474587245063128;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)93) ) ) {
            result[0] += 0.9819376026272578;
            result[1] += 0;
            result[2] += 0.0180623973727422;
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
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-115) ) ) {
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
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-3.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.990990990990991;
            result[1] += 0;
            result[2] += 0.009009009009009009;
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
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-5.5) ) ) {
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
            result[4] += 0.9940828402366864;
            result[5] += 0.005917159763313609;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
            result[0] += 0.013317191283292978;
            result[1] += 0.003026634382566586;
            result[2] += 0.0018159806295399517;
            result[3] += 0.9818401937046005;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9523809523809523;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.047619047619047616;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
            result[0] += 0.8627450980392157;
            result[1] += 0;
            result[2] += 0.00392156862745098;
            result[3] += 0.13333333333333333;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.4572386808272778;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5427613191727222;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
            result[0] += 0.996186844613918;
            result[1] += 0;
            result[2] += 0.0038131553860819827;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9185779816513762;
            result[1] += 0;
            result[2] += 0.011467889908256881;
            result[3] += 0.0676605504587156;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0022935779816513763;
          }
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)3.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)204) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)2060.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            result[0] += 0.9705014749262537;
            result[1] += 0;
            result[2] += 0.02359882005899705;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0058997050147492625;
          } else {
            result[0] += 0.998006833712984;
            result[1] += 0;
            result[2] += 0.0019931662870159455;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
            result[0] += 0;
            result[1] += 0.022388059701492536;
            result[2] += 0;
            result[3] += 0.9776119402985075;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.004016064257028112;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9959839357429718;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
            result[0] += 0.02791380999020568;
            result[1] += 0.011753183153770812;
            result[2] += 0.021057786483839373;
            result[3] += 0.9353574926542605;
            result[4] += 0.0014691478942213516;
            result[5] += 0.002448579823702253;
            result[6] += 0;
          } else {
            result[0] += 0.7473424741950393;
            result[1] += 0;
            result[2] += 0.005238021876444308;
            result[3] += 0.24649514712679094;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0009243568017254661;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9881656804733728;
            result[4] += 0.011834319526627219;
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
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
            result[0] += 0.9876543209876543;
            result[1] += 0;
            result[2] += 0.012345679012345678;
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
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-7) ) ) {
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
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
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
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-13) ) ) {
            result[0] += 0.17177242888402625;
            result[1] += 0.0175054704595186;
            result[2] += 0;
            result[3] += 0.8107221006564551;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.00298804780876494;
            result[3] += 0.9970119521912351;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
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
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)84) ) ) {
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0.8571428571428571;
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
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)39) ) ) {
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
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)5624.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            result[0] += 0.9959370238699847;
            result[1] += 0;
            result[2] += 0.004062976130015236;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9997243660418964;
            result[1] += 0;
            result[2] += 0.0002756339581036384;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            result[0] += 0.967741935483871;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.03225806451612903;
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
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)25.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.031413612565445025;
            result[2] += 0;
            result[3] += 0.9685863874345549;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
            result[0] += 0.6807323063183747;
            result[1] += 0.0015628488501897744;
            result[2] += 0.0022326412145568207;
            result[3] += 0.3143558830096004;
            result[4] += 0.00022326412145568208;
            result[5] += 0.0006697923643670462;
            result[6] += 0.00022326412145568208;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.01699807568954458;
            result[3] += 0.9377806286080821;
            result[4] += 0.04361770365618987;
            result[5] += 0.001603592046183451;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)52.5) ) ) {
            result[0] += 0.8032786885245902;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.19672131147540983;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9826315789473684;
            result[1] += 0;
            result[2] += 0.0060526315789473685;
            result[3] += 0.008947368421052631;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.002368421052631579;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-25) ) ) {
            result[0] += 0.6666666666666666;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.00034071550255536625;
            result[2] += 0;
            result[3] += 0.9989778534923339;
            result[4] += 0;
            result[5] += 0.0006814310051107325;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)74) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7727272727272727;
            result[3] += 0;
            result[4] += 0.045454545454545456;
            result[5] += 0.18181818181818182;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)25.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3644859813084112;
            result[4] += 0.6355140186915887;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.07692307692307693;
            result[4] += 0.9230769230769231;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
            result[0] += 0;
            result[1] += 0.0313588850174216;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9686411149825784;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)95.5) ) ) {
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
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            result[0] += 0.9876237623762376;
            result[1] += 0;
            result[2] += 0.012376237623762377;
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
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9966101694915255;
            result[1] += 0;
            result[2] += 0.003389830508474576;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
            result[0] += 0.9989517819706499;
            result[1] += 0;
            result[2] += 0.0010482180293501049;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)51.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)38) ) ) {
            result[0] += 0.9920586438607208;
            result[1] += 0.0036652412950519244;
            result[2] += 0.002443494196701283;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0018326206475259622;
          } else {
            result[0] += 0;
            result[1] += 0.0026082420448617634;
            result[2] += 0.006781429316640584;
            result[3] += 0.9906103286384976;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += 0.9900914634146342;
            result[1] += 0;
            result[2] += 0.007621951219512195;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0022865853658536584;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)81.5) ) ) {
            result[0] += 0.07692307692307693;
            result[1] += 0;
            result[2] += 0.1346153846153846;
            result[3] += 0.7884615384615384;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.014625228519195612;
            result[2] += 0.003656307129798903;
            result[3] += 0.9817184643510055;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += 0.9831320682384512;
            result[1] += 0;
            result[2] += 0.010350776308223116;
            result[3] += 0.0055587502396013035;
            result[4] += 0;
            result[5] += 0.00038336208548974505;
            result[6] += 0.0005750431282346176;
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
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15) ) ) {
            result[0] += 0.2;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6;
            result[5] += 0.2;
            result[6] += 0;
          } else {
            result[0] += 0.0003214400514304082;
            result[1] += 0.0003214400514304082;
            result[2] += 0;
            result[3] += 0.9993571198971392;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9923664122137404;
            result[5] += 0.007633587786259542;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6470588235294118;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.35294117647058826;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.984375;
            result[1] += 0;
            result[2] += 0.015625;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)63) ) ) {
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
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
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
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9795918367346939;
            result[1] += 0;
            result[2] += 0.02040816326530612;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
            result[0] += 0.9968421052631579;
            result[1] += 0;
            result[2] += 0.002105263157894737;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0010526315789473684;
          } else {
            result[0] += 0.9995787256450763;
            result[1] += 0;
            result[2] += 0.00042127435492364404;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85.5) ) ) {
            result[0] += 0.9875610839626833;
            result[1] += 0.00444247001332741;
            result[2] += 0.005775211017325633;
            result[3] += 0.000888494002665482;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0013327410039982231;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.005578281889178133;
            result[3] += 0.9944217181108219;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)94.5) ) ) {
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
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
            result[0] += 0.06299212598425197;
            result[1] += 0;
            result[2] += 0.05511811023622047;
            result[3] += 0.8818897637795275;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9833155080213903;
            result[1] += 0;
            result[2] += 0.007272727272727273;
            result[3] += 0.008128342245989306;
            result[4] += 0;
            result[5] += 0.000213903743315508;
            result[6] += 0.0010695187165775401;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
            result[0] += 0.8898678414096917;
            result[1] += 0.06607929515418502;
            result[2] += 0.04405286343612335;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02131782945736434;
            result[3] += 0.9786821705426356;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)39) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)41.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9819277108433735;
            result[1] += 0;
            result[2] += 0.018072289156626505;
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
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
            result[0] += 0;
            result[1] += 0.005351409204423832;
            result[2] += 0.00392436674991081;
            result[3] += 0.8954691402069211;
            result[4] += 0.0952550838387442;
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
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)74) ) ) {
            result[0] += 0.3046875;
            result[1] += 0;
            result[2] += 0.1796875;
            result[3] += 0.515625;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.01736806947227789;
            result[4] += 0.9826319305277221;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)27) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)25) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)22) ) ) {
            result[0] += 0.990174672489083;
            result[1] += 0;
            result[2] += 0.008733624454148471;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.001091703056768559;
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
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
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
            result[3] += 0.9921259842519685;
            result[4] += 0;
            result[5] += 0.007874015748031496;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)9) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)1697.5) ) ) {
            result[0] += 0.9986792141324088;
            result[1] += 8.254911672445105e-05;
            result[2] += 0.0005365692587089319;
            result[3] += 0.0006603929337956084;
            result[4] += 0;
            result[5] += 0;
            result[6] += 4.127455836222553e-05;
          } else {
            result[0] += 0.6428571428571429;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.35714285714285715;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.015151515151515152;
            result[1] += 0.03333333333333333;
            result[2] += 0;
            result[3] += 0.9484848484848485;
            result[4] += 0;
            result[5] += 0.0030303030303030303;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)100.5) ) ) {
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
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)63) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.46666666666666673;
            result[3] += 0;
            result[4] += 0.3666666666666667;
            result[5] += 0.16666666666666669;
            result[6] += 0;
          } else {
            result[0] += 0.8253968253968254;
            result[1] += 0;
            result[2] += 0.1746031746031746;
            result[3] += 0;
            result[4] += 0;
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
            result[0] += 0.9421338155515371;
            result[1] += 0;
            result[2] += 0.04701627486437613;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0108499095840868;
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
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)32) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)19) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
            result[0] += 0.996319018404908;
            result[1] += 0;
            result[2] += 0.0036809815950920245;
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
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)23) ) ) {
            result[0] += 0.9949458483754513;
            result[1] += 0.002888086642599278;
            result[2] += 0.0018050541516245488;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00036101083032490973;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
            result[0] += 0.28792569659442724;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7120743034055728;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9971031286210892;
            result[1] += 0;
            result[2] += 0.002510621861722673;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0003862495171881035;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4979) ) ) {
            result[0] += 0.9983671171171171;
            result[1] += 0.00028153153153153153;
            result[2] += 0.00028153153153153153;
            result[3] += 0.0006193693693693693;
            result[4] += 5.630630630630631e-05;
            result[5] += 0.00039414414414414413;
            result[6] += 0;
          } else {
            result[0] += 0.5714285714285714;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.42857142857142855;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)115.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
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
            result[0] += 0.039473684210526314;
            result[1] += 0.09210526315789473;
            result[2] += 0;
            result[3] += 0.868421052631579;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
            result[0] += 0.23309466984884647;
            result[1] += 0.002386634844868735;
            result[2] += 0.007955449482895784;
            result[3] += 0.7430389817024662;
            result[4] += 0.013524264120922832;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.019308943089430895;
            result[3] += 0.05589430894308943;
            result[4] += 0.9247967479674797;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)52) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.01;
            result[3] += 0.98875;
            result[4] += 0;
            result[5] += 0.00125;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.17391304347826086;
            result[3] += 0;
            result[4] += 0.8260869565217391;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)94.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.6477449455676516;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3522550544323484;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
            result[0] += 0.1583635763774332;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8416364236225669;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)107.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.15384615384615385;
            result[4] += 0.46153846153846156;
            result[5] += 0.38461538461538464;
            result[6] += 0;
          } else {
            result[0] += 0.9894212818917237;
            result[1] += 0;
            result[2] += 0.0074673304293715;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0031113876789047915;
          }
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-118) ) ) {
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
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
            result[0] += 0.9988331388564761;
            result[1] += 0;
            result[2] += 0.0011668611435239206;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9902912621359223;
            result[1] += 0;
            result[2] += 0.007281553398058253;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0024271844660194173;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += 0.9894179894179894;
            result[1] += 0;
            result[2] += 0.010582010582010581;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9998419138957686;
            result[1] += 0;
            result[2] += 0.00015808610423143806;
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
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
            result[0] += 0.0010204081632653062;
            result[1] += 0.007142857142857143;
            result[2] += 0.00816326530612245;
            result[3] += 0.9801020408163266;
            result[4] += 0.002551020408163265;
            result[5] += 0.0010204081632653062;
            result[6] += 0;
          } else {
            result[0] += 0.9943049443437743;
            result[1] += 0;
            result[2] += 0.004659590991457417;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0010354646647683149;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
            result[0] += 0;
            result[1] += 0.002754820936639119;
            result[2] += 0.03443526170798899;
            result[3] += 0.578512396694215;
            result[4] += 0.3801652892561984;
            result[5] += 0.004132231404958679;
            result[6] += 0;
          } else {
            result[0] += 0.991547131147541;
            result[1] += 0;
            result[2] += 0.006915983606557377;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0015368852459016393;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)21) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
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
            result[2] += 0.0015015015015015015;
            result[3] += 0;
            result[4] += 0.9924924924924925;
            result[5] += 0.006006006006006006;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
            result[0] += 0;
            result[1] += 0.007633587786259542;
            result[2] += 0.03816793893129771;
            result[3] += 0.9541984732824428;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
            result[0] += 0.5103092783505154;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.4896907216494845;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.1738095238095238;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8261904761904761;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
            result[0] += 0;
            result[1] += 0.02180232558139535;
            result[2] += 0.0029069767441860465;
            result[3] += 0.9752906976744186;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.957983193277311;
            result[1] += 0;
            result[2] += 0.04201680672268908;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)115.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.009584664536741214;
            result[1] += 0.022364217252396165;
            result[2] += 0;
            result[3] += 0.20447284345047922;
            result[4] += 0.7635782747603834;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1781609195402299;
            result[4] += 0.8218390804597702;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0018450184501845018;
            result[4] += 0.9981549815498155;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-5.5) ) ) {
            result[0] += 0.7894736842105263;
            result[1] += 0;
            result[2] += 0.21052631578947367;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9879194630872483;
            result[1] += 0;
            result[2] += 0.012080536912751677;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-8) ) ) {
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
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-41) ) ) {
            result[0] += 0;
            result[1] += 0.6428571428571429;
            result[2] += 0;
            result[3] += 0.35714285714285715;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.006746237675142709;
            result[2] += 0;
            result[3] += 0.9932537623248573;
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
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9974779319041615;
            result[4] += 0;
            result[5] += 0.0025220680958385876;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
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
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)50.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47.5) ) ) {
            result[0] += 0.9966815994690559;
            result[1] += 0.0009955201592832255;
            result[2] += 0.0009125601460096233;
            result[3] += 0.0009955201592832255;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00041480006636801064;
          } else {
            result[0] += 0.966984592809978;
            result[1] += 0.007336757153338224;
            result[2] += 0.0007336757153338225;
            result[3] += 0.024944974321349962;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)41.5) ) ) {
            result[0] += 0.5143478260869565;
            result[1] += 0;
            result[2] += 0.00826086956521739;
            result[3] += 0.4743478260869565;
            result[4] += 0;
            result[5] += 0.002173913043478261;
            result[6] += 0.0008695652173913044;
          } else {
            result[0] += 0.9661702816445452;
            result[1] += 0;
            result[2] += 0.004370346390417611;
            result[3] += 0.02865004855940434;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0008093234056328909;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)41.5) ) ) {
            result[0] += 0.9979379317455408;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0020620682544592226;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0782608695652174;
            result[3] += 0.9217391304347826;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += 0.488556338028169;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.511443661971831;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.6992014196983141;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3007985803016859;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-305.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            result[0] += 0.9955533596837944;
            result[1] += 0;
            result[2] += 0.003952569169960474;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0004940711462450593;
          } else {
            result[0] += 0.9997831116252169;
            result[1] += 0;
            result[2] += 0.00021688837478311162;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
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
            result[0] += 0.9995284131101155;
            result[1] += 0;
            result[2] += 0.0004715868898844612;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)25) ) ) {
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
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
            result[0] += 0.9036144578313253;
            result[1] += 0.0963855421686747;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.0010943912448700412;
            result[1] += 0.006839945280437757;
            result[2] += 0.00820793433652531;
            result[3] += 0.9813953488372094;
            result[4] += 0;
            result[5] += 0.0024623803009575927;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)16.5) ) ) {
            result[0] += 0.8583815028901735;
            result[1] += 0;
            result[2] += 0.002890173410404624;
            result[3] += 0.13872832369942195;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9672131147540983;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.01639344262295082;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.01639344262295082;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
            result[0] += 0.9772434521253757;
            result[1] += 0;
            result[2] += 0.0098754830399313;
            result[3] += 0.009660798626019752;
            result[4] += 0;
            result[5] += 0.0006440532417346501;
            result[6] += 0.0025762129669386004;
          } else {
            result[0] += 0.998671096345515;
            result[1] += 0;
            result[2] += 0.00132890365448505;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.0011820330969267141;
            result[2] += 0;
            result[3] += 0.9972419227738378;
            result[4] += 0.00039401103230890473;
            result[5] += 0.0011820330969267141;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)9) ) ) {
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
            result[2] += 0.9696969696969697;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.030303030303030304;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)101) ) ) {
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
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)25.5) ) ) {
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
            result[4] += 0.9927797833935018;
            result[5] += 0.007220216606498195;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.0005656108597285068;
            result[1] += 0.003959276018099547;
            result[2] += 0;
            result[3] += 0.9946266968325792;
            result[4] += 0;
            result[5] += 0.0008484162895927602;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)33) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)3184.5) ) ) {
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
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
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
            result[2] += 0.21212121212121213;
            result[3] += 0;
            result[4] += 0.7878787878787878;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)77.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
            result[0] += 0.9993183035496908;
            result[1] += 0.00014607781078054244;
            result[2] += 0.0004382334323416273;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 9.738520718702829e-05;
          } else {
            result[0] += 0.99591211037302;
            result[1] += 0.0015329586101175269;
            result[2] += 0.0022142735479475386;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00034065746891500596;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
            result[0] += 0.9751824817518249;
            result[1] += 0;
            result[2] += 0.024817518248175182;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.25;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.07142857142857142;
            result[1] += 0.3333333333333333;
            result[2] += 0;
            result[3] += 0.5952380952380952;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
            result[0] += 0.20408163265306123;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7959183673469388;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6296296296296297;
            result[3] += 0.37037037037037035;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += 0.6744186046511628;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.32558139534883723;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.997808619430241;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.002191380569758948;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)23) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47.5) ) ) {
            result[0] += 0.8549618320610687;
            result[1] += 0;
            result[2] += 0.1450381679389313;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9914004914004915;
            result[1] += 0;
            result[2] += 0.00644963144963145;
            result[3] += 0.0006142506142506143;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0015356265356265358;
          }
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-16.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
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
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)106.5) ) ) {
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
            result[2] += 0.005076142131979695;
            result[3] += 0;
            result[4] += 0.9949238578680203;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)33.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-3.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9807692307692307;
            result[1] += 0;
            result[2] += 0.019230769230769232;
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
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
            result[0] += 0.016475644699140403;
            result[1] += 0;
            result[2] += 0.024355300859598857;
            result[3] += 0.7979942693409743;
            result[4] += 0.15974212034383958;
            result[5] += 0.0014326647564469916;
            result[6] += 0;
          } else {
            result[0] += 0.741374699117411;
            result[1] += 0;
            result[2] += 0.006151377373629313;
            result[3] += 0.2516715699384862;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0008023535704733886;
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
            result[0] += 0.13513513513513514;
            result[1] += 0.032432432432432434;
            result[2] += 0;
            result[3] += 0.8324324324324325;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
            result[0] += 0.46153846153846156;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5384615384615384;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.957983193277311;
            result[1] += 0;
            result[2] += 0.01680672268907563;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.025210084033613446;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)11.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.152317880794702;
            result[1] += 0;
            result[2] += 0.046357615894039736;
            result[3] += 0.8013245033112583;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-29) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)108) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)21) ) ) {
            result[0] += 0;
            result[1] += 1;
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
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)113) ) ) {
            result[0] += 0;
            result[1] += 0.02702702702702703;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.972972972972973;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
            result[0] += 0.003629764065335753;
            result[1] += 0.011796733212341199;
            result[2] += 0.019056261343012703;
            result[3] += 0.9655172413793104;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.18802228412256267;
            result[4] += 0.8119777158774373;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
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
            result[2] += 0.625;
            result[3] += 0.375;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)27.5) ) ) {
            result[0] += 0.9637681159420289;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.036231884057971016;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.0020325203252032527;
            result[2] += 0.010162601626016262;
            result[3] += 0.8699186991869919;
            result[4] += 0.11382113821138212;
            result[5] += 0.004065040650406505;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
            result[0] += 0.996175378304972;
            result[1] += 0.0008868687988470706;
            result[2] += 0.0010531566986308964;
            result[3] += 0.0018291668976220831;
            result[4] += 0;
            result[5] += 0;
            result[6] += 5.542929992794191e-05;
          } else {
            result[0] += 0.8902077151335311;
            result[1] += 0;
            result[2] += 0.02967359050445104;
            result[3] += 0.08011869436201781;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
            result[0] += 0.5070293398533008;
            result[1] += 0;
            result[2] += 0.0003056234718826406;
            result[3] += 0.49266503667481665;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9359416954353664;
            result[1] += 0;
            result[2] += 0.001917913310318374;
            result[3] += 0.059838895281933265;
            result[4] += 0.0023014959723820488;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)191) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
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
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-305.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)3.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-141) ) ) {
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
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
            result[0] += 0.9847328244274809;
            result[1] += 0;
            result[2] += 0.013358778625954198;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0019083969465648854;
          } else {
            result[0] += 0.9994791666666667;
            result[1] += 0;
            result[2] += 0.0005208333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
            result[0] += 0.9981464318813716;
            result[1] += 0;
            result[2] += 0.0018535681186283596;
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
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)115.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
            result[0] += 0.5886524822695035;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.375886524822695;
            result[4] += 0.03546099290780142;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.0026785714285714286;
            result[1] += 0.008928571428571428;
            result[2] += 0.005654761904761905;
            result[3] += 0.9809523809523809;
            result[4] += 0.0011904761904761906;
            result[5] += 0.0005952380952380953;
            result[6] += 0;
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
            result[0] += 0;
            result[1] += 0.10526315789473684;
            result[2] += 0;
            result[3] += 0.8947368421052632;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
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
            result[2] += 0.3333333333333333;
            result[3] += 0.6491228070175439;
            result[4] += 0;
            result[5] += 0.017543859649122806;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)10) ) ) {
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
            result[2] += 0.049723756906077346;
            result[3] += 0.9502762430939227;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)58.5) ) ) {
            result[0] += 0.8821428571428572;
            result[1] += 0;
            result[2] += 0.006250000000000001;
            result[3] += 0.10714285714285715;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.004464285714285715;
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
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += 0.995897903372835;
            result[1] += 0;
            result[2] += 0.0027347310847766638;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0013673655423883319;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)84.5) ) ) {
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
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)32) ) ) {
            result[0] += 0.990985189954926;
            result[1] += 0;
            result[2] += 0.005580596694569651;
            result[3] += 0.0032195750160978753;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00021463833440652503;
          } else {
            result[0] += 0.8735294117647059;
            result[1] += 0;
            result[2] += 0.029411764705882353;
            result[3] += 0.09117647058823529;
            result[4] += 0;
            result[5] += 0.0029411764705882353;
            result[6] += 0.0029411764705882353;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)29) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-9) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)80.5) ) ) {
            result[0] += 0;
            result[1] += 0.0004950495049504951;
            result[2] += 0;
            result[3] += 0.995049504950495;
            result[4] += 0.0019801980198019802;
            result[5] += 0.0024752475247524753;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0809248554913295;
            result[3] += 0.7283236994219654;
            result[4] += 0.19075144508670522;
            result[5] += 0;
            result[6] += 0;
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
            result[0] += 0;
            result[1] += 0.00821917808219178;
            result[2] += 0;
            result[3] += 0.9917808219178083;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)3.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
            result[0] += 0.9970897579904013;
            result[1] += 0.0007147962830593281;
            result[2] += 0.0018891044623710815;
            result[3] += 0.00015317063208414173;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00015317063208414173;
          } else {
            result[0] += 0.6772486772486773;
            result[1] += 0;
            result[2] += 0.10052910052910054;
            result[3] += 0.22222222222222224;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
            result[0] += 0.9998764974681981;
            result[1] += 0;
            result[2] += 0.00012350253180190194;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.7407407407407407;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.25925925925925924;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
            result[0] += 0;
            result[1] += 0.24;
            result[2] += 0;
            result[3] += 0.76;
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5555555555555556;
            result[3] += 0;
            result[4] += 0.2962962962962963;
            result[5] += 0.14814814814814814;
            result[6] += 0;
          } else {
            result[0] += 0.8928571428571429;
            result[1] += 0;
            result[2] += 0.03571428571428571;
            result[3] += 0;
            result[4] += 0.07142857142857142;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)107.5) ) ) {
            result[0] += 0.15852660300136426;
            result[1] += 0;
            result[2] += 0.0019099590723055935;
            result[3] += 0.8395634379263301;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)111.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)68.5) ) ) {
            result[0] += 0.9997722095671981;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.00022779043280182233;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9618441971383148;
            result[1] += 0;
            result[2] += 0.02384737678855326;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.014308426073131956;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)39) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
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
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-118) ) ) {
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
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)67) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
            result[0] += 0.3;
            result[1] += 0;
            result[2] += 0.1;
            result[3] += 0;
            result[4] += 0.1;
            result[5] += 0.5;
            result[6] += 0;
          } else {
            result[0] += 0.0008699434536755112;
            result[1] += 0.0004349717268377556;
            result[2] += 0.0021748586341887783;
            result[3] += 0.9952153110047848;
            result[4] += 0;
            result[5] += 0.001304915180513267;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)74) ) ) {
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
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)10) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
            result[0] += 0.8505747126436781;
            result[1] += 0;
            result[2] += 0.14942528735632185;
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
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)47) ) ) {
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)77.5) ) ) {
            result[0] += 0.9985094648978984;
            result[1] += 0.000409897153077955;
            result[2] += 0.0007452675510508272;
            result[3] += 0.00011179013265762409;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00022358026531524818;
          } else {
            result[0] += 0.9511494252873564;
            result[1] += 0;
            result[2] += 0.04741379310344827;
            result[3] += 0.0014367816091954023;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += 0.8557844690966719;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.14421553090332806;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.3288855942673585;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6711144057326415;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)40) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9913329348475792;
            result[1] += 0;
            result[2] += 0.007172743574417215;
            result[3] += 0.00029886431560071725;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.001195457262402869;
          }
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)100) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8;
            result[2] += 0;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.76;
            result[1] += 0;
            result[2] += 0.24;
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)18.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.022556390977443608;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9774436090225563;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
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
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)115) ) ) {
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
            result[3] += 0.010964912280701754;
            result[4] += 0.9890350877192983;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)27) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11428571428571428;
            result[3] += 0;
            result[4] += 0.8;
            result[5] += 0.08571428571428572;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.0006868131868131869;
            result[2] += 0.0020604395604395605;
            result[3] += 0.9965659340659341;
            result[4] += 0;
            result[5] += 0.0006868131868131869;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)61) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)67) ) ) {
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
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95) ) ) {
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
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-20) ) ) {
            result[0] += 0;
            result[1] += 1;
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)51) ) ) {
            result[0] += 0.9996793844180827;
            result[1] += 0;
            result[2] += 0.0003206155819172812;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9968;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0032;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
            result[0] += 0.9991270732011472;
            result[1] += 0;
            result[2] += 0.0006858710562414266;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00018705574261129816;
          } else {
            result[0] += 0.68;
            result[1] += 0.02909090909090909;
            result[2] += 0;
            result[3] += 0.2909090909090909;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
            result[0] += 0.08638743455497382;
            result[1] += 0.031413612565445025;
            result[2] += 0.06806282722513089;
            result[3] += 0.8141361256544503;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9375933609958507;
            result[1] += 0;
            result[2] += 0.002240663900414938;
            result[3] += 0.05941908713692946;
            result[4] += 0;
            result[5] += 0.00024896265560165974;
            result[6] += 0.0004979253112033195;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
            result[0] += 0.0677361853832442;
            result[1] += 0;
            result[2] += 0.007575757575757576;
            result[3] += 0.9246880570409982;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.995895330938943;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.004104669061056952;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.043243243243243246;
            result[3] += 0.9567567567567568;
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
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
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
            result[0] += 0.9712918660287081;
            result[1] += 0;
            result[2] += 0.028708133971291867;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
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
            result[1] += 0.018656716417910446;
            result[2] += 0;
            result[3] += 0.9813432835820896;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
            result[0] += 0.11564625850340136;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8843537414965986;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.7333333333333333;
            result[1] += 0.005128205128205128;
            result[2] += 0;
            result[3] += 0.24615384615384617;
            result[4] += 0.015384615384615385;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
            result[0] += 0.8743455497382199;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1256544502617801;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9977939554379;
            result[1] += 0.0005515111405250387;
            result[2] += 0.0011030222810500775;
            result[3] += 0.00022060445621001546;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0003309066843150232;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)3.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.993730407523511;
            result[4] += 0.005224660397074191;
            result[5] += 0.0010449320794148384;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9555555555555556;
            result[4] += 0.044444444444444446;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.18181818181818182;
            result[3] += 0;
            result[4] += 0.7954545454545454;
            result[5] += 0.022727272727272728;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.025280898876404494;
            result[3] += 0;
            result[4] += 0.9747191011235955;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.003374578177727784;
            result[3] += 0.9966254218222722;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)48.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)67) ) ) {
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
            result[3] += 0.8358208955223881;
            result[4] += 0.13432835820895525;
            result[5] += 0.02985074626865672;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)74) ) ) {
            result[0] += 0.9942242058283014;
            result[1] += 0;
            result[2] += 0.004463113678130743;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0013126804935678655;
          } else {
            result[0] += 0.6666666666666666;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)5624.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9868852459016394;
            result[1] += 0;
            result[2] += 0.007650273224043716;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00546448087431694;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9998292349726776;
            result[1] += 0;
            result[2] += 0.00017076502732240437;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)13.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)39) ) ) {
            result[0] += 0.9995429616087751;
            result[1] += 0;
            result[2] += 0.0004570383912248629;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.15913120567375888;
            result[1] += 0;
            result[2] += 0.023492907801418442;
            result[3] += 0.7070035460992908;
            result[4] += 0.11037234042553193;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
            result[0] += 0.9904652936689551;
            result[1] += 0.0009534706331045005;
            result[2] += 0.006864988558352403;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0017162471395881008;
          } else {
            result[0] += 0;
            result[1] += 0.0038119440914866584;
            result[2] += 0;
            result[3] += 0.9834815756035579;
            result[4] += 0.010165184243964422;
            result[5] += 0.0025412960609911056;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
            result[0] += 0.5675675675675675;
            result[1] += 0;
            result[2] += 0.006756756756756757;
            result[3] += 0.42567567567567566;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.010775862068965518;
            result[2] += 0;
            result[3] += 0.9892241379310345;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-26) ) ) {
            result[0] += 0.0011001100110011;
            result[1] += 0.011001100110011002;
            result[2] += 0;
            result[3] += 0.18041804180418042;
            result[4] += 0.8074807480748075;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)41.5) ) ) {
            result[0] += 0;
            result[1] += 0.03;
            result[2] += 0.016666666666666666;
            result[3] += 0.9533333333333334;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)34.5) ) ) {
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
            result[2] += 0.0017780938833570413;
            result[3] += 0.998221906116643;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)1725.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += 0.9835526315789473;
            result[1] += 0;
            result[2] += 0.01644736842105263;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9991883116883117;
            result[1] += 0;
            result[2] += 0.0008116883116883117;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9978354978354979;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0021645021645021645;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-305.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.8333333333333334;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16666666666666666;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9956584659913169;
            result[5] += 0.004341534008683068;
            result[6] += 0;
          } else {
            result[0] += 0.0044444444444444444;
            result[1] += 0.022222222222222223;
            result[2] += 0;
            result[3] += 0.9733333333333334;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.02402069475240207;
            result[1] += 0.005173688100517369;
            result[2] += 0.022912047302291204;
            result[3] += 0.9464153732446415;
            result[4] += 0;
            result[5] += 0.0014781966001478197;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)94.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
            result[0] += 0.9960365328278477;
            result[1] += 0;
            result[2] += 0.0034464931931759437;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0005169739789763915;
          } else {
            result[0] += 0.7244582043343654;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2755417956656347;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += 0.9690239625949737;
            result[1] += 0;
            result[2] += 0.013442431326709527;
            result[3] += 0.014026884862653419;
            result[4] += 0;
            result[5] += 0.0005844535359438924;
            result[6] += 0.0029222676797194622;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0007707129094412332;
            result[3] += 0.9992292870905588;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)109) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9471153846153846;
            result[1] += 0.052884615384615384;
            result[2] += 0;
            result[3] += 0;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)160) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)117) ) ) {
            result[0] += 0;
            result[1] += 0.13559322033898305;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.864406779661017;
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
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
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
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)88.5) ) ) {
            result[0] += 0.13380281690140844;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8661971830985915;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02109704641350211;
            result[4] += 0.9789029535864979;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)57) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)49) ) ) {
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
            result[3] += 1;
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
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-8.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9791855203619909;
            result[1] += 0;
            result[2] += 0.02081447963800905;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
            result[0] += 0.15684575389948008;
            result[1] += 0;
            result[2] += 0.01386481802426343;
            result[3] += 0.8292894280762565;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.0008896797153024911;
            result[1] += 0.017793594306049824;
            result[2] += 0;
            result[3] += 0.9813167259786477;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)33.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9988608188702004;
            result[1] += 0;
            result[2] += 0.0010051598204114454;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00013402130938819273;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
            result[0] += 0.049079754601227;
            result[1] += 0.008588957055214726;
            result[2] += 0.010429447852760738;
            result[3] += 0.9042944785276075;
            result[4] += 0.023312883435582826;
            result[5] += 0.004294478527607363;
            result[6] += 0;
          } else {
            result[0] += 0.972936400541272;
            result[1] += 0;
            result[2] += 0.0033829499323410014;
            result[3] += 0.023004059539918808;
            result[4] += 0;
            result[5] += 0.00033829499323410016;
            result[6] += 0.00033829499323410016;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)21) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.025297619047619048;
            result[3] += 0;
            result[4] += 0.96875;
            result[5] += 0.005952380952380952;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.001397624039133473;
            result[2] += 0.006638714185883997;
            result[3] += 0.9919636617749825;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)36) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)74) ) ) {
            result[0] += 0.9928571428571429;
            result[1] += 0;
            result[2] += 0.005555555555555556;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0015873015873015873;
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
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)6504) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9987562189054726;
            result[1] += 0;
            result[2] += 0.0009772565742714996;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00026652452025586353;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)22.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
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
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)73) ) ) {
            result[0] += 0.029061624649859945;
            result[1] += 0.003851540616246499;
            result[2] += 0.01050420168067227;
            result[3] += 0.9534313725490197;
            result[4] += 0.0007002801120448179;
            result[5] += 0.0024509803921568627;
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
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
            result[2] += 0.9642857142857143;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.03571428571428571;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)94.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
            result[0] += 0.8735362997658079;
            result[1] += 0;
            result[2] += 0.00468384074941452;
            result[3] += 0.12177985948477751;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9944502254595907;
            result[1] += 0;
            result[2] += 0.00346860908775581;
            result[3] += 0.0015608740894901144;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0005202913631633715;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
            result[0] += 0.005458089668615985;
            result[1] += 0;
            result[2] += 0.0003898635477582846;
            result[3] += 0.9941520467836257;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9803571428571429;
            result[1] += 0;
            result[2] += 0.014880952380952382;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.004761904761904763;
          }
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)106) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
            result[0] += 0.8;
            result[1] += 0;
            result[2] += 0.2;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)16) ) ) {
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
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
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.11764705882352941;
            result[1] += 0.8823529411764706;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)10) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
            result[0] += 0.29135338345864664;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7086466165413534;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.5738575982996812;
            result[1] += 0;
            result[2] += 0.01700318809776833;
            result[3] += 0.40913921360255046;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
            result[0] += 0.25150602409638556;
            result[1] += 0.01957831325301205;
            result[2] += 0;
            result[3] += 0.7289156626506024;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.028011204481792718;
            result[1] += 0;
            result[2] += 0.015406162464985995;
            result[3] += 0.9565826330532213;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
            result[0] += 0.11356466876971609;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.886435331230284;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.995924270312911;
            result[1] += 0.0011832763607678152;
            result[2] += 0.0021036024191427825;
            result[3] += 0.00039442545358927167;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00039442545358927167;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)4) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9950938242880986;
            result[1] += 0.00030347478630317126;
            result[2] += 0.00010115826210105708;
            result[3] += 0.00450154266349704;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)78) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)28) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9990176817288802;
            result[4] += 0.0009823182711198428;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.75;
            result[5] += 0.25;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
            result[0] += 0.1038961038961039;
            result[1] += 0;
            result[2] += 0.07142857142857142;
            result[3] += 0;
            result[4] += 0.8246753246753247;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.3125;
            result[1] += 0;
            result[2] += 0.3125;
            result[3] += 0;
            result[4] += 0.375;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44) ) ) {
            result[0] += 0.07121879588839941;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9287812041116006;
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
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)94.5) ) ) {
            result[0] += 0.7387706855791962;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.26122931442080377;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.4279019466474405;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5720980533525595;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)40) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9909855769230769;
            result[1] += 0;
            result[2] += 0.006009615384615385;
            result[3] += 0.0009014423076923077;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0021033653846153845;
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
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5555555555555556;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.4444444444444444;
            result[6] += 0;
          }
        }
      }
    }
  }
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)14) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
            result[0] += 0.004492362982929021;
            result[1] += 0.011680143755615454;
            result[2] += 0.020664869721473494;
            result[3] += 0.963162623539982;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.0010183299389002036;
            result[2] += 0;
            result[3] += 0.9989816700610998;
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)84.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.14285714285714285;
            result[1] += 0;
            result[2] += 0.8571428571428571;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)19.5) ) ) {
            result[0] += 0.0070921985815602835;
            result[1] += 0;
            result[2] += 0.07092198581560284;
            result[3] += 0;
            result[4] += 0.900709219858156;
            result[5] += 0.02127659574468085;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.0006531678641410843;
            result[2] += 0.001959503592423253;
            result[3] += 0.9973873285434357;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)35) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
            result[0] += 0.8133333333333334;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.18666666666666668;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9976394216583063;
            result[1] += 0.0005532605488344644;
            result[2] += 0.0011802891708468574;
            result[3] += 0.00047949247565653584;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00014753614635585718;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)78) ) ) {
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
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.923896499238965;
            result[1] += 0;
            result[2] += 0.0136986301369863;
            result[3] += 0.0624048706240487;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)101.5) ) ) {
            result[0] += 0.010671256454388985;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9893287435456111;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.5178571428571429;
            result[1] += 0;
            result[2] += 0.30357142857142855;
            result[3] += 0;
            result[4] += 0.125;
            result[5] += 0.05357142857142857;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-195.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)74) ) ) {
            result[0] += 0.9972967754392741;
            result[1] += 0;
            result[2] += 0.0023170496234794368;
            result[3] += 0.00019308746862328638;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00019308746862328638;
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
    }
  }
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)35.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
            result[0] += 0.9728915662650602;
            result[1] += 0;
            result[2] += 0.02710843373493976;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9996076892899176;
            result[1] += 0;
            result[2] += 0.00039231071008238524;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9986953685583823;
            result[1] += 0;
            result[2] += 0.0009784735812133072;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00032615786040443573;
          }
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-8.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
            result[0] += 0.041666666666666664;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.875;
            result[4] += 0.08333333333333333;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.037037037037037035;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.48148148148148145;
            result[4] += 0.48148148148148145;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0.007526881720430106;
            result[2] += 0.007885304659498207;
            result[3] += 0.9824372759856629;
            result[4] += 0.0007168458781362006;
            result[5] += 0.0014336917562724012;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
            result[0] += 0.9934188877920369;
            result[1] += 0;
            result[2] += 0.004935834155972359;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0016452780519907865;
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
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
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)25) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)103) ) ) {
            result[0] += 0.0043368268883267076;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9956631731116733;
            result[4] += 0;
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9991786447638604;
            result[5] += 0.0008213552361396304;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.015711645101663587;
            result[2] += 0.02865064695009242;
            result[3] += 0.9528650646950092;
            result[4] += 0;
            result[5] += 0.0027726432532347504;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)42) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)68.5) ) ) {
            result[0] += 0.9965046075627582;
            result[1] += 0;
            result[2] += 0.0034953924372418178;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9117647058823529;
            result[1] += 0;
            result[2] += 0.06417112299465241;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.02406417112299465;
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
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)12) ) ) {
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
            result[4] += 0;
            result[5] += 1;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)29) ) ) {
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
            result[3] += 0.9996297667530544;
            result[4] += 0;
            result[5] += 0.00037023324694557573;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
            result[0] += 0.5703703703703703;
            result[1] += 0.05555555555555554;
            result[2] += 0.029629629629629624;
            result[3] += 0.3407407407407407;
            result[4] += 0;
            result[5] += 0.003703703703703703;
            result[6] += 0;
          } else {
            result[0] += 0.34802431610942247;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6519756838905775;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-5) ) ) {
            result[0] += 0.9795918367346939;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02040816326530612;
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57) ) ) {
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
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
            result[0] += 0.9980045820708005;
            result[1] += 0.0005542827581110044;
            result[2] += 0.0012933264355923437;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00014780873549626784;
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
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-7) ) ) {
            result[0] += 0.8318181818181818;
            result[1] += 0.05;
            result[2] += 0;
            result[3] += 0.11818181818181818;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.16901408450704225;
            result[1] += 0;
            result[2] += 0.09859154929577464;
            result[3] += 0.7323943661971831;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
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
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
            result[0] += 0.7813446396123561;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.21865536038764385;
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
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)40) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += 0.9802631578947368;
            result[1] += 0;
            result[2] += 0.017269736842105265;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0024671052631578946;
          } else {
            result[0] += 0.9986363636363637;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0013636363636363637;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-32.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
          result[6] += 0;
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.981651376146789;
            result[5] += 0.01834862385321101;
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
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)5624.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-305.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
            result[0] += 0.987146529562982;
            result[1] += 0;
            result[2] += 0.010282776349614395;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.002570694087403599;
          } else {
            result[0] += 0.9993556701030928;
            result[1] += 0;
            result[2] += 0.0006443298969072165;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)34.5) ) ) {
            result[0] += 0.9990273556231003;
            result[1] += 0;
            result[2] += 0.0009726443768996961;
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
            result[0] += 0.9689230769230769;
            result[1] += 0.002307692307692308;
            result[2] += 0.005230769230769231;
            result[3] += 0.022615384615384617;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0009230769230769231;
          } else {
            result[0] += 0.6827380952380953;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.31666666666666665;
            result[4] += 0;
            result[5] += 0.0005952380952380953;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
            result[0] += 0.42369477911646586;
            result[1] += 0;
            result[2] += 0.02208835341365462;
            result[3] += 0.5502008032128514;
            result[4] += 0;
            result[5] += 0.004016064257028112;
            result[6] += 0;
          } else {
            result[0] += 0.08514412416851441;
            result[1] += 0.007982261640798226;
            result[2] += 0.01951219512195122;
            result[3] += 0.8851441241685144;
            result[4] += 0.0004434589800443459;
            result[5] += 0.0017738359201773836;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
            result[0] += 0;
            result[1] += 0.0013205678441729944;
            result[2] += 0;
            result[3] += 0.998679432155827;
            result[4] += 0;
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
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6153846153846154;
            result[3] += 0;
            result[4] += 0.23076923076923078;
            result[5] += 0.15384615384615385;
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
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)102) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-340.5) ) ) {
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
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)161) ) ) {
            result[0] += 0;
            result[1] += 0.0097442143727162;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9902557856272838;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.6666666666666666;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0;
            result[6] += 0;
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
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)30.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
            result[0] += 0.985572050318965;
            result[1] += 0.0002384785071245454;
            result[2] += 0.0005365766410302271;
            result[3] += 0.013593274906099087;
            result[4] += 5.961962678113635e-05;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.8741058655221746;
            result[1] += 0;
            result[2] += 0.022889842632331906;
            result[3] += 0.10300429184549358;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)2060.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-80.5) ) ) {
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
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)41.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-5.5) ) ) {
            result[0] += 0.017150395778364115;
            result[1] += 0;
            result[2] += 0.005277044854881266;
            result[3] += 0.91688654353562;
            result[4] += 0.05672823218997362;
            result[5] += 0.00395778364116095;
            result[6] += 0;
          } else {
            result[0] += 0.01304978250362494;
            result[1] += 0.0028999516674722086;
            result[2] += 0.02029966167230546;
            result[3] += 0.8516191396810053;
            result[4] += 0.10923151280811987;
            result[5] += 0.0028999516674722086;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
            result[0] += 0.464308476736775;
            result[1] += 0;
            result[2] += 0.0006373486297004461;
            result[3] += 0.5344168260038241;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0006373486297004461;
          } else {
            result[0] += 0.7863247863247863;
            result[1] += 0;
            result[2] += 0.009259259259259259;
            result[3] += 0.20085470085470086;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0035612535612535613;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
            result[0] += 0.5751911639762107;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.42480883602378927;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9842767295597484;
            result[1] += 0;
            result[2] += 0.0110062893081761;
            result[3] += 0.0047169811320754715;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
            result[0] += 0.993860418493923;
            result[1] += 0;
            result[2] += 0.002881844380403458;
            result[3] += 0.002505951635133442;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0007517854905400326;
          } else {
            result[0] += 0.9503843466107617;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0496156533892383;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-26) ) ) {
            result[0] += 0.023809523809523808;
            result[1] += 0.047619047619047616;
            result[2] += 0;
            result[3] += 0.9285714285714286;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.21621621621621623;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7837837837837838;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.02112676056338028;
            result[2] += 0;
            result[3] += 0.9788732394366197;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.04533333333333334;
            result[1] += 0;
            result[2] += 0.024;
            result[3] += 0.344;
            result[4] += 0.5866666666666667;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)123.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)100) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.012269938650306749;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9877300613496932;
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-166) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)92) ) ) {
            result[0] += 0.008968609865470852;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9641255605381166;
            result[4] += 0.008968609865470852;
            result[5] += 0.017937219730941704;
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
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)41) ) ) {
            result[0] += 0;
            result[1] += 0.00034411562284927734;
            result[2] += 0.00653819683413627;
            result[3] += 0.9704060564349621;
            result[4] += 0.01995870612525809;
            result[5] += 0.0027529249827942187;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5714285714285714;
            result[3] += 0;
            result[4] += 0.35714285714285715;
            result[5] += 0.07142857142857142;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)95) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
            result[0] += 0;
            result[1] += 0.052;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.948;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)4) ) ) {
            result[0] += 0.9985790796808395;
            result[1] += 0;
            result[2] += 0.0012023171931358617;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00021860312602470214;
          } else {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0.5;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
            result[0] += 0.9472496473906912;
            result[1] += 0.003102961918194641;
            result[2] += 0.004231311706629056;
            result[3] += 0.04315937940761637;
            result[4] += 0;
            result[5] += 0.0005641748942172074;
            result[6] += 0.0016925246826516222;
          } else {
            result[0] += 0.23722149410222804;
            result[1] += 0.015727391874180863;
            result[2] += 0.02621231979030144;
            result[3] += 0.7208387942332897;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
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
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.005787037037037037;
            result[3] += 0.9942129629629629;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
            result[0] += 0.9945075064079092;
            result[1] += 0;
            result[2] += 0.00207494202367875;
            result[3] += 0.0026852190894666177;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0007323324789454412;
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
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)4) ) ) {
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
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)83) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44) ) ) {
            result[0] += 0.9166666666666666;
            result[1] += 0;
            result[2] += 0.08333333333333333;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            result[0] += 0.9932885906040269;
            result[1] += 0;
            result[2] += 0.005678884873515746;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0010325245224574084;
          } else {
            result[0] += 0.9998576411132465;
            result[1] += 0;
            result[2] += 0.0001423588867535056;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-158) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-327) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
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
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
            result[0] += 0.003194888178913738;
            result[1] += 0.012779552715654952;
            result[2] += 0;
            result[3] += 0.26996805111821087;
            result[4] += 0.7140575079872205;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.01979218208807521;
            result[1] += 0.005690252350321623;
            result[2] += 0.013359722909450767;
            result[3] += 0.7647204354280059;
            result[4] += 0.19445818901533893;
            result[5] += 0.0019792182088075212;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += 0;
            result[1] += 0.027522935779816515;
            result[2] += 0;
            result[3] += 0.2706422018348624;
            result[4] += 0.7018348623853211;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.005813953488372093;
            result[2] += 0;
            result[3] += 0.05813953488372093;
            result[4] += 0.936046511627907;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)3.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
            result[0] += 0.5254699818071559;
            result[1] += 0;
            result[2] += 0.0036385688295936932;
            result[3] += 0.469981807155852;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0009096422073984233;
          } else {
            result[0] += 0.9654419789014187;
            result[1] += 0;
            result[2] += 0.01018552200800291;
            result[3] += 0.022917424518006546;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0014550745725718443;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)30.5) ) ) {
            result[0] += 0.7733333333333333;
            result[1] += 0;
            result[2] += 0.0010256410256410256;
            result[3] += 0.2246153846153846;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0010256410256410256;
          } else {
            result[0] += 0.8771929824561403;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.12280701754385964;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += 0.7303664921465969;
            result[1] += 0;
            result[2] += 0.007853403141361256;
            result[3] += 0.25981675392670156;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.001963350785340314;
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)96.5) ) ) {
            result[0] += 0.06666666666666667;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9333333333333333;
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
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)29) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)85) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)36.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.19402985074626866;
            result[4] += 0.8059701492537313;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.010439970171513796;
            result[3] += 0.9172259507829977;
            result[4] += 0.07009694258016405;
            result[5] += 0.0022371364653243847;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-29) ) ) {
            result[0] += 0;
            result[1] += 0.043689320388349516;
            result[2] += 0;
            result[3] += 0.08737864077669903;
            result[4] += 0.8689320388349514;
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
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
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
            result[0] += 0;
            result[1] += 0.0010899182561307902;
            result[2] += 0.008174386920980926;
            result[3] += 0.9896457765667575;
            result[4] += 0;
            result[5] += 0.0010899182561307902;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)107) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9655172413793104;
            result[4] += 0.034482758620689655;
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
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
            result[0] += 0;
            result[1] += 0.01990049751243781;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9800995024875622;
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
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
            result[0] += 0.9981296758104738;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0012468827930174563;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0006234413965087282;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.012622720897615708;
            result[3] += 0.9866760168302945;
            result[4] += 0;
            result[5] += 0.0007012622720897616;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-191) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9776813391196528;
            result[1] += 0;
            result[2] += 0.011779293242405457;
            result[3] += 0.007439553626782393;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0030998140111593306;
          }
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
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
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
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
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
            result[0] += 0.9646658523817833;
            result[1] += 0.0010469377072064212;
            result[2] += 0.003402547548420869;
            result[3] += 0.030273948700052348;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.000610713662537079;
          } else {
            result[0] += 0.7820029027576197;
            result[1] += 0;
            result[2] += 0.0026124818577648768;
            result[3] += 0.21509433962264152;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00029027576197387516;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
            result[0] += 0.997934950955085;
            result[1] += 0;
            result[2] += 0.0012046119428669763;
            result[3] += 0.0003441748408191361;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0005162622612287041;
          } else {
            result[0] += 0.6363636363636364;
            result[1] += 0;
            result[2] += 0.36363636363636365;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.8518518518518519;
            result[1] += 0;
            result[2] += 0.14814814814814814;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)10) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-13) ) ) {
            result[0] += 0.21059268600252207;
            result[1] += 0.008827238335435058;
            result[2] += 0;
            result[3] += 0.7805800756620429;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0008045052292839903;
            result[3] += 0.999195494770716;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)102) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
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
            result[0] += 0;
            result[1] += 1;
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
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
            result[0] += 0.9969262295081968;
            result[1] += 0;
            result[2] += 0.0022199453551912567;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0008538251366120218;
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
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
            result[0] += 0.001605136436597111;
            result[1] += 0.008025682182985555;
            result[2] += 0;
            result[3] += 0.29855537720706266;
            result[4] += 0.6902086677367577;
            result[5] += 0.001605136436597111;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1099290780141844;
            result[4] += 0.8900709219858156;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += 0.6315996847911742;
            result[1] += 0.0011820330969267141;
            result[2] += 0.006895193065405833;
            result[3] += 0.33096926713947994;
            result[4] += 0.02777777777777778;
            result[5] += 0.0007880220646178095;
            result[6] += 0.0007880220646178095;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.007559395248380131;
            result[3] += 0.988480921526278;
            result[4] += 0.0032397408207343417;
            result[5] += 0.0007199424046076315;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)52.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91) ) ) {
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
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
            result[0] += 0.9236111111111112;
            result[1] += 0;
            result[2] += 0.05555555555555555;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.020833333333333332;
          } else {
            result[0] += 0.9891368173810923;
            result[1] += 0;
            result[2] += 0.0023487962419260133;
            result[3] += 0.008514386376981799;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-9) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)96) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)54) ) ) {
            result[0] += 0;
            result[1] += 0.0006259780907668231;
            result[2] += 0.005007824726134585;
            result[3] += 0.9924882629107982;
            result[4] += 0;
            result[5] += 0.0018779342723004694;
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
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
            result[0] += 0.9852216748768473;
            result[1] += 0;
            result[2] += 0.014778325123152709;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9992682034394439;
            result[1] += 0;
            result[2] += 0.0004878643737041103;
            result[3] += 0.00024393218685205516;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)64) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.020689655172413793;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9793103448275862;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)25) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.007462686567164179;
            result[3] += 0.9925373134328358;
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
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
            result[0] += 0.9884499884499884;
            result[1] += 0.004158004158004158;
            result[2] += 0.006699006699006699;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.000693000693000693;
          } else {
            result[0] += 0.9979698984949248;
            result[1] += 0.0004900245012250613;
            result[2] += 0.000840042002100105;
            result[3] += 0.0007000350017500875;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
            result[0] += 0.10413223140495868;
            result[1] += 0;
            result[2] += 0.014049586776859505;
            result[3] += 0.8818181818181818;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9771428571428571;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.022857142857142857;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
            result[0] += 0.9343873517786562;
            result[1] += 0;
            result[2] += 0.018972332015810278;
            result[3] += 0.042687747035573126;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.003952569169960474;
          } else {
            result[0] += 0.014084507042253521;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9859154929577465;
            result[4] += 0;
            result[5] += 0;
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
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)9.5) ) ) {
            result[0] += 0.4476305463326291;
            result[1] += 0;
            result[2] += 0.00452761847268337;
            result[3] += 0.546936311500151;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0009055236945366738;
          } else {
            result[0] += 0.9666666666666667;
            result[1] += 0;
            result[2] += 0.03333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)6504) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)33.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.997937472861485;
            result[1] += 0;
            result[2] += 0.0017368649587494573;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0003256621797655232;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
            result[0] += 0.0078125;
            result[1] += 0;
            result[2] += 0.03125;
            result[3] += 0;
            result[4] += 0.93359375;
            result[5] += 0.02734375;
            result[6] += 0;
          } else {
            result[0] += 0.02850956333453627;
            result[1] += 0.0054132082280765065;
            result[2] += 0.008300252616383976;
            result[3] += 0.9577769758210033;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
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
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9230769230769231;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.07692307692307693;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
            result[0] += 0.9897227856659906;
            result[1] += 0;
            result[2] += 0.0047329276538201496;
            result[3] += 0.004192021636240704;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0013522650439486141;
          } else {
            result[0] += 0.8911392405063291;
            result[1] += 0;
            result[2] += 0.02531645569620253;
            result[3] += 0.08354430379746836;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0013351134846461949;
            result[3] += 0.9986648865153538;
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)115.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
            result[0] += 0.01675977653631285;
            result[1] += 0.0223463687150838;
            result[2] += 0;
            result[3] += 0.16759776536312848;
            result[4] += 0.7932960893854749;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.008213552361396304;
            result[2] += 0;
            result[3] += 0.012320328542094456;
            result[4] += 0.9794661190965093;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
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
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)103.5) ) ) {
            result[0] += 0.1327088212334114;
            result[1] += 0.00702576112412178;
            result[2] += 0.00546448087431694;
            result[3] += 0.8548009367681498;
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
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-108) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.00037593984962406017;
            result[2] += 0;
            result[3] += 0.9981203007518797;
            result[4] += 0;
            result[5] += 0.0015037593984962407;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)26.5) ) ) {
            result[0] += 0.8;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2;
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
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)73) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7931034482758621;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.20689655172413793;
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
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-35) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-1) ) ) {
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
            result[0] += 0;
            result[1] += 1;
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
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)32.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.0015151515151515152;
            result[2] += 0.0030303030303030303;
            result[3] += 0.9954545454545455;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)99.5) ) ) {
            result[0] += 0.9971151485391604;
            result[1] += 0.0007979376381045913;
            result[2] += 0.0019641541861036096;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0001227596366314756;
          } else {
            result[0] += 0.8888888888888888;
            result[1] += 0.1111111111111111;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-14) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
            result[0] += 0.999727024567789;
            result[1] += 0;
            result[2] += 0.000272975432211101;
            result[3] += 0;
            result[4] += 0;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)40) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)47) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.994535519125683;
            result[4] += 0;
            result[5] += 0.00546448087431694;
            result[6] += 0;
          } else {
            result[0] += 0.9924812030075189;
            result[1] += 0;
            result[2] += 0.005952380952380953;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0015664160401002508;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.15714285714285714;
            result[3] += 0.8428571428571429;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
            result[0] += 0.20829154129053828;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7917084587094617;
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
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += 0.9666666666666667;
            result[1] += 0;
            result[2] += 0.03333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9957555178268251;
            result[1] += 0;
            result[2] += 0.001697792869269949;
            result[3] += 0.0025466893039049238;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
            result[0] += 0.9246231155778895;
            result[1] += 0;
            result[2] += 0.07537688442211055;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += 0.0196078431372549;
            result[1] += 0.10784313725490197;
            result[2] += 0;
            result[3] += 0.23529411764705882;
            result[4] += 0.6372549019607843;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.005050505050505051;
            result[2] += 0;
            result[3] += 0.045454545454545456;
            result[4] += 0.9494949494949495;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
            result[0] += 0.16;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.84;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.00818926296633303;
            result[2] += 0;
            result[3] += 0.991810737033667;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)16) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.27586206896551724;
            result[1] += 0;
            result[2] += 0.41379310344827586;
            result[3] += 0.3103448275862069;
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
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
            result[0] += 0.07814407814407814;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9194139194139194;
            result[4] += 0.002442002442002442;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9975192943770673;
            result[1] += 0;
            result[2] += 0.00027563395810363843;
            result[3] += 0.0019294377067254687;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00027563395810363843;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
            result[0] += 0.5647058823529412;
            result[1] += 0;
            result[2] += 0.15294117647058825;
            result[3] += 0;
            result[4] += 0.2823529411764706;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9947719488011538;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.004687218316206959;
            result[4] += 0;
            result[5] += 0.0005408328826392645;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
            result[0] += 0.28721174004192873;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7064989517819706;
            result[4] += 0.006289308176100629;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9973181544524109;
            result[1] += 0.0006567785014503859;
            result[2] += 0.001094630835750643;
            result[3] += 0.0008757046686005145;
            result[4] += 0;
            result[5] += 0;
            result[6] += 5.473154178753216e-05;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
            result[0] += 0.057291666666666664;
            result[1] += 0;
            result[2] += 0.008680555555555556;
            result[3] += 0.9305555555555556;
            result[4] += 0;
            result[5] += 0.003472222222222222;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1320754716981132;
            result[3] += 0;
            result[4] += 0.8679245283018868;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)9) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
            result[0] += 0.5121951219512195;
            result[1] += 0;
            result[2] += 0.4634146341463415;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.024390243902439025;
            result[6] += 0;
          } else {
            result[0] += 0.16526845637583892;
            result[1] += 0;
            result[2] += 0.003076062639821029;
            result[3] += 0.8313758389261745;
            result[4] += 0;
            result[5] += 0.0002796420581655481;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)4) ) ) {
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)68.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9502487562189055;
            result[1] += 0;
            result[2] += 0.04145936981757877;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.008291873963515755;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)50) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-21.5) ) ) {
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
            result[3] += 0.9914893617021276;
            result[4] += 0;
            result[5] += 0.00851063829787234;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82) ) ) {
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
            result[0] += 0.9584352078239609;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04156479217603912;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9983854396007632;
            result[1] += 0.0003669455452810803;
            result[2] += 0.0009907529722589167;
            result[3] += 0.00011008366358432408;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0001467782181124321;
          }
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)109) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
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
            result[0] += 0.16666666666666666;
            result[1] += 0.8333333333333334;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)77.5) ) ) {
            result[0] += 0.0018281535648994515;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9917733089579525;
            result[4] += 0.006398537477148081;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.26072761194029853;
            result[1] += 0.005130597014925373;
            result[2] += 0.007462686567164179;
            result[3] += 0.726679104477612;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90) ) ) {
            result[0] += 0.032846715328467155;
            result[1] += 0;
            result[2] += 0.023722627737226276;
            result[3] += 0.023722627737226276;
            result[4] += 0.9197080291970803;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14545454545454545;
            result[3] += 0.8545454545454545;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)37.5) ) ) {
            result[0] += 0.060653188180404355;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9393468118195957;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.36633663366336633;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6336633663366337;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.31034482758620696;
            result[3] += 0.6551724137931035;
            result[4] += 0.03448275862068966;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9685658153241651;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03143418467583497;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)34.5) ) ) {
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
            result[4] += 0.85;
            result[5] += 0.15;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
            result[0] += 0.4107142857142857;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5892857142857143;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.01034928848641656;
            result[1] += 0;
            result[2] += 0.00258732212160414;
            result[3] += 0.9867399741267788;
            result[4] += 0;
            result[5] += 0.0003234152652005175;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)48) ) ) {
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
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)74) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
            result[0] += 0.9151943462897526;
            result[1] += 0;
            result[2] += 0.06713780918727916;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0176678445229682;
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
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)59) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.1005464480874317;
            result[1] += 0.008743169398907104;
            result[2] += 0;
            result[3] += 0.8907103825136612;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-5) ) ) {
            result[0] += 0.0019455252918287938;
            result[1] += 0.027237354085603113;
            result[2] += 0;
            result[3] += 0.9708171206225681;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.2542372881355932;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7457627118644068;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
            result[0] += 0.022321428571428572;
            result[1] += 0;
            result[2] += 0.03571428571428571;
            result[3] += 0.9419642857142857;
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87) ) ) {
            result[0] += 0.7136627906976745;
            result[1] += 0;
            result[2] += 0.015988372093023256;
            result[3] += 0.2703488372093023;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08620689655172414;
            result[3] += 0.9137931034482759;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)53) ) ) {
            result[0] += 0;
            result[1] += 0.001401541695865452;
            result[2] += 0.008409250175192713;
            result[3] += 0.9866853538892782;
            result[4] += 0;
            result[5] += 0.00350385423966363;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
            result[0] += 0.9982517482517482;
            result[1] += 0;
            result[2] += 0.0017482517482517483;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9782016348773842;
            result[1] += 0;
            result[2] += 0.01907356948228883;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0027247956403269754;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += 0.9874476987447699;
            result[1] += 0;
            result[2] += 0.012552301255230125;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
            result[0] += 0.9906163361057796;
            result[1] += 0.003412241416080188;
            result[2] += 0.002559181062060141;
            result[3] += 0.002559181062060141;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.000853060354020047;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11627906976744186;
            result[3] += 0.8837209302325582;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += 0.9036243822075782;
            result[1] += 0;
            result[2] += 0.005766062602965404;
            result[3] += 0.08731466227347612;
            result[4] += 0;
            result[5] += 0.00041186161449752884;
            result[6] += 0.002883031301482702;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0069881201956673656;
            result[3] += 0.9930118798043326;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)29.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)102) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.997968855788761;
            result[4] += 0.002031144211238998;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.15873015873015872;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8412698412698413;
            result[5] += 0;
            result[6] += 0;
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)33.5) ) ) {
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
            result[2] += 0.7272727272727273;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.2727272727272727;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-26.5) ) ) {
            result[0] += 0.9861830742659758;
            result[1] += 0;
            result[2] += 0.0069084628670120895;
            result[3] += 0.0069084628670120895;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9976190476190476;
            result[1] += 0;
            result[2] += 0.0005602240896358543;
            result[3] += 0.0018207282913165266;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
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
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.012223071046600458;
            result[3] += 0.9862490450725745;
            result[4] += 0;
            result[5] += 0.0015278838808250573;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
            result[0] += 0.9989769820971867;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0010230179028132991;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9863013698630136;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0136986301369863;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
            result[0] += 0.9962640099626401;
            result[1] += 0;
            result[2] += 0.0037359900373599006;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.8166666666666667;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.016666666666666666;
          }
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
            result[0] += 0.9946933962264153;
            result[1] += 0.0002526954177897575;
            result[2] += 0.00101078167115903;
            result[3] += 0.003790431266846362;
            result[4] += 0.0002526954177897575;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.004694835680751174;
            result[1] += 0.004694835680751174;
            result[2] += 0;
            result[3] += 0.25821596244131456;
            result[4] += 0.7323943661971831;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)8.5) ) ) {
            result[0] += 0.9261744966442953;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.009890498057223597;
            result[4] += 0.06322854115153656;
            result[5] += 0;
            result[6] += 0.0007064641469445425;
          } else {
            result[0] += 0.4444444444444444;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5555555555555556;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)41.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += 0.4611901681759379;
            result[1] += 0.00258732212160414;
            result[2] += 0.014230271668822769;
            result[3] += 0.45957309184993533;
            result[4] += 0.05983182406209573;
            result[5] += 0.0009702457956015524;
            result[6] += 0.0016170763260025874;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9974874371859297;
            result[4] += 0.0016750418760469012;
            result[5] += 0.0008375209380234506;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
            result[0] += 0.9992252066115702;
            result[1] += 0;
            result[2] += 0.0007747933884297521;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.8967909800520383;
            result[1] += 0;
            result[2] += 0.0005782017924255567;
            result[3] += 0.10205261636311073;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0005782017924255567;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)18) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.015015015015015015;
            result[2] += 0;
            result[3] += 0.984984984984985;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
            result[0] += 0.8947368421052632;
            result[1] += 0;
            result[2] += 0.10526315789473684;
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
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.003189792663476874;
            result[3] += 0.9968102073365231;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7586206896551724;
            result[4] += 0.2413793103448276;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.37606837606837606;
            result[4] += 0.6239316239316239;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.042801556420233464;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9571984435797666;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)83.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)1.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
            result[0] += 0.9741935483870968;
            result[1] += 0;
            result[2] += 0.025806451612903226;
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
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
            result[0] += 0.3683310533515732;
            result[1] += 0;
            result[2] += 0.006155950752393981;
            result[3] += 0.5858413132694938;
            result[4] += 0.03898768809849521;
            result[5] += 0.0006839945280437756;
            result[6] += 0;
          } else {
            result[0] += 0.9878419452887538;
            result[1] += 0;
            result[2] += 0.004559270516717325;
            result[3] += 0.005319148936170213;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0022796352583586625;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += 0.7876712328767124;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2089041095890411;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.003424657534246575;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7354497354497355;
            result[4] += 0.26455026455026454;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
            result[0] += 0.9651162790697675;
            result[1] += 0;
            result[2] += 0.03488372093023256;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9989384288747346;
            result[1] += 0;
            result[2] += 0.0010615711252653928;
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
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
            result[0] += 0.17357310398749023;
            result[1] += 0.012509773260359656;
            result[2] += 0.024237685691946835;
            result[3] += 0.382329945269742;
            result[4] += 0.4073494917904613;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.7943336831059811;
            result[1] += 0.005771248688352571;
            result[2] += 0.017313746065057714;
            result[3] += 0.15687303252885623;
            result[4] += 0.022560335781741866;
            result[5] += 0.001049317943336831;
            result[6] += 0.002098635886673662;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.004728132387706856;
            result[2] += 0;
            result[3] += 0.9940898345153665;
            result[4] += 0;
            result[5] += 0.001182033096926714;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)4) ) ) {
            result[0] += 0.9651162790697675;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.03488372093023256;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.0019323671497584543;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7178743961352658;
            result[4] += 0.27922705314009666;
            result[5] += 0.0009661835748792271;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
            result[0] += 0.994240263302249;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.005485463521667581;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00027427317608337906;
          } else {
            result[0] += 0.8179394401066463;
            result[1] += 0;
            result[2] += 0.0009521995810321843;
            result[3] += 0.18072748047990858;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00038087983241287375;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
            result[0] += 0;
            result[1] += 0.02857142857142857;
            result[2] += 0;
            result[3] += 0.12857142857142856;
            result[4] += 0.8428571428571429;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.19532554257095158;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8046744574290484;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)72) ) ) {
            result[0] += 0.37735849056603776;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6226415094339622;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.014652014652014652;
            result[4] += 0.9853479853479854;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
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
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
            result[0] += 0.00398406374501992;
            result[1] += 0.0011383039271485487;
            result[2] += 0;
            result[3] += 0.993739328400683;
            result[4] += 0;
            result[5] += 0.0011383039271485487;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08333333333333333;
            result[3] += 0;
            result[4] += 0.8787878787878788;
            result[5] += 0.03787878787878788;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)11) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-7.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9974326059050064;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0025673940949935813;
            result[5] += 0;
            result[6] += 0;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)112) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)71) ) ) {
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)125.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)27.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.0425531914893617;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9574468085106383;
            result[5] += 0;
            result[6] += 0;
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-6419.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.0603448275862069;
            result[2] += 0;
            result[3] += 0.9396551724137931;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
            result[0] += 0.9971116271167243;
            result[1] += 0.0009061561986747466;
            result[2] += 0.0016424081100979782;
            result[3] += 0.00022653904966868664;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00011326952483434332;
          } else {
            result[0] += 0.9995751009135331;
            result[1] += 0;
            result[2] += 0.00021244954323348204;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00021244954323348204;
          }
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
            result[2] += 0.0074578469520103765;
            result[3] += 0.9909208819714657;
            result[4] += 0;
            result[5] += 0.001621271076523995;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
            result[0] += 0.9933167844185602;
            result[1] += 0;
            result[2] += 0.00343708229902616;
            result[3] += 0.00171854114951308;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0015275921329005156;
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
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)86) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)29) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)926) ) ) {
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
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-348) ) ) {
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
            result[3] += 0.9976805831676607;
            result[4] += 0.0006626905235255136;
            result[5] += 0.0016567263088137839;
            result[6] += 0;
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
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-13) ) ) {
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
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)28.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 1;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)77.5) ) ) {
            result[0] += 0.9982906618111553;
            result[1] += 0.0005202333618223032;
            result[2] += 0.0007803500427334548;
            result[3] += 0.00018579762922225112;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00022295715506670134;
          } else {
            result[0] += 0.9508474576271186;
            result[1] += 0;
            result[2] += 0.04915254237288136;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)89.5) ) ) {
            result[0] += 0.045454545454545456;
            result[1] += 0;
            result[2] += 0.36363636363636365;
            result[3] += 0.5909090909090909;
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
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.003985386914646297;
            result[3] += 0.9956824975091332;
            result[4] += 0;
            result[5] += 0.00033211557622052476;
            result[6] += 0;
          } else {
            result[0] += 0.9900519031141869;
            result[1] += 0;
            result[2] += 0.007352941176470588;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0025951557093425604;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85) ) ) {
            result[0] += 0.0008733624454148472;
            result[1] += 0.004366812227074236;
            result[2] += 0.006550218340611353;
            result[3] += 0.9882096069868995;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.15267175572519084;
            result[3] += 0.45038167938931295;
            result[4] += 0.3969465648854962;
            result[5] += 0;
            result[6] += 0;
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
            result[0] += 0;
            result[1] += 0.02875399361022364;
            result[2] += 0;
            result[3] += 0.9712460063897763;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
            result[0] += 0.9953051643192489;
            result[1] += 0.0018779342723004694;
            result[2] += 0.0028169014084507044;
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87) ) ) {
            result[0] += 0.9121621621621622;
            result[1] += 0;
            result[2] += 0.08783783783783784;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.125;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)19) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
            result[0] += 0.966426106055852;
            result[1] += 0.002039535613429558;
            result[2] += 0.004235958581738313;
            result[3] += 0.026513962974584252;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0007844367743959838;
          } else {
            result[0] += 0.980466472303207;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.018950437317784258;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0005830903790087463;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)71) ) ) {
            result[0] += 0.003215434083601286;
            result[1] += 0.00482315112540193;
            result[2] += 0;
            result[3] += 0.9919614147909968;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)79) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += 0.9936744186046512;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.006139534883720931;
            result[4] += 0;
            result[5] += 0.000186046511627907;
            result[6] += 0;
          } else {
            result[0] += 0.9987441693577324;
            result[1] += 0;
            result[2] += 0.0004485109436670255;
            result[3] += 0.0006279153211338357;
            result[4] += 8.97021887334051e-05;
            result[5] += 8.97021887334051e-05;
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9815837937384899;
            result[1] += 0;
            result[2] += 0.01841620626151013;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
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
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.005632040050062578;
            result[3] += 0.9928035043804756;
            result[4] += 0;
            result[5] += 0.0015644555694618273;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)57) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)97) ) ) {
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
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)105.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)106.5) ) ) {
            result[0] += 0.9709724238026125;
            result[1] += 0;
            result[2] += 0.023222060957910014;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.005805515239477504;
          } else {
            result[0] += 0.9992520568436799;
            result[1] += 0;
            result[2] += 0.0007479431563201197;
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
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
            result[0] += 0;
            result[1] += 0.16666666666666666;
            result[2] += 0;
            result[3] += 0.8333333333333334;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
            result[0] += 0;
            result[1] += 0.008166295471417966;
            result[2] += 0;
            result[3] += 0.9903489235337788;
            result[4] += 0.0014847809948032665;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0399002493765586;
            result[3] += 0.9600997506234414;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)102) ) ) {
            result[0] += 0.9830508474576272;
            result[1] += 0.01694915254237288;
            result[2] += 0;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)16) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)98) ) ) {
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
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
            result[0] += 0.15384615384615385;
            result[1] += 0;
            result[2] += 0.8461538461538461;
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
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)56.5) ) ) {
            result[0] += 0.8238366571699905;
            result[1] += 0.004748338081671415;
            result[2] += 0.0033238366571699905;
            result[3] += 0.1671415004748338;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.000949667616334283;
          } else {
            result[0] += 0.9936936936936938;
            result[1] += 0;
            result[2] += 0.001801801801801802;
            result[3] += 0.004504504504504505;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
            result[0] += 0.9990270727580373;
            result[1] += 0;
            result[2] += 0.0007191201353637902;
            result[3] += 0;
            result[4] += 4.230118443316413e-05;
            result[5] += 0;
            result[6] += 0.00021150592216582064;
          } else {
            result[0] += 0;
            result[1] += 0.017421602787456445;
            result[2] += 0;
            result[3] += 0.9825783972125436;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02857142857142857;
            result[3] += 0.8571428571428571;
            result[4] += 0.11428571428571428;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.09634551495016612;
            result[1] += 0;
            result[2] += 0.0664451827242525;
            result[3] += 0.46511627906976744;
            result[4] += 0.37209302325581395;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)28) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9972527472527473;
            result[4] += 0;
            result[5] += 0.0027472527472527475;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0.8;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
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
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)100) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.4187234042553192;
            result[1] += 0;
            result[2] += 0.02723404255319149;
            result[3] += 0;
            result[4] += 0.5540425531914893;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
            result[0] += 0.43349753694581283;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5665024630541872;
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
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
            result[0] += 0.9578231292517008;
            result[1] += 0;
            result[2] += 0.008979591836734696;
            result[3] += 0.029659863945578235;
            result[4] += 0;
            result[5] += 0.00163265306122449;
            result[6] += 0.001904761904761905;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8840579710144928;
            result[4] += 0.09420289855072464;
            result[5] += 0.021739130434782608;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)6) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
            result[0] += 0;
            result[1] += 0.006844626967830253;
            result[2] += 0;
            result[3] += 0.9657768651608487;
            result[4] += 0.02737850787132101;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.023769100169779286;
            result[3] += 0;
            result[4] += 0.9745331069609507;
            result[5] += 0.001697792869269949;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)30.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
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
            result[3] += 0.5151515151515151;
            result[4] += 0.48484848484848486;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-5.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
            result[0] += 0.9990089197224975;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0009910802775024777;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.3333333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6666666666666666;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
            result[0] += 0.5274725274725275;
            result[1] += 0;
            result[2] += 0.004395604395604396;
            result[3] += 0.4676923076923077;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00043956043956043956;
          } else {
            result[0] += 0.9032411820781697;
            result[1] += 0;
            result[2] += 0.008102955195424213;
            result[3] += 0.08579599618684461;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.002859866539561487;
          }
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)83) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4.5) ) ) {
            result[0] += 0.998535745047373;
            result[1] += 0;
            result[2] += 0.0012058570198105081;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00025839793281653745;
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
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)217) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
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
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)51.5) ) ) {
            result[0] += 0.4043424825891028;
            result[1] += 0.0077836952068824255;
            result[2] += 0.00040966816878328555;
            result[3] += 0.5862351495288816;
            result[4] += 0.00040966816878328555;
            result[5] += 0;
            result[6] += 0.0008193363375665711;
          } else {
            result[0] += 0.6178331356267299;
            result[1] += 0;
            result[2] += 0.007908264136022143;
            result[3] += 0.3398576512455516;
            result[4] += 0.033807829181494664;
            result[5] += 0.00019770660340055358;
            result[6] += 0.00039541320680110717;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)10) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9820359281437127;
            result[1] += 0;
            result[2] += 0.014970059880239523;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.0014970059880239524;
            result[6] += 0.0014970059880239524;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)3.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.12151898734177215;
            result[1] += 0.02531645569620253;
            result[2] += 0.020253164556962026;
            result[3] += 0.8329113924050633;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
            result[0] += 0.11607142857142858;
            result[1] += 0.008928571428571428;
            result[2] += 0;
            result[3] += 0.7410714285714286;
            result[4] += 0.13392857142857142;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.002150537634408602;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.16344086021505377;
            result[4] += 0.8344086021505376;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)10.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.00968054211035818;
            result[2] += 0.018393030009680542;
            result[3] += 0.9719264278799613;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
            result[0] += 0;
            result[1] += 0.016260162601626018;
            result[2] += 0;
            result[3] += 0.14227642276422764;
            result[4] += 0.8414634146341463;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.009549795361527967;
            result[3] += 0.990450204638472;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-12) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)16) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
            result[0] += 0.979381443298969;
            result[1] += 0;
            result[2] += 0.020618556701030927;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.23809523809523808;
            result[3] += 0.7619047619047619;
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
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)5624.5) ) ) {
            result[0] += 0.9994179560556822;
            result[1] += 0;
            result[2] += 0.000533540282291313;
            result[3] += 0;
            result[4] += 4.8503662026483e-05;
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
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)42) ) ) {
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
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
            result[0] += 0.0013947001394700141;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9972105997210601;
            result[5] += 0.0013947001394700141;
            result[6] += 0;
          } else {
            result[0] += 0.01;
            result[1] += 0.015;
            result[2] += 0;
            result[3] += 0.975;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)42) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.975;
            result[4] += 0.025;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9;
            result[3] += 0;
            result[4] += 0.1;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91) ) ) {
            result[0] += 0.8764961915125136;
            result[1] += 0.005168661588683352;
            result[2] += 0.003264417845484222;
            result[3] += 0.11398258977149076;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.001088139281828074;
          } else {
            result[0] += 0.002556610664718773;
            result[1] += 0;
            result[2] += 0.004382761139517896;
            result[3] += 0.9926953981008035;
            result[4] += 0;
            result[5] += 0.0003652300949598247;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.009189640768588136;
            result[3] += 0.9832915622389307;
            result[4] += 0;
            result[5] += 0.007518796992481203;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08633093525179857;
            result[3] += 0;
            result[4] += 0.8992805755395683;
            result[5] += 0.014388489208633094;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
            result[0] += 0.9314285714285714;
            result[1] += 0;
            result[2] += 0.0014285714285714286;
            result[3] += 0.06714285714285714;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9950974230043999;
            result[1] += 0;
            result[2] += 0.0032683846637335014;
            result[3] += 0.0006285355122564426;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0010056568196103082;
          }
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
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)79) ) ) {
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.01272264631043257;
            result[3] += 0.9796437659033079;
            result[4] += 0;
            result[5] += 0.007633587786259542;
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11842105263157894;
            result[3] += 0;
            result[4] += 0.868421052631579;
            result[5] += 0.013157894736842105;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0009025270758122744;
            result[3] += 0.9972924187725631;
            result[4] += 0;
            result[5] += 0.0018050541516245488;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4.5) ) ) {
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
            result[0] += 0.9912739965095986;
            result[1] += 0;
            result[2] += 0.006108202443280977;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.002617801047120419;
          } else {
            result[0] += 0.9991424589988209;
            result[1] += 0;
            result[2] += 0.0008575410011791188;
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
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
            result[0] += 0.9881562665723882;
            result[1] += 0.001237404984974368;
            result[2] += 0.008661834894820575;
            result[3] += 0.00088386070355312;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0010606328442637441;
          } else {
            result[0] += 0.9061884115096571;
            result[1] += 0;
            result[2] += 0.007094994087504927;
            result[3] += 0.0843515963736697;
            result[4] += 0;
            result[5] += 0.00039416633819471815;
            result[6] += 0.001970831690973591;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
            result[0] += 0;
            result[1] += 0.027896995708154508;
            result[2] += 0;
            result[3] += 0.9721030042918455;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)51) ) ) {
            result[0] += 0;
            result[1] += 0.8;
            result[2] += 0;
            result[3] += 0.2;
            result[4] += 0;
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
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)103.5) ) ) {
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
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2991.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-5.5) ) ) {
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
            result[4] += 0.9487179487179487;
            result[5] += 0.05128205128205128;
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)1.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
            result[0] += 0.001422475106685633;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9966808914177335;
            result[4] += 0;
            result[5] += 0.001896633475580844;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.21052631578947367;
            result[2] += 0.6052631578947368;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.18421052631578946;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)27.5) ) ) {
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
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)10) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
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
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)51) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
            result[0] += 0.8666666666666667;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.13333333333333333;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.999163529903806;
            result[1] += 0;
            result[2] += 0.0006273525721455458;
            result[3] += 0.00020911752404851526;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.8895027624309392;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.11049723756906077;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
            result[0] += 0.025396825396825397;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9746031746031746;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9217445742904842;
            result[1] += 0;
            result[2] += 0.0025041736227045075;
            result[3] += 0.07366444073455759;
            result[4] += 0;
            result[5] += 0.00041736227045075126;
            result[6] += 0.001669449081803005;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
            result[0] += 0.21073558648111332;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7892644135188867;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9411764705882353;
            result[1] += 0;
            result[2] += 0.058823529411764705;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
            result[0] += 0.18604651162790697;
            result[1] += 0.13953488372093023;
            result[2] += 0;
            result[3] += 0.6744186046511628;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.4644808743169399;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5355191256830601;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
            result[0] += 0.9979767047629464;
            result[1] += 0.0008749384808880627;
            result[2] += 0.0009843057909990707;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00016405096516651177;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8461538461538461;
            result[3] += 0.15384615384615385;
            result[4] += 0;
            result[5] += 0;
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
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
            result[0] += 0.28444444444444444;
            result[1] += 0;
            result[2] += 0.002962962962962963;
            result[3] += 0.7125925925925926;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9734121122599705;
            result[1] += 0;
            result[2] += 0.019202363367799114;
            result[3] += 0.007385524372230428;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
            result[0] += 0.9973333333333333;
            result[1] += 0;
            result[2] += 0.0026666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.8421052631578947;
            result[1] += 0;
            result[2] += 0.10526315789473684;
            result[3] += 0.05263157894736842;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)9.5) ) ) {
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
            result[2] += 0.00966183574879227;
            result[3] += 0.9903381642512077;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.10961810466760961;
            result[1] += 0.009900990099009901;
            result[2] += 0;
            result[3] += 0.8804809052333805;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)102) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-9717) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.027586206896551724;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9724137931034482;
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-185) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9733333333333334;
            result[1] += 0;
            result[2] += 0.02666666666666667;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)37.5) ) ) {
            result[0] += 0.9991640892752655;
            result[1] += 0;
            result[2] += 0.0008359107247345983;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9998558558558559;
            result[1] += 0;
            result[2] += 7.207207207207208e-05;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 7.207207207207208e-05;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)78) ) ) {
            result[0] += 0.001224739742804654;
            result[1] += 0.012859767299448868;
            result[2] += 0;
            result[3] += 0.977342314758114;
            result[4] += 0.002449479485609308;
            result[5] += 0.00612369871402327;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.15436241610738255;
            result[3] += 0;
            result[4] += 0.8456375838926175;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
            result[0] += 0.9932546374367622;
            result[1] += 0;
            result[2] += 0.0064080944350758855;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0003372681281618887;
          } else {
            result[0] += 0.9985067197610752;
            result[1] += 0;
            result[2] += 0.0014932802389248383;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.03235294117647059;
            result[3] += 0;
            result[4] += 0.9676470588235294;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.01090014064697609;
            result[1] += 0;
            result[2] += 0.0024613220815752463;
            result[3] += 0.9866385372714487;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
            result[0] += 0.9558498896247241;
            result[1] += 0;
            result[2] += 0.013686534216335542;
            result[3] += 0.02781456953642384;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0026490066225165563;
          } else {
            result[0] += 0.08280254777070063;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8535031847133758;
            result[4] += 0.050955414012738856;
            result[5] += 0.012738853503184714;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2991.5) ) ) {
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)29) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)22.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.0007621951219512195;
            result[2] += 0;
            result[3] += 0.9992378048780488;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-16) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9655172413793104;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.034482758620689655;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)58.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
            result[0] += 0.999478759447485;
            result[1] += 0;
            result[2] += 0.0005212405525149857;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.7374265186152842;
            result[1] += 0.01502286087524494;
            result[2] += 0.009797517962116266;
            result[3] += 0.23514043109079036;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0026126714565643376;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
            result[0] += 0.6043956043956044;
            result[1] += 0.17582417582417584;
            result[2] += 0.21978021978021978;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.015006821282401092;
            result[3] += 0.984993178717599;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)40) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)41.5) ) ) {
            result[0] += 0.9271911663216011;
            result[1] += 0;
            result[2] += 0.003105590062111801;
            result[3] += 0.06935817805383022;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0003450655624568668;
          } else {
            result[0] += 0.9739130434782609;
            result[1] += 0;
            result[2] += 0.004347826086956522;
            result[3] += 0.02;
            result[4] += 0;
            result[5] += 0.0017391304347826088;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.09300341296928327;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9069965870307167;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)1.5) ) ) {
            result[0] += 0.9994819547573821;
            result[1] += 0;
            result[2] += 0.0005180452426178552;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9968287526427061;
            result[1] += 0;
            result[2] += 0.003171247357293869;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-1) ) ) {
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
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)52.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9911032028469751;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.008896797153024912;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)13) ) ) {
            result[0] += 0.9879518072289157;
            result[1] += 0;
            result[2] += 0.009970918155380143;
            result[3] += 0.0008309098462816785;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.001246364769422518;
          } else {
            result[0] += 0.9427402862985685;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.05725971370143149;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9955423476968797;
            result[1] += 0;
            result[2] += 0.004457652303120356;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
            result[0] += 0.9595375722543352;
            result[1] += 0;
            result[2] += 0.028901734104046242;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.011560693641618497;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)3.5) ) ) {
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
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
            result[0] += 0.9992427110942824;
            result[1] += 0;
            result[2] += 0.0007572889057175312;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9999427524616441;
            result[1] += 0;
            result[2] += 5.72475383558507e-05;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
            result[0] += 0.958904109589041;
            result[1] += 0;
            result[2] += 0.0410958904109589;
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
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
            result[0] += 0.0005777007510109763;
            result[1] += 0.00028885037550548814;
            result[2] += 0.00028885037550548814;
            result[3] += 0.9956672443674177;
            result[4] += 0.0014442518775274408;
            result[5] += 0.0017331022530329288;
            result[6] += 0;
          } else {
            result[0] += 0.6936936936936937;
            result[1] += 0.18018018018018017;
            result[2] += 0.12612612612612611;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)16) ) ) {
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
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)25) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07468879668049792;
            result[3] += 0.9253112033195021;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.014039566049776643;
            result[3] += 0.17166560306317805;
            result[4] += 0.813018506700702;
            result[5] += 0.0012763241863433313;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)40.5) ) ) {
            result[0] += 0.9892793329362716;
            result[1] += 0;
            result[2] += 0.00714711137581894;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00357355568790947;
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02857142857142857;
            result[3] += 0.9714285714285714;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)32) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
            result[0] += 0.08108108108108109;
            result[1] += 0;
            result[2] += 0.04054054054054054;
            result[3] += 0.8783783783783784;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9945079086115993;
            result[1] += 0;
            result[2] += 0.004393673110720563;
            result[3] += 0.0010984182776801407;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += 0.6464646464646465;
            result[1] += 0;
            result[2] += 0.1414141414141414;
            result[3] += 0.16161616161616163;
            result[4] += 0;
            result[5] += 0.010101010101010102;
            result[6] += 0.04040404040404041;
          } else {
            result[0] += 0.967741935483871;
            result[1] += 0;
            result[2] += 0.016129032258064516;
            result[3] += 0.016129032258064516;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
            result[0] += 0.9923142613151152;
            result[1] += 0;
            result[2] += 0.007685738684884714;
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
            result[0] += 0.9922077922077922;
            result[1] += 0;
            result[2] += 0.007792207792207792;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9999100314889788;
            result[1] += 0;
            result[2] += 8.99685110211426e-05;
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)22.5) ) ) {
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
            result[4] += 0.9986807387862797;
            result[5] += 0.0013192612137203166;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-52.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.02258836035078395;
            result[1] += 0.006909380813180973;
            result[2] += 0.013287270794578794;
            result[3] += 0.9566834972096732;
            result[4] += 0;
            result[5] += 0.0005314908317831517;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
            result[0] += 0;
            result[1] += 0.014209591474245116;
            result[2] += 0;
            result[3] += 0.5168738898756661;
            result[4] += 0.4689165186500888;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.051775147928994084;
            result[4] += 0.9482248520710059;
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
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)40) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)22) ) ) {
            result[0] += 0.9767634854771784;
            result[1] += 0;
            result[2] += 0.00636237897648686;
            result[3] += 0.015491009681881052;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0013831258644536654;
          } else {
            result[0] += 0.9985310319500551;
            result[1] += 0;
            result[2] += 0.0011017260374586854;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0003672420124862284;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)51.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0007496251874062968;
            result[3] += 0.9992503748125937;
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
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
            result[0] += 0.8962655601659751;
            result[1] += 0;
            result[2] += 0.0954356846473029;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.008298755186721992;
          } else {
            result[0] += 0.9961489088575096;
            result[1] += 0;
            result[2] += 0.0025673940949935813;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.0006418485237483953;
            result[6] += 0.0006418485237483953;
          }
        }
      }
    }
  }
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
            result[0] += 0.9912237932715748;
            result[1] += 0;
            result[2] += 0.0078010726474890294;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0009751340809361287;
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
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)102) ) ) {
            result[0] += 0.0269209197980931;
            result[1] += 0.007571508693213685;
            result[2] += 0.002243409983174425;
            result[3] += 0.9607403252944475;
            result[4] += 0.0014021312394840158;
            result[5] += 0.0011217049915872126;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.030042918454935622;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9699570815450643;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.013921113689095127;
            result[3] += 0.12993039443155452;
            result[4] += 0.8561484918793504;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06896551724137931;
            result[3] += 0.8620689655172413;
            result[4] += 0.05172413793103448;
            result[5] += 0.017241379310344827;
            result[6] += 0;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
            result[0] += 0.9969610296746514;
            result[1] += 0;
            result[2] += 0.001966392563460851;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0010725777618877368;
          } else {
            result[0] += 0.7737430167597765;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.22625698324022347;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-2) ) ) {
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
            result[2] += 0.16666666666666666;
            result[3] += 0.8333333333333334;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)111.5) ) ) {
            result[0] += 0.9749065670048052;
            result[1] += 0;
            result[2] += 0.00800854244527496;
            result[3] += 0.014949279231179925;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.002135611318739989;
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
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
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)79.5) ) ) {
            result[0] += 0.9579579579579579;
            result[1] += 0;
            result[2] += 0.042042042042042045;
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
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-108) ) ) {
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
            result[2] += 0.001287001287001287;
            result[3] += 0.9987129987129987;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
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
            result[0] += 0.9813953488372092;
            result[1] += 0;
            result[2] += 0.018604651162790697;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.02434077079107505;
            result[2] += 0;
            result[3] += 0.9756592292089249;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-41) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.35294117647058826;
            result[2] += 0;
            result[3] += 0.6470588235294118;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)18.5) ) ) {
            result[0] += 0;
            result[1] += 1;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)32.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9916792738275341;
            result[1] += 0;
            result[2] += 0.007564296520423601;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0007564296520423601;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += 0.9921259842519685;
            result[1] += 0;
            result[2] += 0.007874015748031496;
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
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
            result[0] += 0.586398631308811;
            result[1] += 0;
            result[2] += 0.014114627887082978;
            result[3] += 0.3391787852865697;
            result[4] += 0.06030795551753636;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.8290900518623289;
            result[1] += 0.004243281471004242;
            result[2] += 0.002357378595002357;
            result[3] += 0.16218764733616217;
            result[4] += 0.00047147571900047137;
            result[5] += 0;
            result[6] += 0.0016501650165016498;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
            result[0] += 0;
            result[1] += 0.03162055335968379;
            result[2] += 0;
            result[3] += 0.9683794466403162;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5714285714285714;
            result[5] += 0.42857142857142855;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
            result[0] += 0.9482608695652172;
            result[1] += 0;
            result[2] += 0.008260869565217389;
            result[3] += 0.040434782608695645;
            result[4] += 0;
            result[5] += 0.0008695652173913042;
            result[6] += 0.0021739130434782605;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9090909090909091;
            result[4] += 0.06611570247933884;
            result[5] += 0.024793388429752067;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)100.5) ) ) {
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
            result[2] += 0.047075606276747506;
            result[3] += 0;
            result[4] += 0.9529243937232525;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)22.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)27.5) ) ) {
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
            result[3] += 0.96875;
            result[4] += 0;
            result[5] += 0.03125;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
            result[0] += 0.6933333333333334;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.30666666666666664;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9979280745893148;
            result[1] += 0;
            result[2] += 0.0001479946721918011;
            result[3] += 0.0019239307384934143;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)63) ) ) {
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
            result[2] += 0.10112359550561797;
            result[3] += 0.898876404494382;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.09014423076923077;
            result[1] += 0.009615384615384616;
            result[2] += 0;
            result[3] += 0.8197115384615384;
            result[4] += 0.08052884615384616;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)16) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.3591549295774648;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6408450704225352;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)40) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
            result[0] += 0.02103960396039604;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9467821782178217;
            result[4] += 0.03217821782178218;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9403368541250356;
            result[1] += 0;
            result[2] += 0.007422209534684556;
            result[3] += 0.04995717956037682;
            result[4] += 0;
            result[5] += 0.00028546959748786756;
            result[6] += 0.0019982871824150727;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.011435832274459974;
            result[3] += 0.98856416772554;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9891472868217054;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.010852713178294573;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)1.5) ) ) {
            result[0] += 0.27409372236958446;
            result[1] += 0.0017683465959328027;
            result[2] += 0.013262599469496022;
            result[3] += 0.6569407603890363;
            result[4] += 0.05128205128205128;
            result[5] += 0.002652519893899204;
            result[6] += 0;
          } else {
            result[0] += 0.13503086419753085;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8240740740740741;
            result[4] += 0.04089506172839506;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)85) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.22569444444444445;
            result[4] += 0.7743055555555556;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.0010309278350515464;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9989690721649485;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)55) ) ) {
            result[0] += 0.9940106226692281;
            result[1] += 0.001356085433382303;
            result[2] += 0.004181263419595434;
            result[3] += 0.00033902135834557577;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00011300711944852526;
          } else {
            result[0] += 0.0625;
            result[1] += 0.140625;
            result[2] += 0;
            result[3] += 0.796875;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)61) ) ) {
            result[0] += 0.9963708004977188;
            result[1] += 0;
            result[2] += 0.00031107424305267526;
            result[3] += 0.0033181252592285357;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)49) ) ) {
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
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)106.5) ) ) {
            result[0] += 0.6495278069254984;
            result[1] += 0;
            result[2] += 0.008394543546694649;
            result[3] += 0.002098635886673662;
            result[4] += 0.3378803777544596;
            result[5] += 0.001049317943336831;
            result[6] += 0.001049317943336831;
          } else {
            result[0] += 0.3880597014925373;
            result[1] += 0;
            result[2] += 0.029850746268656716;
            result[3] += 0;
            result[4] += 0.582089552238806;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)79) ) ) {
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)35) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.96875;
            result[5] += 0.03125;
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
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-16) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.4;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)117) ) ) {
            result[0] += 0;
            result[1] += 0.00031289111389236547;
            result[2] += 0.006257822277847309;
            result[3] += 0.9928035043804756;
            result[4] += 0;
            result[5] += 0.0006257822277847309;
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
            result[0] += 0;
            result[1] += 0.057692307692307696;
            result[2] += 0;
            result[3] += 0.9423076923076923;
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
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
            result[0] += 0.8851599370739381;
            result[1] += 0;
            result[2] += 0.0015731515469323545;
            result[3] += 0.11291732214647789;
            result[4] += 0;
            result[5] += 0.00017479461632581716;
            result[6] += 0.00017479461632581716;
          } else {
            result[0] += 0.9910394265232975;
            result[1] += 0;
            result[2] += 0.0064516129032258064;
            result[3] += 0.0017921146953405018;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0007168458781362007;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
            result[0] += 0.9939962476547842;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.00600375234521576;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.35570469798657717;
            result[1] += 0;
            result[2] += 0.013422818791946308;
            result[3] += 0.6308724832214765;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)41) ) ) {
            result[0] += 0.9976198383704196;
            result[1] += 0.0006642311524410495;
            result[2] += 0.0013838149009188531;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00033211557622052476;
          } else {
            result[0] += 0.125;
            result[1] += 0;
            result[2] += 0.875;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
            result[0] += 0.25451490970180596;
            result[1] += 0;
            result[2] += 0.0008399832003359933;
            result[3] += 0.744645107097858;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9950886766712143;
            result[1] += 0;
            result[2] += 0.0032742155525238748;
            result[3] += 0.0016371077762619374;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15) ) ) {
            result[0] += 0.10526315789473684;
            result[1] += 0.47368421052631576;
            result[2] += 0.2631578947368421;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.15789473684210525;
            result[6] += 0;
          } else {
            result[0] += 0.0009337068160597573;
            result[1] += 0.001556178026766262;
            result[2] += 0.0028011204481792717;
            result[3] += 0.9943977591036415;
            result[4] += 0;
            result[5] += 0.0003112356053532524;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)77.5) ) ) {
            result[0] += 0.9979476846150976;
            result[1] += 0.0005970372028807047;
            result[2] += 0.0010821299302212772;
            result[3] += 3.731482518004404e-05;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00033583342662039635;
          } else {
            result[0] += 0.9715832205683356;
            result[1] += 0;
            result[2] += 0.02706359945872801;
            result[3] += 0.0013531799729364006;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-7) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.2;
            result[1] += 0;
            result[2] += 0.1125;
            result[3] += 0.6875;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)195.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79) ) ) {
            result[0] += 0;
            result[1] += 1;
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)49) ) ) {
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8275862068965517;
            result[3] += 0.1724137931034483;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.978965819456617;
            result[1] += 0;
            result[2] += 0.018404907975460124;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0026292725679228747;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)10) ) ) {
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
            result[4] += 0;
            result[5] += 1;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)50) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15) ) ) {
            result[0] += 0.09090909090909091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5454545454545454;
            result[5] += 0.36363636363636365;
            result[6] += 0;
          } else {
            result[0] += 0.002733734281027884;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9972662657189721;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)55.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)18) ) ) {
            result[0] += 0.9983984625240231;
            result[1] += 0.0004804612427930814;
            result[2] += 0.00040038436899423447;
            result[3] += 0.0004404228058936579;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0002802690582959641;
          } else {
            result[0] += 0;
            result[1] += 0.4;
            result[2] += 0;
            result[3] += 0.6;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)41) ) ) {
            result[0] += 0.9737261146496816;
            result[1] += 0;
            result[2] += 0.002388535031847134;
            result[3] += 0.02348726114649682;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00039808917197452237;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11904761904761904;
            result[3] += 0.8809523809523809;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)55) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9285714285714286;
            result[3] += 0.07142857142857142;
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.055291319857312726;
            result[1] += 0.016646848989298454;
            result[2] += 0;
            result[3] += 0.9280618311533888;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
            result[0] += 0.24148606811145512;
            result[1] += 0;
            result[2] += 0.07120743034055728;
            result[3] += 0;
            result[4] += 0.6873065015479877;
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
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
            result[0] += 0.2804878048780488;
            result[1] += 0;
            result[2] += 0.06097560975609756;
            result[3] += 0.6585365853658537;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.018575851393188854;
            result[4] += 0.9814241486068112;
            result[5] += 0;
            result[6] += 0;
          }
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)25) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
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
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
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
            result[2] += 0.00967741935483871;
            result[3] += 0.9419354838709677;
            result[4] += 0.035483870967741936;
            result[5] += 0.012903225806451613;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)57) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)97) ) ) {
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
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)68.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9241379310344827;
            result[1] += 0;
            result[2] += 0.06206896551724138;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.013793103448275862;
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-16) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)5624.5) ) ) {
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)33.5) ) ) {
            result[0] += 0.9956427015250545;
            result[1] += 0;
            result[2] += 0.004357298474945534;
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
            result[0] += 0.9601990049751244;
            result[1] += 0;
            result[2] += 0.02985074626865672;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.009950248756218907;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
            result[0] += 0.9990787655458314;
            result[1] += 0;
            result[2] += 0.0009212344541685859;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9998866020298237;
            result[1] += 0;
            result[2] += 0.00011339797017633384;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)46.5) ) ) {
            result[0] += 0.9954198473282443;
            result[1] += 0;
            result[2] += 0.004580152671755725;
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
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)73) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)97.5) ) ) {
            result[0] += 0.029968997588701342;
            result[1] += 0.006889424733034792;
            result[2] += 0.010334137099552188;
            result[3] += 0.9517740268687565;
            result[4] += 0.0003444712366517396;
            result[5] += 0.0006889424733034792;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.014992503748125937;
            result[3] += 0;
            result[4] += 0.9775112443778111;
            result[5] += 0.0074962518740629685;
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
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)51.5) ) ) {
            result[0] += 0.4744635841644001;
            result[1] += 0;
            result[2] += 0.0009066183136899365;
            result[3] += 0.5240253853127833;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0006044122091266244;
          } else {
            result[0] += 0.643762781186094;
            result[1] += 0;
            result[2] += 0.0032719836400817988;
            result[3] += 0.35214723926380365;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0008179959100204497;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
            result[0] += 0.9969799924499811;
            result[1] += 0;
            result[2] += 0.003020007550018875;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9568380213385063;
            result[1] += 0;
            result[2] += 0.00921435499515034;
            result[3] += 0.03297769156159069;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0009699321047526673;
          }
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
            result[0] += 0.49191685912240185;
            result[1] += 0;
            result[2] += 0.016166281755196306;
            result[3] += 0.49191685912240185;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.01905829596412556;
            result[2] += 0;
            result[3] += 0.9809417040358744;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)97) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
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
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
            result[0] += 0.003745318352059925;
            result[1] += 0.04119850187265917;
            result[2] += 0;
            result[3] += 0.018726591760299626;
            result[4] += 0.9363295880149812;
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
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-103) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
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
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.24390243902439024;
            result[1] += 0.3902439024390244;
            result[2] += 0.36585365853658536;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.072992700729927;
            result[4] += 0.927007299270073;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.005253940455341506;
            result[3] += 0.3169877408056042;
            result[4] += 0.6777583187390543;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)41) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.96045197740113;
            result[1] += 0;
            result[2] += 0.03954802259887006;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)3.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)875.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            result[0] += 0.9908151549942595;
            result[1] += 0;
            result[2] += 0.008036739380022964;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0011481056257175663;
          } else {
            result[0] += 0.9993189336446779;
            result[1] += 0;
            result[2] += 0.0006810663553220471;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += 0.8980662983425415;
            result[1] += 0.0030386740331491712;
            result[2] += 0.0013812154696132596;
            result[3] += 0.09696132596685082;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0005524861878453039;
          } else {
            result[0] += 0;
            result[1] += 0.0011564035848511131;
            result[2] += 0.008962127782596125;
            result[3] += 0.9083550159005493;
            result[4] += 0.08152645273200347;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-189.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9704260651629073;
            result[1] += 0;
            result[2] += 0.005513784461152882;
            result[3] += 0.02180451127819549;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.002255639097744361;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0.3333333333333333;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9990530303030303;
            result[4] += 0;
            result[5] += 0.000946969696969697;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9979633401221996;
            result[5] += 0.002036659877800407;
            result[6] += 0;
          } else {
            result[0] += 0.1437125748502994;
            result[1] += 0;
            result[2] += 0.1377245508982036;
            result[3] += 0.6946107784431138;
            result[4] += 0;
            result[5] += 0.023952095808383235;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)109.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)40) ) ) {
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
            result[4] += 0.9945054945054945;
            result[5] += 0.005494505494505495;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)17.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.04986642920747997;
            result[1] += 0;
            result[2] += 0.008014247551202136;
            result[3] += 0.9421193232413179;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)27.5) ) ) {
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
            result[2] += 0.00980392156862745;
            result[3] += 0.9859943977591037;
            result[4] += 0;
            result[5] += 0.004201680672268907;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)107) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)99.5) ) ) {
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
            result[3] += 0.4864864864864865;
            result[4] += 0.5135135135135135;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
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
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            result[0] += 0.9936628643852978;
            result[1] += 0;
            result[2] += 0.005703422053231939;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0006337135614702154;
          } else {
            result[0] += 0.997791519434629;
            result[1] += 0.00022084805653710247;
            result[2] += 0;
            result[3] += 0.001987632508833922;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
            result[0] += 0.9987138263665595;
            result[1] += 0;
            result[2] += 0.0012861736334405145;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9999184006527948;
            result[1] += 0;
            result[2] += 0;
            result[3] += 8.159934720522235e-05;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
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
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
            result[0] += 0.47783155856727977;
            result[1] += 0.002323330106485963;
            result[2] += 0.004646660212971926;
            result[3] += 0.5146176185866409;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0005808325266214908;
          } else {
            result[0] += 0.9774675972083748;
            result[1] += 0;
            result[2] += 0.0009970089730807576;
            result[3] += 0.021535393818544368;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)19) ) ) {
            result[0] += 0.9766136576239476;
            result[1] += 0;
            result[2] += 0.005612722170252572;
            result[3] += 0.01777362020579981;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9356516087097823;
            result[1] += 0;
            result[2] += 0.010724731881702957;
            result[3] += 0.05102372440688983;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0025999350016249595;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0.2857142857142857;
            result[2] += 0.2857142857142857;
            result[3] += 0.42857142857142855;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.010923535253227408;
            result[3] += 0.9890764647467726;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-5) ) ) {
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
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 100;
  result[1] /= 100;
  result[2] /= 100;
  result[3] /= 100;
  result[4] /= 100;
  result[5] /= 100;
  result[6] /= 100;
  
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
    

    FILE* file = fopen("./codegen/dataset_148/split_4/test_data.csv", "r");
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
