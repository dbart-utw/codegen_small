
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 0.009259259259259259;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9675925925925926;
          result[5] += 0.023148148148148147;
        } else {
          result[0] += 0;
          result[1] += 0.075;
          result[2] += 0;
          result[3] += 0.1;
          result[4] += 0.4;
          result[5] += 0.425;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.008344923504867872;
          result[3] += 0.025034770514603615;
          result[4] += 0.031988873435326845;
          result[5] += 0.9346314325452016;
        } else {
          result[0] += 0.0805243445692884;
          result[1] += 0.009363295880149815;
          result[2] += 0.011235955056179777;
          result[3] += 0.33333333333333337;
          result[4] += 0.07116104868913858;
          result[5] += 0.49438202247191015;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0.36507936507936506;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6349206349206349;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9868131868131869;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.013186813186813187;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.8461538461538463;
          result[1] += 0.03044871794871795;
          result[2] += 0.0008012820512820514;
          result[3] += 0.012820512820512822;
          result[4] += 0.09935897435897437;
          result[5] += 0.010416666666666668;
        } else {
          result[0] += 0.1400862068965517;
          result[1] += 0.021551724137931036;
          result[2] += 0.2435344827586207;
          result[3] += 0.3081896551724138;
          result[4] += 0.036637931034482756;
          result[5] += 0.25;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.027777777777777776;
          result[3] += 0.027777777777777776;
          result[4] += 0.05555555555555555;
          result[5] += 0.8888888888888888;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08695652173913043;
          result[3] += 0.4782608695652174;
          result[4] += 0;
          result[5] += 0.43478260869565216;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.27692307692307694;
          result[3] += 0.6153846153846154;
          result[4] += 0;
          result[5] += 0.1076923076923077;
        } else {
          result[0] += 0;
          result[1] += 0.024390243902439025;
          result[2] += 0.7317073170731707;
          result[3] += 0.21951219512195122;
          result[4] += 0;
          result[5] += 0.024390243902439025;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0.06896551724137932;
          result[1] += 0.03448275862068966;
          result[2] += 0.5517241379310346;
          result[3] += 0.2758620689655173;
          result[4] += 0.03448275862068966;
          result[5] += 0.03448275862068966;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0.22727272727272727;
          result[1] += 0;
          result[2] += 0.4090909090909091;
          result[3] += 0.13636363636363635;
          result[4] += 0;
          result[5] += 0.22727272727272727;
        } else {
          result[0] += 0.00468384074941452;
          result[1] += 0;
          result[2] += 0.9379391100702577;
          result[3] += 0.05503512880562061;
          result[4] += 0;
          result[5] += 0.00234192037470726;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0.022026431718061675;
          result[1] += 0.00881057268722467;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9515418502202643;
          result[5] += 0.01762114537444934;
        } else {
          result[0] += 0.5051546391752577;
          result[1] += 0.03608247422680412;
          result[2] += 0;
          result[3] += 0.020618556701030927;
          result[4] += 0.24742268041237114;
          result[5] += 0.19072164948453607;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0.002758620689655172;
          result[2] += 0.002758620689655172;
          result[3] += 0.020689655172413793;
          result[4] += 0.05379310344827586;
          result[5] += 0.92;
        } else {
          result[0] += 0.017857142857142856;
          result[1] += 0.014285714285714285;
          result[2] += 0;
          result[3] += 0.40714285714285714;
          result[4] += 0.08928571428571429;
          result[5] += 0.4714285714285714;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 0.7619047619047619;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.23809523809523808;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9929245283018868;
          result[2] += 0;
          result[3] += 0.0023584905660377358;
          result[4] += 0.0047169811320754715;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.15555555555555556;
          result[1] += 0.27555555555555555;
          result[2] += 0;
          result[3] += 0.008888888888888889;
          result[4] += 0.5555555555555556;
          result[5] += 0.0044444444444444444;
        } else {
          result[0] += 0.749819233550253;
          result[1] += 0.006507592190889371;
          result[2] += 0.05784526391901663;
          result[3] += 0.06652205350686913;
          result[4] += 0.05856832971800434;
          result[5] += 0.06073752711496746;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.8;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08333333333333333;
          result[3] += 0.8055555555555556;
          result[4] += 0;
          result[5] += 0.1111111111111111;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2708333333333333;
          result[3] += 0.5833333333333334;
          result[4] += 0;
          result[5] += 0.14583333333333334;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8181818181818182;
          result[3] += 0.11363636363636363;
          result[4] += 0;
          result[5] += 0.06818181818181818;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6774193548387096;
          result[3] += 0.06451612903225806;
          result[4] += 0;
          result[5] += 0.25806451612903225;
        } else {
          result[0] += 0.6875;
          result[1] += 0;
          result[2] += 0.1875;
          result[3] += 0.125;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.806949806949807;
          result[3] += 0.1583011583011583;
          result[4] += 0.011583011583011582;
          result[5] += 0.023166023166023165;
        } else {
          result[0] += 0.009554140127388535;
          result[1] += 0;
          result[2] += 0.964968152866242;
          result[3] += 0.025477707006369428;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
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
          result[3] += 0.11428571428571428;
          result[4] += 0.6;
          result[5] += 0.2857142857142857;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0.022222222222222223;
          result[1] += 0.004232804232804233;
          result[2] += 0.0010582010582010583;
          result[3] += 0.04973544973544974;
          result[4] += 0.03597883597883598;
          result[5] += 0.8867724867724868;
        } else {
          result[0] += 0.05177993527508091;
          result[1] += 0.006472491909385114;
          result[2] += 0.022653721682847898;
          result[3] += 0.40129449838187703;
          result[4] += 0.12944983818770225;
          result[5] += 0.3883495145631068;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0.08467741935483872;
          result[1] += 0.32258064516129037;
          result[2] += 0.00806451612903226;
          result[3] += 0.024193548387096777;
          result[4] += 0.5483870967741936;
          result[5] += 0.012096774193548388;
        } else {
          result[0] += 0.6989039329464861;
          result[1] += 0.013539651837524178;
          result[2] += 0.0548033526756931;
          result[3] += 0.11218568665377177;
          result[4] += 0.05738233397807866;
          result[5] += 0.06318504190844616;
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
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.02857142857142857;
          result[3] += 0.8285714285714286;
          result[4] += 0;
          result[5] += 0.14285714285714285;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.23529411764705882;
          result[3] += 0.17647058823529413;
          result[4] += 0;
          result[5] += 0.5882352941176471;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2173913043478261;
          result[3] += 0.7391304347826088;
          result[4] += 0;
          result[5] += 0.04347826086956522;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.74375;
          result[3] += 0.1625;
          result[4] += 0.0125;
          result[5] += 0.08125;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7241379310344828;
          result[3] += 0.20689655172413793;
          result[4] += 0;
          result[5] += 0.06896551724137931;
        } else {
          result[0] += 0.0040650406504065045;
          result[1] += 0;
          result[2] += 0.9688346883468835;
          result[3] += 0.02710027100271003;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.12195121951219512;
          result[1] += 0;
          result[2] += 0.8780487804878049;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0.017167381974248927;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9399141630901288;
          result[5] += 0.04291845493562232;
        } else {
          result[0] += 0.023809523809523808;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.16666666666666666;
          result[4] += 0.4523809523809524;
          result[5] += 0.35714285714285715;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42620000))) ) ) {
          result[0] += 0.9420289855072463;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.028985507246376812;
          result[5] += 0.028985507246376812;
        } else {
          result[0] += 0.0037105751391465678;
          result[1] += 0.0074211502782931356;
          result[2] += 0.0018552875695732839;
          result[3] += 0.15120593692022263;
          result[4] += 0.07792207792207792;
          result[5] += 0.7578849721706865;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d90000))) ) ) {
          result[0] += 0.4504950495049504;
          result[1] += 0.09405940594059403;
          result[2] += 0.058415841584158405;
          result[3] += 0.11188118811881186;
          result[4] += 0.18415841584158413;
          result[5] += 0.10099009900990097;
        } else {
          result[0] += 0.9491758241758242;
          result[1] += 0.002747252747252748;
          result[2] += 0.012362637362637364;
          result[3] += 0;
          result[4] += 0.03571428571428572;
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
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0.030612244897959183;
          result[2] += 0.01020408163265306;
          result[3] += 0.5102040816326531;
          result[4] += 0.01020408163265306;
          result[5] += 0.4387755102040816;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.375;
          result[3] += 0.55;
          result[4] += 0;
          result[5] += 0.075;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.11538461538461539;
          result[5] += 0.8846153846153846;
        } else {
          result[0] += 0;
          result[1] += 0.078125;
          result[2] += 0.4375;
          result[3] += 0.125;
          result[4] += 0.265625;
          result[5] += 0.09375;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5333333333333333;
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0.13333333333333333;
        } else {
          result[0] += 0.8235294117647058;
          result[1] += 0;
          result[2] += 0.11764705882352941;
          result[3] += 0.058823529411764705;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7456140350877193;
          result[3] += 0.21929824561403508;
          result[4] += 0;
          result[5] += 0.03508771929824561;
        } else {
          result[0] += 0.015494636471990467;
          result[1] += 0;
          result[2] += 0.9213349225268177;
          result[3] += 0.05840286054827176;
          result[4] += 0;
          result[5] += 0.004767580452920144;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9477911646586346;
          result[5] += 0.05220883534136546;
        } else {
          result[0] += 0.0547945205479452;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0136986301369863;
          result[4] += 0.6986301369863014;
          result[5] += 0.2328767123287671;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 0.25;
          result[2] += 0;
          result[3] += 0.5;
          result[4] += 0.25;
          result[5] += 0;
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
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0.6444444444444445;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3111111111111111;
          result[5] += 0.044444444444444446;
        } else {
          result[0] += 0;
          result[1] += 0.0011904761904761906;
          result[2] += 0.002380952380952381;
          result[3] += 0.047619047619047616;
          result[4] += 0.02738095238095238;
          result[5] += 0.9214285714285714;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0.9206349206349207;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04761904761904762;
          result[4] += 0;
          result[5] += 0.03174603174603175;
        } else {
          result[0] += 0.027833001988071572;
          result[1] += 0.003976143141153081;
          result[2] += 0.007952286282306162;
          result[3] += 0.441351888667992;
          result[4] += 0.04572564612326044;
          result[5] += 0.4731610337972167;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42890000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0.03731343283582089;
          result[1] += 0.40298507462686567;
          result[2] += 0;
          result[3] += 0.022388059701492536;
          result[4] += 0.5298507462686567;
          result[5] += 0.007462686567164179;
        } else {
          result[0] += 0;
          result[1] += 0.9886363636363636;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.011363636363636364;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
          result[0] += 0.14814814814814814;
          result[1] += 0.024691358024691357;
          result[2] += 0.12345679012345678;
          result[3] += 0.19753086419753085;
          result[4] += 0.024691358024691357;
          result[5] += 0.48148148148148145;
        } else {
          result[0] += 0.8436724565756825;
          result[1] += 0.013234077750206784;
          result[2] += 0.019851116625310177;
          result[3] += 0.031430934656741114;
          result[4] += 0.07278742762613732;
          result[5] += 0.019023986765922252;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0.011695906432748537;
          result[1] += 0.017543859649122806;
          result[2] += 0.4152046783625731;
          result[3] += 0.27485380116959063;
          result[4] += 0.0935672514619883;
          result[5] += 0.1871345029239766;
        } else {
          result[0] += 0.8421052631578948;
          result[1] += 0;
          result[2] += 0.052631578947368425;
          result[3] += 0;
          result[4] += 0.10526315789473685;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0.01048951048951049;
          result[1] += 0;
          result[2] += 0.6958041958041958;
          result[3] += 0.24475524475524477;
          result[4] += 0;
          result[5] += 0.04895104895104895;
        } else {
          result[0] += 0.014749262536873156;
          result[1] += 0;
          result[2] += 0.93952802359882;
          result[3] += 0.03687315634218289;
          result[4] += 0;
          result[5] += 0.008849557522123894;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ae0000))) ) ) {
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
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0.003952569169960474;
          result[1] += 0.03162055335968379;
          result[2] += 0;
          result[3] += 0.019762845849802372;
          result[4] += 0.9209486166007905;
          result[5] += 0.023715415019762844;
        } else {
          result[0] += 0.05555555555555555;
          result[1] += 0.005925925925925926;
          result[2] += 0.003703703703703704;
          result[3] += 0.15037037037037038;
          result[4] += 0.04962962962962963;
          result[5] += 0.7348148148148148;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.7596532702915682;
          result[1] += 0.0512214342001576;
          result[2] += 0.004728132387706856;
          result[3] += 0.026004728132387706;
          result[4] += 0.1426319936958235;
          result[5] += 0.015760441292356184;
        } else {
          result[0] += 0.2025974025974026;
          result[1] += 0.012987012987012988;
          result[2] += 0.15324675324675324;
          result[3] += 0.22597402597402597;
          result[4] += 0.13246753246753246;
          result[5] += 0.2727272727272727;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06666666666666667;
          result[3] += 0.7666666666666667;
          result[4] += 0;
          result[5] += 0.16666666666666666;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.875;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.125;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.18181818181818182;
          result[3] += 0.36363636363636365;
          result[4] += 0;
          result[5] += 0.45454545454545453;
        } else {
          result[0] += 0.01886792452830189;
          result[1] += 0;
          result[2] += 0.6886792452830189;
          result[3] += 0.17924528301886794;
          result[4] += 0;
          result[5] += 0.11320754716981134;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ed0000))) ) ) {
          result[0] += 0.11475409836065574;
          result[1] += 0;
          result[2] += 0.7213114754098361;
          result[3] += 0.08196721311475409;
          result[4] += 0.01639344262295082;
          result[5] += 0.06557377049180328;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0.01639344262295082;
          result[1] += 0;
          result[2] += 0.7049180327868853;
          result[3] += 0.2786885245901639;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0025906735751295338;
          result[1] += 0;
          result[2] += 0.9520725388601037;
          result[3] += 0.038860103626943004;
          result[4] += 0;
          result[5] += 0.006476683937823834;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0.010416666666666668;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8541666666666667;
          result[5] += 0.13541666666666669;
        } else {
          result[0] += 0.4117647058823529;
          result[1] += 0.12605042016806722;
          result[2] += 0;
          result[3] += 0.01680672268907563;
          result[4] += 0.3697478991596639;
          result[5] += 0.07563025210084033;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0.006586169045005488;
          result[2] += 0;
          result[3] += 0.059275521405049394;
          result[4] += 0.06915477497255763;
          result[5] += 0.8649835345773875;
        } else {
          result[0] += 0.009009009009009009;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6261261261261262;
          result[4] += 0.02702702702702703;
          result[5] += 0.33783783783783783;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0.09090909090909091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9090909090909091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9828326180257511;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.017167381974248927;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0.721606648199446;
          result[1] += 0.03185595567867036;
          result[2] += 0.018698060941828253;
          result[3] += 0.04293628808864266;
          result[4] += 0.15166204986149584;
          result[5] += 0.0332409972299169;
        } else {
          result[0] += 0.1270718232044199;
          result[1] += 0;
          result[2] += 0.31767955801104975;
          result[3] += 0.2955801104972376;
          result[4] += 0.049723756906077346;
          result[5] += 0.20994475138121546;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09433962264150944;
          result[3] += 0.2830188679245283;
          result[4] += 0;
          result[5] += 0.6226415094339622;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05263157894736842;
          result[3] += 0.5789473684210527;
          result[4] += 0.21052631578947367;
          result[5] += 0.15789473684210525;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7916666666666667;
          result[3] += 0.16666666666666669;
          result[4] += 0;
          result[5] += 0.04166666666666667;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42880000))) ) ) {
          result[0] += 0;
          result[1] += 0.9411764705882353;
          result[2] += 0;
          result[3] += 0.058823529411764705;
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
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7085201793721974;
          result[3] += 0.23766816143497757;
          result[4] += 0;
          result[5] += 0.053811659192825115;
        } else {
          result[0] += 0.017173051519154554;
          result[1] += 0;
          result[2] += 0.9405548216644648;
          result[3] += 0.03302509907529722;
          result[4] += 0.0013210039630118888;
          result[5] += 0.007926023778071332;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0.02824858757062147;
          result[1] += 0.07062146892655367;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8192090395480226;
          result[5] += 0.08192090395480225;
        } else {
          result[0] += 0.7640918580375783;
          result[1] += 0.03549060542797495;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.14822546972860126;
          result[5] += 0.05219206680584551;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0.002364066193853428;
          result[1] += 0.0070921985815602835;
          result[2] += 0;
          result[3] += 0.054373522458628844;
          result[4] += 0.0673758865248227;
          result[5] += 0.8687943262411347;
        } else {
          result[0] += 0.10762942779291552;
          result[1] += 0.05040871934604905;
          result[2] += 0.04223433242506812;
          result[3] += 0.3760217983651226;
          result[4] += 0.13487738419618528;
          result[5] += 0.2888283378746594;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42860000))) ) ) {
          result[0] += 0;
          result[1] += 0.9890829694323144;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.010917030567685589;
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
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42600000))) ) ) {
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
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42900000))) ) ) {
          result[0] += 0.2;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.8;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0.8360655737704918;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04918032786885246;
          result[4] += 0.11475409836065574;
          result[5] += 0;
        } else {
          result[0] += 0.9902120717781403;
          result[1] += 0;
          result[2] += 0.0065252854812398045;
          result[3] += 0.0032626427406199023;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7380952380952381;
          result[4] += 0;
          result[5] += 0.2619047619047619;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5357142857142857;
          result[3] += 0.33035714285714285;
          result[4] += 0;
          result[5] += 0.13392857142857142;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.38333333333333336;
          result[4] += 0;
          result[5] += 0.11666666666666667;
        } else {
          result[0] += 0.030456852791878174;
          result[1] += 0;
          result[2] += 0.9096446700507614;
          result[3] += 0.050761421319796954;
          result[4] += 0.0010152284263959391;
          result[5] += 0.008121827411167513;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0.008298755186721992;
          result[1] += 0.008298755186721992;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9377593360995851;
          result[5] += 0.04564315352697095;
        } else {
          result[0] += 0;
          result[1] += 0.8333333333333334;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.16666666666666666;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0.004032258064516129;
          result[2] += 0.005376344086021506;
          result[3] += 0.03225806451612903;
          result[4] += 0.038978494623655914;
          result[5] += 0.9193548387096774;
        } else {
          result[0] += 0.09380863039399624;
          result[1] += 0.00375234521575985;
          result[2] += 0.020637898686679174;
          result[3] += 0.2776735459662289;
          result[4] += 0.0975609756097561;
          result[5] += 0.5065666041275797;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 0.1694915254237288;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8305084745762712;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9886621315192744;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.011337868480725623;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.784375;
          result[1] += 0.015625;
          result[2] += 0.02734375;
          result[3] += 0.04296875;
          result[4] += 0.0828125;
          result[5] += 0.046875;
        } else {
          result[0] += 0.2230769230769231;
          result[1] += 0.007692307692307693;
          result[2] += 0.25384615384615383;
          result[3] += 0.25769230769230766;
          result[4] += 0.08076923076923077;
          result[5] += 0.17692307692307693;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.07894736842105263;
          result[4] += 0.07894736842105263;
          result[5] += 0.8421052631578947;
        } else {
          result[0] += 0;
          result[1] += 0.008771929824561405;
          result[2] += 0.15789473684210528;
          result[3] += 0.5964912280701755;
          result[4] += 0;
          result[5] += 0.2368421052631579;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0.05;
          result[1] += 0;
          result[2] += 0.3;
          result[3] += 0.45;
          result[4] += 0.2;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7631578947368421;
          result[3] += 0.21052631578947367;
          result[4] += 0;
          result[5] += 0.02631578947368421;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0.07407407407407408;
          result[1] += 0.0925925925925926;
          result[2] += 0.33333333333333337;
          result[3] += 0.33333333333333337;
          result[4] += 0.03703703703703704;
          result[5] += 0.12962962962962965;
        } else {
          result[0] += 0;
          result[1] += 0.047619047619047616;
          result[2] += 0.9047619047619048;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.047619047619047616;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0.5;
          result[1] += 0;
          result[2] += 0.375;
          result[3] += 0.125;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.028880866425992784;
          result[1] += 0;
          result[2] += 0.9145607701564381;
          result[3] += 0.05415162454873647;
          result[4] += 0.002406738868832732;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9569377990430622;
          result[5] += 0.0430622009569378;
        } else {
          result[0] += 0;
          result[1] += 0.9;
          result[2] += 0;
          result[3] += 0.1;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0.023084994753410283;
          result[1] += 0.001049317943336831;
          result[2] += 0.008394543546694649;
          result[3] += 0.03777544596012592;
          result[4] += 0.07555089192025184;
          result[5] += 0.8541448058761805;
        } else {
          result[0] += 0.04878048780487805;
          result[1] += 0;
          result[2] += 0.006968641114982578;
          result[3] += 0.5609756097560976;
          result[4] += 0.027874564459930314;
          result[5] += 0.3554006968641115;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0.09523809523809523;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9047619047619048;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9720430107526882;
          result[2] += 0;
          result[3] += 0.002150537634408602;
          result[4] += 0.025806451612903226;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.7573643410852714;
          result[1] += 0.026356589147286825;
          result[2] += 0.00310077519379845;
          result[3] += 0.03333333333333334;
          result[4] += 0.12558139534883725;
          result[5] += 0.054263565891472874;
        } else {
          result[0] += 0.2515212981744422;
          result[1] += 0.008113590263691683;
          result[2] += 0.27586206896551724;
          result[3] += 0.20892494929006086;
          result[4] += 0.05070993914807302;
          result[5] += 0.20486815415821502;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0.038461538461538464;
          result[1] += 0;
          result[2] += 0.1346153846153846;
          result[3] += 0.057692307692307696;
          result[4] += 0.36538461538461536;
          result[5] += 0.40384615384615385;
        } else {
          result[0] += 0;
          result[1] += 0.7272727272727273;
          result[2] += 0.18181818181818182;
          result[3] += 0.09090909090909091;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.04;
          result[3] += 0.6;
          result[4] += 0.02;
          result[5] += 0.34;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.421875;
          result[4] += 0;
          result[5] += 0.078125;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42e50000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0.30769230769230776;
          result[1] += 0;
          result[2] += 0.3846153846153847;
          result[3] += 0.07692307692307694;
          result[4] += 0.03846153846153847;
          result[5] += 0.19230769230769235;
        } else {
          result[0] += 0.01264367816091954;
          result[1] += 0;
          result[2] += 0.9114942528735632;
          result[3] += 0.07241379310344828;
          result[4] += 0;
          result[5] += 0.0034482758620689655;
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
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.004149377593360996;
          result[1] += 0.004149377593360996;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9585062240663901;
          result[5] += 0.03319502074688797;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0.027777777777777776;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.25;
          result[5] += 0.7222222222222222;
        } else {
          result[0] += 0;
          result[1] += 0.1;
          result[2] += 0;
          result[3] += 0.9;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0.0011862396204033216;
          result[1] += 0.0035587188612099642;
          result[2] += 0;
          result[3] += 0.02965599051008304;
          result[4] += 0.022538552787663108;
          result[5] += 0.9430604982206405;
        } else {
          result[0] += 0.17703349282296652;
          result[1] += 0.014354066985645933;
          result[2] += 0;
          result[3] += 0.11961722488038277;
          result[4] += 0.18660287081339713;
          result[5] += 0.5023923444976076;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0967741935483871;
          result[4] += 0;
          result[5] += 0.9032258064516129;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.038461538461538464;
          result[3] += 0.6346153846153846;
          result[4] += 0.02403846153846154;
          result[5] += 0.30288461538461536;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42480000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b00000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
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
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0.6553755522827688;
          result[1] += 0.060382916053019146;
          result[2] += 0;
          result[3] += 0.010309278350515464;
          result[4] += 0.2695139911634757;
          result[5] += 0.004418262150220913;
        } else {
          result[0] += 0.018666666666666668;
          result[1] += 0.050666666666666665;
          result[2] += 0.11466666666666667;
          result[3] += 0.44;
          result[4] += 0.088;
          result[5] += 0.288;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0.9540229885057472;
          result[1] += 0;
          result[2] += 0.03304597701149426;
          result[3] += 0.004310344827586208;
          result[4] += 0.007183908045977012;
          result[5] += 0.0014367816091954025;
        } else {
          result[0] += 0.021821631878557873;
          result[1] += 0;
          result[2] += 0.8719165085388995;
          result[3] += 0.08444022770398482;
          result[4] += 0.0009487666034155598;
          result[5] += 0.020872865275142316;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42840000))) ) ) {
          result[0] += 0;
          result[1] += 0.004347826086956522;
          result[2] += 0;
          result[3] += 0.004347826086956522;
          result[4] += 0.9782608695652174;
          result[5] += 0.013043478260869565;
        } else {
          result[0] += 0;
          result[1] += 0.24;
          result[2] += 0;
          result[3] += 0.12;
          result[4] += 0.28;
          result[5] += 0.36;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0.03139013452914798;
          result[1] += 0.0011210762331838565;
          result[2] += 0;
          result[3] += 0.04147982062780269;
          result[4] += 0.06950672645739911;
          result[5] += 0.8565022421524664;
        } else {
          result[0] += 0.060126582278481014;
          result[1] += 0.00949367088607595;
          result[2] += 0.0189873417721519;
          result[3] += 0.41455696202531644;
          result[4] += 0.06645569620253164;
          result[5] += 0.43037974683544306;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0.2711864406779661;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7288135593220338;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9935064935064936;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.006493506493506494;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.8459637561779243;
          result[1] += 0.027182866556836906;
          result[2] += 0;
          result[3] += 0.013179571663920924;
          result[4] += 0.10626029654036245;
          result[5] += 0.00741350906095552;
        } else {
          result[0] += 0.23863636363636365;
          result[1] += 0.005681818181818182;
          result[2] += 0.18181818181818182;
          result[3] += 0.30113636363636365;
          result[4] += 0.05113636363636364;
          result[5] += 0.2215909090909091;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.038461538461538464;
          result[4] += 0;
          result[5] += 0.9615384615384616;
        } else {
          result[0] += 0;
          result[1] += 0.02631578947368421;
          result[2] += 0.21052631578947367;
          result[3] += 0.02631578947368421;
          result[4] += 0.5789473684210527;
          result[5] += 0.15789473684210525;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0.013574660633484163;
          result[1] += 0.02262443438914027;
          result[2] += 0.19004524886877827;
          result[3] += 0.6063348416289592;
          result[4] += 0.01809954751131222;
          result[5] += 0.1493212669683258;
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
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42bc0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.8461538461538461;
          result[1] += 0;
          result[2] += 0.15384615384615385;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0.02612826603325416;
          result[1] += 0;
          result[2] += 0.8028503562945369;
          result[3] += 0.15201900237529695;
          result[4] += 0;
          result[5] += 0.01900237529691212;
        } else {
          result[0] += 0.016666666666666666;
          result[1] += 0;
          result[2] += 0.9611111111111111;
          result[3] += 0.018518518518518517;
          result[4] += 0;
          result[5] += 0.003703703703703704;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x420a0000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.009615384615384616;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.009615384615384616;
          result[4] += 0.9423076923076923;
          result[5] += 0.038461538461538464;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0.005847953216374269;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.02046783625730994;
          result[4] += 0.03508771929824561;
          result[5] += 0.9385964912280702;
        } else {
          result[0] += 0.13266998341625208;
          result[1] += 0.01658374792703151;
          result[2] += 0;
          result[3] += 0.296849087893864;
          result[4] += 0.0978441127694859;
          result[5] += 0.4560530679933665;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0.4;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9779411764705882;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.022058823529411766;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.8739800543970988;
          result[1] += 0.02901178603807797;
          result[2] += 0.0027198549410698096;
          result[3] += 0.02629193109700816;
          result[4] += 0.061650045330915684;
          result[5] += 0.006346328195829556;
        } else {
          result[0] += 0.2406015037593985;
          result[1] += 0.015037593984962407;
          result[2] += 0.16165413533834588;
          result[3] += 0.2180451127819549;
          result[4] += 0.15037593984962408;
          result[5] += 0.2142857142857143;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.047619047619047616;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.9523809523809523;
        } else {
          result[0] += 0;
          result[1] += 0.02304147465437788;
          result[2] += 0.16589861751152074;
          result[3] += 0.576036866359447;
          result[4] += 0.013824884792626729;
          result[5] += 0.22119815668202766;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0.1282051282051282;
          result[1] += 0.02564102564102564;
          result[2] += 0.23076923076923078;
          result[3] += 0.1282051282051282;
          result[4] += 0.1282051282051282;
          result[5] += 0.358974358974359;
        } else {
          result[0] += 0.017241379310344827;
          result[1] += 0;
          result[2] += 0.7931034482758621;
          result[3] += 0.1724137931034483;
          result[4] += 0.017241379310344827;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5769230769230769;
          result[3] += 0.15384615384615385;
          result[4] += 0;
          result[5] += 0.2692307692307692;
        } else {
          result[0] += 0.8571428571428572;
          result[1] += 0.07142857142857144;
          result[2] += 0.04761904761904762;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.02380952380952381;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0.14285714285714288;
          result[1] += 0;
          result[2] += 0.5000000000000001;
          result[3] += 0.10714285714285715;
          result[4] += 0;
          result[5] += 0.25000000000000006;
        } else {
          result[0] += 0.010976948408342482;
          result[1] += 0;
          result[2] += 0.9187705817782656;
          result[3] += 0.06476399560922064;
          result[4] += 0;
          result[5] += 0.005488474204171241;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.991869918699187;
          result[5] += 0.008130081300813009;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6129032258064516;
          result[5] += 0.3870967741935484;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0.001402524544179523;
          result[1] += 0.001402524544179523;
          result[2] += 0.002805049088359046;
          result[3] += 0.030855539971949508;
          result[4] += 0.030855539971949508;
          result[5] += 0.9326788218793829;
        } else {
          result[0] += 0.06941838649155722;
          result[1] += 0.0075046904315197;
          result[2] += 0.01876172607879925;
          result[3] += 0.3151969981238274;
          result[4] += 0.08630393996247655;
          result[5] += 0.5028142589118199;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b00000))) ) ) {
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
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.7592190889370932;
          result[1] += 0.028199566160520606;
          result[2] += 0.004338394793926247;
          result[3] += 0.03109182935647144;
          result[4] += 0.14389009399855388;
          result[5] += 0.033261026753434564;
        } else {
          result[0] += 0.19008264462809918;
          result[1] += 0.03581267217630854;
          result[2] += 0.18457300275482094;
          result[3] += 0.3002754820936639;
          result[4] += 0.06887052341597796;
          result[5] += 0.22038567493112948;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d60000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05263157894736842;
          result[3] += 0.21052631578947367;
          result[4] += 0;
          result[5] += 0.7368421052631579;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3195876288659794;
          result[3] += 0.577319587628866;
          result[4] += 0;
          result[5] += 0.10309278350515465;
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
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7877358490566038;
          result[3] += 0.19811320754716982;
          result[4] += 0;
          result[5] += 0.014150943396226415;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0.20689655172413793;
          result[1] += 0;
          result[2] += 0.7241379310344828;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.06896551724137931;
        } else {
          result[0] += 0.012465373961218837;
          result[1] += 0;
          result[2] += 0.9390581717451524;
          result[3] += 0.04847645429362881;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x423a0000))) ) ) {
          result[0] += 0;
          result[1] += 0.8333333333333334;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.16666666666666666;
          result[5] += 0;
        } else {
          result[0] += 0.007407407407407408;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9740740740740741;
          result[5] += 0.018518518518518517;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a50000))) ) ) {
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
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42660000))) ) ) {
          result[0] += 0.9032258064516129;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0967741935483871;
          result[5] += 0;
        } else {
          result[0] += 0.005045408678102927;
          result[1] += 0.004036326942482341;
          result[2] += 0.0030272452068617556;
          result[3] += 0.04843592330978809;
          result[4] += 0.0615539858728557;
          result[5] += 0.8779011099899092;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 0.2426470588235294;
          result[1] += 0.0661764705882353;
          result[2] += 0;
          result[3] += 0.051470588235294115;
          result[4] += 0.19117647058823528;
          result[5] += 0.4485294117647059;
        } else {
          result[0] += 0.021148036253776436;
          result[1] += 0;
          result[2] += 0.01812688821752266;
          result[3] += 0.6525679758308157;
          result[4] += 0.006042296072507553;
          result[5] += 0.3021148036253776;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0.041666666666666664;
          result[1] += 0.08333333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8541666666666666;
          result[5] += 0.020833333333333332;
        } else {
          result[0] += 0.00411522633744856;
          result[1] += 0.9753086419753086;
          result[2] += 0;
          result[3] += 0.00411522633744856;
          result[4] += 0.01646090534979424;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0.06756756756756757;
          result[1] += 0.3783783783783784;
          result[2] += 0;
          result[3] += 0.02702702702702703;
          result[4] += 0.47297297297297297;
          result[5] += 0.05405405405405406;
        } else {
          result[0] += 0.8262642740619902;
          result[1] += 0.012234910277324634;
          result[2] += 0.020391517128874388;
          result[3] += 0.037520391517128875;
          result[4] += 0.061174551386623165;
          result[5] += 0.04241435562805873;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.23076923076923078;
          result[3] += 0.5673076923076923;
          result[4] += 0;
          result[5] += 0.20192307692307693;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6666666666666666;
          result[3] += 0.15151515151515152;
          result[4] += 0;
          result[5] += 0.18181818181818182;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0.19696969696969696;
          result[1] += 0;
          result[2] += 0.5606060606060606;
          result[3] += 0.13636363636363635;
          result[4] += 0.022727272727272728;
          result[5] += 0.08333333333333333;
        } else {
          result[0] += 0.010893246187363835;
          result[1] += 0;
          result[2] += 0.9128540305010894;
          result[3] += 0.0664488017429194;
          result[4] += 0;
          result[5] += 0.00980392156862745;
        }
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
    

    FILE* file = fopen("./codegen/dataset_146/split_0/test_data.csv", "r");
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
