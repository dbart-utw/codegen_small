
#include "header.h"


static const int32_t num_class[] = {  2, };

int32_t get_num_target(void) {
  return N_TARGET;
}
void get_num_class(int32_t* out) {
  for (int i = 0; i < N_TARGET; ++i) {
    out[i] = num_class[i];
  }
}
int32_t get_num_feature(void) {
  return 34;
}
const char* get_threshold_type(void) {
  return "float32";
}
const char* get_leaf_output_type(void) {
  return "float32";
}


void predict(union Entry* data, int pred_margin, float* result) {
  unsigned int tmp;
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02312999917194247246) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.8788850009441375732) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.09574468085106383;
        result[1] += 0.9042553191489362;
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.2245049998164176941) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.3908900022506713867) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.004650000017136335373) ) ) {
        result[0] += 0.5531914893617021;
        result[1] += 0.44680851063829785;
      } else {
        result[0] += 0.9803921568627451;
        result[1] += 0.0196078431372549;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.8296200037002563477) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.7949399948120117188) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.420354992151260376) ) ) {
        result[0] += 0.875;
        result[1] += 0.125;
      } else {
        result[0] += 0.08943089430894309;
        result[1] += 0.9105691056910569;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.5526149868965148926) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.9848499894142150879) ) ) {
        result[0] += 0.2808988764044944;
        result[1] += 0.7191011235955056;
      } else {
        result[0] += 0.8461538461538461;
        result[1] += 0.15384615384615385;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1547899991273880005) ) ) {
        result[0] += 0.0379746835443038;
        result[1] += 0.9620253164556962;
      } else {
        result[0] += 0.38461538461538464;
        result[1] += 0.6153846153846154;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.9924199879169464111) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.3409650027751922607) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.4444444444444444;
        result[1] += 0.5555555555555556;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.4157600104808807373) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.2102850005030632019) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1272249966859817505) ) ) {
        result[0] += 0.9743589743589743;
        result[1] += 0.02564102564102564;
      } else {
        result[0] += 0.35185185185185186;
        result[1] += 0.6481481481481481;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1639450043439865112) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.05263157894736842;
        result[1] += 0.9473684210526315;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.03030500002205371857) ) ) {
        result[0] += 0.7692307692307693;
        result[1] += 0.23076923076923078;
      } else {
        result[0] += 0.0440251572327044;
        result[1] += 0.9559748427672956;
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.04545500129461288452) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.4117647058823529;
        result[1] += 0.5882352941176471;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.2087499946355819702) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.5833333333333334;
        result[1] += 0.4166666666666667;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.006755000111297704279) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.3912100046873092651) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.00741000007838010788) ) ) {
        result[0] += 0.6;
        result[1] += 0.4;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.09519000351428985596) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.038461538461538464;
        result[1] += 0.9615384615384616;
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.89342498779296875) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1272249966859817505) ) ) {
        result[0] += 0.8181818181818182;
        result[1] += 0.18181818181818182;
      } else {
        result[0] += 0.08571428571428572;
        result[1] += 0.9142857142857143;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1472750008106231689) ) ) {
        result[0] += 0.75;
        result[1] += 0.25;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.001044999997247941792) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1134350001811981201) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.180759994313120842) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.7142857142857143;
        result[1] += 0.2857142857142857;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.4159100055694580078) ) ) {
        result[0] += 0.6923076923076923;
        result[1] += 0.3076923076923077;
      } else {
        result[0] += 0.043478260869565216;
        result[1] += 0.9565217391304348;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.7755099833011627197) ) ) {
        result[0] += 0.3;
        result[1] += 0.7;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.9508799910545349121) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.47368421052631576;
        result[1] += 0.5263157894736842;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2630599960684776306) ) ) {
        result[0] += 0.9411764705882353;
        result[1] += 0.058823529411764705;
      } else {
        result[0] += 0.0641025641025641;
        result[1] += 0.9358974358974359;
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.9407549798488616943) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.5;
        result[1] += 0.5;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.4900250136852264404) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.1730750054121017456) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.714935004711151123) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.9509800076484680176) ) ) {
        result[0] += 0.11494252873563218;
        result[1] += 0.8850574712643678;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.440670013427734375) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2630599960684776306) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.03624500147998332977) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.2282350063323974609) ) ) {
        result[0] += 0.8823529411764706;
        result[1] += 0.11764705882352941;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.786119997501373291) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.12280701754385964;
        result[1] += 0.8771929824561403;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.8766050040721893311) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.1130952380952381;
        result[1] += 0.8869047619047619;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.9924199879169464111) ) ) {
        result[0] += 0.9473684210526315;
        result[1] += 0.05263157894736842;
      } else {
        result[0] += 0.5;
        result[1] += 0.5;
      }
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5490350127220153809) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03320500021800398827) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.09941520467836257;
        result[1] += 0.9005847953216374;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3769599944353103638) ) ) {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1234450042247772217) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.2201749980449676514) ) ) {
        result[0] += 0.8;
        result[1] += 0.2;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.3036350011825561523) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.16666666666666666;
        result[1] += 0.8333333333333334;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.9799099862575531006) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.5555555555555556;
        result[1] += 0.4444444444444444;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.7955000102519989014) ) ) {
        result[0] += 0.04819277108433735;
        result[1] += 0.9518072289156626;
      } else {
        result[0] += 0.6153846153846154;
        result[1] += 0.38461538461538464;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.08074534161490683;
        result[1] += 0.9192546583850931;
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9098950028419494629) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.1146500036120414734) ) ) {
        result[0] += 0.375;
        result[1] += 0.625;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.1797650009393692017) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4395599961280822754) ) ) {
        result[0] += 0.9487179487179487;
        result[1] += 0.05128205128205128;
      } else {
        result[0] += 0.05263157894736842;
        result[1] += 0.9473684210526315;
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.6561149954795837402) ) ) {
        result[0] += 0.25;
        result[1] += 0.75;
      } else {
        result[0] += 0.022988505747126436;
        result[1] += 0.9770114942528736;
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.4405250102281570435) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.1328649967908859253) ) ) {
        result[0] += 0.42857142857142855;
        result[1] += 0.5714285714285714;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8580650091171264648) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.9166666666666666;
        result[1] += 0.08333333333333333;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4372749924659729004) ) ) {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2007849961519241333) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.596119999885559082) ) ) {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.566480003297328949) ) ) {
        result[0] += 0.6;
        result[1] += 0.4;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.89342498779296875) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6880050003528594971) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.04519774011299435;
        result[1] += 0.9548022598870056;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4414650052785873413) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.05660500004887580872) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.7169799953699111938) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2816650047898292542) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.218240007758140564) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.8181818181818182;
        result[1] += 0.18181818181818182;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.08571428571428572;
        result[1] += 0.9142857142857143;
      }
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1196150034666061401) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1437549963593482971) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3148300051689147949) ) ) {
        result[0] += 0.9814814814814815;
        result[1] += 0.018518518518518517;
      } else {
        result[0] += 0.6153846153846154;
        result[1] += 0.38461538461538464;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.02862500026822090149) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.10526315789473684;
        result[1] += 0.8947368421052632;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.03905000165104866028) ) ) {
        result[0] += 0.7142857142857143;
        result[1] += 0.2857142857142857;
      } else {
        result[0] += 0.10077519379844961;
        result[1] += 0.8992248062015504;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2000949978828430176) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.2476099953055381775) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.1111111111111111;
        result[1] += 0.8888888888888888;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.8441950082778930664) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.6;
        result[1] += 0.4;
      }
    }
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8646399974822998047) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.9165700078010559082) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.20994475138121546;
        result[1] += 0.7900552486187845;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7287800014019012451) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.6363636363636364;
        result[1] += 0.36363636363636365;
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.9534749984741210938) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.3333333333333333;
        result[1] += 0.6666666666666666;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.9933899939060211182) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.9580449759960174561) ) ) {
        result[0] += 0.15853658536585366;
        result[1] += 0.8414634146341463;
      } else {
        result[0] += 0.6923076923076923;
        result[1] += 0.3076923076923077;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.1553400065749883652) ) ) {
        result[0] += 0.9375;
        result[1] += 0.0625;
      } else {
        result[0] += 0.5;
        result[1] += 0.5;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.03218000102788209915) ) ) {
        result[0] += 0.05405405405405406;
        result[1] += 0.9459459459459459;
      } else {
        result[0] += 0.20588235294117646;
        result[1] += 0.7941176470588235;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.3644200116395950317) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2356900051236152649) ) ) {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.1837400048971176147) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.01334000006318092346) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.3333333333333333;
        result[1] += 0.6666666666666666;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.8788850009441375732) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.8275400102138519287) ) ) {
        result[0] += 0.5384615384615384;
        result[1] += 0.46153846153846156;
      } else {
        result[0] += 0.07222222222222222;
        result[1] += 0.9277777777777778;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02312999917194247246) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.189065001904964447) ) ) {
        result[0] += 0.22641509433962265;
        result[1] += 0.7735849056603774;
      } else {
        result[0] += 0.024390243902439025;
        result[1] += 0.975609756097561;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.5384615384615384;
        result[1] += 0.46153846153846156;
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.2399550005793571472) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.4307450056076049805) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.2506300061941146851) ) ) {
        result[0] += 0.4;
        result[1] += 0.6;
      } else {
        result[0] += 0.98;
        result[1] += 0.02;
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.8292500078678131104) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.02631578947368421;
        result[1] += 0.9736842105263158;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.09523999691009521484) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.09655172413793103;
        result[1] += 0.903448275862069;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2179500013589859009) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7890999913215637207) ) ) {
        result[0] += 0.9230769230769231;
        result[1] += 0.07692307692307693;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.8484949767589569092) ) ) {
        result[0] += 0.143646408839779;
        result[1] += 0.856353591160221;
      } else {
        result[0] += 0.8181818181818182;
        result[1] += 0.18181818181818182;
      }
    }
  }
  if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0001250000059371814132) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.04602999985218048096) ) ) {
        result[0] += 0.15151515151515152;
        result[1] += 0.8484848484848485;
      } else {
        result[0] += 0.9473684210526315;
        result[1] += 0.05263157894736842;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5370100140571594238) ) ) {
        result[0] += 0.8333333333333334;
        result[1] += 0.16666666666666666;
      } else {
        result[0] += 0.09554140127388536;
        result[1] += 0.9044585987261147;
      }
    }
  } else {
    result[0] += 1;
    result[1] += 0;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0001250000059371814132) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.1181800030171871185) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.05212000012397766113) ) ) {
        result[0] += 0.7;
        result[1] += 0.3;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.04708499833941459656) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.0967741935483871;
        result[1] += 0.9032258064516129;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7950850129127502441) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.139164995402097702) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.1111111111111111;
        result[1] += 0.8888888888888888;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.03030500002205371857) ) ) {
        result[0] += 0.8461538461538461;
        result[1] += 0.15384615384615385;
      } else {
        result[0] += 0.09444444444444444;
        result[1] += 0.9055555555555556;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.03839499969035387039) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2345400005578994751) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.05153499916195869446) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.6923076923076923;
        result[1] += 0.3076923076923077;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-0.1473699957132339478) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.041666666666666664;
        result[1] += 0.9583333333333334;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6836099922657012939) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.7688849866390228271) ) ) {
        result[0] += 0.5;
        result[1] += 0.5;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03106500022113323212) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.13333333333333333;
        result[1] += 0.8666666666666667;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.938935011625289917) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2356900051236152649) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2175250053405761719) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.7857142857142857;
        result[1] += 0.21428571428571427;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.811185002326965332) ) ) {
        result[0] += 0.05454545454545454;
        result[1] += 0.9454545454545454;
      } else {
        result[0] += 0.85;
        result[1] += 0.15;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.0113399997353553772) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3462750017642974854) ) ) {
        result[0] += 0.9615384615384616;
        result[1] += 0.038461538461538464;
      } else {
        result[0] += 0.15;
        result[1] += 0.85;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.05785123966942149;
        result[1] += 0.9421487603305785;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.9598099887371063232) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.9387849867343902588) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.875;
        result[1] += 0.125;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.06134499981999397278) ) ) {
        result[0] += 0.9;
        result[1] += 0.1;
      } else {
        result[0] += 0.125;
        result[1] += 0.875;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9664799869060516357) ) ) {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.3333350121974945068) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9127549827098846436) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.1338150054216384888) ) ) {
        result[0] += 0.6511627906976745;
        result[1] += 0.3488372093023256;
      } else {
        result[0] += 0.11242603550295859;
        result[1] += 0.8875739644970414;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.05560999922454357147) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.6925950050354003906) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.5473499894142150879) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.75;
        result[1] += 0.25;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1826099976897239685) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.058823529411764705;
        result[1] += 0.9411764705882353;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4965550005435943604) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.3668549954891204834) ) ) {
        result[0] += 0.5;
        result[1] += 0.5;
      } else {
        result[0] += 0.95;
        result[1] += 0.05;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
        result[0] += 0.7272727272727273;
        result[1] += 0.2727272727272727;
      } else {
        result[0] += 0.1377245508982036;
        result[1] += 0.8622754491017964;
      }
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.189065001904964447) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.4126200079917907715) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.742129981517791748) ) ) {
        result[0] += 0.9074074074074074;
        result[1] += 0.09259259259259259;
      } else {
        result[0] += 0.23529411764705882;
        result[1] += 0.7647058823529411;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.6724149882793426514) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9622650146484375) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.06666666666666667;
        result[1] += 0.9333333333333333;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0002000000094994902611) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.1181800030171871185) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4562249928712844849) ) ) {
        result[0] += 0.9375;
        result[1] += 0.0625;
      } else {
        result[0] += 0.11764705882352941;
        result[1] += 0.8823529411764706;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9561049938201904297) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.606839984655380249) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8989500105381011963) ) ) {
        result[0] += 0.10067114093959731;
        result[1] += 0.8993288590604027;
      } else {
        result[0] += 0.7;
        result[1] += 0.3;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.7068399935960769653) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.9044649899005889893) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6503849923610687256) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.14450867052023122;
        result[1] += 0.8554913294797688;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.2253299951553344727) ) ) {
        result[0] += 0.7142857142857143;
        result[1] += 0.2857142857142857;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.08387096774193549;
        result[1] += 0.9161290322580645;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.07459499873220920563) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.8774850070476531982) ) ) {
        result[0] += 0.8181818181818182;
        result[1] += 0.18181818181818182;
      } else {
        result[0] += 0.25;
        result[1] += 0.75;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.01052500028163194656) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.85;
        result[1] += 0.15;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2356900051236152649) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.8656899929046630859) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.1123099997639656067) ) ) {
        result[0] += 0.8888888888888888;
        result[1] += 0.1111111111111111;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8900200128555297852) ) ) {
        result[0] += 0.14792899408284024;
        result[1] += 0.8520710059171598;
      } else {
        result[0] += 0.9090909090909091;
        result[1] += 0.09090909090909091;
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.2891950011253356934) ) ) {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.6160149872303009033) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.002039999933913350105) ) ) {
        result[0] += 0.75;
        result[1] += 0.25;
      } else {
        result[0] += 0.9523809523809523;
        result[1] += 0.047619047619047616;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.8226949870586395264) ) ) {
        result[0] += 0.11627906976744186;
        result[1] += 0.8837209302325582;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.732675015926361084) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.2812850028276443481) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.03937007874015748;
        result[1] += 0.9606299212598425;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.9571999907493591309) ) ) {
        result[0] += 0.5;
        result[1] += 0.5;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2248550057411193848) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.07832000358030200005) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.571644999086856842) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
        result[0] += 0.8571428571428571;
        result[1] += 0.14285714285714285;
      } else {
        result[0] += 0.07100591715976332;
        result[1] += 0.9289940828402367;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9257999956607818604) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.8295449912548065186) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.4157600104808807373) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2000949978828430176) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.9454649984836578369) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.14516129032258066;
        result[1] += 0.8548387096774194;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8989500105381011963) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.09377000108361244202) ) ) {
        result[0] += 0.7777777777777778;
        result[1] += 0.2222222222222222;
      } else {
        result[0] += 0.08670520231213873;
        result[1] += 0.9132947976878613;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.8369050025939941406) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.01267000008374452591) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.9;
        result[1] += 0.1;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.2727272727272727;
        result[1] += 0.7272727272727273;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2356900051236152649) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.09527499973773956299) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.1316799968481063843) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9105649888515472412) ) ) {
        result[0] += 0.019230769230769232;
        result[1] += 0.9807692307692307;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7223000228404998779) ) ) {
        result[0] += 0.4230769230769231;
        result[1] += 0.5769230769230769;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.2102850005030632019) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.4375250041484832764) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.4105750024318695068) ) ) {
        result[0] += 0.7142857142857143;
        result[1] += 0.2857142857142857;
      } else {
        result[0] += 0.9591836734693877;
        result[1] += 0.04081632653061224;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.6385599970817565918) ) ) {
        result[0] += 0.041666666666666664;
        result[1] += 0.9583333333333334;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.7955000102519989014) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8989500105381011963) ) ) {
        result[0] += 0.08053691275167785;
        result[1] += 0.9194630872483222;
      } else {
        result[0] += 0.8333333333333334;
        result[1] += 0.16666666666666666;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5545850098133087158) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.5729900002479553223) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.12154696132596685;
        result[1] += 0.8784530386740331;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.6552150249481201172) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.6363636363636364;
        result[1] += 0.36363636363636365;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.08240000158548355103) ) ) {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3404799997806549072) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1519400030374526978) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.136410001665353775) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.1724137931034483;
        result[1] += 0.8275862068965517;
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8989500105381011963) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.7240200042724609375) ) ) {
        result[0] += 0.09859154929577464;
        result[1] += 0.9014084507042254;
      } else {
        result[0] += 0.6923076923076923;
        result[1] += 0.3076923076923077;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0002000000094994902611) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.1094800010323524475) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.249874994158744812) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.08381999842822551727) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.4375;
        result[1] += 0.5625;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2630599960684776306) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.0969000011682510376) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.8;
        result[1] += 0.2;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.9741150140762329102) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.09558823529411764;
        result[1] += 0.9044117647058824;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.149645000696182251) ) ) {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.1630349978804588318) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.02862500026822090149) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.25;
        result[1] += 0.75;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9941000044345855713) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.8523750007152557373) ) ) {
        result[0] += 0.07236842105263158;
        result[1] += 0.9276315789473685;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.06134499981999397278) ) ) {
        result[0] += 0.9545454545454546;
        result[1] += 0.045454545454545456;
      } else {
        result[0] += 0.5333333333333333;
        result[1] += 0.4666666666666667;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.8024500012397766113) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.0975609756097561;
        result[1] += 0.9024390243902439;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.9387849867343902588) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.3781900107860565186) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.32142857142857145;
        result[1] += 0.6785714285714286;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2630599960684776306) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7192199826240539551) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.07935000211000442505) ) ) {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.9280549883842468262) ) ) {
        result[0] += 0.02631578947368421;
        result[1] += 0.9736842105263158;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.4264699965715408325) ) ) {
        result[0] += 0.5263157894736842;
        result[1] += 0.47368421052631576;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4454549998044967651) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2000949978828430176) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.4291999898850917816) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.4666666666666667;
        result[1] += 0.5333333333333333;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.9826250076293945312) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
        result[0] += 0.12142857142857143;
        result[1] += 0.8785714285714286;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.2803950011730194092) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.23333333333333334;
        result[1] += 0.7666666666666667;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9664799869060516357) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.01111999992281198502) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.1927400007843971252) ) ) {
        result[0] += 0.4482758620689655;
        result[1] += 0.5517241379310345;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2262849956750869751) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.14012738853503184;
        result[1] += 0.8598726114649682;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.806565016508102417) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.4309350103139877319) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.9500699937343597412) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.5191499888896942139) ) ) {
        result[0] += 0.8571428571428571;
        result[1] += 0.14285714285714285;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4965550005435943604) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.2175199953489936888) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.8;
        result[1] += 0.2;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0001250000059371814132) ) ) {
        result[0] += 0.5277777777777778;
        result[1] += 0.4722222222222222;
      } else {
        result[0] += 0.06521739130434782;
        result[1] += 0.9347826086956522;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.1922499984502792358) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4975449889898300171) ) ) {
        result[0] += 0.9705882352941176;
        result[1] += 0.029411764705882353;
      } else {
        result[0] += 0.06666666666666667;
        result[1] += 0.9333333333333333;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5370100140571594238) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.04918032786885246;
        result[1] += 0.9508196721311475;
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.8369050025939941406) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.07096999883651733398) ) ) {
        result[0] += 0.25;
        result[1] += 0.75;
      } else {
        result[0] += 0.9375;
        result[1] += 0.0625;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8989500105381011963) ) ) {
        result[0] += 0.13333333333333333;
        result[1] += 0.8666666666666667;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4965550005435943604) ) ) {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.7641499936580657959) ) ) {
        result[0] += 0.5;
        result[1] += 0.5;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.001139999949373304844) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2356900051236152649) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.18333333333333332;
        result[1] += 0.8166666666666667;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.08108108108108109;
        result[1] += 0.918918918918919;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0002000000094994902611) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.06529000028967857361) ) ) {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7340849936008453369) ) ) {
        result[0] += 0.9444444444444444;
        result[1] += 0.05555555555555555;
      } else {
        result[0] += 0.13333333333333333;
        result[1] += 0.8666666666666667;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2000949978828430176) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.786119997501373291) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.06569343065693431;
        result[1] += 0.9343065693430657;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.1205449998378753662) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7340849936008453369) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.02796499989926815033) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.8095238095238095;
        result[1] += 0.19047619047619047;
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.712439998984336853) ) ) {
        result[0] += 0.125;
        result[1] += 0.875;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.9607850015163421631) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.2812850028276443481) ) ) {
        result[0] += 0.68;
        result[1] += 0.32;
      } else {
        result[0] += 0.06666666666666667;
        result[1] += 0.9333333333333333;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.3029199987649917603) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.8071799874305725098) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.1286549707602339;
        result[1] += 0.8713450292397661;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4965550005435943604) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.4931400120258331299) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.9759500026702880859) ) ) {
        result[0] += 0.6;
        result[1] += 0.4;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.969765007495880127) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.09523809523809523;
        result[1] += 0.9047619047619048;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.05869499966502189636) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.3679049909114837646) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.04447000101208686829) ) ) {
        result[0] += 0.5;
        result[1] += 0.5;
      } else {
        result[0] += 0.9791666666666666;
        result[1] += 0.020833333333333332;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3458050042390823364) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.03571428571428571;
        result[1] += 0.9642857142857143;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3303350061178207397) ) ) {
        result[0] += 0.41935483870967744;
        result[1] += 0.5806451612903226;
      } else {
        result[0] += 0.06060606060606061;
        result[1] += 0.9393939393939394;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.1220000013709068298) ) ) {
        result[0] += 0.5652173913043478;
        result[1] += 0.43478260869565216;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8646399974822998047) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3449150025844573975) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.3645649999380111694) ) ) {
        result[0] += 0.8125;
        result[1] += 0.1875;
      } else {
        result[0] += 0.14285714285714285;
        result[1] += 0.8571428571428571;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5176050066947937012) ) ) {
        result[0] += 0.8333333333333334;
        result[1] += 0.16666666666666666;
      } else {
        result[0] += 0.08196721311475409;
        result[1] += 0.9180327868852459;
      }
    }
  } else {
    result[0] += 1;
    result[1] += 0;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0009699999936856329441) ) ) {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.2337449938058853149) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.249874994158744812) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1228300030343234539) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.6470588235294118;
        result[1] += 0.35294117647058826;
      }
    }
  } else {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8646399974822998047) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.4411150068044662476) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.11842105263157894;
        result[1] += 0.881578947368421;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1488099955022335052) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.5) ) ) {
        result[0] += 0.8;
        result[1] += 0.2;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.03030500002205371857) ) ) {
        result[0] += 0.9285714285714286;
        result[1] += 0.07142857142857142;
      } else {
        result[0] += 0.09444444444444444;
        result[1] += 0.9055555555555556;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9361749887466430664) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.5961750000715255737) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.4555999934673309326) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.3572449982166290283) ) ) {
        result[0] += 0.08823529411764706;
        result[1] += 0.9117647058823529;
      } else {
        result[0] += 0.7733333333333333;
        result[1] += 0.22666666666666666;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9366349875926971436) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.08849557522123894;
        result[1] += 0.911504424778761;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9941000044345855713) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.3010550141334533691) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.25757575757575757;
        result[1] += 0.7424242424242424;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.4261800050735473633) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.02912621359223301;
        result[1] += 0.970873786407767;
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.04545500129461288452) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.3659100085496902466) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.2222222222222222;
        result[1] += 0.7777777777777778;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.9812499880790710449) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.75;
        result[1] += 0.25;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.2102850005030632019) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4163150042295455933) ) ) {
        result[0] += 0.9523809523809523;
        result[1] += 0.047619047619047616;
      } else {
        result[0] += 0.16279069767441862;
        result[1] += 0.8372093023255814;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9622650146484375) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.11594202898550725;
        result[1] += 0.8840579710144928;
      }
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.2102850005030632019) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.3894249945878982544) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.0004499999922700226307) ) ) {
        result[0] += 0.5862068965517241;
        result[1] += 0.41379310344827586;
      } else {
        result[0] += 0.9761904761904762;
        result[1] += 0.023809523809523808;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.3427699953317642212) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.06451612903225806;
        result[1] += 0.9354838709677419;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9664799869060516357) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.05;
        result[1] += 0.95;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.5496449917554855347) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.5294117647058824;
        result[1] += 0.47058823529411764;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.08240000158548355103) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.02470999956130981445) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.3611799925565719604) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.3103448275862069;
        result[1] += 0.6896551724137931;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.1970499977469444275) ) ) {
        result[0] += 0.7391304347826086;
        result[1] += 0.2608695652173913;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9946700036525726318) ) ) {
        result[0] += 0.1;
        result[1] += 0.9;
      } else {
        result[0] += 0.625;
        result[1] += 0.375;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.6086956521739131;
        result[1] += 0.391304347826087;
      }
    }
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9236549735069274902) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.08204999938607215881) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.2186749950051307678) ) ) {
        result[0] += 0.975;
        result[1] += 0.025;
      } else {
        result[0] += 0.22;
        result[1] += 0.78;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.8987649977207183838) ) ) {
        result[0] += 0.9090909090909091;
        result[1] += 0.09090909090909091;
      } else {
        result[0] += 0.11194029850746269;
        result[1] += 0.8880597014925373;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.7182199954986572266) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4246549904346466064) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.04028999991714954376) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.006755000111297704279) ) ) {
        result[0] += 0.95;
        result[1] += 0.05;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.8917249739170074463) ) ) {
        result[0] += 0.12941176470588237;
        result[1] += 0.8705882352941177;
      } else {
        result[0] += 0.8888888888888888;
        result[1] += 0.1111111111111111;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.6552150249481201172) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.1875) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.75;
        result[1] += 0.25;
      }
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5498799979686737061) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4244449883699417114) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.08563500270247459412) ) ) {
        result[0] += 0.95;
        result[1] += 0.05;
      } else {
        result[0] += 0.5625;
        result[1] += 0.4375;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.03030500002205371857) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.09550561797752809;
        result[1] += 0.9044943820224719;
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.2649649977684020996) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.01603000005707144737) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.02358499914407730103) ) ) {
        result[0] += 0.8888888888888888;
        result[1] += 0.1111111111111111;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.04615999944508075714) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.1016949152542373;
        result[1] += 0.8983050847457628;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7950850129127502441) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.8256849944591522217) ) ) {
        result[0] += 0.07258064516129033;
        result[1] += 0.9274193548387096;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9021950066089630127) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.05560999922454357147) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1216050013899803162) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.3888888888888889;
        result[1] += 0.6111111111111112;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7394700050354003906) ) ) {
        result[0] += 0.46551724137931033;
        result[1] += 0.5344827586206896;
      } else {
        result[0] += 0.07462686567164178;
        result[1] += 0.9253731343283582;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4965550005435943604) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.9659099876880645752) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9447599947452545166) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.3333333333333333;
        result[1] += 0.6666666666666666;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5545850098133087158) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.2915600091218948364) ) ) {
        result[0] += 0.3617021276595745;
        result[1] += 0.6382978723404256;
      } else {
        result[0] += 0.04065040650406504;
        result[1] += 0.959349593495935;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.9898999929428100586) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9946700036525726318) ) ) {
        result[0] += 0.07746478873239436;
        result[1] += 0.9225352112676056;
      } else {
        result[0] += 0.5454545454545454;
        result[1] += 0.45454545454545453;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.42105263157894735;
        result[1] += 0.5789473684210527;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1256750002503395081) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.1537049971520900726) ) ) {
        result[0] += 0.07142857142857142;
        result[1] += 0.9285714285714286;
      } else {
        result[0] += 0.7941176470588235;
        result[1] += 0.20588235294117646;
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.04817000031471252441) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.06201550387596899;
        result[1] += 0.937984496124031;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.01267000008374452591) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7639899849891662598) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.7142857142857143;
        result[1] += 0.2857142857142857;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.25;
        result[1] += 0.75;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9236549735069274902) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
        result[0] += 0.9259259259259259;
        result[1] += 0.07407407407407407;
      } else {
        result[0] += 0.12169312169312169;
        result[1] += 0.8783068783068783;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.1404150016605854034) ) ) {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9848699867725372314) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.6929450035095214844) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.1068050004541873932) ) ) {
        result[0] += 0.13953488372093023;
        result[1] += 0.8604651162790697;
      } else {
        result[0] += 0.5068493150684932;
        result[1] += 0.4931506849315068;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.9908199906349182129) ) ) {
        result[0] += 0.029411764705882353;
        result[1] += 0.9705882352941176;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.8350549936294555664) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.1146500036120414734) ) ) {
        result[0] += 0.391304347826087;
        result[1] += 0.6086956521739131;
      } else {
        result[0] += 0.8571428571428571;
        result[1] += 0.14285714285714285;
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 80;
  result[1] /= 80;
  
  // Apply base_scores
  result[0] += 0;
  result[1] += 0;
  
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
    

    FILE* file = fopen("./codegen/dataset_52/split_2/test_data.csv", "r");
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
