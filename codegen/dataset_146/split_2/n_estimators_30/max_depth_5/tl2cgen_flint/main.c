
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
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42cd0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c00000))) ) ) {
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
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x426a0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x427c0000))) ) ) {
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
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0.037037037037037035;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8518518518518519;
            result[5] += 0.1111111111111111;
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
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9;
            result[5] += 0.1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.15;
            result[3] += 0.25;
            result[4] += 0.25;
            result[5] += 0.35;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03303684879288437;
            result[4] += 0.020330368487928845;
            result[5] += 0.9466327827191868;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0.4166666666666667;
            result[5] += 0.3333333333333333;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42700000))) ) ) {
            result[0] += 0;
            result[1] += 0.11764705882352941;
            result[2] += 0;
            result[3] += 0.35294117647058826;
            result[4] += 0.5294117647058824;
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
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0.0043859649122807015;
            result[1] += 0.02631578947368421;
            result[2] += 0.013157894736842105;
            result[3] += 0.13596491228070176;
            result[4] += 0.14912280701754385;
            result[5] += 0.6710526315789473;
          } else {
            result[0] += 0.010830324909747292;
            result[1] += 0;
            result[2] += 0.02527075812274368;
            result[3] += 0.5234657039711191;
            result[4] += 0.02527075812274368;
            result[5] += 0.4151624548736462;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bc0000))) ) ) {
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
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0.9130434782608695;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.08695652173913043;
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
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c80000))) ) ) {
            result[0] += 0.013157894736842105;
            result[1] += 0.02631578947368421;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9605263157894737;
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
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0.8285714285714286;
            result[1] += 0.08571428571428572;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.08571428571428572;
            result[5] += 0;
          } else {
            result[0] += 0.018518518518518517;
            result[1] += 0.08333333333333333;
            result[2] += 0.25;
            result[3] += 0.2222222222222222;
            result[4] += 0.018518518518518517;
            result[5] += 0.4074074074074074;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0.8927000879507476;
            result[1] += 0.012313104661389622;
            result[2] += 0.005277044854881266;
            result[3] += 0.023746701846965697;
            result[4] += 0.06244503078276165;
            result[5] += 0.003518029903254178;
          } else {
            result[0] += 0.38461538461538464;
            result[1] += 0.017094017094017096;
            result[2] += 0.3333333333333333;
            result[3] += 0.09401709401709402;
            result[4] += 0.10256410256410256;
            result[5] += 0.06837606837606838;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.10576923076923077;
            result[3] += 0.6153846153846154;
            result[4] += 0.0673076923076923;
            result[5] += 0.21153846153846154;
          } else {
            result[0] += 0.02040816326530612;
            result[1] += 0;
            result[2] += 0.5102040816326531;
            result[3] += 0.12244897959183673;
            result[4] += 0.05442176870748299;
            result[5] += 0.2925170068027211;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0.02197802197802198;
            result[1] += 0.01098901098901099;
            result[2] += 0.5824175824175825;
            result[3] += 0.2967032967032967;
            result[4] += 0.03296703296703297;
            result[5] += 0.054945054945054944;
          } else {
            result[0] += 0.015435501653803748;
            result[1] += 0;
            result[2] += 0.906284454244763;
            result[3] += 0.06725468577728776;
            result[4] += 0.004410143329658214;
            result[5] += 0.006615214994487321;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ca0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b80000))) ) ) {
            result[0] += 0.0045045045045045045;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9774774774774775;
            result[5] += 0.018018018018018018;
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
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0.02338530066815145;
            result[1] += 0.0022271714922048997;
            result[2] += 0;
            result[3] += 0.052338530066815145;
            result[4] += 0.043429844097995544;
            result[5] += 0.878619153674833;
          } else {
            result[0] += 0.37500000000000006;
            result[1] += 0.16666666666666669;
            result[2] += 0;
            result[3] += 0.15277777777777782;
            result[4] += 0.13888888888888892;
            result[5] += 0.16666666666666669;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07246376811594203;
            result[3] += 0.2463768115942029;
            result[4] += 0.043478260869565216;
            result[5] += 0.6376811594202898;
          } else {
            result[0] += 0.043478260869565216;
            result[1] += 0;
            result[2] += 0.007246376811594203;
            result[3] += 0.7681159420289855;
            result[4] += 0.021739130434782608;
            result[5] += 0.15942028985507245;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42500000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42840000))) ) ) {
            result[0] += 0;
            result[1] += 0.2;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8;
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
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.00468384074941452;
            result[1] += 0.9929742388758782;
            result[2] += 0;
            result[3] += 0.00234192037470726;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0.6694711538461539;
            result[1] += 0.054086538461538464;
            result[2] += 0.004807692307692308;
            result[3] += 0.037259615384615384;
            result[4] += 0.203125;
            result[5] += 0.03125;
          } else {
            result[0] += 0.05439330543933055;
            result[1] += 0.03138075313807531;
            result[2] += 0.20292887029288703;
            result[3] += 0.2405857740585774;
            result[4] += 0.1087866108786611;
            result[5] += 0.3619246861924686;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0.5964912280701754;
            result[1] += 0;
            result[2] += 0.19298245614035087;
            result[3] += 0.17543859649122806;
            result[4] += 0.03508771929824561;
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
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0625;
            result[4] += 0;
            result[5] += 0.9375;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06818181818181818;
            result[3] += 0.9090909090909091;
            result[4] += 0;
            result[5] += 0.022727272727272728;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.37142857142857144;
            result[3] += 0.42857142857142855;
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
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07142857142857142;
            result[3] += 0.9285714285714286;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6;
            result[4] += 0;
            result[5] += 0.4;
          } else {
            result[0] += 0.029411764705882353;
            result[1] += 0;
            result[2] += 0.8823529411764706;
            result[3] += 0.08823529411764706;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42c00000))) ) ) {
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
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8066037735849056;
            result[3] += 0.1650943396226415;
            result[4] += 0;
            result[5] += 0.02830188679245283;
          } else {
            result[0] += 0.007173601147776184;
            result[1] += 0;
            result[2] += 0.9426111908177905;
            result[3] += 0.04591104734576758;
            result[4] += 0;
            result[5] += 0.00430416068866571;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
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
            result[4] += 0.5714285714285714;
            result[5] += 0.42857142857142855;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42420000))) ) ) {
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
            result[3] += 0.05172413793103448;
            result[4] += 0.7758620689655172;
            result[5] += 0.1724137931034483;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x424a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2727272727272727;
            result[3] += 0;
            result[4] += 0.45454545454545453;
            result[5] += 0.2727272727272727;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03526093088857546;
            result[4] += 0.028208744710860368;
            result[5] += 0.9365303244005642;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.5421686746987953;
            result[1] += 0.28915662650602414;
            result[2] += 0;
            result[3] += 0.02409638554216868;
            result[4] += 0.14457831325301207;
            result[5] += 0;
          } else {
            result[0] += 0.019148936170212766;
            result[1] += 0.019148936170212766;
            result[2] += 0.002127659574468085;
            result[3] += 0.3723404255319149;
            result[4] += 0.06170212765957447;
            result[5] += 0.5255319148936171;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42660000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
            result[0] += 0;
            result[1] += 0.8333333333333334;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16666666666666666;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.021739130434782608;
            result[2] += 0;
            result[3] += 0.06521739130434782;
            result[4] += 0.8695652173913043;
            result[5] += 0.043478260869565216;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.012658227848101267;
            result[1] += 0.7848101265822786;
            result[2] += 0.037974683544303806;
            result[3] += 0;
            result[4] += 0.16455696202531647;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0.1782178217821782;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.09900990099009901;
            result[4] += 0.27722772277227725;
            result[5] += 0.44554455445544555;
          } else {
            result[0] += 0.8479729729729731;
            result[1] += 0.0160472972972973;
            result[2] += 0.007601351351351353;
            result[3] += 0.010979729729729732;
            result[4] += 0.11570945945945947;
            result[5] += 0.0016891891891891895;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0.04105571847507331;
            result[1] += 0.005865102639296188;
            result[2] += 0.2844574780058651;
            result[3] += 0.33724340175953077;
            result[4] += 0.05571847507331378;
            result[5] += 0.2756598240469208;
          } else {
            result[0] += 0.7676767676767676;
            result[1] += 0.12121212121212122;
            result[2] += 0.0707070707070707;
            result[3] += 0;
            result[4] += 0.04040404040404041;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.23076923076923078;
            result[4] += 0.23076923076923078;
            result[5] += 0.5384615384615384;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06779661016949153;
            result[3] += 0.8983050847457628;
            result[4] += 0;
            result[5] += 0.03389830508474576;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
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
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c40000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a10000))) ) ) {
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
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0.625;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7666666666666667;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.06666666666666667;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42910000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42da0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0.16666666666666666;
            result[1] += 0.3333333333333333;
            result[2] += 0;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.3333333333333333;
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
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.004524886877828056;
            result[1] += 0;
            result[2] += 0.823529411764706;
            result[3] += 0.16742081447963802;
            result[4] += 0;
            result[5] += 0.004524886877828056;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0.015789473684210527;
            result[1] += 0;
            result[2] += 0.8736842105263158;
            result[3] += 0.1;
            result[4] += 0;
            result[5] += 0.010526315789473684;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9941060903732809;
            result[3] += 0.005893909626719057;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42da0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9958333333333333;
            result[5] += 0.004166666666666667;
          } else {
            result[0] += 0.1111111111111111;
            result[1] += 0;
            result[2] += 0.027777777777777776;
            result[3] += 0;
            result[4] += 0.75;
            result[5] += 0.1111111111111111;
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
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.9772727272727273;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.022727272727272728;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0.0011037527593818985;
            result[1] += 0.0011037527593818985;
            result[2] += 0;
            result[3] += 0.04856512141280353;
            result[4] += 0.056291390728476824;
            result[5] += 0.8929359823399559;
          } else {
            result[0] += 0.009302325581395349;
            result[1] += 0.020930232558139535;
            result[2] += 0.002325581395348837;
            result[3] += 0.43023255813953487;
            result[4] += 0.06976744186046512;
            result[5] += 0.46744186046511627;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42400000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.05084745762711865;
            result[1] += 0.05084745762711865;
            result[2] += 0;
            result[3] += 0.01694915254237288;
            result[4] += 0.8813559322033898;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.022727272727272728;
            result[1] += 0.6363636363636364;
            result[2] += 0;
            result[3] += 0.022727272727272728;
            result[4] += 0.3181818181818182;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0.04;
            result[1] += 0.74;
            result[2] += 0.02;
            result[3] += 0;
            result[4] += 0.18;
            result[5] += 0.02;
          } else {
            result[0] += 0.9131627056672761;
            result[1] += 0;
            result[2] += 0.005484460694698354;
            result[3] += 0.018281535648994516;
            result[4] += 0.050274223034734916;
            result[5] += 0.012797074954296161;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0.235;
            result[1] += 0.025;
            result[2] += 0.12;
            result[3] += 0.15;
            result[4] += 0.165;
            result[5] += 0.305;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6944444444444444;
            result[3] += 0.2361111111111111;
            result[4] += 0.041666666666666664;
            result[5] += 0.027777777777777776;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0.625;
            result[2] += 0;
            result[3] += 0.125;
            result[4] += 0.25;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0.8571428571428571;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06382978723404255;
            result[3] += 0.7340425531914894;
            result[4] += 0;
            result[5] += 0.20212765957446807;
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
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0.07142857142857142;
            result[1] += 0.05357142857142857;
            result[2] += 0.2857142857142857;
            result[3] += 0.3392857142857143;
            result[4] += 0.017857142857142856;
            result[5] += 0.23214285714285715;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8571428571428571;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.14285714285714285;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42dd0000))) ) ) {
            result[0] += 0.3333333333333333;
            result[1] += 0;
            result[2] += 0.6666666666666666;
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
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42910000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.016025641025641024;
            result[1] += 0;
            result[2] += 0.8685897435897436;
            result[3] += 0.10897435897435898;
            result[4] += 0;
            result[5] += 0.00641025641025641;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.625;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0.25;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9718543046357616;
            result[3] += 0.028145695364238412;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42930000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428e0000))) ) ) {
            result[0] += 0;
            result[1] += 0.008620689655172414;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9698275862068966;
            result[5] += 0.021551724137931036;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42680000))) ) ) {
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
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0.25316455696202533;
            result[1] += 0;
            result[2] += 0.012658227848101266;
            result[3] += 0;
            result[4] += 0.5822784810126582;
            result[5] += 0.1518987341772152;
          } else {
            result[0] += 0;
            result[1] += 0.001184834123222749;
            result[2] += 0.0035545023696682463;
            result[3] += 0.06635071090047394;
            result[4] += 0.05687203791469194;
            result[5] += 0.8720379146919431;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0.07874015748031496;
            result[1] += 0.003937007874015748;
            result[2] += 0.015748031496062992;
            result[3] += 0.21653543307086615;
            result[4] += 0.06299212598425197;
            result[5] += 0.6220472440944882;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.013793103448275862;
            result[3] += 0.7172413793103448;
            result[4] += 0.013793103448275862;
            result[5] += 0.25517241379310346;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8666666666666667;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.13333333333333333;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42cf0000))) ) ) {
            result[0] += 0;
            result[1] += 0.9953488372093023;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.004651162790697674;
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
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0.1977401129943503;
            result[1] += 0.1977401129943503;
            result[2] += 0.005649717514124294;
            result[3] += 0.022598870056497175;
            result[4] += 0.559322033898305;
            result[5] += 0.01694915254237288;
          } else {
            result[0] += 0.8377880184331797;
            result[1] += 0.02304147465437788;
            result[2] += 0.004608294930875576;
            result[3] += 0.04423963133640553;
            result[4] += 0.047926267281105994;
            result[5] += 0.0423963133640553;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0.01953125;
            result[1] += 0.01953125;
            result[2] += 0.203125;
            result[3] += 0.40625;
            result[4] += 0.046875;
            result[5] += 0.3046875;
          } else {
            result[0] += 0.3013698630136986;
            result[1] += 0.0045662100456621;
            result[2] += 0.5662100456621004;
            result[3] += 0.045662100456621;
            result[4] += 0.045662100456621;
            result[5] += 0.0365296803652968;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42900000))) ) ) {
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06;
            result[3] += 0.76;
            result[4] += 0;
            result[5] += 0.18;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5652173913043478;
            result[3] += 0.30434782608695654;
            result[4] += 0.043478260869565216;
            result[5] += 0.08695652173913043;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42960000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6842105263157895;
            result[3] += 0.10526315789473684;
            result[4] += 0;
            result[5] += 0.21052631578947367;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42810000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
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
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2857142857142857;
            result[3] += 0.7142857142857143;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.01910828025477707;
            result[1] += 0.0031847133757961785;
            result[2] += 0.8089171974522293;
            result[3] += 0.1464968152866242;
            result[4] += 0.006369426751592357;
            result[5] += 0.01592356687898089;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5454545454545454;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.45454545454545453;
          } else {
            result[0] += 0.0034965034965034965;
            result[1] += 0;
            result[2] += 0.986013986013986;
            result[3] += 0.01048951048951049;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42900000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9778761061946902;
            result[5] += 0.022123893805309734;
          } else {
            result[0] += 0;
            result[1] += 0.058823529411764705;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6470588235294118;
            result[5] += 0.29411764705882354;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x427c0000))) ) ) {
            result[0] += 0;
            result[1] += 0.25;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.75;
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
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.047619047619047616;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9047619047619048;
            result[5] += 0.047619047619047616;
          } else {
            result[0] += 0.0056022408963585435;
            result[1] += 0.0028011204481792717;
            result[2] += 0;
            result[3] += 0.03221288515406162;
            result[4] += 0.036414565826330535;
            result[5] += 0.9229691876750701;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0.6868686868686869;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.030303030303030304;
            result[4] += 0.18181818181818182;
            result[5] += 0.10101010101010101;
          } else {
            result[0] += 0.006593406593406593;
            result[1] += 0.002197802197802198;
            result[2] += 0.004395604395604396;
            result[3] += 0.42417582417582417;
            result[4] += 0.07912087912087912;
            result[5] += 0.4835164835164835;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cc0000))) ) ) {
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
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0.18181818181818182;
            result[2] += 0;
            result[3] += 0.6363636363636364;
            result[4] += 0;
            result[5] += 0.18181818181818182;
          } else {
            result[0] += 0.0021834061135371182;
            result[1] += 0.9825327510917031;
            result[2] += 0;
            result[3] += 0.006550218340611354;
            result[4] += 0.008733624454148473;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0.10483870967741936;
            result[1] += 0.25806451612903225;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5887096774193549;
            result[5] += 0.04838709677419355;
          } else {
            result[0] += 0.8551111111111112;
            result[1] += 0.008888888888888889;
            result[2] += 0.010666666666666666;
            result[3] += 0.032;
            result[4] += 0.05333333333333334;
            result[5] += 0.04;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0.05217391304347826;
            result[1] += 0.02608695652173913;
            result[2] += 0.28405797101449276;
            result[3] += 0.2492753623188406;
            result[4] += 0.06086956521739131;
            result[5] += 0.32753623188405795;
          } else {
            result[0] += 0.6779661016949153;
            result[1] += 0;
            result[2] += 0.2796610169491526;
            result[3] += 0.04237288135593221;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x429b0000))) ) ) {
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
            result[3] += 0.21428571428571427;
            result[4] += 0;
            result[5] += 0.7857142857142857;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0819672131147541;
            result[3] += 0.8524590163934427;
            result[4] += 0;
            result[5] += 0.0655737704918033;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0.2222222222222222;
            result[4] += 0;
            result[5] += 0.1111111111111111;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.34210526315789475;
            result[3] += 0.02631578947368421;
            result[4] += 0.15789473684210525;
            result[5] += 0.47368421052631576;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0.07692307692307693;
            result[1] += 0;
            result[2] += 0.3076923076923077;
            result[3] += 0.4230769230769231;
            result[4] += 0.038461538461538464;
            result[5] += 0.15384615384615385;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.832258064516129;
            result[3] += 0.15483870967741936;
            result[4] += 0.0064516129032258064;
            result[5] += 0.0064516129032258064;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428d0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0.2;
            result[1] += 0;
            result[2] += 0.8;
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
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42db0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8700361010830325;
            result[3] += 0.1263537906137184;
            result[4] += 0;
            result[5] += 0.0036101083032490976;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9814385150812065;
            result[3] += 0.018561484918793503;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.1875;
            result[1] += 0;
            result[2] += 0.8125;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42240000))) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42960000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.15384615384615385;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8461538461538461;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42460000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0.0014858841010401188;
            result[1] += 0;
            result[2] += 0.0014858841010401188;
            result[3] += 0.014858841010401188;
            result[4] += 0.02526002971768202;
            result[5] += 0.9569093610698366;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.24615384615384617;
            result[4] += 0.12307692307692308;
            result[5] += 0.6307692307692307;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0.7857142857142857;
            result[1] += 0;
            result[2] += 0.05357142857142857;
            result[3] += 0;
            result[4] += 0.16071428571428573;
            result[5] += 0;
          } else {
            result[0] += 0.004640371229698376;
            result[1] += 0.037122969837587005;
            result[2] += 0.025522041763341066;
            result[3] += 0.1902552204176334;
            result[4] += 0.060324825986078884;
            result[5] += 0.6821345707656613;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0.4444444444444444;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5555555555555556;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.019867549668874173;
            result[3] += 0.8013245033112583;
            result[4] += 0;
            result[5] += 0.17880794701986755;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x425a0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0.04545454545454546;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9090909090909092;
            result[5] += 0.04545454545454546;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42740000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.014925373134328358;
            result[1] += 0.9776119402985075;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.007462686567164179;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0.10869565217391304;
            result[1] += 0.18115942028985507;
            result[2] += 0;
            result[3] += 0.007246376811594203;
            result[4] += 0.6956521739130435;
            result[5] += 0.007246376811594203;
          } else {
            result[0] += 0.8751156336725254;
            result[1] += 0.012950971322849213;
            result[2] += 0;
            result[3] += 0.025901942645698426;
            result[4] += 0.0545790934320074;
            result[5] += 0.03145235892691952;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0.03614457831325302;
            result[1] += 0.10441767068273093;
            result[2] += 0.06827309236947793;
            result[3] += 0.32128514056224905;
            result[4] += 0.14056224899598396;
            result[5] += 0.32931726907630526;
          } else {
            result[0] += 0.76;
            result[1] += 0.07;
            result[2] += 0.04;
            result[3] += 0.01;
            result[4] += 0.12;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.06666666666666667;
            result[4] += 0;
            result[5] += 0.6;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.15503875968992248;
            result[3] += 0.6511627906976745;
            result[4] += 0;
            result[5] += 0.1937984496124031;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1;
            result[3] += 0.1;
            result[4] += 0;
            result[5] += 0.8;
          } else {
            result[0] += 0;
            result[1] += 0.01639344262295082;
            result[2] += 0.7049180327868853;
            result[3] += 0.14754098360655737;
            result[4] += 0.01639344262295082;
            result[5] += 0.11475409836065574;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42910000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42bc0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
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
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0.029498525073746312;
            result[1] += 0;
            result[2] += 0.7905604719764012;
            result[3] += 0.1592920353982301;
            result[4] += 0;
            result[5] += 0.02064896755162242;
          } else {
            result[0] += 0.0016286644951140066;
            result[1] += 0;
            result[2] += 0.9560260586319218;
            result[3] += 0.03908794788273615;
            result[4] += 0;
            result[5] += 0.003257328990228013;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0.02030456852791878;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9746192893401016;
            result[5] += 0.005076142131979695;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0.3333333333333333;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b30000))) ) ) {
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
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.002652519893899204;
            result[1] += 0;
            result[2] += 0.003978779840848806;
            result[3] += 0.034482758620689655;
            result[4] += 0.038461538461538464;
            result[5] += 0.9204244031830239;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0.6376811594202898;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.30434782608695654;
            result[5] += 0.057971014492753624;
          } else {
            result[0] += 0.006607929515418502;
            result[1] += 0.019823788546255508;
            result[2] += 0;
            result[3] += 0.3700440528634361;
            result[4] += 0.06828193832599119;
            result[5] += 0.5352422907488987;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x423e0000))) ) ) {
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
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b00000))) ) ) {
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
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0.10240963855421686;
            result[1] += 0.2469879518072289;
            result[2] += 0.012048192771084338;
            result[3] += 0.006024096385542169;
            result[4] += 0.5843373493975904;
            result[5] += 0.04819277108433735;
          } else {
            result[0] += 0.8707052441229657;
            result[1] += 0.0054249547920434;
            result[2] += 0.009041591320072333;
            result[3] += 0.0325497287522604;
            result[4] += 0.04972875226039783;
            result[5] += 0.0325497287522604;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0.027972027972027972;
            result[1] += 0.0034965034965034965;
            result[2] += 0.23076923076923078;
            result[3] += 0.2937062937062937;
            result[4] += 0.10139860139860139;
            result[5] += 0.34265734265734266;
          } else {
            result[0] += 0.8767123287671234;
            result[1] += 0;
            result[2] += 0.04109589041095891;
            result[3] += 0;
            result[4] += 0.08219178082191782;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.11627906976744186;
            result[4] += 0.046511627906976744;
            result[5] += 0.8372093023255814;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.3;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09027777777777779;
            result[3] += 0.7916666666666667;
            result[4] += 0.01388888888888889;
            result[5] += 0.10416666666666669;
          } else {
            result[0] += 0.13333333333333333;
            result[1] += 0.13333333333333333;
            result[2] += 0.6666666666666666;
            result[3] += 0.06666666666666667;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0.06060606060606061;
            result[2] += 0.36363636363636365;
            result[3] += 0.36363636363636365;
            result[4] += 0;
            result[5] += 0.21212121212121213;
          } else {
            result[0] += 0.007751937984496124;
            result[1] += 0;
            result[2] += 0.8217054263565892;
            result[3] += 0.10852713178294573;
            result[4] += 0;
            result[5] += 0.06201550387596899;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.9230769230769231;
            result[1] += 0;
            result[2] += 0.07692307692307693;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42d60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.76;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.04;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.44;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0.16;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7368421052631579;
            result[3] += 0.2631578947368421;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.935064935064935;
            result[3] += 0.06493506493506493;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5384615384615384;
            result[3] += 0.46153846153846156;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9292929292929293;
            result[3] += 0.0707070707070707;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9285714285714286;
            result[3] += 0.07142857142857142;
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
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0.0038314176245210726;
            result[1] += 0.01532567049808429;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9501915708812261;
            result[5] += 0.03065134099616858;
          } else {
            result[0] += 0;
            result[1] += 0.7857142857142857;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.21428571428571427;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0.043478260869565216;
            result[1] += 0.17391304347826086;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6086956521739131;
            result[5] += 0.17391304347826086;
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
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 0.05555555555555555;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7777777777777778;
            result[5] += 0.16666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.011747430249632892;
            result[4] += 0.032305433186490456;
            result[5] += 0.9559471365638766;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0.004166666666666667;
            result[2] += 0.016666666666666666;
            result[3] += 0.14166666666666666;
            result[4] += 0.23333333333333334;
            result[5] += 0.6041666666666666;
          } else {
            result[0] += 0.028169014084507043;
            result[1] += 0.023474178403755867;
            result[2] += 0.04225352112676056;
            result[3] += 0.539906103286385;
            result[4] += 0.009389671361502348;
            result[5] += 0.3568075117370892;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42480000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9976190476190476;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002380952380952381;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0.1780821917808219;
            result[2] += 0;
            result[3] += 0.0410958904109589;
            result[4] += 0.6986301369863014;
            result[5] += 0.0821917808219178;
          } else {
            result[0] += 0;
            result[1] += 0.8666666666666667;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.13333333333333333;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42980000))) ) ) {
            result[0] += 0.4356060606060606;
            result[1] += 0.11363636363636363;
            result[2] += 0;
            result[3] += 0.011363636363636364;
            result[4] += 0.35984848484848486;
            result[5] += 0.07954545454545454;
          } else {
            result[0] += 0.9130869130869131;
            result[1] += 0.005994005994005995;
            result[2] += 0.003996003996003997;
            result[3] += 0.029970029970029975;
            result[4] += 0.02397602397602398;
            result[5] += 0.02297702297702298;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d20000))) ) ) {
            result[0] += 0.03333333333333333;
            result[1] += 0.02666666666666667;
            result[2] += 0.12666666666666668;
            result[3] += 0.36666666666666664;
            result[4] += 0.07;
            result[5] += 0.37666666666666665;
          } else {
            result[0] += 0.8804347826086957;
            result[1] += 0;
            result[2] += 0.05434782608695652;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.06521739130434782;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d60000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1968503937007874;
            result[3] += 0.6614173228346457;
            result[4] += 0;
            result[5] += 0.14173228346456693;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
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
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7000000000000001;
            result[3] += 0.2666666666666667;
            result[4] += 0;
            result[5] += 0.03333333333333334;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43000000))) ) ) {
            result[0] += 0.017857142857142856;
            result[1] += 0;
            result[2] += 0.9285714285714286;
            result[3] += 0.05357142857142857;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4285714285714286;
            result[3] += 0.09523809523809525;
            result[4] += 0;
            result[5] += 0.4761904761904762;
          } else {
            result[0] += 0.006230529595015576;
            result[1] += 0;
            result[2] += 0.8317757009345794;
            result[3] += 0.13395638629283488;
            result[4] += 0.003115264797507788;
            result[5] += 0.024922118380062305;
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
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9230769230769231;
            result[3] += 0.07692307692307693;
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
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.00528169014084507;
            result[1] += 0;
            result[2] += 0.9859154929577465;
            result[3] += 0.008802816901408451;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 0.004694835680751175;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9906103286384977;
            result[5] += 0.004694835680751175;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.6;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0.125;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.875;
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
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0.043478260869565216;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.028985507246376812;
            result[4] += 0.43478260869565216;
            result[5] += 0.4927536231884058;
          } else {
            result[0] += 0;
            result[1] += 0.11764705882352941;
            result[2] += 0;
            result[3] += 0.5882352941176471;
            result[4] += 0.29411764705882354;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42780000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.029411764705882353;
            result[4] += 0.7647058823529411;
            result[5] += 0.20588235294117646;
          } else {
            result[0] += 0;
            result[1] += 0.3125;
            result[2] += 0;
            result[3] += 0.375;
            result[4] += 0;
            result[5] += 0.3125;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.021052631578947368;
            result[4] += 0.031578947368421054;
            result[5] += 0.9473684210526315;
          } else {
            result[0] += 0.006756756756756757;
            result[1] += 0.013513513513513514;
            result[2] += 0.033783783783783786;
            result[3] += 0.23648648648648649;
            result[4] += 0.10810810810810811;
            result[5] += 0.6013513513513513;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0.38461538461538464;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.46153846153846156;
            result[5] += 0.15384615384615385;
          } else {
            result[0] += 0.012048192771084338;
            result[1] += 0;
            result[2] += 0.018072289156626505;
            result[3] += 0.24096385542168675;
            result[4] += 0.018072289156626505;
            result[5] += 0.7108433734939759;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.023148148148148147;
            result[3] += 0.7314814814814815;
            result[4] += 0;
            result[5] += 0.24537037037037038;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42480000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.995;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.005;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42460000))) ) ) {
            result[0] += 0;
            result[1] += 0.9016393442622951;
            result[2] += 0;
            result[3] += 0.03278688524590164;
            result[4] += 0.06557377049180328;
            result[5] += 0;
          } else {
            result[0] += 0.07446808510638299;
            result[1] += 0.15957446808510642;
            result[2] += 0;
            result[3] += 0.021276595744680854;
            result[4] += 0.7340425531914895;
            result[5] += 0.010638297872340427;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0.23333333333333334;
            result[1] += 0.2;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0.06666666666666667;
          } else {
            result[0] += 0.9433237271853987;
            result[1] += 0.009606147934678195;
            result[2] += 0.0019212295869356388;
            result[3] += 0.007684918347742555;
            result[4] += 0.03554274735830932;
            result[5] += 0.0019212295869356388;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42e10000))) ) ) {
            result[0] += 0.0472972972972973;
            result[1] += 0.04054054054054054;
            result[2] += 0.2635135135135135;
            result[3] += 0.32432432432432434;
            result[4] += 0.06756756756756757;
            result[5] += 0.25675675675675674;
          } else {
            result[0] += 0.7115384615384616;
            result[1] += 0;
            result[2] += 0.038461538461538464;
            result[3] += 0.019230769230769232;
            result[4] += 0.15384615384615385;
            result[5] += 0.07692307692307693;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42940000))) ) ) {
            result[0] += 0.037037037037037035;
            result[1] += 0.1111111111111111;
            result[2] += 0.1111111111111111;
            result[3] += 0;
            result[4] += 0.6296296296296297;
            result[5] += 0.1111111111111111;
          } else {
            result[0] += 0.017241379310344827;
            result[1] += 0;
            result[2] += 0.05172413793103448;
            result[3] += 0.3275862068965517;
            result[4] += 0.017241379310344827;
            result[5] += 0.5862068965517241;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.27083333333333337;
            result[3] += 0.5625000000000001;
            result[4] += 0;
            result[5] += 0.16666666666666669;
          } else {
            result[0] += 0.038461538461538464;
            result[1] += 0;
            result[2] += 0.6794871794871795;
            result[3] += 0.19230769230769232;
            result[4] += 0.01282051282051282;
            result[5] += 0.07692307692307693;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0.017094017094017096;
            result[1] += 0;
            result[2] += 0.5641025641025641;
            result[3] += 0.37606837606837606;
            result[4] += 0;
            result[5] += 0.042735042735042736;
          } else {
            result[0] += 0.039603960396039604;
            result[1] += 0;
            result[2] += 0.8316831683168316;
            result[3] += 0.11551155115511551;
            result[4] += 0;
            result[5] += 0.013201320132013201;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.008802816901408451;
            result[1] += 0;
            result[2] += 0.977112676056338;
            result[3] += 0.01232394366197183;
            result[4] += 0;
            result[5] += 0.0017605633802816902;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x422e0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a40000))) ) ) {
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
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0.005952380952380952;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9940476190476191;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02;
            result[4] += 0.54;
            result[5] += 0.44;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 0.7608695652173914;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.21739130434782608;
            result[5] += 0.021739130434782608;
          } else {
            result[0] += 0.003194888178913738;
            result[1] += 0.006389776357827476;
            result[2] += 0.0010649627263045794;
            result[3] += 0.04046858359957402;
            result[4] += 0.06389776357827476;
            result[5] += 0.8849840255591054;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3125;
            result[4] += 0.015625;
            result[5] += 0.671875;
          } else {
            result[0] += 0.006896551724137931;
            result[1] += 0;
            result[2] += 0.013793103448275862;
            result[3] += 0.8068965517241379;
            result[4] += 0;
            result[5] += 0.1724137931034483;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0.3269230769230769;
            result[1] += 0.009615384615384616;
            result[2] += 0;
            result[3] += 0.0625;
            result[4] += 0.46634615384615385;
            result[5] += 0.1346153846153846;
          } else {
            result[0] += 0.8432432432432433;
            result[1] += 0.04594594594594595;
            result[2] += 0.0036036036036036037;
            result[3] += 0.023423423423423424;
            result[4] += 0.07297297297297298;
            result[5] += 0.010810810810810811;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0.04932735426008968;
            result[1] += 0.002242152466367713;
            result[2] += 0.226457399103139;
            result[3] += 0.273542600896861;
            result[4] += 0.08520179372197309;
            result[5] += 0.3632286995515695;
          } else {
            result[0] += 0.6829268292682927;
            result[1] += 0.10975609756097561;
            result[2] += 0.012195121951219513;
            result[3] += 0.06097560975609756;
            result[4] += 0.13414634146341464;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c20000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9950248756218906;
            result[2] += 0.0024875621890547263;
            result[3] += 0.0024875621890547263;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c90000))) ) ) {
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
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0.25;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.75;
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
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0.057692307692307696;
            result[2] += 0.19230769230769232;
            result[3] += 0.6730769230769231;
            result[4] += 0;
            result[5] += 0.07692307692307693;
          } else {
            result[0] += 0.09302325581395349;
            result[1] += 0;
            result[2] += 0.4418604651162791;
            result[3] += 0.11627906976744186;
            result[4] += 0.046511627906976744;
            result[5] += 0.3023255813953488;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c00000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8333333333333334;
            result[4] += 0;
            result[5] += 0.16666666666666666;
          } else {
            result[0] += 0.25;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0.019230769230769232;
            result[1] += 0;
            result[2] += 0.9038461538461539;
            result[3] += 0.019230769230769232;
            result[4] += 0;
            result[5] += 0.057692307692307696;
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
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07692307692307693;
            result[3] += 0.38461538461538464;
            result[4] += 0;
            result[5] += 0.5384615384615384;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6703296703296704;
            result[3] += 0.29670329670329676;
            result[4] += 0;
            result[5] += 0.032967032967032975;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42930000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0037593984962406013;
            result[1] += 0;
            result[2] += 0.8834586466165414;
            result[3] += 0.10902255639097744;
            result[4] += 0;
            result[5] += 0.0037593984962406013;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42e30000))) ) ) {
            result[0] += 0.009433962264150943;
            result[1] += 0;
            result[2] += 0.9433962264150944;
            result[3] += 0.04716981132075472;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5714285714285714;
            result[3] += 0.42857142857142855;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9402985074626866;
            result[3] += 0.05970149253731343;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.992462311557789;
            result[3] += 0.007537688442211055;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0.015957446808510637;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9787234042553191;
            result[5] += 0.005319148936170213;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.06666666666666667;
            result[4] += 0.26666666666666666;
            result[5] += 0.6666666666666666;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x426c0000))) ) ) {
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
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0.02040816326530612;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8163265306122449;
            result[5] += 0.16326530612244897;
          } else {
            result[0] += 0.02872340425531915;
            result[1] += 0.0010638297872340426;
            result[2] += 0;
            result[3] += 0.05106382978723404;
            result[4] += 0.04148936170212766;
            result[5] += 0.8776595744680851;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0.03076923076923077;
            result[1] += 0.007692307692307693;
            result[2] += 0.11538461538461539;
            result[3] += 0.2;
            result[4] += 0.08461538461538462;
            result[5] += 0.5615384615384615;
          } else {
            result[0] += 0.026845637583892617;
            result[1] += 0;
            result[2] += 0.040268456375838924;
            result[3] += 0.6912751677852349;
            result[4] += 0.020134228187919462;
            result[5] += 0.2214765100671141;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0.9375;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0625;
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
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0.0718954248366013;
            result[1] += 0.1111111111111111;
            result[2] += 0;
            result[3] += 0.006535947712418301;
            result[4] += 0.7973856209150327;
            result[5] += 0.013071895424836602;
          } else {
            result[0] += 0.8178887993553586;
            result[1] += 0.041901692183722805;
            result[2] += 0.0016116035455278;
            result[3] += 0.0265914585012087;
            result[4] += 0.0692989524576954;
            result[5] += 0.0427074939564867;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0.007874015748031496;
            result[1] += 0.007874015748031496;
            result[2] += 0.05511811023622047;
            result[3] += 0.5275590551181102;
            result[4] += 0.05511811023622047;
            result[5] += 0.3464566929133858;
          } else {
            result[0] += 0.367816091954023;
            result[1] += 0;
            result[2] += 0.5229885057471264;
            result[3] += 0.06896551724137931;
            result[4] += 0.028735632183908046;
            result[5] += 0.011494252873563218;
          }
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
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
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11363636363636363;
            result[3] += 0.7045454545454546;
            result[4] += 0;
            result[5] += 0.18181818181818182;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13333333333333333;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x427c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9444444444444444;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.05555555555555555;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.358974358974359;
            result[3] += 0.48717948717948717;
            result[4] += 0;
            result[5] += 0.15384615384615385;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 0;
            result[1] += 0.2857142857142857;
            result[2] += 0;
            result[3] += 0.5714285714285714;
            result[4] += 0.14285714285714285;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8571428571428572;
            result[3] += 0.13142857142857145;
            result[4] += 0.005714285714285715;
            result[5] += 0.005714285714285715;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9090909090909091;
            result[3] += 0.09090909090909091;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x43040000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9783464566929134;
            result[3] += 0.01968503937007874;
            result[4] += 0;
            result[5] += 0.001968503937007874;
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
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428d0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42880000))) ) ) {
            result[0] += 0.00881057268722467;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9779735682819384;
            result[5] += 0.013215859030837005;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.42857142857142855;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5714285714285714;
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
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0.003667481662591687;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02444987775061125;
            result[4] += 0.04645476772616137;
            result[5] += 0.9254278728606357;
          } else {
            result[0] += 0.2777777777777778;
            result[1] += 0.3333333333333333;
            result[2] += 0;
            result[3] += 0.16666666666666666;
            result[4] += 0.16666666666666666;
            result[5] += 0.05555555555555555;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.03571428571428571;
            result[3] += 0.14285714285714285;
            result[4] += 0.017857142857142856;
            result[5] += 0.8035714285714286;
          } else {
            result[0] += 0.003875968992248062;
            result[1] += 0;
            result[2] += 0.046511627906976744;
            result[3] += 0.49612403100775193;
            result[4] += 0.015503875968992248;
            result[5] += 0.437984496124031;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42840000))) ) ) {
            result[0] += 0;
            result[1] += 0.10810810810810811;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8918918918918919;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.14285714285714285;
            result[2] += 0;
            result[3] += 0.8571428571428571;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0.4444444444444444;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5555555555555556;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9906542056074766;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.007009345794392523;
            result[5] += 0.002336448598130841;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0.027777777777777776;
            result[1] += 0.4444444444444444;
            result[2] += 0;
            result[3] += 0.027777777777777776;
            result[4] += 0.5;
            result[5] += 0;
          } else {
            result[0] += 0.8651315789473685;
            result[1] += 0.008223684210526315;
            result[2] += 0.009046052631578948;
            result[3] += 0.019736842105263157;
            result[4] += 0.06907894736842106;
            result[5] += 0.028782894736842105;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0.03292181069958848;
            result[1] += 0.012345679012345678;
            result[2] += 0.0411522633744856;
            result[3] += 0.4074074074074074;
            result[4] += 0.06995884773662552;
            result[5] += 0.43621399176954734;
          } else {
            result[0] += 0.48000000000000004;
            result[1] += 0;
            result[2] += 0.44000000000000006;
            result[3] += 0.07200000000000001;
            result[4] += 0.008000000000000002;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.043478260869565216;
            result[3] += 0.021739130434782608;
            result[4] += 0;
            result[5] += 0.9347826086956522;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0.0125;
            result[1] += 0;
            result[2] += 0.0375;
            result[3] += 0.5625;
            result[4] += 0.025;
            result[5] += 0.3625;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09090909090909091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.9090909090909091;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.12195121951219512;
            result[3] += 0.6829268292682927;
            result[4] += 0.0975609756097561;
            result[5] += 0.0975609756097561;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7078651685393259;
            result[3] += 0.24719101123595508;
            result[4] += 0;
            result[5] += 0.04494382022471911;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.75;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.625;
            result[3] += 0.3557692307692308;
            result[4] += 0;
            result[5] += 0.019230769230769232;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6296296296296297;
            result[3] += 0.3333333333333333;
            result[4] += 0.037037037037037035;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9857142857142858;
            result[3] += 0.014285714285714285;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0.4666666666666667;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0.024390243902439025;
            result[1] += 0;
            result[2] += 0.8536585365853658;
            result[3] += 0.04878048780487805;
            result[4] += 0;
            result[5] += 0.07317073170731707;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0.011111111111111112;
            result[1] += 0;
            result[2] += 0.8666666666666667;
            result[3] += 0.11666666666666667;
            result[4] += 0;
            result[5] += 0.005555555555555556;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9862745098039216;
            result[3] += 0.011764705882352941;
            result[4] += 0;
            result[5] += 0.00196078431372549;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9830508474576272;
            result[5] += 0.01694915254237288;
          } else {
            result[0] += 0.09375;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.71875;
            result[5] += 0.1875;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42c00000))) ) ) {
            result[0] += 0.4;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0.2;
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
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8148148148148148;
            result[5] += 0.18518518518518517;
          } else {
            result[0] += 0.004189944134078212;
            result[1] += 0.002793296089385475;
            result[2] += 0.002793296089385475;
            result[3] += 0.027932960893854747;
            result[4] += 0.03770949720670391;
            result[5] += 0.9245810055865922;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0.8292682926829268;
            result[1] += 0.0975609756097561;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.04878048780487805;
            result[5] += 0.024390243902439025;
          } else {
            result[0] += 0.003883495145631068;
            result[1] += 0.009708737864077669;
            result[2] += 0.007766990291262136;
            result[3] += 0.3067961165048544;
            result[4] += 0.0912621359223301;
            result[5] += 0.5805825242718446;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0.02857142857142857;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9714285714285714;
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
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0.7058823529411765;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.29411764705882354;
            result[5] += 0;
          } else {
            result[0] += 0.0022471910112359553;
            result[1] += 0.9955056179775281;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0022471910112359553;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42480000))) ) ) {
            result[0] += 0;
            result[1] += 0.9;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1;
            result[5] += 0;
          } else {
            result[0] += 0.024691358024691357;
            result[1] += 0.13580246913580246;
            result[2] += 0.037037037037037035;
            result[3] += 0;
            result[4] += 0.7530864197530864;
            result[5] += 0.04938271604938271;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d90000))) ) ) {
            result[0] += 0.6436931079323798;
            result[1] += 0.005201560468140443;
            result[2] += 0.04421326397919376;
            result[3] += 0.11443433029908974;
            result[4] += 0.11313394018205462;
            result[5] += 0.07932379713914176;
          } else {
            result[0] += 0.9491255961844197;
            result[1] += 0;
            result[2] += 0.022257551669316374;
            result[3] += 0;
            result[4] += 0.02702702702702703;
            result[5] += 0.001589825119236884;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42ac0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 0.42857142857142855;
            result[2] += 0.14285714285714285;
            result[3] += 0;
            result[4] += 0.42857142857142855;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.22448979591836735;
            result[4] += 0.04081632653061224;
            result[5] += 0.7346938775510204;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.06976744186046512;
            result[1] += 0.023255813953488372;
            result[2] += 0.3488372093023256;
            result[3] += 0.20930232558139536;
            result[4] += 0.11627906976744186;
            result[5] += 0.23255813953488372;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.033707865168539325;
            result[2] += 0.07865168539325842;
            result[3] += 0.797752808988764;
            result[4] += 0.02247191011235955;
            result[5] += 0.06741573033707865;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07692307692307693;
            result[3] += 0.23076923076923078;
            result[4] += 0.07692307692307693;
            result[5] += 0.6153846153846154;
          } else {
            result[0] += 0.05714285714285714;
            result[1] += 0;
            result[2] += 0.6857142857142857;
            result[3] += 0.17142857142857143;
            result[4] += 0;
            result[5] += 0.08571428571428572;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0;
            result[1] += 0.8461538461538461;
            result[2] += 0;
            result[3] += 0.15384615384615385;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.75;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6206896551724138;
            result[3] += 0.32019704433497537;
            result[4] += 0;
            result[5] += 0.059113300492610835;
          } else {
            result[0] += 0.0273972602739726;
            result[1] += 0;
            result[2] += 0.9383561643835616;
            result[3] += 0.03424657534246575;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0.003787878787878788;
            result[2] += 0.9166666666666666;
            result[3] += 0.07575757575757576;
            result[4] += 0;
            result[5] += 0.003787878787878788;
          } else {
            result[0] += 0.002777777777777778;
            result[1] += 0;
            result[2] += 0.9888888888888889;
            result[3] += 0.008333333333333333;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42e50000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x41f00000))) ) ) {
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
            result[4] += 0.9727272727272728;
            result[5] += 0.02727272727272727;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c20000))) ) ) {
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
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x425a0000))) ) ) {
            result[0] += 0.6666666666666666;
            result[1] += 0.06060606060606061;
            result[2] += 0;
            result[3] += 0.06060606060606061;
            result[4] += 0.09090909090909091;
            result[5] += 0.12121212121212122;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0485207100591716;
            result[4] += 0.046153846153846156;
            result[5] += 0.9053254437869822;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.011627906976744186;
            result[3] += 0.046511627906976744;
            result[4] += 0.10465116279069768;
            result[5] += 0.8372093023255814;
          } else {
            result[0] += 0.10175438596491229;
            result[1] += 0.01754385964912281;
            result[2] += 0.024561403508771933;
            result[3] += 0.48421052631578954;
            result[4] += 0.13333333333333336;
            result[5] += 0.2385964912280702;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42480000))) ) ) {
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
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0.00970873786407767;
            result[1] += 0.08737864077669905;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.854368932038835;
            result[5] += 0.048543689320388356;
          } else {
            result[0] += 0.17857142857142858;
            result[1] += 0.6785714285714286;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.14285714285714285;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0.7966101694915254;
            result[1] += 0.01694915254237288;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.15254237288135594;
            result[5] += 0.03389830508474576;
          } else {
            result[0] += 0.007042253521126761;
            result[1] += 0.07746478873239436;
            result[2] += 0;
            result[3] += 0.31690140845070425;
            result[4] += 0.04929577464788732;
            result[5] += 0.5492957746478874;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0.08064516129032258;
            result[1] += 0;
            result[2] += 0.016129032258064516;
            result[3] += 0.22580645161290322;
            result[4] += 0.14516129032258066;
            result[5] += 0.532258064516129;
          } else {
            result[0] += 0.8458401305057096;
            result[1] += 0.021207177814029365;
            result[2] += 0.01468189233278956;
            result[3] += 0.02365415986949429;
            result[4] += 0.06688417618270799;
            result[5] += 0.02773246329526917;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3157894736842105;
            result[4] += 0;
            result[5] += 0.6842105263157895;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1557377049180328;
            result[3] += 0.6885245901639344;
            result[4] += 0;
            result[5] += 0.1557377049180328;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.08333333333333333;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0.022988505747126436;
            result[1] += 0;
            result[2] += 0.4827586206896552;
            result[3] += 0.3563218390804598;
            result[4] += 0.06896551724137931;
            result[5] += 0.06896551724137931;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42eb0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7777777777777778;
            result[3] += 0.2222222222222222;
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
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ef0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4782608695652174;
            result[3] += 0.34782608695652173;
            result[4] += 0;
            result[5] += 0.17391304347826086;
          } else {
            result[0] += 0.007978723404255319;
            result[1] += 0.0026595744680851063;
            result[2] += 0.8563829787234043;
            result[3] += 0.11170212765957446;
            result[4] += 0;
            result[5] += 0.02127659574468085;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.9090909090909091;
            result[1] += 0;
            result[2] += 0.09090909090909091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.2;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.003472222222222222;
            result[1] += 0;
            result[2] += 0.9774305555555556;
            result[3] += 0.019097222222222224;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42860000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9942528735632183;
            result[5] += 0.005747126436781609;
          } else {
            result[0] += 0.07407407407407407;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8148148148148148;
            result[5] += 0.1111111111111111;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.16666666666666666;
            result[4] += 0.3333333333333333;
            result[5] += 0.5;
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
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42700000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42990000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.047619047619047616;
            result[3] += 0;
            result[4] += 0.9047619047619048;
            result[5] += 0.047619047619047616;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0.75;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0013477088948787063;
            result[3] += 0.03234501347708895;
            result[4] += 0.01752021563342318;
            result[5] += 0.9487870619946092;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42980000))) ) ) {
            result[0] += 0.21621621621621623;
            result[1] += 0.05405405405405406;
            result[2] += 0;
            result[3] += 0.06306306306306306;
            result[4] += 0.27927927927927926;
            result[5] += 0.38738738738738737;
          } else {
            result[0] += 0.03571428571428571;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.09523809523809523;
            result[4] += 0.011904761904761904;
            result[5] += 0.8571428571428571;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0.02304147465437788;
            result[1] += 0;
            result[2] += 0.004608294930875576;
            result[3] += 0.6082949308755761;
            result[4] += 0;
            result[5] += 0.3640552995391705;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1744186046511628;
            result[3] += 0.16279069767441862;
            result[4] += 0.011627906976744186;
            result[5] += 0.6511627906976745;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42890000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
            result[0] += 0;
            result[1] += 0.975609756097561;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.024390243902439025;
            result[5] += 0;
          } else {
            result[0] += 0.1065989847715736;
            result[1] += 0.06091370558375635;
            result[2] += 0.005076142131979695;
            result[3] += 0.005076142131979695;
            result[4] += 0.766497461928934;
            result[5] += 0.05583756345177665;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0.8630377524143986;
            result[1] += 0.019315188762071993;
            result[2] += 0.0026338893766461808;
            result[3] += 0.03424056189640035;
            result[4] += 0.058823529411764705;
            result[5] += 0.021949078138718173;
          } else {
            result[0] += 0.19166666666666668;
            result[1] += 0.016666666666666666;
            result[2] += 0.05416666666666667;
            result[3] += 0.23333333333333334;
            result[4] += 0.10416666666666667;
            result[5] += 0.4;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.1111111111111111;
            result[1] += 0.8888888888888888;
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
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0.010362694300518135;
            result[2] += 0.21761658031088082;
            result[3] += 0.5077720207253886;
            result[4] += 0;
            result[5] += 0.26424870466321243;
          } else {
            result[0] += 0.07575757575757576;
            result[1] += 0.015151515151515152;
            result[2] += 0.5909090909090909;
            result[3] += 0.19696969696969696;
            result[4] += 0.015151515151515152;
            result[5] += 0.10606060606060606;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.65;
            result[3] += 0.35;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9420289855072463;
            result[3] += 0.057971014492753624;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0.17857142857142858;
            result[4] += 0;
            result[5] += 0.6785714285714286;
          } else {
            result[0] += 0.11320754716981132;
            result[1] += 0;
            result[2] += 0.7547169811320755;
            result[3] += 0.018867924528301886;
            result[4] += 0.03773584905660377;
            result[5] += 0.07547169811320754;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0.00966183574879227;
            result[1] += 0;
            result[2] += 0.9347826086956522;
            result[3] += 0.049516908212560384;
            result[4] += 0.0024154589371980675;
            result[5] += 0.0036231884057971015;
          } else {
            result[0] += 0.3888888888888889;
            result[1] += 0;
            result[2] += 0.6111111111111112;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42360000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0.2;
            result[2] += 0;
            result[3] += 0.2;
            result[4] += 0.6;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9230769230769231;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07692307692307693;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 0.012096774193548387;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9516129032258065;
            result[5] += 0.036290322580645164;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.4;
            result[4] += 0.2;
            result[5] += 0.4;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.06896551724137931;
            result[4] += 0.6206896551724138;
            result[5] += 0.3103448275862069;
          } else {
            result[0] += 0.002509410288582183;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.050188205771643665;
            result[4] += 0.018820577164366373;
            result[5] += 0.9284818067754078;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.8271604938271605;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1728395061728395;
            result[5] += 0;
          } else {
            result[0] += 0.01715686274509804;
            result[1] += 0.007352941176470588;
            result[2] += 0.012254901960784314;
            result[3] += 0.3897058823529412;
            result[4] += 0.125;
            result[5] += 0.4485294117647059;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42460000))) ) ) {
            result[0] += 0;
            result[1] += 0.9634146341463414;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.036585365853658534;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.1568627450980392;
            result[2] += 0.0392156862745098;
            result[3] += 0.049019607843137254;
            result[4] += 0.6078431372549019;
            result[5] += 0.14705882352941177;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0.8776255707762557;
            result[1] += 0.0073059360730593605;
            result[2] += 0.00821917808219178;
            result[3] += 0.021004566210045664;
            result[4] += 0.04200913242009133;
            result[5] += 0.043835616438356165;
          } else {
            result[0] += 0.26455026455026454;
            result[1] += 0.031746031746031744;
            result[2] += 0.14814814814814814;
            result[3] += 0.21164021164021163;
            result[4] += 0.07407407407407407;
            result[5] += 0.2698412698412698;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42900000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0;
            result[4] += 0.6;
            result[5] += 0;
          } else {
            result[0] += 0.625;
            result[1] += 0.375;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13333333333333333;
            result[3] += 0.03333333333333333;
            result[4] += 0;
            result[5] += 0.8333333333333334;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.21052631578947367;
            result[3] += 0.3684210526315789;
            result[4] += 0.21052631578947367;
            result[5] += 0.21052631578947367;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0.05;
            result[1] += 0.025;
            result[2] += 0.125;
            result[3] += 0.15;
            result[4] += 0.1;
            result[5] += 0.55;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.19708029197080293;
            result[3] += 0.7153284671532847;
            result[4] += 0.014598540145985401;
            result[5] += 0.072992700729927;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0.2857142857142857;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0.42857142857142855;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9166666666666666;
            result[3] += 0.05555555555555555;
            result[4] += 0;
            result[5] += 0.027777777777777776;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b70000))) ) ) {
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
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.125;
            result[4] += 0.08333333333333333;
            result[5] += 0.5416666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.38888888888888895;
            result[3] += 0.5925925925925927;
            result[4] += 0;
            result[5] += 0.01851851851851852;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8333333333333334;
            result[3] += 0.1;
            result[4] += 0;
            result[5] += 0.06666666666666667;
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
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b30000))) ) ) {
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
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0.6;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0033222591362126247;
            result[1] += 0;
            result[2] += 0.9390919158361019;
            result[3] += 0.05204872646733112;
            result[4] += 0;
            result[5] += 0.005537098560354375;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x426c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0;
            result[1] += 0.25;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.75;
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42180000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x43020000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
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
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42dc0000))) ) ) {
            result[0] += 0.01650943396226415;
            result[1] += 0.018867924528301886;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9174528301886793;
            result[5] += 0.04716981132075472;
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
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b30000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0.01488833746898263;
            result[1] += 0.009925558312655087;
            result[2] += 0;
            result[3] += 0.05334987593052109;
            result[4] += 0.031017369727047148;
            result[5] += 0.890818858560794;
          } else {
            result[0] += 0.006802721088435374;
            result[1] += 0;
            result[2] += 0.08843537414965986;
            result[3] += 0.3129251700680272;
            result[4] += 0.047619047619047616;
            result[5] += 0.54421768707483;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0.8947368421052632;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.10526315789473684;
            result[5] += 0;
          } else {
            result[0] += 0.028846153846153848;
            result[1] += 0.038461538461538464;
            result[2] += 0;
            result[3] += 0.21153846153846154;
            result[4] += 0.15384615384615385;
            result[5] += 0.5673076923076923;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0.09375;
            result[1] += 0.03125;
            result[2] += 0;
            result[3] += 0.265625;
            result[4] += 0.109375;
            result[5] += 0.5;
          } else {
            result[0] += 0.8602941176470589;
            result[1] += 0.017463235294117647;
            result[2] += 0.003676470588235294;
            result[3] += 0.03860294117647059;
            result[4] += 0.0625;
            result[5] += 0.017463235294117647;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0.03345724907063197;
            result[1] += 0.06691449814126393;
            result[2] += 0.17100371747211895;
            result[3] += 0.45724907063197023;
            result[4] += 0.01486988847583643;
            result[5] += 0.25650557620817843;
          } else {
            result[0] += 0.8333333333333334;
            result[1] += 0.00980392156862745;
            result[2] += 0.08823529411764706;
            result[3] += 0;
            result[4] += 0.06862745098039216;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a00000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16666666666666666;
            result[5] += 0.8333333333333334;
          } else {
            result[0] += 0.06666666666666667;
            result[1] += 0.06666666666666667;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8;
            result[5] += 0.06666666666666667;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0.06451612903225806;
            result[2] += 0;
            result[3] += 0.41935483870967744;
            result[4] += 0.03225806451612903;
            result[5] += 0.4838709677419355;
          } else {
            result[0] += 0;
            result[1] += 0.022727272727272728;
            result[2] += 0.13636363636363635;
            result[3] += 0;
            result[4] += 0.06818181818181818;
            result[5] += 0.7727272727272727;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05970149253731343;
            result[3] += 0.8208955223880597;
            result[4] += 0;
            result[5] += 0.11940298507462686;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.3958333333333333;
            result[4] += 0;
            result[5] += 0.3541666666666667;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.18181818181818182;
            result[3] += 0.5454545454545454;
            result[4] += 0;
            result[5] += 0.2727272727272727;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8518518518518519;
            result[3] += 0.09259259259259259;
            result[4] += 0;
            result[5] += 0.05555555555555555;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7619047619047619;
            result[3] += 0;
            result[4] += 0.047619047619047616;
            result[5] += 0.19047619047619047;
          } else {
            result[0] += 0.3333333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429e0000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.25;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.653061224489796;
            result[3] += 0.27891156462585037;
            result[4] += 0;
            result[5] += 0.06802721088435376;
          } else {
            result[0] += 0.025;
            result[1] += 0;
            result[2] += 0.9083333333333333;
            result[3] += 0.058333333333333334;
            result[4] += 0;
            result[5] += 0.008333333333333333;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6333333333333334;
            result[3] += 0.33333333333333337;
            result[4] += 0;
            result[5] += 0.03333333333333334;
          } else {
            result[0] += 0.0019157088122605363;
            result[1] += 0;
            result[2] += 0.9865900383141762;
            result[3] += 0.011494252873563218;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
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
            result[4] += 0.5;
            result[5] += 0.5;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6938775510204082;
            result[5] += 0.30612244897959184;
          } else {
            result[0] += 0;
            result[1] += 0.16666666666666666;
            result[2] += 0;
            result[3] += 0.8333333333333334;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0.5599999999999999;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.059999999999999984;
            result[4] += 0.29999999999999993;
            result[5] += 0.07999999999999999;
          } else {
            result[0] += 0.00585480093676815;
            result[1] += 0.00117096018735363;
            result[2] += 0.00234192037470726;
            result[3] += 0.03747072599531616;
            result[4] += 0.05503512880562061;
            result[5] += 0.8981264637002342;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.010869565217391304;
            result[3] += 0.2391304347826087;
            result[4] += 0;
            result[5] += 0.75;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6785714285714286;
            result[4] += 0;
            result[5] += 0.32142857142857145;
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0.10309278350515465;
            result[1] += 0.37113402061855677;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5154639175257733;
            result[5] += 0.010309278350515465;
          } else {
            result[0] += 0.8664292074799644;
            result[1] += 0.02315227070347284;
            result[2] += 0.0017809439002671415;
            result[3] += 0.020480854853072127;
            result[4] += 0.07123775601068566;
            result[5] += 0.016918967052537846;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0.026595744680851064;
            result[1] += 0;
            result[2] += 0.0797872340425532;
            result[3] += 0.3882978723404255;
            result[4] += 0.031914893617021274;
            result[5] += 0.4734042553191489;
          } else {
            result[0] += 0.31724137931034485;
            result[1] += 0.08275862068965517;
            result[2] += 0.3586206896551724;
            result[3] += 0.07586206896551724;
            result[4] += 0.12413793103448276;
            result[5] += 0.041379310344827586;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.7333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.26666666666666666;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
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
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ae0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42890000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0;
            result[4] += 0.25;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.07936507936507936;
            result[4] += 0.031746031746031744;
            result[5] += 0.8888888888888888;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0.07272727272727272;
            result[1] += 0.05454545454545454;
            result[2] += 0.14545454545454545;
            result[3] += 0.21818181818181817;
            result[4] += 0.07272727272727272;
            result[5] += 0.43636363636363634;
          } else {
            result[0] += 0.006711409395973154;
            result[1] += 0;
            result[2] += 0.20134228187919462;
            result[3] += 0.6778523489932886;
            result[4] += 0;
            result[5] += 0.11409395973154363;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42d80000))) ) ) {
            result[0] += 0.050847457627118654;
            result[1] += 0.03389830508474577;
            result[2] += 0.6779661016949153;
            result[3] += 0.10169491525423731;
            result[4] += 0.016949152542372885;
            result[5] += 0.11864406779661019;
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
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428a0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42910000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.25;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42cb0000))) ) ) {
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
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0.875;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.015290519877675842;
            result[1] += 0;
            result[2] += 0.7737003058103976;
            result[3] += 0.19877675840978595;
            result[4] += 0;
            result[5] += 0.012232415902140675;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8899082568807339;
            result[3] += 0.11009174311926606;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9805825242718447;
            result[3] += 0.019417475728155338;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0.018072289156626505;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9759036144578314;
            result[5] += 0.006024096385542169;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.42105263157894735;
            result[5] += 0.5789473684210527;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0.4852941176470589;
            result[1] += 0.029411764705882356;
            result[2] += 0;
            result[3] += 0.0735294117647059;
            result[4] += 0.3676470588235295;
            result[5] += 0.04411764705882354;
          } else {
            result[0] += 0;
            result[1] += 0.9259259259259259;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07407407407407407;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0.028169014084507043;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.676056338028169;
            result[5] += 0.29577464788732394;
          } else {
            result[0] += 0.0019212295869356388;
            result[1] += 0.005763688760806916;
            result[2] += 0;
            result[3] += 0.06532180595581172;
            result[4] += 0.024015369836695485;
            result[5] += 0.9029779058597502;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c00000))) ) ) {
            result[0] += 0.00558659217877095;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7206703910614525;
            result[4] += 0;
            result[5] += 0.2737430167597765;
          } else {
            result[0] += 0.09090909090909091;
            result[1] += 0;
            result[2] += 0.15151515151515152;
            result[3] += 0.12121212121212122;
            result[4] += 0.030303030303030304;
            result[5] += 0.6060606060606061;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8888888888888888;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1111111111111111;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b00000))) ) ) {
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
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0.19130434782608696;
            result[1] += 0.14782608695652175;
            result[2] += 0;
            result[3] += 0.004347826086956522;
            result[4] += 0.6086956521739131;
            result[5] += 0.04782608695652174;
          } else {
            result[0] += 0.8377896613190731;
            result[1] += 0.012477718360071301;
            result[2] += 0.022281639928698752;
            result[3] += 0.04723707664884135;
            result[4] += 0.04367201426024955;
            result[5] += 0.036541889483065956;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0.007751937984496124;
            result[1] += 0;
            result[2] += 0.16279069767441862;
            result[3] += 0.3449612403100775;
            result[4] += 0.12403100775193798;
            result[5] += 0.36046511627906974;
          } else {
            result[0] += 0.4622641509433963;
            result[1] += 0.04716981132075473;
            result[2] += 0.19811320754716985;
            result[3] += 0.009433962264150945;
            result[4] += 0.15094339622641512;
            result[5] += 0.13207547169811323;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.018867924528301886;
            result[3] += 0.8301886792452831;
            result[4] += 0;
            result[5] += 0.1509433962264151;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.45454545454545453;
            result[3] += 0.36363636363636365;
            result[4] += 0;
            result[5] += 0.18181818181818182;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8333333333333334;
            result[3] += 0.08333333333333333;
            result[4] += 0;
            result[5] += 0.08333333333333333;
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
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
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
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ca0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09090909090909091;
            result[3] += 0.9090909090909091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.625;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.125;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0.012987012987012988;
            result[1] += 0;
            result[2] += 0.6233766233766234;
            result[3] += 0.33766233766233766;
            result[4] += 0;
            result[5] += 0.025974025974025976;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8899082568807339;
            result[3] += 0.08256880733944955;
            result[4] += 0;
            result[5] += 0.027522935779816515;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e90000))) ) ) {
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
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.004379562043795621;
            result[1] += 0;
            result[2] += 0.9547445255474453;
            result[3] += 0.040875912408759124;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0.00411522633744856;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9917695473251029;
            result[5] += 0.00411522633744856;
          } else {
            result[0] += 0.02127659574468085;
            result[1] += 0.02127659574468085;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5319148936170213;
            result[5] += 0.425531914893617;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x427a0000))) ) ) {
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
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 0.65;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.35;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.0035252643948296123;
            result[2] += 0;
            result[3] += 0.06462984723854288;
            result[4] += 0.03172737955346651;
            result[5] += 0.900117508813161;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0.9565217391304348;
            result[1] += 0.043478260869565216;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.027491408934707903;
            result[1] += 0.024054982817869417;
            result[2] += 0.041237113402061855;
            result[3] += 0.3917525773195876;
            result[4] += 0.048109965635738834;
            result[5] += 0.46735395189003437;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42240000))) ) ) {
            result[0] += 0;
            result[1] += 0.8695652173913043;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.13043478260869565;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.043478260869565216;
            result[2] += 0;
            result[3] += 0.13043478260869565;
            result[4] += 0.8260869565217391;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42940000))) ) ) {
            result[0] += 0;
            result[1] += 0.9976415094339622;
            result[2] += 0;
            result[3] += 0.0023584905660377358;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.2;
            result[2] += 0;
            result[3] += 0.8;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0.11428571428571428;
            result[1] += 0.30857142857142855;
            result[2] += 0;
            result[3] += 0.011428571428571429;
            result[4] += 0.5314285714285715;
            result[5] += 0.03428571428571429;
          } else {
            result[0] += 0.8706739526411659;
            result[1] += 0.003642987249544627;
            result[2] += 0.006375227686703098;
            result[3] += 0.02823315118397086;
            result[4] += 0.06830601092896177;
            result[5] += 0.02276867030965392;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0.005;
            result[1] += 0.005;
            result[2] += 0.17;
            result[3] += 0.47;
            result[4] += 0.035;
            result[5] += 0.315;
          } else {
            result[0] += 0.5511811023622047;
            result[1] += 0.05511811023622047;
            result[2] += 0.33070866141732286;
            result[3] += 0;
            result[4] += 0.06299212598425197;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42740000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
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
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.25;
            result[4] += 0.5;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d60000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0380952380952381;
            result[3] += 0.7238095238095238;
            result[4] += 0;
            result[5] += 0.23809523809523808;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4761904761904762;
            result[3] += 0.4285714285714286;
            result[4] += 0;
            result[5] += 0.09523809523809525;
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
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1282051282051282;
            result[3] += 0.2564102564102564;
            result[4] += 0.15384615384615385;
            result[5] += 0.46153846153846156;
          } else {
            result[0] += 0.058823529411764705;
            result[1] += 0;
            result[2] += 0.7647058823529411;
            result[3] += 0.11764705882352941;
            result[4] += 0.029411764705882353;
            result[5] += 0.029411764705882353;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4166666666666667;
            result[3] += 0.3055555555555556;
            result[4] += 0;
            result[5] += 0.2777777777777778;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0.09090909090909091;
            result[2] += 0.2727272727272727;
            result[3] += 0.09090909090909091;
            result[4] += 0;
            result[5] += 0.5454545454545454;
          } else {
            result[0] += 0.004329004329004329;
            result[1] += 0;
            result[2] += 0.9253246753246753;
            result[3] += 0.07034632034632035;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0.013215859030837005;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.013215859030837005;
            result[4] += 0.947136563876652;
            result[5] += 0.02643171806167401;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.64;
            result[5] += 0.36;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5;
            result[4] += 0.5;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9444444444444444;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05555555555555555;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.75;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2361111111111111;
            result[5] += 0.013888888888888888;
          } else {
            result[0] += 0.0019940179461615153;
            result[1] += 0.003988035892323031;
            result[2] += 0;
            result[3] += 0.05982053838484546;
            result[4] += 0.0518444666001994;
            result[5] += 0.8823529411764706;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.046511627906976744;
            result[3] += 0.3953488372093023;
            result[4] += 0;
            result[5] += 0.5581395348837209;
          } else {
            result[0] += 0.029585798816568046;
            result[1] += 0;
            result[2] += 0.005917159763313609;
            result[3] += 0.7455621301775148;
            result[4] += 0;
            result[5] += 0.21893491124260356;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0.1;
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 0;
            result[1] += 0.9976303317535545;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002369668246445498;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.6875;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3125;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0.8461538461538461;
            result[1] += 0.03183023872679045;
            result[2] += 0.0008841732979664014;
            result[3] += 0.01768346595932803;
            result[4] += 0.09725906277630415;
            result[5] += 0.00618921308576481;
          } else {
            result[0] += 0.37037037037037035;
            result[1] += 0.006172839506172839;
            result[2] += 0.08024691358024691;
            result[3] += 0.2777777777777778;
            result[4] += 0.030864197530864196;
            result[5] += 0.2345679012345679;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.15625;
            result[3] += 0.140625;
            result[4] += 0.046875;
            result[5] += 0.65625;
          } else {
            result[0] += 0.15;
            result[1] += 0.03333333333333333;
            result[2] += 0.4625;
            result[3] += 0.20416666666666666;
            result[4] += 0.03333333333333333;
            result[5] += 0.11666666666666667;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42d70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.047619047619047616;
            result[4] += 0.047619047619047616;
            result[5] += 0.9047619047619048;
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
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0;
            result[4] += 0.3333333333333333;
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
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.20000000000000004;
            result[3] += 0.7200000000000001;
            result[4] += 0;
            result[5] += 0.08000000000000002;
          } else {
            result[0] += 0;
            result[1] += 0.05357142857142857;
            result[2] += 0.5;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.19642857142857142;
          }
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42940000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cf0000))) ) ) {
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
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.35714285714285715;
            result[3] += 0.38095238095238093;
            result[4] += 0;
            result[5] += 0.2619047619047619;
          } else {
            result[0] += 0.03278688524590164;
            result[1] += 0;
            result[2] += 0.819672131147541;
            result[3] += 0.13114754098360656;
            result[4] += 0;
            result[5] += 0.01639344262295082;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.005148005148005148;
            result[1] += 0;
            result[2] += 0.9459459459459459;
            result[3] += 0.04504504504504504;
            result[4] += 0;
            result[5] += 0.003861003861003861;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0.004807692307692309;
            result[1] += 0.004807692307692309;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9759615384615385;
            result[5] += 0.014423076923076926;
          } else {
            result[0] += 0.1;
            result[1] += 0.15;
            result[2] += 0;
            result[3] += 0.05;
            result[4] += 0.3;
            result[5] += 0.4;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0.05;
            result[1] += 0.05;
            result[2] += 0;
            result[3] += 0.05;
            result[4] += 0.6;
            result[5] += 0.25;
          } else {
            result[0] += 0.9482758620689655;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.017241379310344827;
            result[5] += 0.034482758620689655;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7333333333333333;
            result[5] += 0.26666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.004343105320304018;
            result[3] += 0.06080347448425624;
            result[4] += 0.03908794788273615;
            result[5] += 0.8957654723127035;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0.008333333333333333;
            result[1] += 0.008333333333333333;
            result[2] += 0;
            result[3] += 0.225;
            result[4] += 0.13333333333333333;
            result[5] += 0.625;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.005376344086021506;
            result[3] += 0.6827956989247311;
            result[4] += 0.010752688172043012;
            result[5] += 0.3010752688172043;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0.12371134020618557;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8762886597938144;
            result[5] += 0;
          } else {
            result[0] += 0.0625;
            result[1] += 0.78125;
            result[2] += 0.03125;
            result[3] += 0.0625;
            result[4] += 0.0625;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42640000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9117647058823529;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.08823529411764706;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0.8685567010309279;
            result[1] += 0.037800687285223365;
            result[2] += 0.007731958762886598;
            result[3] += 0.022336769759450172;
            result[4] += 0.05326460481099656;
            result[5] += 0.010309278350515464;
          } else {
            result[0] += 0.32679738562091504;
            result[1] += 0.013071895424836602;
            result[2] += 0.0457516339869281;
            result[3] += 0.24836601307189543;
            result[4] += 0.1830065359477124;
            result[5] += 0.1830065359477124;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0.028169014084507043;
            result[2] += 0.1267605633802817;
            result[3] += 0.33098591549295775;
            result[4] += 0;
            result[5] += 0.5140845070422535;
          } else {
            result[0] += 0.18471337579617836;
            result[1] += 0;
            result[2] += 0.5732484076433122;
            result[3] += 0.12738853503184716;
            result[4] += 0.0445859872611465;
            result[5] += 0.07006369426751594;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x429e0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x426c0000))) ) ) {
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
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0.05;
            result[2] += 0;
            result[3] += 0.05;
            result[4] += 0.15;
            result[5] += 0.75;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.140625;
            result[3] += 0.6875;
            result[4] += 0;
            result[5] += 0.171875;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e30000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2608695652173913;
            result[3] += 0.7391304347826086;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5964912280701754;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.07017543859649122;
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
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42890000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42900000))) ) ) {
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
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0.8571428571428571;
          } else {
            result[0] += 0.06521739130434782;
            result[1] += 0;
            result[2] += 0.6521739130434783;
            result[3] += 0.043478260869565216;
            result[4] += 0.10869565217391304;
            result[5] += 0.13043478260869565;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8756218905472637;
            result[3] += 0.11442786069651742;
            result[4] += 0;
            result[5] += 0.009950248756218905;
          } else {
            result[0] += 0.001644736842105263;
            result[1] += 0;
            result[2] += 0.9654605263157895;
            result[3] += 0.03289473684210526;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0.0041841004184100415;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9874476987447699;
            result[5] += 0.008368200836820083;
          } else {
            result[0] += 0.1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.45;
            result[5] += 0.45;
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
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.0030303030303030303;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.019696969696969695;
            result[4] += 0.013636363636363636;
            result[5] += 0.9636363636363636;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42620000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.01642710472279261;
            result[1] += 0.06570841889117043;
            result[2] += 0.006160164271047228;
            result[3] += 0.324435318275154;
            result[4] += 0.07597535934291581;
            result[5] += 0.5112936344969199;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ae0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x421e0000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.18181818181818182;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8181818181818182;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
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
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42910000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0.24107142857142858;
            result[1] += 0.008928571428571428;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6696428571428571;
            result[5] += 0.08035714285714286;
          } else {
            result[0] += 0;
            result[1] += 0.022058823529411766;
            result[2] += 0.15441176470588236;
            result[3] += 0.25735294117647056;
            result[4] += 0.07352941176470588;
            result[5] += 0.49264705882352944;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0.17721518987341772;
            result[1] += 0.17721518987341772;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6455696202531646;
            result[5] += 0;
          } else {
            result[0] += 0.7843450479233228;
            result[1] += 0.017571884984025562;
            result[2] += 0.047124600638977644;
            result[3] += 0.047923322683706075;
            result[4] += 0.059904153354632596;
            result[5] += 0.04313099041533547;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42890000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42860000))) ) ) {
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
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0196078431372549;
            result[3] += 0.11764705882352941;
            result[4] += 0.058823529411764705;
            result[5] += 0.803921568627451;
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
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.058823529411764705;
            result[3] += 0.058823529411764705;
            result[4] += 0.11764705882352941;
            result[5] += 0.7647058823529411;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0.04477611940298507;
            result[2] += 0.014925373134328358;
            result[3] += 0.7014925373134329;
            result[4] += 0;
            result[5] += 0.23880597014925373;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4090909090909091;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.09090909090909091;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42870000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.06666666666666667;
            result[1] += 0;
            result[2] += 0.06666666666666667;
            result[3] += 0.4666666666666667;
            result[4] += 0.13333333333333333;
            result[5] += 0.26666666666666666;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.5263157894736842;
            result[1] += 0;
            result[2] += 0.47368421052631576;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4576271186440678;
            result[3] += 0.5254237288135594;
            result[4] += 0;
            result[5] += 0.01694915254237288;
          } else {
            result[0] += 0.005917159763313609;
            result[1] += 0;
            result[2] += 0.7396449704142012;
            result[3] += 0.20710059171597633;
            result[4] += 0.023668639053254437;
            result[5] += 0.023668639053254437;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0.16666666666666669;
            result[1] += 0.6666666666666667;
            result[2] += 0;
            result[3] += 0.16666666666666669;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0038314176245210726;
            result[1] += 0;
            result[2] += 0.9374201787994891;
            result[3] += 0.05363984674329502;
            result[4] += 0;
            result[5] += 0.005108556832694764;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42080000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.012448132780082987;
            result[1] += 0.02074688796680498;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9336099585062241;
            result[5] += 0.03319502074688797;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0.06521739130434782;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.30434782608695654;
            result[5] += 0.6304347826086957;
          } else {
            result[0] += 0.8823529411764706;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.11029411764705882;
            result[5] += 0.007352941176470588;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0.08695652173913043;
            result[2] += 0;
            result[3] += 0.021739130434782608;
            result[4] += 0.6086956521739131;
            result[5] += 0.2826086956521739;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.05819477434679335;
            result[4] += 0.04156769596199525;
            result[5] += 0.9002375296912114;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0.014285714285714285;
            result[2] += 0.007142857142857143;
            result[3] += 0.16428571428571428;
            result[4] += 0.10714285714285714;
            result[5] += 0.7071428571428572;
          } else {
            result[0] += 0.028409090909090908;
            result[1] += 0.036931818181818184;
            result[2] += 0.019886363636363636;
            result[3] += 0.5965909090909091;
            result[4] += 0.05965909090909091;
            result[5] += 0.2585227272727273;
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0.027522935779816515;
            result[1] += 0.44036697247706424;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5045871559633027;
            result[5] += 0.027522935779816515;
          } else {
            result[0] += 0.8143712574850299;
            result[1] += 0.0213857998289136;
            result[2] += 0.01710863986313088;
            result[3] += 0.04020530367835757;
            result[4] += 0.05474764756201882;
            result[5] += 0.05218135158254919;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0.019801980198019802;
            result[1] += 0.0297029702970297;
            result[2] += 0.12871287128712872;
            result[3] += 0.2079207920792079;
            result[4] += 0.16831683168316833;
            result[5] += 0.44554455445544555;
          } else {
            result[0] += 0.2684563758389262;
            result[1] += 0;
            result[2] += 0.6442953020134228;
            result[3] += 0.06711409395973154;
            result[4] += 0.013422818791946308;
            result[5] += 0.006711409395973154;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.004830917874396135;
            result[1] += 0.9879227053140096;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.004830917874396135;
            result[5] += 0.0024154589371980675;
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
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9285714285714286;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.07142857142857142;
          } else {
            result[0] += 0;
            result[1] += 0.09090909090909091;
            result[2] += 0.09090909090909091;
            result[3] += 0.15151515151515152;
            result[4] += 0.06060606060606061;
            result[5] += 0.6060606060606061;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2247191011235955;
            result[3] += 0.6853932584269663;
            result[4] += 0;
            result[5] += 0.0898876404494382;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6923076923076923;
            result[3] += 0.07692307692307693;
            result[4] += 0;
            result[5] += 0.23076923076923078;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0;
            result[1] += 0.023255813953488372;
            result[2] += 0.627906976744186;
            result[3] += 0.3023255813953488;
            result[4] += 0;
            result[5] += 0.046511627906976744;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42860000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9444444444444444;
            result[3] += 0.027777777777777776;
            result[4] += 0;
            result[5] += 0.027777777777777776;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07692307692307693;
            result[5] += 0.9230769230769231;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 0.2;
            result[2] += 0.06666666666666667;
            result[3] += 0.06666666666666667;
            result[4] += 0.5333333333333333;
            result[5] += 0.13333333333333333;
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
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42eb0000))) ) ) {
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
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8353909465020576;
            result[3] += 0.1522633744855967;
            result[4] += 0;
            result[5] += 0.012345679012345678;
          } else {
            result[0] += 0.007874015748031496;
            result[1] += 0;
            result[2] += 0.9724409448818898;
            result[3] += 0.01968503937007874;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42240000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42240000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
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
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9712918660287081;
            result[5] += 0.028708133971291867;
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
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.875;
            result[5] += 0.125;
          } else {
            result[0] += 0.015186915887850467;
            result[1] += 0;
            result[2] += 0.0011682242990654205;
            result[3] += 0.053738317757009345;
            result[4] += 0.03387850467289719;
            result[5] += 0.8960280373831776;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x429c0000))) ) ) {
            result[0] += 0.22077922077922077;
            result[1] += 0.11688311688311688;
            result[2] += 0.025974025974025976;
            result[3] += 0.012987012987012988;
            result[4] += 0.36363636363636365;
            result[5] += 0.2597402597402597;
          } else {
            result[0] += 0.05454545454545454;
            result[1] += 0;
            result[2] += 0.022727272727272728;
            result[3] += 0.5772727272727273;
            result[4] += 0.03636363636363636;
            result[5] += 0.3090909090909091;
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0.5418994413407822;
            result[1] += 0.061452513966480445;
            result[2] += 0;
            result[3] += 0.0223463687150838;
            result[4] += 0.33519553072625696;
            result[5] += 0.03910614525139665;
          } else {
            result[0] += 0.008771929824561403;
            result[1] += 0.013157894736842105;
            result[2] += 0.013157894736842105;
            result[3] += 0.30701754385964913;
            result[4] += 0.06578947368421052;
            result[5] += 0.5921052631578947;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0.04166666666666667;
            result[1] += 0.576388888888889;
            result[2] += 0.01388888888888889;
            result[3] += 0.020833333333333336;
            result[4] += 0.34722222222222227;
            result[5] += 0;
          } else {
            result[0] += 0.8156378600823045;
            result[1] += 0.0024691358024691358;
            result[2] += 0.05432098765432099;
            result[3] += 0.04691358024691358;
            result[4] += 0.053497942386831275;
            result[5] += 0.027160493827160494;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0.6666666666666666;
            result[2] += 0;
            result[3] += 0;
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
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 0;
            result[1] += 0.3333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
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
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0.008849557522123894;
            result[2] += 0.04424778761061947;
            result[3] += 0.5575221238938053;
            result[4] += 0.008849557522123894;
            result[5] += 0.3805309734513274;
          } else {
            result[0] += 0.06451612903225806;
            result[1] += 0;
            result[2] += 0.45161290322580644;
            result[3] += 0.41935483870967744;
            result[4] += 0;
            result[5] += 0.06451612903225806;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0.07692307692307693;
            result[1] += 0.6923076923076923;
            result[2] += 0;
            result[3] += 0.15384615384615385;
            result[4] += 0.07692307692307693;
            result[5] += 0;
          } else {
            result[0] += 0.5384615384615384;
            result[1] += 0;
            result[2] += 0.38461538461538464;
            result[3] += 0;
            result[4] += 0.07692307692307693;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ee0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42df0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9655172413793104;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.034482758620689655;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42da0000))) ) ) {
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
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1724137931034483;
            result[3] += 0.7931034482758621;
            result[4] += 0;
            result[5] += 0.034482758620689655;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.48717948717948717;
            result[3] += 0.5128205128205128;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.819672131147541;
            result[3] += 0.18032786885245902;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42e00000))) ) ) {
            result[0] += 0.14285714285714285;
            result[1] += 0;
            result[2] += 0.8571428571428571;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.9333333333333333;
            result[1] += 0;
            result[2] += 0.06666666666666667;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8325581395348838;
            result[3] += 0.15813953488372096;
            result[4] += 0;
            result[5] += 0.00930232558139535;
          } else {
            result[0] += 0.0045045045045045045;
            result[1] += 0;
            result[2] += 0.9774774774774775;
            result[3] += 0.016516516516516516;
            result[4] += 0;
            result[5] += 0.0015015015015015015;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42400000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.017241379310344827;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8275862068965517;
            result[5] += 0.15517241379310345;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426e0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0.06349206349206349;
            result[2] += 0;
            result[3] += 0.047619047619047616;
            result[4] += 0.7619047619047619;
            result[5] += 0.12698412698412698;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.003003003003003003;
            result[3] += 0.02702702702702703;
            result[4] += 0.009009009009009009;
            result[5] += 0.960960960960961;
          } else {
            result[0] += 0.061224489795918366;
            result[1] += 0;
            result[2] += 0.007653061224489796;
            result[3] += 0.2576530612244898;
            result[4] += 0.06887755102040816;
            result[5] += 0.6045918367346939;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0.05263157894736842;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9473684210526315;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.6666666666666666;
            result[2] += 0;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0.1875;
            result[1] += 0.7083333333333334;
            result[2] += 0;
            result[3] += 0.041666666666666664;
            result[4] += 0.0625;
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
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0.02127659574468085;
            result[1] += 0.1773049645390071;
            result[2] += 0;
            result[3] += 0.0425531914893617;
            result[4] += 0.6453900709219859;
            result[5] += 0.11347517730496454;
          } else {
            result[0] += 0.8251968503937008;
            result[1] += 0.011811023622047244;
            result[2] += 0.004724409448818898;
            result[3] += 0.04173228346456693;
            result[4] += 0.06141732283464567;
            result[5] += 0.05511811023622047;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0.023026315789473683;
            result[1] += 0.03618421052631579;
            result[2] += 0.039473684210526314;
            result[3] += 0.4276315789473684;
            result[4] += 0.046052631578947366;
            result[5] += 0.4276315789473684;
          } else {
            result[0] += 0.32340425531914896;
            result[1] += 0;
            result[2] += 0.5063829787234042;
            result[3] += 0.11914893617021277;
            result[4] += 0.01276595744680851;
            result[5] += 0.03829787234042553;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c40000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a20000))) ) ) {
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
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
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
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4666666666666667;
            result[3] += 0;
            result[4] += 0.26666666666666666;
            result[5] += 0.26666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.22727272727272727;
            result[3] += 0.6363636363636364;
            result[4] += 0;
            result[5] += 0.13636363636363635;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8571428571428571;
            result[3] += 0.08571428571428572;
            result[4] += 0;
            result[5] += 0.05714285714285714;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cc0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cf0000))) ) ) {
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
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0.003968253968253968;
            result[1] += 0;
            result[2] += 0.8531746031746031;
            result[3] += 0.12301587301587301;
            result[4] += 0;
            result[5] += 0.01984126984126984;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9130434782608696;
            result[3] += 0.07826086956521741;
            result[4] += 0;
            result[5] += 0.008695652173913045;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9851576994434137;
            result[3] += 0.014842300556586271;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9894179894179894;
            result[5] += 0.010582010582010581;
          } else {
            result[0] += 0.03389830508474576;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7457627118644068;
            result[5] += 0.22033898305084745;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0;
            result[1] += 0.4;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9230769230769231;
            result[2] += 0;
            result[3] += 0.07692307692307693;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0.0625;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9375;
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
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0.0010626992561105207;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04675876726886291;
            result[4] += 0.04357066950053135;
            result[5] += 0.9086078639744952;
          } else {
            result[0] += 0.021220159151193633;
            result[1] += 0.005305039787798408;
            result[2] += 0.007957559681697613;
            result[3] += 0.48010610079575594;
            result[4] += 0.029177718832891247;
            result[5] += 0.4562334217506631;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42420000))) ) ) {
            result[0] += 0;
            result[1] += 0.8333333333333334;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16666666666666666;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.04347826086956522;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9130434782608696;
            result[5] += 0.04347826086956522;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x425a0000))) ) ) {
            result[0] += 0;
            result[1] += 0.9975669099756691;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0024330900243309003;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.7916666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.20833333333333334;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42df0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0.7633228840125392;
            result[1] += 0.04075235109717868;
            result[2] += 0;
            result[3] += 0.02821316614420063;
            result[4] += 0.13479623824451412;
            result[5] += 0.032915360501567396;
          } else {
            result[0] += 0.0738255033557047;
            result[1] += 0.08277404921700224;
            result[2] += 0.2930648769574944;
            result[3] += 0.2348993288590604;
            result[4] += 0.12527964205816555;
            result[5] += 0.19015659955257272;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0.9788867562380038;
            result[1] += 0.003838771593090211;
            result[2] += 0.0019193857965451055;
            result[3] += 0;
            result[4] += 0.015355086372360844;
            result[5] += 0;
          } else {
            result[0] += 0.4358974358974359;
            result[1] += 0;
            result[2] += 0.4358974358974359;
            result[3] += 0.02564102564102564;
            result[4] += 0.05128205128205128;
            result[5] += 0.05128205128205128;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42b90000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2857142857142857;
            result[4] += 0.5714285714285714;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.04081632653061224;
            result[3] += 0.061224489795918366;
            result[4] += 0.04081632653061224;
            result[5] += 0.8571428571428571;
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
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08;
            result[3] += 0.92;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0.4;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.4;
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
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426c0000))) ) ) {
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
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0.8571428571428571;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.07692307692307693;
            result[1] += 0.15384615384615385;
            result[2] += 0.5384615384615384;
            result[3] += 0.23076923076923078;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6590909090909092;
            result[3] += 0.18181818181818185;
            result[4] += 0;
            result[5] += 0.15909090909090912;
          } else {
            result[0] += 0.8181818181818182;
            result[1] += 0.045454545454545456;
            result[2] += 0.09090909090909091;
            result[3] += 0.045454545454545456;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8108108108108109;
            result[3] += 0.15765765765765766;
            result[4] += 0;
            result[5] += 0.03153153153153153;
          } else {
            result[0] += 0.004702194357366771;
            result[1] += 0;
            result[2] += 0.9733542319749217;
            result[3] += 0.0219435736677116;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x422e0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42bd0000))) ) ) {
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
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0.01;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.975;
            result[5] += 0.015;
          } else {
            result[0] += 0;
            result[1] += 0.07692307692307693;
            result[2] += 0;
            result[3] += 0.15384615384615385;
            result[4] += 0.38461538461538464;
            result[5] += 0.38461538461538464;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42420000))) ) ) {
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
            result[4] += 0.8448275862068966;
            result[5] += 0.15517241379310345;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0.0013175230566534915;
            result[1] += 0.0013175230566534915;
            result[2] += 0;
            result[3] += 0.048748353096179184;
            result[4] += 0.034255599472990776;
            result[5] += 0.9143610013175231;
          } else {
            result[0] += 0.08737864077669903;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.28802588996763756;
            result[4] += 0.05825242718446602;
            result[5] += 0.5663430420711975;
          }
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0.11038961038961038;
            result[1] += 0.11688311688311688;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7662337662337663;
            result[5] += 0.006493506493506494;
          } else {
            result[0] += 0;
            result[1] += 0.9210526315789473;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07894736842105263;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0.9067495559502664;
            result[1] += 0.007104795737122558;
            result[2] += 0.004440497335701598;
            result[3] += 0.014209591474245116;
            result[4] += 0.05150976909413854;
            result[5] += 0.015985790408525755;
          } else {
            result[0] += 0.16020671834625322;
            result[1] += 0.007751937984496124;
            result[2] += 0.16279069767441862;
            result[3] += 0.268733850129199;
            result[4] += 0.09043927648578812;
            result[5] += 0.31007751937984496;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0.3;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.6;
            result[2] += 0;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0.005420054200542005;
            result[1] += 0.991869918699187;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0027100271002710027;
            result[5] += 0;
          } else {
            result[0] += 0.6666666666666666;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
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
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 0.33333333333333337;
            result[2] += 0.33333333333333337;
            result[3] += 0.11111111111111112;
            result[4] += 0.22222222222222224;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.017857142857142856;
            result[2] += 0.05357142857142857;
            result[3] += 0.07142857142857142;
            result[4] += 0.017857142857142856;
            result[5] += 0.8392857142857143;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42aa0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16129032258064516;
            result[3] += 0.7016129032258065;
            result[4] += 0;
            result[5] += 0.13709677419354838;
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
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42700000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.24;
            result[3] += 0.64;
            result[4] += 0.04;
            result[5] += 0.08;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0.08333333333333333;
            result[1] += 0.03333333333333333;
            result[2] += 0.45;
            result[3] += 0.31666666666666665;
            result[4] += 0.016666666666666666;
            result[5] += 0.1;
          } else {
            result[0] += 0.10752688172043011;
            result[1] += 0.010752688172043012;
            result[2] += 0.8279569892473119;
            result[3] += 0.03225806451612903;
            result[4] += 0;
            result[5] += 0.021505376344086023;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.875;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42900000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.004479283314669654;
            result[1] += 0;
            result[2] += 0.9249720044792834;
            result[3] += 0.05599104143337067;
            result[4] += 0;
            result[5] += 0.014557670772676374;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
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
            result[4] += 0.8888888888888888;
            result[5] += 0.1111111111111111;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6896551724137931;
            result[5] += 0.3103448275862069;
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
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.055872291904218926;
            result[4] += 0.046750285062713795;
            result[5] += 0.8973774230330672;
          } else {
            result[0] += 0.21518987341772153;
            result[1] += 0.11075949367088607;
            result[2] += 0.012658227848101266;
            result[3] += 0.12025316455696203;
            result[4] += 0.12974683544303797;
            result[5] += 0.41139240506329117;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0.004310344827586207;
            result[2] += 0.02586206896551724;
            result[3] += 0.603448275862069;
            result[4] += 0.034482758620689655;
            result[5] += 0.33189655172413796;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8888888888888888;
            result[3] += 0.1111111111111111;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42940000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.16666666666666666;
            result[2] += 0;
            result[3] += 0.8333333333333334;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 0.23076923076923078;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7692307692307693;
            result[5] += 0;
          } else {
            result[0] += 0.00980392156862745;
            result[1] += 0.9852941176470589;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.004901960784313725;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0.10714285714285714;
            result[1] += 0.2857142857142857;
            result[2] += 0;
            result[3] += 0.06547619047619048;
            result[4] += 0.4880952380952381;
            result[5] += 0.05357142857142857;
          } else {
            result[0] += 0.8702559576345984;
            result[1] += 0.00353045013239188;
            result[2] += 0.00353045013239188;
            result[3] += 0.02559576345984113;
            result[4] += 0.05383936451897617;
            result[5] += 0.04324801412180053;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0.031496062992125984;
            result[1] += 0.015748031496062992;
            result[2] += 0.2677165354330709;
            result[3] += 0.39763779527559057;
            result[4] += 0.03543307086614173;
            result[5] += 0.25196850393700787;
          } else {
            result[0] += 0.75;
            result[1] += 0.05555555555555555;
            result[2] += 0.08333333333333333;
            result[3] += 0;
            result[4] += 0.1111111111111111;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ca0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a40000))) ) ) {
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
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.2;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.045454545454545456;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.9545454545454546;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.03125;
            result[3] += 0.90625;
            result[4] += 0;
            result[5] += 0.0625;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.36363636363636365;
            result[4] += 0;
            result[5] += 0.6363636363636364;
          } else {
            result[0] += 0;
            result[1] += 0.09090909090909091;
            result[2] += 0.5454545454545454;
            result[3] += 0.18181818181818182;
            result[4] += 0.09090909090909091;
            result[5] += 0.09090909090909091;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.08333333333333333;
            result[4] += 0;
            result[5] += 0.9166666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.25;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429e0000))) ) ) {
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
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.24;
            result[3] += 0.32;
            result[4] += 0;
            result[5] += 0.44;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9090909090909091;
            result[3] += 0.09090909090909091;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0.003937007874015748;
            result[1] += 0;
            result[2] += 0.8110236220472441;
            result[3] += 0.17716535433070865;
            result[4] += 0;
            result[5] += 0.007874015748031496;
          } else {
            result[0] += 0.005822416302765648;
            result[1] += 0.001455604075691412;
            result[2] += 0.9548762736535662;
            result[3] += 0.033478893740902474;
            result[4] += 0;
            result[5] += 0.004366812227074236;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_2/test_data.csv", "r");
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
