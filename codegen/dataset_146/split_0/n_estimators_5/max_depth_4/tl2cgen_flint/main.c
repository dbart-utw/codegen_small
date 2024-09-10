
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
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0.004149377593360996;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.991701244813278;
          result[5] += 0.004149377593360996;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.125;
          result[3] += 0;
          result[4] += 0.5;
          result[5] += 0.375;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.004497751124437781;
          result[3] += 0.017991004497751123;
          result[4] += 0.035982008995502246;
          result[5] += 0.9415292353823088;
        } else {
          result[0] += 0.09532062391681109;
          result[1] += 0.01386481802426343;
          result[2] += 0.0034662045060658577;
          result[3] += 0.30849220103986136;
          result[4] += 0.0779896013864818;
          result[5] += 0.5008665511265165;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0.06358381502890173;
          result[1] += 0.2138728323699422;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7225433526011561;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.993103448275862;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.006896551724137931;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0.44846796657381616;
          result[1] += 0.03064066852367688;
          result[2] += 0.013927576601671309;
          result[3] += 0.22841225626740946;
          result[4] += 0.07242339832869081;
          result[5] += 0.20612813370473537;
        } else {
          result[0] += 0.8621340887629839;
          result[1] += 0.015108593012275733;
          result[2] += 0.024551463644948063;
          result[3] += 0.015108593012275733;
          result[4] += 0.06987724268177525;
          result[5] += 0.013220018885741265;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0797872340425532;
          result[3] += 0.5478723404255319;
          result[4] += 0;
          result[5] += 0.3723404255319149;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6896551724137931;
          result[3] += 0.13793103448275862;
          result[4] += 0.10344827586206896;
          result[5] += 0.06896551724137931;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.88;
          result[3] += 0.04;
          result[4] += 0;
          result[5] += 0.08;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.46153846153846156;
          result[3] += 0.5384615384615384;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0.015384615384615389;
          result[1] += 0;
          result[2] += 0.6307692307692309;
          result[3] += 0.2692307692307693;
          result[4] += 0.015384615384615389;
          result[5] += 0.06923076923076925;
        } else {
          result[0] += 0.015765765765765764;
          result[1] += 0;
          result[2] += 0.9144144144144144;
          result[3] += 0.06306306306306306;
          result[4] += 0;
          result[5] += 0.006756756756756757;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42aa0000))) ) ) {
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
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0035335689045936395;
          result[2] += 0;
          result[3] += 0.0035335689045936395;
          result[4] += 0.9081272084805654;
          result[5] += 0.08480565371024736;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0.022435897435897436;
          result[1] += 0.004273504273504274;
          result[2] += 0.004273504273504274;
          result[3] += 0.03952991452991453;
          result[4] += 0.07692307692307693;
          result[5] += 0.8525641025641025;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.04375;
          result[3] += 0.61875;
          result[4] += 0;
          result[5] += 0.3375;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 0.2857142857142857;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7142857142857143;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9901960784313726;
          result[2] += 0;
          result[3] += 0.007352941176470588;
          result[4] += 0.0024509803921568627;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0.42573402417962003;
          result[1] += 0.06303972366148532;
          result[2] += 0.011226252158894647;
          result[3] += 0.14680483592400692;
          result[4] += 0.18134715025906736;
          result[5] += 0.17184801381692574;
        } else {
          result[0] += 0.9132867132867133;
          result[1] += 0;
          result[2] += 0.04755244755244755;
          result[3] += 0.02097902097902098;
          result[4] += 0.015384615384615385;
          result[5] += 0.002797202797202797;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.034482758620689655;
          result[3] += 0.8275862068965517;
          result[4] += 0;
          result[5] += 0.13793103448275862;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.5;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3235294117647059;
          result[3] += 0.23529411764705882;
          result[4] += 0.08823529411764706;
          result[5] += 0.35294117647058826;
        } else {
          result[0] += 0.07692307692307693;
          result[1] += 0;
          result[2] += 0.9230769230769231;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.375;
          result[4] += 0;
          result[5] += 0.625;
        } else {
          result[0] += 0.010256410256410258;
          result[1] += 0;
          result[2] += 0.712820512820513;
          result[3] += 0.23589743589743592;
          result[4] += 0;
          result[5] += 0.04102564102564103;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0.16279069767441862;
          result[1] += 0;
          result[2] += 0.6744186046511628;
          result[3] += 0.023255813953488372;
          result[4] += 0;
          result[5] += 0.13953488372093023;
        } else {
          result[0] += 0.005141388174807198;
          result[1] += 0;
          result[2] += 0.9370179948586118;
          result[3] += 0.05784061696658098;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0.002695417789757413;
          result[1] += 0.03773584905660378;
          result[2] += 0;
          result[3] += 0.02695417789757413;
          result[4] += 0.8894878706199462;
          result[5] += 0.04312668463611861;
        } else {
          result[0] += 0;
          result[1] += 0.6774193548387096;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.25806451612903225;
          result[5] += 0.06451612903225806;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0.8171641791044777;
          result[1] += 0.02985074626865672;
          result[2] += 0.02238805970149254;
          result[3] += 0;
          result[4] += 0.08955223880597016;
          result[5] += 0.04104477611940299;
        } else {
          result[0] += 0.029710144927536233;
          result[1] += 0.009420289855072464;
          result[2] += 0.008695652173913044;
          result[3] += 0.18478260869565216;
          result[4] += 0.07028985507246377;
          result[5] += 0.6971014492753623;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42520000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42940000))) ) ) {
          result[0] += 0.002320185614849188;
          result[1] += 0.9976798143851509;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.7307692307692307;
          result[1] += 0.2692307692307692;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42980000))) ) ) {
          result[0] += 0.05747126436781609;
          result[1] += 0.3563218390804598;
          result[2] += 0;
          result[3] += 0.022988505747126436;
          result[4] += 0.5172413793103449;
          result[5] += 0.04597701149425287;
        } else {
          result[0] += 0.8333333333333334;
          result[1] += 0.021442495126705652;
          result[2] += 0.04775828460038986;
          result[3] += 0.031189083820662766;
          result[4] += 0.0341130604288499;
          result[5] += 0.03216374269005848;
        }
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.78125;
          result[4] += 0;
          result[5] += 0.21875;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.38461538461538464;
          result[3] += 0.5076923076923077;
          result[4] += 0.03076923076923077;
          result[5] += 0.07692307692307693;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0.020833333333333332;
          result[1] += 0;
          result[2] += 0.5416666666666666;
          result[3] += 0.10416666666666667;
          result[4] += 0;
          result[5] += 0.3333333333333333;
        } else {
          result[0] += 0.015748031496062995;
          result[1] += 0;
          result[2] += 0.7165354330708662;
          result[3] += 0.2519685039370079;
          result[4] += 0;
          result[5] += 0.015748031496062995;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b50000))) ) ) {
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
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14285714285714285;
          result[3] += 0.2857142857142857;
          result[4] += 0;
          result[5] += 0.5714285714285714;
        } else {
          result[0] += 0.015873015873015872;
          result[1] += 0;
          result[2] += 0.9229024943310657;
          result[3] += 0.05215419501133787;
          result[4] += 0.0022675736961451248;
          result[5] += 0.006802721088435374;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9556451612903226;
          result[5] += 0.04435483870967742;
        } else {
          result[0] += 0.4117647058823529;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.28431372549019607;
          result[5] += 0.30392156862745096;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0.010404624277456647;
          result[2] += 0.006936416184971098;
          result[3] += 0.07861271676300578;
          result[4] += 0.03930635838150289;
          result[5] += 0.8647398843930636;
        } else {
          result[0] += 0.003472222222222222;
          result[1] += 0.059027777777777776;
          result[2] += 0.027777777777777776;
          result[3] += 0.4930555555555556;
          result[4] += 0.034722222222222224;
          result[5] += 0.3819444444444444;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 0.5652173913043478;
          result[2] += 0;
          result[3] += 0.08695652173913043;
          result[4] += 0.30434782608695654;
          result[5] += 0.043478260869565216;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0.14018691588785046;
          result[1] += 0.19158878504672897;
          result[2] += 0.018691588785046728;
          result[3] += 0.02336448598130841;
          result[4] += 0.5934579439252337;
          result[5] += 0.03271028037383177;
        } else {
          result[0] += 0.7410714285714286;
          result[1] += 0.004807692307692308;
          result[2] += 0.04395604395604396;
          result[3] += 0.09203296703296704;
          result[4] += 0.05357142857142857;
          result[5] += 0.06456043956043957;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2692307692307692;
          result[3] += 0.038461538461538464;
          result[4] += 0.46153846153846156;
          result[5] += 0.23076923076923078;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0.010101010101010102;
          result[1] += 0.09090909090909091;
          result[2] += 0.10101010101010101;
          result[3] += 0.6060606060606061;
          result[4] += 0;
          result[5] += 0.1919191919191919;
        } else {
          result[0] += 0.03260869565217391;
          result[1] += 0.010869565217391304;
          result[2] += 0.5869565217391305;
          result[3] += 0.2391304347826087;
          result[4] += 0.043478260869565216;
          result[5] += 0.08695652173913043;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42930000))) ) ) {
          result[0] += 0.5714285714285714;
          result[1] += 0;
          result[2] += 0.2857142857142857;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.14285714285714285;
        } else {
          result[0] += 0.00982800982800983;
          result[1] += 0;
          result[2] += 0.8132678132678134;
          result[3] += 0.15970515970515972;
          result[4] += 0;
          result[5] += 0.017199017199017202;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0.007067137809187279;
          result[1] += 0;
          result[2] += 0.9558303886925795;
          result[3] += 0.0353356890459364;
          result[4] += 0;
          result[5] += 0.0017667844522968198;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0.017064846416382257;
          result[1] += 0.003412969283276451;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9590443686006827;
          result[5] += 0.020477815699658706;
        } else {
          result[0] += 0;
          result[1] += 0.028985507246376815;
          result[2] += 0.014492753623188408;
          result[3] += 0.04347826086956522;
          result[4] += 0.6376811594202899;
          result[5] += 0.27536231884057977;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42620000))) ) ) {
          result[0] += 0.7543859649122807;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.008771929824561403;
          result[4] += 0.19298245614035087;
          result[5] += 0.043859649122807015;
        } else {
          result[0] += 0.004516711833785004;
          result[1] += 0.0018066847335140017;
          result[2] += 0.005420054200542005;
          result[3] += 0.10478771454381211;
          result[4] += 0.06955736224028906;
          result[5] += 0.8139114724480578;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0.4;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9933920704845814;
          result[2] += 0;
          result[3] += 0.0022026431718061676;
          result[4] += 0.004405286343612335;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.8268003646308113;
          result[1] += 0.028258887876025523;
          result[2] += 0.0036463081130355514;
          result[3] += 0.032816773017319965;
          result[4] += 0.08659981768459435;
          result[5] += 0.02187784867821331;
        } else {
          result[0] += 0.20278330019880716;
          result[1] += 0.02982107355864811;
          result[2] += 0.1550695825049702;
          result[3] += 0.33399602385685884;
          result[4] += 0.041749502982107355;
          result[5] += 0.23658051689860835;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.1;
          result[4] += 0.225;
          result[5] += 0.675;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0.08108108108108109;
          result[2] += 0.05405405405405406;
          result[3] += 0.5945945945945946;
          result[4] += 0.02702702702702703;
          result[5] += 0.24324324324324326;
        } else {
          result[0] += 0.008547008547008548;
          result[1] += 0.008547008547008548;
          result[2] += 0.48717948717948717;
          result[3] += 0.41025641025641024;
          result[4] += 0;
          result[5] += 0.08547008547008547;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42860000))) ) ) {
          result[0] += 0.05263157894736842;
          result[1] += 0;
          result[2] += 0.21052631578947367;
          result[3] += 0;
          result[4] += 0.6842105263157895;
          result[5] += 0.05263157894736842;
        } else {
          result[0] += 0.09803921568627451;
          result[1] += 0.0392156862745098;
          result[2] += 0.5098039215686274;
          result[3] += 0;
          result[4] += 0.0196078431372549;
          result[5] += 0.3333333333333333;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0.036199095022624445;
          result[1] += 0;
          result[2] += 0.7601809954751132;
          result[3] += 0.1719457013574661;
          result[4] += 0;
          result[5] += 0.031674208144796386;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9613095238095238;
          result[3] += 0.03869047619047619;
          result[4] += 0;
          result[5] += 0;
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
