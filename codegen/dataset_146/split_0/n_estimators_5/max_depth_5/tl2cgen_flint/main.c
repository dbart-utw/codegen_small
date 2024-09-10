
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
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ca0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.991701244813278;
            result[5] += 0.008298755186721992;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.676923076923077;
            result[5] += 0.3230769230769231;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42940000))) ) ) {
            result[0] += 0;
            result[1] += 0.8947368421052632;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.10526315789473684;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.07692307692307693;
            result[2] += 0;
            result[3] += 0.9230769230769231;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42740000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5217391304347826;
            result[5] += 0.4782608695652174;
          } else {
            result[0] += 0.0029411764705882353;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.025;
            result[4] += 0.016176470588235296;
            result[5] += 0.9558823529411765;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0.22324159021406728;
            result[1] += 0.0061162079510703364;
            result[2] += 0.0030581039755351682;
            result[3] += 0.07951070336391437;
            result[4] += 0.1926605504587156;
            result[5] += 0.4954128440366973;
          } else {
            result[0] += 0.010958904109589041;
            result[1] += 0.0273972602739726;
            result[2] += 0.03287671232876712;
            result[3] += 0.5315068493150685;
            result[4] += 0.0136986301369863;
            result[5] += 0.3835616438356164;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42680000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42360000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.043478260869565216;
            result[3] += 0;
            result[4] += 0.9565217391304348;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9953271028037384;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.004672897196261682;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0.04;
            result[1] += 0.312;
            result[2] += 0;
            result[3] += 0.024;
            result[4] += 0.608;
            result[5] += 0.016;
          } else {
            result[0] += 0.9160649819494585;
            result[1] += 0.004512635379061372;
            result[2] += 0;
            result[3] += 0.01444043321299639;
            result[4] += 0.05776173285198556;
            result[5] += 0.007220216606498195;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0.050387596899224806;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.3798449612403101;
            result[4] += 0.007751937984496124;
            result[5] += 0.22868217054263565;
          } else {
            result[0] += 0.783132530120482;
            result[1] += 0.03614457831325302;
            result[2] += 0.02409638554216868;
            result[3] += 0.02409638554216868;
            result[4] += 0.10843373493975905;
            result[5] += 0.02409638554216868;
          }
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0.25000000000000006;
            result[2] += 0.10000000000000002;
            result[3] += 0.10000000000000002;
            result[4] += 0.45000000000000007;
            result[5] += 0.10000000000000002;
          } else {
            result[0] += 0.0625;
            result[1] += 0;
            result[2] += 0.1875;
            result[3] += 0.15625;
            result[4] += 0;
            result[5] += 0.59375;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2777777777777778;
            result[3] += 0.2777777777777778;
            result[4] += 0;
            result[5] += 0.4444444444444444;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9411764705882353;
            result[3] += 0.058823529411764705;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cd0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42920000))) ) ) {
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
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.023255813953488372;
            result[2] += 0.27906976744186046;
            result[3] += 0.5116279069767442;
            result[4] += 0;
            result[5] += 0.18604651162790697;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0.027777777777777776;
            result[1] += 0;
            result[2] += 0.6111111111111112;
            result[3] += 0.3194444444444444;
            result[4] += 0;
            result[5] += 0.041666666666666664;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8879310344827587;
            result[3] += 0.11206896551724138;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8478260869565217;
            result[3] += 0.14492753623188406;
            result[4] += 0;
            result[5] += 0.007246376811594203;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.901840490797546;
            result[3] += 0.09202453987730061;
            result[4] += 0;
            result[5] += 0.006134969325153374;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9949367088607595;
            result[3] += 0.005063291139240506;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0037593984962406013;
            result[4] += 0.9398496240601504;
            result[5] += 0.05639097744360902;
          } else {
            result[0] += 0;
            result[1] += 0.3;
            result[2] += 0;
            result[3] += 0.2;
            result[4] += 0.5;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42840000))) ) ) {
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
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0.3297872340425532;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.053191489361702135;
            result[4] += 0.4042553191489362;
            result[5] += 0.21276595744680854;
          } else {
            result[0] += 0;
            result[1] += 0.0034924330616996507;
            result[2] += 0.0011641443538998836;
            result[3] += 0.02910360884749709;
            result[4] += 0.05471478463329453;
            result[5] += 0.9115250291036089;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42600000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0038167938931297713;
            result[1] += 0;
            result[2] += 0.0076335877862595426;
            result[3] += 0.5725190839694657;
            result[4] += 0.011450381679389315;
            result[5] += 0.4045801526717558;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a00000))) ) ) {
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
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42260000))) ) ) {
            result[0] += 0;
            result[1] += 0.9032258064516129;
            result[2] += 0;
            result[3] += 0.03225806451612903;
            result[4] += 0.06451612903225806;
            result[5] += 0;
          } else {
            result[0] += 0.06201550387596899;
            result[1] += 0.06976744186046512;
            result[2] += 0.015503875968992248;
            result[3] += 0.031007751937984496;
            result[4] += 0.8217054263565892;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0.8189935064935066;
            result[1] += 0.03165584415584416;
            result[2] += 0.006493506493506495;
            result[3] += 0.01866883116883117;
            result[4] += 0.08685064935064936;
            result[5] += 0.03733766233766234;
          } else {
            result[0] += 0.18900343642611683;
            result[1] += 0.003436426116838488;
            result[2] += 0.11683848797250859;
            result[3] += 0.3024054982817869;
            result[4] += 0.044673539518900345;
            result[5] += 0.3436426116838488;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14655172413793102;
            result[3] += 0.646551724137931;
            result[4] += 0;
            result[5] += 0.20689655172413793;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.40350877192982454;
            result[3] += 0.5087719298245614;
            result[4] += 0;
            result[5] += 0.08771929824561403;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9166666666666666;
            result[3] += 0.08333333333333333;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.1;
            result[4] += 0;
            result[5] += 0.7;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0.023809523809523808;
            result[1] += 0;
            result[2] += 0.9523809523809523;
            result[3] += 0.023809523809523808;
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
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ee0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8770226537216829;
            result[3] += 0.08090614886731391;
            result[4] += 0;
            result[5] += 0.042071197411003236;
          } else {
            result[0] += 0.5714285714285714;
            result[1] += 0;
            result[2] += 0.35714285714285715;
            result[3] += 0;
            result[4] += 0.07142857142857142;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a50000))) ) ) {
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
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9142857142857143;
            result[3] += 0.08571428571428572;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.004866180048661801;
            result[1] += 0;
            result[2] += 0.9805352798053528;
            result[3] += 0.012165450121654502;
            result[4] += 0;
            result[5] += 0.0024330900243309003;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cc0000))) ) ) {
            result[0] += 0.008695652173913045;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.982608695652174;
            result[5] += 0.008695652173913045;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.75;
            result[5] += 0.25;
          } else {
            result[0] += 0;
            result[1] += 0.9230769230769231;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07692307692307693;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.35294117647058826;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.47058823529411764;
            result[5] += 0.17647058823529413;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03866666666666667;
            result[4] += 0.024;
            result[5] += 0.9373333333333334;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0.3493975903614458;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03614457831325301;
            result[4] += 0.5060240963855421;
            result[5] += 0.10843373493975904;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.018115942028985508;
            result[3] += 0.38405797101449274;
            result[4] += 0.036231884057971016;
            result[5] += 0.5615942028985508;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b10000))) ) ) {
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
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42860000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9976851851851852;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0023148148148148147;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0.11585365853658539;
            result[1] += 0.18902439024390247;
            result[2] += 0;
            result[3] += 0.006097560975609757;
            result[4] += 0.603658536585366;
            result[5] += 0.0853658536585366;
          } else {
            result[0] += 0.855583543240974;
            result[1] += 0.011754827875734676;
            result[2] += 0.0025188916876574307;
            result[3] += 0.018471872376154493;
            result[4] += 0.06968933669185558;
            result[5] += 0.041981528127623846;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06097560975609756;
            result[3] += 0.5121951219512195;
            result[4] += 0.03048780487804878;
            result[5] += 0.39634146341463417;
          } else {
            result[0] += 0.42028985507246375;
            result[1] += 0;
            result[2] += 0.26811594202898553;
            result[3] += 0.007246376811594203;
            result[4] += 0.21739130434782608;
            result[5] += 0.08695652173913043;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b30000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42860000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.75;
            result[4] += 0.25;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6363636363636364;
            result[3] += 0.09090909090909091;
            result[4] += 0.09090909090909091;
            result[5] += 0.18181818181818182;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.15217391304347827;
            result[3] += 0.08695652173913043;
            result[4] += 0.021739130434782608;
            result[5] += 0.7391304347826086;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0423728813559322;
            result[3] += 0.8135593220338984;
            result[4] += 0.00847457627118644;
            result[5] += 0.13559322033898305;
          } else {
            result[0] += 0.05172413793103447;
            result[1] += 0.017241379310344824;
            result[2] += 0.3448275862068965;
            result[3] += 0.3620689655172413;
            result[4] += 0.017241379310344824;
            result[5] += 0.20689655172413787;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42f40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.759493670886076;
            result[3] += 0.20253164556962025;
            result[4] += 0;
            result[5] += 0.0379746835443038;
          } else {
            result[0] += 0.75;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b60000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0.21428571428571427;
            result[2] += 0.21428571428571427;
            result[3] += 0.35714285714285715;
            result[4] += 0;
            result[5] += 0.21428571428571427;
          } else {
            result[0] += 0.07692307692307693;
            result[1] += 0;
            result[2] += 0.7692307692307693;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.15384615384615385;
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
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0.05;
            result[1] += 0.05;
            result[2] += 0.45;
            result[3] += 0.3;
            result[4] += 0;
            result[5] += 0.15;
          } else {
            result[0] += 0.01775147928994083;
            result[1] += 0;
            result[2] += 0.8372781065088757;
            result[3] += 0.1390532544378698;
            result[4] += 0;
            result[5] += 0.005917159763313609;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7924528301886793;
            result[3] += 0.1509433962264151;
            result[4] += 0;
            result[5] += 0.05660377358490566;
          } else {
            result[0] += 0.011516314779270634;
            result[1] += 0;
            result[2] += 0.9692898272552783;
            result[3] += 0.019193857965451054;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x421a0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42280000))) ) ) {
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
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0;
            result[1] += 0.007246376811594203;
            result[2] += 0;
            result[3] += 0.0036231884057971015;
            result[4] += 0.967391304347826;
            result[5] += 0.021739130434782608;
          } else {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0.5;
            result[1] += 0.05172413793103448;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.29310344827586204;
            result[5] += 0.15517241379310345;
          } else {
            result[0] += 0;
            result[1] += 0.007050528789659225;
            result[2] += 0;
            result[3] += 0.03525264394829612;
            result[4] += 0.05052878965922444;
            result[5] += 0.9071680376028202;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0.9166666666666666;
            result[1] += 0.027777777777777776;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.05555555555555555;
          } else {
            result[0] += 0.008771929824561403;
            result[1] += 0.05263157894736842;
            result[2] += 0.029239766081871343;
            result[3] += 0.4590643274853801;
            result[4] += 0.09064327485380116;
            result[5] += 0.35964912280701755;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0.14285714285714285;
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
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0.13414634146341464;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8536585365853658;
            result[5] += 0.012195121951219513;
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
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0.06349206349206349;
            result[1] += 0.12698412698412698;
            result[2] += 0.015873015873015872;
            result[3] += 0.09523809523809523;
            result[4] += 0.07936507936507936;
            result[5] += 0.6190476190476191;
          } else {
            result[0] += 0.9042253521126761;
            result[1] += 0.009389671361502348;
            result[2] += 0.0018779342723004694;
            result[3] += 0.009389671361502348;
            result[4] += 0.06666666666666667;
            result[5] += 0.008450704225352112;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0.020161290322580645;
            result[1] += 0.04032258064516129;
            result[2] += 0.22983870967741934;
            result[3] += 0.4112903225806452;
            result[4] += 0.04838709677419355;
            result[5] += 0.25;
          } else {
            result[0] += 0.6732673267326733;
            result[1] += 0;
            result[2] += 0.0891089108910891;
            result[3] += 0;
            result[4] += 0.21782178217821782;
            result[5] += 0.019801980198019802;
          }
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9;
            result[5] += 0.1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2127659574468085;
            result[3] += 0.1276595744680851;
            result[4] += 0;
            result[5] += 0.6595744680851063;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.011363636363636364;
            result[3] += 0.7045454545454546;
            result[4] += 0.022727272727272728;
            result[5] += 0.26136363636363635;
          } else {
            result[0] += 0.019230769230769232;
            result[1] += 0;
            result[2] += 0.38461538461538464;
            result[3] += 0.46153846153846156;
            result[4] += 0;
            result[5] += 0.1346153846153846;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42780000))) ) ) {
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
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0.25;
          } else {
            result[0] += 0.043478260869565216;
            result[1] += 0;
            result[2] += 0.8840579710144928;
            result[3] += 0.07246376811594203;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6666666666666666;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3125;
            result[3] += 0.0625;
            result[4] += 0;
            result[5] += 0.625;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42f30000))) ) ) {
            result[0] += 0;
            result[1] += 0.1111111111111111;
            result[2] += 0.8888888888888888;
            result[3] += 0;
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
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.1;
          } else {
            result[0] += 0.84;
            result[1] += 0;
            result[2] += 0.16;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0.013953488372093023;
            result[1] += 0;
            result[2] += 0.8232558139534883;
            result[3] += 0.13953488372093023;
            result[4] += 0;
            result[5] += 0.023255813953488372;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9609984399375975;
            result[3] += 0.0390015600624025;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c40000))) ) ) {
            result[0] += 0.0072992700729927005;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0072992700729927005;
            result[4] += 0.9562043795620438;
            result[5] += 0.029197080291970802;
          } else {
            result[0] += 0;
            result[1] += 0.8947368421052632;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05263157894736842;
            result[5] += 0.05263157894736842;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2727272727272727;
            result[5] += 0.7272727272727273;
          } else {
            result[0] += 0.8598130841121495;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.018691588785046728;
            result[4] += 0.102803738317757;
            result[5] += 0.018691588785046728;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.022727272727272728;
            result[3] += 0;
            result[4] += 0.8409090909090909;
            result[5] += 0.13636363636363635;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0016420361247947454;
            result[3] += 0.027914614121510674;
            result[4] += 0.014778325123152709;
            result[5] += 0.9556650246305419;
          } else {
            result[0] += 0.024464831804281346;
            result[1] += 0.0030581039755351682;
            result[2] += 0;
            result[3] += 0.2324159021406728;
            result[4] += 0.12844036697247707;
            result[5] += 0.6116207951070336;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0.7540983606557377;
            result[1] += 0.03278688524590164;
            result[2] += 0;
            result[3] += 0.00819672131147541;
            result[4] += 0.14754098360655737;
            result[5] += 0.05737704918032787;
          } else {
            result[0] += 0.018421052631578946;
            result[1] += 0.04473684210526316;
            result[2] += 0.02631578947368421;
            result[3] += 0.43157894736842106;
            result[4] += 0.03684210526315789;
            result[5] += 0.4421052631578947;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42900000))) ) ) {
            result[0] += 0.007246376811594203;
            result[1] += 0.5072463768115942;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4855072463768116;
            result[5] += 0;
          } else {
            result[0] += 0.8408510638297874;
            result[1] += 0.009361702127659577;
            result[2] += 0.058723404255319155;
            result[3] += 0.0348936170212766;
            result[4] += 0.04255319148936171;
            result[5] += 0.013617021276595746;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42940000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.07692307692307693;
            result[1] += 0.7692307692307693;
            result[2] += 0;
            result[3] += 0.15384615384615385;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x429b0000))) ) ) {
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
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42870000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42820000))) ) ) {
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.029850746268656716;
            result[3] += 0.746268656716418;
            result[4] += 0;
            result[5] += 0.22388059701492538;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0.5;
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
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.4166666666666667;
            result[1] += 0;
            result[2] += 0.08333333333333333;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.25;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0.05333333333333334;
            result[1] += 0;
            result[2] += 0.4533333333333333;
            result[3] += 0.25333333333333335;
            result[4] += 0.05333333333333334;
            result[5] += 0.18666666666666668;
          } else {
            result[0] += 0.0084985835694051;
            result[1] += 0.0028328611898017;
            result[2] += 0.7903682719546742;
            result[3] += 0.16997167138810199;
            result[4] += 0;
            result[5] += 0.028328611898016998;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.011904761904761906;
            result[1] += 0;
            result[2] += 0.880952380952381;
            result[3] += 0.1011904761904762;
            result[4] += 0;
            result[5] += 0.005952380952380953;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9975669099756691;
            result[3] += 0.0024330900243309003;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9714285714285714;
            result[3] += 0.02857142857142857;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 5;
  result[1] /= 5;
  result[2] /= 5;
  result[3] /= 5;
  result[4] /= 5;
  result[5] /= 5;
  
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
