
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
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42420000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0045871559633027525;
            result[1] += 0.0045871559633027525;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9724770642201835;
            result[5] += 0.01834862385321101;
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
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42660000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x426c0000))) ) ) {
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
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0975609756097561;
            result[4] += 0.6341463414634146;
            result[5] += 0.2682926829268293;
          } else {
            result[0] += 0.0063025210084033615;
            result[1] += 0.01680672268907563;
            result[2] += 0;
            result[3] += 0.06827731092436974;
            result[4] += 0.032563025210084036;
            result[5] += 0.8760504201680672;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.44666666666666666;
            result[4] += 0;
            result[5] += 0.5533333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.868421052631579;
            result[4] += 0;
            result[5] += 0.13157894736842105;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0.8571428571428571;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.03125;
            result[2] += 0.5625;
            result[3] += 0.1875;
            result[4] += 0.0625;
            result[5] += 0.15625;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42300000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.875;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.125;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0.18421052631578946;
            result[1] += 0.006578947368421052;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7763157894736842;
            result[5] += 0.03289473684210526;
          } else {
            result[0] += 0.2303370786516854;
            result[1] += 0;
            result[2] += 0.03932584269662921;
            result[3] += 0.20224719101123595;
            result[4] += 0.12359550561797752;
            result[5] += 0.4044943820224719;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0.07692307692307694;
            result[1] += 0.5054945054945056;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3736263736263737;
            result[5] += 0.043956043956043966;
          } else {
            result[0] += 0.8284072249589489;
            result[1] += 0.014778325123152705;
            result[2] += 0.02873563218390804;
            result[3] += 0.050903119868637096;
            result[4] += 0.04269293924466338;
            result[5] += 0.03448275862068965;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0.09090909090909091;
            result[2] += 0;
            result[3] += 0.045454545454545456;
            result[4] += 0.13636363636363635;
            result[5] += 0.7272727272727273;
          } else {
            result[0] += 0;
            result[1] += 0.017857142857142856;
            result[2] += 0.16964285714285715;
            result[3] += 0.6607142857142857;
            result[4] += 0.026785714285714284;
            result[5] += 0.125;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5641025641025642;
            result[3] += 0.33333333333333337;
            result[4] += 0;
            result[5] += 0.10256410256410257;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.967741935483871;
            result[3] += 0.03225806451612903;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0.2222222222222222;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8571428571428571;
            result[4] += 0;
            result[5] += 0.14285714285714285;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0.6315789473684211;
            result[1] += 0.2105263157894737;
            result[2] += 0;
            result[3] += 0.052631578947368425;
            result[4] += 0.10526315789473685;
            result[5] += 0;
          } else {
            result[0] += 0.009523809523809525;
            result[1] += 0.0021164021164021165;
            result[2] += 0.9185185185185185;
            result[3] += 0.05396825396825397;
            result[4] += 0;
            result[5] += 0.015873015873015872;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bd0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.11764705882352941;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7058823529411765;
            result[5] += 0.17647058823529413;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
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
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5454545454545454;
            result[5] += 0.45454545454545453;
          } else {
            result[0] += 0.9666666666666667;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.03333333333333333;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.020833333333333332;
            result[4] += 0.027777777777777776;
            result[5] += 0.9513888888888888;
          } else {
            result[0] += 0.01444043321299639;
            result[1] += 0.007220216606498195;
            result[2] += 0.007220216606498195;
            result[3] += 0.16606498194945848;
            result[4] += 0.18772563176895307;
            result[5] += 0.6173285198555957;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42d50000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0.25;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.75;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9979550102249489;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002044989775051125;
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
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0.012048192771084338;
            result[1] += 0.37349397590361444;
            result[2] += 0.024096385542168676;
            result[3] += 0.13253012048192772;
            result[4] += 0.10843373493975904;
            result[5] += 0.3493975903614458;
          } else {
            result[0] += 0.8196443691786621;
            result[1] += 0.02540220152413209;
            result[2] += 0.000846740050804403;
            result[3] += 0.01693480101608806;
            result[4] += 0.12108382726502964;
            result[5] += 0.016088060965283656;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0.014962593516209476;
            result[1] += 0.0024937655860349127;
            result[2] += 0.059850374064837904;
            result[3] += 0.5361596009975063;
            result[4] += 0.04239401496259352;
            result[5] += 0.34413965087281795;
          } else {
            result[0] += 0.32941176470588235;
            result[1] += 0;
            result[2] += 0.5254901960784314;
            result[3] += 0.09803921568627451;
            result[4] += 0;
            result[5] += 0.047058823529411764;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0.07142857142857142;
            result[2] += 0;
            result[3] += 0.35714285714285715;
            result[4] += 0.14285714285714285;
            result[5] += 0.42857142857142855;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.03571428571428571;
            result[5] += 0.9642857142857143;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c20000))) ) ) {
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
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8275862068965517;
            result[4] += 0;
            result[5] += 0.1724137931034483;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666667;
            result[3] += 0.16666666666666669;
            result[4] += 0;
            result[5] += 0.16666666666666669;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.03125;
            result[1] += 0;
            result[2] += 0.5729166666666666;
            result[3] += 0.23958333333333334;
            result[4] += 0;
            result[5] += 0.15625;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42df0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0.04651162790697675;
            result[1] += 0;
            result[2] += 0.5116279069767443;
            result[3] += 0.39534883720930236;
            result[4] += 0;
            result[5] += 0.04651162790697675;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8666666666666667;
            result[3] += 0.11666666666666667;
            result[4] += 0.005555555555555556;
            result[5] += 0.011111111111111112;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.736842105263158;
            result[3] += 0.2280701754385965;
            result[4] += 0;
            result[5] += 0.03508771929824562;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0018796992481203006;
            result[1] += 0;
            result[2] += 0.9793233082706767;
            result[3] += 0.018796992481203006;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.012345679012345678;
            result[3] += 0;
            result[4] += 0.9259259259259259;
            result[5] += 0.06172839506172839;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0;
            result[1] += 0.3;
            result[2] += 0;
            result[3] += 0.1;
            result[4] += 0.6;
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
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0.14285714285714285;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.14285714285714285;
            result[4] += 0.6428571428571429;
            result[5] += 0.07142857142857142;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.027742749054224466;
            result[4] += 0.015132408575031526;
            result[5] += 0.957124842370744;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0.4375;
            result[1] += 0.026785714285714284;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4107142857142857;
            result[5] += 0.125;
          } else {
            result[0] += 0.030120481927710843;
            result[1] += 0.012048192771084338;
            result[2] += 0.010040160642570281;
            result[3] += 0.43775100401606426;
            result[4] += 0.02610441767068273;
            result[5] += 0.4839357429718876;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0.0410958904109589;
            result[1] += 0.0136986301369863;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9452054794520548;
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
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0.125;
            result[1] += 0.375;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9902912621359223;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.009708737864077669;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0.2831858407079646;
            result[1] += 0.3893805309734513;
            result[2] += 0;
            result[3] += 0.008849557522123894;
            result[4] += 0.3008849557522124;
            result[5] += 0.017699115044247787;
          } else {
            result[0] += 0.924089068825911;
            result[1] += 0.007085020242914981;
            result[2] += 0.002024291497975709;
            result[3] += 0.014170040485829961;
            result[4] += 0.05060728744939272;
            result[5] += 0.002024291497975709;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0.014925373134328358;
            result[1] += 0.03482587064676617;
            result[2] += 0.05472636815920398;
            result[3] += 0.4925373134328358;
            result[4] += 0.07960199004975124;
            result[5] += 0.32338308457711445;
          } else {
            result[0] += 0.29411764705882354;
            result[1] += 0;
            result[2] += 0.5294117647058824;
            result[3] += 0.09502262443438914;
            result[4] += 0.01809954751131222;
            result[5] += 0.06334841628959276;
          }
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42660000))) ) ) {
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
            result[3] += 0.13793103448275862;
            result[4] += 0.034482758620689655;
            result[5] += 0.8275862068965517;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13333333333333333;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0.4666666666666667;
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
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42aa0000))) ) ) {
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
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42e00000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2571428571428571;
            result[3] += 0.34285714285714286;
            result[4] += 0;
            result[5] += 0.4;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8010752688172043;
            result[3] += 0.1774193548387097;
            result[4] += 0;
            result[5] += 0.021505376344086023;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42900000))) ) ) {
            result[0] += 0.3333333333333333;
            result[1] += 0.6666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.014925373134328354;
            result[1] += 0;
            result[2] += 0.9430122116689279;
            result[3] += 0.03799185888738127;
            result[4] += 0;
            result[5] += 0.004070556309362278;
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
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cc0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42460000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.004807692307692308;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9663461538461539;
            result[5] += 0.028846153846153848;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.041666666666666664;
            result[4] += 0.4583333333333333;
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
      } else {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42720000))) ) ) {
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
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0.022727272727272728;
            result[1] += 0.045454545454545456;
            result[2] += 0;
            result[3] += 0.045454545454545456;
            result[4] += 0.4772727272727273;
            result[5] += 0.4090909090909091;
          } else {
            result[0] += 0.0012062726176115801;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.027744270205066344;
            result[4] += 0.03739445114595899;
            result[5] += 0.9336550060313631;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.025;
            result[2] += 0.004166666666666667;
            result[3] += 0.24166666666666667;
            result[4] += 0.04583333333333333;
            result[5] += 0.6833333333333333;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.13333333333333333;
            result[4] += 0;
            result[5] += 0.8666666666666667;
          } else {
            result[0] += 0.006802721088435374;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8095238095238095;
            result[4] += 0;
            result[5] += 0.1836734693877551;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b30000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42460000))) ) ) {
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42580000))) ) ) {
            result[0] += 0.25;
            result[1] += 0.42857142857142855;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.32142857142857145;
            result[5] += 0;
          } else {
            result[0] += 0.04716981132075472;
            result[1] += 0.0660377358490566;
            result[2] += 0.02830188679245283;
            result[3] += 0;
            result[4] += 0.839622641509434;
            result[5] += 0.018867924528301886;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0.871868978805395;
            result[1] += 0.007707129094412331;
            result[2] += 0;
            result[3] += 0.029865125240847785;
            result[4] += 0.07225433526011561;
            result[5] += 0.018304431599229287;
          } else {
            result[0] += 0.1774891774891775;
            result[1] += 0.021645021645021644;
            result[2] += 0.19913419913419914;
            result[3] += 0.23376623376623376;
            result[4] += 0.12121212121212122;
            result[5] += 0.24675324675324675;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.15675675675675677;
            result[3] += 0.3567567567567568;
            result[4] += 0.021621621621621623;
            result[5] += 0.4648648648648649;
          } else {
            result[0] += 0.014285714285714285;
            result[1] += 0.007142857142857143;
            result[2] += 0.6;
            result[3] += 0.3142857142857143;
            result[4] += 0.007142857142857143;
            result[5] += 0.05714285714285714;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0.06400000000000002;
            result[1] += 0.04000000000000001;
            result[2] += 0.5840000000000001;
            result[3] += 0.19200000000000003;
            result[4] += 0.016000000000000004;
            result[5] += 0.10400000000000001;
          } else {
            result[0] += 0.04878048780487805;
            result[1] += 0.0011086474501108647;
            result[2] += 0.9002217294900222;
            result[3] += 0.04767184035476718;
            result[4] += 0.0011086474501108647;
            result[5] += 0.0011086474501108647;
          }
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429a0000))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d30000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42420000))) ) ) {
            result[0] += 0.5714285714285714;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.42857142857142855;
            result[5] += 0;
          } else {
            result[0] += 0.004830917874396135;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9710144927536232;
            result[5] += 0.024154589371980676;
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
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42e00000))) ) ) {
            result[0] += 0.15384615384615385;
            result[1] += 0.02564102564102564;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.717948717948718;
            result[5] += 0.10256410256410256;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.14285714285714285;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.42857142857142855;
            result[5] += 0.42857142857142855;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42720000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5161290322580645;
            result[5] += 0.4838709677419355;
          } else {
            result[0] += 0;
            result[1] += 0.09090909090909091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9090909090909091;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.09090909090909091;
            result[4] += 0.8181818181818182;
            result[5] += 0.09090909090909091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0205761316872428;
            result[4] += 0.010973936899862825;
            result[5] += 0.9684499314128944;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0.021739130434782608;
            result[1] += 0.06521739130434782;
            result[2] += 0;
            result[3] += 0.15217391304347827;
            result[4] += 0.5869565217391305;
            result[5] += 0.17391304347826086;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1811320754716981;
            result[4] += 0.09811320754716982;
            result[5] += 0.720754716981132;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x429c0000))) ) ) {
            result[0] += 0.09090909090909091;
            result[1] += 0.015151515151515152;
            result[2] += 0.06060606060606061;
            result[3] += 0.045454545454545456;
            result[4] += 0.3787878787878788;
            result[5] += 0.4090909090909091;
          } else {
            result[0] += 0.02072538860103627;
            result[1] += 0.0025906735751295338;
            result[2] += 0.09067357512953368;
            result[3] += 0.5751295336787565;
            result[4] += 0.007772020725388601;
            result[5] += 0.30310880829015546;
          }
        }
      }
    }
  } else {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42560000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428a0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ca0000))) ) ) {
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
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.6666666666666666;
            result[2] += 0;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429b0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42d00000))) ) ) {
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
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9696969696969697;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.030303030303030304;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d40000))) ) ) {
            result[0] += 0.13669064748201443;
            result[1] += 0.1654676258992806;
            result[2] += 0.014388489208633096;
            result[3] += 0.06474820143884893;
            result[4] += 0.5971223021582734;
            result[5] += 0.021582733812949645;
          } else {
            result[0] += 0.03125;
            result[1] += 0.96875;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0.9195519348268839;
            result[1] += 0.014256619144602852;
            result[2] += 0.01120162932790224;
            result[3] += 0.0010183299389002036;
            result[4] += 0.048879837067209775;
            result[5] += 0.0050916496945010185;
          } else {
            result[0] += 0.3333333333333333;
            result[1] += 0.006060606060606061;
            result[2] += 0.15151515151515152;
            result[3] += 0.10909090909090909;
            result[4] += 0.13333333333333333;
            result[5] += 0.26666666666666666;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1232876712328767;
            result[3] += 0.6164383561643836;
            result[4] += 0;
            result[5] += 0.2602739726027397;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6225165562913907;
            result[3] += 0.3443708609271523;
            result[4] += 0;
            result[5] += 0.033112582781456956;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0.15555555555555556;
            result[1] += 0.03333333333333333;
            result[2] += 0.4444444444444444;
            result[3] += 0.07777777777777778;
            result[4] += 0.08888888888888889;
            result[5] += 0.2;
          } else {
            result[0] += 0.00853658536585366;
            result[1] += 0;
            result[2] += 0.9341463414634147;
            result[3] += 0.045121951219512194;
            result[4] += 0;
            result[5] += 0.012195121951219513;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42720000))) ) ) {
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
            result[4] += 0.8;
            result[5] += 0.2;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.034482758620689655;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.034482758620689655;
            result[4] += 0.3793103448275862;
            result[5] += 0.5517241379310345;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9;
            result[5] += 0.1;
          } else {
            result[0] += 0.001272264631043257;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04071246819338423;
            result[4] += 0.024173027989821884;
            result[5] += 0.9338422391857506;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0.07407407407407407;
            result[2] += 0.04938271604938271;
            result[3] += 0.12345679012345678;
            result[4] += 0.04938271604938271;
            result[5] += 0.7037037037037037;
          } else {
            result[0] += 0.006191950464396286;
            result[1] += 0.030959752321981428;
            result[2] += 0.006191950464396286;
            result[3] += 0.5448916408668731;
            result[4] += 0.024767801857585144;
            result[5] += 0.3869969040247679;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0.03571428571428571;
            result[1] += 0.7142857142857143;
            result[2] += 0.03571428571428571;
            result[3] += 0;
            result[4] += 0.21428571428571427;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9974747474747475;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0025252525252525255;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42970000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
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
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42260000))) ) ) {
            result[0] += 0;
            result[1] += 0.9655172413793104;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.034482758620689655;
            result[5] += 0;
          } else {
            result[0] += 0.1244019138755981;
            result[1] += 0.04784688995215312;
            result[2] += 0;
            result[3] += 0.014354066985645935;
            result[4] += 0.7559808612440192;
            result[5] += 0.05741626794258374;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0.87521815008726;
            result[1] += 0.006108202443280977;
            result[2] += 0.006980802792321117;
            result[3] += 0.027050610820244327;
            result[4] += 0.06195462478184991;
            result[5] += 0.02268760907504363;
          } else {
            result[0] += 0.10412573673870335;
            result[1] += 0.005893909626719057;
            result[2] += 0.2907662082514735;
            result[3] += 0.30844793713163066;
            result[4] += 0.06483300589390963;
            result[5] += 0.22593320235756384;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1;
            result[4] += 0;
            result[5] += 0.9;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6;
            result[4] += 0;
            result[5] += 0.4;
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
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.30000000000000004;
            result[3] += 0.6000000000000001;
            result[4] += 0;
            result[5] += 0.10000000000000002;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7;
            result[3] += 0.2;
            result[4] += 0.016666666666666666;
            result[5] += 0.08333333333333333;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.023809523809523808;
            result[2] += 0.8571428571428571;
            result[3] += 0.07142857142857142;
            result[4] += 0;
            result[5] += 0.047619047619047616;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b60000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 1;
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42e70000))) ) ) {
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
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0012642225031605564;
            result[1] += 0;
            result[2] += 0.965865992414665;
            result[3] += 0.02781289506953224;
            result[4] += 0;
            result[5] += 0.0050568900126422255;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42720000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9904761904761905;
            result[5] += 0.009523809523809525;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.984375;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.015625;
            result[5] += 0;
          } else {
            result[0] += 0.009174311926605505;
            result[1] += 0.1926605504587156;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5688073394495413;
            result[5] += 0.22935779816513763;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426c0000))) ) ) {
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
            result[3] += 0.030303030303030304;
            result[4] += 0.011544011544011544;
            result[5] += 0.9581529581529582;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0.017482517482517484;
            result[1] += 0.0034965034965034965;
            result[2] += 0.006993006993006993;
            result[3] += 0.1993006993006993;
            result[4] += 0.18181818181818182;
            result[5] += 0.5909090909090909;
          } else {
            result[0] += 0.06827309236947791;
            result[1] += 0.008032128514056224;
            result[2] += 0.03614457831325301;
            result[3] += 0.5381526104417671;
            result[4] += 0.020080321285140562;
            result[5] += 0.3293172690763052;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x425a0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.015625;
            result[1] += 0.640625;
            result[2] += 0;
            result[3] += 0.078125;
            result[4] += 0.234375;
            result[5] += 0.03125;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0.11029411764705882;
            result[1] += 0.11029411764705882;
            result[2] += 0;
            result[3] += 0.007352941176470588;
            result[4] += 0.7058823529411765;
            result[5] += 0.0661764705882353;
          } else {
            result[0] += 0.8477477477477477;
            result[1] += 0.023423423423423424;
            result[2] += 0.009009009009009009;
            result[3] += 0.03873873873873874;
            result[4] += 0.04864864864864865;
            result[5] += 0.032432432432432434;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0.014705882352941176;
            result[1] += 0.051470588235294115;
            result[2] += 0.3235294117647059;
            result[3] += 0.35294117647058826;
            result[4] += 0.011029411764705883;
            result[5] += 0.24632352941176472;
          } else {
            result[0] += 0.640625;
            result[1] += 0;
            result[2] += 0.1875;
            result[3] += 0.015625;
            result[4] += 0.140625;
            result[5] += 0.015625;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.08695652173913043;
            result[1] += 0.043478260869565216;
            result[2] += 0.043478260869565216;
            result[3] += 0.043478260869565216;
            result[4] += 0.043478260869565216;
            result[5] += 0.7391304347826086;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42700000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.02857142857142857;
            result[1] += 0;
            result[2] += 0.21428571428571427;
            result[3] += 0.5285714285714286;
            result[4] += 0.05714285714285714;
            result[5] += 0.17142857142857143;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.14285714285714285;
            result[4] += 0.14285714285714285;
            result[5] += 0.7142857142857143;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.42105263157894735;
            result[3] += 0.42105263157894735;
            result[4] += 0;
            result[5] += 0.15789473684210525;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714288;
            result[3] += 0.5714285714285715;
            result[4] += 0;
            result[5] += 0.28571428571428575;
          } else {
            result[0] += 0.03125;
            result[1] += 0;
            result[2] += 0.9375;
            result[3] += 0.03125;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.35294117647058826;
            result[3] += 0.5588235294117647;
            result[4] += 0;
            result[5] += 0.08823529411764706;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42f50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8846153846153846;
            result[3] += 0.11538461538461539;
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
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42910000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c00000))) ) ) {
            result[0] += 0.16666666666666666;
            result[1] += 0;
            result[2] += 0.8333333333333334;
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
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0.037162162162162164;
            result[1] += 0;
            result[2] += 0.8209459459459459;
            result[3] += 0.12162162162162163;
            result[4] += 0;
            result[5] += 0.02027027027027027;
          } else {
            result[0] += 0.0016611295681063123;
            result[1] += 0;
            result[2] += 0.9700996677740864;
            result[3] += 0.024916943521594685;
            result[4] += 0;
            result[5] += 0.0033222591362126247;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42980000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42300000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0045871559633027525;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.981651376146789;
            result[5] += 0.013761467889908258;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.125;
            result[5] += 0.875;
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
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42810000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42910000))) ) ) {
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
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42880000))) ) ) {
            result[0] += 0.05714285714285714;
            result[1] += 0.02857142857142857;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6857142857142857;
            result[5] += 0.22857142857142856;
          } else {
            result[0] += 0.8484848484848485;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.12121212121212122;
            result[5] += 0.030303030303030304;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7222222222222222;
            result[5] += 0.2777777777777778;
          } else {
            result[0] += 0.0056625141562853904;
            result[1] += 0.0022650056625141564;
            result[2] += 0.0022650056625141564;
            result[3] += 0.04869762174405436;
            result[4] += 0.028312570781426953;
            result[5] += 0.912797281993205;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.05555555555555555;
            result[4] += 0.9444444444444444;
            result[5] += 0;
          } else {
            result[0] += 0.18;
            result[1] += 0.006666666666666667;
            result[2] += 0.03333333333333333;
            result[3] += 0.17333333333333334;
            result[4] += 0.02666666666666667;
            result[5] += 0.58;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.037037037037037035;
            result[3] += 0.2222222222222222;
            result[4] += 0.14814814814814814;
            result[5] += 0.5925925925925926;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.78;
            result[4] += 0.006666666666666667;
            result[5] += 0.21333333333333335;
          }
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42420000))) ) ) {
            result[0] += 0;
            result[1] += 0.9473684210526315;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05263157894736842;
            result[5] += 0;
          } else {
            result[0] += 0.03278688524590164;
            result[1] += 0.09016393442622951;
            result[2] += 0.040983606557377046;
            result[3] += 0.02459016393442623;
            result[4] += 0.7786885245901639;
            result[5] += 0.03278688524590164;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.6333333333333333;
            result[2] += 0;
            result[3] += 0.03333333333333333;
            result[4] += 0.26666666666666666;
            result[5] += 0.06666666666666667;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0.1368421052631579;
            result[1] += 0.4105263157894737;
            result[2] += 0.010526315789473684;
            result[3] += 0;
            result[4] += 0.3684210526315789;
            result[5] += 0.07368421052631578;
          } else {
            result[0] += 0.888495575221239;
            result[1] += 0.0061946902654867264;
            result[2] += 0.001769911504424779;
            result[3] += 0.026548672566371685;
            result[4] += 0.07256637168141594;
            result[5] += 0.004424778761061948;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0.019230769230769232;
            result[1] += 0.02403846153846154;
            result[2] += 0.1875;
            result[3] += 0.4567307692307692;
            result[4] += 0.03365384615384615;
            result[5] += 0.27884615384615385;
          } else {
            result[0] += 0.7875000000000001;
            result[1] += 0;
            result[2] += 0.17500000000000002;
            result[3] += 0;
            result[4] += 0.037500000000000006;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b90000))) ) ) {
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
            result[3] += 0.65625;
            result[4] += 0;
            result[5] += 0.17708333333333334;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.2857142857142857;
            result[4] += 0.02857142857142857;
            result[5] += 0.4857142857142857;
          } else {
            result[0] += 0;
            result[1] += 0.047619047619047616;
            result[2] += 0.6984126984126984;
            result[3] += 0.23809523809523808;
            result[4] += 0;
            result[5] += 0.015873015873015872;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x429e0000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0.0625;
            result[3] += 0.3125;
            result[4] += 0.125;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.4166666666666667;
            result[4] += 0;
            result[5] += 0.08333333333333333;
          } else {
            result[0] += 0.018027571580063628;
            result[1] += 0;
            result[2] += 0.9204665959703076;
            result[3] += 0.044538706256627786;
            result[4] += 0;
            result[5] += 0.016967126193001062;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c00000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42900000))) ) ) {
            result[0] += 0.01809954751131222;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9819004524886877;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.18181818181818182;
            result[2] += 0;
            result[3] += 0.09090909090909091;
            result[4] += 0;
            result[5] += 0.7272727272727273;
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
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.018154311649016642;
            result[4] += 0.0226928895612708;
            result[5] += 0.9591527987897126;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6428571428571429;
            result[5] += 0.35714285714285715;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0.7391304347826086;
            result[1] += 0.057971014492753624;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.15942028985507245;
            result[5] += 0.043478260869565216;
          } else {
            result[0] += 0.005917159763313609;
            result[1] += 0.02564102564102564;
            result[2] += 0.021696252465483234;
            result[3] += 0.39250493096646943;
            result[4] += 0.045364891518737675;
            result[5] += 0.5088757396449705;
          }
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4722222222222222;
            result[5] += 0.027777777777777776;
          } else {
            result[0] += 0.02304147465437788;
            result[1] += 0.009216589861751152;
            result[2] += 0.03225806451612903;
            result[3] += 0.3548387096774194;
            result[4] += 0.17511520737327188;
            result[5] += 0.4055299539170507;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0.8250428816466552;
            result[1] += 0.058319039451114926;
            result[2] += 0.005145797598627788;
            result[3] += 0.00686106346483705;
            result[4] += 0.09862778730703259;
            result[5] += 0.006003430531732418;
          } else {
            result[0] += 0.18214285714285713;
            result[1] += 0.010714285714285714;
            result[2] += 0.3107142857142857;
            result[3] += 0.225;
            result[4] += 0.11785714285714285;
            result[5] += 0.15357142857142858;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0.9950980392156863;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0024509803921568627;
            result[5] += 0.0024509803921568627;
          } else {
            result[0] += 0.5000000000000001;
            result[1] += 0.16666666666666669;
            result[2] += 0.16666666666666669;
            result[3] += 0;
            result[4] += 0.16666666666666669;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42890000))) ) ) {
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
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42700000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a60000))) ) ) {
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
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.09090909090909091;
            result[5] += 0.9090909090909091;
          } else {
            result[0] += 0;
            result[1] += 0.05660377358490566;
            result[2] += 0.018867924528301886;
            result[3] += 0.7358490566037735;
            result[4] += 0;
            result[5] += 0.18867924528301888;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0.23529411764705882;
            result[1] += 0.35294117647058826;
            result[2] += 0.058823529411764705;
            result[3] += 0;
            result[4] += 0.23529411764705882;
            result[5] += 0.11764705882352941;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.15384615384615385;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8461538461538461;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9137931034482759;
            result[3] += 0.06896551724137931;
            result[4] += 0;
            result[5] += 0.017241379310344827;
          } else {
            result[0] += 0.125;
            result[1] += 0;
            result[2] += 0.375;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3958333333333333;
            result[3] += 0.5416666666666666;
            result[4] += 0;
            result[5] += 0.0625;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6956521739130436;
            result[3] += 0.08695652173913045;
            result[4] += 0;
            result[5] += 0.2173913043478261;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9310344827586207;
            result[3] += 0.06896551724137931;
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
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e50000))) ) ) {
            result[0] += 0.12;
            result[1] += 0.16;
            result[2] += 0.72;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.8888888888888888;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0.008130081300813009;
            result[1] += 0;
            result[2] += 0.8780487804878049;
            result[3] += 0.10975609756097561;
            result[4] += 0;
            result[5] += 0.0040650406504065045;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9772296015180265;
            result[3] += 0.022770398481973434;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428d0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0.005128205128205128;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9794871794871794;
            result[5] += 0.015384615384615385;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7;
            result[5] += 0.3;
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
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.017241379310344827;
            result[4] += 0.4827586206896552;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.036284470246734396;
            result[4] += 0.011611030478955007;
            result[5] += 0.9521044992743106;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0.036544850498338874;
            result[1] += 0.023255813953488372;
            result[2] += 0.019933554817275746;
            result[3] += 0.15946843853820597;
            result[4] += 0.16279069767441862;
            result[5] += 0.5980066445182725;
          } else {
            result[0] += 0;
            result[1] += 0.015625;
            result[2] += 0.03125;
            result[3] += 0.796875;
            result[4] += 0;
            result[5] += 0.15625;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0.05555555555555555;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9444444444444444;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9310344827586207;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.06896551724137931;
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
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0.6887966804979254;
            result[1] += 0.04564315352697096;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2240663900414938;
            result[5] += 0.041493775933609964;
          } else {
            result[0] += 0.05286343612334802;
            result[1] += 0.03303964757709251;
            result[2] += 0.030837004405286344;
            result[3] += 0.33259911894273125;
            result[4] += 0.10352422907488987;
            result[5] += 0.44713656387665196;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42900000))) ) ) {
            result[0] += 0.05982905982905983;
            result[1] += 0.26495726495726496;
            result[2] += 0.05982905982905983;
            result[3] += 0;
            result[4] += 0.5897435897435898;
            result[5] += 0.02564102564102564;
          } else {
            result[0] += 0.7913279132791329;
            result[1] += 0.011743450767841014;
            result[2] += 0.08039747064137309;
            result[3] += 0.04878048780487806;
            result[4] += 0.04968383017163506;
            result[5] += 0.01806684733514002;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ae0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ad0000))) ) ) {
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
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.023255813953488372;
            result[4] += 0.023255813953488372;
            result[5] += 0.9534883720930233;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0.6883116883116883;
            result[4] += 0;
            result[5] += 0.16883116883116883;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0.09523809523809523;
            result[1] += 0.3333333333333333;
            result[2] += 0.19047619047619047;
            result[3] += 0.38095238095238093;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.02702702702702703;
            result[1] += 0;
            result[2] += 0.918918918918919;
            result[3] += 0.02702702702702703;
            result[4] += 0;
            result[5] += 0.02702702702702703;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42870000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a60000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ad0000))) ) ) {
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
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0.027027027027027032;
            result[1] += 0;
            result[2] += 0.7432432432432433;
            result[3] += 0.22972972972972977;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9857142857142858;
            result[3] += 0.014285714285714285;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.008156606851549755;
            result[1] += 0;
            result[2] += 0.9690048939641109;
            result[3] += 0.021207177814029365;
            result[4] += 0;
            result[5] += 0.0016313213703099511;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42e50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9953051643192489;
            result[5] += 0.004694835680751174;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0.23076923076923078;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.15384615384615385;
            result[5] += 0.6153846153846154;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.045454545454545456;
            result[3] += 0;
            result[4] += 0.8181818181818182;
            result[5] += 0.13636363636363635;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0.005720823798627002;
            result[1] += 0.0011441647597254005;
            result[2] += 0;
            result[3] += 0.04691075514874142;
            result[4] += 0.04462242562929062;
            result[5] += 0.9016018306636155;
          } else {
            result[0] += 0.27722772277227725;
            result[1] += 0.1485148514851485;
            result[2] += 0;
            result[3] += 0.0891089108910891;
            result[4] += 0.2871287128712871;
            result[5] += 0.19801980198019803;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0.010309278350515464;
            result[1] += 0.010309278350515464;
            result[2] += 0.010309278350515464;
            result[3] += 0.29896907216494845;
            result[4] += 0.020618556701030927;
            result[5] += 0.6494845360824743;
          } else {
            result[0] += 0.005494505494505495;
            result[1] += 0;
            result[2] += 0.027472527472527472;
            result[3] += 0.7032967032967034;
            result[4] += 0.01098901098901099;
            result[5] += 0.25274725274725274;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0.02564102564102564;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9743589743589743;
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
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0.5714285714285714;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.42857142857142855;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9955257270693513;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0044742729306487695;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0.18584070796460178;
            result[1] += 0.12389380530973451;
            result[2] += 0;
            result[3] += 0.017699115044247787;
            result[4] += 0.6637168141592921;
            result[5] += 0.008849557522123894;
          } else {
            result[0] += 0.8862275449101797;
            result[1] += 0.012831479897348163;
            result[2] += 0.007698887938408897;
            result[3] += 0.02053036783575706;
            result[4] += 0.04277159965782721;
            result[5] += 0.029940119760479045;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42dd0000))) ) ) {
            result[0] += 0.0332409972299169;
            result[1] += 0.01662049861495845;
            result[2] += 0.1772853185595568;
            result[3] += 0.296398891966759;
            result[4] += 0.12188365650969529;
            result[5] += 0.3545706371191136;
          } else {
            result[0] += 0.661764705882353;
            result[1] += 0.04411764705882354;
            result[2] += 0.16176470588235298;
            result[3] += 0;
            result[4] += 0.10294117647058824;
            result[5] += 0.029411764705882356;
          }
        }
      }
    }
  } else {
    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ca0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.23076923076923078;
            result[4] += 0;
            result[5] += 0.7692307692307693;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13043478260869565;
            result[3] += 0.8260869565217391;
            result[4] += 0;
            result[5] += 0.043478260869565216;
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
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2647058823529412;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.23529411764705882;
          } else {
            result[0] += 0.03333333333333333;
            result[1] += 0;
            result[2] += 0.7666666666666667;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5714285714285714;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.42857142857142855;
          } else {
            result[0] += 0.022222222222222223;
            result[1] += 0;
            result[2] += 0.9333333333333333;
            result[3] += 0.044444444444444446;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42da0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0.125;
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
            result[0] += 0.125;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0.625;
            result[4] += 0;
            result[5] += 0.125;
          } else {
            result[0] += 0.028368794326241134;
            result[1] += 0;
            result[2] += 0.8014184397163121;
            result[3] += 0.14893617021276595;
            result[4] += 0;
            result[5] += 0.02127659574468085;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.92;
            result[3] += 0.08;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8837209302325582;
            result[3] += 0.11627906976744186;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9906716417910447;
            result[3] += 0.009328358208955223;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ae0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42f20000))) ) ) {
            result[0] += 0.014423076923076924;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9615384615384616;
            result[5] += 0.02403846153846154;
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
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42460000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1;
            result[3] += 0;
            result[4] += 0.8;
            result[5] += 0.1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03021978021978022;
            result[4] += 0.01098901098901099;
            result[5] += 0.9587912087912088;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0.0392156862745098;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.06535947712418301;
            result[4] += 0.16993464052287582;
            result[5] += 0.7254901960784313;
          } else {
            result[0] += 0.024822695035460994;
            result[1] += 0.0070921985815602835;
            result[2] += 0.07092198581560284;
            result[3] += 0.4645390070921986;
            result[4] += 0.1276595744680851;
            result[5] += 0.3049645390070922;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x423c0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a30000))) ) ) {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
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
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.15384615384615385;
            result[3] += 0.07692307692307693;
            result[4] += 0.7692307692307693;
            result[5] += 0;
          } else {
            result[0] += 0.0851063829787234;
            result[1] += 0.7872340425531915;
            result[2] += 0;
            result[3] += 0.0425531914893617;
            result[4] += 0.0851063829787234;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0.06417112299465241;
            result[1] += 0.0481283422459893;
            result[2] += 0;
            result[3] += 0.16042780748663102;
            result[4] += 0.25133689839572193;
            result[5] += 0.47593582887700536;
          } else {
            result[0] += 0.7935222672064778;
            result[1] += 0.05020242914979757;
            result[2] += 0.0024291497975708503;
            result[3] += 0.025910931174089068;
            result[4] += 0.10931174089068826;
            result[5] += 0.01862348178137652;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0.024096385542168676;
            result[1] += 0.008032128514056224;
            result[2] += 0.05220883534136546;
            result[3] += 0.5461847389558233;
            result[4] += 0.05220883534136546;
            result[5] += 0.3172690763052209;
          } else {
            result[0] += 0.39130434782608703;
            result[1] += 0.009661835748792272;
            result[2] += 0.3478260869565218;
            result[3] += 0.14009661835748796;
            result[4] += 0.08695652173913045;
            result[5] += 0.02415458937198068;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0.8571428571428571;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8947368421052632;
            result[4] += 0;
            result[5] += 0.10526315789473684;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1;
            result[3] += 0.03333333333333333;
            result[4] += 0;
            result[5] += 0.8666666666666667;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42800000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4375;
            result[3] += 0.421875;
            result[4] += 0;
            result[5] += 0.140625;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8421052631578948;
            result[3] += 0.052631578947368425;
            result[4] += 0;
            result[5] += 0.10526315789473685;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0.1;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.7;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6283185840707964;
            result[3] += 0.2920353982300885;
            result[4] += 0;
            result[5] += 0.07964601769911504;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6896551724137931;
            result[3] += 0.27586206896551724;
            result[4] += 0;
            result[5] += 0.034482758620689655;
          } else {
            result[0] += 0.012500000000000002;
            result[1] += 0;
            result[2] += 0.9041666666666668;
            result[3] += 0.07083333333333335;
            result[4] += 0;
            result[5] += 0.012500000000000002;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a20000))) ) ) {
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
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8888888888888888;
            result[3] += 0.1111111111111111;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.998019801980198;
            result[3] += 0.0019801980198019802;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cc0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0.003816793893129771;
            result[1] += 0.007633587786259542;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9618320610687023;
            result[5] += 0.026717557251908396;
          } else {
            result[0] += 0.07407407407407407;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2222222222222222;
            result[4] += 0.2962962962962963;
            result[5] += 0.4074074074074074;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 0.9615384615384616;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.038461538461538464;
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
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.46987951807228917;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03614457831325301;
            result[4] += 0.40963855421686746;
            result[5] += 0.08433734939759036;
          } else {
            result[0] += 0.0011148272017837235;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03455964325529543;
            result[4] += 0.06020066889632107;
            result[5] += 0.9041248606465998;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0.9047619047619048;
            result[1] += 0.0380952380952381;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05714285714285714;
            result[5] += 0;
          } else {
            result[0] += 0.03727714748784441;
            result[1] += 0.008103727714748784;
            result[2] += 0.07293354943273905;
            result[3] += 0.47487844408427876;
            result[4] += 0.06969205834683954;
            result[5] += 0.3371150729335494;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42400000))) ) ) {
            result[0] += 0.2;
            result[1] += 0.8;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.09230769230769231;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8769230769230769;
            result[5] += 0.03076923076923077;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.75;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.25;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0.0392156862745098;
            result[1] += 0.5882352941176471;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3137254901960784;
            result[5] += 0.058823529411764705;
          } else {
            result[0] += 0.9057971014492754;
            result[1] += 0.002070393374741201;
            result[2] += 0.005175983436853002;
            result[3] += 0.022774327122153208;
            result[4] += 0.026915113871635612;
            result[5] += 0.037267080745341616;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0.3228346456692913;
            result[1] += 0.06299212598425197;
            result[2] += 0.007874015748031496;
            result[3] += 0.2440944881889764;
            result[4] += 0.10236220472440945;
            result[5] += 0.25984251968503935;
          } else {
            result[0] += 0.0962962962962963;
            result[1] += 0.06666666666666667;
            result[2] += 0.5259259259259259;
            result[3] += 0.15555555555555556;
            result[4] += 0.05925925925925926;
            result[5] += 0.0962962962962963;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ee0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05263157894736842;
            result[3] += 0.05263157894736842;
            result[4] += 0;
            result[5] += 0.8947368421052632;
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
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42ca0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02857142857142857;
            result[3] += 0.8;
            result[4] += 0;
            result[5] += 0.17142857142857143;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7777777777777778;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.2222222222222222;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.31034482758620696;
            result[3] += 0.6551724137931035;
            result[4] += 0;
            result[5] += 0.03448275862068966;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0.6;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.855072463768116;
            result[3] += 0.07246376811594203;
            result[4] += 0;
            result[5] += 0.07246376811594203;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42e40000))) ) ) {
            result[0] += 0;
            result[1] += 0.16666666666666666;
            result[2] += 0.8333333333333334;
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
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0.01744186046511628;
            result[1] += 0;
            result[2] += 0.8023255813953488;
            result[3] += 0.16279069767441862;
            result[4] += 0.011627906976744186;
            result[5] += 0.005813953488372093;
          } else {
            result[0] += 0.0030441400304414;
            result[1] += 0;
            result[2] += 0.9665144596651446;
            result[3] += 0.0243531202435312;
            result[4] += 0;
            result[5] += 0.0060882800608828;
          }
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0.004694835680751174;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9859154929577465;
            result[5] += 0.009389671361502348;
          } else {
            result[0] += 0.18181818181818182;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5909090909090909;
            result[5] += 0.22727272727272727;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
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
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42870000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x425a0000))) ) ) {
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
            result[3] += 0.13333333333333333;
            result[4] += 0.3333333333333333;
            result[5] += 0.5333333333333333;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8571428571428571;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0.0038022813688212928;
            result[1] += 0;
            result[2] += 0.0012674271229404308;
            result[3] += 0.030418250950570342;
            result[4] += 0.012674271229404309;
            result[5] += 0.9518377693282636;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x426e0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42800000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.06666666666666667;
            result[4] += 0.26666666666666666;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0.9500000000000001;
            result[1] += 0.025000000000000005;
            result[2] += 0;
            result[3] += 0.012500000000000002;
            result[4] += 0.012500000000000002;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0.045454545454545456;
            result[2] += 0.031818181818181815;
            result[3] += 0.16363636363636364;
            result[4] += 0.14545454545454545;
            result[5] += 0.6136363636363636;
          } else {
            result[0] += 0.027491408934707903;
            result[1] += 0.01718213058419244;
            result[2] += 0.044673539518900345;
            result[3] += 0.5532646048109966;
            result[4] += 0.044673539518900345;
            result[5] += 0.3127147766323024;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 0.2;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8;
            result[5] += 0;
          } else {
            result[0] += 0.0024691358024691358;
            result[1] += 0.9975308641975309;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 0.034782608695652174;
            result[1] += 0.06086956521739131;
            result[2] += 0.008695652173913044;
            result[3] += 0.08695652173913043;
            result[4] += 0.782608695652174;
            result[5] += 0.02608695652173913;
          } else {
            result[0] += 0.02631578947368421;
            result[1] += 0.8421052631578947;
            result[2] += 0;
            result[3] += 0.07894736842105263;
            result[4] += 0.05263157894736842;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42980000))) ) ) {
            result[0] += 0.5727699530516432;
            result[1] += 0.07981220657276995;
            result[2] += 0;
            result[3] += 0.03755868544600939;
            result[4] += 0.26291079812206575;
            result[5] += 0.046948356807511735;
          } else {
            result[0] += 0.9485530546623795;
            result[1] += 0.002143622722400858;
            result[2] += 0;
            result[3] += 0.016077170418006433;
            result[4] += 0.030010718113612007;
            result[5] += 0.0032154340836012866;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0.05555555555555555;
            result[1] += 0.018518518518518517;
            result[2] += 0.11728395061728394;
            result[3] += 0.2777777777777778;
            result[4] += 0.13580246913580246;
            result[5] += 0.3950617283950617;
          } else {
            result[0] += 0.6363636363636365;
            result[1] += 0.15151515151515155;
            result[2] += 0.10606060606060608;
            result[3] += 0.04545454545454546;
            result[4] += 0.015151515151515154;
            result[5] += 0.04545454545454546;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2704918032786885;
            result[3] += 0.6311475409836065;
            result[4] += 0.008196721311475409;
            result[5] += 0.0901639344262295;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7058823529411765;
            result[3] += 0.19117647058823528;
            result[4] += 0;
            result[5] += 0.10294117647058823;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0.02631578947368421;
            result[1] += 0.02631578947368421;
            result[2] += 0.02631578947368421;
            result[3] += 0.21052631578947367;
            result[4] += 0.2631578947368421;
            result[5] += 0.4473684210526316;
          } else {
            result[0] += 0.14285714285714285;
            result[1] += 0;
            result[2] += 0.7272727272727273;
            result[3] += 0.05194805194805195;
            result[4] += 0;
            result[5] += 0.07792207792207792;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0.05555555555555555;
            result[1] += 0.044444444444444446;
            result[2] += 0.6555555555555556;
            result[3] += 0.15555555555555556;
            result[4] += 0.022222222222222223;
            result[5] += 0.06666666666666667;
          } else {
            result[0] += 0.0025348542458808617;
            result[1] += 0;
            result[2] += 0.9543726235741445;
            result[3] += 0.036755386565272496;
            result[4] += 0;
            result[5] += 0.0063371356147021544;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0.007547169811320755;
            result[1] += 0.0037735849056603774;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9547169811320755;
            result[5] += 0.033962264150943396;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x423a0000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.4;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0.2;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 0.0012578616352201257;
            result[2] += 0.0012578616352201257;
            result[3] += 0.02012578616352201;
            result[4] += 0.03647798742138365;
            result[5] += 0.9408805031446541;
          } else {
            result[0] += 0.10416666666666667;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.25;
            result[4] += 0.1875;
            result[5] += 0.4583333333333333;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.787878787878788;
            result[1] += 0.060606060606060615;
            result[2] += 0;
            result[3] += 0.04545454545454546;
            result[4] += 0.10606060606060608;
            result[5] += 0;
          } else {
            result[0] += 0.01583710407239819;
            result[1] += 0;
            result[2] += 0.006787330316742082;
            result[3] += 0.3936651583710407;
            result[4] += 0.10180995475113122;
            result[5] += 0.4819004524886878;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42420000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42460000))) ) ) {
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
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42980000))) ) ) {
            result[0] += 0;
            result[1] += 0.9871134020618557;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.01288659793814433;
            result[5] += 0;
          } else {
            result[0] += 0.38461538461538464;
            result[1] += 0.46153846153846156;
            result[2] += 0;
            result[3] += 0.15384615384615385;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0.13529411764705881;
            result[1] += 0.2411764705882353;
            result[2] += 0.011764705882352941;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0.11176470588235295;
          } else {
            result[0] += 0.8293103448275863;
            result[1] += 0.01810344827586207;
            result[2] += 0.007758620689655172;
            result[3] += 0.028448275862068967;
            result[4] += 0.05603448275862069;
            result[5] += 0.0603448275862069;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0.02476780185758514;
            result[1] += 0.015479876160990712;
            result[2] += 0.24148606811145512;
            result[3] += 0.3653250773993808;
            result[4] += 0.07430340557275542;
            result[5] += 0.2786377708978328;
          } else {
            result[0] += 0.7435897435897436;
            result[1] += 0;
            result[2] += 0.08974358974358974;
            result[3] += 0;
            result[4] += 0.16666666666666666;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06451612903225806;
            result[3] += 0.8709677419354839;
            result[4] += 0;
            result[5] += 0.06451612903225806;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6153846153846154;
            result[3] += 0.3076923076923077;
            result[4] += 0;
            result[5] += 0.07692307692307693;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42fa0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0.203125;
            result[4] += 0.015625;
            result[5] += 0.03125;
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
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b60000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9642857142857143;
            result[3] += 0.03571428571428571;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0;
          }
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
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2857142857142857;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.7142857142857143;
          } else {
            result[0] += 0.018587360594795543;
            result[1] += 0;
            result[2] += 0.8215613382899629;
            result[3] += 0.1301115241635688;
            result[4] += 0;
            result[5] += 0.029739776951672865;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7777777777777778;
            result[3] += 0.2222222222222222;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9891107078039928;
            result[3] += 0.009074410163339383;
            result[4] += 0;
            result[5] += 0.0018148820326678765;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43008000))) ) ) {
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
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a40000))) ) ) {
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
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42320000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x424a0000))) ) ) {
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
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9594594594594594;
            result[5] += 0.04054054054054054;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.125;
            result[4] += 0.25;
            result[5] += 0.625;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.6;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.28888888888888886;
            result[5] += 0.1111111111111111;
          } else {
            result[0] += 0.0012062726176115801;
            result[1] += 0.007237635705669481;
            result[2] += 0.0036188178528347406;
            result[3] += 0.024125452352231604;
            result[4] += 0.05790108564535585;
            result[5] += 0.9059107358262968;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2828282828282828;
            result[4] += 0.020202020202020204;
            result[5] += 0.696969696969697;
          } else {
            result[0] += 0;
            result[1] += 0.020942408376963352;
            result[2] += 0.005235602094240838;
            result[3] += 0.7486910994764397;
            result[4] += 0.010471204188481676;
            result[5] += 0.21465968586387435;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b70000))) ) ) {
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0.6488970588235294;
            result[1] += 0.03676470588235294;
            result[2] += 0.007352941176470588;
            result[3] += 0.022058823529411766;
            result[4] += 0.2610294117647059;
            result[5] += 0.02389705882352941;
          } else {
            result[0] += 0.03435114503816794;
            result[1] += 0.05343511450381679;
            result[2] += 0.17748091603053434;
            result[3] += 0.2786259541984733;
            result[4] += 0.11450381679389313;
            result[5] += 0.3416030534351145;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0.9272976680384087;
            result[1] += 0.013717421124828532;
            result[2] += 0.0013717421124828531;
            result[3] += 0.0054869684499314125;
            result[4] += 0.05212620027434842;
            result[5] += 0;
          } else {
            result[0] += 0.265625;
            result[1] += 0.015625;
            result[2] += 0.578125;
            result[3] += 0.0625;
            result[4] += 0.078125;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42900000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42810000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0.6;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.013888888888888888;
            result[3] += 0.08333333333333333;
            result[4] += 0.05555555555555555;
            result[5] += 0.8472222222222222;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0.03571428571428572;
            result[1] += 0;
            result[2] += 0.19642857142857145;
            result[3] += 0.6071428571428572;
            result[4] += 0;
            result[5] += 0.16071428571428575;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428c0000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0425531914893617;
            result[1] += 0.02127659574468085;
            result[2] += 0.8936170212765957;
            result[3] += 0.02127659574468085;
            result[4] += 0;
            result[5] += 0.02127659574468085;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42aa0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0.2;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.2;
          } else {
            result[0] += 0.9565217391304348;
            result[1] += 0;
            result[2] += 0.043478260869565216;
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
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.011764705882352943;
            result[1] += 0;
            result[2] += 0.8176470588235295;
            result[3] += 0.14117647058823532;
            result[4] += 0;
            result[5] += 0.029411764705882356;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0.002967359050445104;
            result[1] += 0;
            result[2] += 0.9169139465875371;
            result[3] += 0.08011869436201781;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0027548209366391185;
            result[1] += 0;
            result[2] += 0.9972451790633609;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428d0000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.979381443298969;
            result[5] += 0.020618556701030927;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0.06666666666666667;
            result[2] += 0;
            result[3] += 0.03333333333333333;
            result[4] += 0.4666666666666667;
            result[5] += 0.43333333333333335;
          } else {
            result[0] += 0.9285714285714286;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.07142857142857142;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0392156862745098;
            result[3] += 0;
            result[4] += 0.7254901960784313;
            result[5] += 0.23529411764705882;
          } else {
            result[0] += 0;
            result[1] += 0.0033482142857142855;
            result[2] += 0.0033482142857142855;
            result[3] += 0.041294642857142856;
            result[4] += 0.027901785714285716;
            result[5] += 0.9241071428571429;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.13157894736842105;
            result[4] += 0.05263157894736842;
            result[5] += 0.8157894736842105;
          } else {
            result[0] += 0;
            result[1] += 0.05732484076433121;
            result[2] += 0.03184713375796178;
            result[3] += 0.5923566878980892;
            result[4] += 0.01910828025477707;
            result[5] += 0.29936305732484075;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42660000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b60000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42260000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.06;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.94;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.7368421052631579;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2631578947368421;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0.12418300653594772;
            result[1] += 0.23529411764705882;
            result[2] += 0.0196078431372549;
            result[3] += 0.0457516339869281;
            result[4] += 0.5163398692810458;
            result[5] += 0.058823529411764705;
          } else {
            result[0] += 0.8224;
            result[1] += 0.0168;
            result[2] += 0.0072;
            result[3] += 0.0416;
            result[4] += 0.0608;
            result[5] += 0.0512;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0.004357298474945534;
            result[1] += 0;
            result[2] += 0.2222222222222222;
            result[3] += 0.45751633986928103;
            result[4] += 0.0196078431372549;
            result[5] += 0.2962962962962963;
          } else {
            result[0] += 0.47560975609756095;
            result[1] += 0.042682926829268296;
            result[2] += 0.2682926829268293;
            result[3] += 0.018292682926829267;
            result[4] += 0.12804878048780488;
            result[5] += 0.06707317073170732;
          }
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c00000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d50000))) ) ) {
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
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.08333333333333333;
            result[4] += 0;
            result[5] += 0.9166666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.2222222222222222;
            result[4] += 0;
            result[5] += 0.4444444444444444;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42cf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7;
            result[3] += 0.3;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8571428571428571;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0;
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
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42980000))) ) ) {
            result[0] += 0;
            result[1] += 1;
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
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0.0049261083743842365;
            result[1] += 0;
            result[2] += 0.812807881773399;
            result[3] += 0.15763546798029557;
            result[4] += 0;
            result[5] += 0.024630541871921183;
          } else {
            result[0] += 0.014084507042253521;
            result[1] += 0;
            result[2] += 0.9436619718309859;
            result[3] += 0.04225352112676056;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ed0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9655172413793104;
            result[3] += 0.034482758620689655;
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
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42240000))) ) ) {
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
            result[3] += 0.0037593984962406013;
            result[4] += 0.9473684210526315;
            result[5] += 0.04887218045112782;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x424e0000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.6923076923076923;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.28205128205128205;
            result[5] += 0.02564102564102564;
          } else {
            result[0] += 0.001145475372279496;
            result[1] += 0.003436426116838488;
            result[2] += 0;
            result[3] += 0.03665521191294387;
            result[4] += 0.06872852233676977;
            result[5] += 0.8900343642611683;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0.375;
            result[1] += 0.32142857142857145;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.30357142857142855;
            result[5] += 0;
          } else {
            result[0] += 0.013651877133105802;
            result[1] += 0;
            result[2] += 0.017064846416382253;
            result[3] += 0.49829351535836175;
            result[4] += 0.020477815699658702;
            result[5] += 0.45051194539249145;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.4;
            result[2] += 0;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.4;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0.06818181818181818;
            result[1] += 0.8409090909090909;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.09090909090909091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9974293059125964;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002570694087403599;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0.13013698630136986;
            result[1] += 0.1917808219178082;
            result[2] += 0;
            result[3] += 0.0273972602739726;
            result[4] += 0.5821917808219178;
            result[5] += 0.0684931506849315;
          } else {
            result[0] += 0.7956989247311828;
            result[1] += 0.018196856906534328;
            result[2] += 0.009925558312655087;
            result[3] += 0.03887510339123242;
            result[4] += 0.07278742762613731;
            result[5] += 0.06451612903225806;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0.025179856115107913;
            result[1] += 0;
            result[2] += 0.2733812949640288;
            result[3] += 0.3776978417266187;
            result[4] += 0.03237410071942446;
            result[5] += 0.29136690647482016;
          } else {
            result[0] += 0.5205479452054794;
            result[1] += 0.1506849315068493;
            result[2] += 0.0136986301369863;
            result[3] += 0;
            result[4] += 0.3150684931506849;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714288;
            result[3] += 0.761904761904762;
            result[4] += 0;
            result[5] += 0.09523809523809525;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0.16666666666666666;
            result[5] += 0.3333333333333333;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0.4;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0.375;
            result[4] += 0;
            result[5] += 0.5;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5384615384615384;
            result[4] += 0;
            result[5] += 0.46153846153846156;
          } else {
            result[0] += 0.3181818181818182;
            result[1] += 0;
            result[2] += 0.6818181818181818;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42990000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9230769230769231;
            result[3] += 0.07692307692307693;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42d70000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0.5555555555555556;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8013245033112583;
            result[3] += 0.17218543046357615;
            result[4] += 0;
            result[5] += 0.026490066225165563;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42f20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9121621621621622;
            result[3] += 0.08108108108108109;
            result[4] += 0;
            result[5] += 0.006756756756756757;
          } else {
            result[0] += 0.375;
            result[1] += 0;
            result[2] += 0.625;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ee0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9967948717948718;
            result[3] += 0.003205128205128205;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9375;
            result[3] += 0.0625;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.05;
            result[1] += 0;
            result[2] += 0.95;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0.01529051987767584;
            result[1] += 0.01529051987767584;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9541284403669725;
            result[5] += 0.01529051987767584;
          } else {
            result[0] += 0;
            result[1] += 0.023255813953488372;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5813953488372093;
            result[5] += 0.3953488372093023;
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
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0.5454545454545454;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4090909090909091;
            result[5] += 0.045454545454545456;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.033647375504710635;
            result[4] += 0.04441453566621804;
            result[5] += 0.9219380888290714;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0.17557251908396945;
            result[1] += 0.03435114503816794;
            result[2] += 0.007633587786259542;
            result[3] += 0.14885496183206107;
            result[4] += 0.1450381679389313;
            result[5] += 0.48854961832061067;
          } else {
            result[0] += 0.04878048780487805;
            result[1] += 0;
            result[2] += 0.020905923344947737;
            result[3] += 0.6898954703832753;
            result[4] += 0;
            result[5] += 0.24041811846689895;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x425a0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0.3235294117647059;
            result[2] += 0;
            result[3] += 0.11764705882352941;
            result[4] += 0.5588235294117647;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9354838709677419;
            result[2] += 0;
            result[3] += 0.06451612903225806;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 0.0026246719160104987;
            result[1] += 0.9973753280839895;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8947368421052632;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.10526315789473684;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0.09352517985611511;
            result[1] += 0.1223021582733813;
            result[2] += 0;
            result[3] += 0.1366906474820144;
            result[4] += 0.5899280575539568;
            result[5] += 0.05755395683453238;
          } else {
            result[0] += 0.8961748633879781;
            result[1] += 0.01639344262295082;
            result[2] += 0.004553734061930784;
            result[3] += 0.01639344262295082;
            result[4] += 0.0482695810564663;
            result[5] += 0.018214936247723135;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0.023076923076923078;
            result[1] += 0.023076923076923078;
            result[2] += 0.15;
            result[3] += 0.27692307692307694;
            result[4] += 0.019230769230769232;
            result[5] += 0.5076923076923077;
          } else {
            result[0] += 0.3214285714285714;
            result[1] += 0.062499999999999986;
            result[2] += 0.4732142857142856;
            result[3] += 0.053571428571428555;
            result[4] += 0.08035714285714285;
            result[5] += 0.008928571428571426;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42920000))) ) ) {
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
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.25;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d90000))) ) ) {
            result[0] += 0;
            result[1] += 0.014084507042253521;
            result[2] += 0.19718309859154928;
            result[3] += 0.7183098591549296;
            result[4] += 0;
            result[5] += 0.07042253521126761;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0;
            result[4] += 0.08333333333333333;
            result[5] += 0.25;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0.9230769230769231;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.07692307692307693;
          } else {
            result[0] += 0.14285714285714288;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5714285714285715;
            result[5] += 0.28571428571428575;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0.08270676691729323;
            result[1] += 0;
            result[2] += 0.7443609022556391;
            result[3] += 0.13533834586466165;
            result[4] += 0;
            result[5] += 0.03759398496240601;
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
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
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
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c30000))) ) ) {
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
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5714285714285714;
            result[3] += 0.35714285714285715;
            result[4] += 0;
            result[5] += 0.07142857142857142;
          } else {
            result[0] += 0.0013440860215053765;
            result[1] += 0;
            result[2] += 0.9543010752688172;
            result[3] += 0.043010752688172046;
            result[4] += 0;
            result[5] += 0.0013440860215053765;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cc0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0.0036363636363636364;
            result[1] += 0.0036363636363636364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9636363636363636;
            result[5] += 0.02909090909090909;
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
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.013846153846153847;
            result[4] += 0.013846153846153847;
            result[5] += 0.9723076923076923;
          } else {
            result[0] += 0.07560137457044673;
            result[1] += 0.01718213058419244;
            result[2] += 0.003436426116838488;
            result[3] += 0.09278350515463918;
            result[4] += 0.13745704467353953;
            result[5] += 0.6735395189003437;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0.10869565217391304;
            result[1] += 0.03804347826086957;
            result[2] += 0.03804347826086957;
            result[3] += 0.1956521739130435;
            result[4] += 0.08152173913043478;
            result[5] += 0.5380434782608695;
          } else {
            result[0] += 0;
            result[1] += 0.021897810218978103;
            result[2] += 0.029197080291970802;
            result[3] += 0.8029197080291971;
            result[4] += 0;
            result[5] += 0.145985401459854;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b60000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.875;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.125;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0.8292682926829268;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.17073170731707318;
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
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0.009708737864077669;
            result[1] += 0.32038834951456313;
            result[2] += 0;
            result[3] += 0.019417475728155338;
            result[4] += 0.6213592233009708;
            result[5] += 0.02912621359223301;
          } else {
            result[0] += 0.8267716535433071;
            result[1] += 0.007874015748031496;
            result[2] += 0;
            result[3] += 0.022747156605424323;
            result[4] += 0.09011373578302712;
            result[5] += 0.05249343832020997;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0.020737327188940093;
            result[1] += 0.06221198156682028;
            result[2] += 0.2672811059907834;
            result[3] += 0.4032258064516129;
            result[4] += 0.03225806451612903;
            result[5] += 0.21428571428571427;
          } else {
            result[0] += 0.7089552238805971;
            result[1] += 0;
            result[2] += 0.20149253731343283;
            result[3] += 0.007462686567164179;
            result[4] += 0.05970149253731343;
            result[5] += 0.022388059701492536;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0625;
            result[4] += 0;
            result[5] += 0.9375;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42cb0000))) ) ) {
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
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0.3333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0;
          } else {
            result[0] += 0.05555555555555555;
            result[1] += 0.05555555555555555;
            result[2] += 0.7222222222222222;
            result[3] += 0.1111111111111111;
            result[4] += 0;
            result[5] += 0.05555555555555555;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7012987012987013;
            result[3] += 0.2077922077922078;
            result[4] += 0;
            result[5] += 0.09090909090909091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8023255813953488;
            result[3] += 0.19767441860465115;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9827586206896551;
            result[3] += 0.017241379310344827;
            result[4] += 0;
            result[5] += 0;
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
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0.028985507246376812;
            result[1] += 0;
            result[2] += 0.8260869565217391;
            result[3] += 0.14492753623188406;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.00322061191626409;
            result[1] += 0;
            result[2] += 0.9742351046698873;
            result[3] += 0.014492753623188406;
            result[4] += 0;
            result[5] += 0.008051529790660225;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42e50000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42340000))) ) ) {
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
            result[4] += 0.987603305785124;
            result[5] += 0.012396694214876033;
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
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.875;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.125;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.0010559662090813093;
            result[2] += 0;
            result[3] += 0.06441393875395987;
            result[4] += 0.054910242872228086;
            result[5] += 0.8796198521647307;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0.14942528735632185;
            result[1] += 0.1839080459770115;
            result[2] += 0;
            result[3] += 0.12643678160919541;
            result[4] += 0.16091954022988506;
            result[5] += 0.3793103448275862;
          } else {
            result[0] += 0.014705882352941176;
            result[1] += 0;
            result[2] += 0.014705882352941176;
            result[3] += 0.7156862745098039;
            result[4] += 0;
            result[5] += 0.2549019607843137;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0.17692307692307693;
            result[1] += 0.007692307692307693;
            result[2] += 0;
            result[3] += 0.07692307692307693;
            result[4] += 0.2;
            result[5] += 0.5384615384615384;
          } else {
            result[0] += 0.83167495854063;
            result[1] += 0.029021558872305134;
            result[2] += 0.014925373134328354;
            result[3] += 0.01409618573797678;
            result[4] += 0.09867330016583745;
            result[5] += 0.011608623548922054;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0.02390438247011952;
            result[1] += 0.035856573705179286;
            result[2] += 0.17928286852589642;
            result[3] += 0.3904382470119522;
            result[4] += 0.01195219123505976;
            result[5] += 0.35856573705179284;
          } else {
            result[0] += 0.5212121212121211;
            result[1] += 0.006060606060606059;
            result[2] += 0.35757575757575755;
            result[3] += 0.024242424242424235;
            result[4] += 0.07272727272727271;
            result[5] += 0.018181818181818177;
          }
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42700000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42740000))) ) ) {
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
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.010752688172043012;
            result[2] += 0.23655913978494625;
            result[3] += 0.40860215053763443;
            result[4] += 0;
            result[5] += 0.34408602150537637;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c80000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0.4;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0;
          } else {
            result[0] += 0.06060606060606061;
            result[1] += 0;
            result[2] += 0.9090909090909091;
            result[3] += 0.030303030303030304;
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
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.058823529411764705;
            result[3] += 0.9411764705882353;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.08695652173913043;
            result[2] += 0.391304347826087;
            result[3] += 0.43478260869565216;
            result[4] += 0;
            result[5] += 0.08695652173913043;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0.0055248618784530384;
            result[1] += 0;
            result[2] += 0.7348066298342542;
            result[3] += 0.20994475138121546;
            result[4] += 0;
            result[5] += 0.049723756906077346;
          } else {
            result[0] += 0.11363636363636363;
            result[1] += 0;
            result[2] += 0.8863636363636364;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9182389937106918;
            result[3] += 0.06918238993710692;
            result[4] += 0;
            result[5] += 0.012578616352201259;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9915254237288136;
            result[3] += 0.00847457627118644;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0.0037735849056603774;
            result[1] += 0.03773584905660377;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9547169811320755;
            result[5] += 0.0037735849056603774;
          } else {
            result[0] += 0.2028985507246377;
            result[1] += 0.028985507246376812;
            result[2] += 0.014492753623188406;
            result[3] += 0;
            result[4] += 0.4927536231884058;
            result[5] += 0.2608695652173913;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0.03333333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16666666666666666;
            result[5] += 0.8;
          } else {
            result[0] += 0.8717948717948718;
            result[1] += 0.030303030303030304;
            result[2] += 0.013986013986013986;
            result[3] += 0.002331002331002331;
            result[4] += 0.06993006993006994;
            result[5] += 0.011655011655011656;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.06666666666666667;
            result[4] += 0.7;
            result[5] += 0.23333333333333334;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.006811989100817439;
            result[3] += 0.021798365122615803;
            result[4] += 0.01907356948228883;
            result[5] += 0.952316076294278;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0.0196078431372549;
            result[1] += 0.18137254901960784;
            result[2] += 0.014705882352941176;
            result[3] += 0.08333333333333333;
            result[4] += 0.5637254901960784;
            result[5] += 0.13725490196078433;
          } else {
            result[0] += 0.12586445366528354;
            result[1] += 0.0013831258644536654;
            result[2] += 0.02627939142461964;
            result[3] += 0.38035961272475793;
            result[4] += 0.042876901798063624;
            result[5] += 0.42323651452282157;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0.7142857142857143;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2857142857142857;
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
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x424e0000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428d0000))) ) ) {
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
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c20000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c00000))) ) ) {
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
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.9823321554770318;
            result[1] += 0;
            result[2] += 0.0017667844522968198;
            result[3] += 0.0017667844522968198;
            result[4] += 0.014134275618374558;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0.004739336492890996;
            result[1] += 0.014218009478672985;
            result[2] += 0.26540284360189575;
            result[3] += 0.4834123222748815;
            result[4] += 0.037914691943127965;
            result[5] += 0.1943127962085308;
          } else {
            result[0] += 0.08724832214765102;
            result[1] += 0.006711409395973155;
            result[2] += 0.6845637583892619;
            result[3] += 0.11409395973154364;
            result[4] += 0.006711409395973155;
            result[5] += 0.10067114093959732;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0.09090909090909091;
            result[1] += 0.36363636363636365;
            result[2] += 0.2727272727272727;
            result[3] += 0.09090909090909091;
            result[4] += 0;
            result[5] += 0.18181818181818182;
          } else {
            result[0] += 0.9183673469387755;
            result[1] += 0;
            result[2] += 0.08163265306122448;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0.6111111111111112;
            result[4] += 0;
            result[5] += 0.2777777777777778;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.796875;
            result[3] += 0.1875;
            result[4] += 0;
            result[5] += 0.015625;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8481012658227848;
            result[3] += 0.1518987341772152;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0015723270440251573;
            result[1] += 0;
            result[2] += 0.960691823899371;
            result[3] += 0.0330188679245283;
            result[4] += 0;
            result[5] += 0.0047169811320754715;
          }
        }
      }
    }
  }
  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42870000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a00000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42340000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0.007407407407407408;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9814814814814815;
            result[5] += 0.011111111111111112;
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x426e0000))) ) ) {
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
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x429b0000))) ) ) {
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
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0.05;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.95;
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
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0.9866666666666667;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.013333333333333334;
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
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03021978021978022;
            result[4] += 0.019230769230769232;
            result[5] += 0.9505494505494505;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x429c0000))) ) ) {
            result[0] += 0.05747126436781609;
            result[1] += 0.10344827586206896;
            result[2] += 0;
            result[3] += 0.09195402298850575;
            result[4] += 0.39080459770114945;
            result[5] += 0.3563218390804598;
          } else {
            result[0] += 0.007547169811320755;
            result[1] += 0.0037735849056603774;
            result[2] += 0.0037735849056603774;
            result[3] += 0.2188679245283019;
            result[4] += 0.03018867924528302;
            result[5] += 0.7358490566037735;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x425a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42d90000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426c0000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9714285714285714;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.02857142857142857;
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
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bb0000))) ) ) {
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
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0.7321428571428571;
            result[1] += 0.017857142857142856;
            result[2] += 0;
            result[3] += 0.08035714285714286;
            result[4] += 0.125;
            result[5] += 0.044642857142857144;
          } else {
            result[0] += 0.059006211180124224;
            result[1] += 0.003105590062111801;
            result[2] += 0.055900621118012424;
            result[3] += 0.5279503105590062;
            result[4] += 0.059006211180124224;
            result[5] += 0.2950310559006211;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0.11570247933884298;
            result[1] += 0.256198347107438;
            result[2] += 0.049586776859504134;
            result[3] += 0;
            result[4] += 0.5702479338842975;
            result[5] += 0.008264462809917356;
          } else {
            result[0] += 0.8741463414634146;
            result[1] += 0.00975609756097561;
            result[2] += 0.015609756097560976;
            result[3] += 0.037073170731707315;
            result[4] += 0.04975609756097561;
            result[5] += 0.013658536585365854;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.10919540229885058;
            result[3] += 0.6609195402298851;
            result[4] += 0;
            result[5] += 0.22988505747126436;
          } else {
            result[0] += 0.01092896174863388;
            result[1] += 0.00546448087431694;
            result[2] += 0.5081967213114754;
            result[3] += 0.18579234972677597;
            result[4] += 0.01092896174863388;
            result[5] += 0.2786885245901639;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0.4888888888888889;
            result[1] += 0.2;
            result[2] += 0.24444444444444444;
            result[3] += 0.022222222222222223;
            result[4] += 0.044444444444444446;
            result[5] += 0;
          } else {
            result[0] += 0.01284796573875803;
            result[1] += 0;
            result[2] += 0.9261241970021413;
            result[3] += 0.05032119914346895;
            result[4] += 0.0021413276231263384;
            result[5] += 0.008565310492505354;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42240000))) ) ) {
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
            result[4] += 0.99;
            result[5] += 0.01;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04761904761904762;
            result[4] += 0.4761904761904762;
            result[5] += 0.4761904761904762;
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
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1;
            result[4] += 0.6;
            result[5] += 0.3;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.034722222222222224;
            result[4] += 0.02361111111111111;
            result[5] += 0.9416666666666667;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0.573170731707317;
            result[1] += 0.12195121951219512;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2682926829268293;
            result[5] += 0.036585365853658534;
          } else {
            result[0] += 0.010554089709762533;
            result[1] += 0.018469656992084433;
            result[2] += 0.0079155672823219;
            result[3] += 0.47493403693931396;
            result[4] += 0.04221635883905013;
            result[5] += 0.44591029023746703;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42260000))) ) ) {
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
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0.6;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9950617283950617;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0049382716049382715;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0.12949640287769784;
            result[1] += 0.12949640287769784;
            result[2] += 0.007194244604316547;
            result[3] += 0.007194244604316547;
            result[4] += 0.6834532374100719;
            result[5] += 0.04316546762589928;
          } else {
            result[0] += 0.8262948207171315;
            result[1] += 0.028685258964143426;
            result[2] += 0.00398406374501992;
            result[3] += 0.03824701195219123;
            result[4] += 0.08127490039840637;
            result[5] += 0.02151394422310757;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0.020833333333333332;
            result[1] += 0.005208333333333333;
            result[2] += 0.13020833333333334;
            result[3] += 0.3072916666666667;
            result[4] += 0.13020833333333334;
            result[5] += 0.40625;
          } else {
            result[0] += 0.31333333333333335;
            result[1] += 0;
            result[2] += 0.43333333333333335;
            result[3] += 0.07333333333333333;
            result[4] += 0.08666666666666667;
            result[5] += 0.09333333333333334;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0196078431372549;
            result[3] += 0.2647058823529412;
            result[4] += 0.08823529411764706;
            result[5] += 0.6274509803921569;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0.04225352112676056;
            result[1] += 0.09859154929577464;
            result[2] += 0.1267605633802817;
            result[3] += 0.5211267605633803;
            result[4] += 0.07042253521126761;
            result[5] += 0.14084507042253522;
          } else {
            result[0] += 0.037037037037037035;
            result[1] += 0;
            result[2] += 0.7283950617283951;
            result[3] += 0.20987654320987653;
            result[4] += 0;
            result[5] += 0.024691358024691357;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0.8837209302325582;
            result[1] += 0;
            result[2] += 0.11627906976744186;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.2;
            result[1] += 0;
            result[2] += 0.8;
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
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08333333333333333;
            result[3] += 0.9166666666666666;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.007751937984496124;
            result[1] += 0;
            result[2] += 0.751937984496124;
            result[3] += 0.20155038759689922;
            result[4] += 0;
            result[5] += 0.03875968992248062;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42bc0000))) ) ) {
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
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.4166666666666667;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.893048128342246;
            result[3] += 0.10160427807486631;
            result[4] += 0;
            result[5] += 0.0053475935828877;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8936170212765957;
            result[3] += 0.10638297872340426;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9958762886597938;
            result[3] += 0.004123711340206186;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42720000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x41e00000))) ) ) {
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
            result[4] += 0.9774774774774775;
            result[5] += 0.02252252252252252;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.10526315789473684;
            result[5] += 0.8947368421052632;
          } else {
            result[0] += 0.12962962962962965;
            result[1] += 0.05555555555555556;
            result[2] += 0;
            result[3] += 0.05555555555555556;
            result[4] += 0.5925925925925927;
            result[5] += 0.16666666666666669;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0.05;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8;
            result[5] += 0.15;
          } else {
            result[0] += 0.0028129395218002813;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.012658227848101266;
            result[4] += 0.02250351617440225;
            result[5] += 0.9620253164556962;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0.24615384615384617;
            result[1] += 0.007692307692307693;
            result[2] += 0;
            result[3] += 0.05384615384615385;
            result[4] += 0.19615384615384615;
            result[5] += 0.49615384615384617;
          } else {
            result[0] += 0.005012531328320802;
            result[1] += 0.002506265664160401;
            result[2] += 0.007518796992481203;
            result[3] += 0.5639097744360902;
            result[4] += 0.015037593984962405;
            result[5] += 0.40601503759398494;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42480000))) ) ) {
            result[0] += 0;
            result[1] += 0.8461538461538461;
            result[2] += 0;
            result[3] += 0.07692307692307693;
            result[4] += 0.07692307692307693;
            result[5] += 0;
          } else {
            result[0] += 0.047619047619047616;
            result[1] += 0.0761904761904762;
            result[2] += 0.009523809523809525;
            result[3] += 0.01904761904761905;
            result[4] += 0.819047619047619;
            result[5] += 0.02857142857142857;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0.05263157894736842;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4473684210526316;
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
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0.7560975609756098;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.24390243902439024;
            result[5] += 0;
          } else {
            result[0] += 0.9063079777365491;
            result[1] += 0.012059369202226345;
            result[2] += 0.015769944341372914;
            result[3] += 0.021335807050092765;
            result[4] += 0.03339517625231911;
            result[5] += 0.011131725417439703;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0.027559055118110236;
            result[1] += 0.01968503937007874;
            result[2] += 0.24803149606299213;
            result[3] += 0.3858267716535433;
            result[4] += 0.027559055118110236;
            result[5] += 0.29133858267716534;
          } else {
            result[0] += 0.6785714285714286;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.32142857142857145;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0.5625;
            result[4] += 0;
            result[5] += 0.3125;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.18181818181818182;
            result[3] += 0.7954545454545454;
            result[4] += 0;
            result[5] += 0.022727272727272728;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.41509433962264153;
            result[3] += 0.33962264150943394;
            result[4] += 0;
            result[5] += 0.24528301886792453;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9148936170212766;
            result[3] += 0.06382978723404255;
            result[4] += 0;
            result[5] += 0.02127659574468085;
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
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ed0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0.0070921985815602835;
            result[1] += 0;
            result[2] += 0.7446808510638298;
            result[3] += 0.2127659574468085;
            result[4] += 0;
            result[5] += 0.03546099290780142;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9230769230769231;
            result[3] += 0.07692307692307693;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429b0000))) ) ) {
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
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7922077922077922;
            result[3] += 0.18181818181818182;
            result[4] += 0;
            result[5] += 0.025974025974025976;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0.010638297872340425;
            result[1] += 0;
            result[2] += 0.9148936170212766;
            result[3] += 0.07446808510638298;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9979296066252588;
            result[3] += 0.002070393374741201;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0.007407407407407408;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9592592592592593;
            result[5] += 0.03333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.75;
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
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.07142857142857142;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6428571428571429;
            result[5] += 0.2857142857142857;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03235294117647059;
            result[4] += 0.020588235294117647;
            result[5] += 0.9470588235294117;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0.8421052631578947;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.15789473684210525;
            result[5] += 0;
          } else {
            result[0] += 0.006578947368421053;
            result[1] += 0.008223684210526317;
            result[2] += 0.006578947368421053;
            result[3] += 0.3585526315789474;
            result[4] += 0.11019736842105264;
            result[5] += 0.5098684210526316;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0.054455445544554455;
            result[1] += 0.4504950495049505;
            result[2] += 0;
            result[3] += 0.0049504950495049506;
            result[4] += 0.4801980198019802;
            result[5] += 0.009900990099009901;
          } else {
            result[0] += 0.9148727984344422;
            result[1] += 0.021526418786692758;
            result[2] += 0;
            result[3] += 0.011741682974559686;
            result[4] += 0.043052837573385516;
            result[5] += 0.008806262230919765;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0.004651162790697674;
            result[1] += 0.018604651162790697;
            result[2] += 0.10697674418604651;
            result[3] += 0.5395348837209303;
            result[4] += 0.013953488372093023;
            result[5] += 0.31627906976744186;
          } else {
            result[0] += 0.2780487804878049;
            result[1] += 0;
            result[2] += 0.4878048780487805;
            result[3] += 0.06341463414634146;
            result[4] += 0.07317073170731707;
            result[5] += 0.0975609756097561;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0.8888888888888888;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1111111111111111;
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
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d30000))) ) ) {
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
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0.35294117647058826;
            result[2] += 0.058823529411764705;
            result[3] += 0;
            result[4] += 0.5882352941176471;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05714285714285714;
            result[3] += 0.22857142857142856;
            result[4] += 0;
            result[5] += 0.7142857142857143;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.09090909090909091;
            result[4] += 0.09090909090909091;
            result[5] += 0.8181818181818182;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.21739130434782608;
            result[3] += 0.6956521739130435;
            result[4] += 0;
            result[5] += 0.08695652173913043;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c80000))) ) ) {
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
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0.2857142857142857;
            result[2] += 0.2857142857142857;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.42857142857142855;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9166666666666666;
            result[3] += 0.027777777777777776;
            result[4] += 0;
            result[5] += 0.05555555555555555;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ed0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4375;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.0625;
          } else {
            result[0] += 0.06194690265486726;
            result[1] += 0;
            result[2] += 0.8230088495575222;
            result[3] += 0.07079646017699116;
            result[4] += 0;
            result[5] += 0.044247787610619475;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42e00000))) ) ) {
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
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ee0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8713450292397661;
            result[3] += 0.11695906432748537;
            result[4] += 0;
            result[5] += 0.011695906432748537;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.8;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9016393442622951;
            result[3] += 0.09836065573770492;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9839857651245552;
            result[3] += 0.01601423487544484;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x41f00000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0043859649122807015;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9736842105263158;
            result[5] += 0.021929824561403508;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42580000))) ) ) {
            result[0] += 0.9285714285714286;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07142857142857142;
            result[5] += 0;
          } else {
            result[0] += 0.0375;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5875;
            result[5] += 0.375;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0.03333333333333333;
            result[2] += 0;
            result[3] += 0.03333333333333333;
            result[4] += 0.7;
            result[5] += 0.23333333333333334;
          } else {
            result[0] += 0;
            result[1] += 0.004343105320304018;
            result[2] += 0;
            result[3] += 0.0499457111834962;
            result[4] += 0.04451682953311618;
            result[5] += 0.9011943539630836;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0.07407407407407407;
            result[2] += 0;
            result[3] += 0.09876543209876543;
            result[4] += 0.1111111111111111;
            result[5] += 0.7160493827160493;
          } else {
            result[0] += 0;
            result[1] += 0.008;
            result[2] += 0.008;
            result[3] += 0.684;
            result[4] += 0.012;
            result[5] += 0.288;
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42360000))) ) ) {
            result[0] += 0;
            result[1] += 0.9743589743589743;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.02564102564102564;
            result[5] += 0;
          } else {
            result[0] += 0.05479452054794521;
            result[1] += 0.14383561643835618;
            result[2] += 0.013698630136986302;
            result[3] += 0.05479452054794521;
            result[4] += 0.7123287671232877;
            result[5] += 0.020547945205479454;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0.8400374181478016;
            result[1] += 0.013096351730589336;
            result[2] += 0.009354536950420954;
            result[3] += 0.02432179607109448;
            result[4] += 0.08699719363891488;
            result[5] += 0.026192703461178673;
          } else {
            result[0] += 0.26143790849673204;
            result[1] += 0.008714596949891068;
            result[2] += 0.23529411764705882;
            result[3] += 0.3137254901960784;
            result[4] += 0.034858387799564274;
            result[5] += 0.14596949891067537;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0.7333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.26666666666666666;
            result[5] += 0;
          } else {
            result[0] += 0.0028011204481792717;
            result[1] += 0.9971988795518207;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
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
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ca0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428f0000))) ) ) {
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
            result[3] += 0.7777777777777778;
            result[4] += 0;
            result[5] += 0.16666666666666666;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42840000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.2;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.041666666666666664;
            result[3] += 0.08333333333333333;
            result[4] += 0;
            result[5] += 0.875;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0;
            result[1] += 0.25;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0.25;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.014705882352941176;
            result[2] += 0.6176470588235294;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.11764705882352941;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42f50000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7547169811320755;
            result[3] += 0.16352201257861634;
            result[4] += 0;
            result[5] += 0.08176100628930817;
          } else {
            result[0] += 0.030303030303030304;
            result[1] += 0;
            result[2] += 0.9393939393939394;
            result[3] += 0.030303030303030304;
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
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9743589743589743;
            result[3] += 0.024132730015082957;
            result[4] += 0;
            result[5] += 0.0015082956259426848;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x41ec0000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9881889763779528;
            result[5] += 0.011811023622047244;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.75;
            result[5] += 0.25;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.9272727272727272;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07272727272727272;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.007534983853606028;
            result[2] += 0;
            result[3] += 0.03229278794402583;
            result[4] += 0.06458557588805167;
            result[5] += 0.8955866523143164;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0.010582010582010581;
            result[1] += 0.005291005291005291;
            result[2] += 0.010582010582010581;
            result[3] += 0.2962962962962963;
            result[4] += 0.047619047619047616;
            result[5] += 0.6296296296296297;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8026315789473685;
            result[4] += 0;
            result[5] += 0.19736842105263158;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0.045454545454545456;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9545454545454546;
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
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42740000))) ) ) {
            result[0] += 0;
            result[1] += 0.9887640449438202;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.008988764044943821;
            result[5] += 0.0022471910112359553;
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
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0.12994350282485875;
            result[1] += 0.3785310734463277;
            result[2] += 0;
            result[3] += 0.005649717514124294;
            result[4] += 0.4858757062146893;
            result[5] += 0;
          } else {
            result[0] += 0.8901846452866862;
            result[1] += 0.012633624878522839;
            result[2] += 0;
            result[3] += 0.021379980563654036;
            result[4] += 0.06802721088435376;
            result[5] += 0.007774538386783285;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0.008771929824561403;
            result[1] += 0.015350877192982455;
            result[2] += 0.3223684210526316;
            result[3] += 0.39473684210526316;
            result[4] += 0.017543859649122806;
            result[5] += 0.2412280701754386;
          } else {
            result[0] += 0.7102803738317757;
            result[1] += 0;
            result[2] += 0.205607476635514;
            result[3] += 0;
            result[4] += 0.08411214953271028;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.875;
            result[4] += 0;
            result[5] += 0.125;
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
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ce0000))) ) ) {
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
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d60000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428b0000))) ) ) {
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
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0.6;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42900000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8947368421052632;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.10526315789473684;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0072992700729927005;
            result[1] += 0;
            result[2] += 0.8321167883211679;
            result[3] += 0.13138686131386862;
            result[4] += 0;
            result[5] += 0.029197080291970802;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.900355871886121;
            result[3] += 0.09252669039145907;
            result[4] += 0;
            result[5] += 0.0071174377224199285;
          } else {
            result[0] += 0.006048387096774193;
            result[1] += 0;
            result[2] += 0.9919354838709677;
            result[3] += 0.0020161290322580645;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x423e0000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.004405286343612335;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9823788546255506;
            result[5] += 0.013215859030837005;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0.023255813953488372;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.27906976744186046;
            result[5] += 0.6976744186046512;
          } else {
            result[0] += 0.8983050847457628;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1016949152542373;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0.06666666666666667;
            result[2] += 0;
            result[3] += 0.2;
            result[4] += 0.4166666666666667;
            result[5] += 0.31666666666666665;
          } else {
            result[0] += 0;
            result[1] += 0.0021668472372697724;
            result[2] += 0;
            result[3] += 0.04333694474539545;
            result[4] += 0.0314192849404117;
            result[5] += 0.9230769230769231;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06818181818181818;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.6818181818181818;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8076923076923077;
            result[4] += 0;
            result[5] += 0.19230769230769232;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b20000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42480000))) ) ) {
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
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.05263157894736842;
            result[1] += 0.9473684210526315;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0.1016949152542373;
            result[1] += 0.23163841807909605;
            result[2] += 0;
            result[3] += 0.011299435028248588;
            result[4] += 0.6384180790960452;
            result[5] += 0.01694915254237288;
          } else {
            result[0] += 0.8192771084337349;
            result[1] += 0.016351118760757316;
            result[2] += 0.01549053356282272;
            result[3] += 0.04130808950086059;
            result[4] += 0.06454388984509467;
            result[5] += 0.043029259896729774;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0.0219435736677116;
            result[1] += 0.006269592476489028;
            result[2] += 0.31974921630094044;
            result[3] += 0.36363636363636365;
            result[4] += 0.006269592476489028;
            result[5] += 0.28213166144200624;
          } else {
            result[0] += 0.6637931034482759;
            result[1] += 0;
            result[2] += 0.19827586206896552;
            result[3] += 0;
            result[4] += 0.13793103448275862;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42af0000))) ) ) {
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
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.04081632653061224;
            result[3] += 0.16326530612244897;
            result[4] += 0;
            result[5] += 0.7959183673469388;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.21428571428571427;
            result[3] += 0.7142857142857143;
            result[4] += 0;
            result[5] += 0.07142857142857142;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7407407407407407;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.25925925925925924;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3783783783783784;
            result[3] += 0.44594594594594594;
            result[4] += 0.013513513513513514;
            result[5] += 0.16216216216216217;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9012345679012346;
            result[3] += 0.09876543209876543;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42990000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8333333333333334;
          } else {
            result[0] += 0.005249343832020997;
            result[1] += 0;
            result[2] += 0.9435695538057742;
            result[3] += 0.051181102362204724;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42e40000))) ) ) {
            result[0] += 0.003745318352059925;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9925093632958801;
            result[5] += 0.003745318352059925;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2857142857142857;
            result[5] += 0.7142857142857143;
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
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0.9166666666666666;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.08333333333333333;
            result[5] += 0;
          } else {
            result[0] += 0.0031446540880503146;
            result[1] += 0;
            result[2] += 0.0020964360587002098;
            result[3] += 0.049266247379454925;
            result[4] += 0.06708595387840671;
            result[5] += 0.8784067085953878;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0.10625;
            result[1] += 0.025;
            result[2] += 0.00625;
            result[3] += 0.2625;
            result[4] += 0.10625;
            result[5] += 0.49375;
          } else {
            result[0] += 0;
            result[1] += 0.015873015873015872;
            result[2] += 0.005291005291005291;
            result[3] += 0.7513227513227513;
            result[4] += 0;
            result[5] += 0.2275132275132275;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0.05263157894736842;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9473684210526315;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9090909090909091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.09090909090909091;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0.9929906542056075;
            result[2] += 0;
            result[3] += 0.002336448598130841;
            result[4] += 0.004672897196261682;
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
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0.2;
            result[1] += 0.36363636363636365;
            result[2] += 0;
            result[3] += 0.045454545454545456;
            result[4] += 0.36363636363636365;
            result[5] += 0.02727272727272727;
          } else {
            result[0] += 0.8691834942932397;
            result[1] += 0.007901668129938543;
            result[2] += 0.014925373134328358;
            result[3] += 0.03511852502194908;
            result[4] += 0.04214223002633889;
            result[5] += 0.030728709394205442;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0.02976190476190476;
            result[1] += 0;
            result[2] += 0.06547619047619048;
            result[3] += 0.47023809523809523;
            result[4] += 0.11904761904761904;
            result[5] += 0.31547619047619047;
          } else {
            result[0] += 0.24423963133640553;
            result[1] += 0.10138248847926268;
            result[2] += 0.43317972350230416;
            result[3] += 0.03225806451612903;
            result[4] += 0.05069124423963134;
            result[5] += 0.1382488479262673;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42980000))) ) ) {
            result[0] += 0.1;
            result[1] += 0.4;
            result[2] += 0.1;
            result[3] += 0.2;
            result[4] += 0.15;
            result[5] += 0.05;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05263157894736842;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.9473684210526315;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13513513513513514;
            result[3] += 0.7567567567567568;
            result[4] += 0;
            result[5] += 0.10810810810810811;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5454545454545454;
            result[3] += 0.36363636363636365;
            result[4] += 0;
            result[5] += 0.09090909090909091;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0.16666666666666666;
            result[2] += 0.16666666666666666;
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
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2777777777777778;
            result[3] += 0.2777777777777778;
            result[4] += 0;
            result[5] += 0.4444444444444444;
          } else {
            result[0] += 0.058823529411764705;
            result[1] += 0;
            result[2] += 0.8088235294117647;
            result[3] += 0.08823529411764706;
            result[4] += 0.014705882352941176;
            result[5] += 0.029411764705882353;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08333333333333333;
            result[3] += 0.875;
            result[4] += 0;
            result[5] += 0.041666666666666664;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429c0000))) ) ) {
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
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5128205128205128;
            result[3] += 0.4358974358974359;
            result[4] += 0;
            result[5] += 0.05128205128205128;
          } else {
            result[0] += 0.03571428571428571;
            result[1] += 0;
            result[2] += 0.8928571428571429;
            result[3] += 0.07142857142857142;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8806818181818182;
            result[3] += 0.11363636363636363;
            result[4] += 0;
            result[5] += 0.005681818181818182;
          } else {
            result[0] += 0.0018214936247723133;
            result[1] += 0;
            result[2] += 0.9781420765027322;
            result[3] += 0.014571948998178506;
            result[4] += 0;
            result[5] += 0.00546448087431694;
          }
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0.12075471698113208;
            result[1] += 0.018867924528301886;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8490566037735849;
            result[5] += 0.011320754716981131;
          } else {
            result[0] += 0;
            result[1] += 0.022727272727272728;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.45454545454545453;
            result[5] += 0.5227272727272727;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0.7707865168539326;
            result[1] += 0.011235955056179775;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.20224719101123595;
            result[5] += 0.015730337078651686;
          } else {
            result[0] += 0.025;
            result[1] += 0.775;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.013719512195121951;
            result[4] += 0.010670731707317074;
            result[5] += 0.975609756097561;
          } else {
            result[0] += 0;
            result[1] += 0.02531645569620253;
            result[2] += 0.012658227848101266;
            result[3] += 0.1518987341772152;
            result[4] += 0.13924050632911392;
            result[5] += 0.6708860759493671;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0.010714285714285714;
            result[1] += 0.02619047619047619;
            result[2] += 0.04880952380952381;
            result[3] += 0.38095238095238093;
            result[4] += 0.08452380952380953;
            result[5] += 0.4488095238095238;
          } else {
            result[0] += 0.3686635944700461;
            result[1] += 0.10599078341013825;
            result[2] += 0.09216589861751152;
            result[3] += 0.07834101382488479;
            result[4] += 0.22580645161290322;
            result[5] += 0.12903225806451613;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42400000))) ) ) {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9743589743589743;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.02564102564102564;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
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
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c20000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c70000))) ) ) {
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
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0.8461538461538461;
            result[1] += 0;
            result[2] += 0.09615384615384616;
            result[3] += 0.038461538461538464;
            result[4] += 0.019230769230769232;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7058823529411765;
            result[3] += 0.22624434389140272;
            result[4] += 0;
            result[5] += 0.06787330316742081;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0.9397590361445783;
            result[1] += 0;
            result[2] += 0.012048192771084338;
            result[3] += 0;
            result[4] += 0.03614457831325301;
            result[5] += 0.012048192771084338;
          } else {
            result[0] += 0.1388888888888889;
            result[1] += 0;
            result[2] += 0.8611111111111112;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429e0000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.875;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.125;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0.01744186046511628;
            result[1] += 0;
            result[2] += 0.7906976744186046;
            result[3] += 0.19186046511627908;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.007797270955165692;
            result[1] += 0;
            result[2] += 0.9590643274853801;
            result[3] += 0.03313840155945419;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b30000))) ) ) {
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
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0.9976133651551312;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002386634844868735;
            result[5] += 0;
          } else {
            result[0] += 0.2;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0.25;
            result[1] += 0;
            result[2] += 0.5833333333333334;
            result[3] += 0.16666666666666666;
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
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0.7272727272727273;
            result[1] += 0;
            result[2] += 0.2727272727272727;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.006802721088435374;
            result[1] += 0;
            result[2] += 0.9931972789115646;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.08333333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.625;
            result[5] += 0.2916666666666667;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42870000))) ) ) {
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
            result[4] += 0.6666666666666666;
            result[5] += 0.3333333333333333;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42aa0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42620000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0.07142857142857142;
            result[1] += 0.07142857142857142;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8571428571428571;
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
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.11764705882352941;
            result[4] += 0.7647058823529411;
            result[5] += 0.11764705882352941;
          } else {
            result[0] += 0.0012004801920768306;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03601440576230492;
            result[4] += 0.021608643457382955;
            result[5] += 0.9411764705882353;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0.014084507042253521;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.09859154929577464;
            result[4] += 0.08450704225352113;
            result[5] += 0.8028169014084507;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7894736842105263;
            result[4] += 0;
            result[5] += 0.21052631578947367;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0.037383177570093455;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7523364485981309;
            result[4] += 0.004672897196261682;
            result[5] += 0.205607476635514;
          } else {
            result[0] += 0.1619047619047619;
            result[1] += 0.01904761904761905;
            result[2] += 0.05714285714285714;
            result[3] += 0.3238095238095238;
            result[4] += 0.009523809523809525;
            result[5] += 0.42857142857142855;
          }
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42bb0000))) ) ) {
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
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42860000))) ) ) {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
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
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0.13068181818181818;
            result[1] += 0.125;
            result[2] += 0;
            result[3] += 0.005681818181818182;
            result[4] += 0.7159090909090909;
            result[5] += 0.022727272727272728;
          } else {
            result[0] += 0.909433962264151;
            result[1] += 0.012264150943396227;
            result[2] += 0;
            result[3] += 0.01509433962264151;
            result[4] += 0.05849056603773585;
            result[5] += 0.0047169811320754715;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0.11194029850746269;
            result[1] += 0.007462686567164179;
            result[2] += 0.1791044776119403;
            result[3] += 0.35074626865671643;
            result[4] += 0.08208955223880597;
            result[5] += 0.26865671641791045;
          } else {
            result[0] += 0.8974358974358975;
            result[1] += 0;
            result[2] += 0.10256410256410256;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0.017857142857142856;
            result[2] += 0.03571428571428571;
            result[3] += 0.14285714285714285;
            result[4] += 0.08928571428571429;
            result[5] += 0.7142857142857143;
          } else {
            result[0] += 0.011834319526627219;
            result[1] += 0.07692307692307693;
            result[2] += 0.23076923076923078;
            result[3] += 0.4970414201183432;
            result[4] += 0.005917159763313609;
            result[5] += 0.17751479289940827;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0.6363636363636364;
            result[1] += 0.05454545454545454;
            result[2] += 0.2;
            result[3] += 0;
            result[4] += 0.09090909090909091;
            result[5] += 0.01818181818181818;
          } else {
            result[0] += 0.15;
            result[1] += 0;
            result[2] += 0.775;
            result[3] += 0;
            result[4] += 0.025;
            result[5] += 0.05;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.47706422018348627;
            result[3] += 0.3853211009174312;
            result[4] += 0;
            result[5] += 0.13761467889908258;
          } else {
            result[0] += 0.031578947368421054;
            result[1] += 0;
            result[2] += 0.8315789473684211;
            result[3] += 0.06315789473684211;
            result[4] += 0;
            result[5] += 0.07368421052631578;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6875;
            result[3] += 0.3125;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.004098360655737705;
            result[1] += 0;
            result[2] += 0.9740437158469946;
            result[3] += 0.01912568306010929;
            result[4] += 0;
            result[5] += 0.00273224043715847;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428b0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426e0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42940000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9826589595375722;
            result[5] += 0.017341040462427744;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0.5;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.96;
            result[5] += 0.04;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04597701149425287;
            result[4] += 0.5862068965517241;
            result[5] += 0.367816091954023;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8666666666666667;
            result[5] += 0.13333333333333333;
          } else {
            result[0] += 0.0025412960609911056;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03176620076238882;
            result[4] += 0.026683608640406607;
            result[5] += 0.9390088945362135;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.11842105263157894;
            result[4] += 0.02631578947368421;
            result[5] += 0.8552631578947368;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7746478873239436;
            result[4] += 0.014084507042253521;
            result[5] += 0.2112676056338028;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0.5714285714285714;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.42857142857142855;
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
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42df0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0.6394472361809046;
            result[1] += 0.03894472361809046;
            result[2] += 0.015075376884422112;
            result[3] += 0.02261306532663317;
            result[4] += 0.2650753768844222;
            result[5] += 0.01884422110552764;
          } else {
            result[0] += 0.09149277688603531;
            result[1] += 0.030497592295345103;
            result[2] += 0.17335473515248795;
            result[3] += 0.36276083467094705;
            result[4] += 0.06420545746388442;
            result[5] += 0.27768860353130015;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0.8;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0;
          } else {
            result[0] += 0.9386401326699835;
            result[1] += 0;
            result[2] += 0.03482587064676618;
            result[3] += 0;
            result[4] += 0.016583747927031513;
            result[5] += 0.009950248756218907;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42930000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8571428571428571;
            result[2] += 0;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0.03225806451612903;
            result[2] += 0;
            result[3] += 0.0967741935483871;
            result[4] += 0.06451612903225806;
            result[5] += 0.8064516129032258;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.058823529411764705;
            result[3] += 0.47058823529411764;
            result[4] += 0;
            result[5] += 0.47058823529411764;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02857142857142857;
            result[3] += 0.9142857142857143;
            result[4] += 0;
            result[5] += 0.05714285714285714;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3888888888888889;
            result[3] += 0.5555555555555556;
            result[4] += 0;
            result[5] += 0.05555555555555555;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06666666666666667;
            result[3] += 0.4666666666666667;
            result[4] += 0.13333333333333333;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8194444444444445;
            result[3] += 0.16666666666666669;
            result[4] += 0;
            result[5] += 0.01388888888888889;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x423e0000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0.6;
          } else {
            result[0] += 0.19444444444444445;
            result[1] += 0.013888888888888888;
            result[2] += 0.5972222222222222;
            result[3] += 0.1527777777777778;
            result[4] += 0;
            result[5] += 0.041666666666666664;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8620689655172413;
            result[3] += 0.13793103448275862;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0.025806451612903226;
            result[1] += 0;
            result[2] += 0.8774193548387097;
            result[3] += 0.08387096774193549;
            result[4] += 0;
            result[5] += 0.012903225806451613;
          } else {
            result[0] += 0.0015060240963855422;
            result[1] += 0;
            result[2] += 0.9789156626506024;
            result[3] += 0.018072289156626505;
            result[4] += 0;
            result[5] += 0.0015060240963855422;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0.009852216748768473;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9901477832512315;
            result[5] += 0;
          } else {
            result[0] += 0.21428571428571427;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.35714285714285715;
            result[5] += 0.42857142857142855;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.012345679012345678;
            result[1] += 0.20987654320987653;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0.4444444444444444;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0382830626450116;
            result[4] += 0.04640371229698376;
            result[5] += 0.9153132250580046;
          } else {
            result[0] += 0;
            result[1] += 0.1206896551724138;
            result[2] += 0.017241379310344827;
            result[3] += 0.3448275862068966;
            result[4] += 0.06896551724137931;
            result[5] += 0.4482758620689655;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0070921985815602835;
            result[3] += 0.75177304964539;
            result[4] += 0.0070921985815602835;
            result[5] += 0.23404255319148937;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.46808510638297873;
            result[3] += 0.14893617021276595;
            result[4] += 0;
            result[5] += 0.3829787234042553;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0.04580152671755725;
            result[1] += 0.022900763358778626;
            result[2] += 0;
            result[3] += 0.015267175572519083;
            result[4] += 0.8473282442748091;
            result[5] += 0.06870229007633588;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0.8432343234323433;
            result[1] += 0.009075907590759076;
            result[2] += 0.0024752475247524753;
            result[3] += 0.022277227722772276;
            result[4] += 0.07343234323432343;
            result[5] += 0.04950495049504951;
          } else {
            result[0] += 0.16317016317016317;
            result[1] += 0.002331002331002331;
            result[2] += 0.2564102564102564;
            result[3] += 0.3356643356643357;
            result[4] += 0.02564102564102564;
            result[5] += 0.21678321678321677;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0.9973684210526316;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002631578947368421;
            result[5] += 0;
          } else {
            result[0] += 0.6666666666666667;
            result[1] += 0.16666666666666669;
            result[2] += 0;
            result[3] += 0.16666666666666669;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42aa0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1;
            result[3] += 0;
            result[4] += 0.9;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.04878048780487805;
            result[2] += 0.04878048780487805;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.9024390243902439;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.04;
            result[3] += 0.96;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.29411764705882354;
            result[3] += 0.17647058823529413;
            result[4] += 0;
            result[5] += 0.5294117647058824;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cd0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5294117647058824;
            result[3] += 0.29411764705882354;
            result[4] += 0;
            result[5] += 0.17647058823529413;
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
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d50000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.25;
            result[5] += 0.75;
          } else {
            result[0] += 0;
            result[1] += 0.08;
            result[2] += 0.2;
            result[3] += 0.6;
            result[4] += 0;
            result[5] += 0.12;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0.0967741935483871;
            result[1] += 0;
            result[2] += 0.9032258064516129;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.9;
            result[1] += 0;
            result[2] += 0.1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.8;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7446808510638298;
            result[3] += 0.2553191489361702;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8514285714285714;
            result[3] += 0.13142857142857142;
            result[4] += 0;
            result[5] += 0.017142857142857144;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9686520376175548;
            result[3] += 0.03134796238244514;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42420000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42420000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0.004219409282700422;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9704641350210971;
            result[5] += 0.02531645569620253;
          } else {
            result[0] += 0;
            result[1] += 0.15384615384615385;
            result[2] += 0;
            result[3] += 0.38461538461538464;
            result[4] += 0.07692307692307693;
            result[5] += 0.38461538461538464;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0.2647058823529412;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4264705882352941;
            result[5] += 0.3088235294117647;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.043092522179974654;
            result[4] += 0.025348542458808618;
            result[5] += 0.9315589353612167;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0.5000000000000001;
            result[1] += 0.14285714285714288;
            result[2] += 0;
            result[3] += 0.05714285714285715;
            result[4] += 0.2571428571428572;
            result[5] += 0.042857142857142864;
          } else {
            result[0] += 0.007772020725388601;
            result[1] += 0;
            result[2] += 0.010362694300518135;
            result[3] += 0.4067357512953368;
            result[4] += 0.07772020725388601;
            result[5] += 0.49740932642487046;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x43010000))) ) ) {
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
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ac0000))) ) ) {
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
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42d60000))) ) ) {
            result[0] += 0.5850556438791733;
            result[1] += 0.058823529411764705;
            result[2] += 0.00794912559618442;
            result[3] += 0.05087440381558029;
            result[4] += 0.24960254372019078;
            result[5] += 0.04769475357710652;
          } else {
            result[0] += 0.9294670846394985;
            result[1] += 0.014106583072100314;
            result[2] += 0;
            result[3] += 0.004702194357366771;
            result[4] += 0.047021943573667714;
            result[5] += 0.004702194357366771;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d20000))) ) ) {
            result[0] += 0.03513513513513514;
            result[1] += 0.02702702702702703;
            result[2] += 0.17567567567567569;
            result[3] += 0.2864864864864865;
            result[4] += 0.06756756756756757;
            result[5] += 0.4081081081081081;
          } else {
            result[0] += 0.8266666666666667;
            result[1] += 0;
            result[2] += 0.09333333333333334;
            result[3] += 0.04;
            result[4] += 0;
            result[5] += 0.04;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.17647058823529413;
            result[3] += 0.8088235294117647;
            result[4] += 0;
            result[5] += 0.014705882352941176;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.8;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9285714285714286;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.07142857142857142;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6446280991735538;
            result[3] += 0.3057851239669422;
            result[4] += 0.008264462809917357;
            result[5] += 0.041322314049586785;
          } else {
            result[0] += 0.03571428571428572;
            result[1] += 0;
            result[2] += 0.8839285714285715;
            result[3] += 0.07142857142857144;
            result[4] += 0;
            result[5] += 0.00892857142857143;
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
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c40000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42560000))) ) ) {
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
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.020833333333333332;
            result[1] += 0;
            result[2] += 0.8791666666666667;
            result[3] += 0.0875;
            result[4] += 0;
            result[5] += 0.0125;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42f10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9916492693110647;
            result[3] += 0.008350730688935281;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.10526315789473684;
            result[1] += 0;
            result[2] += 0.8947368421052632;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42720000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.995;
            result[5] += 0.005;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8846153846153846;
            result[5] += 0.11538461538461539;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.35294117647058826;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.29411764705882354;
            result[5] += 0.35294117647058826;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.7941176470588235;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.058823529411764705;
            result[4] += 0.058823529411764705;
            result[5] += 0.08823529411764706;
          } else {
            result[0] += 0.0011792452830188679;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04363207547169811;
            result[4] += 0.04716981132075472;
            result[5] += 0.9080188679245284;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0.0546875;
            result[1] += 0.015625;
            result[2] += 0;
            result[3] += 0.109375;
            result[4] += 0.1015625;
            result[5] += 0.71875;
          } else {
            result[0] += 0.03773584905660377;
            result[1] += 0.009433962264150943;
            result[2] += 0;
            result[3] += 0.6886792452830188;
            result[4] += 0.009433962264150943;
            result[5] += 0.25471698113207547;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
            result[0] += 0;
            result[1] += 0.8936170212765957;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.10638297872340426;
            result[5] += 0;
          } else {
            result[0] += 0.03125000000000001;
            result[1] += 0.04166666666666667;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9166666666666667;
            result[5] += 0.010416666666666668;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x425e0000))) ) ) {
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
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42980000))) ) ) {
            result[0] += 0.5070422535211268;
            result[1] += 0.06572769953051644;
            result[2] += 0;
            result[3] += 0.03755868544600939;
            result[4] += 0.36619718309859156;
            result[5] += 0.023474178403755867;
          } else {
            result[0] += 0.9433551198257081;
            result[1] += 0.006535947712418301;
            result[2] += 0.0010893246187363835;
            result[3] += 0.016339869281045753;
            result[4] += 0.023965141612200435;
            result[5] += 0.008714596949891068;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0.0125;
            result[1] += 0.020833333333333332;
            result[2] += 0.25833333333333336;
            result[3] += 0.3625;
            result[4] += 0.05;
            result[5] += 0.29583333333333334;
          } else {
            result[0] += 0.787878787878788;
            result[1] += 0.010101010101010104;
            result[2] += 0.08080808080808083;
            result[3] += 0.040404040404040414;
            result[4] += 0.07070707070707072;
            result[5] += 0.010101010101010104;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42890000))) ) ) {
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
            result[3] += 0.1;
            result[4] += 0.06666666666666667;
            result[5] += 0.8333333333333334;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05970149253731344;
            result[3] += 0.6417910447761195;
            result[4] += 0;
            result[5] += 0.2985074626865672;
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
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0.7142857142857143;
            result[4] += 0;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0;
            result[1] += 0.8;
            result[2] += 0;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0.07142857142857142;
            result[1] += 0.21428571428571427;
            result[2] += 0.14285714285714285;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5714285714285714;
          } else {
            result[0] += 0;
            result[1] += 0.01818181818181818;
            result[2] += 0.8;
            result[3] += 0.18181818181818182;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b60000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.609375;
            result[3] += 0.21875;
            result[4] += 0;
            result[5] += 0.171875;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0.08333333333333334;
            result[1] += 0.25000000000000006;
            result[2] += 0.5000000000000001;
            result[3] += 0;
            result[4] += 0.16666666666666669;
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
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 0.2727272727272727;
            result[1] += 0;
            result[2] += 0.09090909090909091;
            result[3] += 0.2727272727272727;
            result[4] += 0.2727272727272727;
            result[5] += 0.09090909090909091;
          } else {
            result[0] += 0.004716981132075471;
            result[1] += 0;
            result[2] += 0.80188679245283;
            result[3] += 0.17452830188679241;
            result[4] += 0;
            result[5] += 0.018867924528301883;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9295154185022027;
            result[3] += 0.07048458149779736;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9953488372093023;
            result[3] += 0.004651162790697674;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428d0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0.0048543689320388345;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9902912621359223;
            result[5] += 0.0048543689320388345;
          } else {
            result[0] += 0.034482758620689655;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7241379310344828;
            result[5] += 0.2413793103448276;
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
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x424e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9230769230769231;
            result[5] += 0.07692307692307693;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.003067484662576687;
            result[3] += 0.018404907975460124;
            result[4] += 0.015337423312883436;
            result[5] += 0.9631901840490797;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0.06827309236947791;
            result[1] += 0.012048192771084338;
            result[2] += 0;
            result[3] += 0.11646586345381527;
            result[4] += 0.1646586345381526;
            result[5] += 0.6385542168674698;
          } else {
            result[0] += 0.0273224043715847;
            result[1] += 0.02185792349726776;
            result[2] += 0.060109289617486336;
            result[3] += 0.5737704918032787;
            result[4] += 0.0546448087431694;
            result[5] += 0.26229508196721313;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0.032;
            result[1] += 0.056;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.904;
            result[5] += 0.008;
          } else {
            result[0] += 0.03703703703703704;
            result[1] += 0.5925925925925927;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3703703703703704;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 0.7352941176470589;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2647058823529412;
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
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0.8721872187218722;
            result[1] += 0.0369036903690369;
            result[2] += 0.0018001800180018;
            result[3] += 0.019801980198019802;
            result[4] += 0.04770477047704771;
            result[5] += 0.021602160216021602;
          } else {
            result[0] += 0.2529411764705882;
            result[1] += 0.0058823529411764705;
            result[2] += 0.023529411764705882;
            result[3] += 0.14705882352941177;
            result[4] += 0.15294117647058825;
            result[5] += 0.4176470588235294;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0.034653465346534656;
            result[1] += 0.04455445544554455;
            result[2] += 0.039603960396039604;
            result[3] += 0.42574257425742573;
            result[4] += 0.0594059405940594;
            result[5] += 0.39603960396039606;
          } else {
            result[0] += 0.41052631578947374;
            result[1] += 0.010526315789473686;
            result[2] += 0.2210526315789474;
            result[3] += 0.052631578947368425;
            result[4] += 0.26315789473684215;
            result[5] += 0.04210526315789474;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b60000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02564102564102564;
            result[4] += 0;
            result[5] += 0.9743589743589743;
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
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07971014492753623;
            result[3] += 0.7246376811594203;
            result[4] += 0.007246376811594203;
            result[5] += 0.18840579710144928;
          } else {
            result[0] += 0.11764705882352941;
            result[1] += 0;
            result[2] += 0.47058823529411764;
            result[3] += 0.17647058823529413;
            result[4] += 0;
            result[5] += 0.23529411764705882;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0.1;
            result[2] += 0.15;
            result[3] += 0.15;
            result[4] += 0;
            result[5] += 0.6;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0.06666666666666667;
            result[4] += 0;
            result[5] += 0.13333333333333333;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e10000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0.11764705882352941;
            result[1] += 0.11764705882352941;
            result[2] += 0.7647058823529411;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b10000))) ) ) {
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
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0.044444444444444446;
            result[1] += 0.08888888888888889;
            result[2] += 0.3111111111111111;
            result[3] += 0.3111111111111111;
            result[4] += 0.022222222222222223;
            result[5] += 0.2222222222222222;
          } else {
            result[0] += 0.11538461538461539;
            result[1] += 0;
            result[2] += 0.8846153846153846;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0.00684931506849315;
            result[1] += 0;
            result[2] += 0.8287671232876712;
            result[3] += 0.15753424657534246;
            result[4] += 0;
            result[5] += 0.00684931506849315;
          } else {
            result[0] += 0.005121638924455826;
            result[1] += 0;
            result[2] += 0.9654289372599232;
            result[3] += 0.029449423815621;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x421e0000))) ) ) {
            result[0] += 0;
            result[1] += 0.1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9874476987447699;
            result[5] += 0.012552301255230125;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0.05357142857142857;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.05357142857142857;
            result[4] += 0.5;
            result[5] += 0.39285714285714285;
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
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9166666666666666;
            result[5] += 0.08333333333333333;
          } else {
            result[0] += 0.0029498525073746312;
            result[1] += 0;
            result[2] += 0.0029498525073746312;
            result[3] += 0.032448377581120944;
            result[4] += 0.02654867256637168;
            result[5] += 0.9351032448377581;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.926605504587156;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07339449541284404;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.0176678445229682;
            result[2] += 0.0035335689045936395;
            result[3] += 0.3392226148409894;
            result[4] += 0.07950530035335689;
            result[5] += 0.5600706713780919;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x425a0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42d60000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0.36363636363636365;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6363636363636364;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9979716024340771;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002028397565922921;
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
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0.09154929577464789;
            result[1] += 0.29577464788732394;
            result[2] += 0;
            result[3] += 0.035211267605633804;
            result[4] += 0.5492957746478874;
            result[5] += 0.028169014084507043;
          } else {
            result[0] += 0.851512373968836;
            result[1] += 0.015582034830430797;
            result[2] += 0.0018331805682859762;
            result[3] += 0.03941338221814849;
            result[4] += 0.04766269477543538;
            result[5] += 0.043996333638863426;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0.02027027027027027;
            result[1] += 0.02702702702702703;
            result[2] += 0.17567567567567569;
            result[3] += 0.46621621621621623;
            result[4] += 0.10810810810810811;
            result[5] += 0.20270270270270271;
          } else {
            result[0] += 0.30275229357798167;
            result[1] += 0;
            result[2] += 0.48623853211009177;
            result[3] += 0.06422018348623854;
            result[4] += 0.03669724770642202;
            result[5] += 0.11009174311926606;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8571428571428571;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0963855421686747;
            result[3] += 0.7590361445783133;
            result[4] += 0;
            result[5] += 0.14457831325301204;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.625;
            result[4] += 0;
            result[5] += 0.125;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.08333333333333333;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42d80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.875;
          } else {
            result[0] += 0.4;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.023809523809523808;
            result[1] += 0;
            result[2] += 0.9285714285714286;
            result[3] += 0.047619047619047616;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5238095238095238;
            result[3] += 0.23809523809523808;
            result[4] += 0;
            result[5] += 0.23809523809523808;
          } else {
            result[0] += 0.02092050209205021;
            result[1] += 0;
            result[2] += 0.8410041841004184;
            result[3] += 0.13389121338912133;
            result[4] += 0;
            result[5] += 0.0041841004184100415;
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
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42940000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429f0000))) ) ) {
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
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9612068965517241;
            result[3] += 0.03879310344827586;
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42f60000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0.013215859030837005;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9823788546255506;
            result[5] += 0.004405286343612335;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8372093023255814;
            result[5] += 0.16279069767441862;
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
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0.9782608695652174;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.021739130434782608;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.002;
            result[2] += 0;
            result[3] += 0.045;
            result[4] += 0.074;
            result[5] += 0.879;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2403846153846154;
            result[4] += 0.038461538461538464;
            result[5] += 0.7211538461538461;
          } else {
            result[0] += 0;
            result[1] += 0.015463917525773196;
            result[2] += 0.015463917525773196;
            result[3] += 0.7525773195876289;
            result[4] += 0;
            result[5] += 0.21649484536082475;
          }
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0.09042553191489362;
            result[1] += 0.3404255319148936;
            result[2] += 0.005319148936170213;
            result[3] += 0.03723404255319149;
            result[4] += 0.5053191489361702;
            result[5] += 0.02127659574468085;
          } else {
            result[0] += 0.8718637992831542;
            result[1] += 0.017025089605734768;
            result[2] += 0.024193548387096774;
            result[3] += 0.026881720430107527;
            result[4] += 0.042114695340501794;
            result[5] += 0.017921146953405017;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0.0035087719298245615;
            result[1] += 0;
            result[2] += 0.2631578947368421;
            result[3] += 0.3298245614035088;
            result[4] += 0.031578947368421054;
            result[5] += 0.3719298245614035;
          } else {
            result[0] += 0.5428571428571429;
            result[1] += 0.04761904761904763;
            result[2] += 0.20000000000000007;
            result[3] += 0.10476190476190479;
            result[4] += 0.10476190476190479;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0.9949238578680203;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.005076142131979695;
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
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04;
            result[4] += 0.04;
            result[5] += 0.92;
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ca0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0.4444444444444444;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5555555555555556;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1935483870967742;
            result[3] += 0.7096774193548387;
            result[4] += 0.06451612903225806;
            result[5] += 0.03225806451612903;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0.11764705882352941;
            result[2] += 0.29411764705882354;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5882352941176471;
          } else {
            result[0] += 0.21052631578947367;
            result[1] += 0;
            result[2] += 0.6052631578947368;
            result[3] += 0.13157894736842105;
            result[4] += 0;
            result[5] += 0.05263157894736842;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42a60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0.010101010101010104;
            result[1] += 0;
            result[2] += 0.5151515151515152;
            result[3] += 0.4646464646464647;
            result[4] += 0;
            result[5] += 0.010101010101010104;
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
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.2727272727272727;
            result[1] += 0;
            result[2] += 0.7272727272727273;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
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
            result[2] += 0.9491525423728814;
            result[3] += 0.044794188861985475;
            result[4] += 0;
            result[5] += 0.006053268765133172;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42890000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42f50000))) ) ) {
            result[0] += 0.0043859649122807015;
            result[1] += 0.008771929824561403;
            result[2] += 0;
            result[3] += 0.008771929824561403;
            result[4] += 0.9649122807017544;
            result[5] += 0.013157894736842105;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9090909090909091;
            result[5] += 0.09090909090909091;
          } else {
            result[0] += 0;
            result[1] += 0.2857142857142857;
            result[2] += 0;
            result[3] += 0.2857142857142857;
            result[4] += 0;
            result[5] += 0.42857142857142855;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0.2980769230769231;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.009615384615384616;
            result[4] += 0.3942307692307692;
            result[5] += 0.2980769230769231;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0023781212841854932;
            result[3] += 0.06539833531510107;
            result[4] += 0.022592152199762187;
            result[5] += 0.9096313912009513;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0.8285714285714286;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02857142857142857;
            result[4] += 0.08571428571428572;
            result[5] += 0.05714285714285714;
          } else {
            result[0] += 0.006191950464396285;
            result[1] += 0.0030959752321981426;
            result[2] += 0;
            result[3] += 0.5015479876160991;
            result[4] += 0.03715170278637771;
            result[5] += 0.4520123839009288;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42300000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d90000))) ) ) {
            result[0] += 0;
            result[1] += 0.23387096774193547;
            result[2] += 0;
            result[3] += 0.016129032258064516;
            result[4] += 0.7419354838709677;
            result[5] += 0.008064516129032258;
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
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0.16216216216216217;
            result[1] += 0.17567567567567569;
            result[2] += 0;
            result[3] += 0.013513513513513514;
            result[4] += 0.5945945945945946;
            result[5] += 0.05405405405405406;
          } else {
            result[0] += 0.8986425339366516;
            result[1] += 0.01809954751131222;
            result[2] += 0.0036199095022624436;
            result[3] += 0.009954751131221719;
            result[4] += 0.051583710407239816;
            result[5] += 0.01809954751131222;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d90000))) ) ) {
            result[0] += 0.01557632398753894;
            result[1] += 0.03115264797507788;
            result[2] += 0.1588785046728972;
            result[3] += 0.40498442367601245;
            result[4] += 0.021806853582554516;
            result[5] += 0.367601246105919;
          } else {
            result[0] += 0.7415730337078652;
            result[1] += 0;
            result[2] += 0.2247191011235955;
            result[3] += 0;
            result[4] += 0.033707865168539325;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.375;
            result[3] += 0.125;
            result[4] += 0.125;
            result[5] += 0.375;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.08333333333333333;
            result[4] += 0;
            result[5] += 0.9166666666666666;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08333333333333333;
            result[3] += 0.8472222222222222;
            result[4] += 0;
            result[5] += 0.06944444444444445;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5849056603773585;
            result[3] += 0.3018867924528302;
            result[4] += 0;
            result[5] += 0.11320754716981132;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42d40000))) ) ) {
            result[0] += 0.0125;
            result[1] += 0;
            result[2] += 0.875;
            result[3] += 0.1125;
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
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0.8823529411764706;
            result[1] += 0;
            result[2] += 0.11764705882352941;
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
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5303030303030303;
            result[3] += 0.3939393939393939;
            result[4] += 0;
            result[5] += 0.07575757575757576;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8450704225352113;
            result[3] += 0.08450704225352113;
            result[4] += 0;
            result[5] += 0.07042253521126761;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ba0000))) ) ) {
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
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0.011428571428571429;
            result[1] += 0;
            result[2] += 0.8742857142857143;
            result[3] += 0.10285714285714286;
            result[4] += 0;
            result[5] += 0.011428571428571429;
          } else {
            result[0] += 0.008048289738430584;
            result[1] += 0;
            result[2] += 0.9818913480885312;
            result[3] += 0.008048289738430584;
            result[4] += 0;
            result[5] += 0.002012072434607646;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x420e0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x420e0000))) ) ) {
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
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0.004273504273504274;
            result[1] += 0.004273504273504274;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9871794871794872;
            result[5] += 0.004273504273504274;
          } else {
            result[0] += 0.04;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6;
            result[5] += 0.36;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42580000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a00000))) ) ) {
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
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0.125;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.75;
            result[5] += 0.125;
          } else {
            result[0] += 0.18518518518518517;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.037037037037037035;
            result[5] += 0.7777777777777778;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.038461538461538464;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6153846153846154;
            result[5] += 0.34615384615384615;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2631578947368421;
            result[4] += 0.5789473684210527;
            result[5] += 0.15789473684210525;
          } else {
            result[0] += 0.0012077294685990338;
            result[1] += 0.0012077294685990338;
            result[2] += 0.0012077294685990338;
            result[3] += 0.042270531400966184;
            result[4] += 0.027777777777777776;
            result[5] += 0.9263285024154589;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
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
            result[3] += 0.40540540540540543;
            result[4] += 0;
            result[5] += 0.5945945945945946;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3389830508474576;
            result[4] += 0.01694915254237288;
            result[5] += 0.6440677966101694;
          } else {
            result[0] += 0.014705882352941176;
            result[1] += 0;
            result[2] += 0.00980392156862745;
            result[3] += 0.7647058823529411;
            result[4] += 0;
            result[5] += 0.2107843137254902;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b20000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d50000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42bf0000))) ) ) {
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
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0.18421052631578946;
            result[1] += 0.14035087719298245;
            result[2] += 0;
            result[3] += 0.02631578947368421;
            result[4] += 0.6228070175438597;
            result[5] += 0.02631578947368421;
          } else {
            result[0] += 0.8974358974358975;
            result[1] += 0.008205128205128205;
            result[2] += 0.0020512820512820513;
            result[3] += 0.033846153846153845;
            result[4] += 0.041025641025641026;
            result[5] += 0.017435897435897435;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0.013986013986013986;
            result[1] += 0.04195804195804196;
            result[2] += 0.09090909090909091;
            result[3] += 0.3986013986013986;
            result[4] += 0.03496503496503497;
            result[5] += 0.4195804195804196;
          } else {
            result[0] += 0.6434782608695653;
            result[1] += 0.052173913043478265;
            result[2] += 0.191304347826087;
            result[3] += 0.008695652173913045;
            result[4] += 0.10434782608695653;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0.1267605633802817;
            result[2] += 0.09859154929577464;
            result[3] += 0.15492957746478872;
            result[4] += 0.28169014084507044;
            result[5] += 0.3380281690140845;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.36;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.14;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0.4;
            result[1] += 0.047619047619047616;
            result[2] += 0.4095238095238095;
            result[3] += 0.01904761904761905;
            result[4] += 0.0380952380952381;
            result[5] += 0.08571428571428572;
          } else {
            result[0] += 0.0010741138560687433;
            result[1] += 0.0010741138560687433;
            result[2] += 0.9215896885069818;
            result[3] += 0.055853920515574654;
            result[4] += 0.00644468313641246;
            result[5] += 0.013963480128893663;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0.005025125628140704;
            result[1] += 0.010050251256281407;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9748743718592965;
            result[5] += 0.010050251256281407;
          } else {
            result[0] += 0.29411764705882354;
            result[1] += 0.47058823529411764;
            result[2] += 0.11764705882352941;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.11764705882352941;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0.8333333333333334;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16666666666666666;
            result[5] += 0;
          } else {
            result[0] += 0.02631578947368421;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.05263157894736842;
            result[4] += 0.21052631578947367;
            result[5] += 0.7105263157894737;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8148148148148148;
            result[5] += 0.18518518518518517;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.025;
            result[4] += 0.010294117647058823;
            result[5] += 0.9647058823529412;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0.009302325581395349;
            result[2] += 0.009302325581395349;
            result[3] += 0.19534883720930232;
            result[4] += 0.13488372093023257;
            result[5] += 0.6511627906976745;
          } else {
            result[0] += 0;
            result[1] += 0.017241379310344827;
            result[2] += 0;
            result[3] += 0.7068965517241379;
            result[4] += 0.07471264367816093;
            result[5] += 0.20114942528735633;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42520000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42980000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9975369458128078;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0024630541871921183;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x429c0000))) ) ) {
            result[0] += 0.029411764705882353;
            result[1] += 0.3235294117647059;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6470588235294118;
            result[5] += 0;
          } else {
            result[0] += 0.14285714285714285;
            result[1] += 0.42857142857142855;
            result[2] += 0;
            result[3] += 0.42857142857142855;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42cf0000))) ) ) {
            result[0] += 0.041666666666666664;
            result[1] += 0.05;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8916666666666667;
            result[5] += 0.016666666666666666;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0.8169491525423729;
            result[1] += 0.012711864406779662;
            result[2] += 0.00423728813559322;
            result[3] += 0.038135593220338986;
            result[4] += 0.06694915254237288;
            result[5] += 0.061016949152542375;
          } else {
            result[0] += 0.2127659574468085;
            result[1] += 0.014184397163120567;
            result[2] += 0.24113475177304963;
            result[3] += 0.28132387706855794;
            result[4] += 0.0425531914893617;
            result[5] += 0.20803782505910165;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.05128205128205128;
            result[4] += 0.1794871794871795;
            result[5] += 0.7692307692307693;
          } else {
            result[0] += 0.041666666666666664;
            result[1] += 0;
            result[2] += 0.020833333333333332;
            result[3] += 0.4375;
            result[4] += 0.2916666666666667;
            result[5] += 0.20833333333333334;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42cf0000))) ) ) {
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06521739130434784;
            result[3] += 0.8695652173913044;
            result[4] += 0;
            result[5] += 0.06521739130434784;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5161290322580645;
            result[3] += 0.1935483870967742;
            result[4] += 0.16129032258064516;
            result[5] += 0.12903225806451613;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9642857142857143;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.03571428571428571;
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
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.05263157894736842;
            result[1] += 0.10526315789473684;
            result[2] += 0.21052631578947367;
            result[3] += 0.18421052631578946;
            result[4] += 0.18421052631578946;
            result[5] += 0.2631578947368421;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7575757575757576;
            result[3] += 0.22727272727272727;
            result[4] += 0;
            result[5] += 0.015151515151515152;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7358490566037736;
            result[3] += 0.21698113207547173;
            result[4] += 0;
            result[5] += 0.04716981132075473;
          } else {
            result[0] += 0.014778325123152709;
            result[1] += 0;
            result[2] += 0.9113300492610837;
            result[3] += 0.06896551724137931;
            result[4] += 0;
            result[5] += 0.0049261083743842365;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0.29411764705882354;
            result[1] += 0;
            result[2] += 0.7058823529411765;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.003484320557491289;
            result[1] += 0;
            result[2] += 0.975609756097561;
            result[3] += 0.020905923344947737;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x423a0000))) ) ) {
            result[0] += 0;
            result[1] += 0.8;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0;
          } else {
            result[0] += 0.013071895424836603;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9803921568627452;
            result[5] += 0.006535947712418302;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0.058823529411764705;
            result[1] += 0.04411764705882353;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5735294117647058;
            result[5] += 0.3235294117647059;
          } else {
            result[0] += 0;
            result[1] += 0.9565217391304348;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.043478260869565216;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x425a0000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cc0000))) ) ) {
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
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0.011799410029498525;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.017699115044247787;
            result[4] += 0.029498525073746312;
            result[5] += 0.9410029498525073;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6896551724137931;
            result[4] += 0;
            result[5] += 0.3103448275862069;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0.059190031152647975;
            result[1] += 0.012461059190031152;
            result[2] += 0.01557632398753894;
            result[3] += 0.2616822429906542;
            result[4] += 0.04361370716510903;
            result[5] += 0.6074766355140186;
          } else {
            result[0] += 0.06692913385826772;
            result[1] += 0.015748031496062992;
            result[2] += 0.027559055118110236;
            result[3] += 0.5984251968503937;
            result[4] += 0.05511811023622047;
            result[5] += 0.23622047244094488;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0.5714285714285714;
            result[1] += 0.06493506493506493;
            result[2] += 0.05194805194805195;
            result[3] += 0.07792207792207792;
            result[4] += 0.2077922077922078;
            result[5] += 0.025974025974025976;
          } else {
            result[0] += 0.014184397163120567;
            result[1] += 0;
            result[2] += 0.014184397163120567;
            result[3] += 0.41134751773049644;
            result[4] += 0.07092198581560284;
            result[5] += 0.48936170212765956;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0.8978685612788633;
            result[1] += 0.018650088809946713;
            result[2] += 0.009769094138543518;
            result[3] += 0.015097690941385435;
            result[4] += 0.05328596802841918;
            result[5] += 0.0053285968028419185;
          } else {
            result[0] += 0.21942446043165467;
            result[1] += 0.039568345323741004;
            result[2] += 0.30935251798561153;
            result[3] += 0.24100719424460432;
            result[4] += 0.04316546762589928;
            result[5] += 0.1474820143884892;
          }
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b00000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.25;
            result[4] += 0.5;
            result[5] += 0.25;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.037037037037037035;
            result[4] += 0.037037037037037035;
            result[5] += 0.9259259259259259;
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
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42d20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8918918918918919;
            result[4] += 0;
            result[5] += 0.10810810810810811;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.08333333333333333;
          }
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d90000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.031578947368421054;
            result[1] += 0;
            result[2] += 0.5052631578947369;
            result[3] += 0.42105263157894735;
            result[4] += 0;
            result[5] += 0.042105263157894736;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9024390243902439;
            result[3] += 0.0975609756097561;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a50000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3125;
            result[3] += 0.625;
            result[4] += 0;
            result[5] += 0.0625;
          } else {
            result[0] += 0.06666666666666668;
            result[1] += 0;
            result[2] += 0.8800000000000001;
            result[3] += 0.013333333333333336;
            result[4] += 0.013333333333333336;
            result[5] += 0.026666666666666672;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8055555555555556;
            result[3] += 0.1597222222222222;
            result[4] += 0;
            result[5] += 0.034722222222222224;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9882352941176471;
            result[3] += 0.011764705882352941;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.008264462809917356;
            result[3] += 0;
            result[4] += 0.9669421487603306;
            result[5] += 0.024793388429752067;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.15384615384615385;
            result[4] += 0.3076923076923077;
            result[5] += 0.5384615384615384;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0.25;
            result[2] += 0;
            result[3] += 0.5;
            result[4] += 0.25;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9696969696969697;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.030303030303030304;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42740000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.11111111111111112;
            result[4] += 0.7222222222222223;
            result[5] += 0.16666666666666669;
          } else {
            result[0] += 0.0014044943820224719;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.026685393258426966;
            result[4] += 0.012640449438202247;
            result[5] += 0.9592696629213483;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0.13212435233160622;
            result[1] += 0.007772020725388601;
            result[2] += 0.02072538860103627;
            result[3] += 0.13212435233160622;
            result[4] += 0.17875647668393782;
            result[5] += 0.5284974093264249;
          } else {
            result[0] += 0.004672897196261682;
            result[1] += 0;
            result[2] += 0.056074766355140186;
            result[3] += 0.6588785046728972;
            result[4] += 0;
            result[5] += 0.2803738317757009;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0.09316770186335403;
            result[1] += 0.2795031055900621;
            result[2] += 0;
            result[3] += 0.024844720496894408;
            result[4] += 0.577639751552795;
            result[5] += 0.024844720496894408;
          } else {
            result[0] += 0.8673376029277219;
            result[1] += 0.010064043915827997;
            result[2] += 0.004574565416285453;
            result[3] += 0.03019213174748399;
            result[4] += 0.0585544373284538;
            result[5] += 0.0292772186642269;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0.020348837209302327;
            result[1] += 0.03488372093023256;
            result[2] += 0.23255813953488372;
            result[3] += 0.4011627906976744;
            result[4] += 0.023255813953488372;
            result[5] += 0.2877906976744186;
          } else {
            result[0] += 0.7657657657657657;
            result[1] += 0.009009009009009009;
            result[2] += 0.14414414414414414;
            result[3] += 0;
            result[4] += 0.08108108108108109;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c60000))) ) ) {
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
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.04;
            result[3] += 0.04;
            result[4] += 0.04;
            result[5] += 0.88;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0.59375;
            result[4] += 0;
            result[5] += 0.28125;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.18181818181818182;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8181818181818182;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0.047619047619047616;
            result[2] += 0.19047619047619047;
            result[3] += 0.7142857142857143;
            result[4] += 0;
            result[5] += 0.047619047619047616;
          } else {
            result[0] += 0.20370370370370372;
            result[1] += 0.05555555555555556;
            result[2] += 0.3703703703703704;
            result[3] += 0.05555555555555556;
            result[4] += 0.01851851851851852;
            result[5] += 0.29629629629629634;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0.375;
            result[4] += 0;
            result[5] += 0.125;
          } else {
            result[0] += 0.007142857142857143;
            result[1] += 0;
            result[2] += 0.8071428571428572;
            result[3] += 0.16428571428571428;
            result[4] += 0;
            result[5] += 0.02142857142857143;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42be0000))) ) ) {
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
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.889273356401384;
            result[3] += 0.10726643598615918;
            result[4] += 0;
            result[5] += 0.0034602076124567475;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0.002109704641350211;
            result[1] += 0;
            result[2] += 0.9873417721518988;
            result[3] += 0.010548523206751054;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42900000))) ) ) {
            result[0] += 0;
            result[1] += 0.006369426751592357;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9808917197452229;
            result[5] += 0.012738853503184714;
          } else {
            result[0] += 0.047619047619047616;
            result[1] += 0.047619047619047616;
            result[2] += 0;
            result[3] += 0.09523809523809523;
            result[4] += 0.5238095238095238;
            result[5] += 0.2857142857142857;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.10714285714285714;
            result[2] += 0;
            result[3] += 0.03571428571428571;
            result[4] += 0.10714285714285714;
            result[5] += 0.75;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0.4210526315789474;
            result[2] += 0;
            result[3] += 0.10526315789473685;
            result[4] += 0.368421052631579;
            result[5] += 0.10526315789473685;
          } else {
            result[0] += 0.9573170731707317;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.036585365853658534;
            result[5] += 0.006097560975609756;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42810000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9;
            result[5] += 0.1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.13793103448275862;
            result[4] += 0.13793103448275862;
            result[5] += 0.7241379310344828;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5714285714285714;
            result[5] += 0.42857142857142855;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03392330383480826;
            result[4] += 0.004424778761061947;
            result[5] += 0.9616519174041298;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0.07575757575757576;
            result[1] += 0.06060606060606061;
            result[2] += 0;
            result[3] += 0.16666666666666666;
            result[4] += 0.5757575757575758;
            result[5] += 0.12121212121212122;
          } else {
            result[0] += 0.7916666666666667;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.04166666666666667;
            result[5] += 0.16666666666666669;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.011152416356877323;
            result[3] += 0.15613382899628253;
            result[4] += 0.10037174721189591;
            result[5] += 0.7323420074349443;
          } else {
            result[0] += 0.017937219730941704;
            result[1] += 0;
            result[2] += 0.004484304932735426;
            result[3] += 0.6053811659192825;
            result[4] += 0.004484304932735426;
            result[5] += 0.36771300448430494;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42580000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0;
            result[1] += 0.9973753280839895;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0026246719160104987;
            result[5] += 0;
          } else {
            result[0] += 0.75;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.25;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42500000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0547945205479452;
            result[1] += 0.1917808219178082;
            result[2] += 0.0273972602739726;
            result[3] += 0.0684931506849315;
            result[4] += 0.6438356164383562;
            result[5] += 0.0136986301369863;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0.6451612903225806;
            result[1] += 0.16129032258064516;
            result[2] += 0;
            result[3] += 0.12903225806451613;
            result[4] += 0.06451612903225806;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.07142857142857142;
            result[2] += 0.04081632653061224;
            result[3] += 0.6224489795918368;
            result[4] += 0.030612244897959183;
            result[5] += 0.23469387755102042;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0.8125;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1875;
            result[5] += 0;
          } else {
            result[0] += 0.9083503054989817;
            result[1] += 0.008146639511201629;
            result[2] += 0.01120162932790224;
            result[3] += 0.020366598778004074;
            result[4] += 0.035641547861507125;
            result[5] += 0.016293279022403257;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16470588235294117;
            result[3] += 0.5882352941176471;
            result[4] += 0.011764705882352941;
            result[5] += 0.23529411764705882;
          } else {
            result[0] += 0.06481481481481481;
            result[1] += 0;
            result[2] += 0.5648148148148148;
            result[3] += 0.21296296296296297;
            result[4] += 0.027777777777777776;
            result[5] += 0.12962962962962962;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0.06493506493506493;
            result[1] += 0;
            result[2] += 0.724025974025974;
            result[3] += 0.1396103896103896;
            result[4] += 0.003246753246753247;
            result[5] += 0.06818181818181818;
          } else {
            result[0] += 0.7692307692307693;
            result[1] += 0;
            result[2] += 0.23076923076923078;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.4666666666666667;
            result[4] += 0;
            result[5] += 0.2;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8695652173913043;
            result[3] += 0.13043478260869565;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9816793893129772;
            result[3] += 0.013740458015267177;
            result[4] += 0;
            result[5] += 0.004580152671755726;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42d40000))) ) ) {
            result[0] += 0.0035335689045936395;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.007067137809187279;
            result[4] += 0.9399293286219081;
            result[5] += 0.04946996466431095;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x424e0000))) ) ) {
            result[0] += 0;
            result[1] += 0.9655172413793104;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.034482758620689655;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.375;
            result[4] += 0.375;
            result[5] += 0.25;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.08333333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9166666666666666;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03941605839416058;
            result[4] += 0.01897810218978102;
            result[5] += 0.9416058394160584;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0.536842105263158;
            result[1] += 0.02105263157894737;
            result[2] += 0;
            result[3] += 0.02105263157894737;
            result[4] += 0.3789473684210527;
            result[5] += 0.04210526315789474;
          } else {
            result[0] += 0.004576659038901602;
            result[1] += 0;
            result[2] += 0.013729977116704805;
            result[3] += 0.4279176201372998;
            result[4] += 0.06178489702517163;
            result[5] += 0.4919908466819222;
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0.02654867256637168;
            result[1] += 0.008849557522123894;
            result[2] += 0.008849557522123894;
            result[3] += 0.09734513274336283;
            result[4] += 0.3008849557522124;
            result[5] += 0.5575221238938053;
          } else {
            result[0] += 0.789012738853503;
            result[1] += 0.053343949044585975;
            result[2] += 0.0071656050955414;
            result[3] += 0.020700636942675155;
            result[4] += 0.11385350318471335;
            result[5] += 0.015923566878980888;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0.04966887417218543;
            result[1] += 0.052980132450331126;
            result[2] += 0.09933774834437085;
            result[3] += 0.37748344370860926;
            result[4] += 0.10927152317880795;
            result[5] += 0.31125827814569534;
          } else {
            result[0] += 0.5268817204301075;
            result[1] += 0;
            result[2] += 0.41935483870967744;
            result[3] += 0.03225806451612903;
            result[4] += 0;
            result[5] += 0.021505376344086023;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42480000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0.6;
            result[2] += 0;
            result[3] += 0.2;
            result[4] += 0.2;
            result[5] += 0;
          } else {
            result[0] += 0.0025445292620865146;
            result[1] += 0.994910941475827;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0025445292620865146;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b10000))) ) ) {
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
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42da0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02631578947368421;
            result[3] += 0.9210526315789473;
            result[4] += 0;
            result[5] += 0.05263157894736842;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.75;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a50000))) ) ) {
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
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.5;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7894736842105263;
            result[3] += 0.18421052631578946;
            result[4] += 0;
            result[5] += 0.02631578947368421;
          }
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0.4153846153846154;
            result[4] += 0;
            result[5] += 0.18461538461538463;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9622641509433962;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.03773584905660377;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ca0000))) ) ) {
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
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0.02197802197802198;
            result[1] += 0;
            result[2] += 0.9065934065934066;
            result[3] += 0.07142857142857142;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9959349593495935;
            result[3] += 0.0020325203252032522;
            result[4] += 0;
            result[5] += 0.0020325203252032522;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42bd0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9909502262443439;
            result[5] += 0.00904977375565611;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6;
            result[5] += 0.4;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42820000))) ) ) {
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
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.3783783783783784;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6216216216216216;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03836930455635491;
            result[4] += 0.04436450839328537;
            result[5] += 0.9172661870503597;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0.0749063670411985;
            result[1] += 0.04119850187265917;
            result[2] += 0.02247191011235955;
            result[3] += 0.23220973782771537;
            result[4] += 0.08614232209737828;
            result[5] += 0.5430711610486891;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8727272727272727;
            result[4] += 0;
            result[5] += 0.12727272727272726;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c20000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0.031746031746031744;
            result[1] += 0.06349206349206349;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8809523809523809;
            result[5] += 0.023809523809523808;
          } else {
            result[0] += 0;
            result[1] += 0.9777777777777777;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.022222222222222223;
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
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0.9090909090909091;
            result[1] += 0.004329004329004329;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07792207792207792;
            result[5] += 0.008658008658008658;
          } else {
            result[0] += 0.05392156862745098;
            result[1] += 0.07107843137254902;
            result[2] += 0.11519607843137254;
            result[3] += 0.30637254901960786;
            result[4] += 0.061274509803921566;
            result[5] += 0.39215686274509803;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0.931554524361949;
            result[1] += 0.004640371229698376;
            result[2] += 0.01160092807424594;
            result[3] += 0.009280742459396751;
            result[4] += 0.03944315545243619;
            result[5] += 0.0034802784222737818;
          } else {
            result[0] += 0.3071895424836602;
            result[1] += 0.052287581699346414;
            result[2] += 0.21568627450980396;
            result[3] += 0.14379084967320263;
            result[4] += 0.17647058823529416;
            result[5] += 0.10457516339869283;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.045454545454545456;
            result[3] += 0.7727272727272727;
            result[4] += 0;
            result[5] += 0.18181818181818182;
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
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429e0000))) ) ) {
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
            result[3] += 0.20000000000000004;
            result[4] += 0;
            result[5] += 0.10000000000000002;
          }
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d30000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0.7916666666666666;
            result[4] += 0;
            result[5] += 0.08333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7142857142857143;
            result[3] += 0.2767857142857143;
            result[4] += 0;
            result[5] += 0.008928571428571428;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42880000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.006756756756756757;
            result[1] += 0;
            result[2] += 0.9054054054054054;
            result[3] += 0.07432432432432433;
            result[4] += 0.006756756756756757;
            result[5] += 0.006756756756756757;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.01593625498007968;
            result[1] += 0;
            result[2] += 0.9468791500664011;
            result[3] += 0.021248339973439574;
            result[4] += 0;
            result[5] += 0.01593625498007968;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42f60000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42780000))) ) ) {
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
            result[4] += 0.72;
            result[5] += 0.28;
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
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42890000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0625;
            result[5] += 0.9375;
          } else {
            result[0] += 0.061224489795918366;
            result[1] += 0;
            result[2] += 0.04081632653061224;
            result[3] += 0;
            result[4] += 0.6938775510204082;
            result[5] += 0.20408163265306123;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0.96875;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.03125;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7;
            result[5] += 0.3;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ac0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9714285714285714;
            result[5] += 0.02857142857142857;
          } else {
            result[0] += 0;
            result[1] += 0.17647058823529413;
            result[2] += 0;
            result[3] += 0.35294117647058826;
            result[4] += 0;
            result[5] += 0.47058823529411764;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0.0012970168612191958;
            result[1] += 0.0038910505836575876;
            result[2] += 0.0038910505836575876;
            result[3] += 0.0324254215304799;
            result[4] += 0.0324254215304799;
            result[5] += 0.9260700389105059;
          } else {
            result[0] += 0;
            result[1] += 0.0034965034965034965;
            result[2] += 0.0034965034965034965;
            result[3] += 0.2202797202797203;
            result[4] += 0.07342657342657342;
            result[5] += 0.6993006993006993;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a60000))) ) ) {
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
            result[3] += 0.05;
            result[4] += 0;
            result[5] += 0.95;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8780487804878049;
            result[4] += 0.006097560975609756;
            result[5] += 0.11585365853658537;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11538461538461539;
            result[3] += 0.2692307692307692;
            result[4] += 0;
            result[5] += 0.6153846153846154;
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0.012048192771084338;
            result[1] += 0.0963855421686747;
            result[2] += 0.04819277108433735;
            result[3] += 0.024096385542168676;
            result[4] += 0.8192771084337349;
            result[5] += 0;
          } else {
            result[0] += 0.08108108108108109;
            result[1] += 0.8918918918918919;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.02702702702702703;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c70000))) ) ) {
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
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0.23404255319148937;
            result[1] += 0.10638297872340426;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6595744680851063;
            result[5] += 0;
          } else {
            result[0] += 0.03174603174603175;
            result[1] += 0.634920634920635;
            result[2] += 0;
            result[3] += 0.11111111111111112;
            result[4] += 0.126984126984127;
            result[5] += 0.09523809523809525;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0.9255663430420712;
            result[1] += 0.007551240560949299;
            result[2] += 0.002157497303128371;
            result[3] += 0.012944983818770227;
            result[4] += 0.045307443365695796;
            result[5] += 0.006472491909385114;
          } else {
            result[0] += 0.3416666666666667;
            result[1] += 0;
            result[2] += 0.20416666666666666;
            result[3] += 0.175;
            result[4] += 0.06666666666666667;
            result[5] += 0.2125;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bd0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42960000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.12;
            result[4] += 0.48;
            result[5] += 0.2;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.037037037037037035;
            result[3] += 0.8148148148148148;
            result[4] += 0;
            result[5] += 0.14814814814814814;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.21428571428571427;
            result[3] += 0.5476190476190477;
            result[4] += 0;
            result[5] += 0.23809523809523808;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7264150943396226;
            result[3] += 0.27358490566037735;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0.0975609756097561;
            result[1] += 0.06097560975609756;
            result[2] += 0.2073170731707317;
            result[3] += 0.21951219512195122;
            result[4] += 0.14634146341463414;
            result[5] += 0.2682926829268293;
          } else {
            result[0] += 0.11023622047244094;
            result[1] += 0;
            result[2] += 0.8031496062992126;
            result[3] += 0.08661417322834646;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9053117782909931;
            result[3] += 0.07852193995381063;
            result[4] += 0.0023094688221709007;
            result[5] += 0.013856812933025405;
          } else {
            result[0] += 0.004651162790697674;
            result[1] += 0;
            result[2] += 0.986046511627907;
            result[3] += 0.009302325581395349;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0.005076142131979695;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9847715736040609;
            result[5] += 0.01015228426395939;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0.3333333333333333;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x429b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.37777777777777777;
            result[5] += 0.6222222222222222;
          } else {
            result[0] += 0;
            result[1] += 0.041666666666666664;
            result[2] += 0;
            result[3] += 0.10416666666666667;
            result[4] += 0.7083333333333334;
            result[5] += 0.14583333333333334;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0.47058823529411764;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0.029411764705882353;
          } else {
            result[0] += 0.003973509933774834;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.030463576158940398;
            result[4] += 0.04768211920529802;
            result[5] += 0.9178807947019868;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0.9473684210526315;
            result[1] += 0.05263157894736842;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.00273224043715847;
            result[1] += 0.00819672131147541;
            result[2] += 0.00546448087431694;
            result[3] += 0.3989071038251366;
            result[4] += 0.01092896174863388;
            result[5] += 0.5737704918032787;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0.5555555555555556;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4444444444444444;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9974874371859297;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002512562814070352;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c80000))) ) ) {
            result[0] += 0;
            result[1] += 0.6666666666666666;
            result[2] += 0;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.6923076923076923;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3076923076923077;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0.06435643564356436;
            result[1] += 0.3217821782178218;
            result[2] += 0;
            result[3] += 0.0049504950495049506;
            result[4] += 0.594059405940594;
            result[5] += 0.01485148514851485;
          } else {
            result[0] += 0.8718173836698859;
            result[1] += 0.011413520632133451;
            result[2] += 0.0008779631255487271;
            result[3] += 0.03160667251975418;
            result[4] += 0.06672519754170327;
            result[5] += 0.017559262510974543;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0.019455252918287938;
            result[1] += 0;
            result[2] += 0.13229571984435798;
            result[3] += 0.4669260700389105;
            result[4] += 0.023346303501945526;
            result[5] += 0.35797665369649806;
          } else {
            result[0] += 0.27745664739884396;
            result[1] += 0.005780346820809249;
            result[2] += 0.508670520231214;
            result[3] += 0.052023121387283246;
            result[4] += 0.06936416184971099;
            result[5] += 0.08670520231213874;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.6;
            result[2] += 0.2;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.08333333333333333;
            result[4] += 0.05555555555555555;
            result[5] += 0.8611111111111112;
          } else {
            result[0] += 0;
            result[1] += 0.6666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c90000))) ) ) {
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
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2222222222222222;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0.1111111111111111;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0.047619047619047616;
            result[1] += 0.07142857142857142;
            result[2] += 0.38095238095238093;
            result[3] += 0.30952380952380953;
            result[4] += 0;
            result[5] += 0.19047619047619047;
          } else {
            result[0] += 0.03886925795053004;
            result[1] += 0.00353356890459364;
            result[2] += 0.7597173144876326;
            result[3] += 0.16607773851590107;
            result[4] += 0.00353356890459364;
            result[5] += 0.02826855123674912;
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
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8181818181818182;
            result[3] += 0.18181818181818182;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9426229508196722;
            result[3] += 0.05737704918032787;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9887133182844243;
            result[3] += 0.011286681715575621;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42e20000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0.010830324909747292;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0036101083032490976;
            result[4] += 0.9675090252707581;
            result[5] += 0.018050541516245487;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0.3333333333333333;
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
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0.08823529411764706;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.029411764705882353;
            result[4] += 0.38235294117647056;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.037089871611982884;
            result[4] += 0.024251069900142655;
            result[5] += 0.9386590584878745;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0.9605263157894737;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.039473684210526314;
            result[5] += 0;
          } else {
            result[0] += 0.0034965034965034965;
            result[1] += 0.02097902097902098;
            result[2] += 0.0017482517482517483;
            result[3] += 0.38636363636363635;
            result[4] += 0.08741258741258741;
            result[5] += 0.5;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42420000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a70000))) ) ) {
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
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42960000))) ) ) {
            result[0] += 0;
            result[1] += 0.1956521739130435;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8043478260869565;
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
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 0.8163606010016694;
            result[1] += 0.022537562604340568;
            result[2] += 0.005843071786310518;
            result[3] += 0.034223706176961605;
            result[4] += 0.10350584307178631;
            result[5] += 0.017529215358931552;
          } else {
            result[0] += 0.03125;
            result[1] += 0.96875;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0.029535864978902957;
            result[1] += 0.008438818565400845;
            result[2] += 0.3122362869198313;
            result[3] += 0.29113924050632917;
            result[4] += 0.021097046413502112;
            result[5] += 0.3375527426160338;
          } else {
            result[0] += 0.6774193548387097;
            result[1] += 0.021505376344086027;
            result[2] += 0.15053763440860218;
            result[3] += 0.04301075268817205;
            result[4] += 0.10752688172043012;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ad0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d30000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3411764705882353;
            result[3] += 0.5411764705882353;
            result[4] += 0;
            result[5] += 0.11764705882352941;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42fd0000))) ) ) {
            result[0] += 0.07142857142857142;
            result[1] += 0;
            result[2] += 0.6428571428571429;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.2857142857142857;
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
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42e10000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0.007042253521126761;
            result[1] += 0;
            result[2] += 0.5845070422535211;
            result[3] += 0.31690140845070425;
            result[4] += 0;
            result[5] += 0.09154929577464789;
          } else {
            result[0] += 0.008403361344537815;
            result[1] += 0;
            result[2] += 0.8403361344537815;
            result[3] += 0.15126050420168066;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0.75;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.022900763358778626;
            result[1] += 0;
            result[2] += 0.9312977099236641;
            result[3] += 0.030534351145038167;
            result[4] += 0;
            result[5] += 0.015267175572519083;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b90000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42af0000))) ) ) {
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
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9552238805970149;
            result[3] += 0.04477611940298507;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ef0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9710144927536232;
            result[3] += 0.028985507246376812;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.047619047619047616;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8095238095238095;
            result[5] += 0.14285714285714285;
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
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x427a0000))) ) ) {
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
            result[3] += 0.02844311377245509;
            result[4] += 0.010479041916167664;
            result[5] += 0.9610778443113772;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0.10491803278688525;
            result[1] += 0.04262295081967213;
            result[2] += 0;
            result[3] += 0.13114754098360656;
            result[4] += 0.1377049180327869;
            result[5] += 0.5836065573770491;
          } else {
            result[0] += 0.0045662100456621;
            result[1] += 0;
            result[2] += 0.1050228310502283;
            result[3] += 0.6529680365296804;
            result[4] += 0;
            result[5] += 0.2374429223744292;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b80000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x423a0000))) ) ) {
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
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.1;
            result[1] += 0.9;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0.1796116504854369;
            result[1] += 0.0825242718446602;
            result[2] += 0;
            result[3] += 0.014563106796116505;
            result[4] += 0.6941747572815534;
            result[5] += 0.02912621359223301;
          } else {
            result[0] += 0.8665496049165935;
            result[1] += 0.0228270412642669;
            result[2] += 0.01141352063213345;
            result[3] += 0.0228270412642669;
            result[4] += 0.043898156277436345;
            result[5] += 0.0324846356453029;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0.029508196721311476;
            result[1] += 0.006557377049180328;
            result[2] += 0.05245901639344262;
            result[3] += 0.4098360655737705;
            result[4] += 0.06229508196721312;
            result[5] += 0.43934426229508194;
          } else {
            result[0] += 0.24404761904761907;
            result[1] += 0.03571428571428572;
            result[2] += 0.4821428571428572;
            result[3] += 0.10714285714285715;
            result[4] += 0.04761904761904762;
            result[5] += 0.08333333333333334;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
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
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42940000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0425531914893617;
            result[1] += 0;
            result[2] += 0.0425531914893617;
            result[3] += 0.10638297872340426;
            result[4] += 0.06382978723404255;
            result[5] += 0.7446808510638298;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0.5454545454545454;
            result[2] += 0.09090909090909091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.36363636363636365;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.24637681159420294;
            result[3] += 0.6376811594202899;
            result[4] += 0;
            result[5] += 0.11594202898550726;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.10000000000000002;
            result[1] += 0;
            result[2] += 0.7000000000000001;
            result[3] += 0.12500000000000003;
            result[4] += 0.07500000000000001;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d30000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9166666666666666;
            result[3] += 0.08333333333333333;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4375;
            result[3] += 0.5625;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.975;
            result[3] += 0.025;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0.09090909090909091;
            result[1] += 0;
            result[2] += 0.36363636363636365;
            result[3] += 0.5454545454545454;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.010135135135135136;
            result[1] += 0;
            result[2] += 0.9256756756756757;
            result[3] += 0.060810810810810814;
            result[4] += 0;
            result[5] += 0.0033783783783783786;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9810606060606061;
            result[3] += 0.015151515151515152;
            result[4] += 0;
            result[5] += 0.003787878787878788;
          }
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ca0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9914163090128756;
            result[5] += 0.008583690987124463;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.42105263157894735;
            result[5] += 0.5789473684210527;
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
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8571428571428571;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0029542097488921715;
            result[3] += 0.011816838995568686;
            result[4] += 0.014771048744460856;
            result[5] += 0.9704579025110783;
          }
        } else {
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
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42810000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.9555555555555556;
            result[1] += 0.022222222222222223;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.022222222222222223;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0.045454545454545456;
            result[2] += 0;
            result[3] += 0.15454545454545454;
            result[4] += 0.13636363636363635;
            result[5] += 0.6636363636363637;
          } else {
            result[0] += 0.012012012012012014;
            result[1] += 0.0030030030030030034;
            result[2] += 0.05105105105105106;
            result[3] += 0.5285285285285286;
            result[4] += 0.027027027027027032;
            result[5] += 0.37837837837837845;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42e50000))) ) ) {
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
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428a0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0.1342281879194631;
            result[1] += 0.10738255033557047;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6912751677852349;
            result[5] += 0.06711409395973154;
          } else {
            result[0] += 0.7678883071553229;
            result[1] += 0.02443280977312391;
            result[2] += 0.0034904013961605585;
            result[3] += 0.03664921465968586;
            result[4] += 0.11518324607329843;
            result[5] += 0.05235602094240838;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0.009316770186335404;
            result[1] += 0.009316770186335404;
            result[2] += 0.12111801242236025;
            result[3] += 0.562111801242236;
            result[4] += 0.046583850931677016;
            result[5] += 0.2515527950310559;
          } else {
            result[0] += 0.23809523809523808;
            result[1] += 0.07936507936507936;
            result[2] += 0.455026455026455;
            result[3] += 0.12698412698412698;
            result[4] += 0.07407407407407407;
            result[5] += 0.026455026455026454;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0.9745916515426497;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.003629764065335753;
            result[4] += 0.021778584392014518;
            result[5] += 0;
          } else {
            result[0] += 0.1927710843373494;
            result[1] += 0;
            result[2] += 0.25301204819277107;
            result[3] += 0.0963855421686747;
            result[4] += 0.1927710843373494;
            result[5] += 0.26506024096385544;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0.051829268292682924;
            result[1] += 0;
            result[2] += 0.698170731707317;
            result[3] += 0.18597560975609756;
            result[4] += 0;
            result[5] += 0.06402439024390244;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9758620689655173;
            result[3] += 0.015517241379310346;
            result[4] += 0;
            result[5] += 0.008620689655172415;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0.003703703703703704;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.011111111111111112;
            result[4] += 0.9740740740740741;
            result[5] += 0.011111111111111112;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0.7444444444444445;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.25555555555555554;
            result[5] += 0;
          } else {
            result[0] += 0.016666666666666666;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.016666666666666666;
            result[4] += 0.18333333333333332;
            result[5] += 0.7833333333333333;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8;
            result[5] += 0.2;
          } else {
            result[0] += 0;
            result[1] += 0.0010482180293501049;
            result[2] += 0;
            result[3] += 0.05241090146750524;
            result[4] += 0.0429769392033543;
            result[5] += 0.9035639412997903;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0.0851063829787234;
            result[1] += 0.0425531914893617;
            result[2] += 0;
            result[3] += 0.1702127659574468;
            result[4] += 0.5957446808510638;
            result[5] += 0.10638297872340426;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.25316455696202533;
            result[4] += 0.12658227848101267;
            result[5] += 0.620253164556962;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42620000))) ) ) {
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0.17647058823529413;
            result[1] += 0.22549019607843138;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5882352941176471;
            result[5] += 0.00980392156862745;
          } else {
            result[0] += 0.8347910592808552;
            result[1] += 0.038872691933916424;
            result[2] += 0.003887269193391642;
            result[3] += 0.03206997084548105;
            result[4] += 0.052478134110787174;
            result[5] += 0.037900874635568516;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0.030534351145038167;
            result[1] += 0.02480916030534351;
            result[2] += 0.16412213740458015;
            result[3] += 0.46564885496183206;
            result[4] += 0.01717557251908397;
            result[5] += 0.29770992366412213;
          } else {
            result[0] += 0.8121212121212121;
            result[1] += 0.006060606060606061;
            result[2] += 0.08484848484848485;
            result[3] += 0.04242424242424243;
            result[4] += 0.048484848484848485;
            result[5] += 0.006060606060606061;
          }
        }
      }
    }
  } else {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1978021978021978;
            result[3] += 0.6923076923076923;
            result[4] += 0;
            result[5] += 0.10989010989010989;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6129032258064517;
            result[3] += 0.19354838709677422;
            result[4] += 0.06451612903225808;
            result[5] += 0.12903225806451615;
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
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.43902439024390244;
            result[3] += 0.36585365853658536;
            result[4] += 0;
            result[5] += 0.1951219512195122;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7971014492753623;
            result[3] += 0.2028985507246377;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9519230769230769;
            result[3] += 0.028846153846153848;
            result[4] += 0;
            result[5] += 0.019230769230769232;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a70000))) ) ) {
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
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42d60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0.3333333333333333;
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
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0.00510204081632653;
            result[1] += 0;
            result[2] += 0.8928571428571429;
            result[3] += 0.08163265306122448;
            result[4] += 0;
            result[5] += 0.02040816326530612;
          } else {
            result[0] += 0.011560693641618497;
            result[1] += 0;
            result[2] += 0.9788053949903661;
            result[3] += 0.007707129094412331;
            result[4] += 0;
            result[5] += 0.0019267822736030828;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42e30000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42900000))) ) ) {
            result[0] += 0.007633587786259542;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9847328244274809;
            result[5] += 0.007633587786259542;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5384615384615384;
            result[5] += 0.46153846153846156;
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
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.020172910662824207;
            result[4] += 0.023054755043227664;
            result[5] += 0.9567723342939481;
          } else {
            result[0] += 0;
            result[1] += 0.06944444444444445;
            result[2] += 0;
            result[3] += 0.3055555555555556;
            result[4] += 0.09722222222222222;
            result[5] += 0.5277777777777778;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0.17763157894736842;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.07236842105263158;
            result[4] += 0.20065789473684212;
            result[5] += 0.5493421052631579;
          } else {
            result[0] += 0;
            result[1] += 0.004032258064516129;
            result[2] += 0.004032258064516129;
            result[3] += 0.6411290322580645;
            result[4] += 0.008064516129032258;
            result[5] += 0.34274193548387094;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42620000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.03278688524590164;
            result[1] += 0.9508196721311475;
            result[2] += 0;
            result[3] += 0.01639344262295082;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42890000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0.05517241379310345;
            result[1] += 0.1103448275862069;
            result[2] += 0;
            result[3] += 0.013793103448275862;
            result[4] += 0.7931034482758621;
            result[5] += 0.027586206896551724;
          } else {
            result[0] += 0.03448275862068966;
            result[1] += 0.810344827586207;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.15517241379310348;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0.8921658986175116;
            result[1] += 0.01013824884792627;
            result[2] += 0.0018433179723502306;
            result[3] += 0.014746543778801845;
            result[4] += 0.07557603686635946;
            result[5] += 0.005529953917050692;
          } else {
            result[0] += 0.16341463414634147;
            result[1] += 0.007317073170731708;
            result[2] += 0.22439024390243903;
            result[3] += 0.2975609756097561;
            result[4] += 0.02926829268292683;
            result[5] += 0.2780487804878049;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d80000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b60000))) ) ) {
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
            result[3] += 0.9722222222222222;
            result[4] += 0;
            result[5] += 0.027777777777777776;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42960000))) ) ) {
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
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
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
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.875;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.125;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.875;
            result[4] += 0;
            result[5] += 0.125;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5670103092783505;
            result[3] += 0.28865979381443296;
            result[4] += 0;
            result[5] += 0.14432989690721648;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9130434782608695;
            result[3] += 0.057971014492753624;
            result[4] += 0;
            result[5] += 0.028985507246376812;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2857142857142857;
            result[3] += 0;
            result[4] += 0.2857142857142857;
            result[5] += 0.42857142857142855;
          } else {
            result[0] += 0.012738853503184714;
            result[1] += 0;
            result[2] += 0.821656050955414;
            result[3] += 0.15286624203821655;
            result[4] += 0;
            result[5] += 0.012738853503184714;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a30000))) ) ) {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.004552352048558422;
            result[1] += 0;
            result[2] += 0.9742033383915023;
            result[3] += 0.01669195751138088;
            result[4] += 0;
            result[5] += 0.004552352048558422;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42300000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
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
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0.004524886877828055;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9773755656108597;
            result[5] += 0.01809954751131222;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.16666666666666666;
            result[4] += 0.3333333333333333;
            result[5] += 0.5;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0.06382978723404255;
            result[1] += 0.02127659574468085;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8085106382978723;
            result[5] += 0.10638297872340426;
          } else {
            result[0] += 0.05795574288724974;
            result[1] += 0.003161222339304531;
            result[2] += 0.003161222339304531;
            result[3] += 0.040042149631190724;
            result[4] += 0.04952581664910432;
            result[5] += 0.8461538461538461;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.011111111111111112;
            result[3] += 0.14444444444444443;
            result[4] += 0.1;
            result[5] += 0.7444444444444445;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7120622568093385;
            result[4] += 0;
            result[5] += 0.28793774319066145;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b90000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b10000))) ) ) {
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
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
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
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0.053475935828877004;
            result[1] += 0.2887700534759358;
            result[2] += 0;
            result[3] += 0.0106951871657754;
            result[4] += 0.6203208556149733;
            result[5] += 0.026737967914438502;
          } else {
            result[0] += 0.8484270734032412;
            result[1] += 0.027645376549094377;
            result[2] += 0.002859866539561487;
            result[3] += 0.028598665395614873;
            result[4] += 0.07626310772163966;
            result[5] += 0.016205910390848427;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0.01567398119122257;
            result[1] += 0.047021943573667714;
            result[2] += 0.21003134796238246;
            result[3] += 0.38557993730407525;
            result[4] += 0.03761755485893417;
            result[5] += 0.30407523510971785;
          } else {
            result[0] += 0.8067226890756303;
            result[1] += 0;
            result[2] += 0.058823529411764705;
            result[3] += 0;
            result[4] += 0.1092436974789916;
            result[5] += 0.025210084033613446;
          }
        }
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.04878048780487805;
            result[3] += 0.8048780487804879;
            result[4] += 0;
            result[5] += 0.14634146341463414;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4411764705882353;
            result[3] += 0.5294117647058824;
            result[4] += 0;
            result[5] += 0.029411764705882353;
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
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42780000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5666666666666667;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.23333333333333334;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9512195121951219;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.04878048780487805;
          }
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.15384615384615385;
            result[1] += 0;
            result[2] += 0.23076923076923078;
            result[3] += 0.5384615384615384;
            result[4] += 0;
            result[5] += 0.07692307692307693;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8333333333333334;
            result[3] += 0.05555555555555555;
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
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3;
            result[3] += 0.65;
            result[4] += 0;
            result[5] += 0.05;
          } else {
            result[0] += 0.043478260869565216;
            result[1] += 0;
            result[2] += 0.8260869565217391;
            result[3] += 0.13043478260869565;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0.006031363088057901;
            result[1] += 0;
            result[2] += 0.9577804583835947;
            result[3] += 0.03618817852834741;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42420000))) ) ) {
            result[0] += 0;
            result[1] += 0.9;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1;
            result[5] += 0;
          } else {
            result[0] += 0.008264462809917356;
            result[1] += 0.01652892561983471;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9338842975206612;
            result[5] += 0.04132231404958678;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0.058823529411764705;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.058823529411764705;
            result[4] += 0.35294117647058826;
            result[5] += 0.5294117647058824;
          } else {
            result[0] += 0.8636363636363636;
            result[1] += 0;
            result[2] += 0.09090909090909091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.045454545454545456;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0.2125;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5625;
            result[5] += 0.225;
          } else {
            result[0] += 0.001160092807424594;
            result[1] += 0.001160092807424594;
            result[2] += 0.004640371229698376;
            result[3] += 0.04176334106728538;
            result[4] += 0.0382830626450116;
            result[5] += 0.9129930394431555;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3125;
            result[4] += 0.010416666666666666;
            result[5] += 0.6770833333333334;
          } else {
            result[0] += 0.013605442176870748;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7482993197278912;
            result[4] += 0.006802721088435374;
            result[5] += 0.23129251700680273;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x421a0000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.13675213675213677;
            result[2] += 0.03418803418803419;
            result[3] += 0.042735042735042736;
            result[4] += 0.6923076923076923;
            result[5] += 0.09401709401709402;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0.004705882352941175;
            result[1] += 0.9882352941176469;
            result[2] += 0;
            result[3] += 0.004705882352941175;
            result[4] += 0.0023529411764705876;
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
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0.06578947368421052;
            result[1] += 0.4473684210526316;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.40789473684210525;
            result[5] += 0.07894736842105263;
          } else {
            result[0] += 0.8672489082969432;
            result[1] += 0.013100436681222707;
            result[2] += 0.0017467248908296944;
            result[3] += 0.016593886462882096;
            result[4] += 0.05502183406113537;
            result[5] += 0.0462882096069869;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0.05056179775280899;
            result[1] += 0.033707865168539325;
            result[2] += 0.12359550561797752;
            result[3] += 0.38764044943820225;
            result[4] += 0.02247191011235955;
            result[5] += 0.38202247191011235;
          } else {
            result[0] += 0.6842105263157895;
            result[1] += 0.017543859649122806;
            result[2] += 0.07017543859649122;
            result[3] += 0.03508771929824561;
            result[4] += 0.19298245614035087;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2222222222222222;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.7777777777777778;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07142857142857142;
            result[3] += 0.7222222222222222;
            result[4] += 0;
            result[5] += 0.20634920634920634;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11764705882352941;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8823529411764706;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5961538461538461;
            result[3] += 0.40384615384615385;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42e90000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0.030303030303030307;
            result[1] += 0;
            result[2] += 0.393939393939394;
            result[3] += 0.3636363636363637;
            result[4] += 0.060606060606060615;
            result[5] += 0.15151515151515155;
          } else {
            result[0] += 0.02857142857142857;
            result[1] += 0;
            result[2] += 0.780952380952381;
            result[3] += 0.17142857142857143;
            result[4] += 0;
            result[5] += 0.01904761904761905;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0.9473684210526315;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05263157894736842;
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
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d30000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13636363636363635;
            result[3] += 0.6818181818181818;
            result[4] += 0;
            result[5] += 0.18181818181818182;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c60000))) ) ) {
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
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42e70000))) ) ) {
            result[0] += 0.006944444444444444;
            result[1] += 0.003472222222222222;
            result[2] += 0.8333333333333334;
            result[3] += 0.1388888888888889;
            result[4] += 0;
            result[5] += 0.017361111111111112;
          } else {
            result[0] += 0.6;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.001692047377326565;
            result[1] += 0;
            result[2] += 0.9712351945854484;
            result[3] += 0.023688663282571912;
            result[4] += 0;
            result[5] += 0.00338409475465313;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b60000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0.010948905109489052;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9525547445255474;
            result[5] += 0.0364963503649635;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.25;
            result[4] += 0.25;
            result[5] += 0.5;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
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
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5238095238095238;
            result[5] += 0.47619047619047616;
          } else {
            result[0] += 0.0028089887640449437;
            result[1] += 0.0014044943820224719;
            result[2] += 0.0028089887640449437;
            result[3] += 0.025280898876404494;
            result[4] += 0.012640449438202247;
            result[5] += 0.9550561797752809;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0.971830985915493;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.028169014084507043;
            result[5] += 0;
          } else {
            result[0] += 0.01565217391304348;
            result[1] += 0.006956521739130435;
            result[2] += 0.006956521739130435;
            result[3] += 0.38608695652173913;
            result[4] += 0.07652173913043478;
            result[5] += 0.5078260869565218;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42aa0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ac0000))) ) ) {
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
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x429a0000))) ) ) {
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
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0.08426966292134831;
            result[1] += 0.23595505617977527;
            result[2] += 0;
            result[3] += 0.011235955056179775;
            result[4] += 0.651685393258427;
            result[5] += 0.016853932584269662;
          } else {
            result[0] += 0.8925143953934741;
            result[1] += 0.008637236084452975;
            result[2] += 0.012476007677543186;
            result[3] += 0.019193857965451054;
            result[4] += 0.04894433781190019;
            result[5] += 0.018234165067178502;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0.03237410071942446;
            result[1] += 0.017985611510791366;
            result[2] += 0.29856115107913667;
            result[3] += 0.3345323741007194;
            result[4] += 0.09352517985611511;
            result[5] += 0.22302158273381295;
          } else {
            result[0] += 0.6956521739130436;
            result[1] += 0;
            result[2] += 0.11594202898550726;
            result[3] += 0;
            result[4] += 0.1739130434782609;
            result[5] += 0.014492753623188408;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.045454545454545456;
            result[3] += 0.4090909090909091;
            result[4] += 0.045454545454545456;
            result[5] += 0.5;
          } else {
            result[0] += 0.045454545454545456;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.09090909090909091;
            result[4] += 0;
            result[5] += 0.8636363636363636;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8888888888888888;
            result[4] += 0;
            result[5] += 0.1111111111111111;
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
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42d30000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0.2222222222222222;
            result[2] += 0;
            result[3] += 0.3333333333333333;
            result[4] += 0.2222222222222222;
            result[5] += 0.2222222222222222;
          } else {
            result[0] += 0.45454545454545453;
            result[1] += 0;
            result[2] += 0.5454545454545454;
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
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0.030303030303030304;
            result[1] += 0;
            result[2] += 0.21212121212121213;
            result[3] += 0.7272727272727273;
            result[4] += 0;
            result[5] += 0.030303030303030304;
          } else {
            result[0] += 0.12195121951219513;
            result[1] += 0;
            result[2] += 0.6219512195121952;
            result[3] += 0.1829268292682927;
            result[4] += 0;
            result[5] += 0.07317073170731708;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0.023809523809523808;
            result[1] += 0;
            result[2] += 0.8055555555555556;
            result[3] += 0.15873015873015872;
            result[4] += 0;
            result[5] += 0.011904761904761904;
          } else {
            result[0] += 0.5454545454545454;
            result[1] += 0;
            result[2] += 0.45454545454545453;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7297297297297297;
            result[3] += 0.2702702702702703;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9285714285714286;
            result[3] += 0.05612244897959184;
            result[4] += 0;
            result[5] += 0.015306122448979591;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a40000))) ) ) {
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
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42460000))) ) ) {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.004807692307692309;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9807692307692308;
            result[5] += 0.014423076923076926;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0.868421052631579;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.13157894736842105;
            result[5] += 0;
          } else {
            result[0] += 0.07368421052631578;
            result[1] += 0.010526315789473684;
            result[2] += 0;
            result[3] += 0.09473684210526316;
            result[4] += 0.4631578947368421;
            result[5] += 0.35789473684210527;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.06818181818181818;
            result[4] += 0.7045454545454546;
            result[5] += 0.22727272727272727;
          } else {
            result[0] += 0;
            result[1] += 0.006789524733268671;
            result[2] += 0;
            result[3] += 0.06304558680892337;
            result[4] += 0.05722599418040737;
            result[5] += 0.8729388942774006;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.015873015873015872;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.6507936507936508;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.024242424242424242;
            result[3] += 0.8;
            result[4] += 0;
            result[5] += 0.17575757575757575;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42200000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.13043478260869565;
            result[2] += 0.043478260869565216;
            result[3] += 0.021739130434782608;
            result[4] += 0.7934782608695652;
            result[5] += 0.010869565217391304;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0.9929742388758782;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.00702576112412178;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0.23595505617977527;
            result[1] += 0.3707865168539326;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.38202247191011235;
            result[5] += 0.011235955056179775;
          } else {
            result[0] += 0.8877358490566037;
            result[1] += 0.007547169811320755;
            result[2] += 0.0018867924528301887;
            result[3] += 0.035849056603773584;
            result[4] += 0.05188679245283019;
            result[5] += 0.01509433962264151;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0.03986710963455149;
            result[1] += 0.07973421926910298;
            result[2] += 0.3222591362126246;
            result[3] += 0.3023255813953488;
            result[4] += 0.026578073089700997;
            result[5] += 0.2292358803986711;
          } else {
            result[0] += 0.7628865979381444;
            result[1] += 0;
            result[2] += 0.12371134020618559;
            result[3] += 0;
            result[4] += 0.10309278350515465;
            result[5] += 0.010309278350515465;
          }
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42dc0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0684931506849315;
            result[3] += 0.2602739726027397;
            result[4] += 0.0958904109589041;
            result[5] += 0.5753424657534246;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.11764705882352941;
            result[1] += 0;
            result[2] += 0.4117647058823529;
            result[3] += 0.47058823529411764;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c00000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2857142857142857;
            result[3] += 0.07142857142857142;
            result[4] += 0;
            result[5] += 0.6428571428571429;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9298245614035088;
            result[3] += 0.03508771929824561;
            result[4] += 0;
            result[5] += 0.03508771929824561;
          } else {
            result[0] += 0.6551724137931034;
            result[1] += 0;
            result[2] += 0.3448275862068966;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42da0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.275;
            result[3] += 0.7;
            result[4] += 0;
            result[5] += 0.025;
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
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0;
            result[1] += 0.009900990099009901;
            result[2] += 0.8514851485148515;
            result[3] += 0.1188118811881188;
            result[4] += 0;
            result[5] += 0.019801980198019802;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5789473684210527;
            result[3] += 0.42105263157894735;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0.04;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0.16;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0030441400304414;
            result[1] += 0;
            result[2] += 0.9710806697108066;
            result[3] += 0.0258751902587519;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d20000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0.00847457627118644;
            result[1] += 0.01694915254237288;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9703389830508474;
            result[5] += 0.00423728813559322;
          } else {
            result[0] += 0;
            result[1] += 0.044444444444444446;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5333333333333333;
            result[5] += 0.4222222222222222;
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
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42420000))) ) ) {
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
            result[3] += 0.015256588072122053;
            result[4] += 0.008321775312066574;
            result[5] += 0.9764216366158114;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0.373134328358209;
            result[1] += 0.029850746268656716;
            result[2] += 0;
            result[3] += 0.04477611940298507;
            result[4] += 0.4626865671641791;
            result[5] += 0.08955223880597014;
          } else {
            result[0] += 0.0035211267605633804;
            result[1] += 0.007042253521126761;
            result[2] += 0.01056338028169014;
            result[3] += 0.3485915492957746;
            result[4] += 0.04225352112676056;
            result[5] += 0.5880281690140845;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x423a0000))) ) ) {
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
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 0.375;
            result[2] += 0;
            result[3] += 0.375;
            result[4] += 0.25;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9975429975429976;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002457002457002457;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0.7085889570552149;
            result[1] += 0.0245398773006135;
            result[2] += 0.006134969325153375;
            result[3] += 0.0245398773006135;
            result[4] += 0.19938650306748468;
            result[5] += 0.036809815950920255;
          } else {
            result[0] += 0.045372050816696916;
            result[1] += 0.0018148820326678765;
            result[2] += 0.14519056261343014;
            result[3] += 0.41742286751361163;
            result[4] += 0.09074410163339383;
            result[5] += 0.29945553539019965;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42980000))) ) ) {
            result[0] += 0.052631578947368425;
            result[1] += 0.5065789473684211;
            result[2] += 0.013157894736842106;
            result[3] += 0.006578947368421053;
            result[4] += 0.4144736842105264;
            result[5] += 0.006578947368421053;
          } else {
            result[0] += 0.825147347740668;
            result[1] += 0.004911591355599214;
            result[2] += 0.07956777996070727;
            result[3] += 0.03143418467583497;
            result[4] += 0.03143418467583497;
            result[5] += 0.0275049115913556;
          }
        }
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.23809523809523808;
            result[3] += 0.7142857142857143;
            result[4] += 0;
            result[5] += 0.047619047619047616;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0.05555555555555555;
            result[4] += 0;
            result[5] += 0.8333333333333334;
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
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a90000))) ) ) {
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b60000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42810000))) ) ) {
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
            result[3] += 0.2857142857142857;
            result[4] += 0;
            result[5] += 0.7142857142857143;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42910000))) ) ) {
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
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.013513513513513514;
            result[1] += 0;
            result[2] += 0.8648648648648649;
            result[3] += 0.0945945945945946;
            result[4] += 0;
            result[5] += 0.02702702702702703;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0.1111111111111111;
            result[2] += 0.5555555555555556;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.007623888182973317;
            result[1] += 0;
            result[2] += 0.963151207115629;
            result[3] += 0.026683608640406607;
            result[4] += 0;
            result[5] += 0.0025412960609911056;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42e50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9956896551724138;
            result[5] += 0.004310344827586207;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.7972972972972973;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.14864864864864866;
            result[5] += 0.05405405405405406;
          } else {
            result[0] += 0.014084507042253521;
            result[1] += 0.14084507042253522;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3380281690140845;
            result[5] += 0.5070422535211268;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.002805049088359046;
            result[3] += 0.029453015427769985;
            result[4] += 0.019635343618513323;
            result[5] += 0.9481065918653576;
          } else {
            result[0] += 0.004310344827586207;
            result[1] += 0.04741379310344827;
            result[2] += 0;
            result[3] += 0.15948275862068967;
            result[4] += 0.17672413793103448;
            result[5] += 0.6120689655172413;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.4230769230769231;
            result[4] += 0.01282051282051282;
            result[5] += 0.5641025641025641;
          } else {
            result[0] += 0.007352941176470588;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8529411764705882;
            result[4] += 0;
            result[5] += 0.13970588235294118;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0.2;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8;
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
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d60000))) ) ) {
            result[0] += 0;
            result[1] += 0.13333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8666666666666667;
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
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0.16455696202531644;
            result[1] += 0.06329113924050633;
            result[2] += 0;
            result[3] += 0.02531645569620253;
            result[4] += 0.7468354430379747;
            result[5] += 0;
          } else {
            result[0] += 0.8447098976109215;
            result[1] += 0.028156996587030716;
            result[2] += 0.004266211604095563;
            result[3] += 0.031569965870307165;
            result[4] += 0.06399317406143344;
            result[5] += 0.027303754266211604;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0.034013605442176874;
            result[1] += 0.02040816326530612;
            result[2] += 0.09523809523809523;
            result[3] += 0.41496598639455784;
            result[4] += 0.09523809523809523;
            result[5] += 0.3401360544217687;
          } else {
            result[0] += 0.22388059701492538;
            result[1] += 0;
            result[2] += 0.5149253731343284;
            result[3] += 0.029850746268656716;
            result[4] += 0.13432835820895522;
            result[5] += 0.09701492537313433;
          }
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06382978723404255;
            result[3] += 0.23404255319148937;
            result[4] += 0.02127659574468085;
            result[5] += 0.6808510638297872;
          } else {
            result[0] += 0;
            result[1] += 0.046153846153846156;
            result[2] += 0.24615384615384617;
            result[3] += 0.5384615384615384;
            result[4] += 0;
            result[5] += 0.16923076923076924;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0.1;
            result[1] += 0.16666666666666666;
            result[2] += 0.6;
            result[3] += 0.03333333333333333;
            result[4] += 0.06666666666666667;
            result[5] += 0.03333333333333333;
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
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.37777777777777777;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0.2222222222222222;
          } else {
            result[0] += 0.19230769230769232;
            result[1] += 0;
            result[2] += 0.8076923076923077;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0.027522935779816515;
            result[1] += 0;
            result[2] += 0.8715596330275229;
            result[3] += 0.09174311926605505;
            result[4] += 0;
            result[5] += 0.009174311926605505;
          } else {
            result[0] += 0.625;
            result[1] += 0;
            result[2] += 0.375;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a80000))) ) ) {
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
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9252336448598131;
            result[3] += 0.07476635514018691;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9839816933638444;
            result[3] += 0.016018306636155607;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
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
            result[4] += 0.875;
            result[5] += 0.0625;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0.0136986301369863;
            result[1] += 0.0273972602739726;
            result[2] += 0;
            result[3] += 0.0273972602739726;
            result[4] += 0.3013698630136986;
            result[5] += 0.6301369863013698;
          } else {
            result[0] += 0.796875;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.046875;
            result[4] += 0.109375;
            result[5] += 0.046875;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0.021052631578947368;
            result[2] += 0;
            result[3] += 0.06315789473684211;
            result[4] += 0.5789473684210527;
            result[5] += 0.3368421052631579;
          } else {
            result[0] += 0;
            result[1] += 0.002607561929595828;
            result[2] += 0;
            result[3] += 0.02607561929595828;
            result[4] += 0.0469361147327249;
            result[5] += 0.924380704041721;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.006097560975609756;
            result[3] += 0.2804878048780488;
            result[4] += 0.024390243902439025;
            result[5] += 0.6890243902439024;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.796875;
            result[4] += 0.010416666666666666;
            result[5] += 0.19270833333333334;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0.08;
            result[1] += 0.128;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.792;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8787878787878788;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.12121212121212122;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0.875;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.125;
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
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0.9266227657572906;
            result[1] += 0.008466603951081843;
            result[2] += 0.004703668861712135;
            result[3] += 0.011288805268109126;
            result[4] += 0.04421448730009407;
            result[5] += 0.004703668861712135;
          } else {
            result[0] += 0.2463768115942029;
            result[1] += 0.15942028985507245;
            result[2] += 0.10144927536231885;
            result[3] += 0.08695652173913043;
            result[4] += 0.2028985507246377;
            result[5] += 0.2028985507246377;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e30000))) ) ) {
            result[0] += 0.04861111111111111;
            result[1] += 0;
            result[2] += 0.2743055555555556;
            result[3] += 0.3298611111111111;
            result[4] += 0.04861111111111111;
            result[5] += 0.2986111111111111;
          } else {
            result[0] += 0.8461538461538461;
            result[1] += 0;
            result[2] += 0.057692307692307696;
            result[3] += 0;
            result[4] += 0.09615384615384616;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.028985507246376812;
            result[3] += 0.07246376811594203;
            result[4] += 0.014492753623188406;
            result[5] += 0.8840579710144928;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.043478260869565216;
            result[3] += 0.30434782608695654;
            result[4] += 0;
            result[5] += 0.6521739130434783;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426c0000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2368421052631579;
            result[3] += 0.605263157894737;
            result[4] += 0.026315789473684213;
            result[5] += 0.13157894736842107;
          } else {
            result[0] += 0.021739130434782608;
            result[1] += 0;
            result[2] += 0.717391304347826;
            result[3] += 0.13043478260869565;
            result[4] += 0.021739130434782608;
            result[5] += 0.10869565217391304;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5714285714285714;
            result[3] += 0.42857142857142855;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.8125;
            result[1] += 0;
            result[2] += 0.0625;
            result[3] += 0;
            result[4] += 0.125;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8;
            result[4] += 0;
            result[5] += 0.2;
          } else {
            result[0] += 0.010169491525423728;
            result[1] += 0;
            result[2] += 0.8135593220338984;
            result[3] += 0.15932203389830507;
            result[4] += 0;
            result[5] += 0.01694915254237288;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42de0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9411764705882353;
            result[3] += 0.058823529411764705;
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
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9306930693069307;
            result[3] += 0.0594059405940594;
            result[4] += 0;
            result[5] += 0.009900990099009901;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9920477137176938;
            result[3] += 0.007952286282306162;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x421e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.75;
            result[5] += 0.25;
          } else {
            result[0] += 0.004098360655737705;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9959016393442623;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.8541666666666666;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.08333333333333333;
            result[5] += 0.0625;
          } else {
            result[0] += 0.04878048780487805;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.24390243902439024;
            result[5] += 0.7073170731707317;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0.0015698587127158557;
            result[2] += 0;
            result[3] += 0.006279434850863423;
            result[4] += 0.03139717425431711;
            result[5] += 0.9607535321821036;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.10714285714285714;
            result[4] += 0.23214285714285715;
            result[5] += 0.6607142857142857;
          } else {
            result[0] += 0;
            result[1] += 0.013986013986013986;
            result[2] += 0.0034965034965034965;
            result[3] += 0.5034965034965035;
            result[4] += 0.027972027972027972;
            result[5] += 0.45104895104895104;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0.7698412698412699;
            result[1] += 0.03015873015873016;
            result[2] += 0.004761904761904762;
            result[3] += 0.01904761904761905;
            result[4] += 0.15793650793650793;
            result[5] += 0.018253968253968255;
          } else {
            result[0] += 0.04166666666666667;
            result[1] += 0.8541666666666667;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.10416666666666669;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0.04332129963898917;
            result[1] += 0.05054151624548736;
            result[2] += 0.07942238267148015;
            result[3] += 0.3935018050541516;
            result[4] += 0.07220216606498195;
            result[5] += 0.36101083032490977;
          } else {
            result[0] += 0.33766233766233766;
            result[1] += 0;
            result[2] += 0.5151515151515151;
            result[3] += 0.08225108225108226;
            result[4] += 0;
            result[5] += 0.06493506493506493;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b90000))) ) ) {
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
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0.26666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6;
            result[5] += 0.13333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05263157894736842;
            result[5] += 0.9473684210526315;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.041666666666666664;
            result[3] += 0.8958333333333334;
            result[4] += 0;
            result[5] += 0.0625;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2222222222222222;
            result[3] += 0.2777777777777778;
            result[4] += 0;
            result[5] += 0.5;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.0625;
            result[1] += 0;
            result[2] += 0.1875;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.75;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42e10000))) ) ) {
            result[0] += 0;
            result[1] += 0.012658227848101266;
            result[2] += 0.759493670886076;
            result[3] += 0.20253164556962025;
            result[4] += 0;
            result[5] += 0.02531645569620253;
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
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x423a0000))) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42e60000))) ) ) {
            result[0] += 0.14285714285714288;
            result[1] += 0;
            result[2] += 0.4285714285714286;
            result[3] += 0.14285714285714288;
            result[4] += 0;
            result[5] += 0.28571428571428575;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0.004889975550122249;
            result[1] += 0;
            result[2] += 0.8801955990220048;
            result[3] += 0.10513447432762836;
            result[4] += 0;
            result[5] += 0.009779951100244499;
          } else {
            result[0] += 0.011235955056179775;
            result[1] += 0;
            result[2] += 0.9865168539325843;
            result[3] += 0.0022471910112359553;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42df0000))) ) ) {
            result[0] += 0.004132231404958678;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9628099173553719;
            result[5] += 0.03305785123966942;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x425a0000))) ) ) {
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
            result[3] += 0.043478260869565216;
            result[4] += 0.2608695652173913;
            result[5] += 0.6956521739130435;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0.25773195876288657;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.010309278350515464;
            result[4] += 0.4329896907216495;
            result[5] += 0.29896907216494845;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03645200486026731;
            result[4] += 0.030376670716889428;
            result[5] += 0.9331713244228432;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0.06338028169014084;
            result[1] += 0.04929577464788732;
            result[2] += 0.007042253521126761;
            result[3] += 0.14084507042253522;
            result[4] += 0.04225352112676056;
            result[5] += 0.6971830985915493;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.698019801980198;
            result[4] += 0.0049504950495049506;
            result[5] += 0.297029702970297;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42240000))) ) ) {
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
            result[3] += 0;
            result[4] += 0.9375;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42560000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.04;
            result[1] += 0.96;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0.21428571428571427;
            result[1] += 0.17293233082706766;
            result[2] += 0;
            result[3] += 0.011278195488721804;
            result[4] += 0.5338345864661654;
            result[5] += 0.06766917293233082;
          } else {
            result[0] += 0.8887795275590552;
            result[1] += 0.018700787401574808;
            result[2] += 0.0009842519685039372;
            result[3] += 0.026574803149606304;
            result[4] += 0.04724409448818898;
            result[5] += 0.01771653543307087;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42df0000))) ) ) {
            result[0] += 0.02586206896551724;
            result[1] += 0.008620689655172414;
            result[2] += 0.27873563218390807;
            result[3] += 0.3448275862068966;
            result[4] += 0.022988505747126436;
            result[5] += 0.31896551724137934;
          } else {
            result[0] += 0.7931034482758621;
            result[1] += 0;
            result[2] += 0.10344827586206896;
            result[3] += 0;
            result[4] += 0.10344827586206896;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42990000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42af0000))) ) ) {
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
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0.25;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.75;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.19047619047619047;
            result[3] += 0.8095238095238095;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1836734693877551;
            result[3] += 0.6326530612244898;
            result[4] += 0.08163265306122448;
            result[5] += 0.10204081632653061;
          } else {
            result[0] += 0;
            result[1] += 0.047619047619047616;
            result[2] += 0.5714285714285714;
            result[3] += 0.09523809523809523;
            result[4] += 0;
            result[5] += 0.2857142857142857;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8121827411167513;
            result[3] += 0.14213197969543148;
            result[4] += 0;
            result[5] += 0.04568527918781726;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0.125;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.875;
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
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cd0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9416666666666667;
            result[3] += 0.05416666666666667;
            result[4] += 0;
            result[5] += 0.004166666666666667;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9870967741935484;
            result[3] += 0.012903225806451613;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429c0000))) ) ) {
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
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426e0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42380000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9946236559139785;
            result[5] += 0.005376344086021506;
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
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x425e0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
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
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0;
            result[1] += 0.01818181818181818;
            result[2] += 0;
            result[3] += 0.12727272727272726;
            result[4] += 0.8545454545454545;
            result[5] += 0;
          } else {
            result[0] += 0.125;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0.05;
            result[4] += 0.2;
            result[5] += 0.5;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.918918918918919;
            result[5] += 0.08108108108108109;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.8;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0051635111876075735;
            result[4] += 0.025817555938037865;
            result[5] += 0.9690189328743546;
          } else {
            result[0] += 0.0035460992907801418;
            result[1] += 0.02127659574468085;
            result[2] += 0;
            result[3] += 0.09929078014184398;
            result[4] += 0.12411347517730496;
            result[5] += 0.75177304964539;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.017699115044247787;
            result[3] += 0.11504424778761062;
            result[4] += 0.04424778761061947;
            result[5] += 0.8230088495575221;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5333333333333333;
            result[4] += 0.016666666666666666;
            result[5] += 0.45;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.005555555555555556;
            result[3] += 0.8222222222222222;
            result[4] += 0;
            result[5] += 0.17222222222222222;
          }
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42500000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a60000))) ) ) {
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
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42480000))) ) ) {
            result[0] += 0;
            result[1] += 0.868421052631579;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.13157894736842105;
            result[5] += 0;
          } else {
            result[0] += 0.09259259259259259;
            result[1] += 0.018518518518518517;
            result[2] += 0;
            result[3] += 0.009259259259259259;
            result[4] += 0.8796296296296297;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0.6521739130434783;
            result[1] += 0.007246376811594203;
            result[2] += 0.028985507246376812;
            result[3] += 0.06521739130434782;
            result[4] += 0.18840579710144928;
            result[5] += 0.057971014492753624;
          } else {
            result[0] += 0.939075630252101;
            result[1] += 0.014705882352941178;
            result[2] += 0.004201680672268908;
            result[3] += 0.012605042016806725;
            result[4] += 0.027310924369747903;
            result[5] += 0.002100840336134454;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0.023668639053254437;
            result[1] += 0.023668639053254437;
            result[2] += 0.13609467455621302;
            result[3] += 0.39644970414201186;
            result[4] += 0.05325443786982249;
            result[5] += 0.3668639053254438;
          } else {
            result[0] += 0.5918367346938775;
            result[1] += 0;
            result[2] += 0.22448979591836735;
            result[3] += 0.02040816326530612;
            result[4] += 0.12244897959183673;
            result[5] += 0.04081632653061224;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0.04918032786885246;
            result[2] += 0.09836065573770492;
            result[3] += 0.6557377049180327;
            result[4] += 0;
            result[5] += 0.19672131147540983;
          } else {
            result[0] += 0.041666666666666664;
            result[1] += 0;
            result[2] += 0.6458333333333334;
            result[3] += 0.25;
            result[4] += 0.041666666666666664;
            result[5] += 0.020833333333333332;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0.2;
            result[1] += 0.2;
            result[2] += 0.2;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0.2;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8636363636363636;
            result[3] += 0.045454545454545456;
            result[4] += 0;
            result[5] += 0.09090909090909091;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2962962962962963;
            result[3] += 0.2777777777777778;
            result[4] += 0;
            result[5] += 0.42592592592592593;
          } else {
            result[0] += 0.05555555555555555;
            result[1] += 0;
            result[2] += 0.9444444444444444;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0.8;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.013071895424836602;
            result[1] += 0.0032679738562091504;
            result[2] += 0.9150326797385621;
            result[3] += 0.06427015250544663;
            result[4] += 0.0010893246187363835;
            result[5] += 0.0032679738562091504;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0.003968253968253968;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.996031746031746;
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
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428a0000))) ) ) {
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
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0.5945945945945946;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.32432432432432434;
            result[5] += 0.08108108108108109;
          } else {
            result[0] += 0.0012285012285012285;
            result[1] += 0.0036855036855036856;
            result[2] += 0;
            result[3] += 0.03562653562653563;
            result[4] += 0.04668304668304668;
            result[5] += 0.9127764127764127;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0.2930513595166163;
            result[1] += 0.021148036253776436;
            result[2] += 0.006042296072507553;
            result[3] += 0.07854984894259819;
            result[4] += 0.12386706948640483;
            result[5] += 0.4773413897280967;
          } else {
            result[0] += 0.034642032332563515;
            result[1] += 0.027713625866050813;
            result[2] += 0.09006928406466515;
            result[3] += 0.5381062355658199;
            result[4] += 0.03233256351039262;
            result[5] += 0.2771362586605081;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42910000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0.15151515151515152;
            result[1] += 0.06818181818181818;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7272727272727273;
            result[5] += 0.05303030303030303;
          } else {
            result[0] += 0;
            result[1] += 0.9473684210526315;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05263157894736842;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42860000))) ) ) {
            result[0] += 0;
            result[1] += 0.9873417721518988;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.012658227848101266;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.55;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.45;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0.06666666666666667;
            result[1] += 0.06666666666666667;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8666666666666667;
            result[5] += 0;
          } else {
            result[0] += 0.9274770173646576;
            result[1] += 0.008171603677221653;
            result[2] += 0;
            result[3] += 0.01838610827374872;
            result[4] += 0.035750766087844735;
            result[5] += 0.010214504596527067;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42df0000))) ) ) {
            result[0] += 0.06701030927835051;
            result[1] += 0.010309278350515464;
            result[2] += 0.422680412371134;
            result[3] += 0.32989690721649484;
            result[4] += 0.020618556701030927;
            result[5] += 0.14948453608247422;
          } else {
            result[0] += 0.7727272727272727;
            result[1] += 0;
            result[2] += 0.11363636363636363;
            result[3] += 0.022727272727272728;
            result[4] += 0.07954545454545454;
            result[5] += 0.011363636363636364;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0.04040404040404041;
            result[2] += 0.050505050505050504;
            result[3] += 0.5353535353535354;
            result[4] += 0.04040404040404041;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0.23255813953488372;
            result[1] += 0;
            result[2] += 0.4186046511627907;
            result[3] += 0;
            result[4] += 0.13953488372093023;
            result[5] += 0.20930232558139536;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.8;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6557377049180327;
            result[3] += 0.3114754098360656;
            result[4] += 0;
            result[5] += 0.03278688524590164;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42d20000))) ) ) {
            result[0] += 0.0625;
            result[1] += 0;
            result[2] += 0.9375;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.38461538461538464;
            result[1] += 0;
            result[2] += 0.5384615384615384;
            result[3] += 0.07692307692307693;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c00000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c40000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42dc0000))) ) ) {
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
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.6;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9285714285714286;
            result[3] += 0.07142857142857142;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.883248730964467;
            result[3] += 0.1116751269035533;
            result[4] += 0;
            result[5] += 0.005076142131979695;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9530516431924883;
            result[3] += 0.046948356807511735;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9939759036144579;
            result[3] += 0.006024096385542169;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42da0000))) ) ) {
            result[0] += 0.009433962264150943;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9559748427672956;
            result[5] += 0.03459119496855346;
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
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42540000))) ) ) {
            result[0] += 0;
            result[1] += 0.7894736842105263;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.21052631578947367;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.047619047619047616;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9523809523809523;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9886877828054299;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.011312217194570135;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02472952086553323;
            result[4] += 0.01854714064914992;
            result[5] += 0.9567233384853169;
          } else {
            result[0] += 0.023255813953488372;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.17054263565891473;
            result[4] += 0.13178294573643412;
            result[5] += 0.6744186046511628;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0.07142857142857142;
            result[1] += 0.14285714285714285;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5714285714285714;
            result[5] += 0.21428571428571427;
          } else {
            result[0] += 0.022988505747126436;
            result[1] += 0;
            result[2] += 0.017241379310344827;
            result[3] += 0.3218390804597701;
            result[4] += 0.06896551724137931;
            result[5] += 0.5689655172413793;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0.743202416918429;
            result[1] += 0.045317220543806644;
            result[2] += 0.0030211480362537764;
            result[3] += 0.027190332326283987;
            result[4] += 0.10574018126888217;
            result[5] += 0.0755287009063444;
          } else {
            result[0] += 0.08015267175572519;
            result[1] += 0.003816793893129771;
            result[2] += 0.08396946564885496;
            result[3] += 0.4580152671755725;
            result[4] += 0.06679389312977099;
            result[5] += 0.30725190839694655;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0.33116883116883117;
            result[1] += 0.12987012987012986;
            result[2] += 0.07792207792207792;
            result[3] += 0.11688311688311688;
            result[4] += 0.05194805194805195;
            result[5] += 0.2922077922077922;
          } else {
            result[0] += 0.8345549738219895;
            result[1] += 0.013612565445026177;
            result[2] += 0.07329842931937172;
            result[3] += 0.013612565445026177;
            result[4] += 0.06387434554973823;
            result[5] += 0.0010471204188481676;
          }
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.875;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.23913043478260865;
            result[3] += 0.6304347826086956;
            result[4] += 0.010869565217391302;
            result[5] += 0.11956521739130432;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6;
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
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.21428571428571427;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.7857142857142857;
          } else {
            result[0] += 0.09090909090909091;
            result[1] += 0.36363636363636365;
            result[2] += 0.5454545454545454;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7272727272727273;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.2727272727272727;
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
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c10000))) ) ) {
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
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42e10000))) ) ) {
            result[0] += 0.010256410256410256;
            result[1] += 0;
            result[2] += 0.7435897435897436;
            result[3] += 0.22564102564102564;
            result[4] += 0;
            result[5] += 0.020512820512820513;
          } else {
            result[0] += 0.04950495049504951;
            result[1] += 0;
            result[2] += 0.9207920792079208;
            result[3] += 0.0297029702970297;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9310344827586208;
            result[3] += 0.060344827586206906;
            result[4] += 0;
            result[5] += 0.008620689655172415;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9977324263038548;
            result[3] += 0.0022675736961451248;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0.0049751243781094535;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9850746268656717;
            result[5] += 0.009950248756218907;
          } else {
            result[0] += 0.4696969696969697;
            result[1] += 0.030303030303030304;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3484848484848485;
            result[5] += 0.15151515151515152;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 0.07142857142857142;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07142857142857142;
            result[5] += 0.8571428571428571;
          } else {
            result[0] += 0.029411764705882353;
            result[1] += 0.17647058823529413;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6470588235294118;
            result[5] += 0.14705882352941177;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0.13636363636363635;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5909090909090909;
            result[5] += 0.2727272727272727;
          } else {
            result[0] += 0;
            result[1] += 0.008032128514056224;
            result[2] += 0;
            result[3] += 0.0428380187416332;
            result[4] += 0.03480589022757698;
            result[5] += 0.9143239625167336;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0.005952380952380952;
            result[2] += 0.011904761904761904;
            result[3] += 0.19642857142857142;
            result[4] += 0.06547619047619048;
            result[5] += 0.7202380952380952;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.009708737864077669;
            result[3] += 0.6359223300970874;
            result[4] += 0;
            result[5] += 0.35436893203883496;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
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
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0.125;
            result[1] += 0.7083333333333334;
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
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42d70000))) ) ) {
            result[0] += 0.7818471337579618;
            result[1] += 0.003980891719745223;
            result[2] += 0;
            result[3] += 0.02945859872611465;
            result[4] += 0.15047770700636942;
            result[5] += 0.03423566878980892;
          } else {
            result[0] += 0;
            result[1] += 0.9824561403508771;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.017543859649122806;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d90000))) ) ) {
            result[0] += 0.017543859649122806;
            result[1] += 0.02046783625730994;
            result[2] += 0.14327485380116958;
            result[3] += 0.3654970760233918;
            result[4] += 0.08771929824561403;
            result[5] += 0.3654970760233918;
          } else {
            result[0] += 0.632;
            result[1] += 0;
            result[2] += 0.224;
            result[3] += 0.024;
            result[4] += 0.08;
            result[5] += 0.04;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1694915254237288;
            result[3] += 0.7457627118644068;
            result[4] += 0;
            result[5] += 0.0847457627118644;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666667;
            result[3] += 0.16666666666666669;
            result[4] += 0;
            result[5] += 0.16666666666666669;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05555555555555555;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.7777777777777778;
          } else {
            result[0] += 0.15;
            result[1] += 0;
            result[2] += 0.65;
            result[3] += 0.15;
            result[4] += 0.05;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42e50000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42cf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8837209302325582;
            result[3] += 0.09302325581395349;
            result[4] += 0;
            result[5] += 0.023255813953488372;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a00000))) ) ) {
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
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a50000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.23076923076923078;
            result[3] += 0.34615384615384615;
            result[4] += 0;
            result[5] += 0.4230769230769231;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42e00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7142857142857143;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.2857142857142857;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42f00000))) ) ) {
            result[0] += 0.004694835680751175;
            result[1] += 0;
            result[2] += 0.835680751173709;
            result[3] += 0.1502347417840376;
            result[4] += 0;
            result[5] += 0.00938967136150235;
          } else {
            result[0] += 0.8333333333333334;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.008522727272727272;
            result[1] += 0;
            result[2] += 0.9659090909090909;
            result[3] += 0.022727272727272728;
            result[4] += 0;
            result[5] += 0.002840909090909091;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.985781990521327;
            result[5] += 0.014218009478672985;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42520000))) ) ) {
            result[0] += 0.8518518518518519;
            result[1] += 0.037037037037037035;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1111111111111111;
            result[5] += 0;
          } else {
            result[0] += 0.045454545454545456;
            result[1] += 0;
            result[2] += 0.00909090909090909;
            result[3] += 0.02727272727272727;
            result[4] += 0.4636363636363636;
            result[5] += 0.45454545454545453;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.022116903633491312;
            result[4] += 0.014218009478672985;
            result[5] += 0.9636650868878357;
          } else {
            result[0] += 0;
            result[1] += 0.09036144578313253;
            result[2] += 0.04216867469879518;
            result[3] += 0.16265060240963855;
            result[4] += 0.11144578313253012;
            result[5] += 0.5933734939759037;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1;
            result[4] += 0.1;
            result[5] += 0.8;
          } else {
            result[0] += 0;
            result[1] += 0.03977272727272727;
            result[2] += 0.05113636363636364;
            result[3] += 0.6647727272727273;
            result[4] += 0.005681818181818182;
            result[5] += 0.23863636363636365;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42180000))) ) ) {
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
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0.0023584905660377358;
            result[1] += 0.9882075471698113;
            result[2] += 0.0023584905660377358;
            result[3] += 0;
            result[4] += 0.007075471698113208;
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
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cc0000))) ) ) {
            result[0] += 0.046511627906976744;
            result[1] += 0.03875968992248062;
            result[2] += 0;
            result[3] += 0.10852713178294573;
            result[4] += 0.689922480620155;
            result[5] += 0.11627906976744186;
          } else {
            result[0] += 0.07547169811320754;
            result[1] += 0.9245283018867925;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0.8814016172506739;
            result[1] += 0.004492362982929021;
            result[2] += 0.005390835579514825;
            result[3] += 0.018867924528301886;
            result[4] += 0.06199460916442048;
            result[5] += 0.027852650494159928;
          } else {
            result[0] += 0.2618296529968454;
            result[1] += 0.05993690851735016;
            result[2] += 0.1608832807570978;
            result[3] += 0.23974763406940064;
            result[4] += 0.08201892744479496;
            result[5] += 0.19558359621451105;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
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
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13636363636363635;
            result[3] += 0.1590909090909091;
            result[4] += 0.045454545454545456;
            result[5] += 0.6590909090909091;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08333333333333333;
            result[3] += 0.6785714285714286;
            result[4] += 0.011904761904761904;
            result[5] += 0.2261904761904762;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4375;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0.4375;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0.16;
            result[2] += 0.2;
            result[3] += 0.44;
            result[4] += 0;
            result[5] += 0.2;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8441558441558442;
            result[3] += 0.14285714285714288;
            result[4] += 0;
            result[5] += 0.01298701298701299;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0;
            result[1] += 0.16666666666666666;
            result[2] += 0;
            result[3] += 0.8333333333333334;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.058823529411764705;
            result[1] += 0;
            result[2] += 0.35294117647058826;
            result[3] += 0.23529411764705882;
            result[4] += 0;
            result[5] += 0.35294117647058826;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2;
            result[4] += 0.4;
            result[5] += 0.4;
          } else {
            result[0] += 0.037037037037037035;
            result[1] += 0;
            result[2] += 0.8703703703703703;
            result[3] += 0.037037037037037035;
            result[4] += 0.018518518518518517;
            result[5] += 0.037037037037037035;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0.012605042016806723;
            result[1] += 0;
            result[2] += 0.865546218487395;
            result[3] += 0.11764705882352941;
            result[4] += 0;
            result[5] += 0.004201680672268907;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.986863711001642;
            result[3] += 0.013136288998357963;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x422e0000))) ) ) {
            result[0] += 0;
            result[1] += 0.75;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.25;
          } else {
            result[0] += 0.007751937984496124;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9651162790697675;
            result[5] += 0.027131782945736434;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0.17391304347826086;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.08695652173913043;
            result[5] += 0.7391304347826086;
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
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.05555555555555555;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8888888888888888;
            result[5] += 0.05555555555555555;
          } else {
            result[0] += 0;
            result[1] += 0.003973509933774834;
            result[2] += 0;
            result[3] += 0.02119205298013245;
            result[4] += 0.03708609271523179;
            result[5] += 0.937748344370861;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0.12303664921465969;
            result[1] += 0.015706806282722512;
            result[2] += 0.005235602094240838;
            result[3] += 0.18324607329842932;
            result[4] += 0.112565445026178;
            result[5] += 0.5602094240837696;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7581699346405228;
            result[4] += 0.006535947712418301;
            result[5] += 0.23529411764705882;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0.16969696969696973;
            result[1] += 0.2606060606060607;
            result[2] += 0;
            result[3] += 0.030303030303030307;
            result[4] += 0.5272727272727273;
            result[5] += 0.012121212121212123;
          } else {
            result[0] += 0.8571428571428571;
            result[1] += 0.03067484662576687;
            result[2] += 0.016652059596844872;
            result[3] += 0.02716914986853637;
            result[4] += 0.04645048203330412;
            result[5] += 0.021910604732690624;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0.036290322580645164;
            result[1] += 0.06451612903225806;
            result[2] += 0.09274193548387097;
            result[3] += 0.4435483870967742;
            result[4] += 0.11290322580645161;
            result[5] += 0.25;
          } else {
            result[0] += 0.20108695652173914;
            result[1] += 0;
            result[2] += 0.5163043478260869;
            result[3] += 0.06521739130434782;
            result[4] += 0.005434782608695652;
            result[5] += 0.21195652173913043;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bd0000))) ) ) {
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
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a10000))) ) ) {
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
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a80000))) ) ) {
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
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d60000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0.05555555555555555;
            result[2] += 0.07407407407407407;
            result[3] += 0.6296296296296297;
            result[4] += 0;
            result[5] += 0.24074074074074073;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5769230769230769;
            result[3] += 0.23076923076923078;
            result[4] += 0;
            result[5] += 0.19230769230769232;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 0.034482758620689655;
            result[2] += 0.7931034482758621;
            result[3] += 0.06896551724137931;
            result[4] += 0.034482758620689655;
            result[5] += 0.06896551724137931;
          } else {
            result[0] += 0.8333333333333334;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a00000))) ) ) {
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
            result[3] += 0.8333333333333334;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7256637168141593;
            result[3] += 0.25663716814159293;
            result[4] += 0;
            result[5] += 0.017699115044247787;
          } else {
            result[0] += 0.016129032258064516;
            result[1] += 0;
            result[2] += 0.9193548387096774;
            result[3] += 0.06451612903225806;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a30000))) ) ) {
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
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.75;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9705882352941176;
            result[3] += 0.02786377708978328;
            result[4] += 0;
            result[5] += 0.0015479876160990713;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0.023148148148148147;
            result[1] += 0.009259259259259259;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9074074074074074;
            result[5] += 0.06018518518518518;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.23255813953488372;
            result[5] += 0.7674418604651163;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0.047619047619047616;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9523809523809523;
            result[5] += 0;
          } else {
            result[0] += 0.8421052631578948;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.09210526315789475;
            result[5] += 0.06578947368421054;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0.007856341189674524;
            result[2] += 0.001122334455667789;
            result[3] += 0.03591470258136925;
            result[4] += 0.04040404040404041;
            result[5] += 0.9147025813692481;
          } else {
            result[0] += 0;
            result[1] += 0.01;
            result[2] += 0.005;
            result[3] += 0.285;
            result[4] += 0.15;
            result[5] += 0.55;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8378378378378378;
            result[4] += 0;
            result[5] += 0.16216216216216217;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3673469387755102;
            result[4] += 0.04081632653061224;
            result[5] += 0.5918367346938775;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0.056451612903225805;
            result[1] += 0.06451612903225806;
            result[2] += 0;
            result[3] += 0.008064516129032258;
            result[4] += 0.8709677419354839;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9615384615384616;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.038461538461538464;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42640000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8125;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1875;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0.3835616438356164;
            result[1] += 0.0410958904109589;
            result[2] += 0.0136986301369863;
            result[3] += 0.3287671232876712;
            result[4] += 0.0547945205479452;
            result[5] += 0.1780821917808219;
          } else {
            result[0] += 0.8815551537070525;
            result[1] += 0.009945750452079568;
            result[2] += 0.0027124773960217003;
            result[3] += 0.021699819168173602;
            result[4] += 0.060578661844484634;
            result[5] += 0.02350813743218807;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0.025210084033613446;
            result[1] += 0.03361344537815126;
            result[2] += 0.17647058823529413;
            result[3] += 0.40336134453781514;
            result[4] += 0.01680672268907563;
            result[5] += 0.3445378151260504;
          } else {
            result[0] += 0.17197452229299365;
            result[1] += 0;
            result[2] += 0.6560509554140128;
            result[3] += 0.10828025477707008;
            result[4] += 0;
            result[5] += 0.06369426751592358;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.11111111111111112;
            result[1] += 0.22222222222222224;
            result[2] += 0;
            result[3] += 0.4444444444444445;
            result[4] += 0;
            result[5] += 0.22222222222222224;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0.125;
            result[2] += 0.06944444444444445;
            result[3] += 0.7083333333333334;
            result[4] += 0.027777777777777776;
            result[5] += 0.06944444444444445;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6896551724137931;
            result[3] += 0.1724137931034483;
            result[4] += 0;
            result[5] += 0.13793103448275862;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42990000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0.05263157894736842;
            result[1] += 0;
            result[2] += 0.9473684210526315;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a90000))) ) ) {
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
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.012618296529968454;
            result[1] += 0;
            result[2] += 0.8359621451104101;
            result[3] += 0.12933753943217666;
            result[4] += 0.006309148264984227;
            result[5] += 0.015772870662460567;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0.125;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.125;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8837209302325582;
            result[3] += 0.11627906976744186;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9922178988326849;
            result[3] += 0.007782101167315175;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x423c0000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0.0064516129032258064;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9774193548387097;
            result[5] += 0.016129032258064516;
          } else {
            result[0] += 0;
            result[1] += 0.2857142857142857;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.21428571428571427;
            result[5] += 0.5;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9166666666666666;
            result[5] += 0.08333333333333333;
          } else {
            result[0] += 0.001375515818431912;
            result[1] += 0;
            result[2] += 0.001375515818431912;
            result[3] += 0.027510316368638238;
            result[4] += 0.027510316368638238;
            result[5] += 0.9422283356258597;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.7777777777777779;
            result[1] += 0.02777777777777778;
            result[2] += 0;
            result[3] += 0.03703703703703704;
            result[4] += 0.13888888888888892;
            result[5] += 0.01851851851851852;
          } else {
            result[0] += 0.023636363636363636;
            result[1] += 0.005454545454545455;
            result[2] += 0;
            result[3] += 0.4;
            result[4] += 0.09090909090909091;
            result[5] += 0.48;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42660000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b30000))) ) ) {
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
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0.3333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0;
          } else {
            result[0] += 0.002178649237472767;
            result[1] += 0.9869281045751634;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.010893246187363835;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42580000))) ) ) {
            result[0] += 0.13043478260869565;
            result[1] += 0.6521739130434783;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.21739130434782608;
            result[5] += 0;
          } else {
            result[0] += 0.04597701149425287;
            result[1] += 0.10344827586206896;
            result[2] += 0.022988505747126436;
            result[3] += 0.011494252873563218;
            result[4] += 0.7816091954022989;
            result[5] += 0.034482758620689655;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0.8799593082400815;
            result[1] += 0.013224821973550358;
            result[2] += 0.008138351983723298;
            result[3] += 0.026449643947100716;
            result[4] += 0.05289928789420143;
            result[5] += 0.01932858596134283;
          } else {
            result[0] += 0.26296296296296295;
            result[1] += 0.014814814814814815;
            result[2] += 0.2037037037037037;
            result[3] += 0.2814814814814815;
            result[4] += 0.05185185185185185;
            result[5] += 0.18518518518518517;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428b0000))) ) ) {
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
            result[3] += 0.2222222222222222;
            result[4] += 0;
            result[5] += 0.7777777777777778;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.025974025974025976;
            result[3] += 0.922077922077922;
            result[4] += 0;
            result[5] += 0.05194805194805195;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8260869565217391;
            result[4] += 0;
            result[5] += 0.17391304347826086;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7;
            result[3] += 0.3;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0.03571428571428572;
            result[1] += 0;
            result[2] += 0.3928571428571429;
            result[3] += 0.46428571428571436;
            result[4] += 0;
            result[5] += 0.10714285714285715;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.88;
            result[3] += 0.04;
            result[4] += 0;
            result[5] += 0.08;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09090909090909091;
            result[3] += 0.5909090909090909;
            result[4] += 0;
            result[5] += 0.3181818181818182;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5263157894736843;
            result[3] += 0.368421052631579;
            result[4] += 0;
            result[5] += 0.10526315789473685;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7023809523809524;
            result[3] += 0.2023809523809524;
            result[4] += 0;
            result[5] += 0.09523809523809525;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9354838709677419;
            result[3] += 0.06451612903225806;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0.35;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0.1;
            result[5] += 0.05;
          } else {
            result[0] += 0.005780346820809248;
            result[1] += 0;
            result[2] += 0.9479768786127167;
            result[3] += 0.04335260115606936;
            result[4] += 0;
            result[5] += 0.002890173410404624;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ea0000))) ) ) {
            result[0] += 0.8666666666666667;
            result[1] += 0;
            result[2] += 0.13333333333333333;
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
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429e0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.02857142857142857;
            result[1] += 0.02857142857142857;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7714285714285715;
            result[5] += 0.17142857142857143;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0;
            result[1] += 0.2;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8;
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
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0.005154639175257732;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04381443298969072;
            result[4] += 0.03479381443298969;
            result[5] += 0.9162371134020618;
          } else {
            result[0] += 0.18705035971223022;
            result[1] += 0.007194244604316547;
            result[2] += 0.01079136690647482;
            result[3] += 0.20863309352517986;
            result[4] += 0.13309352517985612;
            result[5] += 0.45323741007194246;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0625;
            result[5] += 0.9375;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.78125;
            result[4] += 0;
            result[5] += 0.21875;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c20000))) ) ) {
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
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9393939393939394;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.06060606060606061;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0.08900523560209424;
            result[1] += 0.2356020942408377;
            result[2] += 0.010471204188481676;
            result[3] += 0.010471204188481676;
            result[4] += 0.612565445026178;
            result[5] += 0.041884816753926704;
          } else {
            result[0] += 0.841726618705036;
            result[1] += 0.014388489208633094;
            result[2] += 0.0008992805755395684;
            result[3] += 0.025179856115107913;
            result[4] += 0.0683453237410072;
            result[5] += 0.04946043165467626;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0.02040816326530612;
            result[2] += 0.06938775510204082;
            result[3] += 0.4857142857142857;
            result[4] += 0.02040816326530612;
            result[5] += 0.40408163265306124;
          } else {
            result[0] += 0.3883495145631068;
            result[1] += 0.0048543689320388345;
            result[2] += 0.441747572815534;
            result[3] += 0.06310679611650485;
            result[4] += 0.043689320388349516;
            result[5] += 0.05825242718446602;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
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
            result[3] += 0.041666666666666664;
            result[4] += 0;
            result[5] += 0.9583333333333334;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
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
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1;
            result[3] += 0.6;
            result[4] += 0;
            result[5] += 0.3;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5806451612903226;
            result[3] += 0.41935483870967744;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42990000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.009259259259259259;
            result[1] += 0;
            result[2] += 0.7962962962962963;
            result[3] += 0.1388888888888889;
            result[4] += 0;
            result[5] += 0.05555555555555555;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42800000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42bc0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0.4444444444444444;
            result[4] += 0;
            result[5] += 0.4444444444444444;
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
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8470588235294118;
            result[3] += 0.14705882352941177;
            result[4] += 0;
            result[5] += 0.0058823529411764705;
          } else {
            result[0] += 0.00303951367781155;
            result[1] += 0;
            result[2] += 0.9696048632218845;
            result[3] += 0.02127659574468085;
            result[4] += 0;
            result[5] += 0.0060790273556231;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0.004405286343612335;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9779735682819384;
            result[5] += 0.01762114537444934;
          } else {
            result[0] += 0;
            result[1] += 0.8888888888888888;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1111111111111111;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0.07936507936507936;
            result[1] += 0.07936507936507936;
            result[2] += 0.031746031746031744;
            result[3] += 0.031746031746031744;
            result[4] += 0.4444444444444444;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0.8117647058823529;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.023529411764705882;
            result[5] += 0.16470588235294117;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03389830508474576;
            result[4] += 0.5932203389830508;
            result[5] += 0.3728813559322034;
          } else {
            result[0] += 0.0011695906432748538;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0608187134502924;
            result[4] += 0.0304093567251462;
            result[5] += 0.9076023391812865;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0.04054054054054054;
            result[1] += 0.04054054054054054;
            result[2] += 0;
            result[3] += 0.35135135135135137;
            result[4] += 0.1891891891891892;
            result[5] += 0.3783783783783784;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.005208333333333333;
            result[3] += 0.71875;
            result[4] += 0.015625;
            result[5] += 0.2604166666666667;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42460000))) ) ) {
            result[0] += 0;
            result[1] += 0.7727272727272727;
            result[2] += 0.045454545454545456;
            result[3] += 0;
            result[4] += 0.18181818181818182;
            result[5] += 0;
          } else {
            result[0] += 0.015625;
            result[1] += 0.140625;
            result[2] += 0;
            result[3] += 0.015625;
            result[4] += 0.8125;
            result[5] += 0.015625;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.75;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.25;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0.08536585365853659;
            result[1] += 0.3780487804878049;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.524390243902439;
            result[5] += 0.012195121951219513;
          } else {
            result[0] += 0.9210770659238624;
            result[1] += 0.0018570102135561741;
            result[2] += 0.004642525533890435;
            result[3] += 0.01671309192200557;
            result[4] += 0.03342618384401114;
            result[5] += 0.02228412256267409;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0.042105263157894736;
            result[2] += 0.1368421052631579;
            result[3] += 0.3684210526315789;
            result[4] += 0.04736842105263158;
            result[5] += 0.4052631578947368;
          } else {
            result[0] += 0.3670886075949368;
            result[1] += 0;
            result[2] += 0.32911392405063294;
            result[3] += 0.012658227848101267;
            result[4] += 0.1835443037974684;
            result[5] += 0.10759493670886078;
          }
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x428b0000))) ) ) {
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
            result[4] += 0.05555555555555555;
            result[5] += 0.9444444444444444;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.47619047619047616;
            result[4] += 0.09523809523809523;
            result[5] += 0.42857142857142855;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0851063829787234;
            result[3] += 0.8191489361702128;
            result[4] += 0;
            result[5] += 0.09574468085106383;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4791666666666667;
            result[3] += 0.4375;
            result[4] += 0;
            result[5] += 0.08333333333333333;
          } else {
            result[0] += 0.009615384615384616;
            result[1] += 0.009615384615384616;
            result[2] += 0.8076923076923077;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0.04807692307692308;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.24;
            result[3] += 0.32;
            result[4] += 0.08;
            result[5] += 0.36;
          } else {
            result[0] += 0.06666666666666667;
            result[1] += 0.016666666666666666;
            result[2] += 0.6833333333333333;
            result[3] += 0.06666666666666667;
            result[4] += 0.03333333333333333;
            result[5] += 0.13333333333333333;
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
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.375;
            result[3] += 0.5833333333333334;
            result[4] += 0;
            result[5] += 0.041666666666666664;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9285714285714286;
            result[3] += 0.07142857142857142;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0.16279069767441862;
            result[1] += 0;
            result[2] += 0.627906976744186;
            result[3] += 0;
            result[4] += 0.06976744186046512;
            result[5] += 0.13953488372093023;
          } else {
            result[0] += 0.005188067444876783;
            result[1] += 0;
            result[2] += 0.9584954604409858;
            result[3] += 0.03631647211413749;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0.02092050209205021;
            result[1] += 0.008368200836820083;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9623430962343096;
            result[5] += 0.008368200836820083;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.47058823529411764;
            result[5] += 0.5294117647058824;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.37777777777777777;
            result[5] += 0.6222222222222222;
          } else {
            result[0] += 0.7872340425531915;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.14893617021276595;
            result[5] += 0.06382978723404255;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02656042496679947;
            result[4] += 0.043824701195219126;
            result[5] += 0.9296148738379814;
          } else {
            result[0] += 0;
            result[1] += 0.045871559633027525;
            result[2] += 0;
            result[3] += 0.1834862385321101;
            result[4] += 0.14678899082568808;
            result[5] += 0.6238532110091743;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0.03125;
            result[2] += 0.005208333333333333;
            result[3] += 0.1875;
            result[4] += 0.10416666666666667;
            result[5] += 0.671875;
          } else {
            result[0] += 0.012269938650306749;
            result[1] += 0;
            result[2] += 0.012269938650306749;
            result[3] += 0.7177914110429447;
            result[4] += 0;
            result[5] += 0.25766871165644173;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42990000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2222222222222222;
            result[4] += 0.7777777777777778;
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
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42580000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.972972972972973;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.02702702702702703;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0.1878453038674033;
            result[1] += 0.16022099447513813;
            result[2] += 0;
            result[3] += 0.011049723756906077;
            result[4] += 0.6132596685082873;
            result[5] += 0.027624309392265192;
          } else {
            result[0] += 0.8637168141592921;
            result[1] += 0.01946902654867257;
            result[2] += 0.010619469026548674;
            result[3] += 0.03716814159292036;
            result[4] += 0.03451327433628319;
            result[5] += 0.03451327433628319;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0.023026315789473683;
            result[1] += 0.05263157894736842;
            result[2] += 0.1513157894736842;
            result[3] += 0.35526315789473684;
            result[4] += 0.06578947368421052;
            result[5] += 0.3519736842105263;
          } else {
            result[0] += 0.47619047619047616;
            result[1] += 0;
            result[2] += 0.3469387755102041;
            result[3] += 0.013605442176870748;
            result[4] += 0.1292517006802721;
            result[5] += 0.034013605442176874;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ac0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42e30000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0;
            result[1] += 0.02857142857142857;
            result[2] += 0.02857142857142857;
            result[3] += 0.02857142857142857;
            result[4] += 0.02857142857142857;
            result[5] += 0.8857142857142857;
          } else {
            result[0] += 0.25;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428c0000))) ) ) {
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
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05555555555555555;
            result[3] += 0.8333333333333334;
            result[4] += 0;
            result[5] += 0.1111111111111111;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8333333333333334;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5217391304347826;
            result[3] += 0.4057971014492754;
            result[4] += 0;
            result[5] += 0.07246376811594203;
          } else {
            result[0] += 0.02631578947368421;
            result[1] += 0;
            result[2] += 0.9210526315789473;
            result[3] += 0.05263157894736842;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c40000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0.7857142857142857;
            result[1] += 0;
            result[2] += 0.21428571428571427;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.07692307692307693;
            result[4] += 0;
            result[5] += 0.9230769230769231;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.0012360939431396785;
            result[1] += 0;
            result[2] += 0.9480840543881335;
            result[3] += 0.0407911001236094;
            result[4] += 0;
            result[5] += 0.009888751545117428;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0.008032128514056224;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.004016064257028112;
            result[4] += 0.9518072289156626;
            result[5] += 0.03614457831325301;
          } else {
            result[0] += 0;
            result[1] += 0.25;
            result[2] += 0;
            result[3] += 0.25;
            result[4] += 0.25;
            result[5] += 0.25;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42810000))) ) ) {
            result[0] += 0;
            result[1] += 0.8823529411764706;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.11764705882352941;
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
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8928571428571429;
            result[5] += 0.10714285714285714;
          } else {
            result[0] += 0.005319148936170213;
            result[1] += 0;
            result[2] += 0.007978723404255319;
            result[3] += 0.026595744680851064;
            result[4] += 0.013297872340425532;
            result[5] += 0.9468085106382979;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.9583333333333334;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.041666666666666664;
            result[5] += 0;
          } else {
            result[0] += 0.0182648401826484;
            result[1] += 0.00228310502283105;
            result[2] += 0.01141552511415525;
            result[3] += 0.410958904109589;
            result[4] += 0.09360730593607305;
            result[5] += 0.4634703196347032;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42890000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0.075;
            result[1] += 0.16875;
            result[2] += 0.0125;
            result[3] += 0.0875;
            result[4] += 0.65;
            result[5] += 0.00625;
          } else {
            result[0] += 0.029850746268656716;
            result[1] += 0.7761194029850746;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1044776119402985;
            result[5] += 0.08955223880597014;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0.8341880341880342;
            result[1] += 0.019658119658119658;
            result[2] += 0.004273504273504274;
            result[3] += 0.023076923076923078;
            result[4] += 0.07435897435897436;
            result[5] += 0.044444444444444446;
          } else {
            result[0] += 0.1421188630490956;
            result[1] += 0.0103359173126615;
            result[2] += 0.2248062015503876;
            result[3] += 0.35400516795865633;
            result[4] += 0.023255813953488372;
            result[5] += 0.2454780361757106;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c20000))) ) ) {
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
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07142857142857144;
            result[3] += 0.8214285714285715;
            result[4] += 0;
            result[5] += 0.10714285714285715;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5238095238095238;
            result[3] += 0.38095238095238093;
            result[4] += 0;
            result[5] += 0.09523809523809523;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bd0000))) ) ) {
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
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42cf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1;
            result[3] += 0.1;
            result[4] += 0;
            result[5] += 0.8;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a60000))) ) ) {
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
            result[3] += 0.1;
            result[4] += 0;
            result[5] += 0.1;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c40000))) ) ) {
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
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2222222222222222;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.7777777777777778;
          } else {
            result[0] += 0.0650887573964497;
            result[1] += 0;
            result[2] += 0.8402366863905325;
            result[3] += 0.08284023668639054;
            result[4] += 0.005917159763313609;
            result[5] += 0.005917159763313609;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0.015873015873015872;
            result[1] += 0;
            result[2] += 0.8783068783068783;
            result[3] += 0.10052910052910052;
            result[4] += 0;
            result[5] += 0.005291005291005291;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9981718464351006;
            result[3] += 0.0018281535648994515;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c20000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0.019736842105263157;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9638157894736842;
            result[5] += 0.01644736842105263;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42480000))) ) ) {
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
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.2708333333333333;
            result[1] += 0.10416666666666667;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3541666666666667;
            result[5] += 0.2708333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.028368794326241134;
            result[4] += 0.05555555555555555;
            result[5] += 0.9160756501182034;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0.6721311475409836;
            result[1] += 0.08196721311475409;
            result[2] += 0.03278688524590164;
            result[3] += 0.08196721311475409;
            result[4] += 0.03278688524590164;
            result[5] += 0.09836065573770492;
          } else {
            result[0] += 0;
            result[1] += 0.04087193460490463;
            result[2] += 0.021798365122615803;
            result[3] += 0.553133514986376;
            result[4] += 0.021798365122615803;
            result[5] += 0.36239782016348776;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42240000))) ) ) {
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
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
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
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0.02040816326530612;
            result[1] += 0.22448979591836735;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7551020408163265;
            result[5] += 0;
          } else {
            result[0] += 0.8442477876106195;
            result[1] += 0.022123893805309734;
            result[2] += 0.004424778761061947;
            result[3] += 0.016814159292035398;
            result[4] += 0.08584070796460178;
            result[5] += 0.02654867256637168;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0.025396825396825397;
            result[1] += 0.009523809523809525;
            result[2] += 0.273015873015873;
            result[3] += 0.35873015873015873;
            result[4] += 0.009523809523809525;
            result[5] += 0.3238095238095238;
          } else {
            result[0] += 0.696969696969697;
            result[1] += 0.020202020202020204;
            result[2] += 0.1414141414141414;
            result[3] += 0;
            result[4] += 0.1414141414141414;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ea0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8;
            result[5] += 0.2;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02702702702702703;
            result[3] += 0.05405405405405406;
            result[4] += 0;
            result[5] += 0.918918918918919;
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
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8;
          } else {
            result[0] += 0;
            result[1] += 0.06818181818181818;
            result[2] += 0.1590909090909091;
            result[3] += 0.7272727272727273;
            result[4] += 0;
            result[5] += 0.045454545454545456;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0.06818181818181818;
            result[2] += 0.4090909090909091;
            result[3] += 0.45454545454545453;
            result[4] += 0;
            result[5] += 0.06818181818181818;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8979591836734694;
            result[3] += 0.061224489795918366;
            result[4] += 0;
            result[5] += 0.04081632653061224;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
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
            result[2] += 0.08333333333333333;
            result[3] += 0.8333333333333334;
            result[4] += 0;
            result[5] += 0.08333333333333333;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8491620111731844;
            result[3] += 0.1452513966480447;
            result[4] += 0;
            result[5] += 0.00558659217877095;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429b0000))) ) ) {
            result[0] += 0.75;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.25;
            result[5] += 0;
          } else {
            result[0] += 0.015748031496062992;
            result[1] += 0;
            result[2] += 0.8661417322834646;
            result[3] += 0.11811023622047244;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429e0000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9977973568281938;
            result[3] += 0.0022026431718061676;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42420000))) ) ) {
            result[0] += 0.2857142857142857;
            result[1] += 0.21428571428571427;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.42857142857142855;
            result[5] += 0.07142857142857142;
          } else {
            result[0] += 0;
            result[1] += 0.005934718100890208;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9584569732937686;
            result[5] += 0.03560830860534125;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42600000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.25;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.75;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x423c0000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.5384615384615384;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.46153846153846156;
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
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.47368421052631576;
            result[1] += 0.06578947368421052;
            result[2] += 0;
            result[3] += 0.06578947368421052;
            result[4] += 0.14473684210526316;
            result[5] += 0.25;
          } else {
            result[0] += 0.006543075245365322;
            result[1] += 0.009814612868047983;
            result[2] += 0;
            result[3] += 0.061068702290076333;
            result[4] += 0.05561613958560523;
            result[5] += 0.8669574700109052;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0.01492537313432836;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.41791044776119407;
            result[4] += 0.0746268656716418;
            result[5] += 0.49253731343283585;
          } else {
            result[0] += 0.024;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.84;
            result[4] += 0;
            result[5] += 0.136;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.7727272727272727;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.22727272727272727;
            result[5] += 0;
          } else {
            result[0] += 0.016597510373443983;
            result[1] += 0.024896265560165973;
            result[2] += 0.07468879668049792;
            result[3] += 0.2697095435684647;
            result[4] += 0.16597510373443983;
            result[5] += 0.44813278008298757;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0.2;
            result[1] += 0.2235294117647059;
            result[2] += 0.058823529411764705;
            result[3] += 0.08235294117647059;
            result[4] += 0.4117647058823529;
            result[5] += 0.023529411764705882;
          } else {
            result[0] += 0.8313356164383562;
            result[1] += 0.0059931506849315065;
            result[2] += 0.04452054794520548;
            result[3] += 0.05136986301369863;
            result[4] += 0.04794520547945205;
            result[5] += 0.018835616438356163;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d90000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0.02;
            result[2] += 0;
            result[3] += 0.1;
            result[4] += 0;
            result[5] += 0.88;
          } else {
            result[0] += 0.2;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6;
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
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9545454545454546;
            result[4] += 0;
            result[5] += 0.045454545454545456;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06818181818181819;
            result[3] += 0.5227272727272728;
            result[4] += 0.02272727272727273;
            result[5] += 0.3863636363636364;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09090909090909091;
            result[3] += 0.2727272727272727;
            result[4] += 0.13636363636363635;
            result[5] += 0.5;
          } else {
            result[0] += 0.036585365853658534;
            result[1] += 0;
            result[2] += 0.5365853658536586;
            result[3] += 0.4146341463414634;
            result[4] += 0;
            result[5] += 0.012195121951219513;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.18181818181818182;
            result[3] += 0.18181818181818182;
            result[4] += 0;
            result[5] += 0.6363636363636364;
          } else {
            result[0] += 0.024390243902439025;
            result[1] += 0;
            result[2] += 0.8048780487804879;
            result[3] += 0.07317073170731707;
            result[4] += 0;
            result[5] += 0.0975609756097561;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42d60000))) ) ) {
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
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0.8888888888888888;
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
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0.009966777408637875;
            result[1] += 0;
            result[2] += 0.8438538205980067;
            result[3] += 0.12624584717607976;
            result[4] += 0;
            result[5] += 0.01993355481727575;
          } else {
            result[0] += 0.0015313935681470138;
            result[1] += 0;
            result[2] += 0.9724349157733537;
            result[3] += 0.018376722817764167;
            result[4] += 0;
            result[5] += 0.007656967840735069;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42930000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0.00398406374501992;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9880478087649402;
            result[5] += 0.00796812749003984;
          } else {
            result[0] += 0;
            result[1] += 0.2222222222222222;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4444444444444444;
            result[5] += 0.3333333333333333;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b00000))) ) ) {
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
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0.09523809523809523;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7619047619047619;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02165087956698241;
            result[4] += 0.02165087956698241;
            result[5] += 0.9566982408660352;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0.6301369863013699;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.06849315068493152;
            result[4] += 0.26027397260273977;
            result[5] += 0.04109589041095891;
          } else {
            result[0] += 0;
            result[1] += 0.019801980198019802;
            result[2] += 0.0024752475247524753;
            result[3] += 0.38366336633663367;
            result[4] += 0.08168316831683169;
            result[5] += 0.5123762376237624;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ac0000))) ) ) {
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
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0.08426966292134831;
            result[1] += 0.34831460674157305;
            result[2] += 0;
            result[3] += 0.016853932584269662;
            result[4] += 0.5449438202247191;
            result[5] += 0.0056179775280898875;
          } else {
            result[0] += 0.8814616755793226;
            result[1] += 0.00089126559714795;
            result[2] += 0;
            result[3] += 0.036541889483065956;
            result[4] += 0.057932263814616754;
            result[5] += 0.023172905525846704;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0.09236947791164658;
            result[1] += 0.11646586345381527;
            result[2] += 0.10441767068273092;
            result[3] += 0.3493975903614458;
            result[4] += 0.09236947791164658;
            result[5] += 0.24497991967871485;
          } else {
            result[0] += 0.20833333333333334;
            result[1] += 0;
            result[2] += 0.5972222222222222;
            result[3] += 0.06944444444444445;
            result[4] += 0.013888888888888888;
            result[5] += 0.1111111111111111;
          }
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42880000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.058823529411764705;
            result[3] += 0.029411764705882353;
            result[4] += 0.029411764705882353;
            result[5] += 0.8823529411764706;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.06666666666666667;
            result[4] += 0.13333333333333333;
            result[5] += 0.8;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07894736842105263;
            result[3] += 0.5526315789473685;
            result[4] += 0;
            result[5] += 0.3684210526315789;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d50000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0.8888888888888888;
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
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.03333333333333333;
            result[1] += 0;
            result[2] += 0.8333333333333334;
            result[3] += 0.03333333333333333;
            result[4] += 0;
            result[5] += 0.1;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426c0000))) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.30612244897959184;
            result[3] += 0.6530612244897959;
            result[4] += 0;
            result[5] += 0.04081632653061224;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7142857142857143;
            result[3] += 0.16326530612244897;
            result[4] += 0;
            result[5] += 0.12244897959183673;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0.36363636363636365;
            result[1] += 0.09090909090909091;
            result[2] += 0.18181818181818182;
            result[3] += 0.045454545454545456;
            result[4] += 0.13636363636363635;
            result[5] += 0.18181818181818182;
          } else {
            result[0] += 0.012168141592920354;
            result[1] += 0;
            result[2] += 0.9369469026548672;
            result[3] += 0.04314159292035398;
            result[4] += 0;
            result[5] += 0.007743362831858407;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0.006920415224913495;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9896193771626297;
            result[5] += 0.0034602076124567475;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c70000))) ) ) {
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
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42580000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42890000))) ) ) {
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
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d20000))) ) ) {
            result[0] += 0;
            result[1] += 0.18181818181818182;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8181818181818182;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.92;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.08;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.047619047619047616;
            result[4] += 0.9523809523809523;
            result[5] += 0;
          } else {
            result[0] += 0.020713463751438434;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.039125431530494824;
            result[4] += 0.04487917146144994;
            result[5] += 0.8952819332566168;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0.6481481481481481;
            result[1] += 0;
            result[2] += 0.018518518518518517;
            result[3] += 0.018518518518518517;
            result[4] += 0.3148148148148148;
            result[5] += 0;
          } else {
            result[0] += 0.003205128205128205;
            result[1] += 0.022435897435897436;
            result[2] += 0.01282051282051282;
            result[3] += 0.42628205128205127;
            result[4] += 0.041666666666666664;
            result[5] += 0.4935897435897436;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0.07692307692307693;
            result[1] += 0.21794871794871795;
            result[2] += 0;
            result[3] += 0.1282051282051282;
            result[4] += 0.1282051282051282;
            result[5] += 0.44871794871794873;
          } else {
            result[0] += 0.8530534351145038;
            result[1] += 0.020038167938931296;
            result[2] += 0.0057251908396946565;
            result[3] += 0.020038167938931296;
            result[4] += 0.09064885496183206;
            result[5] += 0.01049618320610687;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0.016666666666666666;
            result[2] += 0.13333333333333333;
            result[3] += 0.4388888888888889;
            result[4] += 0.044444444444444446;
            result[5] += 0.36666666666666664;
          } else {
            result[0] += 0.7692307692307693;
            result[1] += 0;
            result[2] += 0.07692307692307693;
            result[3] += 0;
            result[4] += 0.14102564102564102;
            result[5] += 0.01282051282051282;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a00000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.043478260869565216;
            result[3] += 0.391304347826087;
            result[4] += 0.13043478260869565;
            result[5] += 0.43478260869565216;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42500000))) ) ) {
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
            result[3] += 0.08196721311475409;
            result[4] += 0.01639344262295082;
            result[5] += 0.9016393442622951;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0.02197802197802198;
            result[2] += 0.04395604395604396;
            result[3] += 0.8571428571428571;
            result[4] += 0.02197802197802198;
            result[5] += 0.054945054945054944;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7777777777777778;
            result[3] += 0.1111111111111111;
            result[4] += 0;
            result[5] += 0.1111111111111111;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0.9;
            result[2] += 0;
            result[3] += 0.1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5662650602409638;
            result[3] += 0.3012048192771084;
            result[4] += 0;
            result[5] += 0.1325301204819277;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0.024390243902439025;
            result[1] += 0.04878048780487805;
            result[2] += 0.3780487804878049;
            result[3] += 0.36585365853658536;
            result[4] += 0.012195121951219513;
            result[5] += 0.17073170731707318;
          } else {
            result[0] += 0.00900900900900901;
            result[1] += 0;
            result[2] += 0.8423423423423424;
            result[3] += 0.14414414414414417;
            result[4] += 0;
            result[5] += 0.004504504504504505;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0.9310344827586207;
            result[1] += 0;
            result[2] += 0.06896551724137931;
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
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8333333333333334;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.16666666666666666;
          } else {
            result[0] += 0.8;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0.00602409638554217;
            result[1] += 0;
            result[2] += 0.8975903614457832;
            result[3] += 0.09036144578313254;
            result[4] += 0;
            result[5] += 0.00602409638554217;
          } else {
            result[0] += 0.005199306759098788;
            result[1] += 0;
            result[2] += 0.9792027729636049;
            result[3] += 0.015597920277296362;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b60000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0.008298755186721993;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9834024896265561;
            result[5] += 0.008298755186721993;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.631578947368421;
            result[5] += 0.3684210526315789;
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
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.9019607843137255;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.09803921568627451;
            result[5] += 0;
          } else {
            result[0] += 0.012149532710280374;
            result[1] += 0.002803738317757009;
            result[2] += 0.0065420560747663555;
            result[3] += 0.06542056074766354;
            result[4] += 0.056074766355140186;
            result[5] += 0.8570093457943925;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.023255813953488372;
            result[3] += 0.20930232558139536;
            result[4] += 0.046511627906976744;
            result[5] += 0.7209302325581395;
          } else {
            result[0] += 0;
            result[1] += 0.027972027972027972;
            result[2] += 0;
            result[3] += 0.7482517482517482;
            result[4] += 0;
            result[5] += 0.22377622377622378;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x424e0000))) ) ) {
            result[0] += 0;
            result[1] += 0.8461538461538461;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.15384615384615385;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.05263157894736842;
            result[4] += 0.9473684210526315;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.95;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0.31901840490797545;
            result[1] += 0;
            result[2] += 0.03067484662576687;
            result[3] += 0.08588957055214724;
            result[4] += 0.37423312883435583;
            result[5] += 0.1901840490797546;
          } else {
            result[0] += 0.8528846153846156;
            result[1] += 0.040384615384615394;
            result[2] += 0.0038461538461538472;
            result[3] += 0.01057692307692308;
            result[4] += 0.07692307692307694;
            result[5] += 0.015384615384615389;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0.018469656992084436;
            result[1] += 0.0026385224274406336;
            result[2] += 0.1899736147757256;
            result[3] += 0.4195250659630607;
            result[4] += 0.03693931398416887;
            result[5] += 0.33245382585751987;
          } else {
            result[0] += 0.6289308176100629;
            result[1] += 0.07547169811320754;
            result[2] += 0.18867924528301888;
            result[3] += 0.03773584905660377;
            result[4] += 0.06918238993710692;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.8;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.03333333333333333;
            result[3] += 0.9;
            result[4] += 0;
            result[5] += 0.06666666666666667;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0.7777777777777778;
            result[4] += 0;
            result[5] += 0.1111111111111111;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6956521739130435;
            result[3] += 0.30434782608695654;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42cc0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0625;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.9375;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0.75;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.25;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.07317073170731707;
            result[2] += 0.7317073170731707;
            result[3] += 0.024390243902439025;
            result[4] += 0;
            result[5] += 0.17073170731707318;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d60000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11764705882352941;
            result[3] += 0.47058823529411764;
            result[4] += 0;
            result[5] += 0.4117647058823529;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8333333333333334;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.16666666666666666;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7058823529411765;
            result[3] += 0.17647058823529413;
            result[4] += 0;
            result[5] += 0.11764705882352941;
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
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ef0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8686868686868687;
            result[3] += 0.11447811447811448;
            result[4] += 0;
            result[5] += 0.016835016835016835;
          } else {
            result[0] += 0.2222222222222222;
            result[1] += 0;
            result[2] += 0.5555555555555556;
            result[3] += 0.2222222222222222;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9864864864864865;
            result[3] += 0.011583011583011582;
            result[4] += 0;
            result[5] += 0.0019305019305019305;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42810000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9759615384615384;
            result[5] += 0.02403846153846154;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.06666666666666667;
            result[4] += 0.5333333333333333;
            result[5] += 0.4;
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
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42700000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9090909090909091;
            result[5] += 0.09090909090909091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.027932960893854747;
            result[4] += 0.02094972067039106;
            result[5] += 0.9511173184357542;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0.4529914529914529;
            result[1] += 0.13675213675213674;
            result[2] += 0;
            result[3] += 0.017094017094017092;
            result[4] += 0.29059829059829057;
            result[5] += 0.10256410256410253;
          } else {
            result[0] += 0.005263157894736842;
            result[1] += 0.013157894736842105;
            result[2] += 0.005263157894736842;
            result[3] += 0.41842105263157897;
            result[4] += 0.02894736842105263;
            result[5] += 0.5289473684210526;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42d60000))) ) ) {
            result[0] += 0;
            result[1] += 0.9976133651551312;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002386634844868735;
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
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x423c0000))) ) ) {
            result[0] += 0;
            result[1] += 0.9565217391304348;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.043478260869565216;
            result[5] += 0;
          } else {
            result[0] += 0.06153846153846155;
            result[1] += 0.02307692307692308;
            result[2] += 0;
            result[3] += 0.02307692307692308;
            result[4] += 0.8538461538461539;
            result[5] += 0.03846153846153847;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0.8771043771043772;
            result[1] += 0.01767676767676768;
            result[2] += 0;
            result[3] += 0.025252525252525256;
            result[4] += 0.06902356902356904;
            result[5] += 0.010942760942760945;
          } else {
            result[0] += 0.17941176470588238;
            result[1] += 0.017647058823529415;
            result[2] += 0.1558823529411765;
            result[3] += 0.22352941176470592;
            result[4] += 0.0735294117647059;
            result[5] += 0.35000000000000003;
          }
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
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
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.029411764705882353;
            result[3] += 0.8823529411764706;
            result[4] += 0;
            result[5] += 0.08823529411764706;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2608695652173913;
            result[3] += 0.4927536231884058;
            result[4] += 0;
            result[5] += 0.2463768115942029;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.37735849056603776;
            result[3] += 0.5094339622641509;
            result[4] += 0;
            result[5] += 0.11320754716981132;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9090909090909091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.09090909090909091;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7912087912087912;
            result[3] += 0.12087912087912088;
            result[4] += 0;
            result[5] += 0.08791208791208792;
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
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e10000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42cf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2972972972972973;
            result[3] += 0.1891891891891892;
            result[4] += 0.1891891891891892;
            result[5] += 0.32432432432432434;
          } else {
            result[0] += 0.04;
            result[1] += 0;
            result[2] += 0.96;
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
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7543859649122807;
            result[3] += 0.24561403508771928;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0071428571428571435;
            result[1] += 0;
            result[2] += 0.9523809523809524;
            result[3] += 0.03333333333333334;
            result[4] += 0;
            result[5] += 0.0071428571428571435;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428b0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428e0000))) ) ) {
            result[0] += 0.005235602094240838;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9842931937172775;
            result[5] += 0.010471204188481676;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42980000))) ) ) {
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
            result[3] += 0.15384615384615385;
            result[4] += 0.6923076923076923;
            result[5] += 0.15384615384615385;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426e0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02564102564102564;
            result[4] += 0.8461538461538461;
            result[5] += 0.1282051282051282;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6666666666666666;
            result[4] += 0.2222222222222222;
            result[5] += 0.1111111111111111;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0.0023501762632197414;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03760282021151586;
            result[4] += 0.024676850763807285;
            result[5] += 0.9353701527614571;
          } else {
            result[0] += 0.03305785123966942;
            result[1] += 0;
            result[2] += 0.01652892561983471;
            result[3] += 0.4462809917355372;
            result[4] += 0.008264462809917356;
            result[5] += 0.49586776859504134;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0.9800884955752213;
            result[2] += 0;
            result[3] += 0.0022123893805309734;
            result[4] += 0.017699115044247787;
            result[5] += 0;
          } else {
            result[0] += 0.46153846153846156;
            result[1] += 0.3076923076923077;
            result[2] += 0;
            result[3] += 0.23076923076923078;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0.10365853658536585;
            result[1] += 0.13414634146341464;
            result[2] += 0;
            result[3] += 0.012195121951219513;
            result[4] += 0.7317073170731707;
            result[5] += 0.018292682926829267;
          } else {
            result[0] += 0.8048172757475083;
            result[1] += 0.03737541528239203;
            result[2] += 0.004152823920265781;
            result[3] += 0.036544850498338874;
            result[4] += 0.08803986710963455;
            result[5] += 0.029069767441860465;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0.007481296758104738;
            result[1] += 0.0199501246882793;
            result[2] += 0.06733167082294264;
            result[3] += 0.47381546134663344;
            result[4] += 0.02743142144638404;
            result[5] += 0.40399002493765584;
          } else {
            result[0] += 0.454183266932271;
            result[1] += 0.007968127490039842;
            result[2] += 0.37848605577689254;
            result[3] += 0.03984063745019921;
            result[4] += 0.06374501992031874;
            result[5] += 0.0557768924302789;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a80000))) ) ) {
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
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ab0000))) ) ) {
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42d20000))) ) ) {
            result[0] += 0;
            result[1] += 0.0425531914893617;
            result[2] += 0.23404255319148937;
            result[3] += 0.5319148936170213;
            result[4] += 0;
            result[5] += 0.19148936170212766;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0.4888888888888889;
            result[4] += 0;
            result[5] += 0.1111111111111111;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8247422680412371;
            result[3] += 0.12371134020618557;
            result[4] += 0;
            result[5] += 0.05154639175257732;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42910000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.005494505494505495;
            result[1] += 0;
            result[2] += 0.7582417582417582;
            result[3] += 0.2087912087912088;
            result[4] += 0;
            result[5] += 0.027472527472527472;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429b0000))) ) ) {
            result[0] += 0.6666666666666666;
            result[1] += 0.3333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.008928571428571428;
            result[1] += 0;
            result[2] += 0.9553571428571429;
            result[3] += 0.026785714285714284;
            result[4] += 0;
            result[5] += 0.008928571428571428;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a30000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0.3333333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
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
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9411764705882353;
            result[3] += 0.058823529411764705;
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
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42240000))) ) ) {
            result[0] += 0;
            result[1] += 0.8461538461538461;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.15384615384615385;
            result[5] += 0;
          } else {
            result[0] += 0.025362318840579712;
            result[1] += 0;
            result[2] += 0.010869565217391304;
            result[3] += 0;
            result[4] += 0.9311594202898551;
            result[5] += 0.03260869565217391;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.7333333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.26666666666666666;
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
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03012912482065997;
            result[4] += 0.028694404591104734;
            result[5] += 0.9411764705882353;
          } else {
            result[0] += 0.006944444444444444;
            result[1] += 0.013888888888888888;
            result[2] += 0;
            result[3] += 0.21875;
            result[4] += 0.18055555555555555;
            result[5] += 0.5798611111111112;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0.02702702702702703;
            result[1] += 0;
            result[2] += 0.021621621621621623;
            result[3] += 0.7783783783783784;
            result[4] += 0;
            result[5] += 0.17297297297297298;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3783783783783784;
            result[3] += 0.10810810810810811;
            result[4] += 0;
            result[5] += 0.5135135135135135;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
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
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0.4225589225589226;
            result[1] += 0.10774410774410774;
            result[2] += 0.006734006734006734;
            result[3] += 0.05387205387205387;
            result[4] += 0.2356902356902357;
            result[5] += 0.1734006734006734;
          } else {
            result[0] += 0.9368811881188119;
            result[1] += 0.007425742574257425;
            result[2] += 0.0037128712871287127;
            result[3] += 0.01608910891089109;
            result[4] += 0.024752475247524754;
            result[5] += 0.011138613861386138;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0.014150943396226415;
            result[1] += 0.05660377358490566;
            result[2] += 0.08490566037735849;
            result[3] += 0.36792452830188677;
            result[4] += 0.0660377358490566;
            result[5] += 0.41037735849056606;
          } else {
            result[0] += 0.34210526315789475;
            result[1] += 0.021052631578947368;
            result[2] += 0.4052631578947368;
            result[3] += 0.12105263157894737;
            result[4] += 0.07368421052631578;
            result[5] += 0.03684210526315789;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d60000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.4166666666666667;
            result[4] += 0;
            result[5] += 0.5833333333333334;
          } else {
            result[0] += 0;
            result[1] += 0.026666666666666672;
            result[2] += 0.5066666666666668;
            result[3] += 0.3866666666666667;
            result[4] += 0;
            result[5] += 0.08000000000000002;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b30000))) ) ) {
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
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426c0000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.19047619047619047;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8095238095238095;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6923076923076923;
            result[3] += 0.19230769230769232;
            result[4] += 0;
            result[5] += 0.11538461538461539;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8333333333333334;
            result[4] += 0;
            result[5] += 0.16666666666666666;
          } else {
            result[0] += 0.005555555555555556;
            result[1] += 0;
            result[2] += 0.8944444444444445;
            result[3] += 0.08888888888888889;
            result[4] += 0;
            result[5] += 0.011111111111111112;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0.0015625;
            result[1] += 0;
            result[2] += 0.9734375;
            result[3] += 0.021875;
            result[4] += 0;
            result[5] += 0.003125;
          } else {
            result[0] += 0.15384615384615385;
            result[1] += 0;
            result[2] += 0.8461538461538461;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8157894736842105;
            result[5] += 0.18421052631578946;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3333333333333333;
            result[4] += 0.3333333333333333;
            result[5] += 0.3333333333333333;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0.9230769230769231;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05128205128205128;
            result[5] += 0.02564102564102564;
          } else {
            result[0] += 0.001869158878504673;
            result[1] += 0.01588785046728972;
            result[2] += 0.0065420560747663555;
            result[3] += 0.0691588785046729;
            result[4] += 0.0514018691588785;
            result[5] += 0.8551401869158879;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05161290322580645;
            result[3] += 0.6903225806451613;
            result[4] += 0;
            result[5] += 0.25806451612903225;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42520000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42300000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42a10000))) ) ) {
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
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0.10714285714285714;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8928571428571429;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9818181818181818;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.01818181818181818;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0.04697986577181208;
            result[1] += 0.21476510067114093;
            result[2] += 0.006711409395973154;
            result[3] += 0;
            result[4] += 0.6845637583892618;
            result[5] += 0.04697986577181208;
          } else {
            result[0] += 0.8311229000884174;
            result[1] += 0.015030946065428824;
            result[2] += 0.005305039787798408;
            result[3] += 0.026525198938992044;
            result[4] += 0.07780725022104333;
            result[5] += 0.04420866489832007;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0.024024024024024024;
            result[1] += 0.015015015015015015;
            result[2] += 0.2972972972972973;
            result[3] += 0.37237237237237236;
            result[4] += 0.04504504504504504;
            result[5] += 0.24624624624624625;
          } else {
            result[0] += 0.8636363636363638;
            result[1] += 0;
            result[2] += 0.06363636363636364;
            result[3] += 0;
            result[4] += 0.06363636363636364;
            result[5] += 0.009090909090909092;
          }
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d30000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 0.25;
            result[2] += 0.05555555555555555;
            result[3] += 0.05555555555555555;
            result[4] += 0.16666666666666666;
            result[5] += 0.4722222222222222;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8157894736842105;
            result[4] += 0.02631578947368421;
            result[5] += 0.15789473684210525;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.9166666666666666;
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
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c20000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 0.4166666666666667;
            result[2] += 0.16666666666666666;
            result[3] += 0;
            result[4] += 0.4166666666666667;
            result[5] += 0;
          } else {
            result[0] += 0.09615384615384617;
            result[1] += 0;
            result[2] += 0.7884615384615385;
            result[3] += 0.07692307692307694;
            result[4] += 0;
            result[5] += 0.03846153846153847;
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
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2222222222222222;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0.027777777777777776;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2857142857142857;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.7142857142857143;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6744186046511628;
            result[3] += 0.06976744186046512;
            result[4] += 0;
            result[5] += 0.2558139534883721;
          } else {
            result[0] += 0.004608294930875576;
            result[1] += 0;
            result[2] += 0.8387096774193549;
            result[3] += 0.15668202764976957;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9810671256454389;
            result[3] += 0.0189328743545611;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b80000))) ) ) {
            result[0] += 0;
            result[1] += 0.01646090534979424;
            result[2] += 0;
            result[3] += 0.00411522633744856;
            result[4] += 0.9465020576131687;
            result[5] += 0.03292181069958848;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42980000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.08571428571428572;
            result[5] += 0.9142857142857143;
          } else {
            result[0] += 0.5679012345679012;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04938271604938271;
            result[4] += 0.3333333333333333;
            result[5] += 0.04938271604938271;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0.16176470588235295;
            result[2] += 0;
            result[3] += 0.10294117647058823;
            result[4] += 0.5588235294117647;
            result[5] += 0.17647058823529413;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.05592105263157895;
            result[4] += 0.03837719298245614;
            result[5] += 0.9057017543859649;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0.011904761904761904;
            result[1] += 0;
            result[2] += 0.05952380952380952;
            result[3] += 0.35714285714285715;
            result[4] += 0;
            result[5] += 0.5714285714285714;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8165680473372781;
            result[4] += 0.005917159763313609;
            result[5] += 0.17751479289940827;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c20000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0.061224489795918366;
            result[1] += 0.061224489795918366;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8571428571428571;
            result[5] += 0.02040816326530612;
          } else {
            result[0] += 0;
            result[1] += 0.8222222222222222;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.17777777777777778;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8846153846153846;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.11538461538461539;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0.125;
            result[1] += 0.041666666666666664;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.10416666666666667;
            result[5] += 0.7291666666666666;
          } else {
            result[0] += 0.1310344827586207;
            result[1] += 0.11724137931034483;
            result[2] += 0.041379310344827586;
            result[3] += 0.3586206896551724;
            result[4] += 0.027586206896551724;
            result[5] += 0.32413793103448274;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0.8538205980066446;
            result[1] += 0.01079734219269103;
            result[2] += 0.0016611295681063123;
            result[3] += 0.029069767441860465;
            result[4] += 0.06727574750830564;
            result[5] += 0.03737541528239203;
          } else {
            result[0] += 0.16279069767441864;
            result[1] += 0.0558139534883721;
            result[2] += 0.36744186046511634;
            result[3] += 0.2418604651162791;
            result[4] += 0.051162790697674425;
            result[5] += 0.12093023255813955;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02564102564102564;
            result[3] += 0.9487179487179487;
            result[4] += 0;
            result[5] += 0.02564102564102564;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.45454545454545453;
            result[3] += 0.45454545454545453;
            result[4] += 0;
            result[5] += 0.09090909090909091;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.35714285714285715;
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
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.45614035087719296;
            result[3] += 0.42105263157894735;
            result[4] += 0;
            result[5] += 0.12280701754385964;
          } else {
            result[0] += 0.029411764705882353;
            result[1] += 0;
            result[2] += 0.8529411764705882;
            result[3] += 0.08823529411764706;
            result[4] += 0;
            result[5] += 0.029411764705882353;
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
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428e0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42d70000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.8;
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
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.875;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.125;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0.020547945205479454;
            result[1] += 0;
            result[2] += 0.7945205479452055;
            result[3] += 0.15068493150684933;
            result[4] += 0.013698630136986302;
            result[5] += 0.020547945205479454;
          } else {
            result[0] += 0.008708272859216255;
            result[1] += 0;
            result[2] += 0.95355587808418;
            result[3] += 0.03773584905660377;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429e0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.05128205128205128;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.07692307692307693;
            result[4] += 0.6923076923076923;
            result[5] += 0.1794871794871795;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427c0000))) ) ) {
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
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
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
            result[3] += 0.03155006858710562;
            result[4] += 0.03292181069958848;
            result[5] += 0.9355281207133059;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0.5060240963855421;
            result[1] += 0.14457831325301204;
            result[2] += 0;
            result[3] += 0.03614457831325301;
            result[4] += 0.30120481927710846;
            result[5] += 0.012048192771084338;
          } else {
            result[0] += 0.009876543209876543;
            result[1] += 0.0024691358024691358;
            result[2] += 0.0024691358024691358;
            result[3] += 0.4666666666666667;
            result[4] += 0.07654320987654321;
            result[5] += 0.4419753086419753;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x424a0000))) ) ) {
            result[0] += 0;
            result[1] += 0.9166666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.08333333333333333;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.10344827586206896;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.896551724137931;
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
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0.5284552845528455;
            result[1] += 0.08130081300813008;
            result[2] += 0;
            result[3] += 0.016260162601626018;
            result[4] += 0.23577235772357724;
            result[5] += 0.13821138211382114;
          } else {
            result[0] += 0.08896797153024912;
            result[1] += 0.06405693950177936;
            result[2] += 0.07829181494661921;
            result[3] += 0.27402135231316727;
            result[4] += 0.05693950177935943;
            result[5] += 0.4377224199288256;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0.83768115942029;
            result[1] += 0.015458937198067634;
            result[2] += 0.0028985507246376816;
            result[3] += 0.013526570048309181;
            result[4] += 0.127536231884058;
            result[5] += 0.0028985507246376816;
          } else {
            result[0] += 0.3020833333333333;
            result[1] += 0.020833333333333332;
            result[2] += 0.3472222222222222;
            result[3] += 0.16319444444444445;
            result[4] += 0.08680555555555555;
            result[5] += 0.0798611111111111;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.21428571428571427;
            result[5] += 0.7857142857142857;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.17857142857142858;
            result[3] += 0.2857142857142857;
            result[4] += 0;
            result[5] += 0.5357142857142857;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0.2;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0625;
            result[5] += 0.9375;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.36082474226804123;
            result[3] += 0.6288659793814433;
            result[4] += 0;
            result[5] += 0.010309278350515464;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8142857142857143;
            result[3] += 0.11428571428571428;
            result[4] += 0;
            result[5] += 0.07142857142857142;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0.6666666666666666;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.8333333333333334;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2857142857142857;
            result[3] += 0.5714285714285714;
            result[4] += 0;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8301886792452831;
            result[3] += 0.16981132075471697;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0.45454545454545453;
            result[1] += 0;
            result[2] += 0.5454545454545454;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.007052186177715092;
            result[1] += 0;
            result[2] += 0.9661495063469676;
            result[3] += 0.02679830747531735;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0.01171875;
            result[1] += 0.0078125;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.96875;
            result[5] += 0.01171875;
          } else {
            result[0] += 0;
            result[1] += 0.043478260869565216;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6739130434782609;
            result[5] += 0.2826086956521739;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 0.8494623655913979;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.12903225806451613;
            result[5] += 0.021505376344086023;
          } else {
            result[0] += 0.18421052631578946;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2894736842105263;
            result[5] += 0.5263157894736842;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42800000))) ) ) {
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
            result[3] += 0.018072289156626505;
            result[4] += 0.01355421686746988;
            result[5] += 0.9683734939759037;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0.0975609756097561;
            result[1] += 0.1951219512195122;
            result[2] += 0;
            result[3] += 0.024390243902439025;
            result[4] += 0.4878048780487805;
            result[5] += 0.1951219512195122;
          } else {
            result[0] += 0;
            result[1] += 0.0031545741324921135;
            result[2] += 0.006309148264984227;
            result[3] += 0.23659305993690852;
            result[4] += 0.11041009463722397;
            result[5] += 0.6435331230283912;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42580000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 0.75;
            result[2] += 0;
            result[3] += 0.05;
            result[4] += 0.175;
            result[5] += 0.025;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.09090909090909091;
            result[4] += 0.9090909090909091;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0.0273972602739726;
            result[1] += 0.6438356164383562;
            result[2] += 0;
            result[3] += 0.0273972602739726;
            result[4] += 0.3013698630136986;
            result[5] += 0;
          } else {
            result[0] += 0.843065693430657;
            result[1] += 0.004562043795620438;
            result[2] += 0.0009124087591240876;
            result[3] += 0.01916058394160584;
            result[4] += 0.09580291970802919;
            result[5] += 0.0364963503649635;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0.022222222222222223;
            result[1] += 0.013333333333333334;
            result[2] += 0.12;
            result[3] += 0.49333333333333335;
            result[4] += 0.017777777777777778;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0.5419354838709678;
            result[1] += 0.0064516129032258064;
            result[2] += 0.3225806451612903;
            result[3] += 0.012903225806451613;
            result[4] += 0.06451612903225806;
            result[5] += 0.05161290322580645;
          }
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 0.043478260869565216;
            result[1] += 0.32608695652173914;
            result[2] += 0.021739130434782608;
            result[3] += 0.021739130434782608;
            result[4] += 0.13043478260869565;
            result[5] += 0.45652173913043476;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3176470588235294;
            result[3] += 0.5647058823529412;
            result[4] += 0;
            result[5] += 0.11764705882352941;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42dd0000))) ) ) {
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
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42aa0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.52;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0.08;
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
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b90000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
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
            result[4] += 0.08333333333333333;
            result[5] += 0.9166666666666666;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ac0000))) ) ) {
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
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42900000))) ) ) {
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
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.003444316877152698;
            result[1] += 0;
            result[2] += 0.9460390355912744;
            result[3] += 0.045924225028702644;
            result[4] += 0;
            result[5] += 0.004592422502870264;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c80000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9939393939393939;
            result[5] += 0.006060606060606061;
          } else {
            result[0] += 0;
            result[1] += 0.012195121951219513;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7195121951219512;
            result[5] += 0.2682926829268293;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9642857142857143;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.03571428571428571;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0.0014245014245014246;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.019943019943019943;
            result[4] += 0.03418803418803419;
            result[5] += 0.9444444444444444;
          } else {
            result[0] += 0.03333333333333333;
            result[1] += 0;
            result[2] += 0.06;
            result[3] += 0.15333333333333332;
            result[4] += 0.10666666666666667;
            result[5] += 0.6466666666666666;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0.9305555555555557;
            result[1] += 0.01388888888888889;
            result[2] += 0.01388888888888889;
            result[3] += 0;
            result[4] += 0.04166666666666667;
            result[5] += 0;
          } else {
            result[0] += 0.03571428571428571;
            result[1] += 0;
            result[2] += 0.022321428571428572;
            result[3] += 0.47098214285714285;
            result[4] += 0.10491071428571429;
            result[5] += 0.36607142857142855;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c20000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0.1506849315068493;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8493150684931506;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.3188405797101449;
            result[2] += 0.07246376811594203;
            result[3] += 0.07246376811594203;
            result[4] += 0.2898550724637681;
            result[5] += 0.2463768115942029;
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
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0.04651162790697675;
            result[1] += 0.558139534883721;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.34883720930232565;
            result[5] += 0.04651162790697675;
          } else {
            result[0] += 0.8858162355040142;
            result[1] += 0.003568242640499554;
            result[2] += 0;
            result[3] += 0.03479036574487065;
            result[4] += 0.039250669045495096;
            result[5] += 0.036574487065120426;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42e80000))) ) ) {
            result[0] += 0.06168831168831169;
            result[1] += 0.06818181818181818;
            result[2] += 0.31493506493506496;
            result[3] += 0.23376623376623376;
            result[4] += 0.07792207792207792;
            result[5] += 0.2435064935064935;
          } else {
            result[0] += 0.891304347826087;
            result[1] += 0;
            result[2] += 0.06521739130434784;
            result[3] += 0;
            result[4] += 0.04347826086956522;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
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
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0.027777777777777776;
            result[2] += 0.027777777777777776;
            result[3] += 0.8333333333333334;
            result[4] += 0;
            result[5] += 0.1111111111111111;
          } else {
            result[0] += 0;
            result[1] += 0.045454545454545456;
            result[2] += 0.4090909090909091;
            result[3] += 0.3181818181818182;
            result[4] += 0;
            result[5] += 0.22727272727272727;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e40000))) ) ) {
            result[0] += 0;
            result[1] += 0.058823529411764705;
            result[2] += 0;
            result[3] += 0.11764705882352941;
            result[4] += 0;
            result[5] += 0.8235294117647058;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42700000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7971014492753624;
            result[3] += 0.08695652173913045;
            result[4] += 0;
            result[5] += 0.11594202898550726;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7162162162162162;
            result[3] += 0.2702702702702703;
            result[4] += 0;
            result[5] += 0.013513513513513514;
          } else {
            result[0] += 0.04878048780487805;
            result[1] += 0;
            result[2] += 0.8731707317073171;
            result[3] += 0.06341463414634146;
            result[4] += 0;
            result[5] += 0.014634146341463415;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42e30000))) ) ) {
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
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a60000))) ) ) {
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
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.875;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9834862385321101;
            result[3] += 0.01651376146788991;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0.0078125;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.00390625;
            result[4] += 0.98046875;
            result[5] += 0.0078125;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.14285714285714285;
            result[4] += 0.2857142857142857;
            result[5] += 0.5714285714285714;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x428e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.4;
            result[2] += 0.2;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0.1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9;
            result[5] += 0;
          } else {
            result[0] += 0.975609756097561;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.024390243902439025;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.01756756756756757;
            result[4] += 0.03918918918918919;
            result[5] += 0.9432432432432433;
          } else {
            result[0] += 0.006349206349206349;
            result[1] += 0.0031746031746031746;
            result[2] += 0.0015873015873015873;
            result[3] += 0.3825396825396825;
            result[4] += 0.12222222222222222;
            result[5] += 0.48412698412698413;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0.05172413793103448;
            result[1] += 0.034482758620689655;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.896551724137931;
            result[5] += 0.017241379310344827;
          } else {
            result[0] += 0.05263157894736842;
            result[1] += 0.8947368421052632;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05263157894736842;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x425a0000))) ) ) {
            result[0] += 0;
            result[1] += 0.9950980392156863;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.004901960784313725;
            result[5] += 0;
          } else {
            result[0] += 0.17647058823529413;
            result[1] += 0.5294117647058824;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.29411764705882354;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0.05172413793103448;
            result[1] += 0.5689655172413793;
            result[2] += 0.05172413793103448;
            result[3] += 0.22413793103448276;
            result[4] += 0.017241379310344827;
            result[5] += 0.08620689655172414;
          } else {
            result[0] += 0.902830188679245;
            result[1] += 0.012264150943396224;
            result[2] += 0.0037735849056603765;
            result[3] += 0.0160377358490566;
            result[4] += 0.06132075471698112;
            result[5] += 0.0037735849056603765;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0.0036496350364963502;
            result[1] += 0.06569343065693431;
            result[2] += 0.26277372262773724;
            result[3] += 0.3722627737226277;
            result[4] += 0.09854014598540146;
            result[5] += 0.19708029197080293;
          } else {
            result[0] += 0.6166666666666667;
            result[1] += 0.025;
            result[2] += 0.21666666666666667;
            result[3] += 0;
            result[4] += 0.13333333333333333;
            result[5] += 0.008333333333333333;
          }
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.057692307692307696;
            result[3] += 0.7884615384615384;
            result[4] += 0;
            result[5] += 0.15384615384615385;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8571428571428571;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9047619047619048;
            result[3] += 0.047619047619047616;
            result[4] += 0;
            result[5] += 0.047619047619047616;
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
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5833333333333334;
            result[3] += 0.08333333333333333;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2413793103448276;
            result[3] += 0.6896551724137931;
            result[4] += 0;
            result[5] += 0.06896551724137931;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
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
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x426c0000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.02464788732394366;
            result[1] += 0;
            result[2] += 0.8028169014084507;
            result[3] += 0.1443661971830986;
            result[4] += 0.0035211267605633804;
            result[5] += 0.02464788732394366;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9763779527559056;
            result[3] += 0.02047244094488189;
            result[4] += 0;
            result[5] += 0.0031496062992125984;
          }
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x428e0000))) ) ) {
            result[0] += 0;
            result[1] += 0.0044444444444444444;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9955555555555555;
            result[5] += 0;
          } else {
            result[0] += 0.14285714285714285;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6428571428571429;
            result[5] += 0.21428571428571427;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16666666666666666;
            result[5] += 0.8333333333333334;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.875;
            result[5] += 0.125;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42af0000))) ) ) {
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
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42810000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03636363636363636;
            result[4] += 0.7818181818181819;
            result[5] += 0.18181818181818182;
          } else {
            result[0] += 0.7021276595744681;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1276595744680851;
            result[5] += 0.1702127659574468;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0.004962779156327543;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.028535980148883373;
            result[4] += 0.04218362282878412;
            result[5] += 0.924317617866005;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.27941176470588236;
            result[4] += 0.17647058823529413;
            result[5] += 0.5441176470588235;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42660000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0.05555555555555555;
            result[4] += 0.2222222222222222;
            result[5] += 0.2222222222222222;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0.007220216606498195;
            result[1] += 0;
            result[2] += 0.032490974729241874;
            result[3] += 0.6209386281588448;
            result[4] += 0.02888086642599278;
            result[5] += 0.3104693140794224;
          } else {
            result[0] += 0.02857142857142857;
            result[1] += 0.02857142857142857;
            result[2] += 0.2571428571428571;
            result[3] += 0.08571428571428572;
            result[4] += 0;
            result[5] += 0.6;
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0.07142857142857142;
            result[1] += 0.07142857142857142;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8571428571428571;
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
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0.47368421052631576;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5263157894736842;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9886621315192744;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.011337868480725623;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42980000))) ) ) {
            result[0] += 0.4153846153846153;
            result[1] += 0.1692307692307692;
            result[2] += 0.015384615384615382;
            result[3] += 0.04615384615384615;
            result[4] += 0.06153846153846153;
            result[5] += 0.29230769230769227;
          } else {
            result[0] += 0.061224489795918366;
            result[1] += 0.047619047619047616;
            result[2] += 0.047619047619047616;
            result[3] += 0.2789115646258503;
            result[4] += 0.034013605442176874;
            result[5] += 0.5306122448979592;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0.9019607843137255;
            result[1] += 0.017740429505135387;
            result[2] += 0.0009337068160597573;
            result[3] += 0.014005602240896359;
            result[4] += 0.059757236227824466;
            result[5] += 0.0056022408963585435;
          } else {
            result[0] += 0.3351063829787234;
            result[1] += 0.05851063829787234;
            result[2] += 0.18085106382978725;
            result[3] += 0.16489361702127658;
            result[4] += 0.11170212765957446;
            result[5] += 0.14893617021276595;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.10476190476190476;
            result[3] += 0.6666666666666666;
            result[4] += 0.05714285714285714;
            result[5] += 0.17142857142857143;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.525;
            result[3] += 0.35;
            result[4] += 0;
            result[5] += 0.125;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0.33333333333333337;
            result[2] += 0;
            result[3] += 0.16666666666666669;
            result[4] += 0.33333333333333337;
            result[5] += 0.16666666666666669;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8846153846153846;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.11538461538461539;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0.046511627906976744;
            result[1] += 0;
            result[2] += 0.627906976744186;
            result[3] += 0.11627906976744186;
            result[4] += 0.023255813953488372;
            result[5] += 0.18604651162790697;
          } else {
            result[0] += 0.7307692307692307;
            result[1] += 0.15384615384615385;
            result[2] += 0.11538461538461539;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8571428571428571;
          } else {
            result[0] += 0.011316872427983541;
            result[1] += 0;
            result[2] += 0.9135802469135803;
            result[3] += 0.05967078189300412;
            result[4] += 0.0010288065843621402;
            result[5] += 0.014403292181069961;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429e0000))) ) ) {
            result[0] += 0.00392156862745098;
            result[1] += 0.011764705882352941;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9725490196078431;
            result[5] += 0.011764705882352941;
          } else {
            result[0] += 0;
            result[1] += 0.8571428571428571;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.14285714285714285;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42880000))) ) ) {
            result[0] += 0.041666666666666664;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2916666666666667;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0.8679245283018868;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1320754716981132;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0.002398081534772182;
            result[1] += 0.001199040767386091;
            result[2] += 0.002398081534772182;
            result[3] += 0.025179856115107913;
            result[4] += 0.04316546762589928;
            result[5] += 0.9256594724220624;
          } else {
            result[0] += 0.038461538461538464;
            result[1] += 0;
            result[2] += 0.038461538461538464;
            result[3] += 0.11538461538461539;
            result[4] += 0.5576923076923077;
            result[5] += 0.25;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0.042682926829268296;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2682926829268293;
            result[4] += 0.036585365853658534;
            result[5] += 0.6524390243902439;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.005494505494505495;
            result[3] += 0.6923076923076923;
            result[4] += 0;
            result[5] += 0.3021978021978022;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0.040268456375838924;
            result[1] += 0.28187919463087246;
            result[2] += 0;
            result[3] += 0.06040268456375839;
            result[4] += 0.5838926174496645;
            result[5] += 0.03355704697986577;
          } else {
            result[0] += 0.8255528255528255;
            result[1] += 0.02375102375102375;
            result[2] += 0.004914004914004914;
            result[3] += 0.0343980343980344;
            result[4] += 0.05733005733005733;
            result[5] += 0.05405405405405406;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0.009966777408637873;
            result[1] += 0.036544850498338874;
            result[2] += 0.2026578073089701;
            result[3] += 0.42524916943521596;
            result[4] += 0.06312292358803986;
            result[5] += 0.26245847176079734;
          } else {
            result[0] += 0.5595238095238095;
            result[1] += 0;
            result[2] += 0.2261904761904762;
            result[3] += 0;
            result[4] += 0.21428571428571427;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0.0025575447570332483;
            result[1] += 0.9974424552429667;
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
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07792207792207792;
            result[3] += 0.7922077922077922;
            result[4] += 0;
            result[5] += 0.12987012987012986;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5652173913043479;
            result[3] += 0.26086956521739135;
            result[4] += 0.08695652173913045;
            result[5] += 0.08695652173913045;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ee0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5454545454545454;
            result[3] += 0.45454545454545453;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.05555555555555555;
            result[1] += 0;
            result[2] += 0.8611111111111112;
            result[3] += 0.08333333333333333;
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
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.48;
            result[3] += 0.52;
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
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7380952380952381;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0.11904761904761904;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0.8;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.00375;
            result[1] += 0;
            result[2] += 0.95125;
            result[3] += 0.04125;
            result[4] += 0;
            result[5] += 0.00375;
          }
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b80000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9850187265917603;
            result[5] += 0.0149812734082397;
          } else {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c30000))) ) ) {
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
            result[3] += 0;
            result[4] += 0.75;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42800000))) ) ) {
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
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42840000))) ) ) {
            result[0] += 0.05;
            result[1] += 0.25;
            result[2] += 0;
            result[3] += 0.05;
            result[4] += 0.6;
            result[5] += 0.05;
          } else {
            result[0] += 0.9142857142857143;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.08571428571428572;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.016975308641975308;
            result[4] += 0.010802469135802469;
            result[5] += 0.9722222222222222;
          } else {
            result[0] += 0.006578947368421052;
            result[1] += 0.03618421052631579;
            result[2] += 0.003289473684210526;
            result[3] += 0.16776315789473684;
            result[4] += 0.12171052631578948;
            result[5] += 0.6644736842105263;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8857142857142857;
            result[4] += 0;
            result[5] += 0.11428571428571428;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05;
            result[3] += 0.15;
            result[4] += 0.1;
            result[5] += 0.7;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07142857142857142;
            result[3] += 0.2857142857142857;
            result[4] += 0;
            result[5] += 0.6428571428571429;
          } else {
            result[0] += 0.07692307692307693;
            result[1] += 0;
            result[2] += 0.6923076923076923;
            result[3] += 0.15384615384615385;
            result[4] += 0;
            result[5] += 0.07692307692307693;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42420000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0.3333333333333333;
            result[2] += 0;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.997624703087886;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0023752969121140144;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0.1111111111111111;
            result[1] += 0.1111111111111111;
            result[2] += 0;
            result[3] += 0.2962962962962963;
            result[4] += 0.48148148148148145;
            result[5] += 0;
          } else {
            result[0] += 0.13333333333333333;
            result[1] += 0.8666666666666667;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42300000))) ) ) {
            result[0] += 0;
            result[1] += 0.8679245283018868;
            result[2] += 0;
            result[3] += 0.05660377358490566;
            result[4] += 0.07547169811320754;
            result[5] += 0;
          } else {
            result[0] += 0.1391304347826087;
            result[1] += 0.11304347826086956;
            result[2] += 0;
            result[3] += 0.008695652173913044;
            result[4] += 0.7217391304347827;
            result[5] += 0.017391304347826087;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0.8777876895628903;
            result[1] += 0.001784121320249777;
            result[2] += 0.019625334522747548;
            result[3] += 0.01784121320249777;
            result[4] += 0.06155218554861731;
            result[5] += 0.021409455842997322;
          } else {
            result[0] += 0.3444976076555024;
            result[1] += 0;
            result[2] += 0.05741626794258373;
            result[3] += 0.20574162679425836;
            result[4] += 0.18181818181818182;
            result[5] += 0.21052631578947367;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42520000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.017699115044247787;
            result[3] += 0.18584070796460178;
            result[4] += 0.08849557522123894;
            result[5] += 0.7079646017699115;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0.009900990099009901;
            result[1] += 0;
            result[2] += 0.09900990099009901;
            result[3] += 0.6435643564356436;
            result[4] += 0.0297029702970297;
            result[5] += 0.21782178217821782;
          } else {
            result[0] += 0.02564102564102564;
            result[1] += 0;
            result[2] += 0.5641025641025641;
            result[3] += 0.2692307692307692;
            result[4] += 0;
            result[5] += 0.14102564102564102;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7777777777777778;
            result[4] += 0;
            result[5] += 0.2222222222222222;
          } else {
            result[0] += 0.02702702702702703;
            result[1] += 0;
            result[2] += 0.6756756756756757;
            result[3] += 0.16216216216216217;
            result[4] += 0;
            result[5] += 0.13513513513513514;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0.03496503496503497;
            result[1] += 0;
            result[2] += 0.8251748251748252;
            result[3] += 0.12121212121212122;
            result[4] += 0;
            result[5] += 0.018648018648018648;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9873646209386282;
            result[3] += 0.010830324909747292;
            result[4] += 0;
            result[5] += 0.0018050541516245488;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.946969696969697;
            result[5] += 0.05303030303030303;
          } else {
            result[0] += 0.13333333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5333333333333333;
            result[5] += 0.3333333333333333;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7142857142857143;
            result[5] += 0.2857142857142857;
          } else {
            result[0] += 0;
            result[1] += 0.36363636363636365;
            result[2] += 0;
            result[3] += 0.6363636363636364;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8571428571428571;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.01879194630872483;
            result[4] += 0.0174496644295302;
            result[5] += 0.963758389261745;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0.13994169096209916;
            result[1] += 0.002915451895043732;
            result[2] += 0.002915451895043732;
            result[3] += 0.13119533527696794;
            result[4] += 0.17492711370262393;
            result[5] += 0.5481049562682216;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.004608294930875577;
            result[3] += 0.7235023041474655;
            result[4] += 0.009216589861751154;
            result[5] += 0.26267281105990786;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c40000))) ) ) {
            result[0] += 0;
            result[1] += 0.08196721311475409;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9180327868852459;
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
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0.7083333333333334;
            result[2] += 0;
            result[3] += 0.041666666666666664;
            result[4] += 0.20833333333333334;
            result[5] += 0.041666666666666664;
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
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0.05813953488372093;
            result[1] += 0.5581395348837209;
            result[2] += 0;
            result[3] += 0.011627906976744186;
            result[4] += 0.37209302325581395;
            result[5] += 0;
          } else {
            result[0] += 0.9000989119683481;
            result[1] += 0.002967359050445104;
            result[2] += 0.0019782393669634025;
            result[3] += 0.018793273986152326;
            result[4] += 0.06627101879327399;
            result[5] += 0.009891196834817012;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0.02894736842105263;
            result[1] += 0.02368421052631579;
            result[2] += 0.25263157894736843;
            result[3] += 0.40789473684210525;
            result[4] += 0.002631578947368421;
            result[5] += 0.28421052631578947;
          } else {
            result[0] += 0.6293103448275862;
            result[1] += 0.017241379310344827;
            result[2] += 0.20689655172413793;
            result[3] += 0.017241379310344827;
            result[4] += 0.11206896551724138;
            result[5] += 0.017241379310344827;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428a0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42a40000))) ) ) {
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
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.35294117647058826;
            result[3] += 0;
            result[4] += 0.17647058823529413;
            result[5] += 0.47058823529411764;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.20000000000000004;
            result[3] += 0.7000000000000001;
            result[4] += 0;
            result[5] += 0.10000000000000002;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13636363636363635;
            result[3] += 0.7727272727272727;
            result[4] += 0;
            result[5] += 0.09090909090909091;
          } else {
            result[0] += 0;
            result[1] += 0.28571428571428575;
            result[2] += 0.4285714285714286;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.28571428571428575;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0.0761904761904762;
            result[1] += 0.009523809523809525;
            result[2] += 0.5904761904761905;
            result[3] += 0.23809523809523808;
            result[4] += 0;
            result[5] += 0.08571428571428572;
          } else {
            result[0] += 0.006472491909385114;
            result[1] += 0;
            result[2] += 0.8511326860841424;
            result[3] += 0.13592233009708737;
            result[4] += 0;
            result[5] += 0.006472491909385114;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429e0000))) ) ) {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9899328859060402;
            result[3] += 0.010067114093959731;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ac0000))) ) ) {
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
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.990521327014218;
            result[5] += 0.009478672985781991;
          } else {
            result[0] += 0.33783783783783783;
            result[1] += 0.13513513513513514;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2905405405405405;
            result[5] += 0.23648648648648649;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03754266211604096;
            result[4] += 0.053469852104664393;
            result[5] += 0.9089874857792947;
          } else {
            result[0] += 0.007272727272727274;
            result[1] += 0.04727272727272728;
            result[2] += 0.010909090909090912;
            result[3] += 0.5781818181818182;
            result[4] += 0.029090909090909094;
            result[5] += 0.3272727272727273;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0.00909090909090909;
            result[1] += 0.02727272727272727;
            result[2] += 0;
            result[3] += 0.01818181818181818;
            result[4] += 0.9181818181818182;
            result[5] += 0.02727272727272727;
          } else {
            result[0] += 0.038461538461538464;
            result[1] += 0.9038461538461539;
            result[2] += 0.019230769230769232;
            result[3] += 0;
            result[4] += 0.038461538461538464;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0.8853503184713376;
            result[1] += 0.003639672429481347;
            result[2] += 0.0018198362147406734;
            result[3] += 0.01637852593266606;
            result[4] += 0.07643312101910828;
            result[5] += 0.01637852593266606;
          } else {
            result[0] += 0.2425249169435216;
            result[1] += 0.013289036544850499;
            result[2] += 0.10963455149501661;
            result[3] += 0.18604651162790697;
            result[4] += 0.14950166112956811;
            result[5] += 0.29900332225913623;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.125;
            result[5] += 0.875;
          } else {
            result[0] += 0;
            result[1] += 0.042682926829268296;
            result[2] += 0.07926829268292683;
            result[3] += 0.6890243902439024;
            result[4] += 0.036585365853658534;
            result[5] += 0.1524390243902439;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.1;
            result[4] += 0;
            result[5] += 0.7;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8636363636363636;
            result[3] += 0.045454545454545456;
            result[4] += 0;
            result[5] += 0.09090909090909091;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.6666666666666666;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42dc0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9076923076923077;
            result[3] += 0.07692307692307693;
            result[4] += 0;
            result[5] += 0.015384615384615385;
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
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42740000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.11764705882352941;
            result[1] += 0.08823529411764706;
            result[2] += 0.23529411764705882;
            result[3] += 0.058823529411764705;
            result[4] += 0.11764705882352941;
            result[5] += 0.38235294117647056;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0;
            result[4] += 0.25;
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
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.024193548387096774;
            result[1] += 0;
            result[2] += 0.6451612903225806;
            result[3] += 0.31451612903225806;
            result[4] += 0;
            result[5] += 0.016129032258064516;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.02236024844720497;
            result[1] += 0;
            result[2] += 0.9366459627329192;
            result[3] += 0.03850931677018633;
            result[4] += 0;
            result[5] += 0.002484472049689441;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0.009523809523809526;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9841269841269842;
            result[5] += 0.00634920634920635;
          } else {
            result[0] += 0;
            result[1] += 0.875;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.125;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.07142857142857144;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8571428571428572;
            result[5] += 0.07142857142857144;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 0.058823529411764705;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9411764705882353;
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
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9230769230769231;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07692307692307693;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.7758620689655172;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.10344827586206896;
            result[4] += 0.06896551724137931;
            result[5] += 0.05172413793103448;
          } else {
            result[0] += 0.007231404958677686;
            result[1] += 0.0030991735537190084;
            result[2] += 0;
            result[3] += 0.05268595041322314;
            result[4] += 0.05268595041322314;
            result[5] += 0.8842975206611571;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.16037735849056603;
            result[4] += 0.1320754716981132;
            result[5] += 0.7075471698113207;
          } else {
            result[0] += 0.010752688172043012;
            result[1] += 0.005376344086021506;
            result[2] += 0.005376344086021506;
            result[3] += 0.7043010752688172;
            result[4] += 0.010752688172043012;
            result[5] += 0.26344086021505375;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0.2764227642276423;
            result[1] += 0.16260162601626016;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5040650406504065;
            result[5] += 0.056910569105691054;
          } else {
            result[0] += 0.8907317073170732;
            result[1] += 0.013658536585365854;
            result[2] += 0.000975609756097561;
            result[3] += 0.021463414634146343;
            result[4] += 0.06146341463414634;
            result[5] += 0.011707317073170732;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0.027777777777777776;
            result[1] += 0.009259259259259259;
            result[2] += 0.10648148148148148;
            result[3] += 0.5231481481481481;
            result[4] += 0.05555555555555555;
            result[5] += 0.2777777777777778;
          } else {
            result[0] += 0.20121951219512196;
            result[1] += 0;
            result[2] += 0.5487804878048781;
            result[3] += 0.12195121951219512;
            result[4] += 0.024390243902439025;
            result[5] += 0.10365853658536585;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0.6;
            result[2] += 0.2;
            result[3] += 0.1;
            result[4] += 0.1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.041666666666666664;
            result[2] += 0.013888888888888888;
            result[3] += 0.20833333333333334;
            result[4] += 0.027777777777777776;
            result[5] += 0.7083333333333334;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8888888888888888;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.1111111111111111;
          } else {
            result[0] += 0.33333333333333337;
            result[1] += 0.25000000000000006;
            result[2] += 0;
            result[3] += 0.16666666666666669;
            result[4] += 0.16666666666666669;
            result[5] += 0.08333333333333334;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 0.014084507042253521;
            result[2] += 0.2112676056338028;
            result[3] += 0.704225352112676;
            result[4] += 0;
            result[5] += 0.07042253521126761;
          } else {
            result[0] += 0.125;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.125;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.03333333333333333;
            result[1] += 0;
            result[2] += 0.8666666666666667;
            result[3] += 0.06666666666666667;
            result[4] += 0;
            result[5] += 0.03333333333333333;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42d10000))) ) ) {
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
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8830645161290323;
            result[3] += 0.0967741935483871;
            result[4] += 0;
            result[5] += 0.020161290322580645;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5714285714285714;
            result[3] += 0.42857142857142855;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0.19999999999999996;
            result[1] += 0;
            result[2] += 0.7666666666666665;
            result[3] += 0.033333333333333326;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9792;
            result[3] += 0.0208;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0.008298755186721993;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9792531120331951;
            result[5] += 0.012448132780082988;
          } else {
            result[0] += 0.1935483870967742;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.16129032258064516;
            result[4] += 0.25806451612903225;
            result[5] += 0.3870967741935484;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.7931034482758621;
            result[2] += 0;
            result[3] += 0.06896551724137931;
            result[4] += 0.10344827586206896;
            result[5] += 0.034482758620689655;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.6808510638297873;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.27659574468085113;
            result[5] += 0.04255319148936171;
          } else {
            result[0] += 0.002242152466367713;
            result[1] += 0;
            result[2] += 0.0011210762331838565;
            result[3] += 0.042600896860986545;
            result[4] += 0.061659192825112105;
            result[5] += 0.8923766816143498;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0.7391304347826088;
            result[1] += 0.08695652173913045;
            result[2] += 0;
            result[3] += 0.01449275362318841;
            result[4] += 0.15942028985507248;
            result[5] += 0;
          } else {
            result[0] += 0.0071090047393364926;
            result[1] += 0.014218009478672985;
            result[2] += 0.011848341232227487;
            result[3] += 0.518957345971564;
            result[4] += 0.03317535545023697;
            result[5] += 0.4146919431279621;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0.05263157894736842;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9473684210526315;
            result[5] += 0;
          } else {
            result[0] += 0.07142857142857144;
            result[1] += 0.8214285714285715;
            result[2] += 0.03571428571428572;
            result[3] += 0;
            result[4] += 0.07142857142857144;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c40000))) ) ) {
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
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0.01886792452830189;
            result[1] += 0.2924528301886793;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6603773584905661;
            result[5] += 0.028301886792452834;
          } else {
            result[0] += 0.8624338624338624;
            result[1] += 0.010582010582010581;
            result[2] += 0.012345679012345678;
            result[3] += 0.0291005291005291;
            result[4] += 0.06349206349206349;
            result[5] += 0.02204585537918871;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42df0000))) ) ) {
            result[0] += 0.04032258064516129;
            result[1] += 0.012096774193548387;
            result[2] += 0.25806451612903225;
            result[3] += 0.28225806451612906;
            result[4] += 0.0967741935483871;
            result[5] += 0.31048387096774194;
          } else {
            result[0] += 0.86;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.14;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0847457627118644;
            result[3] += 0.8305084745762712;
            result[4] += 0;
            result[5] += 0.0847457627118644;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666667;
            result[3] += 0.16666666666666669;
            result[4] += 0;
            result[5] += 0.16666666666666669;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42840000))) ) ) {
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
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c50000))) ) ) {
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
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0.14285714285714285;
            result[1] += 0;
            result[2] += 0.42857142857142855;
            result[3] += 0.2857142857142857;
            result[4] += 0;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9454545454545454;
            result[3] += 0.03636363636363636;
            result[4] += 0;
            result[5] += 0.01818181818181818;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428a0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d60000))) ) ) {
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
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7352941176470589;
            result[3] += 0.17647058823529413;
            result[4] += 0;
            result[5] += 0.08823529411764706;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.008101851851851851;
            result[1] += 0;
            result[2] += 0.9456018518518519;
            result[3] += 0.03935185185185185;
            result[4] += 0;
            result[5] += 0.006944444444444444;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42420000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42870000))) ) ) {
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
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42520000))) ) ) {
            result[0] += 0;
            result[1] += 0.9090909090909091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.09090909090909091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3333333333333333;
            result[4] += 0.6666666666666666;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 0;
            result[1] += 0.9953596287703016;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.004640371229698376;
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
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0.007380073800738007;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.007380073800738007;
            result[4] += 0.915129151291513;
            result[5] += 0.07011070110701106;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0.005688282138794084;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03754266211604096;
            result[4] += 0.06143344709897611;
            result[5] += 0.8953356086461889;
          } else {
            result[0] += 0.11394891944990176;
            result[1] += 0.007858546168958742;
            result[2] += 0;
            result[3] += 0.40471512770137524;
            result[4] += 0.047151277013752456;
            result[5] += 0.4263261296660118;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0.08762886597938144;
            result[1] += 0.4072164948453608;
            result[2] += 0;
            result[3] += 0.010309278350515464;
            result[4] += 0.4896907216494845;
            result[5] += 0.005154639175257732;
          } else {
            result[0] += 0.8867562380038387;
            result[1] += 0.005758157389635317;
            result[2] += 0.0019193857965451055;
            result[3] += 0.029750479846449136;
            result[4] += 0.06333973128598848;
            result[5] += 0.012476007677543186;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0.012461059190031152;
            result[1] += 0.040498442367601244;
            result[2] += 0.2616822429906542;
            result[3] += 0.37383177570093457;
            result[4] += 0.040498442367601244;
            result[5] += 0.27102803738317754;
          } else {
            result[0] += 0.4427083333333333;
            result[1] += 0.005208333333333333;
            result[2] += 0.4114583333333333;
            result[3] += 0.010416666666666666;
            result[4] += 0.11458333333333333;
            result[5] += 0.015625;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b50000))) ) ) {
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
            result[3] += 0.9333333333333333;
            result[4] += 0;
            result[5] += 0.06666666666666667;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.576923076923077;
            result[3] += 0.3846153846153847;
            result[4] += 0;
            result[5] += 0.03846153846153847;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a50000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25925925925925924;
            result[3] += 0.07407407407407407;
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
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9583333333333334;
            result[3] += 0.041666666666666664;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42dc0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
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
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.004424778761061947;
            result[1] += 0;
            result[2] += 0.8451327433628318;
            result[3] += 0.13274336283185842;
            result[4] += 0;
            result[5] += 0.017699115044247787;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.001736111111111111;
            result[1] += 0;
            result[2] += 0.9756944444444444;
            result[3] += 0.019097222222222224;
            result[4] += 0;
            result[5] += 0.003472222222222222;
          }
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0.004672897196261682;
            result[1] += 0.02336448598130841;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9299065420560748;
            result[5] += 0.04205607476635514;
          } else {
            result[0] += 0.22105263157894736;
            result[1] += 0.010526315789473684;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5578947368421052;
            result[5] += 0.21052631578947367;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0.03278688524590164;
            result[1] += 0.26229508196721313;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7049180327868853;
            result[5] += 0;
          } else {
            result[0] += 0.896551724137931;
            result[1] += 0.0024630541871921183;
            result[2] += 0;
            result[3] += 0.009852216748768473;
            result[4] += 0.07142857142857142;
            result[5] += 0.019704433497536946;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8888888888888888;
            result[5] += 0.1111111111111111;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.004434589800443459;
            result[3] += 0.06319290465631928;
            result[4] += 0.04767184035476718;
            result[5] += 0.88470066518847;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0.001996007984031936;
            result[1] += 0.017964071856287425;
            result[2] += 0.011976047904191617;
            result[3] += 0.47105788423153694;
            result[4] += 0.09181636726546906;
            result[5] += 0.405189620758483;
          } else {
            result[0] += 0.34200743494423796;
            result[1] += 0.16356877323420077;
            result[2] += 0.02230483271375465;
            result[3] += 0.11895910780669146;
            result[4] += 0.2193308550185874;
            result[5] += 0.1338289962825279;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b20000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42980000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42700000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.7368421052631579;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2631578947368421;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428e0000))) ) ) {
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
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0.15789473684210525;
            result[1] += 0;
            result[2] += 0.10526315789473684;
            result[3] += 0.7368421052631579;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.8478260869565217;
            result[1] += 0;
            result[2] += 0.15217391304347827;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.625;
            result[4] += 0;
            result[5] += 0.375;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7837837837837838;
            result[3] += 0.05405405405405406;
            result[4] += 0.05405405405405406;
            result[5] += 0.10810810810810811;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a00000))) ) ) {
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
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0.9893992932862191;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.01060070671378092;
            result[5] += 0;
          } else {
            result[0] += 0.7272727272727273;
            result[1] += 0;
            result[2] += 0.2727272727272727;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.32038834951456313;
            result[3] += 0.5145631067961165;
            result[4] += 0;
            result[5] += 0.1650485436893204;
          } else {
            result[0] += 0.030612244897959183;
            result[1] += 0;
            result[2] += 0.6938775510204082;
            result[3] += 0.23469387755102042;
            result[4] += 0;
            result[5] += 0.04081632653061224;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0.2777777777777778;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0.2222222222222222;
            result[5] += 0;
          } else {
            result[0] += 0.875;
            result[1] += 0;
            result[2] += 0.08333333333333333;
            result[3] += 0.041666666666666664;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5063291139240507;
            result[3] += 0.34177215189873417;
            result[4] += 0;
            result[5] += 0.1518987341772152;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9642857142857143;
            result[3] += 0.03571428571428571;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0.006779661016949152;
            result[1] += 0;
            result[2] += 0.8711864406779661;
            result[3] += 0.11186440677966102;
            result[4] += 0;
            result[5] += 0.010169491525423728;
          } else {
            result[0] += 0.00408997955010225;
            result[1] += 0;
            result[2] += 0.9856850715746421;
            result[3] += 0.0081799591002045;
            result[4] += 0;
            result[5] += 0.002044989775051125;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42860000))) ) ) {
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
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ca0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0.002352941176470588;
            result[1] += 0.9835294117647059;
            result[2] += 0;
            result[3] += 0.004705882352941176;
            result[4] += 0.009411764705882352;
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
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0.004132231404958678;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9669421487603306;
            result[5] += 0.028925619834710745;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.28125;
            result[4] += 0.34375;
            result[5] += 0.375;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0.0039946737683089215;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.023968042609853527;
            result[4] += 0.03062583222370173;
            result[5] += 0.9414114513981359;
          } else {
            result[0] += 0.09532710280373832;
            result[1] += 0.007476635514018692;
            result[2] += 0.005607476635514018;
            result[3] += 0.33271028037383177;
            result[4] += 0.09532710280373832;
            result[5] += 0.4635514018691589;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0.06837606837606838;
            result[1] += 0.1282051282051282;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7777777777777778;
            result[5] += 0.02564102564102564;
          } else {
            result[0] += 0.04761904761904762;
            result[1] += 0.9206349206349207;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.03174603174603175;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0.48181818181818187;
            result[1] += 0.019480519480519484;
            result[2] += 0.08181818181818183;
            result[3] += 0.18571428571428575;
            result[4] += 0.08701298701298703;
            result[5] += 0.14415584415584418;
          } else {
            result[0] += 0.8917808219178083;
            result[1] += 0.008219178082191782;
            result[2] += 0.0315068493150685;
            result[3] += 0.017808219178082195;
            result[4] += 0.0452054794520548;
            result[5] += 0.0054794520547945215;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9393939393939394;
            result[4] += 0;
            result[5] += 0.06060606060606061;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42910000))) ) ) {
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
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.35294117647058826;
            result[4] += 0;
            result[5] += 0.6470588235294118;
          } else {
            result[0] += 0.36363636363636365;
            result[1] += 0;
            result[2] += 0.5454545454545454;
            result[3] += 0;
            result[4] += 0.09090909090909091;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.47692307692307695;
            result[3] += 0.4461538461538462;
            result[4] += 0;
            result[5] += 0.07692307692307693;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8888888888888888;
            result[3] += 0.05555555555555555;
            result[4] += 0;
            result[5] += 0.05555555555555555;
          }
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42d70000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666669;
            result[3] += 0.6666666666666667;
            result[4] += 0;
            result[5] += 0.16666666666666669;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.7;
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
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9023255813953489;
            result[3] += 0.08837209302325583;
            result[4] += 0;
            result[5] += 0.00930232558139535;
          } else {
            result[0] += 0.00436046511627907;
            result[1] += 0;
            result[2] += 0.9738372093023255;
            result[3] += 0.02180232558139535;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42e30000))) ) ) {
            result[0] += 0.875;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.041666666666666664;
            result[1] += 0;
            result[2] += 0.9583333333333334;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b40000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42da0000))) ) ) {
            result[0] += 0.003676470588235294;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9705882352941176;
            result[5] += 0.025735294117647058;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
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
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.8333333333333334;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0.2807017543859649;
            result[1] += 0.008771929824561403;
            result[2] += 0;
            result[3] += 0.017543859649122806;
            result[4] += 0.49122807017543857;
            result[5] += 0.20175438596491227;
          } else {
            result[0] += 0;
            result[1] += 0.001059322033898305;
            result[2] += 0;
            result[3] += 0.04343220338983051;
            result[4] += 0.045550847457627115;
            result[5] += 0.909957627118644;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0.25316455696202533;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.10126582278481013;
            result[4] += 0.11392405063291139;
            result[5] += 0.5316455696202531;
          } else {
            result[0] += 0.0035087719298245615;
            result[1] += 0.010526315789473684;
            result[2] += 0.028070175438596492;
            result[3] += 0.631578947368421;
            result[4] += 0.010526315789473684;
            result[5] += 0.3157894736842105;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0.011363636363636364;
            result[1] += 0.26136363636363635;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7272727272727273;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8108108108108109;
            result[2] += 0;
            result[3] += 0.08108108108108109;
            result[4] += 0.05405405405405406;
            result[5] += 0.05405405405405406;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
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
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0.015873015873015872;
            result[1] += 0.6507936507936508;
            result[2] += 0;
            result[3] += 0.031746031746031744;
            result[4] += 0.30158730158730157;
            result[5] += 0;
          } else {
            result[0] += 0.8986046511627908;
            result[1] += 0.010232558139534885;
            result[2] += 0.013953488372093025;
            result[3] += 0.03162790697674419;
            result[4] += 0.0372093023255814;
            result[5] += 0.008372093023255816;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0.06167400881057269;
            result[1] += 0.004405286343612335;
            result[2] += 0.09251101321585903;
            result[3] += 0.3920704845814978;
            result[4] += 0.09691629955947137;
            result[5] += 0.3524229074889868;
          } else {
            result[0] += 0.35593220338983045;
            result[1] += 0.02259887005649717;
            result[2] += 0.4350282485875705;
            result[3] += 0.056497175141242924;
            result[4] += 0.0790960451977401;
            result[5] += 0.050847457627118633;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42dd0000))) ) ) {
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
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42900000))) ) ) {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9473684210526315;
            result[4] += 0;
            result[5] += 0.05263157894736842;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0.1111111111111111;
            result[1] += 0.2222222222222222;
            result[2] += 0.18518518518518517;
            result[3] += 0.037037037037037035;
            result[4] += 0;
            result[5] += 0.4444444444444444;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5421686746987951;
            result[3] += 0.3493975903614458;
            result[4] += 0.03614457831325301;
            result[5] += 0.07228915662650602;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4482758620689655;
            result[3] += 0.5517241379310345;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0.25;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c30000))) ) ) {
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
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0.004048582995951417;
            result[1] += 0;
            result[2] += 0.854251012145749;
            result[3] += 0.13360323886639677;
            result[4] += 0;
            result[5] += 0.008097165991902834;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.976027397260274;
            result[3] += 0.023972602739726026;
            result[4] += 0;
            result[5] += 0;
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
