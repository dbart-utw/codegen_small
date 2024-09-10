
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
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42be0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 0.01079136690647482;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9748201438848921;
          result[5] += 0.014388489208633094;
        } else {
          result[0] += 0.1276595744680851;
          result[1] += 0.10638297872340426;
          result[2] += 0;
          result[3] += 0.10638297872340426;
          result[4] += 0.3404255319148936;
          result[5] += 0.3191489361702128;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0.7193675889328064;
          result[1] += 0.027667984189723323;
          result[2] += 0;
          result[3] += 0.019762845849802375;
          result[4] += 0.2173913043478261;
          result[5] += 0.0158102766798419;
        } else {
          result[0] += 0.01772525849335303;
          result[1] += 0.008862629246676515;
          result[2] += 0.004431314623338257;
          result[3] += 0.15805022156573117;
          result[4] += 0.07163958641063516;
          result[5] += 0.7392909896602659;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.8108365019011406;
          result[1] += 0.04847908745247148;
          result[2] += 0.029467680608365018;
          result[3] += 0.026615969581749048;
          result[4] += 0.0655893536121673;
          result[5] += 0.019011406844106463;
        } else {
          result[0] += 0.16842105263157897;
          result[1] += 0.005263157894736843;
          result[2] += 0.31315789473684214;
          result[3] += 0.27894736842105267;
          result[4] += 0.09210526315789475;
          result[5] += 0.14210526315789476;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42d30000))) ) ) {
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
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0.02830188679245283;
          result[1] += 0;
          result[2] += 0.20754716981132076;
          result[3] += 0.42452830188679247;
          result[4] += 0.009433962264150943;
          result[5] += 0.330188679245283;
        } else {
          result[0] += 0;
          result[1] += 0.08571428571428572;
          result[2] += 0.7142857142857143;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.2;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42d50000))) ) ) {
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.1111111111111111;
          result[5] += 0.8888888888888888;
        } else {
          result[0] += 0.09523809523809523;
          result[1] += 0;
          result[2] += 0.7142857142857143;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.19047619047619047;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8368794326241135;
          result[3] += 0.14893617021276595;
          result[4] += 0;
          result[5] += 0.014184397163120567;
        } else {
          result[0] += 0.006015037593984964;
          result[1] += 0;
          result[2] += 0.9473684210526316;
          result[3] += 0.046616541353383466;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0.05;
          result[1] += 0.005555555555555556;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9388888888888889;
          result[5] += 0.005555555555555556;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05172413793103448;
          result[3] += 0.017241379310344827;
          result[4] += 0.41379310344827586;
          result[5] += 0.5172413793103449;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0.043478260869565216;
          result[1] += 0.057971014492753624;
          result[2] += 0;
          result[3] += 0.10144927536231885;
          result[4] += 0.7101449275362319;
          result[5] += 0.08695652173913043;
        } else {
          result[0] += 0.7395833333333334;
          result[1] += 0.03125;
          result[2] += 0.020833333333333332;
          result[3] += 0.057291666666666664;
          result[4] += 0.10416666666666667;
          result[5] += 0.046875;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0014064697609001407;
          result[3] += 0.02109704641350211;
          result[4] += 0.026722925457102673;
          result[5] += 0.9507735583684951;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0.013559322033898305;
          result[1] += 0.023728813559322035;
          result[2] += 0;
          result[3] += 0.15254237288135594;
          result[4] += 0.18305084745762712;
          result[5] += 0.6271186440677966;
        } else {
          result[0] += 0.006666666666666667;
          result[1] += 0;
          result[2] += 0.07111111111111111;
          result[3] += 0.5666666666666667;
          result[4] += 0.0044444444444444444;
          result[5] += 0.3511111111111111;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42cf0000))) ) ) {
          result[0] += 0.7640449438202247;
          result[1] += 0.023274478330658106;
          result[2] += 0.030497592295345103;
          result[3] += 0.030497592295345103;
          result[4] += 0.12439807383627609;
          result[5] += 0.027287319422150885;
        } else {
          result[0] += 0.03571428571428571;
          result[1] += 0.9285714285714286;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.03571428571428571;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42cd0000))) ) ) {
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
          result[3] += 0.8333333333333334;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0.029239766081871343;
          result[1] += 0.017543859649122806;
          result[2] += 0.42105263157894735;
          result[3] += 0.3333333333333333;
          result[4] += 0.04093567251461988;
          result[5] += 0.15789473684210525;
        } else {
          result[0] += 0.10320284697508897;
          result[1] += 0.010676156583629894;
          result[2] += 0.7722419928825622;
          result[3] += 0.08896797153024912;
          result[4] += 0.017793594306049824;
          result[5] += 0.0071174377224199285;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0;
          result[1] += 0.38461538461538464;
          result[2] += 0.15384615384615385;
          result[3] += 0;
          result[4] += 0.38461538461538464;
          result[5] += 0.07692307692307693;
        } else {
          result[0] += 0.001485884101040119;
          result[1] += 0;
          result[2] += 0.9509658246656761;
          result[3] += 0.04160475482912333;
          result[4] += 0;
          result[5] += 0.005943536404160476;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0.01015228426395939;
          result[1] += 0.015228426395939087;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9289340101522843;
          result[5] += 0.04568527918781726;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0.9117647058823529;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.08823529411764706;
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
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0.035246727089627394;
          result[1] += 0.005035246727089627;
          result[2] += 0;
          result[3] += 0.06646525679758308;
          result[4] += 0.054380664652567974;
          result[5] += 0.8388721047331319;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.01485148514851485;
          result[3] += 0.6287128712871287;
          result[4] += 0.009900990099009901;
          result[5] += 0.3465346534653465;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0.3628472222222222;
          result[1] += 0.020833333333333332;
          result[2] += 0.0798611111111111;
          result[3] += 0.2534722222222222;
          result[4] += 0.09375;
          result[5] += 0.1892361111111111;
        } else {
          result[0] += 0.8019891500904159;
          result[1] += 0.0162748643761302;
          result[2] += 0.08047016274864376;
          result[3] += 0.020795660036166366;
          result[4] += 0.06962025316455696;
          result[5] += 0.0108499095840868;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.13333333333333333;
          result[3] += 0.06666666666666667;
          result[4] += 0.06666666666666667;
          result[5] += 0.7333333333333333;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0.014925373134328358;
          result[2] += 0.2537313432835821;
          result[3] += 0.5074626865671642;
          result[4] += 0;
          result[5] += 0.22388059701492538;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8484848484848485;
          result[3] += 0.15151515151515152;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0.008241758241758244;
          result[1] += 0;
          result[2] += 0.8241758241758242;
          result[3] += 0.15659340659340662;
          result[4] += 0;
          result[5] += 0.010989010989010992;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.3;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9776536312849162;
          result[3] += 0.0223463687150838;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.003952569169960474;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9762845849802372;
          result[5] += 0.019762845849802372;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0.04060434372049103;
          result[1] += 0.0056657223796034;
          result[2] += 0.0018885741265344666;
          result[3] += 0.05099150141643059;
          result[4] += 0.05571293673276676;
          result[5] += 0.8451369216241738;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.013333333333333336;
          result[3] += 0.6177777777777779;
          result[4] += 0.00888888888888889;
          result[5] += 0.36000000000000004;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.7501810282404053;
          result[1] += 0.0731354091238233;
          result[2] += 0;
          result[3] += 0.013758146270818243;
          result[4] += 0.15278783490224473;
          result[5] += 0.01013758146270818;
        } else {
          result[0] += 0.1829787234042553;
          result[1] += 0.00851063829787234;
          result[2] += 0.2553191489361702;
          result[3] += 0.28085106382978725;
          result[4] += 0.04042553191489362;
          result[5] += 0.23191489361702128;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c60000))) ) ) {
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
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5;
          result[4] += 0.15;
          result[5] += 0.35;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.037037037037037035;
          result[4] += 0.037037037037037035;
          result[5] += 0.9259259259259259;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0.05128205128205128;
          result[1] += 0.05128205128205128;
          result[2] += 0.23076923076923078;
          result[3] += 0.358974358974359;
          result[4] += 0.07692307692307693;
          result[5] += 0.23076923076923078;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6623376623376623;
          result[3] += 0.2987012987012987;
          result[4] += 0.012987012987012988;
          result[5] += 0.025974025974025976;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.625;
          result[5] += 0.375;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6793893129770993;
          result[3] += 0.2824427480916031;
          result[4] += 0;
          result[5] += 0.03816793893129771;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0.00888888888888889;
          result[1] += 0;
          result[2] += 0.8266666666666668;
          result[3] += 0.15555555555555559;
          result[4] += 0;
          result[5] += 0.00888888888888889;
        } else {
          result[0] += 0.00398406374501992;
          result[1] += 0;
          result[2] += 0.9721115537848606;
          result[3] += 0.02390438247011952;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0.02313624678663239;
          result[1] += 0.06426735218508997;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8586118251928021;
          result[5] += 0.05398457583547558;
        } else {
          result[0] += 0.8193018480492814;
          result[1] += 0.018480492813141687;
          result[2] += 0;
          result[3] += 0.004106776180698153;
          result[4] += 0.11909650924024642;
          result[5] += 0.03901437371663245;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0.002333722287047841;
          result[1] += 0.0011668611435239206;
          result[2] += 0;
          result[3] += 0.047841306884480746;
          result[4] += 0.07701283547257877;
          result[5] += 0.8716452742123687;
        } else {
          result[0] += 0.12294288480154889;
          result[1] += 0.02904162633107454;
          result[2] += 0.07938044530493708;
          result[3] += 0.33688286544046464;
          result[4] += 0.1393998063891578;
          result[5] += 0.29235237173281703;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42600000))) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42e40000))) ) ) {
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
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0.18181818181818182;
          result[1] += 0;
          result[2] += 0.18181818181818182;
          result[3] += 0.45454545454545453;
          result[4] += 0;
          result[5] += 0.18181818181818182;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0.9812286689419796;
          result[1] += 0;
          result[2] += 0.010238907849829351;
          result[3] += 0;
          result[4] += 0.008532423208191127;
          result[5] += 0;
        } else {
          result[0] += 0.5;
          result[1] += 0;
          result[2] += 0.4375;
          result[3] += 0;
          result[4] += 0.0625;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42960000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2727272727272727;
          result[4] += 0;
          result[5] += 0.7272727272727273;
        } else {
          result[0] += 0.2631578947368421;
          result[1] += 0;
          result[2] += 0.5263157894736842;
          result[3] += 0.10526315789473684;
          result[4] += 0;
          result[5] += 0.10526315789473684;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0.025089605734767026;
          result[1] += 0;
          result[2] += 0.7813620071684588;
          result[3] += 0.16487455197132617;
          result[4] += 0;
          result[5] += 0.02867383512544803;
        } else {
          result[0] += 0.018922852983988356;
          result[1] += 0;
          result[2] += 0.9563318777292577;
          result[3] += 0.023289665211062592;
          result[4] += 0;
          result[5] += 0.001455604075691412;
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b80000))) ) ) {
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
          result[4] += 0;
          result[5] += 0.2;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42900000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.22727272727272727;
          result[4] += 0.18181818181818182;
          result[5] += 0.5909090909090909;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06666666666666667;
          result[3] += 0;
          result[4] += 0.9333333333333333;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0.1;
          result[1] += 0.1125;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5375;
          result[5] += 0.25;
        } else {
          result[0] += 0.040183696900114814;
          result[1] += 0.009184845005740528;
          result[2] += 0.001148105625717566;
          result[3] += 0.021814006888633754;
          result[4] += 0.045924225028702644;
          result[5] += 0.8817451205510907;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5572519083969466;
          result[4] += 0.011450381679389313;
          result[5] += 0.4312977099236641;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5813953488372093;
          result[3] += 0.20930232558139536;
          result[4] += 0;
          result[5] += 0.20930232558139536;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0.012269938650306749;
          result[1] += 0.27607361963190186;
          result[2] += 0.049079754601226995;
          result[3] += 0.03067484662576687;
          result[4] += 0.6257668711656442;
          result[5] += 0.006134969325153374;
        } else {
          result[0] += 0;
          result[1] += 0.9928909952606635;
          result[2] += 0;
          result[3] += 0.002369668246445498;
          result[4] += 0.004739336492890996;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.8444070647603028;
          result[1] += 0.04205214465937763;
          result[2] += 0.002523128679562658;
          result[3] += 0.015138772077375946;
          result[4] += 0.0815811606391926;
          result[5] += 0.014297729184188394;
        } else {
          result[0] += 0.19881305637982197;
          result[1] += 0.011869436201780416;
          result[2] += 0.10682492581602374;
          result[3] += 0.29080118694362017;
          result[4] += 0.05341246290801187;
          result[5] += 0.33827893175074186;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 0.01910828025477707;
          result[1] += 0.044585987261146494;
          result[2] += 0.2229299363057325;
          result[3] += 0.554140127388535;
          result[4] += 0.01910828025477707;
          result[5] += 0.14012738853503184;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.4696969696969697;
          result[1] += 0.045454545454545456;
          result[2] += 0.36363636363636365;
          result[3] += 0.06060606060606061;
          result[4] += 0.015151515151515152;
          result[5] += 0.045454545454545456;
        } else {
          result[0] += 0.006006006006006007;
          result[1] += 0;
          result[2] += 0.915915915915916;
          result[3] += 0.06506506506506508;
          result[4] += 0.0010010010010010012;
          result[5] += 0.012012012012012014;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 0.008849557522123894;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9823008849557522;
          result[5] += 0.008849557522123894;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.45454545454545453;
          result[5] += 0.5454545454545454;
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
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0.0013831258644536654;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.024896265560165973;
          result[4] += 0.034578146611341634;
          result[5] += 0.9391424619640387;
        } else {
          result[0] += 0.0625;
          result[1] += 0;
          result[2] += 0.1875;
          result[3] += 0.1875;
          result[4] += 0.375;
          result[5] += 0.1875;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 0.23404255319148937;
          result[1] += 0.08156028368794327;
          result[2] += 0;
          result[3] += 0.0425531914893617;
          result[4] += 0.1276595744680851;
          result[5] += 0.5141843971631206;
        } else {
          result[0] += 0.005291005291005291;
          result[1] += 0.0026455026455026454;
          result[2] += 0.06084656084656084;
          result[3] += 0.5502645502645502;
          result[4] += 0.013227513227513227;
          result[5] += 0.36772486772486773;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 0.008264462809917356;
          result[1] += 0.3140495867768595;
          result[2] += 0;
          result[3] += 0.03305785123966942;
          result[4] += 0.5950413223140496;
          result[5] += 0.049586776859504134;
        } else {
          result[0] += 0;
          result[1] += 0.9975247524752475;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0024752475247524753;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.839300582847627;
          result[1] += 0.022481265611990008;
          result[2] += 0.011656952539550375;
          result[3] += 0.035803497085761866;
          result[4] += 0.07993338884263114;
          result[5] += 0.010824313072439634;
        } else {
          result[0] += 0.28484848484848485;
          result[1] += 0.03636363636363636;
          result[2] += 0.10303030303030303;
          result[3] += 0.2;
          result[4] += 0.21212121212121213;
          result[5] += 0.16363636363636364;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0.025;
          result[2] += 0.1;
          result[3] += 0.1;
          result[4] += 0.225;
          result[5] += 0.55;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.35526315789473684;
          result[3] += 0.506578947368421;
          result[4] += 0;
          result[5] += 0.13815789473684212;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0.06666666666666665;
          result[1] += 0.033333333333333326;
          result[2] += 0.2666666666666666;
          result[3] += 0.23333333333333328;
          result[4] += 0.23333333333333328;
          result[5] += 0.16666666666666663;
        } else {
          result[0] += 0.014563106796116505;
          result[1] += 0;
          result[2] += 0.9058252427184466;
          result[3] += 0.06407766990291262;
          result[4] += 0;
          result[5] += 0.015533980582524271;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0.007751937984496124;
          result[2] += 0;
          result[3] += 0.007751937984496124;
          result[4] += 0.9573643410852714;
          result[5] += 0.027131782945736434;
        } else {
          result[0] += 0;
          result[1] += 0.46153846153846156;
          result[2] += 0;
          result[3] += 0.19230769230769232;
          result[4] += 0.07692307692307693;
          result[5] += 0.2692307692307692;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0.02885682574916759;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03551609322974473;
          result[4] += 0.06104328523862375;
          result[5] += 0.8745837957824639;
        } else {
          result[0] += 0.0670391061452514;
          result[1] += 0.013966480446927373;
          result[2] += 0.025139664804469275;
          result[3] += 0.4972067039106145;
          result[4] += 0.0111731843575419;
          result[5] += 0.3854748603351955;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0.6904458598726115;
          result[1] += 0.04076433121019109;
          result[2] += 0.011464968152866243;
          result[3] += 0.042675159235668794;
          result[4] += 0.14394904458598728;
          result[5] += 0.07070063694267517;
        } else {
          result[0] += 0.14141414141414144;
          result[1] += 0.01346801346801347;
          result[2] += 0.3097643097643098;
          result[3] += 0.3535353535353536;
          result[4] += 0.010101010101010104;
          result[5] += 0.17171717171717174;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0;
          result[1] += 0.9900744416873449;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.009925558312655087;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.5882352941176471;
          result[2] += 0;
          result[3] += 0.4117647058823529;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 1;
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42d80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.15151515151515152;
          result[3] += 0.45454545454545453;
          result[4] += 0;
          result[5] += 0.3939393939393939;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0.2;
          result[1] += 0.13333333333333333;
          result[2] += 0;
          result[3] += 0.13333333333333333;
          result[4] += 0.3333333333333333;
          result[5] += 0.2;
        } else {
          result[0] += 0.08;
          result[1] += 0;
          result[2] += 0.8;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.12;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6790123456790124;
          result[3] += 0.25925925925925924;
          result[4] += 0;
          result[5] += 0.06172839506172839;
        } else {
          result[0] += 0.00258732212160414;
          result[1] += 0.00129366106080207;
          result[2] += 0.943078913324709;
          result[3] += 0.047865459249676584;
          result[4] += 0;
          result[5] += 0.00517464424320828;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.007604562737642586;
          result[4] += 0.9429657794676807;
          result[5] += 0.04942965779467681;
        } else {
          result[0] += 0;
          result[1] += 0.9166666666666666;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.08333333333333333;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0.019715224534501644;
          result[1] += 0.001095290251916758;
          result[2] += 0.004381161007667032;
          result[3] += 0.044906900328587074;
          result[4] += 0.06681270536692223;
          result[5] += 0.8630887185104053;
        } else {
          result[0] += 0.06775067750677506;
          result[1] += 0.051490514905149054;
          result[2] += 0.06775067750677506;
          result[3] += 0.41192411924119243;
          result[4] += 0.02168021680216802;
          result[5] += 0.3794037940379404;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b20000))) ) ) {
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
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0.3060897435897436;
          result[1] += 0.02403846153846154;
          result[2] += 0.057692307692307696;
          result[3] += 0.23397435897435898;
          result[4] += 0.14583333333333334;
          result[5] += 0.23237179487179488;
        } else {
          result[0] += 0.7379725085910653;
          result[1] += 0.04381443298969072;
          result[2] += 0.07560137457044673;
          result[3] += 0.020618556701030927;
          result[4] += 0.1134020618556701;
          result[5] += 0.00859106529209622;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428c0000))) ) ) {
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
          result[3] += 0.2857142857142857;
          result[4] += 0;
          result[5] += 0.7142857142857143;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0.9333333333333333;
          result[2] += 0;
          result[3] += 0.06666666666666667;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4672897196261682;
          result[3] += 0.35514018691588783;
          result[4] += 0.009345794392523364;
          result[5] += 0.16822429906542055;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1111111111111111;
          result[3] += 0.2777777777777778;
          result[4] += 0.3333333333333333;
          result[5] += 0.2777777777777778;
        } else {
          result[0] += 0.03773584905660378;
          result[1] += 0;
          result[2] += 0.6603773584905661;
          result[3] += 0.15094339622641512;
          result[4] += 0;
          result[5] += 0.15094339622641512;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.75;
          result[1] += 0;
          result[2] += 0.125;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.125;
        } else {
          result[0] += 0.0049813200498132005;
          result[1] += 0;
          result[2] += 0.9215442092154421;
          result[3] += 0.07347447073474471;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 0.004761904761904762;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9952380952380953;
          result[5] += 0;
        } else {
          result[0] += 0.08333333333333333;
          result[1] += 0.08333333333333333;
          result[2] += 0;
          result[3] += 0.041666666666666664;
          result[4] += 0.4375;
          result[5] += 0.3541666666666667;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0.0012674271229404308;
          result[1] += 0;
          result[2] += 0.0063371356147021544;
          result[3] += 0.035487959442332066;
          result[4] += 0.050697084917617236;
          result[5] += 0.9062103929024081;
        } else {
          result[0] += 0.060077519379844964;
          result[1] += 0.005813953488372093;
          result[2] += 0.007751937984496124;
          result[3] += 0.37209302325581395;
          result[4] += 0.10271317829457365;
          result[5] += 0.45155038759689925;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b80000))) ) ) {
          result[0] += 0;
          result[1] += 0.21052631578947367;
          result[2] += 0;
          result[3] += 0.03508771929824561;
          result[4] += 0.7543859649122807;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.967741935483871;
          result[2] += 0;
          result[3] += 0.002304147465437788;
          result[4] += 0.029953917050691243;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.8120649651972158;
          result[1] += 0.04021655065738593;
          result[2] += 0.0030935808197989174;
          result[3] += 0.02242846094354215;
          result[4] += 0.102861562258314;
          result[5] += 0.019334880123743233;
        } else {
          result[0] += 0.16628701594533032;
          result[1] += 0.027334851936218683;
          result[2] += 0.2801822323462415;
          result[3] += 0.2551252847380411;
          result[4] += 0.03644646924829158;
          result[5] += 0.234624145785877;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0;
          result[1] += 0.1;
          result[2] += 0.06666666666666667;
          result[3] += 0.03333333333333333;
          result[4] += 0.03333333333333333;
          result[5] += 0.7666666666666667;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25806451612903225;
          result[3] += 0.5591397849462365;
          result[4] += 0;
          result[5] += 0.1827956989247312;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8571428571428571;
          result[5] += 0.14285714285714285;
        } else {
          result[0] += 0.03571428571428571;
          result[1] += 0;
          result[2] += 0.9285714285714286;
          result[3] += 0.03571428571428571;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4342105263157895;
          result[3] += 0.5394736842105263;
          result[4] += 0;
          result[5] += 0.02631578947368421;
        } else {
          result[0] += 0.015748031496062992;
          result[1] += 0;
          result[2] += 0.8070866141732284;
          result[3] += 0.13385826771653545;
          result[4] += 0.003937007874015748;
          result[5] += 0.03937007874015748;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.6;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9652650822669104;
          result[3] += 0.03473491773308958;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 0.059113300492610835;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9261083743842364;
          result[5] += 0.014778325123152709;
        } else {
          result[0] += 0.5178571428571429;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.25;
          result[5] += 0.23214285714285715;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.036860879904875146;
          result[4] += 0.0713436385255648;
          result[5] += 0.89179548156956;
        } else {
          result[0] += 0;
          result[1] += 0.022900763358778626;
          result[2] += 0.022900763358778626;
          result[3] += 0.549618320610687;
          result[4] += 0.026717557251908396;
          result[5] += 0.37786259541984735;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0.10526315789473684;
          result[2] += 0;
          result[3] += 0.08771929824561403;
          result[4] += 0.7543859649122807;
          result[5] += 0.05263157894736842;
        } else {
          result[0] += 0.0023584905660377358;
          result[1] += 0.9952830188679245;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0023584905660377358;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.7915384615384615;
          result[1] += 0.016923076923076923;
          result[2] += 0;
          result[3] += 0.026923076923076925;
          result[4] += 0.12076923076923077;
          result[5] += 0.04384615384615385;
        } else {
          result[0] += 0.2163265306122449;
          result[1] += 0.03469387755102041;
          result[2] += 0.23877551020408164;
          result[3] += 0.21020408163265306;
          result[4] += 0.09591836734693877;
          result[5] += 0.20408163265306123;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1111111111111111;
          result[3] += 0;
          result[4] += 0.7777777777777778;
          result[5] += 0.1111111111111111;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0449438202247191;
          result[3] += 0.29213483146067415;
          result[4] += 0;
          result[5] += 0.6629213483146067;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06521739130434782;
          result[3] += 0.8043478260869565;
          result[4] += 0;
          result[5] += 0.13043478260869565;
        } else {
          result[0] += 0;
          result[1] += 0.022222222222222223;
          result[2] += 0.5481481481481482;
          result[3] += 0.3111111111111111;
          result[4] += 0.007407407407407408;
          result[5] += 0.1111111111111111;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0.5;
          result[1] += 0.17647058823529413;
          result[2] += 0.23529411764705882;
          result[3] += 0.029411764705882353;
          result[4] += 0.058823529411764705;
          result[5] += 0;
        } else {
          result[0] += 0.025641025641025644;
          result[1] += 0;
          result[2] += 0.7326007326007327;
          result[3] += 0.2014652014652015;
          result[4] += 0;
          result[5] += 0.0402930402930403;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.75;
          result[3] += 0.25;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9737302977232924;
          result[3] += 0.02626970227670753;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0.03389830508474576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9533898305084746;
          result[5] += 0.012711864406779662;
        } else {
          result[0] += 0;
          result[1] += 0.1694915254237288;
          result[2] += 0;
          result[3] += 0.1694915254237288;
          result[4] += 0.3559322033898305;
          result[5] += 0.3050847457627119;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0.9882352941176471;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.011764705882352941;
          result[5] += 0;
        } else {
          result[0] += 0.01818181818181818;
          result[1] += 0.05454545454545454;
          result[2] += 0;
          result[3] += 0.07272727272727272;
          result[4] += 0.38181818181818183;
          result[5] += 0.4727272727272727;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.009191176470588236;
          result[4] += 0.016544117647058824;
          result[5] += 0.9742647058823529;
        } else {
          result[0] += 0.01730103806228374;
          result[1] += 0;
          result[2] += 0.01384083044982699;
          result[3] += 0.11418685121107267;
          result[4] += 0.19377162629757785;
          result[5] += 0.6608996539792388;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0.013071895424836602;
          result[1] += 0.006535947712418301;
          result[2] += 0.006535947712418301;
          result[3] += 0.1830065359477124;
          result[4] += 0.032679738562091505;
          result[5] += 0.7581699346405228;
        } else {
          result[0] += 0.02631578947368421;
          result[1] += 0.039473684210526314;
          result[2] += 0.03289473684210526;
          result[3] += 0.6085526315789473;
          result[4] += 0.02631578947368421;
          result[5] += 0.26644736842105265;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
          result[0] += 0.05154639175257732;
          result[1] += 0.36082474226804123;
          result[2] += 0;
          result[3] += 0.015463917525773196;
          result[4] += 0.5670103092783505;
          result[5] += 0.005154639175257732;
        } else {
          result[0] += 0.8070038910505837;
          result[1] += 0.010116731517509728;
          result[2] += 0.03735408560311284;
          result[3] += 0.05291828793774319;
          result[4] += 0.06147859922178988;
          result[5] += 0.0311284046692607;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 0.9951923076923077;
          result[2] += 0;
          result[3] += 0.002403846153846154;
          result[4] += 0.002403846153846154;
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
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0.07017543859649122;
          result[2] += 0.07017543859649122;
          result[3] += 0.03508771929824561;
          result[4] += 0.21052631578947367;
          result[5] += 0.6140350877192983;
        } else {
          result[0] += 0.004608294930875576;
          result[1] += 0.027649769585253458;
          result[2] += 0.45161290322580644;
          result[3] += 0.35944700460829493;
          result[4] += 0.041474654377880185;
          result[5] += 0.1152073732718894;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0.6363636363636364;
          result[1] += 0.18181818181818182;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.18181818181818182;
          result[5] += 0;
        } else {
          result[0] += 0.027262813522355506;
          result[1] += 0;
          result[2] += 0.8942202835332607;
          result[3] += 0.06652126499454744;
          result[4] += 0.0010905125408942203;
          result[5] += 0.010905125408942203;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d70000))) ) ) {
          result[0] += 0.01466275659824047;
          result[1] += 0.005865102639296188;
          result[2] += 0.011730205278592375;
          result[3] += 0;
          result[4] += 0.8885630498533724;
          result[5] += 0.07917888563049853;
        } else {
          result[0] += 0;
          result[1] += 0.8571428571428571;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.14285714285714285;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0.005333333333333333;
          result[1] += 0.0013333333333333333;
          result[2] += 0.006666666666666667;
          result[3] += 0.025333333333333333;
          result[4] += 0.034666666666666665;
          result[5] += 0.9266666666666666;
        } else {
          result[0] += 0.14234234234234233;
          result[1] += 0.0018018018018018018;
          result[2] += 0.02882882882882883;
          result[3] += 0.35135135135135137;
          result[4] += 0.09009009009009009;
          result[5] += 0.3855855855855856;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0.7694704049844238;
          result[1] += 0.05140186915887851;
          result[2] += 0;
          result[3] += 0.03816199376947041;
          result[4] += 0.11682242990654207;
          result[5] += 0.02414330218068536;
        } else {
          result[0] += 0.22429906542056074;
          result[1] += 0.037383177570093455;
          result[2] += 0.2336448598130841;
          result[3] += 0.24610591900311526;
          result[4] += 0.06230529595015576;
          result[5] += 0.19626168224299065;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
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
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05405405405405406;
          result[3] += 0.05405405405405406;
          result[4] += 0.13513513513513514;
          result[5] += 0.7567567567567568;
        } else {
          result[0] += 0;
          result[1] += 0.0625;
          result[2] += 0.0625;
          result[3] += 0.484375;
          result[4] += 0;
          result[5] += 0.390625;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42eb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6153846153846154;
          result[3] += 0.2923076923076923;
          result[4] += 0.015384615384615385;
          result[5] += 0.07692307692307693;
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
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.20000000000000004;
          result[3] += 0.7000000000000001;
          result[4] += 0;
          result[5] += 0.10000000000000002;
        } else {
          result[0] += 0.015748031496062992;
          result[1] += 0;
          result[2] += 0.7913385826771654;
          result[3] += 0.1732283464566929;
          result[4] += 0;
          result[5] += 0.01968503937007874;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8675496688741722;
          result[3] += 0.10596026490066225;
          result[4] += 0;
          result[5] += 0.026490066225165563;
        } else {
          result[0] += 0.005474452554744526;
          result[1] += 0;
          result[2] += 0.9744525547445255;
          result[3] += 0.01824817518248175;
          result[4] += 0;
          result[5] += 0.0018248175182481751;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0.009852216748768473;
          result[1] += 0.0049261083743842365;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9802955665024631;
          result[5] += 0.0049261083743842365;
        } else {
          result[0] += 0.5416666666666666;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.19444444444444445;
          result[5] += 0.2638888888888889;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0.0010460251046025104;
          result[1] += 0.034518828451882845;
          result[2] += 0;
          result[3] += 0.05439330543933055;
          result[4] += 0.06380753138075314;
          result[5] += 0.8462343096234309;
        } else {
          result[0] += 0.006060606060606061;
          result[1] += 0;
          result[2] += 0.024242424242424242;
          result[3] += 0.7151515151515152;
          result[4] += 0;
          result[5] += 0.2545454545454545;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0.55;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.45;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9953051643192489;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004694835680751174;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.7791916167664672;
          result[1] += 0.02544910179640719;
          result[2] += 0.0014970059880239524;
          result[3] += 0.03517964071856288;
          result[4] += 0.13922155688622756;
          result[5] += 0.01946107784431138;
        } else {
          result[0] += 0.11818181818181818;
          result[1] += 0.02;
          result[2] += 0.2290909090909091;
          result[3] += 0.22545454545454546;
          result[4] += 0.09636363636363636;
          result[5] += 0.3109090909090909;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x424a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.23076923076923078;
          result[3] += 0;
          result[4] += 0.7692307692307693;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.04081632653061224;
          result[2] += 0.08163265306122448;
          result[3] += 0.12244897959183673;
          result[4] += 0.02040816326530612;
          result[5] += 0.7346938775510204;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 0.02631578947368421;
          result[2] += 0.07894736842105263;
          result[3] += 0.7631578947368421;
          result[4] += 0.02631578947368421;
          result[5] += 0.10526315789473684;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7083333333333334;
          result[3] += 0.125;
          result[4] += 0;
          result[5] += 0.16666666666666666;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0.4594594594594595;
          result[1] += 0.08108108108108109;
          result[2] += 0.21621621621621623;
          result[3] += 0.1891891891891892;
          result[4] += 0;
          result[5] += 0.05405405405405406;
        } else {
          result[0] += 0.058823529411764705;
          result[1] += 0;
          result[2] += 0.8235294117647058;
          result[3] += 0.11764705882352941;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d90000))) ) ) {
          result[0] += 0.022857142857142857;
          result[1] += 0;
          result[2] += 0.7914285714285715;
          result[3] += 0.15714285714285714;
          result[4] += 0;
          result[5] += 0.02857142857142857;
        } else {
          result[0] += 0.02280701754385965;
          result[1] += 0;
          result[2] += 0.9421052631578948;
          result[3] += 0.03333333333333333;
          result[4] += 0;
          result[5] += 0.0017543859649122807;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0;
          result[1] += 0.010582010582010581;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9788359788359788;
          result[5] += 0.010582010582010581;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.76;
          result[5] += 0.24;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.025157232704402517;
          result[4] += 0.018867924528301886;
          result[5] += 0.9559748427672956;
        } else {
          result[0] += 0.09414225941422594;
          result[1] += 0.0397489539748954;
          result[2] += 0.02301255230125523;
          result[3] += 0.2803347280334728;
          result[4] += 0.08368200836820083;
          result[5] += 0.4790794979079498;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0.009389671361502348;
          result[1] += 0.4084507042253521;
          result[2] += 0;
          result[3] += 0.004694835680751174;
          result[4] += 0.5633802816901409;
          result[5] += 0.014084507042253521;
        } else {
          result[0] += 0.7312626603646186;
          result[1] += 0.013504388926401082;
          result[2] += 0.031735313977042545;
          result[3] += 0.07494935854152601;
          result[4] += 0.06954760297096557;
          result[5] += 0.07900067521944633;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 0.9900249376558603;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.00997506234413965;
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
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 0.03571428571428571;
          result[1] += 0.03571428571428571;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.14285714285714285;
          result[5] += 0.7857142857142857;
        } else {
          result[0] += 0;
          result[1] += 0.03636363636363636;
          result[2] += 0.1393939393939394;
          result[3] += 0.6363636363636364;
          result[4] += 0.01818181818181818;
          result[5] += 0.1696969696969697;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 0.016666666666666666;
          result[2] += 0.18333333333333332;
          result[3] += 0;
          result[4] += 0.2833333333333333;
          result[5] += 0.5166666666666667;
        } else {
          result[0] += 0.05384615384615385;
          result[1] += 0.023076923076923078;
          result[2] += 0.6;
          result[3] += 0.19230769230769232;
          result[4] += 0.023076923076923078;
          result[5] += 0.1076923076923077;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.40625;
          result[3] += 0.46875;
          result[4] += 0;
          result[5] += 0.125;
        } else {
          result[0] += 0.009345794392523366;
          result[1] += 0;
          result[2] += 0.8224299065420562;
          result[3] += 0.1635514018691589;
          result[4] += 0;
          result[5] += 0.004672897196261683;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0.075;
          result[1] += 0;
          result[2] += 0.725;
          result[3] += 0.025;
          result[4] += 0;
          result[5] += 0.175;
        } else {
          result[0] += 0.007342143906020558;
          result[1] += 0;
          result[2] += 0.9588839941262849;
          result[3] += 0.033773861967694566;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.013574660633484163;
          result[1] += 0.02262443438914027;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9366515837104072;
          result[5] += 0.027149321266968326;
        } else {
          result[0] += 0.045454545454545456;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3181818181818182;
          result[5] += 0.6363636363636364;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0.03794642857142857;
          result[1] += 0;
          result[2] += 0.002232142857142857;
          result[3] += 0.03125;
          result[4] += 0.07366071428571429;
          result[5] += 0.8549107142857143;
        } else {
          result[0] += 0.05121293800539083;
          result[1] += 0.03234501347708895;
          result[2] += 0.005390835579514825;
          result[3] += 0.42857142857142855;
          result[4] += 0.03504043126684636;
          result[5] += 0.4474393530997305;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0.012269938650306749;
          result[1] += 0.3067484662576687;
          result[2] += 0.018404907975460124;
          result[3] += 0.018404907975460124;
          result[4] += 0.6319018404907976;
          result[5] += 0.012269938650306749;
        } else {
          result[0] += 0;
          result[1] += 0.9973474801061007;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.002652519893899204;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0.24242424242424243;
          result[1] += 0.011363636363636364;
          result[2] += 0.04924242424242424;
          result[3] += 0.3143939393939394;
          result[4] += 0.125;
          result[5] += 0.25757575757575757;
        } else {
          result[0] += 0.7993989481592787;
          result[1] += 0.035311795642374154;
          result[2] += 0.035311795642374154;
          result[3] += 0.03831705484598046;
          result[4] += 0.06010518407212622;
          result[5] += 0.03155522163786627;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1206896551724138;
          result[3] += 0.6810344827586207;
          result[4] += 0;
          result[5] += 0.19827586206896552;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5517241379310345;
          result[3] += 0.2413793103448276;
          result[4] += 0;
          result[5] += 0.20689655172413793;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.42857142857142855;
          result[3] += 0.14285714285714285;
          result[4] += 0.09523809523809523;
          result[5] += 0.3333333333333333;
        } else {
          result[0] += 0.05405405405405406;
          result[1] += 0;
          result[2] += 0.918918918918919;
          result[3] += 0.02702702702702703;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2857142857142857;
          result[4] += 0;
          result[5] += 0.7142857142857143;
        } else {
          result[0] += 0.03367875647668394;
          result[1] += 0;
          result[2] += 0.8160621761658031;
          result[3] += 0.14248704663212436;
          result[4] += 0;
          result[5] += 0.007772020725388601;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.978021978021978;
          result[3] += 0.020146520146520148;
          result[4] += 0;
          result[5] += 0.0018315018315018315;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 0.01968503937007874;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9094488188976378;
          result[5] += 0.07086614173228346;
        } else {
          result[0] += 0;
          result[1] += 0.5;
          result[2] += 0;
          result[3] += 0.18181818181818182;
          result[4] += 0.045454545454545456;
          result[5] += 0.2727272727272727;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0.023965141612200435;
          result[1] += 0.0010893246187363835;
          result[2] += 0;
          result[3] += 0.034858387799564274;
          result[4] += 0.06427015250544663;
          result[5] += 0.8758169934640523;
        } else {
          result[0] += 0;
          result[1] += 0.00816326530612245;
          result[2] += 0.053061224489795916;
          result[3] += 0.5673469387755102;
          result[4] += 0.04897959183673469;
          result[5] += 0.3224489795918367;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 0.5;
          result[2] += 0;
          result[3] += 0.03571428571428571;
          result[4] += 0.4642857142857143;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9975247524752475;
          result[2] += 0;
          result[3] += 0.0024752475247524753;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.16906474820143885;
          result[1] += 0.1906474820143885;
          result[2] += 0.007194244604316547;
          result[3] += 0.007194244604316547;
          result[4] += 0.5755395683453237;
          result[5] += 0.050359712230215826;
        } else {
          result[0] += 0.7485163204747776;
          result[1] += 0.004451038575667657;
          result[2] += 0.030415430267062317;
          result[3] += 0.07121661721068251;
          result[4] += 0.053412462908011875;
          result[5] += 0.09198813056379823;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b90000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.10638297872340426;
          result[4] += 0.0425531914893617;
          result[5] += 0.851063829787234;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06172839506172839;
          result[3] += 0.41975308641975306;
          result[4] += 0;
          result[5] += 0.5185185185185185;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 0.04819277108433735;
          result[2] += 0.07228915662650602;
          result[3] += 0.6626506024096386;
          result[4] += 0;
          result[5] += 0.21686746987951808;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6721311475409836;
          result[3] += 0.28688524590163933;
          result[4] += 0;
          result[5] += 0.040983606557377046;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0;
          result[1] += 0.0547945205479452;
          result[2] += 0.273972602739726;
          result[3] += 0.3972602739726027;
          result[4] += 0;
          result[5] += 0.273972602739726;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0.4318181818181819;
          result[1] += 0.06818181818181819;
          result[2] += 0.44318181818181823;
          result[3] += 0;
          result[4] += 0.034090909090909095;
          result[5] += 0.02272727272727273;
        } else {
          result[0] += 0.004842615012106538;
          result[1] += 0.0012106537530266344;
          result[2] += 0.9297820823244553;
          result[3] += 0.06053268765133172;
          result[4] += 0.002421307506053269;
          result[5] += 0.0012106537530266344;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0.008032128514056224;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.004016064257028112;
          result[4] += 0.9718875502008032;
          result[5] += 0.01606425702811245;
        } else {
          result[0] += 0;
          result[1] += 0.9090909090909091;
          result[2] += 0;
          result[3] += 0.09090909090909091;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0.026255707762557076;
          result[1] += 0.0045662100456621;
          result[2] += 0;
          result[3] += 0.04794520547945205;
          result[4] += 0.0547945205479452;
          result[5] += 0.8664383561643836;
        } else {
          result[0] += 0.060941828254847646;
          result[1] += 0.0443213296398892;
          result[2] += 0.04155124653739612;
          result[3] += 0.44598337950138506;
          result[4] += 0.027700831024930747;
          result[5] += 0.37950138504155123;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0.21000000000000002;
          result[2] += 0;
          result[3] += 0.010000000000000002;
          result[4] += 0.6900000000000001;
          result[5] += 0.09000000000000001;
        } else {
          result[0] += 0;
          result[1] += 0.9575471698113207;
          result[2] += 0;
          result[3] += 0.0023584905660377358;
          result[4] += 0.04009433962264151;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0.8163568773234199;
          result[1] += 0.03197026022304832;
          result[2] += 0.0007434944237918213;
          result[3] += 0.041635687732342;
          result[4] += 0.08475836431226765;
          result[5] += 0.024535315985130104;
        } else {
          result[0] += 0.16326530612244897;
          result[1] += 0.013605442176870748;
          result[2] += 0.282312925170068;
          result[3] += 0.2789115646258503;
          result[4] += 0.030612244897959183;
          result[5] += 0.23129251700680273;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0.0136986301369863;
          result[1] += 0;
          result[2] += 0.2191780821917808;
          result[3] += 0;
          result[4] += 0.2054794520547945;
          result[5] += 0.5616438356164384;
        } else {
          result[0] += 0.2222222222222222;
          result[1] += 0.7222222222222222;
          result[2] += 0;
          result[3] += 0.05555555555555555;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14432989690721648;
          result[3] += 0.6597938144329897;
          result[4] += 0;
          result[5] += 0.1958762886597938;
        } else {
          result[0] += 0.07246376811594203;
          result[1] += 0;
          result[2] += 0.4927536231884058;
          result[3] += 0.2318840579710145;
          result[4] += 0.028985507246376812;
          result[5] += 0.17391304347826086;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0.0975609756097561;
          result[1] += 0;
          result[2] += 0.6747967479674797;
          result[3] += 0.21951219512195122;
          result[4] += 0;
          result[5] += 0.008130081300813009;
        } else {
          result[0] += 0.009478672985781993;
          result[1] += 0;
          result[2] += 0.8767772511848342;
          result[3] += 0.09478672985781991;
          result[4] += 0;
          result[5] += 0.018957345971563986;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9135802469135802;
          result[3] += 0.08641975308641975;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9973045822102425;
          result[3] += 0.0026954177897574125;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42300000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42620000))) ) ) {
          result[0] += 0;
          result[1] += 0.8125;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.1875;
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
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0.02040816326530612;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9428571428571428;
          result[5] += 0.036734693877551024;
        } else {
          result[0] += 0.05714285714285714;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.02857142857142857;
          result[4] += 0.5142857142857142;
          result[5] += 0.4;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0.0625;
          result[1] += 0.125;
          result[2] += 0;
          result[3] += 0.0625;
          result[4] += 0.7083333333333334;
          result[5] += 0.041666666666666664;
        } else {
          result[0] += 0.025830258302583026;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03690036900369004;
          result[4] += 0.06519065190651907;
          result[5] += 0.8720787207872078;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42810000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.058823529411764705;
          result[4] += 0;
          result[5] += 0.9411764705882353;
        } else {
          result[0] += 0.0038461538461538464;
          result[1] += 0.0038461538461538464;
          result[2] += 0.11923076923076924;
          result[3] += 0.5538461538461539;
          result[4] += 0;
          result[5] += 0.3192307692307692;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0.024390243902439025;
          result[1] += 0.1951219512195122;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7804878048780488;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9892008639308856;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.01079913606911447;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.8438485804416404;
          result[1] += 0.01498422712933754;
          result[2] += 0.0007886435331230284;
          result[3] += 0.02996845425867508;
          result[4] += 0.06703470031545741;
          result[5] += 0.04337539432176656;
        } else {
          result[0] += 0.25177304964539005;
          result[1] += 0.031914893617021274;
          result[2] += 0.09929078014184398;
          result[3] += 0.2765957446808511;
          result[4] += 0.06028368794326241;
          result[5] += 0.2801418439716312;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.075;
          result[3] += 0.175;
          result[4] += 0.05;
          result[5] += 0.7;
        } else {
          result[0] += 0;
          result[1] += 0.032467532467532464;
          result[2] += 0.2792207792207792;
          result[3] += 0.538961038961039;
          result[4] += 0.01948051948051948;
          result[5] += 0.12987012987012986;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0.22666666666666666;
          result[1] += 0.013333333333333334;
          result[2] += 0.4266666666666667;
          result[3] += 0.05333333333333334;
          result[4] += 0.08;
          result[5] += 0.2;
        } else {
          result[0] += 0.010934393638170977;
          result[1] += 0.0029821073558648115;
          result[2] += 0.8946322067594434;
          result[3] += 0.07952286282306165;
          result[4] += 0.0009940357852882705;
          result[5] += 0.010934393638170977;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0.032407407407407406;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9537037037037037;
          result[5] += 0.013888888888888888;
        } else {
          result[0] += 0.11594202898550725;
          result[1] += 0.014492753623188406;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4927536231884058;
          result[5] += 0.37681159420289856;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.031073446327683617;
          result[4] += 0.025423728813559324;
          result[5] += 0.943502824858757;
        } else {
          result[0] += 0.08860759493670886;
          result[1] += 0.02109704641350211;
          result[2] += 0.004219409282700422;
          result[3] += 0.270042194092827;
          result[4] += 0.06118143459915612;
          result[5] += 0.5548523206751055;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0.05405405405405406;
          result[1] += 0.2882882882882883;
          result[2] += 0;
          result[3] += 0.013513513513513514;
          result[4] += 0.6396396396396397;
          result[5] += 0.0045045045045045045;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.8846153846153846;
          result[1] += 0.01282051282051282;
          result[2] += 0.0009157509157509158;
          result[3] += 0.024725274725274724;
          result[4] += 0.06043956043956044;
          result[5] += 0.016483516483516484;
        } else {
          result[0] += 0.3114754098360656;
          result[1] += 0.03278688524590164;
          result[2] += 0.18442622950819673;
          result[3] += 0.1680327868852459;
          result[4] += 0.16393442622950818;
          result[5] += 0.13934426229508196;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.017857142857142856;
          result[1] += 0.03571428571428571;
          result[2] += 0.0625;
          result[3] += 0.20535714285714285;
          result[4] += 0.11607142857142858;
          result[5] += 0.5625;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07100591715976332;
          result[3] += 0.7396449704142012;
          result[4] += 0.005917159763313609;
          result[5] += 0.1834319526627219;
        } else {
          result[0] += 0.04000000000000001;
          result[1] += 0.020000000000000004;
          result[2] += 0.6400000000000001;
          result[3] += 0.20000000000000004;
          result[4] += 0;
          result[5] += 0.10000000000000002;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42500000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.9459459459459459;
          result[1] += 0;
          result[2] += 0.05405405405405406;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.38461538461538464;
          result[3] += 0.38461538461538464;
          result[4] += 0;
          result[5] += 0.23076923076923078;
        } else {
          result[0] += 0.021042084168336677;
          result[1] += 0;
          result[2] += 0.8937875751503007;
          result[3] += 0.07314629258517036;
          result[4] += 0.0010020040080160322;
          result[5] += 0.011022044088176355;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0.01694915254237288;
          result[1] += 0.006779661016949152;
          result[2] += 0;
          result[3] += 0.006779661016949152;
          result[4] += 0.9559322033898305;
          result[5] += 0.013559322033898305;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8;
          result[3] += 0;
          result[4] += 0.2;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0.7192982456140351;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2543859649122807;
          result[5] += 0.02631578947368421;
        } else {
          result[0] += 0.006493506493506494;
          result[1] += 0.0037105751391465678;
          result[2] += 0.0009276437847866419;
          result[3] += 0.10111317254174397;
          result[4] += 0.07142857142857142;
          result[5] += 0.8163265306122449;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 0.48148148148148145;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5185185185185185;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9910913140311804;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.008908685968819599;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.8358085808580858;
          result[1] += 0.019801980198019802;
          result[2] += 0.01155115511551155;
          result[3] += 0.0462046204620462;
          result[4] += 0.054455445544554455;
          result[5] += 0.03217821782178218;
        } else {
          result[0] += 0.18361581920903955;
          result[1] += 0.005649717514124294;
          result[2] += 0.11016949152542373;
          result[3] += 0.4180790960451977;
          result[4] += 0.04519774011299435;
          result[5] += 0.23728813559322035;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 0.03278688524590164;
          result[2] += 0.06557377049180328;
          result[3] += 0.14754098360655737;
          result[4] += 0.06557377049180328;
          result[5] += 0.6885245901639344;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14953271028037382;
          result[3] += 0.5607476635514018;
          result[4] += 0.04672897196261682;
          result[5] += 0.24299065420560748;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2222222222222222;
          result[3] += 0.6666666666666666;
          result[4] += 0;
          result[5] += 0.1111111111111111;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8095238095238095;
          result[3] += 0.05952380952380952;
          result[4] += 0.03571428571428571;
          result[5] += 0.09523809523809523;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.038461538461538464;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0.46153846153846156;
        } else {
          result[0] += 0.05;
          result[1] += 0.05;
          result[2] += 0.625;
          result[3] += 0.075;
          result[4] += 0;
          result[5] += 0.2;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5769230769230769;
          result[3] += 0.34615384615384615;
          result[4] += 0;
          result[5] += 0.07692307692307693;
        } else {
          result[0] += 0.017543859649122806;
          result[1] += 0;
          result[2] += 0.9210526315789473;
          result[3] += 0.05921052631578947;
          result[4] += 0;
          result[5] += 0.0021929824561403508;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0.007407407407407408;
          result[1] += 0.007407407407407408;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9296296296296296;
          result[5] += 0.05555555555555555;
        } else {
          result[0] += 0;
          result[1] += 0.8421052631578947;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.15789473684210525;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0.001392757660167131;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.020891364902506964;
          result[4] += 0.03064066852367688;
          result[5] += 0.947075208913649;
        } else {
          result[0] += 0.07912087912087912;
          result[1] += 0.024175824175824177;
          result[2] += 0.01978021978021978;
          result[3] += 0.3758241758241758;
          result[4] += 0.05934065934065934;
          result[5] += 0.44175824175824174;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42890000))) ) ) {
          result[0] += 0.06640625;
          result[1] += 0.25;
          result[2] += 0;
          result[3] += 0.02734375;
          result[4] += 0.609375;
          result[5] += 0.046875;
        } else {
          result[0] += 0.6623695518723144;
          result[1] += 0.017802332719459794;
          result[2] += 0.05586249232658074;
          result[3] += 0.10251688152240641;
          result[4] += 0.05770411295273175;
          result[5] += 0.10374462860650709;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c00000))) ) ) {
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
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 0.03225806451612903;
          result[2] += 0.1935483870967742;
          result[3] += 0.0967741935483871;
          result[4] += 0.1935483870967742;
          result[5] += 0.4838709677419355;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.17105263157894737;
          result[3] += 0.6842105263157895;
          result[4] += 0;
          result[5] += 0.14473684210526316;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6666666666666666;
          result[5] += 0.3333333333333333;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8461538461538461;
          result[3] += 0.07692307692307693;
          result[4] += 0;
          result[5] += 0.07692307692307693;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0.2;
          result[1] += 0.15;
          result[2] += 0.15;
          result[3] += 0.25;
          result[4] += 0;
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
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0.04545454545454546;
          result[1] += 0.0026737967914438505;
          result[2] += 0.7967914438502675;
          result[3] += 0.13903743315508024;
          result[4] += 0;
          result[5] += 0.016042780748663107;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9742574257425742;
          result[3] += 0.02574257425742574;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0.00684931506849315;
          result[1] += 0.003424657534246575;
          result[2] += 0.00684931506849315;
          result[3] += 0.010273972602739725;
          result[4] += 0.8904109589041096;
          result[5] += 0.0821917808219178;
        } else {
          result[0] += 0;
          result[1] += 0.9285714285714286;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.07142857142857142;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0.013126491646778043;
          result[1] += 0;
          result[2] += 0.0011933174224343676;
          result[3] += 0.03699284009546539;
          result[4] += 0.05369928400954654;
          result[5] += 0.8949880668257757;
        } else {
          result[0] += 0.028169014084507043;
          result[1] += 0;
          result[2] += 0.046948356807511735;
          result[3] += 0.431924882629108;
          result[4] += 0.014084507042253521;
          result[5] += 0.4788732394366197;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 0.4166666666666667;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5833333333333334;
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
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d60000))) ) ) {
          result[0] += 0.4329608938547485;
          result[1] += 0.054934823091247656;
          result[2] += 0.02793296089385474;
          result[3] += 0.16852886405959028;
          result[4] += 0.18156424581005584;
          result[5] += 0.13407821229050276;
        } else {
          result[0] += 0.935344827586207;
          result[1] += 0;
          result[2] += 0.01580459770114943;
          result[3] += 0;
          result[4] += 0.04885057471264369;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b90000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.48;
          result[4] += 0.08;
          result[5] += 0.44;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05405405405405406;
          result[3] += 0.13513513513513514;
          result[4] += 0;
          result[5] += 0.8108108108108109;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0.030612244897959183;
          result[2] += 0.1326530612244898;
          result[3] += 0.673469387755102;
          result[4] += 0;
          result[5] += 0.16326530612244897;
        } else {
          result[0] += 0;
          result[1] += 0.05882352941176471;
          result[2] += 0.5098039215686275;
          result[3] += 0.19607843137254904;
          result[4] += 0.07843137254901962;
          result[5] += 0.15686274509803924;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0.00975609756097561;
          result[1] += 0;
          result[2] += 0.6536585365853659;
          result[3] += 0.2780487804878049;
          result[4] += 0;
          result[5] += 0.05853658536585366;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9130434782608696;
          result[3] += 0.04347826086956522;
          result[4] += 0;
          result[5] += 0.04347826086956522;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0.3548387096774194;
          result[1] += 0;
          result[2] += 0.6129032258064516;
          result[3] += 0;
          result[4] += 0.03225806451612903;
          result[5] += 0;
        } else {
          result[0] += 0.00851063829787234;
          result[1] += 0;
          result[2] += 0.9375886524822695;
          result[3] += 0.04539007092198582;
          result[4] += 0;
          result[5] += 0.00851063829787234;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0.015151515151515152;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9583333333333334;
          result[5] += 0.026515151515151516;
        } else {
          result[0] += 0;
          result[1] += 0.8333333333333334;
          result[2] += 0;
          result[3] += 0.041666666666666664;
          result[4] += 0.125;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0.9761904761904762;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.023809523809523808;
          result[5] += 0;
        } else {
          result[0] += 0.008352315869400152;
          result[1] += 0.0015186028853454822;
          result[2] += 0.0015186028853454822;
          result[3] += 0.1716021260440395;
          result[4] += 0.06378132118451026;
          result[5] += 0.7532270311313591;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0.25925925925925924;
          result[2] += 0.037037037037037035;
          result[3] += 0;
          result[4] += 0.7037037037037037;
          result[5] += 0;
        } else {
          result[0] += 0.0022988505747126436;
          result[1] += 0.9747126436781609;
          result[2] += 0;
          result[3] += 0.009195402298850575;
          result[4] += 0.013793103448275862;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0.7918552036199095;
          result[1] += 0.042986425339366516;
          result[2] += 0.0022624434389140274;
          result[3] += 0.026395173453996983;
          result[4] += 0.11840120663650075;
          result[5] += 0.01809954751131222;
        } else {
          result[0] += 0.1444043321299639;
          result[1] += 0;
          result[2] += 0.34657039711191334;
          result[3] += 0.22382671480144403;
          result[4] += 0.021660649819494584;
          result[5] += 0.26353790613718414;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1282051282051282;
          result[3] += 0.46153846153846156;
          result[4] += 0;
          result[5] += 0.41025641025641024;
        } else {
          result[0] += 0.06493506493506493;
          result[1] += 0;
          result[2] += 0.37662337662337664;
          result[3] += 0.5064935064935064;
          result[4] += 0.012987012987012988;
          result[5] += 0.03896103896103896;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5454545454545454;
          result[3] += 0.45454545454545453;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.016736401673640166;
          result[1] += 0;
          result[2] += 0.8493723849372385;
          result[3] += 0.11715481171548117;
          result[4] += 0;
          result[5] += 0.016736401673640166;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cc0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8916666666666667;
          result[3] += 0.10416666666666667;
          result[4] += 0;
          result[5] += 0.004166666666666667;
        } else {
          result[0] += 0.004597701149425287;
          result[1] += 0;
          result[2] += 0.9839080459770115;
          result[3] += 0.009195402298850575;
          result[4] += 0;
          result[5] += 0.0022988505747126436;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42e90000))) ) ) {
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
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0.0036496350364963502;
          result[1] += 0.08029197080291971;
          result[2] += 0;
          result[3] += 0.014598540145985401;
          result[4] += 0.8576642335766423;
          result[5] += 0.043795620437956206;
        } else {
          result[0] += 0.68;
          result[1] += 0.01;
          result[2] += 0;
          result[3] += 0.03;
          result[4] += 0.12;
          result[5] += 0.16;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0.0022172949002217295;
          result[2] += 0;
          result[3] += 0.06762749445676275;
          result[4] += 0.04878048780487805;
          result[5] += 0.8813747228381374;
        } else {
          result[0] += 0.021472392638036814;
          result[1] += 0.0030674846625766876;
          result[2] += 0.018404907975460127;
          result[3] += 0.5245398773006136;
          result[4] += 0.04601226993865031;
          result[5] += 0.3865030674846626;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
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
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.8057784911717497;
          result[1] += 0.020064205457463888;
          result[2] += 0;
          result[3] += 0.022471910112359553;
          result[4] += 0.13804173354735155;
          result[5] += 0.013643659711075444;
        } else {
          result[0] += 0.17494600431965443;
          result[1] += 0.02159827213822894;
          result[2] += 0.28509719222462204;
          result[3] += 0.21382289416846653;
          result[4] += 0.09071274298056156;
          result[5] += 0.21382289416846653;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05555555555555555;
          result[3] += 0;
          result[4] += 0.05555555555555555;
          result[5] += 0.8888888888888888;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.18666666666666668;
          result[3] += 0.5466666666666666;
          result[4] += 0;
          result[5] += 0.26666666666666666;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2727272727272727;
          result[3] += 0.45454545454545453;
          result[4] += 0;
          result[5] += 0.2727272727272727;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8333333333333334;
          result[3] += 0.11904761904761904;
          result[4] += 0;
          result[5] += 0.047619047619047616;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0.024390243902439025;
          result[2] += 0.6097560975609756;
          result[3] += 0.3170731707317073;
          result[4] += 0;
          result[5] += 0.04878048780487805;
        } else {
          result[0] += 0.022222222222222223;
          result[1] += 0;
          result[2] += 0.8755555555555555;
          result[3] += 0.08;
          result[4] += 0.017777777777777778;
          result[5] += 0.0044444444444444444;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.696969696969697;
          result[3] += 0.30303030303030304;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0056925996204933585;
          result[1] += 0;
          result[2] += 0.9753320683111955;
          result[3] += 0.017077798861480076;
          result[4] += 0;
          result[5] += 0.0018975332068311196;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42f90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9834710743801653;
          result[5] += 0.01652892561983471;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0;
          result[1] += 0.1111111111111111;
          result[2] += 0;
          result[3] += 0.05555555555555555;
          result[4] += 0.4444444444444444;
          result[5] += 0.3888888888888889;
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
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0;
          result[4] += 0.5;
          result[5] += 0.25;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0013192612137203166;
          result[3] += 0.03562005277044855;
          result[4] += 0.025065963060686015;
          result[5] += 0.9379947229551451;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0.07736389684813753;
          result[1] += 0.022922636103151862;
          result[2] += 0.0057306590257879654;
          result[3] += 0.12034383954154727;
          result[4] += 0.1346704871060172;
          result[5] += 0.6389684813753582;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.04639175257731959;
          result[3] += 0.6752577319587629;
          result[4] += 0.005154639175257732;
          result[5] += 0.27319587628865977;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0.022727272727272728;
          result[1] += 0.20454545454545456;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7727272727272727;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9936305732484076;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.006369426751592357;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.858085808580858;
          result[1] += 0.026402640264026403;
          result[2] += 0.0008250825082508251;
          result[3] += 0.019801980198019802;
          result[4] += 0.08250825082508251;
          result[5] += 0.012376237623762377;
        } else {
          result[0] += 0.2417582417582418;
          result[1] += 0.010989010989010992;
          result[2] += 0.1611721611721612;
          result[3] += 0.30402930402930406;
          result[4] += 0.06959706959706961;
          result[5] += 0.21245421245421248;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0.013513513513513514;
          result[2] += 0.16216216216216217;
          result[3] += 0.5608108108108109;
          result[4] += 0.0472972972972973;
          result[5] += 0.21621621621621623;
        } else {
          result[0] += 0.01;
          result[1] += 0;
          result[2] += 0.61;
          result[3] += 0.12;
          result[4] += 0.13;
          result[5] += 0.13;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0.03636363636363636;
          result[1] += 0;
          result[2] += 0.5818181818181818;
          result[3] += 0.2909090909090909;
          result[4] += 0;
          result[5] += 0.09090909090909091;
        } else {
          result[0] += 0.021531100478468904;
          result[1] += 0.002392344497607656;
          result[2] += 0.9162679425837321;
          result[3] += 0.049043062200956944;
          result[4] += 0.002392344497607656;
          result[5] += 0.008373205741626796;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bb0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 0.0703125;
          result[2] += 0;
          result[3] += 0.0234375;
          result[4] += 0.87109375;
          result[5] += 0.03515625;
        } else {
          result[0] += 0.01330603889457523;
          result[1] += 0;
          result[2] += 0.016376663254861822;
          result[3] += 0.05015353121801433;
          result[4] += 0.06960081883316274;
          result[5] += 0.8505629477993859;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0.015151515151515152;
          result[1] += 0.19696969696969696;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7803030303030303;
          result[5] += 0.007575757575757576;
        } else {
          result[0] += 0.30284552845528456;
          result[1] += 0.012195121951219513;
          result[2] += 0.024390243902439025;
          result[3] += 0.258130081300813;
          result[4] += 0.12398373983739837;
          result[5] += 0.2784552845528455;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0.425;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.575;
          result[5] += 0;
        } else {
          result[0] += 0.002531645569620253;
          result[1] += 0.9848101265822785;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.010126582278481013;
          result[5] += 0.002531645569620253;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.8416506717850288;
          result[1] += 0.04798464491362764;
          result[2] += 0;
          result[3] += 0.013435700575815739;
          result[4] += 0.0710172744721689;
          result[5] += 0.025911708253358926;
        } else {
          result[0] += 0.22972972972972974;
          result[1] += 0.006756756756756757;
          result[2] += 0.23986486486486486;
          result[3] += 0.28378378378378377;
          result[4] += 0.05067567567567568;
          result[5] += 0.1891891891891892;
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.04;
          result[3] += 0.12;
          result[4] += 0.08;
          result[5] += 0.76;
        } else {
          result[0] += 0;
          result[1] += 0.017543859649122806;
          result[2] += 0.07017543859649122;
          result[3] += 0.7543859649122807;
          result[4] += 0.017543859649122806;
          result[5] += 0.14035087719298245;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0.1;
          result[1] += 0.04;
          result[2] += 0.38;
          result[3] += 0.28;
          result[4] += 0.09;
          result[5] += 0.11;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9523809523809523;
          result[3] += 0.047619047619047616;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0.0625;
          result[1] += 0;
          result[2] += 0.575;
          result[3] += 0.05;
          result[4] += 0.025;
          result[5] += 0.2875;
        } else {
          result[0] += 0.9117647058823529;
          result[1] += 0;
          result[2] += 0.08823529411764706;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0.009433962264150943;
          result[1] += 0;
          result[2] += 0.7452830188679245;
          result[3] += 0.21226415094339623;
          result[4] += 0;
          result[5] += 0.0330188679245283;
        } else {
          result[0] += 0.004830917874396135;
          result[1] += 0;
          result[2] += 0.9597423510466989;
          result[3] += 0.03542673107890499;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0.009836065573770493;
          result[1] += 0.05245901639344262;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8852459016393442;
          result[5] += 0.05245901639344262;
        } else {
          result[0] += 0.6220472440944882;
          result[1] += 0.027559055118110236;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2125984251968504;
          result[5] += 0.1377952755905512;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0.0014534883720930232;
          result[1] += 0;
          result[2] += 0.007267441860465116;
          result[3] += 0.029069767441860465;
          result[4] += 0.030523255813953487;
          result[5] += 0.9316860465116279;
        } else {
          result[0] += 0.03767123287671233;
          result[1] += 0.015410958904109588;
          result[2] += 0.005136986301369863;
          result[3] += 0.2945205479452055;
          result[4] += 0.13527397260273974;
          result[5] += 0.511986301369863;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.36363636363636365;
          result[3] += 0;
          result[4] += 0.6363636363636364;
          result[5] += 0;
        } else {
          result[0] += 0.0022727272727272726;
          result[1] += 0.9840909090909091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.013636363636363636;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.8217122683142102;
          result[1] += 0.03618711385701678;
          result[2] += 0.0044130626654898504;
          result[3] += 0.030891438658428954;
          result[4] += 0.08384819064430717;
          result[5] += 0.022947925860547225;
        } else {
          result[0] += 0.1821561338289963;
          result[1] += 0.0037174721189591076;
          result[2] += 0.17100371747211895;
          result[3] += 0.30855018587360594;
          result[4] += 0.137546468401487;
          result[5] += 0.1970260223048327;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.030303030303030304;
          result[3] += 0.8787878787878788;
          result[4] += 0;
          result[5] += 0.09090909090909091;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.6666666666666666;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07407407407407407;
          result[3] += 0.48148148148148145;
          result[4] += 0;
          result[5] += 0.4444444444444444;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5979381443298969;
          result[3] += 0.32989690721649484;
          result[4] += 0;
          result[5] += 0.07216494845360824;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.43103448275862066;
          result[3] += 0.39655172413793105;
          result[4] += 0;
          result[5] += 0.1724137931034483;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7802197802197802;
          result[3] += 0.2087912087912088;
          result[4] += 0;
          result[5] += 0.01098901098901099;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42f50000))) ) ) {
          result[0] += 0.01668806161745828;
          result[1] += 0;
          result[2] += 0.9216944801026957;
          result[3] += 0.05391527599486521;
          result[4] += 0.0025673940949935813;
          result[5] += 0.005134788189987163;
        } else {
          result[0] += 0.2592592592592593;
          result[1] += 0;
          result[2] += 0.7222222222222223;
          result[3] += 0.01851851851851852;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0.004672897196261683;
          result[1] += 0.009345794392523366;
          result[2] += 0.009345794392523366;
          result[3] += 0;
          result[4] += 0.9626168224299066;
          result[5] += 0.014018691588785048;
        } else {
          result[0] += 0.030612244897959183;
          result[1] += 0;
          result[2] += 0.04081632653061224;
          result[3] += 0.05102040816326531;
          result[4] += 0.5306122448979592;
          result[5] += 0.3469387755102041;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0.03594771241830065;
          result[1] += 0.018518518518518517;
          result[2] += 0;
          result[3] += 0.046840958605664486;
          result[4] += 0.049019607843137254;
          result[5] += 0.8496732026143791;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.036544850498338874;
          result[3] += 0.5647840531561462;
          result[4] += 0.023255813953488372;
          result[5] += 0.3754152823920266;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42420000))) ) ) {
          result[0] += 0;
          result[1] += 0.9948320413436692;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.00516795865633075;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.4431818181818182;
          result[2] += 0;
          result[3] += 0.07954545454545454;
          result[4] += 0.4772727272727273;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.805379746835443;
          result[1] += 0.03560126582278481;
          result[2] += 0.007120253164556962;
          result[3] += 0.015822784810126583;
          result[4] += 0.10917721518987342;
          result[5] += 0.02689873417721519;
        } else {
          result[0] += 0.14512471655328799;
          result[1] += 0.02040816326530612;
          result[2] += 0.1564625850340136;
          result[3] += 0.2766439909297052;
          result[4] += 0.09297052154195011;
          result[5] += 0.30839002267573695;
        }
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4285714285714286;
          result[3] += 0.28571428571428575;
          result[4] += 0.28571428571428575;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.029411764705882353;
          result[3] += 0.8529411764705882;
          result[4] += 0;
          result[5] += 0.11764705882352941;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0.0196078431372549;
          result[1] += 0;
          result[2] += 0.5294117647058824;
          result[3] += 0.27450980392156865;
          result[4] += 0;
          result[5] += 0.17647058823529413;
        } else {
          result[0] += 0.012345679012345678;
          result[1] += 0;
          result[2] += 0.7818930041152263;
          result[3] += 0.1934156378600823;
          result[4] += 0;
          result[5] += 0.012345679012345678;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6428571428571429;
          result[3] += 0.21428571428571427;
          result[4] += 0;
          result[5] += 0.14285714285714285;
        } else {
          result[0] += 0.004392386530014641;
          result[1] += 0;
          result[2] += 0.9560761346998536;
          result[3] += 0.03513909224011713;
          result[4] += 0;
          result[5] += 0.004392386530014641;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42da0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.09523809523809523;
          result[1] += 0;
          result[2] += 0.9047619047619048;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42240000))) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.990521327014218;
          result[5] += 0.009478672985781991;
        } else {
          result[0] += 0;
          result[1] += 0.047619047619047616;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5952380952380952;
          result[5] += 0.35714285714285715;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42660000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0015015015015015015;
          result[3] += 0.02252252252252252;
          result[4] += 0.012012012012012012;
          result[5] += 0.963963963963964;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0.82;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.18;
          result[5] += 0;
        } else {
          result[0] += 0.003472222222222222;
          result[1] += 0.019097222222222224;
          result[2] += 0.041666666666666664;
          result[3] += 0.3489583333333333;
          result[4] += 0.06076388888888889;
          result[5] += 0.5260416666666666;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0.020202020202020204;
          result[1] += 0.13131313131313133;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8181818181818182;
          result[5] += 0.030303030303030304;
        } else {
          result[0] += 0.0021459227467811154;
          result[1] += 0.9527896995708153;
          result[2] += 0;
          result[3] += 0.017167381974248924;
          result[4] += 0.017167381974248924;
          result[5] += 0.010729613733905578;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.8621848739495797;
          result[1] += 0.016806722689075626;
          result[2] += 0;
          result[3] += 0.021008403361344536;
          result[4] += 0.0815126050420168;
          result[5] += 0.01848739495798319;
        } else {
          result[0] += 0.23717948717948717;
          result[1] += 0.04807692307692308;
          result[2] += 0.08333333333333333;
          result[3] += 0.1987179487179487;
          result[4] += 0.14743589743589744;
          result[5] += 0.28525641025641024;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08163265306122448;
          result[3] += 0.3469387755102041;
          result[4] += 0;
          result[5] += 0.5714285714285714;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4966887417218543;
          result[3] += 0.4105960264900662;
          result[4] += 0;
          result[5] += 0.09271523178807947;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0.23655913978494628;
          result[1] += 0;
          result[2] += 0.39784946236559143;
          result[3] += 0.16129032258064518;
          result[4] += 0.06451612903225808;
          result[5] += 0.13978494623655915;
        } else {
          result[0] += 0.00995575221238938;
          result[1] += 0;
          result[2] += 0.8971238938053098;
          result[3] += 0.07632743362831858;
          result[4] += 0.0022123893805309734;
          result[5] += 0.014380530973451327;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0.011152416356877323;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9702602230483272;
          result[5] += 0.01858736059479554;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04081632653061224;
          result[4] += 0.5714285714285714;
          result[5] += 0.3877551020408163;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0.0014245014245014246;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03418803418803419;
          result[4] += 0.038461538461538464;
          result[5] += 0.9259259259259259;
        } else {
          result[0] += 0.13272727272727272;
          result[1] += 0.056363636363636366;
          result[2] += 0.02181818181818182;
          result[3] += 0.2963636363636364;
          result[4] += 0.06181818181818182;
          result[5] += 0.4309090909090909;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0.038461538461538464;
          result[1] += 0.3076923076923077;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6538461538461539;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.800476947535771;
          result[1] += 0.022257551669316374;
          result[2] += 0.008744038155802861;
          result[3] += 0.03656597774244833;
          result[4] += 0.08664546899841018;
          result[5] += 0.04531001589825119;
        } else {
          result[0] += 0.23636363636363636;
          result[1] += 0.02077922077922078;
          result[2] += 0.2545454545454545;
          result[3] += 0.2805194805194805;
          result[4] += 0.03636363636363636;
          result[5] += 0.17142857142857143;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d60000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.30303030303030304;
          result[4] += 0.030303030303030304;
          result[5] += 0.6666666666666666;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.22727272727272727;
          result[3] += 0.7272727272727273;
          result[4] += 0;
          result[5] += 0.045454545454545456;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16666666666666666;
          result[3] += 0.08333333333333333;
          result[4] += 0.08333333333333333;
          result[5] += 0.6666666666666666;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.1;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0.003355704697986577;
          result[2] += 0.7751677852348994;
          result[3] += 0.17785234899328858;
          result[4] += 0.006711409395973154;
          result[5] += 0.03691275167785235;
        } else {
          result[0] += 0;
          result[1] += 0.0032733224222585926;
          result[2] += 0.955810147299509;
          result[3] += 0.03927986906710311;
          result[4] += 0;
          result[5] += 0.0016366612111292963;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0.9333333333333333;
          result[1] += 0;
          result[2] += 0.06666666666666667;
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
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0.01098901098901099;
          result[2] += 0;
          result[3] += 0.018315018315018316;
          result[4] += 0.9194139194139194;
          result[5] += 0.05128205128205128;
        } else {
          result[0] += 0;
          result[1] += 0.9655172413793104;
          result[2] += 0;
          result[3] += 0.034482758620689655;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0.045081967213114756;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04405737704918033;
          result[4] += 0.0932377049180328;
          result[5] += 0.8176229508196722;
        } else {
          result[0] += 0.013100436681222707;
          result[1] += 0;
          result[2] += 0.039301310043668124;
          result[3] += 0.5502183406113537;
          result[4] += 0.017467248908296942;
          result[5] += 0.3799126637554585;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0.059322033898305086;
          result[1] += 0.3008474576271186;
          result[2] += 0.03389830508474576;
          result[3] += 0.0423728813559322;
          result[4] += 0.4830508474576271;
          result[5] += 0.08050847457627118;
        } else {
          result[0] += 0.7288686605981795;
          result[1] += 0.016254876462938883;
          result[2] += 0.03706111833550065;
          result[3] += 0.0741222366710013;
          result[4] += 0.06046814044213264;
          result[5] += 0.08322496749024708;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b80000))) ) ) {
          result[0] += 0;
          result[1] += 0.5;
          result[2] += 0;
          result[3] += 0.5;
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
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09259259259259259;
          result[3] += 0.5740740740740741;
          result[4] += 0;
          result[5] += 0.3333333333333333;
        } else {
          result[0] += 0;
          result[1] += 0.15625;
          result[2] += 0.4375;
          result[3] += 0.125;
          result[4] += 0.03125;
          result[5] += 0.25;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0.11428571428571428;
          result[1] += 0.02857142857142857;
          result[2] += 0.2857142857142857;
          result[3] += 0.17142857142857143;
          result[4] += 0;
          result[5] += 0.4;
        } else {
          result[0] += 0.06666666666666667;
          result[1] += 0;
          result[2] += 0.8;
          result[3] += 0.13333333333333333;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0.8333333333333334;
          result[1] += 0;
          result[2] += 0.16666666666666666;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.027190332326283987;
          result[1] += 0;
          result[2] += 0.7945619335347432;
          result[3] += 0.1510574018126888;
          result[4] += 0;
          result[5] += 0.027190332326283987;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42940000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.5;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9768211920529801;
          result[3] += 0.023178807947019868;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0.010362694300518135;
          result[1] += 0.015544041450777202;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9689119170984456;
          result[5] += 0.0051813471502590676;
        } else {
          result[0] += 0.3274336283185841;
          result[1] += 0;
          result[2] += 0.061946902654867256;
          result[3] += 0;
          result[4] += 0.3008849557522124;
          result[5] += 0.30973451327433627;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0.031512605042016806;
          result[2] += 0.0010504201680672268;
          result[3] += 0.05777310924369748;
          result[4] += 0.046218487394957986;
          result[5] += 0.8634453781512605;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0058823529411764705;
          result[3] += 0.7176470588235294;
          result[4] += 0;
          result[5] += 0.27647058823529413;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0;
          result[1] += 0.42857142857142855;
          result[2] += 0;
          result[3] += 0.16326530612244897;
          result[4] += 0.40816326530612246;
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
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.7356076759061834;
          result[1] += 0.04051172707889126;
          result[2] += 0.0014214641080312722;
          result[3] += 0.031982942430703626;
          result[4] += 0.14285714285714285;
          result[5] += 0.047619047619047616;
        } else {
          result[0] += 0.19545454545454546;
          result[1] += 0.025;
          result[2] += 0.21818181818181817;
          result[3] += 0.26136363636363635;
          result[4] += 0.0659090909090909;
          result[5] += 0.2340909090909091;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.24242424242424243;
          result[3] += 0.6363636363636364;
          result[4] += 0;
          result[5] += 0.12121212121212122;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07142857142857142;
          result[3] += 0.7857142857142857;
          result[4] += 0;
          result[5] += 0.14285714285714285;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.708029197080292;
          result[3] += 0.1897810218978102;
          result[4] += 0;
          result[5] += 0.10218978102189781;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0.2;
          result[1] += 0;
          result[2] += 0.6888888888888889;
          result[3] += 0.022222222222222223;
          result[4] += 0.022222222222222223;
          result[5] += 0.06666666666666667;
        } else {
          result[0] += 0.014457831325301205;
          result[1] += 0;
          result[2] += 0.9313253012048193;
          result[3] += 0.05060240963855422;
          result[4] += 0;
          result[5] += 0.0036144578313253013;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0.003952569169960474;
          result[1] += 0.007905138339920948;
          result[2] += 0.02766798418972332;
          result[3] += 0;
          result[4] += 0.9169960474308301;
          result[5] += 0.043478260869565216;
        } else {
          result[0] += 0;
          result[1] += 0.9166666666666666;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.08333333333333333;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0.019916142557651992;
          result[1] += 0.0041928721174004195;
          result[2] += 0;
          result[3] += 0.04507337526205451;
          result[4] += 0.07337526205450734;
          result[5] += 0.8574423480083857;
        } else {
          result[0] += 0.06970509383378017;
          result[1] += 0.00804289544235925;
          result[2] += 0.04825737265415549;
          result[3] += 0.4745308310991957;
          result[4] += 0.045576407506702415;
          result[5] += 0.353887399463807;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0.11475409836065574;
          result[2] += 0;
          result[3] += 0.09836065573770492;
          result[4] += 0.7868852459016393;
          result[5] += 0;
        } else {
          result[0] += 0.00234192037470726;
          result[1] += 0.9672131147540983;
          result[2] += 0.00234192037470726;
          result[3] += 0;
          result[4] += 0.02810304449648712;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.7966640190627482;
          result[1] += 0.025416997617156472;
          result[2] += 0.006354249404289118;
          result[3] += 0.03335980937251787;
          result[4] += 0.09690230341540905;
          result[5] += 0.04130262112787927;
        } else {
          result[0] += 0.24832214765100666;
          result[1] += 0.04026845637583892;
          result[2] += 0.22147651006711405;
          result[3] += 0.261744966442953;
          result[4] += 0.05369127516778522;
          result[5] += 0.17449664429530198;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0425531914893617;
          result[3] += 0.2765957446808511;
          result[4] += 0.0851063829787234;
          result[5] += 0.5957446808510638;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.875;
          result[3] += 0.125;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.05405405405405406;
          result[1] += 0.21621621621621623;
          result[2] += 0.5945945945945946;
          result[3] += 0.08108108108108109;
          result[4] += 0.02702702702702703;
          result[5] += 0.02702702702702703;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6666666666666666;
          result[4] += 0;
          result[5] += 0.3333333333333333;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6739130434782609;
          result[3] += 0.2391304347826087;
          result[4] += 0;
          result[5] += 0.08695652173913043;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0.01818181818181818;
          result[1] += 0;
          result[2] += 0.8484848484848485;
          result[3] += 0.12727272727272726;
          result[4] += 0;
          result[5] += 0.006060606060606061;
        } else {
          result[0] += 0.0018115942028985507;
          result[1] += 0;
          result[2] += 0.9710144927536232;
          result[3] += 0.025362318840579712;
          result[4] += 0;
          result[5] += 0.0018115942028985507;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42be0000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0.016;
          result[1] += 0.029333333333333333;
          result[2] += 0.0026666666666666666;
          result[3] += 0.029333333333333333;
          result[4] += 0.8346666666666667;
          result[5] += 0.088;
        } else {
          result[0] += 0.8401826484018264;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0821917808219178;
          result[5] += 0.0776255707762557;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0.009287925696594427;
          result[2] += 0.0015479876160990713;
          result[3] += 0.047987616099071206;
          result[4] += 0.018575851393188854;
          result[5] += 0.9226006191950464;
        } else {
          result[0] += 0.02910958904109589;
          result[1] += 0.008561643835616438;
          result[2] += 0.0017123287671232876;
          result[3] += 0.3082191780821918;
          result[4] += 0.1506849315068493;
          result[5] += 0.5017123287671232;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42580000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.5208333333333334;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4583333333333333;
          result[5] += 0.020833333333333332;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.8674203494347379;
          result[1] += 0.03186022610483042;
          result[2] += 0.006166495375128468;
          result[3] += 0.029804727646454265;
          result[4] += 0.050359712230215826;
          result[5] += 0.014388489208633094;
        } else {
          result[0] += 0.16864608076009502;
          result[1] += 0.026128266033254157;
          result[2] += 0.2589073634204275;
          result[3] += 0.26365795724465557;
          result[4] += 0.0688836104513064;
          result[5] += 0.21377672209026127;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.40816326530612246;
          result[3] += 0.04081632653061224;
          result[4] += 0.04081632653061224;
          result[5] += 0.5102040816326531;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.21768707482993196;
          result[3] += 0.5986394557823129;
          result[4] += 0.013605442176870748;
          result[5] += 0.17006802721088435;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42bc0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
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
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42910000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0.16666666666666669;
          result[1] += 0.25000000000000006;
          result[2] += 0.41666666666666674;
          result[3] += 0.16666666666666669;
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
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8062015503875969;
          result[3] += 0.18604651162790697;
          result[4] += 0;
          result[5] += 0.007751937984496124;
        } else {
          result[0] += 0.0199468085106383;
          result[1] += 0;
          result[2] += 0.9481382978723404;
          result[3] += 0.030585106382978722;
          result[4] += 0;
          result[5] += 0.0013297872340425532;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0.004524886877828055;
          result[1] += 0;
          result[2] += 0.004524886877828055;
          result[3] += 0.004524886877828055;
          result[4] += 0.9683257918552036;
          result[5] += 0.01809954751131222;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0.018826135105204873;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05758582502768549;
          result[4] += 0.046511627906976744;
          result[5] += 0.8770764119601329;
        } else {
          result[0] += 0.024844720496894408;
          result[1] += 0.040372670807453416;
          result[2] += 0.043478260869565216;
          result[3] += 0.4440993788819876;
          result[4] += 0.043478260869565216;
          result[5] += 0.40372670807453415;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c00000))) ) ) {
          result[0] += 0;
          result[1] += 0.1650485436893204;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7766990291262136;
          result[5] += 0.05825242718446602;
        } else {
          result[0] += 0;
          result[1] += 0.9887640449438202;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.011235955056179775;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0.27912621359223305;
          result[1] += 0.04368932038834952;
          result[2] += 0.01941747572815534;
          result[3] += 0.2572815533980583;
          result[4] += 0.11893203883495147;
          result[5] += 0.28155339805825247;
        } else {
          result[0] += 0.763732129420617;
          result[1] += 0.01655379984951091;
          result[2] += 0.08126410835214447;
          result[3] += 0.03611738148984198;
          result[4] += 0.06847253574115876;
          result[5] += 0.033860045146726865;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42810000))) ) ) {
          result[0] += 0;
          result[1] += 0.4210526315789474;
          result[2] += 0.31578947368421056;
          result[3] += 0.026315789473684213;
          result[4] += 0.2368421052631579;
          result[5] += 0;
        } else {
          result[0] += 0.07608695652173914;
          result[1] += 0.010869565217391304;
          result[2] += 0.10869565217391304;
          result[3] += 0.30434782608695654;
          result[4] += 0.043478260869565216;
          result[5] += 0.45652173913043476;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42990000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.008849557522123894;
          result[1] += 0;
          result[2] += 0.7168141592920354;
          result[3] += 0.20353982300884957;
          result[4] += 0;
          result[5] += 0.07079646017699115;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3793103448275862;
          result[3] += 0.5517241379310345;
          result[4] += 0;
          result[5] += 0.06896551724137931;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.92;
          result[3] += 0.04;
          result[4] += 0;
          result[5] += 0.04;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0.007434944237918215;
          result[1] += 0;
          result[2] += 0.8847583643122676;
          result[3] += 0.10037174721189591;
          result[4] += 0;
          result[5] += 0.007434944237918215;
        } else {
          result[0] += 0.00390625;
          result[1] += 0;
          result[2] += 0.966796875;
          result[3] += 0.029296875;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0.004504504504504505;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9909909909909911;
          result[5] += 0.004504504504504505;
        } else {
          result[0] += 0.04838709677419355;
          result[1] += 0.03225806451612903;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6935483870967742;
          result[5] += 0.22580645161290322;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0.0013908205841446453;
          result[2] += 0;
          result[3] += 0.02086230876216968;
          result[4] += 0.02086230876216968;
          result[5] += 0.9568845618915159;
        } else {
          result[0] += 0.06766917293233082;
          result[1] += 0.013157894736842105;
          result[2] += 0.016917293233082706;
          result[3] += 0.3233082706766917;
          result[4] += 0.06766917293233082;
          result[5] += 0.5112781954887218;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0.288135593220339;
          result[2] += 0;
          result[3] += 0.06779661016949153;
          result[4] += 0.6440677966101694;
          result[5] += 0;
        } else {
          result[0] += 0.002178649237472767;
          result[1] += 0.9847494553376906;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.013071895424836602;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.8213728549141965;
          result[1] += 0.030421216848673948;
          result[2] += 0.0070202808112324495;
          result[3] += 0.028081123244929798;
          result[4] += 0.09906396255850235;
          result[5] += 0.014040561622464899;
        } else {
          result[0] += 0.2736156351791531;
          result[1] += 0;
          result[2] += 0.2247557003257329;
          result[3] += 0.24429967426710097;
          result[4] += 0.05211726384364821;
          result[5] += 0.20521172638436483;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a00000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a60000))) ) ) {
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
          result[4] += 1;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42890000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.041666666666666664;
          result[3] += 0.041666666666666664;
          result[4] += 0;
          result[5] += 0.9166666666666666;
        } else {
          result[0] += 0;
          result[1] += 0.017543859649122806;
          result[2] += 0.17543859649122806;
          result[3] += 0.5789473684210527;
          result[4] += 0.008771929824561403;
          result[5] += 0.21929824561403508;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.36231884057971014;
          result[3] += 0.5362318840579711;
          result[4] += 0;
          result[5] += 0.10144927536231885;
        } else {
          result[0] += 0;
          result[1] += 0.05128205128205128;
          result[2] += 0.6666666666666666;
          result[3] += 0.1794871794871795;
          result[4] += 0;
          result[5] += 0.10256410256410256;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0.36666666666666664;
          result[1] += 0;
          result[2] += 0.26666666666666666;
          result[3] += 0.1;
          result[4] += 0.2;
          result[5] += 0.06666666666666667;
        } else {
          result[0] += 0.006833712984054668;
          result[1] += 0.003416856492027334;
          result[2] += 0.9077448747152618;
          result[3] += 0.0706150341685649;
          result[4] += 0.004555808656036445;
          result[5] += 0.006833712984054668;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cc0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9388646288209607;
          result[5] += 0.0611353711790393;
        } else {
          result[0] += 0;
          result[1] += 0.8333333333333334;
          result[2] += 0;
          result[3] += 0.16666666666666666;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.02276176024279211;
          result[4] += 0.030349013657056147;
          result[5] += 0.9468892261001517;
        } else {
          result[0] += 0.074;
          result[1] += 0.034;
          result[2] += 0.002;
          result[3] += 0.326;
          result[4] += 0.082;
          result[5] += 0.482;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0.07142857142857144;
          result[2] += 0;
          result[3] += 0.07142857142857144;
          result[4] += 0.8214285714285715;
          result[5] += 0.03571428571428572;
        } else {
          result[0] += 0;
          result[1] += 0.9864559819413092;
          result[2] += 0;
          result[3] += 0.013544018058690745;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0.08252427184466021;
          result[1] += 0.2038834951456311;
          result[2] += 0.014563106796116507;
          result[3] += 0.06310679611650487;
          result[4] += 0.5728155339805826;
          result[5] += 0.06310679611650487;
        } else {
          result[0] += 0.6998706338939198;
          result[1] += 0.014230271668822769;
          result[2] += 0.045278137128072445;
          result[3] += 0.07761966364812418;
          result[4] += 0.07115135834411385;
          result[5] += 0.09184993531694696;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2857142857142857;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.7142857142857143;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.10416666666666667;
          result[3] += 0.6458333333333334;
          result[4] += 0;
          result[5] += 0.25;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.95;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.05;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6601941747572816;
          result[3] += 0.22815533980582525;
          result[4] += 0;
          result[5] += 0.11165048543689321;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42940000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.013904982618771726;
          result[1] += 0;
          result[2] += 0.9107763615295481;
          result[3] += 0.0660486674391657;
          result[4] += 0;
          result[5] += 0.009269988412514484;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x423e0000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.007017543859649124;
          result[1] += 0.014035087719298248;
          result[2] += 0;
          result[3] += 0.003508771929824562;
          result[4] += 0.9508771929824562;
          result[5] += 0.024561403508771933;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0.6589147286821706;
          result[1] += 0.07751937984496125;
          result[2] += 0;
          result[3] += 0.007751937984496125;
          result[4] += 0.2170542635658915;
          result[5] += 0.03875968992248063;
        } else {
          result[0] += 0.023674242424242424;
          result[1] += 0;
          result[2] += 0.006628787878787879;
          result[3] += 0.08049242424242424;
          result[4] += 0.08049242424242424;
          result[5] += 0.8087121212121212;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.004830917874396135;
          result[1] += 0.9734299516908212;
          result[2] += 0;
          result[3] += 0.007246376811594203;
          result[4] += 0.014492753623188406;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.7898957497995189;
          result[1] += 0.045709703287890945;
          result[2] += 0.001603849238171612;
          result[3] += 0.0392943063352045;
          result[4] += 0.08500400962309544;
          result[5] += 0.03849238171611869;
        } else {
          result[0] += 0.1635434412265758;
          result[1] += 0.015332197614991482;
          result[2] += 0.1362862010221465;
          result[3] += 0.3577512776831346;
          result[4] += 0.04770017035775128;
          result[5] += 0.27938671209540034;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.125;
          result[3] += 0.8125;
          result[4] += 0;
          result[5] += 0.0625;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.28125;
          result[3] += 0.375;
          result[4] += 0;
          result[5] += 0.34375;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.7;
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
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0.013123359580052493;
          result[1] += 0;
          result[2] += 0.7900262467191601;
          result[3] += 0.16535433070866143;
          result[4] += 0;
          result[5] += 0.031496062992125984;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0.024;
          result[1] += 0;
          result[2] += 0.848;
          result[3] += 0.128;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.002145922746781116;
          result[1] += 0;
          result[2] += 0.9828326180257511;
          result[3] += 0.015021459227467811;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0.010948905109489052;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9233576642335767;
          result[5] += 0.06569343065693431;
        } else {
          result[0] += 0;
          result[1] += 0.875;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.125;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.012326656394453005;
          result[4] += 0.030816640986132512;
          result[5] += 0.9568567026194145;
        } else {
          result[0] += 0.07142857142857142;
          result[1] += 0.01050420168067227;
          result[2] += 0.004201680672268907;
          result[3] += 0.31932773109243695;
          result[4] += 0.07352941176470588;
          result[5] += 0.5210084033613446;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9975308641975309;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0024691358024691358;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0.2076923076923077;
          result[1] += 0.023076923076923078;
          result[2] += 0.010256410256410256;
          result[3] += 0.17435897435897435;
          result[4] += 0.2512820512820513;
          result[5] += 0.3333333333333333;
        } else {
          result[0] += 0.7675471698113209;
          result[1] += 0.027924528301886797;
          result[2] += 0.031698113207547174;
          result[3] += 0.0339622641509434;
          result[4] += 0.10641509433962265;
          result[5] += 0.032452830188679255;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0.012658227848101266;
          result[1] += 0.06329113924050633;
          result[2] += 0.13924050632911392;
          result[3] += 0.17721518987341772;
          result[4] += 0.08860759493670886;
          result[5] += 0.5189873417721519;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0.6814814814814815;
          result[4] += 0;
          result[5] += 0.11851851851851852;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3125;
          result[3] += 0;
          result[4] += 0.0625;
          result[5] += 0.625;
        } else {
          result[0] += 0.045871559633027525;
          result[1] += 0;
          result[2] += 0.6605504587155964;
          result[3] += 0.22935779816513763;
          result[4] += 0;
          result[5] += 0.06422018348623854;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0.0033112582781456954;
          result[1] += 0.013245033112582781;
          result[2] += 0.8013245033112583;
          result[3] += 0.152317880794702;
          result[4] += 0;
          result[5] += 0.029801324503311258;
        } else {
          result[0] += 0.6875;
          result[1] += 0;
          result[2] += 0.28125;
          result[3] += 0.03125;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42890000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.011965811965811967;
          result[1] += 0;
          result[2] += 0.9641025641025641;
          result[3] += 0.018803418803418803;
          result[4] += 0;
          result[5] += 0.005128205128205128;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0.01677852348993289;
          result[1] += 0.0033557046979865775;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9161073825503356;
          result[5] += 0.06375838926174499;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0.040100250626566414;
          result[1] += 0.002506265664160401;
          result[2] += 0.002506265664160401;
          result[3] += 0.042606516290726815;
          result[4] += 0.03258145363408521;
          result[5] += 0.8796992481203008;
        } else {
          result[0] += 0.062162162162162166;
          result[1] += 0.013513513513513514;
          result[2] += 0;
          result[3] += 0.4648648648648649;
          result[4] += 0.024324324324324326;
          result[5] += 0.43513513513513513;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 0.4090909090909091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5909090909090909;
          result[5] += 0;
        } else {
          result[0] += 0.004576659038901602;
          result[1] += 0.988558352402746;
          result[2] += 0;
          result[3] += 0.004576659038901602;
          result[4] += 0.002288329519450801;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42890000))) ) ) {
          result[0] += 0.10504201680672269;
          result[1] += 0.25630252100840334;
          result[2] += 0.03361344537815126;
          result[3] += 0.012605042016806723;
          result[4] += 0.5546218487394958;
          result[5] += 0.037815126050420166;
        } else {
          result[0] += 0.6907936507936508;
          result[1] += 0.006349206349206349;
          result[2] += 0.07936507936507936;
          result[3] += 0.09015873015873016;
          result[4] += 0.061587301587301586;
          result[5] += 0.07174603174603175;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0945945945945946;
          result[3] += 0.35135135135135137;
          result[4] += 0.06756756756756757;
          result[5] += 0.4864864864864865;
        } else {
          result[0] += 0.037037037037037035;
          result[1] += 0.2962962962962963;
          result[2] += 0.48148148148148145;
          result[3] += 0.14814814814814814;
          result[4] += 0.037037037037037035;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.012658227848101266;
          result[1] += 0;
          result[2] += 0.8607594936708861;
          result[3] += 0.10126582278481013;
          result[4] += 0;
          result[5] += 0.02531645569620253;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09090909090909091;
          result[3] += 0.18181818181818182;
          result[4] += 0;
          result[5] += 0.7272727272727273;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.013157894736842105;
          result[1] += 0;
          result[2] += 0.9318181818181818;
          result[3] += 0.045454545454545456;
          result[4] += 0;
          result[5] += 0.009569377990430622;
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428d0000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0.004405286343612335;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9911894273127754;
          result[5] += 0.004405286343612335;
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
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0.07142857142857142;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4642857142857143;
          result[5] += 0.4642857142857143;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.029336734693877552;
          result[4] += 0.02295918367346939;
          result[5] += 0.9477040816326531;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0.022900763358778626;
          result[1] += 0;
          result[2] += 0.022900763358778626;
          result[3] += 0.2366412213740458;
          result[4] += 0.030534351145038167;
          result[5] += 0.6870229007633588;
        } else {
          result[0] += 0.011494252873563218;
          result[1] += 0.08045977011494253;
          result[2] += 0.06321839080459771;
          result[3] += 0.5402298850574713;
          result[4] += 0.011494252873563218;
          result[5] += 0.29310344827586204;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42420000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 0.9800884955752213;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.01991150442477876;
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
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0.38184791496320525;
          result[1] += 0.06459525756336877;
          result[2] += 0.03515944399018806;
          result[3] += 0.1561733442354865;
          result[4] += 0.20932134096484056;
          result[5] += 0.15290269828291086;
        } else {
          result[0] += 0.8975535168195719;
          result[1] += 0;
          result[2] += 0.053516819571865444;
          result[3] += 0.019877675840978593;
          result[4] += 0.00764525993883792;
          result[5] += 0.021406727828746176;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0.023809523809523808;
          result[1] += 0.05952380952380952;
          result[2] += 0.08333333333333333;
          result[3] += 0.6190476190476191;
          result[4] += 0.011904761904761904;
          result[5] += 0.20238095238095238;
        } else {
          result[0] += 0.008547008547008548;
          result[1] += 0.01282051282051282;
          result[2] += 0.5982905982905983;
          result[3] += 0.32051282051282054;
          result[4] += 0;
          result[5] += 0.05982905982905983;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.5294117647058824;
          result[1] += 0;
          result[2] += 0.4411764705882353;
          result[3] += 0.029411764705882353;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.008860759493670886;
          result[1] += 0;
          result[2] += 0.9379746835443038;
          result[3] += 0.053164556962025315;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0.03900709219858156;
          result[1] += 0.028368794326241134;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8085106382978723;
          result[5] += 0.12411347517730496;
        } else {
          result[0] += 0.6294642857142857;
          result[1] += 0.08482142857142858;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2857142857142857;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0.0022701475595913734;
          result[1] += 0.0022701475595913734;
          result[2] += 0;
          result[3] += 0.04199772985244041;
          result[4] += 0.03745743473325766;
          result[5] += 0.9160045402951191;
        } else {
          result[0] += 0.036328871892925434;
          result[1] += 0.017208413001912046;
          result[2] += 0.0248565965583174;
          result[3] += 0.4722753346080306;
          result[4] += 0.07648183556405354;
          result[5] += 0.372848948374761;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0.036585365853658534;
          result[1] += 0.21951219512195122;
          result[2] += 0.024390243902439025;
          result[3] += 0.012195121951219513;
          result[4] += 0.6707317073170732;
          result[5] += 0.036585365853658534;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0.8237924865831843;
          result[1] += 0.04830053667262969;
          result[2] += 0.012522361359570662;
          result[3] += 0.027728085867620753;
          result[4] += 0.05992844364937388;
          result[5] += 0.027728085867620753;
        } else {
          result[0] += 0.1875;
          result[1] += 0.017857142857142856;
          result[2] += 0.42410714285714285;
          result[3] += 0.16071428571428573;
          result[4] += 0.05357142857142857;
          result[5] += 0.15625;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42980000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0;
          result[4] += 0.625;
          result[5] += 0.125;
        } else {
          result[0] += 0.022727272727272728;
          result[1] += 0.022727272727272728;
          result[2] += 0.022727272727272728;
          result[3] += 0.11363636363636363;
          result[4] += 0.1590909090909091;
          result[5] += 0.6590909090909091;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0.018018018018018018;
          result[2] += 0.3333333333333333;
          result[3] += 0.4594594594594595;
          result[4] += 0;
          result[5] += 0.1891891891891892;
        } else {
          result[0] += 0.06451612903225808;
          result[1] += 0;
          result[2] += 0.7419354838709679;
          result[3] += 0.13978494623655915;
          result[4] += 0.021505376344086027;
          result[5] += 0.03225806451612904;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0.8571428571428571;
          result[1] += 0.14285714285714285;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.01098901098901099;
          result[1] += 0.007326007326007326;
          result[2] += 0.8058608058608059;
          result[3] += 0.15384615384615385;
          result[4] += 0.003663003663003663;
          result[5] += 0.018315018315018316;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0.009259259259259259;
          result[1] += 0;
          result[2] += 0.8888888888888888;
          result[3] += 0.09259259259259259;
          result[4] += 0;
          result[5] += 0.009259259259259259;
        } else {
          result[0] += 0.002380952380952381;
          result[1] += 0;
          result[2] += 0.9880952380952381;
          result[3] += 0.009523809523809525;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42c40000))) ) ) {
          result[0] += 0.005970149253731343;
          result[1] += 0.0029850746268656717;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9701492537313433;
          result[5] += 0.020895522388059702;
        } else {
          result[0] += 0;
          result[1] += 0.6666666666666666;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3333333333333333;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0.5510204081632653;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4489795918367347;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9869848156182213;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.013015184381778741;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0.03985932004689332;
          result[1] += 0.0035169988276670576;
          result[2] += 0;
          result[3] += 0.04572098475967175;
          result[4] += 0.03634232121922626;
          result[5] += 0.8745603751465416;
        } else {
          result[0] += 0.043227665706051875;
          result[1] += 0.03170028818443804;
          result[2] += 0.01440922190201729;
          result[3] += 0.515850144092219;
          result[4] += 0.043227665706051875;
          result[5] += 0.3515850144092219;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.8397070789259561;
          result[1] += 0.010577705451586655;
          result[2] += 0;
          result[3] += 0.03498779495524817;
          result[4] += 0.096826688364524;
          result[5] += 0.01790073230268511;
        } else {
          result[0] += 0.15776699029126215;
          result[1] += 0.03155339805825243;
          result[2] += 0.220873786407767;
          result[3] += 0.24514563106796117;
          result[4] += 0.0825242718446602;
          result[5] += 0.2621359223300971;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05172413793103448;
          result[3] += 0.13793103448275862;
          result[4] += 0.034482758620689655;
          result[5] += 0.7758620689655172;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4;
          result[3] += 0.6;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.15217391304347827;
          result[3] += 0.6521739130434783;
          result[4] += 0.021739130434782608;
          result[5] += 0.17391304347826086;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7428571428571429;
          result[3] += 0.05714285714285714;
          result[4] += 0.02857142857142857;
          result[5] += 0.17142857142857143;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0.04000000000000001;
          result[2] += 0.48000000000000004;
          result[3] += 0.3733333333333334;
          result[4] += 0.026666666666666672;
          result[5] += 0.08000000000000002;
        } else {
          result[0] += 0.034810126582278486;
          result[1] += 0;
          result[2] += 0.7974683544303799;
          result[3] += 0.15506329113924053;
          result[4] += 0;
          result[5] += 0.012658227848101267;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6129032258064516;
          result[3] += 0.25806451612903225;
          result[4] += 0;
          result[5] += 0.12903225806451613;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9746835443037974;
          result[3] += 0.02531645569620253;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cc0000))) ) ) {
          result[0] += 0.011811023622047244;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9212598425196851;
          result[5] += 0.06692913385826772;
        } else {
          result[0] += 0;
          result[1] += 0.2916666666666667;
          result[2] += 0;
          result[3] += 0.625;
          result[4] += 0.08333333333333333;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0.002642007926023778;
          result[1] += 0;
          result[2] += 0.001321003963011889;
          result[3] += 0.02774108322324967;
          result[4] += 0.03038309114927345;
          result[5] += 0.9379128137384413;
        } else {
          result[0] += 0.12919463087248323;
          result[1] += 0.018456375838926176;
          result[2] += 0.0050335570469798654;
          result[3] += 0.3104026845637584;
          result[4] += 0.08389261744966443;
          result[5] += 0.45302013422818793;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
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
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.7770849571317223;
          result[1] += 0.045985970381917374;
          result[2] += 0.003897116134060794;
          result[3] += 0.014809041309431017;
          result[4] += 0.14497272018706156;
          result[5] += 0.0132501948558067;
        } else {
          result[0] += 0.1875;
          result[1] += 0.0026041666666666665;
          result[2] += 0.2265625;
          result[3] += 0.2708333333333333;
          result[4] += 0.0390625;
          result[5] += 0.2734375;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ac0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9565217391304348;
          result[4] += 0;
          result[5] += 0.043478260869565216;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.5;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.422680412371134;
          result[3] += 0.422680412371134;
          result[4] += 0;
          result[5] += 0.15463917525773196;
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
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0.02147239263803681;
          result[1] += 0;
          result[2] += 0.8067484662576687;
          result[3] += 0.13190184049079753;
          result[4] += 0;
          result[5] += 0.03987730061349693;
        } else {
          result[0] += 0.38461538461538464;
          result[1] += 0;
          result[2] += 0.4230769230769231;
          result[3] += 0.15384615384615385;
          result[4] += 0.038461538461538464;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.5;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9613356766256591;
          result[3] += 0.03514938488576451;
          result[4] += 0;
          result[5] += 0.00351493848857645;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0.003861003861003861;
          result[1] += 0.019305019305019305;
          result[2] += 0;
          result[3] += 0.011583011583011582;
          result[4] += 0.8957528957528957;
          result[5] += 0.0694980694980695;
        } else {
          result[0] += 0.560344827586207;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.008620689655172415;
          result[4] += 0.12931034482758624;
          result[5] += 0.30172413793103453;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42780000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.041666666666666664;
          result[3] += 0.041666666666666664;
          result[4] += 0.875;
          result[5] += 0.041666666666666664;
        } else {
          result[0] += 0.0033149171270718232;
          result[1] += 0.0011049723756906078;
          result[2] += 0;
          result[3] += 0.05082872928176796;
          result[4] += 0.02983425414364641;
          result[5] += 0.9149171270718232;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0.4418604651162791;
          result[2] += 0.046511627906976744;
          result[3] += 0;
          result[4] += 0.5116279069767442;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9956896551724138;
          result[2] += 0;
          result[3] += 0.004310344827586207;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.7580044676098288;
          result[1] += 0.03127326880119136;
          result[2] += 0.011913626209977662;
          result[3] += 0.05658972449739389;
          result[4] += 0.0967982129560685;
          result[5] += 0.045420699925539834;
        } else {
          result[0] += 0.1317365269461078;
          result[1] += 0.005988023952095809;
          result[2] += 0.16966067864271456;
          result[3] += 0.3772455089820359;
          result[4] += 0.0718562874251497;
          result[5] += 0.2435129740518962;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 0.0136986301369863;
          result[2] += 0.0273972602739726;
          result[3] += 0.3424657534246575;
          result[4] += 0.0547945205479452;
          result[5] += 0.5616438356164384;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16853932584269662;
          result[3] += 0.651685393258427;
          result[4] += 0;
          result[5] += 0.1797752808988764;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0.06896551724137931;
          result[2] += 0.3103448275862069;
          result[3] += 0.41379310344827586;
          result[4] += 0;
          result[5] += 0.20689655172413793;
        } else {
          result[0] += 0.05384615384615385;
          result[1] += 0;
          result[2] += 0.7615384615384615;
          result[3] += 0.16153846153846155;
          result[4] += 0;
          result[5] += 0.023076923076923078;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0.6;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0;
          result[4] += 0.06666666666666667;
          result[5] += 0;
        } else {
          result[0] += 0.008578431372549022;
          result[1] += 0.006127450980392158;
          result[2] += 0.9142156862745099;
          result[3] += 0.06495098039215688;
          result[4] += 0;
          result[5] += 0.006127450980392158;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42d70000))) ) ) {
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
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0.01968503937007874;
          result[1] += 0.015748031496062992;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9448818897637795;
          result[5] += 0.01968503937007874;
        } else {
          result[0] += 0;
          result[1] += 0.6666666666666667;
          result[2] += 0;
          result[3] += 0.16666666666666669;
          result[4] += 0;
          result[5] += 0.16666666666666669;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0.018867924528301886;
          result[1] += 0.023307436182019976;
          result[2] += 0;
          result[3] += 0.05327413984461709;
          result[4] += 0.04772475027746948;
          result[5] += 0.8568257491675916;
        } else {
          result[0] += 0.12135922330097088;
          result[1] += 0.009708737864077669;
          result[2] += 0.009708737864077669;
          result[3] += 0.3883495145631068;
          result[4] += 0.06553398058252427;
          result[5] += 0.4053398058252427;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0.24050632911392406;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.759493670886076;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9840909090909091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.015909090909090907;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.8433641975308642;
          result[1] += 0.026234567901234566;
          result[2] += 0.0030864197530864196;
          result[3] += 0.03009259259259259;
          result[4] += 0.08487654320987655;
          result[5] += 0.012345679012345678;
        } else {
          result[0] += 0.15862068965517243;
          result[1] += 0.020689655172413793;
          result[2] += 0.18275862068965518;
          result[3] += 0.22758620689655173;
          result[4] += 0.13793103448275862;
          result[5] += 0.27241379310344827;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ab0000))) ) ) {
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
          result[2] += 0.2962962962962963;
          result[3] += 0.5291005291005291;
          result[4] += 0;
          result[5] += 0.1746031746031746;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8695652173913043;
          result[3] += 0;
          result[4] += 0.043478260869565216;
          result[5] += 0.08695652173913043;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6818181818181818;
          result[3] += 0.3181818181818182;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6111111111111112;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.3888888888888889;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0.05517241379310345;
          result[1] += 0;
          result[2] += 0.7931034482758621;
          result[3] += 0.1310344827586207;
          result[4] += 0;
          result[5] += 0.020689655172413793;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9675213675213675;
          result[3] += 0.02905982905982906;
          result[4] += 0;
          result[5] += 0.003418803418803419;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8983050847457628;
          result[5] += 0.1016949152542373;
        } else {
          result[0] += 0.004405286343612335;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9911894273127754;
          result[5] += 0.004405286343612335;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0.0027359781121751026;
          result[1] += 0.0027359781121751026;
          result[2] += 0;
          result[3] += 0.015047879616963064;
          result[4] += 0.03556771545827633;
          result[5] += 0.9439124487004104;
        } else {
          result[0] += 0.08481262327416174;
          result[1] += 0.005917159763313609;
          result[2] += 0.013806706114398421;
          result[3] += 0.3214990138067061;
          result[4] += 0.09664694280078895;
          result[5] += 0.47731755424063116;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0;
          result[1] += 0.17307692307692307;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8269230769230769;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9888888888888889;
          result[2] += 0;
          result[3] += 0.0044444444444444444;
          result[4] += 0.006666666666666667;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.8181069958847736;
          result[1] += 0.031275720164609055;
          result[2] += 0.0008230452674897119;
          result[3] += 0.03209876543209877;
          result[4] += 0.10452674897119342;
          result[5] += 0.01316872427983539;
        } else {
          result[0] += 0.16209476309226933;
          result[1] += 0.02743142144638404;
          result[2] += 0.2169576059850374;
          result[3] += 0.24438902743142144;
          result[4] += 0.1396508728179551;
          result[5] += 0.20947630922693267;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.04;
          result[3] += 0.08;
          result[4] += 0;
          result[5] += 0.88;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0;
          result[4] += 0.25;
          result[5] += 0.25;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0.043478260869565216;
          result[2] += 0.2;
          result[3] += 0.6;
          result[4] += 0.008695652173913044;
          result[5] += 0.14782608695652175;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7;
          result[3] += 0.1;
          result[4] += 0;
          result[5] += 0.2;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0.027027027027027032;
          result[1] += 0;
          result[2] += 0.5675675675675677;
          result[3] += 0.13513513513513517;
          result[4] += 0.054054054054054064;
          result[5] += 0.21621621621621626;
        } else {
          result[0] += 0.7575757575757576;
          result[1] += 0.030303030303030304;
          result[2] += 0.21212121212121213;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0.02616279069767442;
          result[1] += 0;
          result[2] += 0.8023255813953488;
          result[3] += 0.13662790697674418;
          result[4] += 0;
          result[5] += 0.03488372093023256;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9614093959731543;
          result[3] += 0.03523489932885906;
          result[4] += 0;
          result[5] += 0.003355704697986577;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0.010471204188481676;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9895287958115183;
          result[5] += 0;
        } else {
          result[0] += 0.0196078431372549;
          result[1] += 0.0196078431372549;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6666666666666666;
          result[5] += 0.29411764705882354;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x426e0000))) ) ) {
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
          result[3] += 0.6363636363636364;
          result[4] += 0.2727272727272727;
          result[5] += 0.09090909090909091;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0.8611111111111112;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.1388888888888889;
          result[5] += 0;
        } else {
          result[0] += 0.0032397408207343412;
          result[1] += 0.0032397408207343412;
          result[2] += 0.0064794816414686825;
          result[3] += 0.042116630669546434;
          result[4] += 0.052915766738660906;
          result[5] += 0.8920086393088553;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0.078125;
          result[1] += 0.03125;
          result[2] += 0;
          result[3] += 0.2109375;
          result[4] += 0.0625;
          result[5] += 0.6171875;
        } else {
          result[0] += 0;
          result[1] += 0.014354066985645933;
          result[2] += 0.023923444976076555;
          result[3] += 0.69377990430622;
          result[4] += 0.004784688995215311;
          result[5] += 0.2631578947368421;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42890000))) ) ) {
          result[0] += 0.07692307692307693;
          result[1] += 0.3547008547008547;
          result[2] += 0.04700854700854701;
          result[3] += 0.08547008547008547;
          result[4] += 0.4017094017094017;
          result[5] += 0.03418803418803419;
        } else {
          result[0] += 0.7875457875457876;
          result[1] += 0.012454212454212457;
          result[2] += 0.020512820512820516;
          result[3] += 0.06959706959706961;
          result[4] += 0.06886446886446888;
          result[5] += 0.04102564102564103;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0;
          result[1] += 0.9951923076923077;
          result[2] += 0;
          result[3] += 0.004807692307692308;
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
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0.09090909090909091;
          result[2] += 0.03896103896103896;
          result[3] += 0.24675324675324675;
          result[4] += 0.05194805194805195;
          result[5] += 0.5714285714285714;
        } else {
          result[0] += 0.02702702702702703;
          result[1] += 0;
          result[2] += 0.2972972972972973;
          result[3] += 0.4810810810810811;
          result[4] += 0.02702702702702703;
          result[5] += 0.16756756756756758;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0.05194805194805195;
          result[1] += 0;
          result[2] += 0.7636363636363637;
          result[3] += 0.15064935064935064;
          result[4] += 0;
          result[5] += 0.033766233766233764;
        } else {
          result[0] += 0.009868421052631578;
          result[1] += 0;
          result[2] += 0.9457236842105263;
          result[3] += 0.044407894736842105;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0.019762845849802372;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9565217391304348;
          result[5] += 0.023715415019762844;
        } else {
          result[0] += 0.125;
          result[1] += 0.08333333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.375;
          result[5] += 0.4166666666666667;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0.03687150837988827;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.030167597765363128;
          result[4] += 0.07709497206703911;
          result[5] += 0.8558659217877095;
        } else {
          result[0] += 0.1006423982869379;
          result[1] += 0.027837259100642397;
          result[2] += 0.008565310492505354;
          result[3] += 0.4068522483940043;
          result[4] += 0.042826552462526764;
          result[5] += 0.4132762312633833;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b00000))) ) ) {
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
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0.056962025316455694;
          result[1] += 0.13924050632911392;
          result[2] += 0.012658227848101266;
          result[3] += 0.04430379746835443;
          result[4] += 0.7151898734177216;
          result[5] += 0.03164556962025317;
        } else {
          result[0] += 0.7101248266296811;
          result[1] += 0.01664355062413315;
          result[2] += 0.08113730929264912;
          result[3] += 0.07558945908460472;
          result[4] += 0.0679611650485437;
          result[5] += 0.048543689320388356;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x429c0000))) ) ) {
          result[0] += 0;
          result[1] += 0.2592592592592593;
          result[2] += 0.07407407407407408;
          result[3] += 0;
          result[4] += 0.4444444444444445;
          result[5] += 0.22222222222222224;
        } else {
          result[0] += 0.030303030303030304;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.12121212121212122;
          result[4] += 0.09090909090909091;
          result[5] += 0.7575757575757576;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0.06542056074766354;
          result[1] += 0;
          result[2] += 0.3177570093457944;
          result[3] += 0.48598130841121495;
          result[4] += 0;
          result[5] += 0.1308411214953271;
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
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.703125;
          result[3] += 0.28125;
          result[4] += 0;
          result[5] += 0.015625;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42dc0000))) ) ) {
          result[0] += 0.01967799642218247;
          result[1] += 0;
          result[2] += 0.8944543828264758;
          result[3] += 0.08050089445438283;
          result[4] += 0;
          result[5] += 0.005366726296958855;
        } else {
          result[0] += 0.006825938566552901;
          result[1] += 0;
          result[2] += 0.9829351535836177;
          result[3] += 0.010238907849829351;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b80000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0.005714285714285714;
          result[1] += 0.017142857142857144;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9285714285714286;
          result[5] += 0.04857142857142857;
        } else {
          result[0] += 0;
          result[1] += 0.9375;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0625;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.4074074074074074;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5925925925925926;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0.04408817635270541;
          result[1] += 0.00501002004008016;
          result[2] += 0;
          result[3] += 0.06012024048096192;
          result[4] += 0.05110220440881764;
          result[5] += 0.8396793587174348;
        } else {
          result[0] += 0.00881057268722467;
          result[1] += 0;
          result[2] += 0.1277533039647577;
          result[3] += 0.5726872246696035;
          result[4] += 0.00881057268722467;
          result[5] += 0.28193832599118945;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.8386844166014096;
          result[1] += 0.01957713390759593;
          result[2] += 0.009397024275646046;
          result[3] += 0.031323414252153486;
          result[4] += 0.0822239624119029;
          result[5] += 0.018794048551292093;
        } else {
          result[0] += 0.2236842105263158;
          result[1] += 0.003289473684210526;
          result[2] += 0.21710526315789475;
          result[3] += 0.2138157894736842;
          result[4] += 0.06907894736842106;
          result[5] += 0.2730263157894737;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.018867924528301886;
          result[4] += 0.2641509433962264;
          result[5] += 0.7169811320754716;
        } else {
          result[0] += 0;
          result[1] += 0.045454545454545456;
          result[2] += 0;
          result[3] += 0.7272727272727273;
          result[4] += 0;
          result[5] += 0.22727272727272727;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16666666666666669;
          result[3] += 0.6666666666666667;
          result[4] += 0;
          result[5] += 0.16666666666666669;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.75;
          result[3] += 0.140625;
          result[4] += 0;
          result[5] += 0.109375;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0.043478260869565216;
          result[1] += 0.08695652173913043;
          result[2] += 0.30434782608695654;
          result[3] += 0.043478260869565216;
          result[4] += 0.043478260869565216;
          result[5] += 0.4782608695652174;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7371794871794872;
          result[3] += 0.20512820512820512;
          result[4] += 0.02564102564102564;
          result[5] += 0.03205128205128205;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.003937007874015748;
          result[1] += 0;
          result[2] += 0.9304461942257218;
          result[3] += 0.05774278215223097;
          result[4] += 0;
          result[5] += 0.007874015748031496;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0.018633540372670808;
          result[1] += 0.08695652173913043;
          result[2] += 0;
          result[3] += 0.031055900621118012;
          result[4] += 0.8105590062111802;
          result[5] += 0.052795031055900624;
        } else {
          result[0] += 0.75;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.01;
          result[4] += 0.075;
          result[5] += 0.165;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0.006675567423230975;
          result[2] += 0.004005340453938585;
          result[3] += 0.022696929238985315;
          result[4] += 0.04806408544726302;
          result[5] += 0.9185580774365821;
        } else {
          result[0] += 0.05313092979127135;
          result[1] += 0.011385199240986717;
          result[2] += 0.0018975332068311196;
          result[3] += 0.29601518026565465;
          result[4] += 0.14800759013282733;
          result[5] += 0.48956356736242884;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5714285714285714;
          result[3] += 0;
          result[4] += 0.42857142857142855;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9887892376681614;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.011210762331838564;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.860329776915616;
          result[1] += 0.02715809893307469;
          result[2] += 0;
          result[3] += 0.02327837051406402;
          result[4] += 0.07662463627546073;
          result[5] += 0.012609117361784676;
        } else {
          result[0] += 0.2644628099173554;
          result[1] += 0.02066115702479339;
          result[2] += 0.11570247933884298;
          result[3] += 0.2809917355371901;
          result[4] += 0.07851239669421488;
          result[5] += 0.2396694214876033;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2;
          result[4] += 0;
          result[5] += 0.8;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08620689655172416;
          result[3] += 0.6810344827586208;
          result[4] += 0.008620689655172415;
          result[5] += 0.2241379310344828;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6416666666666667;
          result[3] += 0.2916666666666667;
          result[4] += 0;
          result[5] += 0.06666666666666667;
        } else {
          result[0] += 0.6;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.4;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05555555555555555;
          result[3] += 0.16666666666666666;
          result[4] += 0;
          result[5] += 0.7777777777777778;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6;
          result[3] += 0.26666666666666666;
          result[4] += 0;
          result[5] += 0.13333333333333333;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0.049886621315192746;
          result[1] += 0;
          result[2] += 0.7777777777777778;
          result[3] += 0.1473922902494331;
          result[4] += 0.009070294784580499;
          result[5] += 0.015873015873015872;
        } else {
          result[0] += 0.012237762237762238;
          result[1] += 0;
          result[2] += 0.958041958041958;
          result[3] += 0.027972027972027972;
          result[4] += 0;
          result[5] += 0.0017482517482517483;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0;
          result[1] += 0.0049261083743842365;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9852216748768473;
          result[5] += 0.009852216748768473;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7142857142857143;
          result[5] += 0.2857142857142857;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0.02335456475583864;
          result[1] += 0.0010615711252653928;
          result[2] += 0;
          result[3] += 0.03821656050955414;
          result[4] += 0.050955414012738856;
          result[5] += 0.886411889596603;
        } else {
          result[0] += 0.025830258302583026;
          result[1] += 0.01107011070110701;
          result[2] += 0;
          result[3] += 0.4575645756457565;
          result[4] += 0.08487084870848709;
          result[5] += 0.42066420664206644;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 0.1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9977426636568849;
          result[2] += 0;
          result[3] += 0.002257336343115124;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0.12631578947368421;
          result[1] += 0.2631578947368421;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6105263157894737;
          result[5] += 0;
        } else {
          result[0] += 0.7332421340629275;
          result[1] += 0.013679890560875513;
          result[2] += 0.029411764705882353;
          result[3] += 0.08344733242134063;
          result[4] += 0.06224350205198358;
          result[5] += 0.07797537619699042;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07142857142857142;
          result[3] += 0.03571428571428571;
          result[4] += 0.03571428571428571;
          result[5] += 0.8571428571428571;
        } else {
          result[0] += 0;
          result[1] += 0.04716981132075472;
          result[2] += 0.08490566037735849;
          result[3] += 0.6132075471698113;
          result[4] += 0.018867924528301886;
          result[5] += 0.2358490566037736;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0.020202020202020204;
          result[2] += 0.30303030303030304;
          result[3] += 0.3939393939393939;
          result[4] += 0;
          result[5] += 0.2828282828282828;
        } else {
          result[0] += 0.05063291139240506;
          result[1] += 0.0379746835443038;
          result[2] += 0.6835443037974683;
          result[3] += 0.17721518987341772;
          result[4] += 0.02531645569620253;
          result[5] += 0.02531645569620253;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.010976948408342482;
          result[1] += 0;
          result[2] += 0.9077936333699231;
          result[3] += 0.06915477497255763;
          result[4] += 0;
          result[5] += 0.012074643249176729;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 0.96875;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.03125;
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
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ca0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42420000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.00980392156862745;
          result[1] += 0;
          result[2] += 0.0032679738562091504;
          result[3] += 0.0032679738562091504;
          result[4] += 0.9575163398692811;
          result[5] += 0.026143790849673203;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cc0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6;
          result[3] += 0;
          result[4] += 0.4;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0.13333333333333333;
          result[1] += 0.03333333333333333;
          result[2] += 0;
          result[3] += 0.06666666666666667;
          result[4] += 0.6333333333333333;
          result[5] += 0.13333333333333333;
        } else {
          result[0] += 0.9659090909090909;
          result[1] += 0.011363636363636364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.022727272727272728;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0.006376195536663124;
          result[1] += 0.006376195536663124;
          result[2] += 0;
          result[3] += 0.036131774707757705;
          result[4] += 0.0563230605738576;
          result[5] += 0.8947927736450585;
        } else {
          result[0] += 0.007177033492822967;
          result[1] += 0;
          result[2] += 0.009569377990430622;
          result[3] += 0.5023923444976076;
          result[4] += 0;
          result[5] += 0.48086124401913877;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42420000))) ) ) {
          result[0] += 0;
          result[1] += 0.9977324263038548;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0022675736961451248;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.5918367346938775;
          result[2] += 0;
          result[3] += 0.02040816326530612;
          result[4] += 0.3877551020408163;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42900000))) ) ) {
          result[0] += 0.11450381679389313;
          result[1] += 0.2595419847328244;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6259541984732825;
          result[5] += 0;
        } else {
          result[0] += 0.8303425774877651;
          result[1] += 0.00734094616639478;
          result[2] += 0.02773246329526917;
          result[3] += 0.05628058727569331;
          result[4] += 0.041598694942903754;
          result[5] += 0.0367047308319739;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0.0449438202247191;
          result[1] += 0.0449438202247191;
          result[2] += 0.0898876404494382;
          result[3] += 0.30337078651685395;
          result[4] += 0.21348314606741572;
          result[5] += 0.30337078651685395;
        } else {
          result[0] += 0.08333333333333333;
          result[1] += 0;
          result[2] += 0.5714285714285714;
          result[3] += 0.24404761904761904;
          result[4] += 0;
          result[5] += 0.10119047619047619;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6153846153846154;
          result[3] += 0.3076923076923077;
          result[4] += 0;
          result[5] += 0.07692307692307693;
        } else {
          result[0] += 0.009153318077803204;
          result[1] += 0;
          result[2] += 0.9187643020594966;
          result[3] += 0.06750572082379863;
          result[4] += 0;
          result[5] += 0.004576659038901602;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428d0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0.010050251256281407;
          result[1] += 0.005025125628140704;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9597989949748744;
          result[5] += 0.02512562814070352;
        } else {
          result[0] += 0;
          result[1] += 0.16666666666666666;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.25;
          result[5] += 0.5833333333333334;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 0.13333333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8666666666666667;
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
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0.01388888888888889;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.513888888888889;
          result[5] += 0.47222222222222227;
        } else {
          result[0] += 0;
          result[1] += 0.0011933174224343676;
          result[2] += 0;
          result[3] += 0.05847255369928401;
          result[4] += 0.0441527446300716;
          result[5] += 0.89618138424821;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.21428571428571427;
          result[4] += 0.04081632653061224;
          result[5] += 0.7448979591836735;
        } else {
          result[0] += 0.014218009478672985;
          result[1] += 0.004739336492890996;
          result[2] += 0.009478672985781991;
          result[3] += 0.6540284360189573;
          result[4] += 0;
          result[5] += 0.3175355450236967;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 0.3125;
          result[2] += 0;
          result[3] += 0.125;
          result[4] += 0.5625;
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
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0.12167300380228137;
          result[1] += 0.1520912547528517;
          result[2] += 0.06844106463878327;
          result[3] += 0.049429657794676805;
          result[4] += 0.5361216730038023;
          result[5] += 0.07224334600760456;
        } else {
          result[0] += 0.7575757575757577;
          result[1] += 0.015873015873015876;
          result[2] += 0.029581529581529584;
          result[3] += 0.06565656565656568;
          result[4] += 0.07503607503607505;
          result[5] += 0.05627705627705629;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0.02127659574468085;
          result[2] += 0.14893617021276595;
          result[3] += 0.49645390070921985;
          result[4] += 0.10638297872340426;
          result[5] += 0.22695035460992907;
        } else {
          result[0] += 0.011494252873563218;
          result[1] += 0;
          result[2] += 0.7126436781609196;
          result[3] += 0.16091954022988506;
          result[4] += 0;
          result[5] += 0.11494252873563218;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0.05737704918032787;
          result[1] += 0.05737704918032787;
          result[2] += 0.6147540983606558;
          result[3] += 0.1721311475409836;
          result[4] += 0.04918032786885246;
          result[5] += 0.04918032786885246;
        } else {
          result[0] += 0.010309278350515464;
          result[1] += 0;
          result[2] += 0.9243986254295533;
          result[3] += 0.054982817869415807;
          result[4] += 0;
          result[5] += 0.010309278350515464;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9910714285714286;
          result[5] += 0.008928571428571428;
        } else {
          result[0] += 0.11538461538461539;
          result[1] += 0;
          result[2] += 0.07692307692307693;
          result[3] += 0;
          result[4] += 0.7307692307692307;
          result[5] += 0.07692307692307693;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0.03953712632594021;
          result[1] += 0.0057859209257473485;
          result[2] += 0;
          result[3] += 0.05400192864030858;
          result[4] += 0.0665380906460945;
          result[5] += 0.8341369334619093;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.031088082901554404;
          result[3] += 0.6839378238341969;
          result[4] += 0;
          result[5] += 0.2849740932642487;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.7725190839694654;
          result[1] += 0.052671755725190825;
          result[2] += 0.00763358778625954;
          result[3] += 0.02061068702290076;
          result[4] += 0.1312977099236641;
          result[5] += 0.01526717557251908;
        } else {
          result[0] += 0.14594594594594595;
          result[1] += 0.01891891891891892;
          result[2] += 0.26756756756756755;
          result[3] += 0.3027027027027027;
          result[4] += 0.10810810810810811;
          result[5] += 0.15675675675675677;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c40000))) ) ) {
          result[0] += 0;
          result[1] += 0.9951338199513382;
          result[2] += 0;
          result[3] += 0.004866180048661801;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.8333333333333334;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.16666666666666666;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0;
          result[1] += 0.36363636363636365;
          result[2] += 0;
          result[3] += 0.18181818181818182;
          result[4] += 0.45454545454545453;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0625;
          result[3] += 0.1875;
          result[4] += 0;
          result[5] += 0.75;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.34057971014492755;
          result[3] += 0.5507246376811594;
          result[4] += 0.007246376811594203;
          result[5] += 0.10144927536231885;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7241379310344828;
          result[3] += 0.06896551724137931;
          result[4] += 0;
          result[5] += 0.20689655172413793;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.125;
          result[1] += 0.875;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.30612244897959184;
          result[1] += 0;
          result[2] += 0.32653061224489793;
          result[3] += 0.22448979591836735;
          result[4] += 0.061224489795918366;
          result[5] += 0.08163265306122448;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0.058823529411764705;
          result[1] += 0;
          result[2] += 0.8018575851393189;
          result[3] += 0.10835913312693499;
          result[4] += 0;
          result[5] += 0.030959752321981424;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9618573797678276;
          result[3] += 0.02985074626865672;
          result[4] += 0;
          result[5] += 0.008291873963515757;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.92;
          result[5] += 0.08;
        } else {
          result[0] += 0;
          result[1] += 0.875;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.125;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0.042268041237113405;
          result[1] += 0.013402061855670102;
          result[2] += 0;
          result[3] += 0.04536082474226804;
          result[4] += 0.05257731958762887;
          result[5] += 0.8463917525773196;
        } else {
          result[0] += 0.011235955056179775;
          result[1] += 0;
          result[2] += 0.0299625468164794;
          result[3] += 0.6404494382022472;
          result[4] += 0.011235955056179775;
          result[5] += 0.30711610486891383;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0.375;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.625;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9957081545064378;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004291845493562232;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.7587786259541984;
          result[1] += 0.029770992366412213;
          result[2] += 0.0022900763358778627;
          result[3] += 0.03206106870229008;
          result[4] += 0.1465648854961832;
          result[5] += 0.030534351145038167;
        } else {
          result[0] += 0.2295805739514349;
          result[1] += 0.03532008830022076;
          result[2] += 0.20971302428256072;
          result[3] += 0.2604856512141281;
          result[4] += 0.05518763796909493;
          result[5] += 0.20971302428256072;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16666666666666666;
          result[3] += 0.5833333333333334;
          result[4] += 0;
          result[5] += 0.25;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5918367346938777;
          result[3] += 0.34693877551020413;
          result[4] += 0;
          result[5] += 0.06122448979591837;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42e30000))) ) ) {
          result[0] += 0.019417475728155338;
          result[1] += 0;
          result[2] += 0.7864077669902912;
          result[3] += 0.1650485436893204;
          result[4] += 0;
          result[5] += 0.02912621359223301;
        } else {
          result[0] += 0.3142857142857143;
          result[1] += 0;
          result[2] += 0.42857142857142855;
          result[3] += 0.22857142857142856;
          result[4] += 0;
          result[5] += 0.02857142857142857;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ed0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9272727272727272;
          result[3] += 0.06666666666666667;
          result[4] += 0;
          result[5] += 0.006060606060606061;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6666666666666666;
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9659574468085106;
          result[3] += 0.03404255319148936;
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
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0.008849557522123894;
          result[1] += 0.01327433628318584;
          result[2] += 0;
          result[3] += 0.004424778761061947;
          result[4] += 0.9513274336283186;
          result[5] += 0.022123893805309734;
        } else {
          result[0] += 0;
          result[1] += 0.6666666666666666;
          result[2] += 0;
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0.004784688995215311;
          result[1] += 0.0011961722488038277;
          result[2] += 0.0023923444976076554;
          result[3] += 0.05143540669856459;
          result[4] += 0.07057416267942583;
          result[5] += 0.8696172248803827;
        } else {
          result[0] += 0.10755813953488372;
          result[1] += 0.005813953488372093;
          result[2] += 0.005813953488372093;
          result[3] += 0.3691860465116279;
          result[4] += 0.09302325581395349;
          result[5] += 0.4186046511627907;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.7267605633802817;
          result[1] += 0.07746478873239436;
          result[2] += 0.005633802816901409;
          result[3] += 0.019014084507042252;
          result[4] += 0.15422535211267605;
          result[5] += 0.016901408450704224;
        } else {
          result[0] += 0.23114355231143552;
          result[1] += 0.009732360097323601;
          result[2] += 0.24574209245742093;
          result[3] += 0.25304136253041365;
          result[4] += 0.0364963503649635;
          result[5] += 0.22384428223844283;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a10000))) ) ) {
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
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0.015151515151515152;
          result[1] += 0.12121212121212122;
          result[2] += 0.045454545454545456;
          result[3] += 0.07575757575757576;
          result[4] += 0.16666666666666666;
          result[5] += 0.5757575757575758;
        } else {
          result[0] += 0;
          result[1] += 0.018518518518518517;
          result[2] += 0.12962962962962962;
          result[3] += 0.7222222222222222;
          result[4] += 0;
          result[5] += 0.12962962962962962;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0.125;
          result[1] += 0;
          result[2] += 0.48214285714285715;
          result[3] += 0.125;
          result[4] += 0.017857142857142856;
          result[5] += 0.25;
        } else {
          result[0] += 0.05263157894736842;
          result[1] += 0;
          result[2] += 0.7894736842105263;
          result[3] += 0.14035087719298245;
          result[4] += 0;
          result[5] += 0.017543859649122806;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5378151260504201;
          result[3] += 0.37815126050420167;
          result[4] += 0;
          result[5] += 0.08403361344537816;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.819672131147541;
          result[3] += 0.08196721311475409;
          result[4] += 0;
          result[5] += 0.09836065573770492;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0.011834319526627219;
          result[1] += 0;
          result[2] += 0.8106508875739645;
          result[3] += 0.15976331360946747;
          result[4] += 0;
          result[5] += 0.01775147928994083;
        } else {
          result[0] += 0.005338078291814946;
          result[1] += 0;
          result[2] += 0.9572953736654802;
          result[3] += 0.03380782918149466;
          result[4] += 0;
          result[5] += 0.0035587188612099634;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0.0038022813688212928;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.015209125475285171;
          result[4] += 0.9429657794676806;
          result[5] += 0.03802281368821293;
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
          result[0] += 0.0013550135501355014;
          result[1] += 0;
          result[2] += 0.005420054200542005;
          result[3] += 0.02032520325203252;
          result[4] += 0.04065040650406504;
          result[5] += 0.9322493224932249;
        } else {
          result[0] += 0.08282828282828283;
          result[1] += 0.04242424242424243;
          result[2] += 0.006060606060606061;
          result[3] += 0.3515151515151515;
          result[4] += 0.08282828282828283;
          result[5] += 0.43434343434343436;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0.014285714285714285;
          result[1] += 0.1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8857142857142857;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9722222222222222;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.027777777777777776;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.7986270022883295;
          result[1] += 0.02212051868802441;
          result[2] += 0.015255530129672006;
          result[3] += 0.03279938977879481;
          result[4] += 0.07093821510297482;
          result[5] += 0.060259344012204424;
        } else {
          result[0] += 0.21203438395415472;
          result[1] += 0.02865329512893983;
          result[2] += 0.18911174785100288;
          result[3] += 0.24641833810888253;
          result[4] += 0.06876790830945559;
          result[5] += 0.25501432664756446;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0.125;
          result[2] += 0.375;
          result[3] += 0;
          result[4] += 0.5;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0625;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.9375;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0.041666666666666664;
          result[2] += 0.06944444444444445;
          result[3] += 0.7083333333333334;
          result[4] += 0;
          result[5] += 0.18055555555555555;
        } else {
          result[0] += 0.02985074626865672;
          result[1] += 0.01492537313432836;
          result[2] += 0.4477611940298508;
          result[3] += 0.3432835820895523;
          result[4] += 0.05970149253731344;
          result[5] += 0.10447761194029852;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1875;
          result[3] += 0.625;
          result[4] += 0;
          result[5] += 0.1875;
        } else {
          result[0] += 0.006097560975609756;
          result[1] += 0;
          result[2] += 0.8445121951219512;
          result[3] += 0.13719512195121952;
          result[4] += 0;
          result[5] += 0.012195121951219513;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.02337228714524207;
          result[1] += 0;
          result[2] += 0.9348914858096828;
          result[3] += 0.03672787979966611;
          result[4] += 0;
          result[5] += 0.005008347245409015;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0.004291845493562232;
          result[1] += 0.055793991416309016;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8841201716738197;
          result[5] += 0.055793991416309016;
        } else {
          result[0] += 0.4936708860759494;
          result[1] += 0.0379746835443038;
          result[2] += 0;
          result[3] += 0.06329113924050633;
          result[4] += 0.13924050632911392;
          result[5] += 0.26582278481012656;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0.0021668472372697724;
          result[1] += 0.011917659804983749;
          result[2] += 0.0010834236186348862;
          result[3] += 0.05200433369447454;
          result[4] += 0.0780065005417118;
          result[5] += 0.8548212351029253;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.023076923076923078;
          result[3] += 0.7076923076923077;
          result[4] += 0;
          result[5] += 0.2692307692307692;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0;
          result[1] += 0.2708333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7083333333333334;
          result[5] += 0.020833333333333332;
        } else {
          result[0] += 0;
          result[1] += 0.9615384615384616;
          result[2] += 0;
          result[3] += 0.01809954751131222;
          result[4] += 0.01583710407239819;
          result[5] += 0.004524886877828055;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0.43387681159420294;
          result[1] += 0.03985507246376812;
          result[2] += 0.05615942028985508;
          result[3] += 0.14673913043478265;
          result[4] += 0.1730072463768116;
          result[5] += 0.15036231884057974;
        } else {
          result[0] += 0.9451851851851852;
          result[1] += 0;
          result[2] += 0.047407407407407405;
          result[3] += 0;
          result[4] += 0.007407407407407408;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b30000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1111111111111111;
          result[3] += 0.1746031746031746;
          result[4] += 0;
          result[5] += 0.7142857142857143;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0.0847457627118644;
          result[2] += 0.05084745762711865;
          result[3] += 0.4915254237288136;
          result[4] += 0;
          result[5] += 0.3728813559322034;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5050505050505051;
          result[3] += 0.45454545454545453;
          result[4] += 0;
          result[5] += 0.04040404040404041;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0.2222222222222222;
          result[1] += 0.2222222222222222;
          result[2] += 0.4444444444444444;
          result[3] += 0.1111111111111111;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.8947368421052632;
          result[1] += 0.05263157894736842;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.05263157894736842;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0.008130081300813009;
          result[1] += 0;
          result[2] += 0.6951219512195121;
          result[3] += 0.23983739837398374;
          result[4] += 0.012195121951219513;
          result[5] += 0.044715447154471545;
        } else {
          result[0] += 0.008836524300441826;
          result[1] += 0;
          result[2] += 0.930780559646539;
          result[3] += 0.050073637702503684;
          result[4] += 0;
          result[5] += 0.010309278350515464;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42dd0000))) ) ) {
          result[0] += 0.0035587188612099647;
          result[1] += 0.007117437722419929;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9822064056939502;
          result[5] += 0.007117437722419929;
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
          result[0] += 0.0389937106918239;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.028930817610062894;
          result[4] += 0.045283018867924525;
          result[5] += 0.8867924528301887;
        } else {
          result[0] += 0.08224299065420561;
          result[1] += 0.03177570093457944;
          result[2] += 0.011214953271028037;
          result[3] += 0.35700934579439253;
          result[4] += 0.05046728971962617;
          result[5] += 0.4672897196261682;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0.2777777777777778;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7222222222222222;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9977116704805492;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002288329519450801;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42db0000))) ) ) {
          result[0] += 0.48923076923076925;
          result[1] += 0.048205128205128206;
          result[2] += 0.055384615384615386;
          result[3] += 0.1076923076923077;
          result[4] += 0.18974358974358974;
          result[5] += 0.10974358974358975;
        } else {
          result[0] += 0.9508716323296356;
          result[1] += 0.015847860538827262;
          result[2] += 0.0047543581616481785;
          result[3] += 0;
          result[4] += 0.02852614896988907;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.38095238095238093;
          result[4] += 0;
          result[5] += 0.6190476190476191;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3037974683544304;
          result[3] += 0.569620253164557;
          result[4] += 0;
          result[5] += 0.12658227848101267;
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
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2857142857142857;
          result[3] += 0.19047619047619047;
          result[4] += 0;
          result[5] += 0.5238095238095238;
        } else {
          result[0] += 0.046341463414634146;
          result[1] += 0;
          result[2] += 0.8048780487804879;
          result[3] += 0.12439024390243902;
          result[4] += 0;
          result[5] += 0.024390243902439025;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0.75;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.008333333333333335;
          result[1] += 0;
          result[2] += 0.9500000000000001;
          result[3] += 0.036666666666666674;
          result[4] += 0;
          result[5] += 0.005000000000000001;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0.03862660944206009;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9399141630901288;
          result[5] += 0.02145922746781116;
        } else {
          result[0] += 0.5058823529411764;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.18823529411764706;
          result[5] += 0.3058823529411765;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0.007751937984496124;
          result[2] += 0.0011074197120708748;
          result[3] += 0.036544850498338874;
          result[4] += 0.05094130675526024;
          result[5] += 0.9036544850498339;
        } else {
          result[0] += 0.0031847133757961785;
          result[1] += 0.022292993630573247;
          result[2] += 0.01592356687898089;
          result[3] += 0.5095541401273885;
          result[4] += 0.01592356687898089;
          result[5] += 0.43312101910828027;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0.10344827586206896;
          result[2] += 0.017241379310344827;
          result[3] += 0;
          result[4] += 0.8793103448275862;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9910313901345291;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.008968609865470852;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0.7796992481203008;
          result[1] += 0.035338345864661655;
          result[2] += 0.006766917293233083;
          result[3] += 0.04887218045112782;
          result[4] += 0.09473684210526316;
          result[5] += 0.03458646616541353;
        } else {
          result[0] += 0.12401055408970976;
          result[1] += 0.018469656992084433;
          result[2] += 0.3034300791556728;
          result[3] += 0.24538258575197888;
          result[4] += 0.11873350923482849;
          result[5] += 0.18997361477572558;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42910000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.009708737864077669;
          result[2] += 0.1553398058252427;
          result[3] += 0.47572815533980584;
          result[4] += 0.038834951456310676;
          result[5] += 0.32038834951456313;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42e50000))) ) ) {
          result[0] += 0.017391304347826087;
          result[1] += 0.017391304347826087;
          result[2] += 0.8434782608695652;
          result[3] += 0.017391304347826087;
          result[4] += 0;
          result[5] += 0.10434782608695652;
        } else {
          result[0] += 0.489795918367347;
          result[1] += 0;
          result[2] += 0.4285714285714286;
          result[3] += 0.06122448979591837;
          result[4] += 0.020408163265306124;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.33333333333333337;
          result[3] += 0.5000000000000001;
          result[4] += 0;
          result[5] += 0.16666666666666669;
        } else {
          result[0] += 0.01;
          result[1] += 0;
          result[2] += 0.86;
          result[3] += 0.12;
          result[4] += 0;
          result[5] += 0.01;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.75;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9778156996587031;
          result[3] += 0.020477815699658702;
          result[4] += 0;
          result[5] += 0.0017064846416382253;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42bb0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0.02830188679245283;
          result[1] += 0.05345911949685535;
          result[2] += 0.0031446540880503146;
          result[3] += 0.009433962264150943;
          result[4] += 0.8459119496855346;
          result[5] += 0.059748427672955975;
        } else {
          result[0] += 0.7352941176470589;
          result[1] += 0;
          result[2] += 0.004201680672268907;
          result[3] += 0.037815126050420166;
          result[4] += 0.13025210084033614;
          result[5] += 0.09243697478991597;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.005319148936170213;
          result[3] += 0.02526595744680851;
          result[4] += 0.043882978723404256;
          result[5] += 0.925531914893617;
        } else {
          result[0] += 0.022569444444444444;
          result[1] += 0.020833333333333332;
          result[2] += 0.024305555555555556;
          result[3] += 0.3263888888888889;
          result[4] += 0.15104166666666666;
          result[5] += 0.4548611111111111;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42580000))) ) ) {
          result[0] += 0.004819277108433735;
          result[1] += 0.9927710843373494;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0024096385542168677;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.40540540540540543;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.527027027027027;
          result[5] += 0.06756756756756757;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.9100204498977505;
          result[1] += 0.015337423312883436;
          result[2] += 0.00408997955010225;
          result[3] += 0.006134969325153374;
          result[4] += 0.0541922290388548;
          result[5] += 0.010224948875255624;
        } else {
          result[0] += 0.20134228187919465;
          result[1] += 0.020134228187919465;
          result[2] += 0.18791946308724836;
          result[3] += 0.3042505592841164;
          result[4] += 0.044742729306487705;
          result[5] += 0.2416107382550336;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.17721518987341772;
          result[3] += 0.7088607594936709;
          result[4] += 0;
          result[5] += 0.11392405063291139;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8333333333333334;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.16666666666666666;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.6666666666666666;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7894736842105263;
          result[3] += 0.15789473684210525;
          result[4] += 0.02631578947368421;
          result[5] += 0.02631578947368421;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8;
          result[4] += 0;
          result[5] += 0.2;
        } else {
          result[0] += 0.01327433628318584;
          result[1] += 0;
          result[2] += 0.827433628318584;
          result[3] += 0.12831858407079647;
          result[4] += 0;
          result[5] += 0.030973451327433628;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42980000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.006060606060606061;
          result[1] += 0;
          result[2] += 0.9590909090909091;
          result[3] += 0.03484848484848485;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 0.004651162790697674;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9720930232558139;
          result[5] += 0.023255813953488372;
        } else {
          result[0] += 0.296875;
          result[1] += 0.0078125;
          result[2] += 0.0078125;
          result[3] += 0.09375;
          result[4] += 0.28125;
          result[5] += 0.3125;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.026438569206842923;
          result[4] += 0.026438569206842923;
          result[5] += 0.9471228615863142;
        } else {
          result[0] += 0;
          result[1] += 0.00597609561752988;
          result[2] += 0.01195219123505976;
          result[3] += 0.398406374501992;
          result[4] += 0.07569721115537849;
          result[5] += 0.5079681274900398;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
          result[0] += 0;
          result[1] += 0.9799554565701559;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0200445434298441;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.22772277227722773;
          result[2] += 0.0297029702970297;
          result[3] += 0.019801980198019802;
          result[4] += 0.7227722772277227;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.8340180772391126;
          result[1] += 0.030402629416598194;
          result[2] += 0.0016433853738701725;
          result[3] += 0.015612161051766639;
          result[4] += 0.10271158586688578;
          result[5] += 0.015612161051766639;
        } else {
          result[0] += 0.1900647948164147;
          result[1] += 0.01079913606911447;
          result[2] += 0.2526997840172786;
          result[3] += 0.2915766738660907;
          result[4] += 0.028077753779697623;
          result[5] += 0.2267818574514039;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 0;
          result[1] += 0.03571428571428571;
          result[2] += 0.03571428571428571;
          result[3] += 0.08928571428571429;
          result[4] += 0.07142857142857142;
          result[5] += 0.7678571428571429;
        } else {
          result[0] += 0.45454545454545453;
          result[1] += 0;
          result[2] += 0.36363636363636365;
          result[3] += 0.18181818181818182;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3902439024390244;
          result[3] += 0.5487804878048781;
          result[4] += 0;
          result[5] += 0.06097560975609756;
        } else {
          result[0] += 0.16666666666666666;
          result[1] += 0.14814814814814814;
          result[2] += 0.6111111111111112;
          result[3] += 0.037037037037037035;
          result[4] += 0;
          result[5] += 0.037037037037037035;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.20833333333333334;
          result[3] += 0.4166666666666667;
          result[4] += 0;
          result[5] += 0.375;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8152173913043478;
          result[3] += 0.10869565217391304;
          result[4] += 0;
          result[5] += 0.07608695652173914;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42930000))) ) ) {
          result[0] += 0.5;
          result[1] += 0;
          result[2] += 0.16666666666666666;
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.002554278416347382;
          result[1] += 0;
          result[2] += 0.9438058748403576;
          result[3] += 0.05363984674329502;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42780000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 0.008620689655172414;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9267241379310345;
          result[5] += 0.06465517241379311;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0.020719738276990186;
          result[1] += 0;
          result[2] += 0.004362050163576881;
          result[3] += 0.03271537622682661;
          result[4] += 0.06324972737186478;
          result[5] += 0.8789531079607416;
        } else {
          result[0] += 0.06128133704735376;
          result[1] += 0.002785515320334262;
          result[2] += 0.06685236768802229;
          result[3] += 0.40947075208913647;
          result[4] += 0.05013927576601671;
          result[5] += 0.40947075208913647;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0.1891891891891892;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8108108108108109;
          result[5] += 0;
        } else {
          result[0] += 0.009280742459396751;
          result[1] += 0.974477958236659;
          result[2] += 0;
          result[3] += 0.004640371229698376;
          result[4] += 0.01160092807424594;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.2577319587628866;
          result[1] += 0.13402061855670105;
          result[2] += 0;
          result[3] += 0.005154639175257733;
          result[4] += 0.5463917525773196;
          result[5] += 0.05670103092783506;
        } else {
          result[0] += 0.7787481804949054;
          result[1] += 0.018922852983988356;
          result[2] += 0.03202328966521106;
          result[3] += 0.05604075691411936;
          result[4] += 0.053857350800582245;
          result[5] += 0.06040756914119359;
        }
      }
    }
  } else {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.13513513513513514;
          result[3] += 0.08108108108108109;
          result[4] += 0.10810810810810811;
          result[5] += 0.6756756756756757;
        } else {
          result[0] += 0;
          result[1] += 0.06666666666666668;
          result[2] += 0.07619047619047621;
          result[3] += 0.5714285714285715;
          result[4] += 0.038095238095238106;
          result[5] += 0.24761904761904766;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0.0625;
          result[1] += 0.125;
          result[2] += 0.125;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.6875;
        } else {
          result[0] += 0.08823529411764706;
          result[1] += 0;
          result[2] += 0.7647058823529411;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.14705882352941177;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0.017857142857142856;
          result[1] += 0;
          result[2] += 0.2857142857142857;
          result[3] += 0.42857142857142855;
          result[4] += 0.05357142857142857;
          result[5] += 0.21428571428571427;
        } else {
          result[0] += 0.05785123966942149;
          result[1] += 0;
          result[2] += 0.7134986225895317;
          result[3] += 0.1928374655647383;
          result[4] += 0.008264462809917356;
          result[5] += 0.027548209366391185;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8358974358974359;
          result[3] += 0.15384615384615385;
          result[4] += 0;
          result[5] += 0.010256410256410256;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.973741794310722;
          result[3] += 0.0262582056892779;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0;
          result[1] += 0.02666666666666667;
          result[2] += 0;
          result[3] += 0.0033333333333333335;
          result[4] += 0.9466666666666667;
          result[5] += 0.023333333333333334;
        } else {
          result[0] += 0;
          result[1] += 0.46153846153846156;
          result[2] += 0;
          result[3] += 0.15384615384615385;
          result[4] += 0.07692307692307693;
          result[5] += 0.3076923076923077;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 0.012698412698412698;
          result[1] += 0.0021164021164021165;
          result[2] += 0.0031746031746031746;
          result[3] += 0.050793650793650794;
          result[4] += 0.04973544973544974;
          result[5] += 0.8814814814814815;
        } else {
          result[0] += 0.35564853556485354;
          result[1] += 0.0041841004184100415;
          result[2] += 0;
          result[3] += 0.18410041841004185;
          result[4] += 0.19246861924686193;
          result[5] += 0.26359832635983266;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.7792;
          result[1] += 0.0592;
          result[2] += 0.0016;
          result[3] += 0.0368;
          result[4] += 0.0976;
          result[5] += 0.0256;
        } else {
          result[0] += 0.16472545757071547;
          result[1] += 0.024958402662229616;
          result[2] += 0.1497504159733777;
          result[3] += 0.324459234608985;
          result[4] += 0.064891846921797;
          result[5] += 0.27121464226289516;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
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
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.10909090909090909;
          result[3] += 0.6363636363636364;
          result[4] += 0;
          result[5] += 0.2545454545454545;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5909090909090909;
          result[3] += 0.36363636363636365;
          result[4] += 0;
          result[5] += 0.045454545454545456;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.25;
          result[4] += 0.25;
          result[5] += 0.5;
        } else {
          result[0] += 0.044444444444444446;
          result[1] += 0;
          result[2] += 0.8444444444444444;
          result[3] += 0.08888888888888889;
          result[4] += 0;
          result[5] += 0.022222222222222223;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6645569620253166;
          result[3] += 0.2784810126582279;
          result[4] += 0;
          result[5] += 0.0569620253164557;
        } else {
          result[0] += 0.029850746268656716;
          result[1] += 0;
          result[2] += 0.9402985074626866;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.029850746268656716;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0.015313935681470138;
          result[1] += 0;
          result[2] += 0.9341500765696784;
          result[3] += 0.04900459418070444;
          result[4] += 0;
          result[5] += 0.0015313935681470138;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42300000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0.7000000000000001;
          result[2] += 0;
          result[3] += 0.20000000000000004;
          result[4] += 0;
          result[5] += 0.10000000000000002;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42900000))) ) ) {
          result[0] += 0;
          result[1] += 0.00423728813559322;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9915254237288136;
          result[5] += 0.00423728813559322;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0625;
          result[4] += 0.5625;
          result[5] += 0.375;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0.37681159420289856;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4927536231884058;
          result[5] += 0.13043478260869565;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0021436227224008574;
          result[3] += 0.06859592711682744;
          result[4] += 0.027867095391211148;
          result[5] += 0.9013933547695605;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0.11428571428571428;
          result[1] += 0.014285714285714285;
          result[2] += 0.014285714285714285;
          result[3] += 0.11428571428571428;
          result[4] += 0.12857142857142856;
          result[5] += 0.6142857142857143;
        } else {
          result[0] += 0.017543859649122806;
          result[1] += 0;
          result[2] += 0.023391812865497075;
          result[3] += 0.7076023391812866;
          result[4] += 0.03508771929824561;
          result[5] += 0.21637426900584794;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42480000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0.6290322580645161;
          result[1] += 0.07258064516129033;
          result[2] += 0.006720430107526882;
          result[3] += 0.0228494623655914;
          result[4] += 0.2540322580645161;
          result[5] += 0.01478494623655914;
        } else {
          result[0] += 0.0437636761487965;
          result[1] += 0.030634573304157548;
          result[2] += 0.25601750547045954;
          result[3] += 0.3741794310722101;
          result[4] += 0.06783369803063458;
          result[5] += 0.2275711159737418;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0.9383458646616543;
          result[1] += 0;
          result[2] += 0.03458646616541354;
          result[3] += 0.006015037593984964;
          result[4] += 0.006015037593984964;
          result[5] += 0.015037593984962407;
        } else {
          result[0] += 0.01689545934530095;
          result[1] += 0.0021119324181626186;
          result[2] += 0.839493136219641;
          result[3] += 0.11932418162618796;
          result[4] += 0.0010559662090813093;
          result[5] += 0.021119324181626188;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0.004048582995951417;
          result[1] += 0.04048582995951417;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9554655870445344;
          result[5] += 0;
        } else {
          result[0] += 0.3333333333333333;
          result[1] += 0.058823529411764705;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.28431372549019607;
          result[5] += 0.3235294117647059;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0.0039946737683089215;
          result[2] += 0.002663115845539281;
          result[3] += 0.041278295605858856;
          result[4] += 0.05193075898801598;
          result[5] += 0.9001331557922769;
        } else {
          result[0] += 0.01038961038961039;
          result[1] += 0.023376623376623377;
          result[2] += 0.05194805194805195;
          result[3] += 0.43636363636363634;
          result[4] += 0.07532467532467532;
          result[5] += 0.4025974025974026;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
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
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.7567185289957568;
          result[1] += 0.027581329561527583;
          result[2] += 0.014144271570014143;
          result[3] += 0.036775106082036775;
          result[4] += 0.09900990099009901;
          result[5] += 0.06577086280056577;
        } else {
          result[0] += 0.13414634146341464;
          result[1] += 0.03170731707317073;
          result[2] += 0.16829268292682928;
          result[3] += 0.2780487804878049;
          result[4] += 0.13170731707317074;
          result[5] += 0.25609756097560976;
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
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
          result[2] += 0.09375;
          result[3] += 0.6875;
          result[4] += 0;
          result[5] += 0.21875;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09090909090909091;
          result[3] += 0.36363636363636365;
          result[4] += 0.18181818181818182;
          result[5] += 0.36363636363636365;
        } else {
          result[0] += 0.03703703703703704;
          result[1] += 0;
          result[2] += 0.7703703703703705;
          result[3] += 0.14814814814814817;
          result[4] += 0;
          result[5] += 0.04444444444444445;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0.002538071065989848;
          result[1] += 0;
          result[2] += 0.8553299492385787;
          result[3] += 0.1269035532994924;
          result[4] += 0;
          result[5] += 0.015228426395939089;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
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
          result[0] += 0.01171875;
          result[1] += 0;
          result[2] += 0.96875;
          result[3] += 0.01953125;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.009389671361502348;
          result[3] += 0;
          result[4] += 0.9436619718309859;
          result[5] += 0.046948356807511735;
        } else {
          result[0] += 0;
          result[1] += 0.07407407407407407;
          result[2] += 0;
          result[3] += 0.037037037037037035;
          result[4] += 0.5925925925925926;
          result[5] += 0.2962962962962963;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0.042222222222222223;
          result[1] += 0.012222222222222223;
          result[2] += 0;
          result[3] += 0.02666666666666667;
          result[4] += 0.06;
          result[5] += 0.8588888888888889;
        } else {
          result[0] += 0.0036101083032490976;
          result[1] += 0.0036101083032490976;
          result[2] += 0.032490974729241874;
          result[3] += 0.5451263537906137;
          result[4] += 0.010830324909747292;
          result[5] += 0.4043321299638989;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0.1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9932126696832579;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.006787330316742082;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
          result[0] += 0.10365853658536585;
          result[1] += 0.16463414634146342;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7134146341463414;
          result[5] += 0.018292682926829267;
        } else {
          result[0] += 0.7170050761421319;
          result[1] += 0.017766497461928935;
          result[2] += 0.06598984771573604;
          result[3] += 0.07741116751269035;
          result[4] += 0.05901015228426396;
          result[5] += 0.06281725888324872;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9387755102040817;
          result[4] += 0;
          result[5] += 0.061224489795918366;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05970149253731343;
          result[3] += 0.40298507462686567;
          result[4] += 0.07462686567164178;
          result[5] += 0.4626865671641791;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06521739130434782;
          result[3] += 0.10869565217391304;
          result[4] += 0.10869565217391304;
          result[5] += 0.717391304347826;
        } else {
          result[0] += 0;
          result[1] += 0.058823529411764705;
          result[2] += 0.6470588235294118;
          result[3] += 0.29411764705882354;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42e40000))) ) ) {
          result[0] += 0.018181818181818184;
          result[1] += 0.03636363636363637;
          result[2] += 0.3454545454545455;
          result[3] += 0.18181818181818185;
          result[4] += 0.16363636363636366;
          result[5] += 0.2545454545454546;
        } else {
          result[0] += 0.8;
          result[1] += 0;
          result[2] += 0.13333333333333333;
          result[3] += 0;
          result[4] += 0.06666666666666667;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7595419847328244;
          result[3] += 0.20229007633587787;
          result[4] += 0.003816793893129771;
          result[5] += 0.03435114503816794;
        } else {
          result[0] += 0.005665722379603401;
          result[1] += 0;
          result[2] += 0.934844192634561;
          result[3] += 0.052407932011331454;
          result[4] += 0;
          result[5] += 0.00708215297450425;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42300000))) ) ) {
          result[0] += 0;
          result[1] += 0.8235294117647058;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.17647058823529413;
          result[5] += 0;
        } else {
          result[0] += 0.007518796992481203;
          result[1] += 0.022556390977443608;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8721804511278195;
          result[5] += 0.09774436090225563;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0.019585253456221197;
          result[1] += 0.002304147465437788;
          result[2] += 0;
          result[3] += 0.04377880184331797;
          result[4] += 0.024193548387096774;
          result[5] += 0.9101382488479263;
        } else {
          result[0] += 0.08771929824561404;
          result[1] += 0.015037593984962409;
          result[2] += 0.04511278195488722;
          result[3] += 0.43609022556390986;
          result[4] += 0.05263157894736843;
          result[5] += 0.3634085213032582;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0.03048780487804878;
          result[1] += 0.31097560975609756;
          result[2] += 0.012195121951219513;
          result[3] += 0.012195121951219513;
          result[4] += 0.6341463414634146;
          result[5] += 0;
        } else {
          result[0] += 0.6700188560653677;
          result[1] += 0.0069138906348208675;
          result[2] += 0.06096794468887492;
          result[3] += 0.10245128849780012;
          result[4] += 0.0798240100565682;
          result[5] += 0.0798240100565682;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x429e0000))) ) ) {
          result[0] += 0;
          result[1] += 0.9975845410628019;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0024154589371980675;
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
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.13157894736842105;
          result[3] += 0.13157894736842105;
          result[4] += 0.07894736842105263;
          result[5] += 0.6578947368421053;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.34146341463414637;
          result[3] += 0.5975609756097561;
          result[4] += 0;
          result[5] += 0.06097560975609756;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8235294117647058;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.17647058823529413;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c10000))) ) ) {
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
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7627118644067797;
          result[3] += 0.2090395480225989;
          result[4] += 0;
          result[5] += 0.028248587570621472;
        } else {
          result[0] += 0.013245033112582781;
          result[1] += 0;
          result[2] += 0.9496688741721855;
          result[3] += 0.03443708609271523;
          result[4] += 0;
          result[5] += 0.0026490066225165563;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0.004081632653061225;
          result[1] += 0.024489795918367346;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9469387755102041;
          result[5] += 0.024489795918367346;
        } else {
          result[0] += 0.4954128440366973;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.027522935779816515;
          result[4] += 0.1743119266055046;
          result[5] += 0.30275229357798167;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.028358208955223882;
          result[4] += 0.022388059701492536;
          result[5] += 0.9492537313432836;
        } else {
          result[0] += 0;
          result[1] += 0.023094688221709007;
          result[2] += 0;
          result[3] += 0.42494226327944573;
          result[4] += 0.09468822170900693;
          result[5] += 0.45727482678983833;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 0.14736842105263157;
          result[2] += 0.010526315789473684;
          result[3] += 0.05263157894736842;
          result[4] += 0.7894736842105263;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9879518072289156;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.012048192771084338;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0.4922048997772829;
          result[1] += 0.05456570155902005;
          result[2] += 0.036748329621380846;
          result[3] += 0.09688195991091314;
          result[4] += 0.16369710467706014;
          result[5] += 0.155902004454343;
        } else {
          result[0] += 0.9360119047619045;
          result[1] += 0;
          result[2] += 0.016369047619047616;
          result[3] += 0.019345238095238092;
          result[4] += 0.02529761904761904;
          result[5] += 0.002976190476190475;
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42b30000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0.00980392156862745;
          result[1] += 0.00980392156862745;
          result[2] += 0.11764705882352941;
          result[3] += 0.49019607843137253;
          result[4] += 0.0196078431372549;
          result[5] += 0.35294117647058826;
        } else {
          result[0] += 0.3076923076923077;
          result[1] += 0.019230769230769232;
          result[2] += 0.4230769230769231;
          result[3] += 0.17307692307692307;
          result[4] += 0.019230769230769232;
          result[5] += 0.057692307692307696;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5;
          result[4] += 0.5;
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
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42e10000))) ) ) {
          result[0] += 0.26666666666666666;
          result[1] += 0;
          result[2] += 0.7333333333333333;
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
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5338983050847458;
          result[3] += 0.3389830508474576;
          result[4] += 0;
          result[5] += 0.1271186440677966;
        } else {
          result[0] += 0.008274231678486997;
          result[1] += 0;
          result[2] += 0.9160756501182034;
          result[3] += 0.07328605200945626;
          result[4] += 0;
          result[5] += 0.002364066193853428;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c00000))) ) ) {
          result[0] += 0;
          result[1] += 0.02;
          result[2] += 0;
          result[3] += 0.02;
          result[4] += 0.932;
          result[5] += 0.028;
        } else {
          result[0] += 0;
          result[1] += 0.76;
          result[2] += 0;
          result[3] += 0.08;
          result[4] += 0;
          result[5] += 0.16;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0.03905447070914697;
          result[1] += 0.003083247687564234;
          result[2] += 0.0020554984583761563;
          result[3] += 0.05755395683453238;
          result[4] += 0.06166495375128469;
          result[5] += 0.8365878725590956;
        } else {
          result[0] += 0.015;
          result[1] += 0;
          result[2] += 0.13;
          result[3] += 0.605;
          result[4] += 0.005;
          result[5] += 0.245;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0.22772277227722773;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7425742574257426;
          result[5] += 0.0297029702970297;
        } else {
          result[0] += 0;
          result[1] += 0.986013986013986;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.013986013986013986;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.8209825145711908;
          result[1] += 0.012489592006661117;
          result[2] += 0.0066611157368859295;
          result[3] += 0.04079933388842632;
          result[4] += 0.07743547044129893;
          result[5] += 0.04163197335553706;
        } else {
          result[0] += 0.38253012048192775;
          result[1] += 0.042168674698795185;
          result[2] += 0.21084337349397594;
          result[3] += 0.1807228915662651;
          result[4] += 0.07831325301204821;
          result[5] += 0.10542168674698797;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42bc0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.08;
          result[4] += 0.88;
          result[5] += 0.04;
        } else {
          result[0] += 0.6;
          result[1] += 0;
          result[2] += 0.4;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0.02631578947368421;
          result[1] += 0.013157894736842105;
          result[2] += 0.02631578947368421;
          result[3] += 0.14473684210526316;
          result[4] += 0.09210526315789473;
          result[5] += 0.6973684210526315;
        } else {
          result[0] += 0;
          result[1] += 0.010471204188481676;
          result[2] += 0.2617801047120419;
          result[3] += 0.5392670157068062;
          result[4] += 0;
          result[5] += 0.18848167539267016;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.42857142857142855;
          result[4] += 0.07142857142857142;
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
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0.0044943820224719105;
          result[1] += 0;
          result[2] += 0.8314606741573034;
          result[3] += 0.1348314606741573;
          result[4] += 0;
          result[5] += 0.029213483146067417;
        } else {
          result[0] += 0.00914076782449726;
          result[1] += 0;
          result[2] += 0.963436928702011;
          result[3] += 0.027422303473491776;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.947136563876652;
          result[5] += 0.05286343612334802;
        } else {
          result[0] += 0;
          result[1] += 0.6190476190476191;
          result[2] += 0;
          result[3] += 0.14285714285714285;
          result[4] += 0;
          result[5] += 0.23809523809523808;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42620000))) ) ) {
          result[0] += 0.5405405405405406;
          result[1] += 0.013513513513513514;
          result[2] += 0.02702702702702703;
          result[3] += 0.04054054054054054;
          result[4] += 0.32432432432432434;
          result[5] += 0.05405405405405406;
        } else {
          result[0] += 0.0026362038664323375;
          result[1] += 0.0008787346221441124;
          result[2] += 0.005272407732864675;
          result[3] += 0.13708260105448156;
          result[4] += 0.048330404217926184;
          result[5] += 0.8057996485061512;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
          result[0] += 0;
          result[1] += 0.986046511627907;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.013953488372093023;
          result[5] += 0;
        } else {
          result[0] += 0.03007518796992481;
          result[1] += 0.23308270676691728;
          result[2] += 0.007518796992481203;
          result[3] += 0.03759398496240601;
          result[4] += 0.6842105263157895;
          result[5] += 0.007518796992481203;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0.36807817589576547;
          result[1] += 0.006514657980456026;
          result[2] += 0.07166123778501629;
          result[3] += 0.30293159609120524;
          result[4] += 0.06514657980456026;
          result[5] += 0.18566775244299674;
        } else {
          result[0] += 0.8426688632619441;
          result[1] += 0.027182866556836906;
          result[2] += 0.02553542009884679;
          result[3] += 0.02224052718286656;
          result[4] += 0.06095551894563427;
          result[5] += 0.021416803953871504;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0.04477611940298507;
          result[2] += 0.05970149253731343;
          result[3] += 0.16417910447761194;
          result[4] += 0.029850746268656716;
          result[5] += 0.7014925373134329;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05;
          result[3] += 0.6;
          result[4] += 0.016666666666666666;
          result[5] += 0.3333333333333333;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.20270270270270271;
          result[3] += 0.7162162162162162;
          result[4] += 0;
          result[5] += 0.08108108108108109;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7761194029850746;
          result[3] += 0.16417910447761194;
          result[4] += 0;
          result[5] += 0.05970149253731343;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0.10256410256410256;
          result[2] += 0.07692307692307693;
          result[3] += 0.15384615384615385;
          result[4] += 0.20512820512820512;
          result[5] += 0.46153846153846156;
        } else {
          result[0] += 0.041666666666666664;
          result[1] += 0;
          result[2] += 0.6666666666666666;
          result[3] += 0.20833333333333334;
          result[4] += 0;
          result[5] += 0.08333333333333333;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x429e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.011904761904761904;
          result[1] += 0;
          result[2] += 0.922077922077922;
          result[3] += 0.05735930735930736;
          result[4] += 0.0010822510822510823;
          result[5] += 0.007575757575757576;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428d0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 0.009345794392523364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9719626168224299;
          result[5] += 0.018691588785046728;
        } else {
          result[0] += 0;
          result[1] += 0.8571428571428571;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.14285714285714285;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 0.15;
          result[2] += 0.016666666666666666;
          result[3] += 0.08333333333333333;
          result[4] += 0.65;
          result[5] += 0.1;
        } else {
          result[0] += 0.017471736896197326;
          result[1] += 0;
          result[2] += 0.006166495375128468;
          result[3] += 0.08530318602261049;
          result[4] += 0.029804727646454265;
          result[5] += 0.8612538540596094;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.978813559322034;
          result[2] += 0;
          result[3] += 0.008474576271186442;
          result[4] += 0.010593220338983052;
          result[5] += 0.0021186440677966106;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.7224462365591399;
          result[1] += 0.040322580645161296;
          result[2] += 0;
          result[3] += 0.029569892473118285;
          result[4] += 0.1370967741935484;
          result[5] += 0.07056451612903228;
        } else {
          result[0] += 0.14942528735632185;
          result[1] += 0.0038314176245210726;
          result[2] += 0.21455938697318008;
          result[3] += 0.3773946360153257;
          result[4] += 0.017241379310344827;
          result[5] += 0.23754789272030652;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06666666666666667;
          result[3] += 0.06666666666666667;
          result[4] += 0.06666666666666667;
          result[5] += 0.8;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.75;
          result[3] += 0.25;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.22580645161290322;
          result[3] += 0.7419354838709677;
          result[4] += 0;
          result[5] += 0.03225806451612903;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.46153846153846156;
          result[3] += 0.11538461538461539;
          result[4] += 0;
          result[5] += 0.4230769230769231;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42960000))) ) ) {
          result[0] += 0;
          result[1] += 0.5714285714285714;
          result[2] += 0;
          result[3] += 0.42857142857142855;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7730769230769231;
          result[3] += 0.20384615384615384;
          result[4] += 0;
          result[5] += 0.023076923076923078;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0.0014684287812041117;
          result[1] += 0;
          result[2] += 0.9383259911894274;
          result[3] += 0.05139500734214391;
          result[4] += 0;
          result[5] += 0.008810572687224672;
        } else {
          result[0] += 0.2727272727272727;
          result[1] += 0;
          result[2] += 0.7272727272727273;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0.009950248756218905;
          result[1] += 0.004975124378109453;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9800995024875622;
          result[5] += 0.004975124378109453;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6666666666666666;
          result[5] += 0.3333333333333333;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0.029691211401425176;
          result[1] += 0.007125890736342043;
          result[2] += 0.0023752969121140144;
          result[3] += 0.052256532066508314;
          result[4] += 0.05938242280285035;
          result[5] += 0.8491686460807601;
        } else {
          result[0] += 0.03514376996805112;
          result[1] += 0.07028753993610223;
          result[2] += 0.012779552715654952;
          result[3] += 0.5047923322683706;
          result[4] += 0.03514376996805112;
          result[5] += 0.34185303514376997;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 0.2857142857142857;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7142857142857143;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9976019184652278;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002398081534772182;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.7951719092904169;
          result[1] += 0.026335040234089245;
          result[2] += 0.001463057790782736;
          result[3] += 0.03218727139722019;
          result[4] += 0.12655449890270665;
          result[5] += 0.018288222384784197;
        } else {
          result[0] += 0.11893203883495146;
          result[1] += 0.02912621359223301;
          result[2] += 0.13106796116504854;
          result[3] += 0.2621359223300971;
          result[4] += 0.12864077669902912;
          result[5] += 0.3300970873786408;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c30000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0.0234375;
          result[1] += 0;
          result[2] += 0.1171875;
          result[3] += 0.59375;
          result[4] += 0.015625;
          result[5] += 0.25;
        } else {
          result[0] += 0.09090909090909091;
          result[1] += 0;
          result[2] += 0.7121212121212122;
          result[3] += 0.06060606060606061;
          result[4] += 0;
          result[5] += 0.13636363636363635;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0.03823529411764707;
          result[1] += 0;
          result[2] += 0.761764705882353;
          result[3] += 0.1647058823529412;
          result[4] += 0.011764705882352943;
          result[5] += 0.023529411764705885;
        } else {
          result[0] += 0.8235294117647058;
          result[1] += 0;
          result[2] += 0.17647058823529413;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.88;
          result[3] += 0.06;
          result[4] += 0;
          result[5] += 0.06;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9022988505747126;
          result[3] += 0.09770114942528736;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9976076555023924;
          result[3] += 0.0023923444976076554;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 0.013761467889908258;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9724770642201835;
          result[5] += 0.013761467889908258;
        } else {
          result[0] += 0.0125;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7125;
          result[5] += 0.275;
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
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0.8695652173913043;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.13043478260869565;
          result[5] += 0;
        } else {
          result[0] += 0.006257822277847309;
          result[1] += 0.0012515644555694619;
          result[2] += 0;
          result[3] += 0.03879849812265332;
          result[4] += 0.03754693366708386;
          result[5] += 0.9161451814768461;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42620000))) ) ) {
          result[0] += 0.7407407407407408;
          result[1] += 0.03703703703703704;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.22222222222222224;
          result[5] += 0;
        } else {
          result[0] += 0.009478672985781991;
          result[1] += 0.014218009478672985;
          result[2] += 0.05687203791469194;
          result[3] += 0.47393364928909953;
          result[4] += 0.026066350710900472;
          result[5] += 0.4194312796208531;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0.4411764705882353;
          result[2] += 0.029411764705882353;
          result[3] += 0.14705882352941177;
          result[4] += 0.38235294117647056;
          result[5] += 0;
        } else {
          result[0] += 0.007481296758104738;
          result[1] += 0.9850374064837906;
          result[2] += 0;
          result[3] += 0.0024937655860349127;
          result[4] += 0.004987531172069825;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0.027777777777777776;
          result[1] += 0.4097222222222222;
          result[2] += 0;
          result[3] += 0.013888888888888888;
          result[4] += 0.4930555555555556;
          result[5] += 0.05555555555555555;
        } else {
          result[0] += 0.756958587915818;
          result[1] += 0.0033944331296673455;
          result[2] += 0.012898845892735914;
          result[3] += 0.0658520027155465;
          result[4] += 0.09843856076035302;
          result[5] += 0.062457569585879155;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0.016129032258064516;
          result[1] += 0;
          result[2] += 0.0967741935483871;
          result[3] += 0.1935483870967742;
          result[4] += 0.08064516129032258;
          result[5] += 0.6129032258064516;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3257575757575758;
          result[3] += 0.5151515151515152;
          result[4] += 0;
          result[5] += 0.15909090909090912;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0.03365384615384615;
          result[2] += 0.6009615384615384;
          result[3] += 0.3173076923076923;
          result[4] += 0;
          result[5] += 0.04807692307692308;
        } else {
          result[0] += 0.034526854219948847;
          result[1] += 0.0025575447570332483;
          result[2] += 0.8976982097186701;
          result[3] += 0.05370843989769821;
          result[4] += 0.005115089514066497;
          result[5] += 0.00639386189258312;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b90000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0.0031847133757961785;
          result[1] += 0.05732484076433121;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9203821656050956;
          result[5] += 0.01910828025477707;
        } else {
          result[0] += 0.675531914893617;
          result[1] += 0.010638297872340425;
          result[2] += 0;
          result[3] += 0.02127659574468085;
          result[4] += 0.15425531914893617;
          result[5] += 0.13829787234042554;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0.009900990099009901;
          result[2] += 0.004243281471004243;
          result[3] += 0.028288543140028287;
          result[4] += 0.042432814710042434;
          result[5] += 0.9151343705799151;
        } else {
          result[0] += 0.01785714285714286;
          result[1] += 0.01785714285714286;
          result[2] += 0.03392857142857143;
          result[3] += 0.2535714285714286;
          result[4] += 0.13392857142857145;
          result[5] += 0.5428571428571429;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42660000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0.3793103448275862;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6206896551724138;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9977324263038548;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0022675736961451248;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.8331697742885181;
          result[1] += 0.015701668302257114;
          result[2] += 0.0009813542688910696;
          result[3] += 0.02747791952894995;
          result[4] += 0.09911678115799803;
          result[5] += 0.023552502453385672;
        } else {
          result[0] += 0.2398921832884097;
          result[1] += 0.005390835579514825;
          result[2] += 0.1752021563342318;
          result[3] += 0.38274932614555257;
          result[4] += 0.03234501347708895;
          result[5] += 0.16442048517520216;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
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
          result[3] += 0.07317073170731707;
          result[4] += 0.04878048780487805;
          result[5] += 0.8780487804878049;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0.053571428571428575;
          result[2] += 0.0892857142857143;
          result[3] += 0.43750000000000006;
          result[4] += 0.10714285714285715;
          result[5] += 0.31250000000000006;
        } else {
          result[0] += 0.08450704225352114;
          result[1] += 0.07042253521126762;
          result[2] += 0.619718309859155;
          result[3] += 0.11267605633802819;
          result[4] += 0.04225352112676057;
          result[5] += 0.07042253521126762;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42cd0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0.48148148148148145;
          result[4] += 0.07407407407407407;
          result[5] += 0.1111111111111111;
        } else {
          result[0] += 0.01915708812260536;
          result[1] += 0;
          result[2] += 0.8084291187739462;
          result[3] += 0.14942528735632182;
          result[4] += 0;
          result[5] += 0.022988505747126433;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0.6;
          result[1] += 0;
          result[2] += 0.4;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0030075187969924814;
          result[1] += 0;
          result[2] += 0.9518796992481203;
          result[3] += 0.042105263157894736;
          result[4] += 0;
          result[5] += 0.0030075187969924814;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0.004201680672268907;
          result[1] += 0.008403361344537815;
          result[2] += 0.01680672268907563;
          result[3] += 0.02100840336134454;
          result[4] += 0.8613445378151261;
          result[5] += 0.08823529411764706;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0.02415966386554622;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.045168067226890755;
          result[4] += 0.06302521008403361;
          result[5] += 0.8676470588235294;
        } else {
          result[0] += 0.08695652173913043;
          result[1] += 0.028985507246376812;
          result[2] += 0.00966183574879227;
          result[3] += 0.6086956521739131;
          result[4] += 0.00966183574879227;
          result[5] += 0.2560386473429952;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b30000))) ) ) {
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
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.765090909090909;
          result[1] += 0.02690909090909091;
          result[2] += 0.005090909090909091;
          result[3] += 0.02618181818181818;
          result[4] += 0.13018181818181818;
          result[5] += 0.04654545454545454;
        } else {
          result[0] += 0.13174946004319654;
          result[1] += 0.017278617710583154;
          result[2] += 0.2634989200863931;
          result[3] += 0.2548596112311015;
          result[4] += 0.058315334773218146;
          result[5] += 0.27429805615550756;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42be0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.06451612903225806;
          result[4] += 0.08064516129032258;
          result[5] += 0.8548387096774194;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.22222222222222224;
          result[3] += 0.11111111111111112;
          result[4] += 0.4444444444444445;
          result[5] += 0.22222222222222224;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0.06796116504854369;
          result[1] += 0.02912621359223301;
          result[2] += 0.2815533980582524;
          result[3] += 0.46601941747572817;
          result[4] += 0.02912621359223301;
          result[5] += 0.1262135922330097;
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
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0.25;
          result[1] += 0;
          result[2] += 0.75;
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
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7192982456140351;
          result[3] += 0.20175438596491227;
          result[4] += 0;
          result[5] += 0.07894736842105263;
        } else {
          result[0] += 0.008997429305912597;
          result[1] += 0;
          result[2] += 0.9460154241645244;
          result[3] += 0.04498714652956298;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0.007782101167315175;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.007782101167315175;
          result[4] += 0.9610894941634242;
          result[5] += 0.023346303501945526;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0.035331905781584586;
          result[1] += 0;
          result[2] += 0.0010706638115631692;
          result[3] += 0.069593147751606;
          result[4] += 0.048179871520342615;
          result[5] += 0.8458244111349036;
        } else {
          result[0] += 0.06853582554517133;
          result[1] += 0;
          result[2] += 0.003115264797507788;
          result[3] += 0.4423676012461059;
          result[4] += 0.040498442367601244;
          result[5] += 0.4454828660436137;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42460000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0.92;
          result[1] += 0.08;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.008264462809917356;
          result[1] += 0.9834710743801653;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.008264462809917356;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0.07905138339920949;
          result[1] += 0.39920948616600793;
          result[2] += 0.007905138339920948;
          result[3] += 0.015810276679841896;
          result[4] += 0.48221343873517786;
          result[5] += 0.015810276679841896;
        } else {
          result[0] += 0.7227456258411844;
          result[1] += 0.024226110363391656;
          result[2] += 0.039703903095558546;
          result[3] += 0.08142664872139974;
          result[4] += 0.0639300134589502;
          result[5] += 0.06796769851951548;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1752577319587629;
          result[3] += 0.6082474226804124;
          result[4] += 0;
          result[5] += 0.21649484536082478;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4838709677419355;
          result[3] += 0.16129032258064516;
          result[4] += 0;
          result[5] += 0.3548387096774194;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09090909090909091;
          result[3] += 0.36363636363636365;
          result[4] += 0;
          result[5] += 0.5454545454545454;
        } else {
          result[0] += 0.03333333333333334;
          result[1] += 0;
          result[2] += 0.788888888888889;
          result[3] += 0.14444444444444446;
          result[4] += 0;
          result[5] += 0.03333333333333334;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4;
          result[3] += 0.2;
          result[4] += 0;
          result[5] += 0.4;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.843065693430657;
          result[3] += 0.15328467153284672;
          result[4] += 0;
          result[5] += 0.0036496350364963502;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0.5294117647058824;
          result[1] += 0;
          result[2] += 0.47058823529411764;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.009584664536741214;
          result[1] += 0;
          result[2] += 0.9584664536741214;
          result[3] += 0.027156549520766772;
          result[4] += 0;
          result[5] += 0.004792332268370607;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9952380952380953;
          result[5] += 0.004761904761904762;
        } else {
          result[0] += 0;
          result[1] += 0.05555555555555555;
          result[2] += 0;
          result[3] += 0.08333333333333333;
          result[4] += 0.5972222222222222;
          result[5] += 0.2638888888888889;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0.02870264064293915;
          result[1] += 0.001148105625717566;
          result[2] += 0.002296211251435132;
          result[3] += 0.040183696900114814;
          result[4] += 0.06314580941446613;
          result[5] += 0.8645235361653272;
        } else {
          result[0] += 0.043010752688172046;
          result[1] += 0.002688172043010753;
          result[2] += 0.002688172043010753;
          result[3] += 0.4220430107526882;
          result[4] += 0.04838709677419355;
          result[5] += 0.48118279569892475;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 0.3924050632911392;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6075949367088608;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9811320754716981;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.018867924528301886;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.8273667462211616;
          result[1] += 0.035799522673031034;
          result[2] += 0.003182179793158314;
          result[3] += 0.027048528241845667;
          result[4] += 0.0851233094669849;
          result[5] += 0.021479713603818618;
        } else {
          result[0] += 0.15211267605633802;
          result[1] += 0.011267605633802818;
          result[2] += 0.2140845070422535;
          result[3] += 0.2140845070422535;
          result[4] += 0.14647887323943662;
          result[5] += 0.2619718309859155;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 0;
          result[1] += 0.04;
          result[2] += 0.05714285714285714;
          result[3] += 0.5314285714285715;
          result[4] += 0.045714285714285714;
          result[5] += 0.32571428571428573;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7428571428571429;
          result[3] += 0.2571428571428571;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0.02702702702702703;
          result[1] += 0;
          result[2] += 0.5945945945945946;
          result[3] += 0.35135135135135137;
          result[4] += 0;
          result[5] += 0.02702702702702703;
        } else {
          result[0] += 0.07407407407407407;
          result[1] += 0;
          result[2] += 0.8518518518518519;
          result[3] += 0.018518518518518517;
          result[4] += 0;
          result[5] += 0.05555555555555555;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2222222222222222;
          result[3] += 0.7777777777777778;
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
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0.03363914373088685;
          result[1] += 0;
          result[2] += 0.8348623853211009;
          result[3] += 0.1162079510703364;
          result[4] += 0;
          result[5] += 0.01529051987767584;
        } else {
          result[0] += 0.002012072434607646;
          result[1] += 0;
          result[2] += 0.9778672032193159;
          result[3] += 0.01609657947686117;
          result[4] += 0;
          result[5] += 0.004024144869215292;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0.008403361344537815;
          result[1] += 0.004201680672268907;
          result[2] += 0.01680672268907563;
          result[3] += 0.004201680672268907;
          result[4] += 0.9411764705882353;
          result[5] += 0.025210084033613446;
        } else {
          result[0] += 0;
          result[1] += 0.7333333333333333;
          result[2] += 0.06666666666666667;
          result[3] += 0;
          result[4] += 0.2;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0.027253668763102725;
          result[1] += 0.0041928721174004195;
          result[2] += 0.010482180293501049;
          result[3] += 0.05660377358490566;
          result[4] += 0.10272536687631027;
          result[5] += 0.7987421383647799;
        } else {
          result[0] += 0.0759493670886076;
          result[1] += 0.012658227848101266;
          result[2] += 0.03375527426160337;
          result[3] += 0.510548523206751;
          result[4] += 0.05907172995780591;
          result[5] += 0.3080168776371308;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0.1282051282051282;
          result[2] += 0;
          result[3] += 0.02564102564102564;
          result[4] += 0.8461538461538461;
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0.03205128205128205;
          result[1] += 0.391025641025641;
          result[2] += 0.02564102564102564;
          result[3] += 0.07051282051282051;
          result[4] += 0.42948717948717946;
          result[5] += 0.05128205128205128;
        } else {
          result[0] += 0.7389558232931727;
          result[1] += 0.004016064257028112;
          result[2] += 0.050870147255689425;
          result[3] += 0.07295850066934405;
          result[4] += 0.050200803212851405;
          result[5] += 0.08299866131191433;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06060606060606061;
          result[3] += 0.030303030303030304;
          result[4] += 0.16666666666666666;
          result[5] += 0.7424242424242424;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09523809523809523;
          result[3] += 0.6349206349206349;
          result[4] += 0;
          result[5] += 0.2698412698412698;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7058823529411765;
          result[3] += 0.20588235294117646;
          result[4] += 0;
          result[5] += 0.08823529411764706;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0.47619047619047616;
          result[2] += 0.23809523809523808;
          result[3] += 0.23809523809523808;
          result[4] += 0.047619047619047616;
          result[5] += 0;
        } else {
          result[0] += 0.8214285714285715;
          result[1] += 0;
          result[2] += 0.14285714285714288;
          result[3] += 0;
          result[4] += 0.03571428571428572;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5694444444444444;
          result[3] += 0.2916666666666667;
          result[4] += 0;
          result[5] += 0.1388888888888889;
        } else {
          result[0] += 0.01126126126126126;
          result[1] += 0;
          result[2] += 0.9256756756756757;
          result[3] += 0.061936936936936936;
          result[4] += 0.0011261261261261261;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42780000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 0.043478260869565216;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9446640316205533;
          result[5] += 0.011857707509881422;
        } else {
          result[0] += 0;
          result[1] += 0.47368421052631576;
          result[2] += 0;
          result[3] += 0.05263157894736842;
          result[4] += 0.21052631578947367;
          result[5] += 0.2631578947368421;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0.002849002849002849;
          result[1] += 0;
          result[2] += 0.007122507122507123;
          result[3] += 0.021367521367521368;
          result[4] += 0.05270655270655271;
          result[5] += 0.915954415954416;
        } else {
          result[0] += 0.08754863813229571;
          result[1] += 0.0038910505836575876;
          result[2] += 0.019455252918287938;
          result[3] += 0.36186770428015563;
          result[4] += 0.0914396887159533;
          result[5] += 0.4357976653696498;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 0.4857142857142857;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5142857142857142;
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
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.7474302496328928;
          result[1] += 0.033773861967694566;
          result[2] += 0.003671071953010279;
          result[3] += 0.011747430249632892;
          result[4] += 0.16005873715124816;
          result[5] += 0.04331864904552129;
        } else {
          result[0] += 0.16447368421052633;
          result[1] += 0;
          result[2] += 0.2565789473684211;
          result[3] += 0.2675438596491228;
          result[4] += 0.039473684210526314;
          result[5] += 0.2719298245614035;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05555555555555555;
          result[4] += 0.1388888888888889;
          result[5] += 0.8055555555555556;
        } else {
          result[0] += 0;
          result[1] += 0.10752688172043011;
          result[2] += 0.17204301075268819;
          result[3] += 0.5376344086021505;
          result[4] += 0;
          result[5] += 0.1827956989247312;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42dc0000))) ) ) {
          result[0] += 0.08;
          result[1] += 0;
          result[2] += 0.74;
          result[3] += 0.16;
          result[4] += 0.006666666666666667;
          result[5] += 0.013333333333333334;
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
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42910000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 1;
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8687782805429864;
          result[3] += 0.11764705882352941;
          result[4] += 0;
          result[5] += 0.013574660633484163;
        } else {
          result[0] += 0.003552397868561279;
          result[1] += 0;
          result[2] += 0.9804618117229129;
          result[3] += 0.015985790408525755;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0.14388489208633093;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8309352517985612;
          result[5] += 0.025179856115107913;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.057971014492753624;
          result[4] += 0.43478260869565216;
          result[5] += 0.5072463768115942;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0.002207505518763797;
          result[1] += 0.0033112582781456954;
          result[2] += 0;
          result[3] += 0.05518763796909492;
          result[4] += 0.0695364238410596;
          result[5] += 0.869757174392936;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.014925373134328358;
          result[3] += 0.6169154228855721;
          result[4] += 0.029850746268656716;
          result[5] += 0.3383084577114428;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0.43548387096774194;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5645161290322581;
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
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.7692895339954163;
          result[1] += 0.053475935828877004;
          result[2] += 0.004583651642475172;
          result[3] += 0.023682200152788387;
          result[4] += 0.12605042016806722;
          result[5] += 0.02291825821237586;
        } else {
          result[0] += 0.19407008086253372;
          result[1] += 0.02695417789757413;
          result[2] += 0.24797843665768196;
          result[3] += 0.2345013477088949;
          result[4] += 0.04312668463611861;
          result[5] += 0.2533692722371968;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0.021739130434782608;
          result[1] += 0.03260869565217391;
          result[2] += 0.14130434782608695;
          result[3] += 0.09782608695652174;
          result[4] += 0.09782608695652174;
          result[5] += 0.6086956521739131;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1839080459770115;
          result[3] += 0.6206896551724138;
          result[4] += 0.011494252873563218;
          result[5] += 0.1839080459770115;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0.01845018450184502;
          result[1] += 0.01107011070110701;
          result[2] += 0.6494464944649446;
          result[3] += 0.25092250922509224;
          result[4] += 0;
          result[5] += 0.07011070110701106;
        } else {
          result[0] += 0.6222222222222222;
          result[1] += 0.044444444444444446;
          result[2] += 0.3333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8857142857142857;
          result[3] += 0.11428571428571428;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9893617021276596;
          result[3] += 0.010638297872340425;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0.5;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.008152173913043478;
          result[1] += 0;
          result[2] += 0.9809782608695652;
          result[3] += 0.010869565217391304;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0.013513513513513514;
          result[1] += 0.018018018018018018;
          result[2] += 0.018018018018018018;
          result[3] += 0;
          result[4] += 0.9009009009009009;
          result[5] += 0.04954954954954955;
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
          result[0] += 0.02676659528907923;
          result[1] += 0.004282655246252677;
          result[2] += 0;
          result[3] += 0.06531049250535331;
          result[4] += 0.058886509635974305;
          result[5] += 0.8447537473233405;
        } else {
          result[0] += 0.004016064257028112;
          result[1] += 0.004016064257028112;
          result[2] += 0.020080321285140562;
          result[3] += 0.5180722891566265;
          result[4] += 0.08032128514056225;
          result[5] += 0.37349397590361444;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c40000))) ) ) {
          result[0] += 0;
          result[1] += 0.4536082474226804;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5463917525773195;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9977116704805492;
          result[2] += 0;
          result[3] += 0.002288329519450801;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.7901234567901235;
          result[1] += 0.02932098765432099;
          result[2] += 0.006944444444444445;
          result[3] += 0.022376543209876545;
          result[4] += 0.11265432098765434;
          result[5] += 0.03858024691358025;
        } else {
          result[0] += 0.23333333333333334;
          result[1] += 0.007407407407407408;
          result[2] += 0.13703703703703704;
          result[3] += 0.3074074074074074;
          result[4] += 0.05555555555555555;
          result[5] += 0.25925925925925924;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42db0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0136986301369863;
          result[3] += 0.2054794520547945;
          result[4] += 0.0684931506849315;
          result[5] += 0.7123287671232876;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42dd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14942528735632185;
          result[3] += 0.6436781609195402;
          result[4] += 0;
          result[5] += 0.20689655172413793;
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
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ba0000))) ) ) {
          result[0] += 0.014084507042253521;
          result[1] += 0.028169014084507043;
          result[2] += 0.6525821596244131;
          result[3] += 0.19718309859154928;
          result[4] += 0.014084507042253521;
          result[5] += 0.09389671361502347;
        } else {
          result[0] += 0.6666666666666666;
          result[1] += 0;
          result[2] += 0.14285714285714285;
          result[3] += 0.047619047619047616;
          result[4] += 0.14285714285714285;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.75;
          result[3] += 0.21875;
          result[4] += 0;
          result[5] += 0.03125;
        } else {
          result[0] += 0.0049751243781094535;
          result[1] += 0;
          result[2] += 0.9490049751243782;
          result[3] += 0.04228855721393036;
          result[4] += 0;
          result[5] += 0.00373134328358209;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0.01694915254237288;
          result[1] += 0.013559322033898305;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9016949152542373;
          result[5] += 0.06779661016949153;
        } else {
          result[0] += 0.5632183908045977;
          result[1] += 0;
          result[2] += 0.005747126436781609;
          result[3] += 0.011494252873563218;
          result[4] += 0.22413793103448276;
          result[5] += 0.19540229885057472;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0043541364296081275;
          result[3] += 0.01741654571843251;
          result[4] += 0.036284470246734396;
          result[5] += 0.941944847605225;
        } else {
          result[0] += 0.0029154518950437317;
          result[1] += 0.008746355685131196;
          result[2] += 0;
          result[3] += 0.2303206997084548;
          result[4] += 0.2099125364431487;
          result[5] += 0.5481049562682215;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x425a0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x429e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9951690821256038;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004830917874396135;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.7681159420289855;
          result[1] += 0.04669887278582931;
          result[2] += 0.008856682769726247;
          result[3] += 0.04428341384863124;
          result[4] += 0.11030595813204509;
          result[5] += 0.021739130434782608;
        } else {
          result[0] += 0.12478632478632479;
          result[1] += 0.006837606837606838;
          result[2] += 0.20683760683760682;
          result[3] += 0.3606837606837607;
          result[4] += 0.05299145299145299;
          result[5] += 0.24786324786324787;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42980000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07317073170731707;
          result[3] += 0.07317073170731707;
          result[4] += 0.0975609756097561;
          result[5] += 0.7560975609756098;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.15625;
          result[3] += 0.65625;
          result[4] += 0;
          result[5] += 0.1875;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.589041095890411;
          result[3] += 0.3287671232876712;
          result[4] += 0;
          result[5] += 0.0821917808219178;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0044994375703037125;
          result[1] += 0;
          result[2] += 0.9178852643419573;
          result[3] += 0.06974128233970754;
          result[4] += 0;
          result[5] += 0.007874015748031496;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42e90000))) ) ) {
          result[0] += 0.7142857142857143;
          result[1] += 0;
          result[2] += 0.19047619047619047;
          result[3] += 0;
          result[4] += 0.09523809523809523;
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
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0;
          result[1] += 0.0038910505836575876;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9688715953307393;
          result[5] += 0.027237354085603113;
        } else {
          result[0] += 0.4936708860759494;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.06329113924050633;
          result[4] += 0.12658227848101267;
          result[5] += 0.31645569620253167;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0013089005235602095;
          result[3] += 0.028795811518324606;
          result[4] += 0.0549738219895288;
          result[5] += 0.9149214659685864;
        } else {
          result[0] += 0.002380952380952381;
          result[1] += 0.011904761904761904;
          result[2] += 0.002380952380952381;
          result[3] += 0.36666666666666664;
          result[4] += 0.08571428571428572;
          result[5] += 0.530952380952381;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0.4725274725274725;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5274725274725275;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.8;
          result[1] += 0.020717131474103586;
          result[2] += 0.005577689243027889;
          result[3] += 0.027091633466135457;
          result[4] += 0.12270916334661354;
          result[5] += 0.02390438247011952;
        } else {
          result[0] += 0.26348547717842324;
          result[1] += 0.035269709543568464;
          result[2] += 0.22614107883817428;
          result[3] += 0.25933609958506226;
          result[4] += 0.04149377593360996;
          result[5] += 0.17427385892116182;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0.125;
          result[1] += 0;
          result[2] += 0.020833333333333332;
          result[3] += 0.10416666666666667;
          result[4] += 0.2916666666666667;
          result[5] += 0.4583333333333333;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16071428571428573;
          result[3] += 0.7142857142857143;
          result[4] += 0;
          result[5] += 0.125;
        } else {
          result[0] += 0.05747126436781609;
          result[1] += 0;
          result[2] += 0.6091954022988506;
          result[3] += 0.12643678160919541;
          result[4] += 0.022988505747126436;
          result[5] += 0.1839080459770115;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5833333333333334;
          result[3] += 0.4;
          result[4] += 0;
          result[5] += 0.016666666666666666;
        } else {
          result[0] += 0.007042253521126762;
          result[1] += 0;
          result[2] += 0.8591549295774649;
          result[3] += 0.11971830985915494;
          result[4] += 0;
          result[5] += 0.014084507042253523;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5333333333333333;
          result[3] += 0.4666666666666667;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0055248618784530384;
          result[1] += 0;
          result[2] += 0.9834254143646409;
          result[3] += 0.011049723756906077;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d70000))) ) ) {
          result[0] += 0.017921146953405017;
          result[1] += 0.0035842293906810036;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9032258064516129;
          result[5] += 0.07526881720430108;
        } else {
          result[0] += 0;
          result[1] += 0.9285714285714286;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.07142857142857142;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0.9611650485436893;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.038834951456310676;
          result[5] += 0;
        } else {
          result[0] += 0.06666666666666667;
          result[1] += 0.03333333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5166666666666667;
          result[5] += 0.38333333333333336;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.020463847203274217;
          result[4] += 0.03956343792633015;
          result[5] += 0.9399727148703957;
        } else {
          result[0] += 0.055776892430278883;
          result[1] += 0.00796812749003984;
          result[2] += 0.01195219123505976;
          result[3] += 0.22310756972111553;
          result[4] += 0.11553784860557768;
          result[5] += 0.5856573705179283;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.014285714285714285;
          result[3] += 0.11428571428571428;
          result[4] += 0.1;
          result[5] += 0.7714285714285715;
        } else {
          result[0] += 0.01056338028169014;
          result[1] += 0.007042253521126761;
          result[2] += 0.01056338028169014;
          result[3] += 0.7429577464788732;
          result[4] += 0.01056338028169014;
          result[5] += 0.21830985915492956;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425a0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b20000))) ) ) {
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
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0.18536585365853658;
          result[1] += 0.05365853658536585;
          result[2] += 0.1073170731707317;
          result[3] += 0.21951219512195122;
          result[4] += 0.15121951219512195;
          result[5] += 0.28292682926829266;
        } else {
          result[0] += 0.8071672354948806;
          result[1] += 0.01877133105802048;
          result[2] += 0.016211604095563138;
          result[3] += 0.027303754266211604;
          result[4] += 0.12372013651877133;
          result[5] += 0.006825938566552901;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0.04716981132075472;
          result[2] += 0.3018867924528302;
          result[3] += 0.46226415094339623;
          result[4] += 0.018867924528301886;
          result[5] += 0.16981132075471697;
        } else {
          result[0] += 0.07052896725440806;
          result[1] += 0.012594458438287154;
          result[2] += 0.6977329974811083;
          result[3] += 0.16120906801007556;
          result[4] += 0.017632241813602016;
          result[5] += 0.04030226700251889;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42950000))) ) ) {
          result[0] += 0.06666666666666667;
          result[1] += 0;
          result[2] += 0.4666666666666667;
          result[3] += 0;
          result[4] += 0.06666666666666667;
          result[5] += 0.4;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.958904109589041;
          result[3] += 0.0395738203957382;
          result[4] += 0;
          result[5] += 0.0015220700152207;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42400000))) ) ) {
          result[0] += 0;
          result[1] += 0.7586206896551724;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.13793103448275862;
          result[5] += 0.10344827586206896;
        } else {
          result[0] += 0;
          result[1] += 0.00816326530612245;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9755102040816327;
          result[5] += 0.0163265306122449;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0.0026702269692923898;
          result[1] += 0.009345794392523364;
          result[2] += 0.0026702269692923898;
          result[3] += 0.021361815754339118;
          result[4] += 0.03871829105473965;
          result[5] += 0.9252336448598131;
        } else {
          result[0] += 0.08775510204081632;
          result[1] += 0.01020408163265306;
          result[2] += 0.018367346938775512;
          result[3] += 0.35306122448979593;
          result[4] += 0.10408163265306122;
          result[5] += 0.42653061224489797;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0.3333333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6666666666666666;
          result[5] += 0;
        } else {
          result[0] += 0.004464285714285714;
          result[1] += 0.9910714285714286;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004464285714285714;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.8024224072672218;
          result[1] += 0.04390613171839516;
          result[2] += 0.003785011355034065;
          result[3] += 0.015897047691143074;
          result[4] += 0.11430734292202877;
          result[5] += 0.01968205904617714;
        } else {
          result[0] += 0.21291866028708134;
          result[1] += 0.009569377990430622;
          result[2] += 0.19856459330143542;
          result[3] += 0.22248803827751196;
          result[4] += 0.05502392344497608;
          result[5] += 0.3014354066985646;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42810000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427c0000))) ) ) {
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
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.21428571428571427;
          result[3] += 0.5928571428571429;
          result[4] += 0.07857142857142857;
          result[5] += 0.11428571428571428;
        } else {
          result[0] += 0.016000000000000004;
          result[1] += 0;
          result[2] += 0.7200000000000001;
          result[3] += 0.17600000000000002;
          result[4] += 0.008000000000000002;
          result[5] += 0.08000000000000002;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42e10000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0.7142857142857143;
          result[1] += 0;
          result[2] += 0.14285714285714285;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.14285714285714285;
        } else {
          result[0] += 0.005025125628140704;
          result[1] += 0;
          result[2] += 0.9384422110552764;
          result[3] += 0.04522613065326633;
          result[4] += 0;
          result[5] += 0.011306532663316583;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42f50000))) ) ) {
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
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9788359788359788;
          result[5] += 0.021164021164021163;
        } else {
          result[0] += 0.023809523809523808;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5714285714285714;
          result[5] += 0.40476190476190477;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.004;
          result[3] += 0.018666666666666668;
          result[4] += 0.03333333333333333;
          result[5] += 0.944;
        } else {
          result[0] += 0.06601466992665037;
          result[1] += 0.0488997555012225;
          result[2] += 0.009779951100244499;
          result[3] += 0.33251833740831294;
          result[4] += 0.08312958435207823;
          result[5] += 0.45965770171149145;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0.18518518518518517;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8148148148148148;
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
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.7356733524355301;
          result[1] += 0.024355300859598854;
          result[2] += 0.0028653295128939827;
          result[3] += 0.0336676217765043;
          result[4] += 0.1504297994269341;
          result[5] += 0.05300859598853868;
        } else {
          result[0] += 0.17375886524822695;
          result[1] += 0.008865248226950355;
          result[2] += 0.22872340425531915;
          result[3] += 0.3067375886524823;
          result[4] += 0.0549645390070922;
          result[5] += 0.22695035460992907;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x424a0000))) ) ) {
          result[0] += 0;
          result[1] += 0.5;
          result[2] += 0;
          result[3] += 0.5;
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
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 0.018518518518518517;
          result[2] += 0.1111111111111111;
          result[3] += 0.05555555555555555;
          result[4] += 0.07407407407407407;
          result[5] += 0.7407407407407407;
        } else {
          result[0] += 0.05263157894736842;
          result[1] += 0;
          result[2] += 0.4605263157894737;
          result[3] += 0.32894736842105265;
          result[4] += 0;
          result[5] += 0.15789473684210525;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0.01886792452830189;
          result[1] += 0;
          result[2] += 0.7169811320754718;
          result[3] += 0.2547169811320755;
          result[4] += 0;
          result[5] += 0.009433962264150945;
        } else {
          result[0] += 0.875;
          result[1] += 0;
          result[2] += 0.125;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0.006289308176100629;
          result[1] += 0;
          result[2] += 0.8427672955974843;
          result[3] += 0.1509433962264151;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0021276595744680856;
          result[1] += 0;
          result[2] += 0.9787234042553192;
          result[3] += 0.012765957446808512;
          result[4] += 0;
          result[5] += 0.006382978723404256;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x423e0000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.004291845493562232;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9957081545064378;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42460000))) ) ) {
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
          result[4] += 0.9090909090909091;
          result[5] += 0.09090909090909091;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0.6470588235294118;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.29411764705882354;
          result[5] += 0.058823529411764705;
        } else {
          result[0] += 0;
          result[1] += 0.002296211251435132;
          result[2] += 0;
          result[3] += 0.0539609644087256;
          result[4] += 0.05281285878300804;
          result[5] += 0.8909299655568312;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0.08823529411764706;
          result[1] += 0.051470588235294115;
          result[2] += 0;
          result[3] += 0.08823529411764706;
          result[4] += 0.21323529411764705;
          result[5] += 0.5588235294117647;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.046875;
          result[3] += 0.65625;
          result[4] += 0.01953125;
          result[5] += 0.27734375;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
          result[0] += 0.03937007874015748;
          result[1] += 0.43700787401574803;
          result[2] += 0;
          result[3] += 0.027559055118110236;
          result[4] += 0.4645669291338583;
          result[5] += 0.031496062992125984;
        } else {
          result[0] += 0.7182009838369642;
          result[1] += 0.004216444132115249;
          result[2] += 0.04427266338721012;
          result[3] += 0.07730147575544624;
          result[4] += 0.07167955024595925;
          result[5] += 0.084328882642305;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0.004878048780487805;
          result[1] += 0.9878048780487805;
          result[2] += 0;
          result[3] += 0.0024390243902439024;
          result[4] += 0.004878048780487805;
          result[5] += 0;
        } else {
          result[0] += 0.22222222222222224;
          result[1] += 0.11111111111111112;
          result[2] += 0.4444444444444445;
          result[3] += 0;
          result[4] += 0.22222222222222224;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0.03067484662576687;
          result[2] += 0.37423312883435583;
          result[3] += 0.43558282208588955;
          result[4] += 0;
          result[5] += 0.15950920245398773;
        } else {
          result[0] += 0.07036247334754797;
          result[1] += 0;
          result[2] += 0.7846481876332623;
          result[3] += 0.12153518123667377;
          result[4] += 0.0021321961620469083;
          result[5] += 0.021321961620469083;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0.009259259259259259;
          result[1] += 0;
          result[2] += 0.8888888888888888;
          result[3] += 0.09259259259259259;
          result[4] += 0;
          result[5] += 0.009259259259259259;
        } else {
          result[0] += 0.0044943820224719105;
          result[1] += 0;
          result[2] += 0.9865168539325843;
          result[3] += 0.008988764044943821;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42890000))) ) ) {
          result[0] += 0;
          result[1] += 0.013392857142857142;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9642857142857143;
          result[5] += 0.022321428571428572;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.022222222222222223;
          result[3] += 0.15555555555555556;
          result[4] += 0.4888888888888889;
          result[5] += 0.3333333333333333;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0.0013908205841446453;
          result[1] += 0;
          result[2] += 0.0013908205841446453;
          result[3] += 0.022253129346314324;
          result[4] += 0.015299026425591099;
          result[5] += 0.9596662030598053;
        } else {
          result[0] += 0.09262759924385633;
          result[1] += 0.030245746691871456;
          result[2] += 0.00945179584120983;
          result[3] += 0.3553875236294896;
          result[4] += 0.10775047258979206;
          result[5] += 0.4045368620037807;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0.4;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9861751152073732;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.013824884792626729;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.761904761904762;
          result[1] += 0.02191987906273621;
          result[2] += 0.009826152683295543;
          result[3] += 0.029478458049886625;
          result[4] += 0.14436885865457297;
          result[5] += 0.0325018896447468;
        } else {
          result[0] += 0.16666666666666666;
          result[1] += 0.024444444444444446;
          result[2] += 0.23333333333333334;
          result[3] += 0.26222222222222225;
          result[4] += 0.057777777777777775;
          result[5] += 0.25555555555555554;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
          result[0] += 0;
          result[1] += 0.075;
          result[2] += 0.15;
          result[3] += 0.1;
          result[4] += 0.05;
          result[5] += 0.625;
        } else {
          result[0] += 0.07936507936507936;
          result[1] += 0.031746031746031744;
          result[2] += 0.1111111111111111;
          result[3] += 0.5873015873015873;
          result[4] += 0.015873015873015872;
          result[5] += 0.1746031746031746;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0.6;
          result[4] += 0;
          result[5] += 0.2;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7714285714285715;
          result[3] += 0.17142857142857143;
          result[4] += 0;
          result[5] += 0.05714285714285714;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0.02356902356902357;
          result[1] += 0;
          result[2] += 0.8047138047138047;
          result[3] += 0.16161616161616163;
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
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0.34782608695652173;
          result[1] += 0;
          result[2] += 0.6521739130434783;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0017094017094017094;
          result[1] += 0;
          result[2] += 0.976068376068376;
          result[3] += 0.022222222222222223;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0.004201680672268907;
          result[1] += 0.008403361344537815;
          result[2] += 0;
          result[3] += 0.02100840336134454;
          result[4] += 0.9201680672268907;
          result[5] += 0.046218487394957986;
        } else {
          result[0] += 0;
          result[1] += 0.9375;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.0625;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0.04017857142857143;
          result[1] += 0.006696428571428571;
          result[2] += 0.0011160714285714285;
          result[3] += 0.018973214285714284;
          result[4] += 0.09151785714285714;
          result[5] += 0.8415178571428571;
        } else {
          result[0] += 0.010067114093959731;
          result[1] += 0;
          result[2] += 0.030201342281879196;
          result[3] += 0.48322147651006714;
          result[4] += 0.026845637583892617;
          result[5] += 0.44966442953020136;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ae0000))) ) ) {
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
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0.032520325203252036;
          result[1] += 0.18699186991869918;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7317073170731707;
          result[5] += 0.04878048780487805;
        } else {
          result[0] += 0.724;
          result[1] += 0.012666666666666666;
          result[2] += 0.037333333333333336;
          result[3] += 0.09266666666666666;
          result[4] += 0.06266666666666666;
          result[5] += 0.07066666666666667;
        }
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.014705882352941176;
          result[3] += 0.07352941176470588;
          result[4] += 0.17647058823529413;
          result[5] += 0.7352941176470589;
        } else {
          result[0] += 0;
          result[1] += 0.015748031496062992;
          result[2] += 0.1732283464566929;
          result[3] += 0.5590551181102362;
          result[4] += 0.023622047244094488;
          result[5] += 0.2283464566929134;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a50000))) ) ) {
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
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42860000))) ) ) {
          result[0] += 0;
          result[1] += 0.391304347826087;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5217391304347826;
          result[5] += 0.08695652173913043;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4;
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0.26666666666666666;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0.8;
          result[1] += 0.1;
          result[2] += 0.1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.012474012474012475;
          result[1] += 0;
          result[2] += 0.896049896049896;
          result[3] += 0.0841995841995842;
          result[4] += 0.0010395010395010396;
          result[5] += 0.006237006237006237;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0.01016949152542373;
          result[1] += 0.006779661016949153;
          result[2] += 0.0033898305084745766;
          result[3] += 0.0033898305084745766;
          result[4] += 0.9118644067796611;
          result[5] += 0.06440677966101696;
        } else {
          result[0] += 0;
          result[1] += 0.4117647058823529;
          result[2] += 0.47058823529411764;
          result[3] += 0;
          result[4] += 0.11764705882352941;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.011267605633802818;
          result[4] += 0.0323943661971831;
          result[5] += 0.956338028169014;
        } else {
          result[0] += 0.10683012259194395;
          result[1] += 0.02626970227670753;
          result[2] += 0.03327495621716287;
          result[3] += 0.37302977232924694;
          result[4] += 0.07355516637478109;
          result[5] += 0.38704028021015763;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42890000))) ) ) {
          result[0] += 0.11504424778761062;
          result[1] += 0.3938053097345133;
          result[2] += 0.004424778761061947;
          result[3] += 0.008849557522123894;
          result[4] += 0.4336283185840708;
          result[5] += 0.04424778761061947;
        } else {
          result[0] += 0.7144856543037089;
          result[1] += 0.005598320503848845;
          result[2] += 0.05108467459762071;
          result[3] += 0.08117564730580826;
          result[4] += 0.06578026592022393;
          result[5] += 0.08187543736878937;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0.3;
          result[1] += 0.7;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0024752475247524753;
          result[1] += 0.995049504950495;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0024752475247524753;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b80000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.75;
          result[4] += 0;
          result[5] += 0.25;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08620689655172414;
          result[3] += 0.017241379310344827;
          result[4] += 0.25862068965517243;
          result[5] += 0.6379310344827587;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0;
          result[1] += 0.050505050505050504;
          result[2] += 0.1717171717171717;
          result[3] += 0.6060606060606061;
          result[4] += 0.010101010101010102;
          result[5] += 0.16161616161616163;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6944444444444444;
          result[3] += 0.1111111111111111;
          result[4] += 0;
          result[5] += 0.19444444444444445;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.30434782608695654;
          result[3] += 0.30434782608695654;
          result[4] += 0;
          result[5] += 0.391304347826087;
        } else {
          result[0] += 0.02702702702702703;
          result[1] += 0;
          result[2] += 0.75;
          result[3] += 0.20270270270270271;
          result[4] += 0.013513513513513514;
          result[5] += 0.006756756756756757;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9493333333333334;
          result[3] += 0.04666666666666667;
          result[4] += 0;
          result[5] += 0.004;
        } else {
          result[0] += 0.2631578947368421;
          result[1] += 0;
          result[2] += 0.7368421052631579;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0.019230769230769232;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9759615384615384;
          result[5] += 0.004807692307692308;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.08823529411764706;
          result[4] += 0.5882352941176471;
          result[5] += 0.3235294117647059;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0.04600484261501211;
          result[1] += 0.015738498789346248;
          result[2] += 0;
          result[3] += 0.020581113801452784;
          result[4] += 0.07506053268765134;
          result[5] += 0.8426150121065376;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.02127659574468085;
          result[3] += 0.5709219858156028;
          result[4] += 0.03546099290780142;
          result[5] += 0.3723404255319149;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.7607758620689656;
          result[1] += 0.04885057471264369;
          result[2] += 0.0014367816091954025;
          result[3] += 0.01580459770114943;
          result[4] += 0.16307471264367818;
          result[5] += 0.010057471264367818;
        } else {
          result[0] += 0.18640350877192982;
          result[1] += 0.013157894736842105;
          result[2] += 0.17982456140350878;
          result[3] += 0.2631578947368421;
          result[4] += 0.08333333333333333;
          result[5] += 0.2741228070175439;
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
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0.015625;
          result[2] += 0.078125;
          result[3] += 0.09375;
          result[4] += 0.1875;
          result[5] += 0.625;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.19354838709677422;
          result[3] += 0.6774193548387097;
          result[4] += 0;
          result[5] += 0.12903225806451615;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16666666666666666;
          result[3] += 0.16666666666666666;
          result[4] += 0.3333333333333333;
          result[5] += 0.3333333333333333;
        } else {
          result[0] += 0.02197802197802198;
          result[1] += 0;
          result[2] += 0.8131868131868132;
          result[3] += 0.13186813186813187;
          result[4] += 0;
          result[5] += 0.03296703296703297;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.25;
          result[1] += 0.5;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.20833333333333334;
          result[5] += 0.041666666666666664;
        } else {
          result[0] += 0.047619047619047616;
          result[1] += 0;
          result[2] += 0.6349206349206349;
          result[3] += 0.1111111111111111;
          result[4] += 0.047619047619047616;
          result[5] += 0.15873015873015872;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0.02631578947368421;
          result[1] += 0.007518796992481203;
          result[2] += 0.8120300751879699;
          result[3] += 0.14661654135338345;
          result[4] += 0;
          result[5] += 0.007518796992481203;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.969439728353141;
          result[3] += 0.028862478777589132;
          result[4] += 0;
          result[5] += 0.001697792869269949;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42e00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.004016064257028112;
          result[4] += 0.9678714859437751;
          result[5] += 0.028112449799196786;
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
          result[2] += 0.001375515818431912;
          result[3] += 0.02063273727647868;
          result[4] += 0.026134800550206328;
          result[5] += 0.951856946354883;
        } else {
          result[0] += 0.11132437619961612;
          result[1] += 0.04222648752399232;
          result[2] += 0.0019193857965451055;
          result[3] += 0.32245681381957775;
          result[4] += 0.05182341650671785;
          result[5] += 0.47024952015355087;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0.13333333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8666666666666667;
          result[5] += 0;
        } else {
          result[0] += 0.0022471910112359553;
          result[1] += 0.9820224719101124;
          result[2] += 0;
          result[3] += 0.006741573033707865;
          result[4] += 0.008988764044943821;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0.0330188679245283;
          result[1] += 0.2169811320754717;
          result[2] += 0.0047169811320754715;
          result[3] += 0.06132075471698113;
          result[4] += 0.6226415094339622;
          result[5] += 0.06132075471698113;
        } else {
          result[0] += 0.7181571815718156;
          result[1] += 0.008807588075880756;
          result[2] += 0.033875338753387524;
          result[3] += 0.07723577235772357;
          result[4] += 0.08265582655826557;
          result[5] += 0.07926829268292682;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
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
          result[2] += 0.07692307692307693;
          result[3] += 0.6538461538461539;
          result[4] += 0;
          result[5] += 0.2692307692307692;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.24;
          result[3] += 0.44;
          result[4] += 0;
          result[5] += 0.32;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7125;
          result[3] += 0.275;
          result[4] += 0;
          result[5] += 0.0125;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b00000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42d70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07142857142857142;
          result[3] += 0.7142857142857143;
          result[4] += 0;
          result[5] += 0.21428571428571427;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.23076923076923078;
          result[1] += 0;
          result[2] += 0.46153846153846156;
          result[3] += 0.07692307692307693;
          result[4] += 0.02564102564102564;
          result[5] += 0.20512820512820512;
        } else {
          result[0] += 0.017745302713987474;
          result[1] += 0;
          result[2] += 0.8977035490605428;
          result[3] += 0.07306889352818371;
          result[4] += 0.0020876826722338203;
          result[5] += 0.009394572025052192;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9372384937238494;
          result[5] += 0.06276150627615062;
        } else {
          result[0] += 0;
          result[1] += 0.4;
          result[2] += 0;
          result[3] += 0.56;
          result[4] += 0.04;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0.6338028169014085;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.014084507042253521;
          result[4] += 0.352112676056338;
          result[5] += 0;
        } else {
          result[0] += 0.01049618320610687;
          result[1] += 0.0057251908396946565;
          result[2] += 0;
          result[3] += 0.11450381679389313;
          result[4] += 0.039122137404580155;
          result[5] += 0.8301526717557252;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0.04624277456647399;
          result[1] += 0.34682080924855496;
          result[2] += 0;
          result[3] += 0.011560693641618498;
          result[4] += 0.5838150289017342;
          result[5] += 0.011560693641618498;
        } else {
          result[0] += 0.7245233399079554;
          result[1] += 0.030243261012491786;
          result[2] += 0.040762656147271537;
          result[3] += 0.06180144641683104;
          result[4] += 0.08547008547008549;
          result[5] += 0.0571992110453649;
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
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42d70000))) ) ) {
          result[0] += 0;
          result[1] += 0.00847457627118644;
          result[2] += 0.01694915254237288;
          result[3] += 0.23728813559322035;
          result[4] += 0.0847457627118644;
          result[5] += 0.652542372881356;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.875;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.125;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1929824561403509;
          result[3] += 0.6315789473684211;
          result[4] += 0;
          result[5] += 0.1754385964912281;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6825396825396826;
          result[3] += 0.23809523809523808;
          result[4] += 0;
          result[5] += 0.07936507936507936;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42810000))) ) ) {
          result[0] += 0;
          result[1] += 0.07142857142857142;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9285714285714286;
          result[5] += 0;
        } else {
          result[0] += 0.2682926829268293;
          result[1] += 0.07317073170731707;
          result[2] += 0.17073170731707318;
          result[3] += 0.12195121951219512;
          result[4] += 0.024390243902439025;
          result[5] += 0.34146341463414637;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7772511848341233;
          result[3] += 0.2037914691943128;
          result[4] += 0;
          result[5] += 0.018957345971563982;
        } else {
          result[0] += 0.010899182561307902;
          result[1] += 0;
          result[2] += 0.9359673024523161;
          result[3] += 0.043596730245231606;
          result[4] += 0.0013623978201634877;
          result[5] += 0.008174386920980926;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0.01639344262295082;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9590163934426229;
          result[5] += 0.02459016393442623;
        } else {
          result[0] += 0;
          result[1] += 0.06666666666666667;
          result[2] += 0;
          result[3] += 0.1;
          result[4] += 0.4666666666666667;
          result[5] += 0.36666666666666664;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0.001349527665317139;
          result[1] += 0;
          result[2] += 0.006747638326585695;
          result[3] += 0.02699055330634278;
          result[4] += 0.044534412955465584;
          result[5] += 0.9203778677462888;
        } else {
          result[0] += 0.11894273127753303;
          result[1] += 0.004405286343612335;
          result[2] += 0.0022026431718061676;
          result[3] += 0.29515418502202645;
          result[4] += 0.09691629955947137;
          result[5] += 0.48237885462555063;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0;
          result[1] += 0.022222222222222223;
          result[2] += 0.022222222222222223;
          result[3] += 0;
          result[4] += 0.9555555555555556;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9772209567198178;
          result[2] += 0;
          result[3] += 0.00683371298405467;
          result[4] += 0.015945330296127564;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.8238133547868061;
          result[1] += 0.04102976669348351;
          result[2] += 0;
          result[3] += 0.017699115044247787;
          result[4] += 0.10458567980691874;
          result[5] += 0.012872083668543845;
        } else {
          result[0] += 0.23300970873786409;
          result[1] += 0.025889967637540454;
          result[2] += 0.22653721682847897;
          result[3] += 0.2524271844660194;
          result[4] += 0.042071197411003236;
          result[5] += 0.22006472491909385;
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42840000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.1111111111111111;
          result[5] += 0.8888888888888888;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.125;
          result[3] += 0.705;
          result[4] += 0.025;
          result[5] += 0.145;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.15;
          result[3] += 0.1;
          result[4] += 0.15;
          result[5] += 0.6;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8529411764705882;
          result[3] += 0.029411764705882353;
          result[4] += 0;
          result[5] += 0.11764705882352941;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42be0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0.017857142857142856;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.017857142857142856;
          result[4] += 0.2857142857142857;
          result[5] += 0.6785714285714286;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6363636363636364;
          result[3] += 0.030303030303030304;
          result[4] += 0.030303030303030304;
          result[5] += 0.30303030303030304;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0.3333333333333333;
          result[1] += 0.027777777777777776;
          result[2] += 0.2777777777777778;
          result[3] += 0.16666666666666666;
          result[4] += 0.08333333333333333;
          result[5] += 0.1111111111111111;
        } else {
          result[0] += 0.006493506493506494;
          result[1] += 0;
          result[2] += 0.8874458874458875;
          result[3] += 0.09632034632034632;
          result[4] += 0.0021645021645021645;
          result[5] += 0.007575757575757576;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42680000))) ) ) {
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
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0.003937007874015748;
          result[1] += 0.01968503937007874;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9133858267716536;
          result[5] += 0.06299212598425197;
        } else {
          result[0] += 0.055178268251273345;
          result[1] += 0.0050933786078098476;
          result[2] += 0.007640067911714771;
          result[3] += 0.15195246179966043;
          result[4] += 0.07385398981324279;
          result[5] += 0.7062818336162988;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.7493016759776536;
          result[1] += 0.04888268156424581;
          result[2] += 0.00558659217877095;
          result[3] += 0.025139664804469275;
          result[4] += 0.11033519553072625;
          result[5] += 0.06075418994413408;
        } else {
          result[0] += 0.17381489841986456;
          result[1] += 0.013544018058690745;
          result[2] += 0.2686230248306998;
          result[3] += 0.291196388261851;
          result[4] += 0.08803611738148984;
          result[5] += 0.16478555304740405;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42da0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03333333333333333;
          result[3] += 0.03333333333333333;
          result[4] += 0.06666666666666667;
          result[5] += 0.8666666666666667;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.75;
          result[3] += 0;
          result[4] += 0.25;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.12195121951219512;
          result[3] += 0.4634146341463415;
          result[4] += 0;
          result[5] += 0.4146341463414634;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6842105263157895;
          result[3] += 0.3157894736842105;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0.3548387096774194;
          result[1] += 0.16129032258064516;
          result[2] += 0;
          result[3] += 0.12903225806451613;
          result[4] += 0.03225806451612903;
          result[5] += 0.3225806451612903;
        } else {
          result[0] += 0.041666666666666664;
          result[1] += 0;
          result[2] += 0.875;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.08333333333333333;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0.00888888888888889;
          result[2] += 0.7333333333333334;
          result[3] += 0.23555555555555557;
          result[4] += 0;
          result[5] += 0.022222222222222227;
        } else {
          result[0] += 0.004291845493562232;
          result[1] += 0;
          result[2] += 0.9456366237482118;
          result[3] += 0.044349070100143065;
          result[4] += 0;
          result[5] += 0.005722460658082976;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 0.018518518518518517;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9768518518518519;
          result[5] += 0.004629629629629629;
        } else {
          result[0] += 0.015873015873015872;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6666666666666666;
          result[5] += 0.31746031746031744;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0.0014970059880239522;
          result[1] += 0;
          result[2] += 0.0014970059880239522;
          result[3] += 0.02844311377245509;
          result[4] += 0.02694610778443114;
          result[5] += 0.9416167664670658;
        } else {
          result[0] += 0.09236234458259325;
          result[1] += 0.03907637655417407;
          result[2] += 0.003552397868561279;
          result[3] += 0.31261101243339257;
          result[4] += 0.0586145648312611;
          result[5] += 0.4937833037300178;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 0.046875;
          result[2] += 0.0625;
          result[3] += 0;
          result[4] += 0.890625;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9844097995545658;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.015590200445434299;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.7744034707158353;
          result[1] += 0.028922631959508317;
          result[2] += 0.015184381778741866;
          result[3] += 0.03253796095444686;
          result[4] += 0.1185827910339841;
          result[5] += 0.030368763557483733;
        } else {
          result[0] += 0.21614583333333334;
          result[1] += 0.041666666666666664;
          result[2] += 0.1484375;
          result[3] += 0.2890625;
          result[4] += 0.07291666666666667;
          result[5] += 0.23177083333333334;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.23076923076923078;
          result[4] += 0;
          result[5] += 0.7692307692307693;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2823529411764706;
          result[3] += 0.5647058823529412;
          result[4] += 0.011764705882352941;
          result[5] += 0.1411764705882353;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a00000))) ) ) {
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
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0.19230769230769232;
          result[1] += 0;
          result[2] += 0.11538461538461539;
          result[3] += 0.38461538461538464;
          result[4] += 0;
          result[5] += 0.3076923076923077;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8676470588235294;
          result[3] += 0.1323529411764706;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0.00875;
          result[1] += 0;
          result[2] += 0.9325;
          result[3] += 0.05625;
          result[4] += 0;
          result[5] += 0.0025;
        } else {
          result[0] += 0.34615384615384615;
          result[1] += 0;
          result[2] += 0.6538461538461539;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 0.00398406374501992;
          result[1] += 0.027888446215139442;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9482071713147411;
          result[5] += 0.0199203187250996;
        } else {
          result[0] += 0.48031496062992124;
          result[1] += 0.015748031496062992;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2677165354330709;
          result[5] += 0.23622047244094488;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.01349527665317139;
          result[4] += 0.044534412955465584;
          result[5] += 0.941970310391363;
        } else {
          result[0] += 0.015021459227467811;
          result[1] += 0.002145922746781116;
          result[2] += 0.01072961373390558;
          result[3] += 0.3133047210300429;
          result[4] += 0.06652360515021459;
          result[5] += 0.592274678111588;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0.04519774011299435;
          result[1] += 0.15819209039548024;
          result[2] += 0.01694915254237288;
          result[3] += 0.011299435028248588;
          result[4] += 0.711864406779661;
          result[5] += 0.05649717514124294;
        } else {
          result[0] += 0;
          result[1] += 0.9926470588235294;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.007352941176470588;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0.4543568464730291;
          result[1] += 0.016597510373443987;
          result[2] += 0.09751037344398342;
          result[3] += 0.19294605809128634;
          result[4] += 0.1058091286307054;
          result[5] += 0.1327800829875519;
        } else {
          result[0] += 0.8666666666666665;
          result[1] += 0.034374999999999996;
          result[2] += 0.02291666666666666;
          result[3] += 0.018749999999999996;
          result[4] += 0.04687499999999999;
          result[5] += 0.010416666666666664;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06722689075630252;
          result[3] += 0.5630252100840336;
          result[4] += 0.01680672268907563;
          result[5] += 0.35294117647058826;
        } else {
          result[0] += 0;
          result[1] += 0.013513513513513514;
          result[2] += 0.5540540540540541;
          result[3] += 0.2972972972972973;
          result[4] += 0.013513513513513514;
          result[5] += 0.12162162162162163;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42df0000))) ) ) {
          result[0] += 0.08888888888888889;
          result[1] += 0.011111111111111112;
          result[2] += 0.7666666666666667;
          result[3] += 0.1111111111111111;
          result[4] += 0;
          result[5] += 0.022222222222222223;
        } else {
          result[0] += 0.7804878048780488;
          result[1] += 0;
          result[2] += 0.21951219512195122;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 0;
          result[1] += 0.04166666666666667;
          result[2] += 0.40277777777777785;
          result[3] += 0.37500000000000006;
          result[4] += 0.01388888888888889;
          result[5] += 0.16666666666666669;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8888888888888888;
          result[3] += 0.1111111111111111;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0.012345679012345678;
          result[1] += 0.012345679012345678;
          result[2] += 0.7654320987654321;
          result[3] += 0.17901234567901234;
          result[4] += 0;
          result[5] += 0.030864197530864196;
        } else {
          result[0] += 0.001567398119122257;
          result[1] += 0;
          result[2] += 0.9655172413793104;
          result[3] += 0.03134796238244514;
          result[4] += 0;
          result[5] += 0.001567398119122257;
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
