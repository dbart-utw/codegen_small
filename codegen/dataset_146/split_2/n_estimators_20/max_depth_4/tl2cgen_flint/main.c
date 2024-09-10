
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
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0.025362318840579712;
          result[1] += 0.021739130434782608;
          result[2] += 0.0036231884057971015;
          result[3] += 0;
          result[4] += 0.822463768115942;
          result[5] += 0.12681159420289856;
        } else {
          result[0] += 0.5254237288135595;
          result[1] += 0.005649717514124295;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.44067796610169496;
          result[5] += 0.028248587570621472;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0.0014104372355430183;
          result[2] += 0;
          result[3] += 0.03385049365303244;
          result[4] += 0.04090267983074753;
          result[5] += 0.923836389280677;
        } else {
          result[0] += 0.008021390374331552;
          result[1] += 0.016042780748663103;
          result[2] += 0.00267379679144385;
          result[3] += 0.2700534759358289;
          result[4] += 0.1657754010695187;
          result[5] += 0.5374331550802139;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.004728132387706856;
          result[1] += 0.9810874704491725;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.014184397163120567;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.77431906614786;
          result[1] += 0.045136186770428015;
          result[2] += 0.01634241245136187;
          result[3] += 0.03268482490272374;
          result[4] += 0.09105058365758754;
          result[5] += 0.04046692607003891;
        } else {
          result[0] += 0.16731517509727625;
          result[1] += 0.01556420233463035;
          result[2] += 0.14980544747081712;
          result[3] += 0.38715953307393;
          result[4] += 0.033073929961089495;
          result[5] += 0.24708171206225682;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03703703703703704;
          result[3] += 0.888888888888889;
          result[4] += 0;
          result[5] += 0.07407407407407408;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.36363636363636365;
          result[4] += 0;
          result[5] += 0.6363636363636364;
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
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0.1;
          result[1] += 0;
          result[2] += 0.3;
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0.26666666666666666;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8080357142857143;
          result[3] += 0.17410714285714285;
          result[4] += 0;
          result[5] += 0.017857142857142856;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0.010452961672473868;
          result[1] += 0;
          result[2] += 0.9198606271777003;
          result[3] += 0.05574912891986063;
          result[4] += 0;
          result[5] += 0.013937282229965157;
        } else {
          result[0] += 0.0021008403361344537;
          result[1] += 0;
          result[2] += 0.9936974789915967;
          result[3] += 0.004201680672268907;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0.015544041450777202;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9792746113989638;
          result[5] += 0.0051813471502590676;
        } else {
          result[0] += 0;
          result[1] += 0.15625;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.515625;
          result[5] += 0.328125;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0.010025062656641603;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03132832080200501;
          result[4] += 0.07518796992481203;
          result[5] += 0.8834586466165414;
        } else {
          result[0] += 0.0875;
          result[1] += 0.005357142857142857;
          result[2] += 0.04107142857142857;
          result[3] += 0.35;
          result[4] += 0.14285714285714285;
          result[5] += 0.3732142857142857;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.006818181818181818;
          result[1] += 0.9704545454545455;
          result[2] += 0;
          result[3] += 0.013636363636363636;
          result[4] += 0.00909090909090909;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.7575757575757577;
          result[1] += 0.04166666666666667;
          result[2] += 0.008333333333333335;
          result[3] += 0.02575757575757576;
          result[4] += 0.11363636363636365;
          result[5] += 0.05303030303030304;
        } else {
          result[0] += 0.148989898989899;
          result[1] += 0.007575757575757577;
          result[2] += 0.20202020202020204;
          result[3] += 0.33333333333333337;
          result[4] += 0.07070707070707072;
          result[5] += 0.2373737373737374;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0.14285714285714285;
          result[2] += 0.14285714285714285;
          result[3] += 0;
          result[4] += 0.02857142857142857;
          result[5] += 0.6857142857142857;
        } else {
          result[0] += 0;
          result[1] += 0.06818181818181818;
          result[2] += 0.045454545454545456;
          result[3] += 0.6136363636363636;
          result[4] += 0;
          result[5] += 0.2727272727272727;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3235294117647059;
          result[3] += 0.5882352941176471;
          result[4] += 0;
          result[5] += 0.08823529411764706;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9047619047619048;
          result[3] += 0.047619047619047616;
          result[4] += 0;
          result[5] += 0.047619047619047616;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42de0000))) ) ) {
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0.012578616352201259;
          result[1] += 0;
          result[2] += 0.7861635220125787;
          result[3] += 0.16666666666666666;
          result[4] += 0;
          result[5] += 0.03459119496855346;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9858156028368794;
          result[3] += 0.012411347517730497;
          result[4] += 0;
          result[5] += 0.0017730496453900709;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0.0040650406504065045;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9878048780487805;
          result[5] += 0.008130081300813009;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.75;
          result[5] += 0.25;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0.0235655737704918;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0706967213114754;
          result[4] += 0.042008196721311473;
          result[5] += 0.8637295081967213;
        } else {
          result[0] += 0.08683473389355742;
          result[1] += 0.014005602240896359;
          result[2] += 0.01680672268907563;
          result[3] += 0.4425770308123249;
          result[4] += 0.036414565826330535;
          result[5] += 0.40336134453781514;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.7430293896006028;
          result[1] += 0.08214016578749057;
          result[2] += 0.0007535795026375283;
          result[3] += 0.018839487565938208;
          result[4] += 0.14468726450640543;
          result[5] += 0.010550113036925395;
        } else {
          result[0] += 0.125;
          result[1] += 0.014705882352941176;
          result[2] += 0.29901960784313725;
          result[3] += 0.2818627450980392;
          result[4] += 0.029411764705882353;
          result[5] += 0.25;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0.853658536585366;
          result[2] += 0;
          result[3] += 0.07317073170731708;
          result[4] += 0.07317073170731708;
          result[5] += 0;
        } else {
          result[0] += 0.008174386920980926;
          result[1] += 0.9918256130790191;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a00000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06666666666666667;
          result[3] += 0.03333333333333333;
          result[4] += 0.16666666666666666;
          result[5] += 0.7333333333333333;
        } else {
          result[0] += 0;
          result[1] += 0.1875;
          result[2] += 0.15625;
          result[3] += 0.53125;
          result[4] += 0;
          result[5] += 0.125;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0.14457831325301207;
          result[1] += 0.04819277108433736;
          result[2] += 0.6265060240963857;
          result[3] += 0.09638554216867472;
          result[4] += 0.02409638554216868;
          result[5] += 0.06024096385542169;
        } else {
          result[0] += 0.9285714285714286;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.07142857142857142;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3404255319148936;
          result[3] += 0.574468085106383;
          result[4] += 0;
          result[5] += 0.0851063829787234;
        } else {
          result[0] += 0.11764705882352941;
          result[1] += 0;
          result[2] += 0.8823529411764706;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7952380952380953;
          result[3] += 0.17142857142857146;
          result[4] += 0;
          result[5] += 0.03333333333333334;
        } else {
          result[0] += 0.0016207455429497568;
          result[1] += 0;
          result[2] += 0.9594813614262561;
          result[3] += 0.03565640194489465;
          result[4] += 0;
          result[5] += 0.0032414910858995136;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0.011450381679389313;
          result[1] += 0.007633587786259542;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9656488549618321;
          result[5] += 0.015267175572519083;
        } else {
          result[0] += 0;
          result[1] += 0.7619047619047619;
          result[2] += 0;
          result[3] += 0.19047619047619047;
          result[4] += 0.047619047619047616;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0.026136363636363635;
          result[1] += 0.0011363636363636363;
          result[2] += 0.0022727272727272726;
          result[3] += 0.04090909090909091;
          result[4] += 0.048863636363636366;
          result[5] += 0.8806818181818182;
        } else {
          result[0] += 0.06388888888888888;
          result[1] += 0.05555555555555555;
          result[2] += 0.005555555555555556;
          result[3] += 0.3611111111111111;
          result[4] += 0.03888888888888889;
          result[5] += 0.475;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.0022883295194508014;
          result[1] += 0.9771167048054921;
          result[2] += 0;
          result[3] += 0.01601830663615561;
          result[4] += 0.004576659038901603;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.14122137404580154;
          result[1] += 0.1946564885496183;
          result[2] += 0;
          result[3] += 0.007633587786259542;
          result[4] += 0.6221374045801527;
          result[5] += 0.03435114503816794;
        } else {
          result[0] += 0.7306874557051737;
          result[1] += 0.008504606661941885;
          result[2] += 0.039688164422395464;
          result[3] += 0.07795889440113395;
          result[4] += 0.05244507441530829;
          result[5] += 0.09071580439404678;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.15384615384615385;
          result[3] += 0.15384615384615385;
          result[4] += 0;
          result[5] += 0.6923076923076923;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.19811320754716982;
          result[3] += 0.6320754716981132;
          result[4] += 0;
          result[5] += 0.16981132075471697;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b40000))) ) ) {
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
          result[3] += 0.14814814814814814;
          result[4] += 0;
          result[5] += 0.07407407407407407;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.23076923076923078;
          result[3] += 0.3076923076923077;
          result[4] += 0;
          result[5] += 0.46153846153846156;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9117647058823529;
          result[3] += 0.058823529411764705;
          result[4] += 0.029411764705882353;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0.008356545961002786;
          result[1] += 0;
          result[2] += 0.8440111420612814;
          result[3] += 0.116991643454039;
          result[4] += 0;
          result[5] += 0.03064066852367688;
        } else {
          result[0] += 0.025041736227045076;
          result[1] += 0;
          result[2] += 0.9465776293823038;
          result[3] += 0.025041736227045076;
          result[4] += 0;
          result[5] += 0.00333889816360601;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0.004149377593360996;
          result[1] += 0.008298755186721992;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.970954356846473;
          result[5] += 0.016597510373443983;
        } else {
          result[0] += 0.06818181818181818;
          result[1] += 0.022727272727272728;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5454545454545454;
          result[5] += 0.36363636363636365;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0.9245283018867925;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.07547169811320754;
          result[5] += 0;
        } else {
          result[0] += 0.0007836990595611285;
          result[1] += 0.0023510971786833857;
          result[2] += 0.003134796238244514;
          result[3] += 0.1614420062695925;
          result[4] += 0.04623824451410658;
          result[5] += 0.7860501567398119;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a60000))) ) ) {
          result[0] += 0;
          result[1] += 0.1111111111111111;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8888888888888888;
          result[5] += 0;
        } else {
          result[0] += 0.004640371229698376;
          result[1] += 0.974477958236659;
          result[2] += 0.0069605568445475635;
          result[3] += 0.0069605568445475635;
          result[4] += 0.0069605568445475635;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.7569444444444444;
          result[1] += 0.06018518518518518;
          result[2] += 0.005401234567901234;
          result[3] += 0.03009259259259259;
          result[4] += 0.13503086419753085;
          result[5] += 0.012345679012345678;
        } else {
          result[0] += 0.1718377088305489;
          result[1] += 0.011933174224343675;
          result[2] += 0.2649164677804296;
          result[3] += 0.27684964200477324;
          result[4] += 0.06682577565632458;
          result[5] += 0.20763723150357996;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42910000))) ) ) {
          result[0] += 0.02127659574468085;
          result[1] += 0.0425531914893617;
          result[2] += 0.10638297872340426;
          result[3] += 0;
          result[4] += 0.2553191489361702;
          result[5] += 0.574468085106383;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.30434782608695654;
          result[3] += 0.43478260869565216;
          result[4] += 0;
          result[5] += 0.2608695652173913;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0.375;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0.375;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9615384615384616;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.038461538461538464;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42cc0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.125;
          result[3] += 0.875;
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
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0.005305039787798408;
          result[1] += 0;
          result[2] += 0.8275862068965517;
          result[3] += 0.15649867374005305;
          result[4] += 0;
          result[5] += 0.010610079575596816;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9808917197452229;
          result[3] += 0.01910828025477707;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0.0076045627376425855;
          result[1] += 0.022813688212927757;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9505703422053232;
          result[5] += 0.019011406844106463;
        } else {
          result[0] += 0.6;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.168;
          result[5] += 0.232;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0.0011695906432748538;
          result[2] += 0;
          result[3] += 0.05263157894736842;
          result[4] += 0.06783625730994151;
          result[5] += 0.8783625730994152;
        } else {
          result[0] += 0.012345679012345678;
          result[1] += 0.040123456790123455;
          result[2] += 0;
          result[3] += 0.49074074074074076;
          result[4] += 0.030864197530864196;
          result[5] += 0.42592592592592593;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0.010526315789473684;
          result[1] += 0.35789473684210527;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.631578947368421;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9815242494226328;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.018475750577367205;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.863677130044843;
          result[1] += 0.025112107623318385;
          result[2] += 0.004484304932735426;
          result[3] += 0.015246636771300448;
          result[4] += 0.08609865470852018;
          result[5] += 0.0053811659192825115;
        } else {
          result[0] += 0.2397003745318352;
          result[1] += 0.04119850187265917;
          result[2] += 0.149812734082397;
          result[3] += 0.3333333333333333;
          result[4] += 0.026217228464419477;
          result[5] += 0.20973782771535582;
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42780000))) ) ) {
          result[0] += 0;
          result[1] += 0.8235294117647058;
          result[2] += 0.058823529411764705;
          result[3] += 0;
          result[4] += 0.11764705882352941;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.012269938650306749;
          result[2] += 0.03680981595092025;
          result[3] += 0.4294478527607362;
          result[4] += 0.06134969325153374;
          result[5] += 0.4601226993865031;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0.2391304347826087;
          result[1] += 0;
          result[2] += 0.391304347826087;
          result[3] += 0.34782608695652173;
          result[4] += 0;
          result[5] += 0.021739130434782608;
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
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1774193548387097;
          result[3] += 0.5645161290322581;
          result[4] += 0;
          result[5] += 0.25806451612903225;
        } else {
          result[0] += 0.024390243902439025;
          result[1] += 0;
          result[2] += 0.7195121951219512;
          result[3] += 0.25609756097560976;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0.7241379310344828;
          result[1] += 0;
          result[2] += 0.27586206896551724;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0064794816414686825;
          result[1] += 0.0010799136069114472;
          result[2] += 0.9222462203023758;
          result[3] += 0.06479481641468683;
          result[4] += 0;
          result[5] += 0.005399568034557235;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0.01090909090909091;
          result[1] += 0.025454545454545455;
          result[2] += 0;
          result[3] += 0.007272727272727273;
          result[4] += 0.9163636363636364;
          result[5] += 0.04;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7777777777777778;
          result[4] += 0.2222222222222222;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0.032955715756951595;
          result[1] += 0.007209062821833162;
          result[2] += 0;
          result[3] += 0.05252317198764161;
          result[4] += 0.07518022657054584;
          result[5] += 0.8321318228630278;
        } else {
          result[0] += 0.07068062827225131;
          result[1] += 0.03926701570680628;
          result[2] += 0.041884816753926704;
          result[3] += 0.4424083769633508;
          result[4] += 0.060209424083769635;
          result[5] += 0.34554973821989526;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0.020202020202020204;
          result[1] += 0.4595959595959596;
          result[2] += 0;
          result[3] += 0.06565656565656566;
          result[4] += 0.4292929292929293;
          result[5] += 0.025252525252525252;
        } else {
          result[0] += 0.6881930854533594;
          result[1] += 0.006523157208088715;
          result[2] += 0.06653620352250489;
          result[3] += 0.0776255707762557;
          result[4] += 0.06588388780169602;
          result[5] += 0.09523809523809523;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c00000))) ) ) {
          result[0] += 0;
          result[1] += 0.9893048128342246;
          result[2] += 0;
          result[3] += 0.0106951871657754;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.5;
          result[1] += 0.4;
          result[2] += 0;
          result[3] += 0.1;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05405405405405406;
          result[3] += 0.13513513513513514;
          result[4] += 0.08108108108108109;
          result[5] += 0.7297297297297297;
        } else {
          result[0] += 0;
          result[1] += 0.42857142857142855;
          result[2] += 0.42857142857142855;
          result[3] += 0.14285714285714285;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0.007751937984496124;
          result[2] += 0.5038759689922481;
          result[3] += 0.40310077519379844;
          result[4] += 0;
          result[5] += 0.08527131782945736;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8198198198198198;
          result[3] += 0.13513513513513514;
          result[4] += 0;
          result[5] += 0.04504504504504504;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0.1388888888888889;
          result[1] += 0.027777777777777776;
          result[2] += 0.6388888888888888;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.19444444444444445;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.946524064171123;
          result[3] += 0.053475935828877004;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x41e80000))) ) ) {
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
          result[4] += 0.9937888198757764;
          result[5] += 0.006211180124223602;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0.06666666666666667;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8222222222222222;
          result[5] += 0.1111111111111111;
        } else {
          result[0] += 0.8863636363636364;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.045454545454545456;
          result[5] += 0.06818181818181818;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9130434782608695;
          result[5] += 0.08695652173913043;
        } else {
          result[0] += 0;
          result[1] += 0.005982053838484547;
          result[2] += 0;
          result[3] += 0.0518444666001994;
          result[4] += 0.06679960119641076;
          result[5] += 0.8753738783649053;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0641025641025641;
          result[3] += 0.20512820512820512;
          result[4] += 0.02564102564102564;
          result[5] += 0.7051282051282052;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.025210084033613446;
          result[3] += 0.6428571428571429;
          result[4] += 0;
          result[5] += 0.3319327731092437;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ad0000))) ) ) {
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
          result[3] += 0.14285714285714285;
          result[4] += 0.8571428571428571;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0.0024096385542168677;
          result[1] += 0.9927710843373494;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004819277108433735;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.6153846153846154;
          result[2] += 0.15384615384615385;
          result[3] += 0.23076923076923078;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0.07262569832402235;
          result[1] += 0.3743016759776536;
          result[2] += 0;
          result[3] += 0.00558659217877095;
          result[4] += 0.547486033519553;
          result[5] += 0;
        } else {
          result[0] += 0.5522208883553421;
          result[1] += 0.01680672268907563;
          result[2] += 0.057623049219687875;
          result[3] += 0.15846338535414164;
          result[4] += 0.10684273709483794;
          result[5] += 0.10804321728691477;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0.9867109634551495;
          result[1] += 0;
          result[2] += 0.0049833887043189366;
          result[3] += 0.0049833887043189366;
          result[4] += 0.0033222591362126247;
          result[5] += 0;
        } else {
          result[0] += 0.03495311167945439;
          result[1] += 0.0076726342710997444;
          result[2] += 0.8056265984654731;
          result[3] += 0.09633418584825235;
          result[4] += 0.0068201193520886615;
          result[5] += 0.04859335038363171;
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9864253393665159;
          result[5] += 0.013574660633484163;
        } else {
          result[0] += 0.02173913043478261;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.1521739130434783;
          result[4] += 0.4565217391304348;
          result[5] += 0.3695652173913044;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42800000))) ) ) {
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
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0.4722222222222222;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4444444444444444;
          result[5] += 0.08333333333333333;
        } else {
          result[0] += 0.003444316877152698;
          result[1] += 0;
          result[2] += 0.003444316877152698;
          result[3] += 0.0539609644087256;
          result[4] += 0.040183696900114814;
          result[5] += 0.8989667049368542;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0.04838709677419355;
          result[1] += 0.14516129032258066;
          result[2] += 0;
          result[3] += 0.22580645161290322;
          result[4] += 0.016129032258064516;
          result[5] += 0.5645161290322581;
        } else {
          result[0] += 0.014423076923076926;
          result[1] += 0.004807692307692309;
          result[2] += 0.043269230769230775;
          result[3] += 0.7307692307692308;
          result[4] += 0.009615384615384618;
          result[5] += 0.19711538461538464;
        }
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x424e0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42580000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42640000))) ) ) {
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
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16666666666666666;
          result[3] += 0;
          result[4] += 0.8333333333333334;
          result[5] += 0;
        } else {
          result[0] += 0.03571428571428572;
          result[1] += 0.7857142857142858;
          result[2] += 0.14285714285714288;
          result[3] += 0.03571428571428572;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.8064035740878631;
          result[1] += 0.0565897244973939;
          result[2] += 0.00372300819061802;
          result[3] += 0.017125837676842892;
          result[4] += 0.09530900967982131;
          result[5] += 0.020848845867460913;
        } else {
          result[0] += 0.15217391304347827;
          result[1] += 0.0036231884057971015;
          result[2] += 0.12318840579710146;
          result[3] += 0.26811594202898553;
          result[4] += 0.08695652173913043;
          result[5] += 0.36594202898550726;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0.011029411764705883;
          result[1] += 0.007352941176470588;
          result[2] += 0.36764705882352944;
          result[3] += 0.4485294117647059;
          result[4] += 0.022058823529411766;
          result[5] += 0.14338235294117646;
        } else {
          result[0] += 0.024691358024691357;
          result[1] += 0.0030864197530864196;
          result[2] += 0.8734567901234568;
          result[3] += 0.05246913580246913;
          result[4] += 0.01440329218106996;
          result[5] += 0.03189300411522634;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0.010101010101010102;
          result[2] += 0.005050505050505051;
          result[3] += 0;
          result[4] += 0.9696969696969697;
          result[5] += 0.015151515151515152;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.037037037037037035;
          result[4] += 0.37037037037037035;
          result[5] += 0.5925925925925926;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0.0072992700729927005;
          result[1] += 0.010948905109489052;
          result[2] += 0.0024330900243309003;
          result[3] += 0.058394160583941604;
          result[4] += 0.027980535279805353;
          result[5] += 0.8929440389294404;
        } else {
          result[0] += 0.09785932721712538;
          result[1] += 0.04892966360856269;
          result[2] += 0.0061162079510703364;
          result[3] += 0.3211009174311927;
          result[4] += 0.09785932721712538;
          result[5] += 0.42813455657492355;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0.5;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5;
          result[5] += 0;
        } else {
          result[0] += 0.0049261083743842365;
          result[1] += 0.9876847290640394;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.007389162561576354;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.7652548456568558;
          result[1] += 0.025843503230437905;
          result[2] += 0;
          result[3] += 0.02656137832017229;
          result[4] += 0.14716439339554918;
          result[5] += 0.035175879396984924;
        } else {
          result[0] += 0.18840579710144928;
          result[1] += 0.07246376811594203;
          result[2] += 0.21014492753623187;
          result[3] += 0.2536231884057971;
          result[4] += 0.0748792270531401;
          result[5] += 0.20048309178743962;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.029850746268656716;
          result[2] += 0.08955223880597014;
          result[3] += 0.04477611940298507;
          result[4] += 0.014925373134328358;
          result[5] += 0.8208955223880597;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0.0546875;
          result[1] += 0.0546875;
          result[2] += 0.1171875;
          result[3] += 0.578125;
          result[4] += 0.0703125;
          result[5] += 0.125;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5866666666666667;
          result[3] += 0.24;
          result[4] += 0;
          result[5] += 0.17333333333333334;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0.05555555555555555;
          result[1] += 0;
          result[2] += 0.7777777777777778;
          result[3] += 0.1111111111111111;
          result[4] += 0.05555555555555555;
          result[5] += 0;
        } else {
          result[0] += 0.9583333333333334;
          result[1] += 0;
          result[2] += 0.041666666666666664;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0.009615384615384616;
          result[1] += 0;
          result[2] += 0.6730769230769231;
          result[3] += 0.25961538461538464;
          result[4] += 0;
          result[5] += 0.057692307692307696;
        } else {
          result[0] += 0.01507537688442211;
          result[1] += 0;
          result[2] += 0.9371859296482412;
          result[3] += 0.04396984924623116;
          result[4] += 0;
          result[5] += 0.0037688442211055275;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42240000))) ) ) {
          result[0] += 0;
          result[1] += 0.9285714285714286;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.07142857142857142;
          result[5] += 0;
        } else {
          result[0] += 0.0040650406504065045;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.012195121951219513;
          result[4] += 0.926829268292683;
          result[5] += 0.056910569105691054;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0.02356902356902357;
          result[1] += 0.002244668911335578;
          result[2] += 0.007856341189674524;
          result[3] += 0.05499438832772166;
          result[4] += 0.06397306397306397;
          result[5] += 0.8473625140291807;
        } else {
          result[0] += 0.10653753026634383;
          result[1] += 0.0387409200968523;
          result[2] += 0.014527845036319613;
          result[3] += 0.36077481840193704;
          result[4] += 0.1089588377723971;
          result[5] += 0.3704600484261501;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0.12025316455696203;
          result[1] += 0.10126582278481013;
          result[2] += 0.0189873417721519;
          result[3] += 0.18670886075949367;
          result[4] += 0.18354430379746836;
          result[5] += 0.38924050632911394;
        } else {
          result[0] += 0.7016348773841962;
          result[1] += 0.05994550408719346;
          result[2] += 0.05040871934604905;
          result[3] += 0.05381471389645776;
          result[4] += 0.09809264305177112;
          result[5] += 0.036103542234332424;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42d60000))) ) ) {
          result[0] += 0;
          result[1] += 0.9895287958115183;
          result[2] += 0;
          result[3] += 0.010471204188481676;
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
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1;
          result[3] += 0.74;
          result[4] += 0;
          result[5] += 0.16;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.38461538461538464;
          result[3] += 0.15384615384615385;
          result[4] += 0;
          result[5] += 0.46153846153846156;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2;
          result[4] += 0;
          result[5] += 0.8;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6774193548387096;
          result[3] += 0.3225806451612903;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
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
          result[3] += 0.7272727272727273;
          result[4] += 0;
          result[5] += 0.09090909090909091;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0.004784688995215311;
          result[1] += 0;
          result[2] += 0.7416267942583732;
          result[3] += 0.215311004784689;
          result[4] += 0;
          result[5] += 0.03827751196172249;
        } else {
          result[0] += 0.014285714285714285;
          result[1] += 0;
          result[2] += 0.9363636363636364;
          result[3] += 0.04155844155844156;
          result[4] += 0;
          result[5] += 0.007792207792207792;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 0.0035587188612099647;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.010676156583629895;
          result[4] += 0.9430604982206406;
          result[5] += 0.04270462633451958;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03299492385786802;
          result[4] += 0.030456852791878174;
          result[5] += 0.9365482233502538;
        } else {
          result[0] += 0.07142857142857142;
          result[1] += 0.0063025210084033615;
          result[2] += 0.01050420168067227;
          result[3] += 0.34243697478991597;
          result[4] += 0.08823529411764706;
          result[5] += 0.4810924369747899;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0.3225806451612903;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6693548387096774;
          result[5] += 0.008064516129032258;
        } else {
          result[0] += 0;
          result[1] += 0.9830866807610994;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.016913319238900635;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.8440366972477065;
          result[1] += 0.0316930775646372;
          result[2] += 0;
          result[3] += 0.015012510425354461;
          result[4] += 0.09341117597998332;
          result[5] += 0.0158465387823186;
        } else {
          result[0] += 0.2057142857142857;
          result[1] += 0.005714285714285714;
          result[2] += 0.15428571428571428;
          result[3] += 0.3171428571428571;
          result[4] += 0.037142857142857144;
          result[5] += 0.28;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0.0071428571428571435;
          result[1] += 0;
          result[2] += 0.1642857142857143;
          result[3] += 0.6071428571428572;
          result[4] += 0;
          result[5] += 0.22142857142857145;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6904761904761906;
          result[3] += 0.14285714285714288;
          result[4] += 0;
          result[5] += 0.16666666666666669;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42e70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9130434782608696;
          result[3] += 0.06521739130434784;
          result[4] += 0;
          result[5] += 0.02173913043478261;
        } else {
          result[0] += 0.6;
          result[1] += 0;
          result[2] += 0.4;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.589041095890411;
          result[3] += 0.3424657534246575;
          result[4] += 0;
          result[5] += 0.0684931506849315;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8492063492063492;
          result[3] += 0.15079365079365079;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0.4;
          result[1] += 0;
          result[2] += 0.6;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.00145985401459854;
          result[1] += 0;
          result[2] += 0.9605839416058394;
          result[3] += 0.029197080291970802;
          result[4] += 0;
          result[5] += 0.008759124087591242;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0.011235955056179775;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9588014981273408;
          result[5] += 0.0299625468164794;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09259259259259259;
          result[3] += 0.2777777777777778;
          result[4] += 0.3148148148148148;
          result[5] += 0.3148148148148148;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0.03140333660451423;
          result[1] += 0.002944062806673209;
          result[2] += 0;
          result[3] += 0.06771344455348381;
          result[4] += 0.047105004906771344;
          result[5] += 0.8508341511285574;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.013986013986013986;
          result[3] += 0.5804195804195804;
          result[4] += 0.03496503496503497;
          result[5] += 0.3706293706293706;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 0.46153846153846156;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5384615384615384;
          result[5] += 0;
        } else {
          result[0] += 0.002257336343115124;
          result[1] += 0.9887133182844243;
          result[2] += 0;
          result[3] += 0.004514672686230248;
          result[4] += 0.004514672686230248;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0.07179487179487179;
          result[1] += 0.30256410256410254;
          result[2] += 0;
          result[3] += 0.020512820512820513;
          result[4] += 0.6;
          result[5] += 0.005128205128205128;
        } else {
          result[0] += 0.7362637362637363;
          result[1] += 0.01098901098901099;
          result[2] += 0.04326923076923077;
          result[3] += 0.07967032967032966;
          result[4] += 0.05357142857142857;
          result[5] += 0.07623626373626374;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.012048192771084338;
          result[3] += 0.21686746987951808;
          result[4] += 0.08433734939759036;
          result[5] += 0.6867469879518072;
        } else {
          result[0] += 0.043478260869565216;
          result[1] += 0.2608695652173913;
          result[2] += 0.13043478260869565;
          result[3] += 0;
          result[4] += 0.5217391304347826;
          result[5] += 0.043478260869565216;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0.006622516556291391;
          result[1] += 0;
          result[2] += 0.1986754966887417;
          result[3] += 0.609271523178808;
          result[4] += 0;
          result[5] += 0.18543046357615894;
        } else {
          result[0] += 0.014925373134328358;
          result[1] += 0;
          result[2] += 0.6119402985074627;
          result[3] += 0.23880597014925373;
          result[4] += 0;
          result[5] += 0.13432835820895522;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.48148148148148145;
          result[3] += 0.48148148148148145;
          result[4] += 0;
          result[5] += 0.037037037037037035;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9375;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.0625;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0.39285714285714285;
          result[1] += 0;
          result[2] += 0.5357142857142857;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.07142857142857142;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9410319410319411;
          result[3] += 0.05282555282555283;
          result[4] += 0;
          result[5] += 0.006142506142506143;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b90000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0.005988023952095809;
          result[1] += 0.08083832335329341;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9041916167664671;
          result[5] += 0.008982035928143712;
        } else {
          result[0] += 0.5951219512195122;
          result[1] += 0.014634146341463415;
          result[2] += 0;
          result[3] += 0.04390243902439024;
          result[4] += 0.17560975609756097;
          result[5] += 0.17073170731707318;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42890000))) ) ) {
          result[0] += 0.003389830508474576;
          result[1] += 0;
          result[2] += 0.0022598870056497176;
          result[3] += 0.0576271186440678;
          result[4] += 0.05084745762711865;
          result[5] += 0.8858757062146893;
        } else {
          result[0] += 0.0718954248366013;
          result[1] += 0.006535947712418301;
          result[2] += 0.013071895424836602;
          result[3] += 0.3006535947712418;
          result[4] += 0.1895424836601307;
          result[5] += 0.41830065359477125;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0.09090909090909091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9090909090909091;
          result[5] += 0;
        } else {
          result[0] += 0.007334963325183374;
          result[1] += 0.960880195599022;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.03178484107579462;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.8367346938775511;
          result[1] += 0.037900874635568516;
          result[2] += 0.001943634596695821;
          result[3] += 0.03304178814382896;
          result[4] += 0.0641399416909621;
          result[5] += 0.026239067055393587;
        } else {
          result[0] += 0.2425249169435216;
          result[1] += 0;
          result[2] += 0.132890365448505;
          result[3] += 0.28903654485049834;
          result[4] += 0.0664451827242525;
          result[5] += 0.2691029900332226;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0.04807692307692308;
          result[1] += 0.09615384615384616;
          result[2] += 0.15384615384615385;
          result[3] += 0.15384615384615385;
          result[4] += 0.1346153846153846;
          result[5] += 0.41346153846153844;
        } else {
          result[0] += 0.007575757575757576;
          result[1] += 0;
          result[2] += 0.08333333333333333;
          result[3] += 0.6666666666666666;
          result[4] += 0.007575757575757576;
          result[5] += 0.23484848484848486;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ee0000))) ) ) {
          result[0] += 0.09615384615384616;
          result[1] += 0;
          result[2] += 0.7692307692307693;
          result[3] += 0.11538461538461539;
          result[4] += 0.019230769230769232;
          result[5] += 0;
        } else {
          result[0] += 0.8695652173913043;
          result[1] += 0;
          result[2] += 0.08695652173913043;
          result[3] += 0.043478260869565216;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3972602739726027;
          result[3] += 0.547945205479452;
          result[4] += 0;
          result[5] += 0.0547945205479452;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.96;
          result[3] += 0.04;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8794326241134752;
          result[3] += 0.11702127659574468;
          result[4] += 0;
          result[5] += 0.0035460992907801418;
        } else {
          result[0] += 0.0016891891891891895;
          result[1] += 0;
          result[2] += 0.9797297297297298;
          result[3] += 0.013513513513513516;
          result[4] += 0;
          result[5] += 0.005067567567567569;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0.006825938566552901;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9692832764505119;
          result[5] += 0.023890784982935155;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0.7964601769911505;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.017699115044247787;
          result[4] += 0.09734513274336283;
          result[5] += 0.08849557522123894;
        } else {
          result[0] += 0.009725906277630416;
          result[1] += 0.005305039787798408;
          result[2] += 0.005305039787798408;
          result[3] += 0.10875331564986737;
          result[4] += 0.08753315649867374;
          result[5] += 0.7833775419982316;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.7729591836734694;
          result[1] += 0.0663265306122449;
          result[2] += 0.003401360544217687;
          result[3] += 0.03741496598639456;
          result[4] += 0.07482993197278912;
          result[5] += 0.045068027210884355;
        } else {
          result[0] += 0.14809160305343513;
          result[1] += 0.03816793893129772;
          result[2] += 0.25954198473282447;
          result[3] += 0.34198473282442754;
          result[4] += 0.02137404580152672;
          result[5] += 0.1908396946564886;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 0;
          result[1] += 0.9951690821256038;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004830917874396135;
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
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42740000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.11290322580645161;
          result[1] += 0;
          result[2] += 0.16129032258064516;
          result[3] += 0.0967741935483871;
          result[4] += 0.016129032258064516;
          result[5] += 0.6129032258064516;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1;
          result[3] += 0.6666666666666666;
          result[4] += 0;
          result[5] += 0.23333333333333334;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6575342465753424;
          result[3] += 0.2876712328767123;
          result[4] += 0.0136986301369863;
          result[5] += 0.0410958904109589;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0.012048192771084338;
          result[1] += 0;
          result[2] += 0.5903614457831325;
          result[3] += 0.3253012048192771;
          result[4] += 0;
          result[5] += 0.07228915662650602;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9047619047619048;
          result[3] += 0.08225108225108226;
          result[4] += 0;
          result[5] += 0.012987012987012988;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9513513513513514;
          result[3] += 0.043243243243243246;
          result[4] += 0;
          result[5] += 0.005405405405405406;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9945652173913043;
          result[3] += 0.005434782608695652;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0.011695906432748537;
          result[1] += 0.043859649122807015;
          result[2] += 0;
          result[3] += 0.02046783625730994;
          result[4] += 0.8567251461988304;
          result[5] += 0.06725146198830409;
        } else {
          result[0] += 0.6855670103092785;
          result[1] += 0.010309278350515465;
          result[2] += 0.005154639175257733;
          result[3] += 0.010309278350515465;
          result[4] += 0.20103092783505158;
          result[5] += 0.08762886597938145;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0.0010706638115631692;
          result[1] += 0;
          result[2] += 0.0010706638115631692;
          result[3] += 0.058886509635974305;
          result[4] += 0.06745182012847965;
          result[5] += 0.8715203426124197;
        } else {
          result[0] += 0.018666666666666668;
          result[1] += 0.021333333333333333;
          result[2] += 0.008;
          result[3] += 0.42133333333333334;
          result[4] += 0.11466666666666667;
          result[5] += 0.416;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42870000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x425c0000))) ) ) {
          result[0] += 0;
          result[1] += 0.9973890339425587;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0026109660574412533;
          result[5] += 0;
        } else {
          result[0] += 0.019801980198019802;
          result[1] += 0.5148514851485149;
          result[2] += 0;
          result[3] += 0.09900990099009901;
          result[4] += 0.3564356435643564;
          result[5] += 0.009900990099009901;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.9085427135678392;
          result[1] += 0.031155778894472363;
          result[2] += 0;
          result[3] += 0.008040201005025126;
          result[4] += 0.04321608040201005;
          result[5] += 0.009045226130653266;
        } else {
          result[0] += 0.17050691244239632;
          result[1] += 0;
          result[2] += 0.2834101382488479;
          result[3] += 0.31797235023041476;
          result[4] += 0.02534562211981567;
          result[5] += 0.20276497695852536;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.025974025974025976;
          result[2] += 0.19480519480519481;
          result[3] += 0.2597402597402597;
          result[4] += 0;
          result[5] += 0.5194805194805194;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5180722891566265;
          result[3] += 0.40963855421686746;
          result[4] += 0;
          result[5] += 0.07228915662650602;
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
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0.043478260869565216;
          result[1] += 0.024844720496894408;
          result[2] += 0.6521739130434783;
          result[3] += 0.22981366459627328;
          result[4] += 0.006211180124223602;
          result[5] += 0.043478260869565216;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9752066115702479;
          result[3] += 0.01652892561983471;
          result[4] += 0;
          result[5] += 0.008264462809917356;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7391304347826086;
          result[3] += 0.2608695652173913;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0034602076124567475;
          result[1] += 0;
          result[2] += 0.9688581314878892;
          result[3] += 0.02768166089965398;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0.014084507042253521;
          result[1] += 0.018779342723004695;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9577464788732394;
          result[5] += 0.009389671361502348;
        } else {
          result[0] += 0.1958041958041958;
          result[1] += 0.09090909090909091;
          result[2] += 0.006993006993006993;
          result[3] += 0.055944055944055944;
          result[4] += 0.4125874125874126;
          result[5] += 0.23776223776223776;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0012547051442910915;
          result[3] += 0.027603513174404015;
          result[4] += 0.04015056461731493;
          result[5] += 0.93099121706399;
        } else {
          result[0] += 0.026954177897574125;
          result[1] += 0;
          result[2] += 0.07277628032345014;
          result[3] += 0.4420485175202156;
          result[4] += 0.07547169811320754;
          result[5] += 0.38274932614555257;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0.15789473684210525;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8421052631578947;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9733009708737864;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.02669902912621359;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.7878566203365033;
          result[1] += 0.02852962692026335;
          result[2] += 0.008778346744696415;
          result[3] += 0.020482809070958303;
          result[4] += 0.10241404535479151;
          result[5] += 0.05193855157278712;
        } else {
          result[0] += 0.11246943765281174;
          result[1] += 0.0024449877750611247;
          result[2] += 0.24205378973105135;
          result[3] += 0.34963325183374083;
          result[4] += 0.07579462102689487;
          result[5] += 0.2176039119804401;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42520000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.02702702702702703;
          result[1] += 0;
          result[2] += 0.05405405405405406;
          result[3] += 0;
          result[4] += 0.08108108108108109;
          result[5] += 0.8378378378378378;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0.023529411764705882;
          result[2] += 0.27058823529411763;
          result[3] += 0.49411764705882355;
          result[4] += 0.07058823529411765;
          result[5] += 0.1411764705882353;
        } else {
          result[0] += 0.12745098039215685;
          result[1] += 0;
          result[2] += 0.6666666666666666;
          result[3] += 0.09803921568627451;
          result[4] += 0;
          result[5] += 0.10784313725490197;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0.1;
          result[4] += 0;
          result[5] += 0.65;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8353909465020576;
          result[3] += 0.14814814814814814;
          result[4] += 0;
          result[5] += 0.01646090534979424;
        } else {
          result[0] += 0.007054673721340388;
          result[1] += 0;
          result[2] += 0.9682539682539683;
          result[3] += 0.024691358024691357;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 0.030434782608695653;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9478260869565217;
          result[5] += 0.021739130434782608;
        } else {
          result[0] += 0.5272727272727272;
          result[1] += 0.03636363636363636;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3090909090909091;
          result[5] += 0.12727272727272726;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0.012539184952978056;
          result[2] += 0;
          result[3] += 0.04806687565308255;
          result[4] += 0.06374085684430512;
          result[5] += 0.8756530825496343;
        } else {
          result[0] += 0.027559055118110236;
          result[1] += 0;
          result[2] += 0.01968503937007874;
          result[3] += 0.5393700787401575;
          result[4] += 0.04330708661417323;
          result[5] += 0.3700787401574803;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0.13157894736842105;
          result[2] += 0;
          result[3] += 0.05263157894736842;
          result[4] += 0.8157894736842105;
          result[5] += 0;
        } else {
          result[0] += 0.0023584905660377358;
          result[1] += 0.964622641509434;
          result[2] += 0.007075471698113208;
          result[3] += 0.0023584905660377358;
          result[4] += 0.02358490566037736;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.7679516250944823;
          result[1] += 0.05668934240362813;
          result[2] += 0;
          result[3] += 0.015873015873015876;
          result[4] += 0.11640211640211641;
          result[5] += 0.04308390022675738;
        } else {
          result[0] += 0.19742489270386265;
          result[1] += 0.006437768240343348;
          result[2] += 0.22532188841201717;
          result[3] += 0.27253218884120173;
          result[4] += 0.023605150214592276;
          result[5] += 0.27467811158798283;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0;
          result[1] += 0.16666666666666666;
          result[2] += 0.5;
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.05357142857142857;
          result[1] += 0.017857142857142856;
          result[2] += 0.05357142857142857;
          result[3] += 0.21428571428571427;
          result[4] += 0.03571428571428571;
          result[5] += 0.625;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2830188679245283;
          result[3] += 0.660377358490566;
          result[4] += 0;
          result[5] += 0.05660377358490566;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.85;
          result[3] += 0.1;
          result[4] += 0;
          result[5] += 0.05;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6323529411764707;
          result[3] += 0.2720588235294118;
          result[4] += 0;
          result[5] += 0.09558823529411765;
        } else {
          result[0] += 0.014492753623188408;
          result[1] += 0;
          result[2] += 0.9420289855072465;
          result[3] += 0.04347826086956522;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0.4166666666666667;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.08333333333333333;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.011283497884344146;
          result[1] += 0;
          result[2] += 0.9407616361071932;
          result[3] += 0.04372355430183357;
          result[4] += 0;
          result[5] += 0.004231311706629055;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0.013559322033898305;
          result[1] += 0.010169491525423728;
          result[2] += 0.006779661016949152;
          result[3] += 0.003389830508474576;
          result[4] += 0.8915254237288136;
          result[5] += 0.07457627118644068;
        } else {
          result[0] += 0;
          result[1] += 0.95;
          result[2] += 0.05;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.027737226277372264;
          result[4] += 0.024817518248175182;
          result[5] += 0.9474452554744526;
        } else {
          result[0] += 0.09477756286266925;
          result[1] += 0.005802707930367505;
          result[2] += 0.007736943907156673;
          result[3] += 0.3056092843326886;
          result[4] += 0.10638297872340426;
          result[5] += 0.4796905222437137;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 0.4666666666666667;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5333333333333333;
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
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.084;
          result[1] += 0.048;
          result[2] += 0.044;
          result[3] += 0.172;
          result[4] += 0.176;
          result[5] += 0.476;
        } else {
          result[0] += 0.7840000000000001;
          result[1] += 0.03272727272727274;
          result[2] += 0.03054545454545455;
          result[3] += 0.04145454545454546;
          result[4] += 0.08436363636363638;
          result[5] += 0.026909090909090914;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.10714285714285714;
          result[4] += 0;
          result[5] += 0.8928571428571429;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0.05714285714285714;
          result[4] += 0.2571428571428571;
          result[5] += 0.4857142857142857;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8958333333333334;
          result[4] += 0;
          result[5] += 0.10416666666666667;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0.42424242424242425;
          result[4] += 0;
          result[5] += 0.24242424242424243;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e40000))) ) ) {
          result[0] += 0.07792207792207792;
          result[1] += 0.012987012987012988;
          result[2] += 0.35064935064935066;
          result[3] += 0.1038961038961039;
          result[4] += 0.19480519480519481;
          result[5] += 0.2597402597402597;
        } else {
          result[0] += 0.9166666666666666;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.08333333333333333;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0.002421307506053269;
          result[1] += 0.002421307506053269;
          result[2] += 0.7820823244552058;
          result[3] += 0.19128329297820823;
          result[4] += 0;
          result[5] += 0.021791767554479417;
        } else {
          result[0] += 0.0033333333333333335;
          result[1] += 0;
          result[2] += 0.9683333333333334;
          result[3] += 0.028333333333333332;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0.012396694214876033;
          result[2] += 0.04132231404958678;
          result[3] += 0;
          result[4] += 0.9214876033057852;
          result[5] += 0.024793388429752067;
        } else {
          result[0] += 0;
          result[1] += 0.8571428571428572;
          result[2] += 0;
          result[3] += 0.04761904761904762;
          result[4] += 0.09523809523809525;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0.012304250559284116;
          result[1] += 0.016778523489932886;
          result[2] += 0;
          result[3] += 0.053691275167785234;
          result[4] += 0.0436241610738255;
          result[5] += 0.8736017897091722;
        } else {
          result[0] += 0.07796610169491526;
          result[1] += 0.020338983050847456;
          result[2] += 0.023728813559322035;
          result[3] += 0.38305084745762713;
          result[4] += 0.07796610169491526;
          result[5] += 0.41694915254237286;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0.3998025666337611;
          result[1] += 0.06811451135241856;
          result[2] += 0.0384995064165844;
          result[3] += 0.13228035538005922;
          result[4] += 0.18657453109575517;
          result[5] += 0.17472852912142153;
        } else {
          result[0] += 0.9025367156208278;
          result[1] += 0.012016021361815754;
          result[2] += 0.0267022696929239;
          result[3] += 0.0053404539385847796;
          result[4] += 0.0534045393858478;
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
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1;
          result[3] += 0.2;
          result[4] += 0;
          result[5] += 0.7;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16363636363636364;
          result[3] += 0.6818181818181818;
          result[4] += 0;
          result[5] += 0.15454545454545454;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1;
          result[3] += 0.6;
          result[4] += 0;
          result[5] += 0.3;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8461538461538461;
          result[3] += 0.02564102564102564;
          result[4] += 0.02564102564102564;
          result[5] += 0.10256410256410256;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.35;
          result[3] += 0.6;
          result[4] += 0;
          result[5] += 0.05;
        } else {
          result[0] += 0.011029411764705883;
          result[1] += 0;
          result[2] += 0.7904411764705882;
          result[3] += 0.1801470588235294;
          result[4] += 0;
          result[5] += 0.01838235294117647;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0.5;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.009247027741083224;
          result[1] += 0;
          result[2] += 0.9471598414795245;
          result[3] += 0.04095112285336856;
          result[4] += 0;
          result[5] += 0.002642007926023778;
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
