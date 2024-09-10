
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
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0.004807692307692308;
            result[1] += 0.009615384615384616;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9855769230769231;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7;
            result[5] += 0.3;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0.0851063829787234;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.06382978723404255;
            result[4] += 0.2765957446808511;
            result[5] += 0.574468085106383;
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
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0.0015220700152207;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0167427701674277;
            result[4] += 0.0136986301369863;
            result[5] += 0.9680365296803652;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0.1134453781512605;
            result[1] += 0.07563025210084033;
            result[2] += 0;
            result[3] += 0.1134453781512605;
            result[4] += 0.07563025210084033;
            result[5] += 0.6218487394957983;
          } else {
            result[0] += 0.03272727272727273;
            result[1] += 0;
            result[2] += 0.01818181818181818;
            result[3] += 0.49818181818181817;
            result[4] += 0.007272727272727273;
            result[5] += 0.44363636363636366;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x424a0000))) ) ) {
            result[0] += 0.30864197530864196;
            result[1] += 0.6049382716049383;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.08641975308641975;
            result[5] += 0;
          } else {
            result[0] += 0.029585798816568046;
            result[1] += 0.07692307692307693;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8402366863905325;
            result[5] += 0.05325443786982249;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0.8267090620031797;
            result[1] += 0.008744038155802863;
            result[2] += 0.015898251192368842;
            result[3] += 0.034181240063593014;
            result[4] += 0.05802861685214627;
            result[5] += 0.05643879173290939;
          } else {
            result[0] += 0.17985611510791366;
            result[1] += 0.007194244604316547;
            result[2] += 0.22302158273381295;
            result[3] += 0.3117505995203837;
            result[4] += 0.05515587529976019;
            result[5] += 0.22302158273381295;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c30000))) ) ) {
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
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42940000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
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
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0.01818181818181818;
            result[2] += 0.12727272727272726;
            result[3] += 0.07272727272727272;
            result[4] += 0.09090909090909091;
            result[5] += 0.6909090909090909;
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
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.35294117647058826;
            result[3] += 0.47058823529411764;
            result[4] += 0.058823529411764705;
            result[5] += 0.11764705882352941;
          } else {
            result[0] += 0.05263157894736842;
            result[1] += 0;
            result[2] += 0.8157894736842105;
            result[3] += 0.10526315789473684;
            result[4] += 0;
            result[5] += 0.02631578947368421;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428d0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e90000))) ) ) {
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
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ae0000))) ) ) {
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
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7310344827586207;
            result[3] += 0.2413793103448276;
            result[4] += 0;
            result[5] += 0.027586206896551724;
          } else {
            result[0] += 0.008185538881309686;
            result[1] += 0;
            result[2] += 0.9331514324693042;
            result[3] += 0.058663028649386086;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b30000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0.006230529595015576;
            result[1] += 0.024922118380062305;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9470404984423676;
            result[5] += 0.021806853582554516;
          } else {
            result[0] += 0.04918032786885246;
            result[1] += 0.03278688524590164;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5901639344262295;
            result[5] += 0.32786885245901637;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x429d0000))) ) ) {
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
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42540000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.3333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
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
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0.0014619883040935672;
            result[2] += 0.005847953216374269;
            result[3] += 0.01608187134502924;
            result[4] += 0.019005847953216373;
            result[5] += 0.9576023391812866;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.03636363636363636;
            result[3] += 0.2727272727272727;
            result[4] += 0.05454545454545454;
            result[5] += 0.6363636363636364;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0.06763285024154589;
            result[1] += 0;
            result[2] += 0.004830917874396135;
            result[3] += 0.18840579710144928;
            result[4] += 0.0966183574879227;
            result[5] += 0.642512077294686;
          } else {
            result[0] += 0.1037037037037037;
            result[1] += 0.025925925925925925;
            result[2] += 0.022222222222222223;
            result[3] += 0.5148148148148148;
            result[4] += 0.07037037037037037;
            result[5] += 0.26296296296296295;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0.18888888888888888;
            result[1] += 0.08888888888888889;
            result[2] += 0.022222222222222223;
            result[3] += 0.07777777777777778;
            result[4] += 0.1111111111111111;
            result[5] += 0.5111111111111111;
          } else {
            result[0] += 0.8807339449541285;
            result[1] += 0.02110091743119266;
            result[2] += 0.0045871559633027525;
            result[3] += 0.014678899082568808;
            result[4] += 0.06880733944954129;
            result[5] += 0.010091743119266056;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0.0038910505836575876;
            result[1] += 0.023346303501945526;
            result[2] += 0.16342412451361868;
            result[3] += 0.377431906614786;
            result[4] += 0.0311284046692607;
            result[5] += 0.40077821011673154;
          } else {
            result[0] += 0.7590361445783133;
            result[1] += 0.04819277108433735;
            result[2] += 0.12048192771084337;
            result[3] += 0;
            result[4] += 0.04819277108433735;
            result[5] += 0.024096385542168676;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.011235955056179775;
            result[3] += 0.7865168539325843;
            result[4] += 0;
            result[5] += 0.20224719101123595;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.42857142857142855;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.23809523809523808;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.30434782608695654;
            result[3] += 0.41304347826086957;
            result[4] += 0;
            result[5] += 0.2826086956521739;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0.24444444444444444;
            result[4] += 0;
            result[5] += 0.08888888888888889;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42830000))) ) ) {
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
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.020833333333333332;
            result[1] += 0;
            result[2] += 0.9375;
            result[3] += 0.041666666666666664;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3823529411764706;
            result[3] += 0.2058823529411765;
            result[4] += 0;
            result[5] += 0.411764705882353;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.015873015873015872;
            result[1] += 0;
            result[2] += 0.8412698412698413;
            result[3] += 0.12698412698412698;
            result[4] += 0;
            result[5] += 0.015873015873015872;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0.0032362459546925572;
            result[1] += 0;
            result[2] += 0.8446601941747574;
            result[3] += 0.14886731391585764;
            result[4] += 0;
            result[5] += 0.0032362459546925572;
          } else {
            result[0] += 0.47368421052631576;
            result[1] += 0;
            result[2] += 0.5263157894736842;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9102564102564102;
            result[3] += 0.08974358974358974;
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
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42900000))) ) ) {
            result[0] += 0.010256410256410256;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9846153846153847;
            result[5] += 0.005128205128205128;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0.6666666666666666;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.9814814814814815;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.018518518518518517;
            result[5] += 0;
          } else {
            result[0] += 0.04109589041095891;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5479452054794521;
            result[5] += 0.4109589041095891;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11475409836065574;
            result[3] += 0;
            result[4] += 0.47540983606557374;
            result[5] += 0.4098360655737705;
          } else {
            result[0] += 0;
            result[1] += 0.004744958481613286;
            result[2] += 0;
            result[3] += 0.07236061684460261;
            result[4] += 0.04033214709371293;
            result[5] += 0.8825622775800712;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0.06493506493506493;
            result[2] += 0.025974025974025976;
            result[3] += 0.18831168831168832;
            result[4] += 0.07792207792207792;
            result[5] += 0.6428571428571429;
          } else {
            result[0] += 0.016597510373443983;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6763485477178424;
            result[4] += 0;
            result[5] += 0.3070539419087137;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b00000))) ) ) {
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
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0.16666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8333333333333334;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.7402597402597403;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2597402597402597;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0.37209302325581395;
            result[1] += 0.023255813953488372;
            result[2] += 0.046511627906976744;
            result[3] += 0.10465116279069768;
            result[4] += 0.36046511627906974;
            result[5] += 0.09302325581395349;
          } else {
            result[0] += 0.8853448275862067;
            result[1] += 0.024999999999999994;
            result[2] += 0.009482758620689653;
            result[3] += 0.013793103448275858;
            result[4] += 0.0586206896551724;
            result[5] += 0.007758620689655171;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0.03543307086614173;
            result[1] += 0.003937007874015748;
            result[2] += 0.2952755905511811;
            result[3] += 0.3700787401574803;
            result[4] += 0.01968503937007874;
            result[5] += 0.2755905511811024;
          } else {
            result[0] += 0.5783132530120482;
            result[1] += 0;
            result[2] += 0.1927710843373494;
            result[3] += 0.04819277108433735;
            result[4] += 0.1686746987951807;
            result[5] += 0.012048192771084338;
          }
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x429b0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428f0000))) ) ) {
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
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0625;
            result[4] += 0;
            result[5] += 0.9375;
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
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42980000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42cc0000))) ) ) {
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
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42da0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3835616438356164;
            result[3] += 0.4657534246575342;
            result[4] += 0;
            result[5] += 0.1506849315068493;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9375;
            result[3] += 0.0625;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.75;
            result[5] += 0.25;
          } else {
            result[0] += 0.014652014652014652;
            result[1] += 0.01098901098901099;
            result[2] += 0.8388278388278388;
            result[3] += 0.09523809523809523;
            result[4] += 0.003663003663003663;
            result[5] += 0.03663003663003663;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42850000))) ) ) {
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
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9036144578313253;
            result[3] += 0.0963855421686747;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0018832391713747645;
            result[1] += 0;
            result[2] += 0.9849340866290018;
            result[3] += 0.013182674199623353;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cc0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.995260663507109;
            result[5] += 0.004739336492890996;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05714285714285714;
            result[3] += 0.02857142857142857;
            result[4] += 0.5428571428571428;
            result[5] += 0.37142857142857144;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a80000))) ) ) {
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
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6111111111111112;
            result[5] += 0.3888888888888889;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.030211480362537766;
            result[4] += 0.01661631419939577;
            result[5] += 0.9531722054380665;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0.10962566844919786;
            result[1] += 0.07219251336898395;
            result[2] += 0.0106951871657754;
            result[3] += 0.1443850267379679;
            result[4] += 0.10695187165775401;
            result[5] += 0.5561497326203209;
          } else {
            result[0] += 0;
            result[1] += 0.006535947712418301;
            result[2] += 0;
            result[3] += 0.7124183006535948;
            result[4] += 0;
            result[5] += 0.28104575163398693;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b60000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.3333333333333333;
            result[2] += 0;
            result[3] += 0.6666666666666666;
            result[4] += 0;
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
            result[1] += 0.75;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.25;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0.13953488372093026;
            result[1] += 0.17441860465116282;
            result[2] += 0.017441860465116282;
            result[3] += 0.017441860465116282;
            result[4] += 0.6046511627906977;
            result[5] += 0.04651162790697675;
          } else {
            result[0] += 0.8320479862896316;
            result[1] += 0.026563838903170527;
            result[2] += 0.008568980291345332;
            result[3] += 0.026563838903170527;
            result[4] += 0.05655526992287918;
            result[5] += 0.04970008568980292;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0.024024024024024024;
            result[1] += 0.03003003003003003;
            result[2] += 0.2702702702702703;
            result[3] += 0.3993993993993994;
            result[4] += 0.03003003003003003;
            result[5] += 0.24624624624624625;
          } else {
            result[0] += 0.6645569620253164;
            result[1] += 0.08860759493670886;
            result[2] += 0.1518987341772152;
            result[3] += 0;
            result[4] += 0.0949367088607595;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42740000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0.2;
            result[2] += 0.6;
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
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.024390243902439025;
            result[3] += 0.21951219512195122;
            result[4] += 0.024390243902439025;
            result[5] += 0.7317073170731707;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8333333333333334;
            result[3] += 0;
            result[4] += 0.16666666666666666;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42bc0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0.4666666666666667;
            result[4] += 0;
            result[5] += 0.13333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8888888888888888;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.1111111111111111;
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
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a60000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.23333333333333334;
            result[3] += 0.7666666666666667;
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
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4285714285714286;
            result[3] += 0.28571428571428575;
            result[4] += 0;
            result[5] += 0.28571428571428575;
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
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42800000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.012012012012012012;
            result[1] += 0;
            result[2] += 0.8408408408408409;
            result[3] += 0.12312312312312312;
            result[4] += 0;
            result[5] += 0.024024024024024024;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.00186219739292365;
            result[1] += 0;
            result[2] += 0.9739292364990689;
            result[3] += 0.0223463687150838;
            result[4] += 0;
            result[5] += 0.00186219739292365;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0.012422360248447204;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.937888198757764;
            result[5] += 0.049689440993788817;
          } else {
            result[0] += 0.0625;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.34375;
            result[5] += 0.59375;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0013812154696132596;
            result[3] += 0.03038674033149171;
            result[4] += 0.013812154696132596;
            result[5] += 0.9544198895027625;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
            result[0] += 0;
            result[1] += 0.84375;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.15625;
            result[5] += 0;
          } else {
            result[0] += 0.11180124223602485;
            result[1] += 0.024844720496894408;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8260869565217391;
            result[5] += 0.037267080745341616;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0.8780487804878049;
            result[1] += 0.12195121951219512;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.009671179883945842;
            result[1] += 0.005802707930367505;
            result[2] += 0.01160541586073501;
            result[3] += 0.4158607350096712;
            result[4] += 0.061895551257253385;
            result[5] += 0.4951644100580271;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42d60000))) ) ) {
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
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0.039603960396039604;
            result[1] += 0.04950495049504951;
            result[2] += 0.04950495049504951;
            result[3] += 0.1485148514851485;
            result[4] += 0.26732673267326734;
            result[5] += 0.44554455445544555;
          } else {
            result[0] += 0.8143459915611815;
            result[1] += 0.04050632911392405;
            result[2] += 0.002531645569620253;
            result[3] += 0.01181434599156118;
            result[4] += 0.1248945147679325;
            result[5] += 0.00590717299578059;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 0.033112582781456956;
            result[1] += 0.023178807947019868;
            result[2] += 0.2781456953642384;
            result[3] += 0.34105960264900664;
            result[4] += 0.026490066225165563;
            result[5] += 0.2980132450331126;
          } else {
            result[0] += 0.8045977011494253;
            result[1] += 0;
            result[2] += 0.12643678160919541;
            result[3] += 0;
            result[4] += 0.06896551724137931;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.15789473684210525;
            result[3] += 0.05263157894736842;
            result[4] += 0;
            result[5] += 0.7894736842105263;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9117647058823529;
            result[4] += 0;
            result[5] += 0.08823529411764706;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5000000000000001;
            result[3] += 0.33333333333333337;
            result[4] += 0;
            result[5] += 0.16666666666666669;
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
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7831325301204819;
            result[3] += 0.18072289156626506;
            result[4] += 0;
            result[5] += 0.03614457831325301;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e90000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.711764705882353;
            result[3] += 0.24705882352941178;
            result[4] += 0.0058823529411764705;
            result[5] += 0.03529411764705882;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9342105263157895;
            result[3] += 0.046052631578947366;
            result[4] += 0;
            result[5] += 0.019736842105263157;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ac0000))) ) ) {
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
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ee0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8333333333333334;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.985655737704918;
            result[3] += 0.014344262295081968;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42da0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0.875;
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
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428c0000))) ) ) {
            result[0] += 0;
            result[1] += 0.015228426395939087;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9746192893401016;
            result[5] += 0.01015228426395939;
          } else {
            result[0] += 0.4;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0.2;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5405405405405406;
            result[5] += 0.4594594594594595;
          } else {
            result[0] += 0.8571428571428572;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.10714285714285715;
            result[4] += 0.03571428571428572;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0.15384615384615385;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8461538461538461;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.008658008658008658;
            result[2] += 0;
            result[3] += 0.06277056277056277;
            result[4] += 0.04220779220779221;
            result[5] += 0.8863636363636364;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0.04081632653061224;
            result[1] += 0;
            result[2] += 0.04081632653061224;
            result[3] += 0.22448979591836735;
            result[4] += 0.08163265306122448;
            result[5] += 0.6122448979591837;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7966101694915254;
            result[4] += 0;
            result[5] += 0.2033898305084746;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0.1895424836601307;
            result[1] += 0.0196078431372549;
            result[2] += 0.013071895424836602;
            result[3] += 0.16339869281045752;
            result[4] += 0.24183006535947713;
            result[5] += 0.37254901960784315;
          } else {
            result[0] += 0.7942546583850931;
            result[1] += 0.055900621118012424;
            result[2] += 0.004658385093167702;
            result[3] += 0.016304347826086956;
            result[4] += 0.11801242236024845;
            result[5] += 0.010869565217391304;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0.009375;
            result[1] += 0.01875;
            result[2] += 0.140625;
            result[3] += 0.321875;
            result[4] += 0.084375;
            result[5] += 0.425;
          } else {
            result[0] += 0.6315789473684211;
            result[1] += 0;
            result[2] += 0.1447368421052632;
            result[3] += 0;
            result[4] += 0.1973684210526316;
            result[5] += 0.026315789473684213;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ca0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42300000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8571428571428571;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.14285714285714285;
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
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x426a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0.05263157894736842;
            result[2] += 0.017543859649122806;
            result[3] += 0.22807017543859648;
            result[4] += 0.10526315789473684;
            result[5] += 0.5964912280701754;
          } else {
            result[0] += 0;
            result[1] += 0.5000000000000001;
            result[2] += 0.33333333333333337;
            result[3] += 0.16666666666666669;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.36;
            result[4] += 0.16;
            result[5] += 0.48;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.22000000000000003;
            result[3] += 0.6900000000000001;
            result[4] += 0;
            result[5] += 0.09000000000000001;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42960000))) ) ) {
            result[0] += 0;
            result[1] += 0.3333333333333333;
            result[2] += 0;
            result[3] += 0.3333333333333333;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          } else {
            result[0] += 0.027777777777777776;
            result[1] += 0;
            result[2] += 0.8055555555555556;
            result[3] += 0.1111111111111111;
            result[4] += 0;
            result[5] += 0.05555555555555555;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.3333333333333333;
            result[2] += 0.6666666666666666;
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
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0.0196078431372549;
            result[1] += 0;
            result[2] += 0.696078431372549;
            result[3] += 0.2549019607843137;
            result[4] += 0;
            result[5] += 0.029411764705882353;
          } else {
            result[0] += 0.005747126436781609;
            result[1] += 0;
            result[2] += 0.8793103448275862;
            result[3] += 0.10919540229885058;
            result[4] += 0;
            result[5] += 0.005747126436781609;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42800000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.02127659574468085;
            result[1] += 0;
            result[2] += 0.9509001636661211;
            result[3] += 0.024549918166939442;
            result[4] += 0;
            result[5] += 0.0032733224222585926;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42bc0000))) ) ) {
            result[0] += 0.01951219512195122;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9560975609756097;
            result[5] += 0.024390243902439025;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0;
            result[4] += 0.2;
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
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
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
            result[4] += 0.027259684361549498;
            result[5] += 0.9469153515064562;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0.654320987654321;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.20987654320987653;
            result[5] += 0.13580246913580246;
          } else {
            result[0] += 0.005870841487279843;
            result[1] += 0.033268101761252444;
            result[2] += 0.03718199608610567;
            result[3] += 0.37377690802348335;
            result[4] += 0.04500978473581213;
            result[5] += 0.5048923679060665;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x423c0000))) ) ) {
            result[0] += 0;
            result[1] += 0.9444444444444444;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05555555555555555;
            result[5] += 0;
          } else {
            result[0] += 0.1906779661016949;
            result[1] += 0.046610169491525424;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6991525423728814;
            result[5] += 0.0635593220338983;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0.8742411101474415;
            result[1] += 0.011274934952298353;
            result[2] += 0.018213356461405032;
            result[3] += 0.025151777970511713;
            result[4] += 0.03989592367736341;
            result[5] += 0.031222896790980056;
          } else {
            result[0] += 0.1804511278195489;
            result[1] += 0.015037593984962409;
            result[2] += 0.1754385964912281;
            result[3] += 0.28320802005012535;
            result[4] += 0.07268170426065164;
            result[5] += 0.27318295739348375;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42520000))) ) ) {
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
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b20000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.03333333333333333;
            result[5] += 0.9666666666666667;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0.03125;
            result[2] += 0.03125;
            result[3] += 0.90625;
            result[4] += 0;
            result[5] += 0.03125;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.42857142857142855;
            result[4] += 0;
            result[5] += 0.5714285714285714;
          } else {
            result[0] += 0.01851851851851852;
            result[1] += 0;
            result[2] += 0.5925925925925927;
            result[3] += 0.29629629629629634;
            result[4] += 0;
            result[5] += 0.0925925925925926;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4528301886792453;
            result[3] += 0.4716981132075472;
            result[4] += 0;
            result[5] += 0.07547169811320754;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8936170212765957;
            result[3] += 0.10638297872340426;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0;
            result[4] += 0.6;
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
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0.01509433962264151;
            result[1] += 0;
            result[2] += 0.8452830188679246;
            result[3] += 0.12075471698113208;
            result[4] += 0;
            result[5] += 0.018867924528301886;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9738805970149254;
            result[3] += 0.024253731343283583;
            result[4] += 0;
            result[5] += 0.0018656716417910447;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9904306220095693;
            result[5] += 0.009569377990430622;
          } else {
            result[0] += 0.1111111111111111;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0.3888888888888889;
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
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0.7551020408163266;
            result[1] += 0;
            result[2] += 0.020408163265306124;
            result[3] += 0;
            result[4] += 0.14285714285714288;
            result[5] += 0.0816326530612245;
          } else {
            result[0] += 0;
            result[1] += 0.018537590113285273;
            result[2] += 0;
            result[3] += 0.08753861997940268;
            result[4] += 0.03810504634397528;
            result[5] += 0.8558187435633368;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1;
            result[4] += 0.06666666666666667;
            result[5] += 0.8333333333333334;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.009090909090909092;
            result[3] += 0.8363636363636364;
            result[4] += 0;
            result[5] += 0.15454545454545457;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0.04347826086956522;
            result[1] += 0.04347826086956522;
            result[2] += 0;
            result[3] += 0.13043478260869568;
            result[4] += 0.7391304347826088;
            result[5] += 0.04347826086956522;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429c0000))) ) ) {
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
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0.02054794520547945;
            result[1] += 0.13013698630136986;
            result[2] += 0;
            result[3] += 0.0821917808219178;
            result[4] += 0.7328767123287672;
            result[5] += 0.03424657534246575;
          } else {
            result[0] += 0.8691275167785235;
            result[1] += 0.010067114093959731;
            result[2] += 0.003355704697986577;
            result[3] += 0.020134228187919462;
            result[4] += 0.07885906040268456;
            result[5] += 0.018456375838926176;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0.0514018691588785;
            result[2] += 0.037383177570093455;
            result[3] += 0.32242990654205606;
            result[4] += 0.04672897196261682;
            result[5] += 0.5420560747663551;
          } else {
            result[0] += 0.1909385113268609;
            result[1] += 0.0226537216828479;
            result[2] += 0.37864077669902924;
            result[3] += 0.14563106796116507;
            result[4] += 0.11650485436893207;
            result[5] += 0.14563106796116507;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42800000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.02040816326530612;
            result[1] += 0;
            result[2] += 0.02040816326530612;
            result[3] += 0;
            result[4] += 0.04081632653061224;
            result[5] += 0.9183673469387755;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0.125;
            result[2] += 0;
            result[3] += 0.125;
            result[4] += 0.375;
            result[5] += 0.375;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05263157894736842;
            result[3] += 0.8947368421052632;
            result[4] += 0;
            result[5] += 0.05263157894736842;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42980000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.04;
            result[2] += 0.64;
            result[3] += 0.32;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e80000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0.08333333333333333;
            result[1] += 0;
            result[2] += 0.8333333333333334;
            result[3] += 0.08333333333333333;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.6;
            result[1] += 0.4;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c80000))) ) ) {
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
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c80000))) ) ) {
            result[0] += 0.08695652173913043;
            result[1] += 0;
            result[2] += 0.043478260869565216;
            result[3] += 0.6956521739130435;
            result[4] += 0;
            result[5] += 0.17391304347826086;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8095238095238095;
            result[3] += 0.19047619047619047;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0.02298850574712644;
            result[1] += 0;
            result[2] += 0.839080459770115;
            result[3] += 0.1149425287356322;
            result[4] += 0;
            result[5] += 0.02298850574712644;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9731012658227848;
            result[3] += 0.02689873417721519;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0.013043478260869565;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9434782608695652;
            result[5] += 0.043478260869565216;
          } else {
            result[0] += 0;
            result[1] += 0.8;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42580000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0821917808219178;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5616438356164384;
            result[5] += 0.3561643835616438;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42600000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.0027359781121751026;
            result[2] += 0;
            result[3] += 0.030095759233926128;
            result[4] += 0.019151846785225718;
            result[5] += 0.948016415868673;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0.04081632653061224;
            result[2] += 0;
            result[3] += 0.1836734693877551;
            result[4] += 0.4897959183673469;
            result[5] += 0.2857142857142857;
          } else {
            result[0] += 0;
            result[1] += 0.00823045267489712;
            result[2] += 0.00411522633744856;
            result[3] += 0.20987654320987653;
            result[4] += 0.09465020576131687;
            result[5] += 0.6831275720164609;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42680000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42620000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0.9933035714285714;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.006696428571428571;
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
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
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
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0.11504424778761062;
            result[1] += 0.3274336283185841;
            result[2] += 0;
            result[3] += 0.035398230088495575;
            result[4] += 0.46017699115044247;
            result[5] += 0.061946902654867256;
          } else {
            result[0] += 0.8862385321100917;
            result[1] += 0.01651376146788991;
            result[2] += 0.0009174311926605505;
            result[3] += 0.01834862385321101;
            result[4] += 0.04128440366972477;
            result[5] += 0.03669724770642202;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0.013054830287206262;
            result[1] += 0.005221932114882506;
            result[2] += 0.05483028720626631;
            result[3] += 0.5874673629242819;
            result[4] += 0.03394255874673629;
            result[5] += 0.3054830287206266;
          } else {
            result[0] += 0.34913793103448276;
            result[1] += 0;
            result[2] += 0.3922413793103448;
            result[3] += 0.0603448275862069;
            result[4] += 0.01293103448275862;
            result[5] += 0.1853448275862069;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07407407407407407;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.9259259259259259;
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
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42960000))) ) ) {
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
            result[3] += 0.9615384615384616;
            result[4] += 0;
            result[5] += 0.038461538461538464;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42f50000))) ) ) {
            result[0] += 0.061224489795918366;
            result[1] += 0.01020408163265306;
            result[2] += 0.5102040816326531;
            result[3] += 0.30612244897959184;
            result[4] += 0;
            result[5] += 0.11224489795918367;
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
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0.375;
            result[4] += 0;
            result[5] += 0.025;
          } else {
            result[0] += 0.004672897196261683;
            result[1] += 0;
            result[2] += 0.869158878504673;
            result[3] += 0.12616822429906543;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ed0000))) ) ) {
            result[0] += 1;
            result[1] += 0;
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
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9655172413793104;
            result[3] += 0.034482758620689655;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.55;
            result[3] += 0.45;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8848920863309353;
            result[3] += 0.11510791366906475;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.002;
            result[1] += 0;
            result[2] += 0.982;
            result[3] += 0.016;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0.008130081300813009;
            result[1] += 0.008130081300813009;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9471544715447154;
            result[5] += 0.036585365853658534;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.46153846153846156;
            result[3] += 0.15384615384615385;
            result[4] += 0.23076923076923078;
            result[5] += 0.15384615384615385;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0.9836065573770492;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.01639344262295082;
            result[5] += 0;
          } else {
            result[0] += 0.057971014492753624;
            result[1] += 0.08695652173913043;
            result[2] += 0;
            result[3] += 0.10144927536231885;
            result[4] += 0.2898550724637681;
            result[5] += 0.463768115942029;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x425e0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42960000))) ) ) {
            result[0] += 0;
            result[1] += 0.027777777777777776;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9166666666666666;
            result[5] += 0.05555555555555555;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.016152716593245228;
            result[4] += 0.01762114537444934;
            result[5] += 0.9662261380323054;
          } else {
            result[0] += 0.002824858757062147;
            result[1] += 0.014124293785310734;
            result[2] += 0.00847457627118644;
            result[3] += 0.2062146892655367;
            result[4] += 0.1440677966101695;
            result[5] += 0.6242937853107344;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429e0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0.6818181818181818;
            result[2] += 0;
            result[3] += 0.09090909090909091;
            result[4] += 0.22727272727272727;
            result[5] += 0;
          } else {
            result[0] += 0.0044742729306487695;
            result[1] += 0.9932885906040269;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0022371364653243847;
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
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0.8081494057724957;
            result[1] += 0.01697792869269949;
            result[2] += 0.012733446519524618;
            result[3] += 0.04838709677419355;
            result[4] += 0.07045840407470289;
            result[5] += 0.0432937181663837;
          } else {
            result[0] += 0.03636363636363636;
            result[1] += 0.8727272727272727;
            result[2] += 0;
            result[3] += 0.01818181818181818;
            result[4] += 0.07272727272727272;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0.00821917808219178;
            result[1] += 0.005479452054794521;
            result[2] += 0.12876712328767123;
            result[3] += 0.4986301369863014;
            result[4] += 0.019178082191780823;
            result[5] += 0.33972602739726027;
          } else {
            result[0] += 0.3953488372093023;
            result[1] += 0.031007751937984496;
            result[2] += 0.26356589147286824;
            result[3] += 0.015503875968992248;
            result[4] += 0.20155038759689922;
            result[5] += 0.09302325581395349;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.75;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06976744186046512;
            result[3] += 0.8372093023255814;
            result[4] += 0;
            result[5] += 0.09302325581395349;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2222222222222222;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0.1111111111111111;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0.26666666666666666;
            result[4] += 0;
            result[5] += 0.06666666666666667;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4090909090909091;
            result[3] += 0.5909090909090909;
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
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5714285714285714;
            result[3] += 0.42857142857142855;
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
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13333333333333333;
            result[3] += 0.6;
            result[4] += 0;
            result[5] += 0.26666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8235294117647058;
            result[3] += 0.17647058823529413;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714288;
            result[3] += 0.5714285714285715;
            result[4] += 0;
            result[5] += 0.28571428571428575;
          } else {
            result[0] += 0.00546448087431694;
            result[1] += 0;
            result[2] += 0.8797814207650273;
            result[3] += 0.11475409836065574;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0.02072538860103627;
            result[1] += 0;
            result[2] += 0.8808290155440415;
            result[3] += 0.09844559585492228;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0035778175313059034;
            result[1] += 0;
            result[2] += 0.9785330948121646;
            result[3] += 0.012522361359570662;
            result[4] += 0;
            result[5] += 0.005366726296958855;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42240000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0.003802281368821293;
            result[1] += 0.003802281368821293;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9809885931558936;
            result[5] += 0.01140684410646388;
          } else {
            result[0] += 0.07317073170731707;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5609756097560976;
            result[5] += 0.36585365853658536;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.001455604075691412;
            result[3] += 0.027656477438136828;
            result[4] += 0.01601164483260553;
            result[5] += 0.9548762736535662;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.18181818181818182;
            result[3] += 0;
            result[4] += 0.45454545454545453;
            result[5] += 0.36363636363636365;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0.870967741935484;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.05376344086021506;
            result[4] += 0.03225806451612904;
            result[5] += 0.04301075268817205;
          } else {
            result[0] += 0.015015015015015015;
            result[1] += 0.015015015015015015;
            result[2] += 0.03903903903903904;
            result[3] += 0.42492492492492495;
            result[4] += 0.06906906906906907;
            result[5] += 0.4369369369369369;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42480000))) ) ) {
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
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425c0000))) ) ) {
            result[0] += 0;
            result[1] += 0.9977924944812362;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002207505518763797;
            result[5] += 0;
          } else {
            result[0] += 0.030303030303030304;
            result[1] += 0.6060606060606061;
            result[2] += 0;
            result[3] += 0.06060606060606061;
            result[4] += 0.30303030303030304;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42940000))) ) ) {
            result[0] += 0.2411764705882353;
            result[1] += 0.06470588235294118;
            result[2] += 0.041176470588235294;
            result[3] += 0.011764705882352941;
            result[4] += 0.5294117647058824;
            result[5] += 0.11176470588235295;
          } else {
            result[0] += 0.9155778894472363;
            result[1] += 0.020100502512562818;
            result[2] += 0.004020100502512564;
            result[3] += 0.007035175879396986;
            result[4] += 0.03417085427135679;
            result[5] += 0.01909547738693468;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42df0000))) ) ) {
            result[0] += 0.0784313725490196;
            result[1] += 0;
            result[2] += 0.30980392156862746;
            result[3] += 0.2784313725490196;
            result[4] += 0.06666666666666667;
            result[5] += 0.26666666666666666;
          } else {
            result[0] += 0.7777777777777779;
            result[1] += 0.011111111111111113;
            result[2] += 0.11111111111111112;
            result[3] += 0;
            result[4] += 0.07777777777777779;
            result[5] += 0.022222222222222227;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c20000))) ) ) {
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
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0.6;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06896551724137931;
            result[3] += 0.8620689655172413;
            result[4] += 0;
            result[5] += 0.06896551724137931;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0625;
            result[3] += 0.875;
            result[4] += 0;
            result[5] += 0.0625;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4375;
            result[3] += 0.4375;
            result[4] += 0;
            result[5] += 0.125;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8409090909090909;
            result[3] += 0.1590909090909091;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42da0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2857142857142857;
            result[3] += 0.7142857142857143;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16129032258064516;
            result[3] += 0.16129032258064516;
            result[4] += 0;
            result[5] += 0.6774193548387096;
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
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42e00000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0.0020964360587002098;
            result[1] += 0;
            result[2] += 0.909853249475891;
            result[3] += 0.07756813417190776;
            result[4] += 0.0020964360587002098;
            result[5] += 0.008385744234800839;
          } else {
            result[0] += 0.014164305949008499;
            result[1] += 0;
            result[2] += 0.9773371104815864;
            result[3] += 0.0056657223796034;
            result[4] += 0.0028328611898017;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ef0000))) ) ) {
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
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9943181818181818;
            result[5] += 0.005681818181818182;
          } else {
            result[0] += 0;
            result[1] += 0.07142857142857142;
            result[2] += 0;
            result[3] += 0.03571428571428571;
            result[4] += 0.5892857142857143;
            result[5] += 0.30357142857142855;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.09375;
            result[1] += 0;
            result[2] += 0.15625;
            result[3] += 0.15625;
            result[4] += 0.34375;
            result[5] += 0.25;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.025;
            result[4] += 0.9;
            result[5] += 0.075;
          } else {
            result[0] += 0.002014098690835851;
            result[1] += 0.005035246727089627;
            result[2] += 0;
            result[3] += 0.059415911379657606;
            result[4] += 0.0553877139979859;
            result[5] += 0.878147029204431;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0234375;
            result[3] += 0.234375;
            result[4] += 0.0703125;
            result[5] += 0.671875;
          } else {
            result[0] += 0.0051813471502590676;
            result[1] += 0.031088082901554404;
            result[2] += 0.010362694300518135;
            result[3] += 0.7046632124352331;
            result[4] += 0.02072538860103627;
            result[5] += 0.22797927461139897;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0.7692307692307693;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.23076923076923078;
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
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x422c0000))) ) ) {
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
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42900000))) ) ) {
            result[0] += 0.09289617486338798;
            result[1] += 0.2786885245901639;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6284153005464481;
            result[5] += 0;
          } else {
            result[0] += 0.8867745004757375;
            result[1] += 0.012369172216936253;
            result[2] += 0.010466222645099907;
            result[3] += 0.0285442435775452;
            result[4] += 0.0428163653663178;
            result[5] += 0.019029495718363466;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0.03488372093023256;
            result[1] += 0.01744186046511628;
            result[2] += 0.12209302325581395;
            result[3] += 0.43023255813953487;
            result[4] += 0.12790697674418605;
            result[5] += 0.26744186046511625;
          } else {
            result[0] += 0.348993288590604;
            result[1] += 0;
            result[2] += 0.5234899328859061;
            result[3] += 0.10067114093959731;
            result[4] += 0.020134228187919462;
            result[5] += 0.006711409395973154;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13043478260869565;
            result[3] += 0.782608695652174;
            result[4] += 0;
            result[5] += 0.08695652173913043;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42740000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0.13333333333333333;
            result[4] += 0;
            result[5] += 0.7;
          }
        } else {
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
            result[2] += 0.8;
            result[3] += 0.12;
            result[4] += 0;
            result[5] += 0.08;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42420000))) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0.017241379310344827;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.41379310344827586;
            result[4] += 0;
            result[5] += 0.06896551724137931;
          } else {
            result[0] += 0.0036900369003690036;
            result[1] += 0;
            result[2] += 0.8339483394833949;
            result[3] += 0.14022140221402213;
            result[4] += 0;
            result[5] += 0.02214022140221402;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0.02608695652173913;
            result[1] += 0;
            result[2] += 0.8434782608695652;
            result[3] += 0.13043478260869565;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.00199203187250996;
            result[1] += 0;
            result[2] += 0.9840637450199203;
            result[3] += 0.01195219123505976;
            result[4] += 0;
            result[5] += 0.00199203187250996;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42240000))) ) ) {
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
            result[4] += 0.9702970297029703;
            result[5] += 0.0297029702970297;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0.04225352112676056;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5774647887323944;
            result[5] += 0.38028169014084506;
          } else {
            result[0] += 0.851063829787234;
            result[1] += 0.0425531914893617;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.10638297872340426;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02564102564102564;
            result[3] += 0;
            result[4] += 0.5641025641025641;
            result[5] += 0.41025641025641024;
          } else {
            result[0] += 0;
            result[1] += 0.0023612750885478157;
            result[2] += 0;
            result[3] += 0.053128689492325853;
            result[4] += 0.03423848878394333;
            result[5] += 0.910271546635183;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0.04895104895104895;
            result[2] += 0.04895104895104895;
            result[3] += 0.23776223776223776;
            result[4] += 0.04895104895104895;
            result[5] += 0.6153846153846154;
          } else {
            result[0] += 0.0051813471502590676;
            result[1] += 0;
            result[2] += 0.06735751295336788;
            result[3] += 0.6839378238341969;
            result[4] += 0.02072538860103627;
            result[5] += 0.22279792746113988;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d20000))) ) ) {
            result[0] += 0;
            result[1] += 0.1232876712328767;
            result[2] += 0;
            result[3] += 0.0547945205479452;
            result[4] += 0.821917808219178;
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
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42850000))) ) ) {
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
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0.08130081300813008;
            result[1] += 0.34959349593495936;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5691056910569106;
            result[5] += 0;
          } else {
            result[0] += 0.8622366288492707;
            result[1] += 0.011345218800648298;
            result[2] += 0.014586709886547812;
            result[3] += 0.02593192868719611;
            result[4] += 0.04943273905996758;
            result[5] += 0.03646677471636953;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0.0064516129032258064;
            result[1] += 0.0032258064516129032;
            result[2] += 0.2709677419354839;
            result[3] += 0.36451612903225805;
            result[4] += 0.06129032258064516;
            result[5] += 0.29354838709677417;
          } else {
            result[0] += 0.7500000000000001;
            result[1] += 0.014705882352941178;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1911764705882353;
            result[5] += 0.04411764705882354;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.07692307692307693;
            result[4] += 0.038461538461538464;
            result[5] += 0.8846153846153846;
          } else {
            result[0] += 0;
            result[1] += 0.75;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.075;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0.175;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7000000000000001;
            result[3] += 0.20000000000000004;
            result[4] += 0;
            result[5] += 0.10000000000000002;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x429c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5714285714285714;
            result[3] += 0;
            result[4] += 0.42857142857142855;
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
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2727272727272727;
            result[3] += 0.7272727272727273;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8301886792452831;
            result[3] += 0.16981132075471697;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1;
            result[3] += 0.7;
            result[4] += 0;
            result[5] += 0.2;
          } else {
            result[0] += 0.007518796992481203;
            result[1] += 0;
            result[2] += 0.6992481203007519;
            result[3] += 0.20300751879699247;
            result[4] += 0.015037593984962405;
            result[5] += 0.07518796992481203;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42f90000))) ) ) {
            result[0] += 0;
            result[1] += 0.008264462809917357;
            result[2] += 0.9132231404958678;
            result[3] += 0.07851239669421489;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.7142857142857143;
            result[1] += 0;
            result[2] += 0.2857142857142857;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42e30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.92;
            result[3] += 0.08;
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
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9870967741935484;
            result[3] += 0.012903225806451613;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42240000))) ) ) {
            result[0] += 0;
            result[1] += 0.95;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05;
            result[5] += 0;
          } else {
            result[0] += 0.00510204081632653;
            result[1] += 0.00510204081632653;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9132653061224489;
            result[5] += 0.07653061224489796;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9428571428571428;
            result[5] += 0.05714285714285714;
          } else {
            result[0] += 0.6423357664233577;
            result[1] += 0.0072992700729927005;
            result[2] += 0;
            result[3] += 0.10948905109489052;
            result[4] += 0.06569343065693431;
            result[5] += 0.17518248175182483;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8235294117647058;
            result[5] += 0.17647058823529413;
          } else {
            result[0] += 0;
            result[1] += 0.001141552511415525;
            result[2] += 0.00228310502283105;
            result[3] += 0.04794520547945205;
            result[4] += 0.02511415525114155;
            result[5] += 0.9235159817351598;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0.012658227848101266;
            result[1] += 0.004219409282700422;
            result[2] += 0.04219409282700422;
            result[3] += 0.16455696202531644;
            result[4] += 0.25316455696202533;
            result[5] += 0.5232067510548524;
          } else {
            result[0] += 0.04411764705882353;
            result[1] += 0;
            result[2] += 0.058823529411764705;
            result[3] += 0.6544117647058824;
            result[4] += 0.003676470588235294;
            result[5] += 0.23897058823529413;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42480000))) ) ) {
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
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0.09523809523809523;
            result[1] += 0.047619047619047616;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8571428571428571;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.967741935483871;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.03225806451612903;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0.23376623376623376;
            result[1] += 0.2077922077922078;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4805194805194805;
            result[5] += 0.07792207792207792;
          } else {
            result[0] += 0.8953271028037383;
            result[1] += 0.008411214953271028;
            result[2] += 0.011214953271028037;
            result[3] += 0.029906542056074768;
            result[4] += 0.04392523364485981;
            result[5] += 0.011214953271028037;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0.025157232704402517;
            result[1] += 0;
            result[2] += 0.2893081761006289;
            result[3] += 0.24528301886792453;
            result[4] += 0.06289308176100629;
            result[5] += 0.37735849056603776;
          } else {
            result[0] += 0.6470588235294118;
            result[1] += 0.011764705882352941;
            result[2] += 0.047058823529411764;
            result[3] += 0;
            result[4] += 0.29411764705882354;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42900000))) ) ) {
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
            result[3] += 0.21818181818181817;
            result[4] += 0.01818181818181818;
            result[5] += 0.7636363636363637;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2647058823529412;
            result[3] += 0.6176470588235294;
            result[4] += 0;
            result[5] += 0.11764705882352941;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0.4;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.875;
            result[3] += 0.0625;
            result[4] += 0;
            result[5] += 0.0625;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42da0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0;
            result[4] += 0.25;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.046511627906976744;
            result[1] += 0;
            result[2] += 0.627906976744186;
            result[3] += 0.11627906976744186;
            result[4] += 0;
            result[5] += 0.20930232558139536;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0.03333333333333334;
            result[1] += 0;
            result[2] += 0.8030303030303031;
            result[3] += 0.15454545454545457;
            result[4] += 0;
            result[5] += 0.009090909090909092;
          } else {
            result[0] += 0.010471204188481676;
            result[1] += 0;
            result[2] += 0.9424083769633508;
            result[3] += 0.04363001745200698;
            result[4] += 0;
            result[5] += 0.0034904013961605585;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x423e0000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.006211180124223602;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9875776397515528;
            result[5] += 0.006211180124223602;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6923076923076923;
            result[5] += 0.3076923076923077;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.24;
            result[5] += 0.76;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.002777777777777778;
            result[3] += 0.025;
            result[4] += 0.018055555555555554;
            result[5] += 0.9541666666666667;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0.32857142857142857;
            result[1] += 0.22857142857142856;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.34285714285714286;
            result[5] += 0.1;
          } else {
            result[0] += 0;
            result[1] += 0.03234501347708895;
            result[2] += 0.008086253369272238;
            result[3] += 0.3665768194070081;
            result[4] += 0.029649595687331536;
            result[5] += 0.5633423180592992;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0.014705882352941176;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8970588235294118;
            result[5] += 0.08823529411764706;
          } else {
            result[0] += 0;
            result[1] += 0.8888888888888888;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1111111111111111;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x423c0000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.03260869565217391;
            result[1] += 0.5543478260869565;
            result[2] += 0.03260869565217391;
            result[3] += 0.08695652173913043;
            result[4] += 0.2717391304347826;
            result[5] += 0.021739130434782608;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0.8950511945392492;
            result[1] += 0.020477815699658702;
            result[2] += 0;
            result[3] += 0.012798634812286689;
            result[4] += 0.06313993174061433;
            result[5] += 0.008532423208191127;
          } else {
            result[0] += 0.3055555555555556;
            result[1] += 0.07407407407407407;
            result[2] += 0.05555555555555555;
            result[3] += 0.16666666666666666;
            result[4] += 0.14814814814814814;
            result[5] += 0.25;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0.02631578947368421;
            result[1] += 0.015037593984962405;
            result[2] += 0.13909774436090225;
            result[3] += 0.2669172932330827;
            result[4] += 0.12030075187969924;
            result[5] += 0.4323308270676692;
          } else {
            result[0] += 0.7792207792207793;
            result[1] += 0;
            result[2] += 0.025974025974025976;
            result[3] += 0;
            result[4] += 0.15584415584415584;
            result[5] += 0.03896103896103896;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42540000))) ) ) {
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
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 0.009433962264150943;
            result[2] += 0.018867924528301886;
            result[3] += 0.6132075471698113;
            result[4] += 0.018867924528301886;
            result[5] += 0.33962264150943394;
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
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.28205128205128205;
            result[3] += 0.717948717948718;
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
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7346938775510204;
            result[3] += 0.12244897959183673;
            result[4] += 0;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.375;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0.16666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8333333333333334;
          } else {
            result[0] += 0.03125;
            result[1] += 0;
            result[2] += 0.625;
            result[3] += 0.0625;
            result[4] += 0.09375;
            result[5] += 0.1875;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ee0000))) ) ) {
            result[0] += 0.3181818181818182;
            result[1] += 0;
            result[2] += 0.5909090909090909;
            result[3] += 0.09090909090909091;
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
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0.08108108108108109;
            result[2] += 0.35135135135135137;
            result[3] += 0.32432432432432434;
            result[4] += 0;
            result[5] += 0.24324324324324326;
          } else {
            result[0] += 0.09375;
            result[1] += 0;
            result[2] += 0.84375;
            result[3] += 0.0625;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8882466281310212;
            result[3] += 0.09633911368015415;
            result[4] += 0;
            result[5] += 0.015414258188824663;
          } else {
            result[0] += 0.014367816091954023;
            result[1] += 0;
            result[2] += 0.9770114942528736;
            result[3] += 0.008620689655172414;
            result[4] += 0;
            result[5] += 0;
          }
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
    

    FILE* file = fopen("./codegen/dataset_146/split_3/test_data.csv", "r");
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
