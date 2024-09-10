
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1142599992454051971) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.1724349930882453918) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.2065050005912780762) ) ) {
        result[0] += 0.16666666666666666;
        result[1] += 0.8333333333333334;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.682750016450881958) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.9952850043773651123) ) ) {
        result[0] += 0.08496732026143791;
        result[1] += 0.9150326797385621;
      } else {
        result[0] += 0.4358974358974359;
        result[1] += 0.5641025641025641;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.05413499847054481506) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.5;
        result[1] += 0.5;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2857299968600273132) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03106500022113323212) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.5456249862909317017) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.031446540880503145;
        result[1] += 0.9685534591194969;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.7909249961376190186) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.03954000025987625122) ) ) {
        result[0] += 0.9444444444444444;
        result[1] += 0.05555555555555555;
      } else {
        result[0] += 0.4666666666666667;
        result[1] += 0.5333333333333333;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9361749887466430664) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.813050001859664917) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.14594594594594595;
        result[1] += 0.8540540540540541;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.6445949971675872803) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.64;
        result[1] += 0.36;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2630599960684776306) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.2392950002104043961) ) ) {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9941000044345855713) ) ) {
        result[0] += 0.0783132530120482;
        result[1] += 0.9216867469879518;
      } else {
        result[0] += 0.7586206896551724;
        result[1] += 0.2413793103448276;
      }
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.2102850005030632019) ) ) {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3197949975728988647) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.1712299957871437073) ) ) {
        result[0] += 0.8695652173913043;
        result[1] += 0.13043478260869565;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.5415849983692169189) ) ) {
        result[0] += 0.7391304347826086;
        result[1] += 0.2608695652173913;
      } else {
        result[0] += 0.14285714285714285;
        result[1] += 0.8571428571428571;
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.9952850043773651123) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.07787499763071537018) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.056074766355140186;
        result[1] += 0.9439252336448598;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.01240999996662139893) ) ) {
        result[0] += 0.8928571428571429;
        result[1] += 0.10714285714285714;
      } else {
        result[0] += 0.3076923076923077;
        result[1] += 0.6923076923076923;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2630599960684776306) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.3044000118970870972) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.07260500267148017883) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.795019984245300293) ) ) {
        result[0] += 0.8571428571428571;
        result[1] += 0.14285714285714285;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.999664992094039917) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1460099965333938599) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.0547945205479452;
        result[1] += 0.9452054794520548;
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.8282249867916107178) ) ) {
        result[0] += 0.9090909090909091;
        result[1] += 0.09090909090909091;
      } else {
        result[0] += 0.375;
        result[1] += 0.625;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2630599960684776306) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.1836999990046024323) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1382849961519241333) ) ) {
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
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.9538150131702423096) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8053750097751617432) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.06936416184971098;
        result[1] += 0.930635838150289;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.5397849977016448975) ) ) {
        result[0] += 0.5;
        result[1] += 0.5;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.186569996178150177) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.231155000627040863) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9664799869060516357) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.10810810810810811;
        result[1] += 0.8918918918918919;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9027200043201446533) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
        result[0] += 0.07936507936507936;
        result[1] += 0.9206349206349206;
      } else {
        result[0] += 0.65;
        result[1] += 0.35;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1256750002503395081) ) ) {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.1699800044298171997) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.6912750005722045898) ) ) {
        result[0] += 0.04;
        result[1] += 0.96;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.9472700059413909912) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.9;
        result[1] += 0.1;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9664799869060516357) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.270830005407333374) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.1360544217687075;
        result[1] += 0.8639455782312925;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2725899964570999146) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.1110950037837028503) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1480249986052513123) ) ) {
        result[0] += 0.75;
        result[1] += 0.25;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.9994949996471405029) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3974700123071670532) ) ) {
        result[0] += 0.30434782608695654;
        result[1] += 0.6956521739130435;
      } else {
        result[0] += 0.0196078431372549;
        result[1] += 0.9803921568627451;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.6972900032997131348) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.36363636363636365;
        result[1] += 0.6363636363636364;
      }
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.2102850005030632019) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4083350002765655518) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.1182299964129924774) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.85;
        result[1] += 0.15;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.02201499976217746735) ) ) {
        result[0] += 0.9230769230769231;
        result[1] += 0.07692307692307693;
      } else {
        result[0] += 0.11363636363636363;
        result[1] += 0.8863636363636364;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1460099965333938599) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7472899854183197021) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.06040268456375839;
        result[1] += 0.9395973154362416;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.1740150004625320435) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.04143999889492988586) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.9482350051403045654) ) ) {
        result[0] += 0.2127659574468085;
        result[1] += 0.7872340425531915;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.454864993691444397) ) ) {
        result[0] += 0.7777777777777778;
        result[1] += 0.2222222222222222;
      } else {
        result[0] += 0.04504504504504504;
        result[1] += 0.954954954954955;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.3044199943542480469) ) ) {
        result[0] += 0.47368421052631576;
        result[1] += 0.5263157894736842;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1227300018072128296) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.04146500024944543839) ) ) {
        result[0] += 0.9285714285714286;
        result[1] += 0.07142857142857142;
      } else {
        result[0] += 0.5;
        result[1] += 0.5;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.6685400009155273438) ) ) {
        result[0] += 0.11494252873563218;
        result[1] += 0.8850574712643678;
      } else {
        result[0] += 0.5;
        result[1] += 0.5;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.08616000041365623474) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.04340999945998191833) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.3636350035667419434) ) ) {
        result[0] += 0.16666666666666666;
        result[1] += 0.8333333333333334;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.9891000092029571533) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.3953550010919570923) ) ) {
        result[0] += 0.8235294117647058;
        result[1] += 0.17647058823529413;
      } else {
        result[0] += 0.11377245508982035;
        result[1] += 0.8862275449101796;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.6912750005722045898) ) ) {
        result[0] += 0.6;
        result[1] += 0.4;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1142599992454051971) ) ) {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.8729450106620788574) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.2745099961757659912) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.5;
        result[1] += 0.5;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03106500022113323212) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.9994949996471405029) ) ) {
        result[0] += 0.09375;
        result[1] += 0.90625;
      } else {
        result[0] += 0.6153846153846154;
        result[1] += 0.38461538461538464;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.08616000041365623474) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.09109000116586685181) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.03277999907732009888) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.5;
        result[1] += 0.5;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.5411049872636795044) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.6590700000524520874) ) ) {
        result[0] += 0.75;
        result[1] += 0.25;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9708600044250488281) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.0847457627118644;
        result[1] += 0.9152542372881356;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.9754950106143951416) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2880550026893615723) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.01462999964132905006) ) ) {
        result[0] += 0.75;
        result[1] += 0.25;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9127549827098846436) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.1043956043956044;
        result[1] += 0.8956043956043956;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.6912750005722045898) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9689399898052215576) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02312999917194247246) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.3953550010919570923) ) ) {
        result[0] += 0.8095238095238095;
        result[1] += 0.19047619047619047;
      } else {
        result[0] += 0.10179640718562874;
        result[1] += 0.8982035928143712;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.188470005989074707) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1478099972009658813) ) ) {
        result[0] += 0.9;
        result[1] += 0.1;
      } else {
        result[0] += 0.34545454545454546;
        result[1] += 0.6545454545454545;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03106500022113323212) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.13194444444444445;
        result[1] += 0.8680555555555556;
      }
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1390250027179718018) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1860899999737739563) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.09109000116586685181) ) ) {
        result[0] += 0.8;
        result[1] += 0.2;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.3645649999380111694) ) ) {
        result[0] += 0.8666666666666667;
        result[1] += 0.13333333333333333;
      } else {
        result[0] += 0.12;
        result[1] += 0.88;
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.3770000040531158447) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.06670500338077545166) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.7009149789810180664) ) ) {
        result[0] += 0.11764705882352941;
        result[1] += 0.8823529411764706;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3729799985885620117) ) ) {
        result[0] += 0.3442622950819672;
        result[1] += 0.6557377049180327;
      } else {
        result[0] += 0.022727272727272728;
        result[1] += 0.9772727272727273;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.379639994353055954) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.1586499959230422974) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.4375;
        result[1] += 0.5625;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.2887649983167648315) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.09663000330328941345) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.2549019607843137;
        result[1] += 0.7450980392156863;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9622650146484375) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.048;
        result[1] += 0.952;
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.8433550000190734863) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
        result[0] += 0.25;
        result[1] += 0.75;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.1205449998378753662) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.1295600049197673798) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.231155000627040863) ) ) {
        result[0] += 0.8235294117647058;
        result[1] += 0.17647058823529413;
      } else {
        result[0] += 0.10256410256410256;
        result[1] += 0.8974358974358975;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.09732999652624130249) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5636099874973297119) ) ) {
        result[0] += 0.08196721311475409;
        result[1] += 0.9180327868852459;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.07854000013321638107) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.5435599982738494873) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.1260000020265579224) ) ) {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      } else {
        result[0] += 0.98;
        result[1] += 0.02;
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.7871749997138977051) ) ) {
        result[0] += 0.04;
        result[1] += 0.96;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.6332649886608123779) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9708600044250488281) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.08333333333333333;
        result[1] += 0.9166666666666666;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7134000062942504883) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.1161449998617172241) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.1790899932384490967) ) ) {
        result[0] += 0.5;
        result[1] += 0.5;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.1797650009393692017) ) ) {
        result[0] += 0.3787878787878788;
        result[1] += 0.6212121212121212;
      } else {
        result[0] += 0.017391304347826087;
        result[1] += 0.9826086956521739;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.9534899890422821045) ) ) {
        result[0] += 0.9629629629629629;
        result[1] += 0.037037037037037035;
      } else {
        result[0] += 0.375;
        result[1] += 0.625;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9689399898052215576) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.105;
        result[1] += 0.895;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.198720000684261322) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2336949929594993591) ) ) {
        result[0] += 0.5777777777777777;
        result[1] += 0.4222222222222222;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.5252700001001358032) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.015625;
        result[1] += 0.984375;
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.8369050025939941406) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.3983000069856643677) ) ) {
        result[0] += 0.5;
        result[1] += 0.5;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.8211749792098999023) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.8726750016212463379) ) ) {
        result[0] += 0.8;
        result[1] += 0.2;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6559349894523620605) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.10555555555555556;
        result[1] += 0.8944444444444445;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02312999917194247246) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.1469650045037269592) ) ) {
        result[0] += 0.42105263157894735;
        result[1] += 0.5789473684210527;
      } else {
        result[0] += 0.035211267605633804;
        result[1] += 0.9647887323943662;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.3095200061798095703) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9361749887466430664) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.05151499994099140167) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.08379888268156424;
        result[1] += 0.9162011173184358;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0002000000094994902611) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1967800036072731018) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.7638149857521057129) ) ) {
        result[0] += 0.8571428571428571;
        result[1] += 0.14285714285714285;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.04580000042915344238) ) ) {
        result[0] += 0.8421052631578947;
        result[1] += 0.15789473684210525;
      } else {
        result[0] += 0.043478260869565216;
        result[1] += 0.9565217391304348;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.7468249797821044922) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.9101049900054931641) ) ) {
        result[0] += 0.14093959731543623;
        result[1] += 0.8590604026845637;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2109900042414665222) ) ) {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.9069949984550476074) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.7261900007724761963) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.5;
        result[1] += 0.5;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1506249979138374329) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.09580838323353294;
        result[1] += 0.9041916167664671;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.9263550043106079102) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.68;
        result[1] += 0.32;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.189065001904964447) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.4494450092315673828) ) ) {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.22861500084400177) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.016666666666666666;
        result[1] += 0.9833333333333333;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1083250045776367188) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.008654999546706676483) ) ) {
        result[0] += 0.9444444444444444;
        result[1] += 0.05555555555555555;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.4357900023460388184) ) ) {
        result[0] += 0.25;
        result[1] += 0.75;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1256750002503395081) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.1326350048184394836) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.1295600049197673798) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.125;
        result[1] += 0.875;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.0395349990576505661) ) ) {
        result[0] += 0.8181818181818182;
        result[1] += 0.18181818181818182;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.04428999871015548706) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.2020200043916702271) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.14;
        result[1] += 0.86;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2000949978828430176) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.0761800035834312439) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.06289308176100629;
        result[1] += 0.9371069182389937;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.7636999785900115967) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.9551649987697601318) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.5333333333333333;
        result[1] += 0.4666666666666667;
      }
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1390250027179718018) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.0001350000020465813577) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.5415849983692169189) ) ) {
        result[0] += 0.7777777777777778;
        result[1] += 0.2222222222222222;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.252754993736743927) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.9333333333333333;
        result[1] += 0.06666666666666667;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1460099965333938599) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.732675015926361084) ) ) {
        result[0] += 0.09219858156028368;
        result[1] += 0.9078014184397163;
      } else {
        result[0] += 0.7692307692307693;
        result[1] += 0.23076923076923078;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9361749887466430664) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1408099979162216187) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.09411764705882353;
        result[1] += 0.9058823529411765;
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.379639994353055954) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.6086956521739131;
        result[1] += 0.391304347826087;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9069299995899200439) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.1654500029981136322) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.333334997296333313) ) ) {
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1142599992454051971) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.4117650091648101807) ) ) {
        result[0] += 0.3333333333333333;
        result[1] += 0.6666666666666666;
      } else {
        result[0] += 0.975609756097561;
        result[1] += 0.024390243902439025;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
        result[0] += 0.12209302325581395;
        result[1] += 0.877906976744186;
      } else {
        result[0] += 0.6521739130434783;
        result[1] += 0.34782608695652173;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9257999956607818604) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.0467449994757771492) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9872500002384185791) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.10810810810810811;
        result[1] += 0.8918918918918919;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02312999917194247246) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7472899854183197021) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
        result[0] += 0.05555555555555555;
        result[1] += 0.9444444444444444;
      } else {
        result[0] += 0.6551724137931034;
        result[1] += 0.3448275862068966;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.2634200006723403931) ) ) {
        result[0] += 0.2702702702702703;
        result[1] += 0.7297297297297297;
      } else {
        result[0] += 0.08;
        result[1] += 0.92;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.75) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.48148148148148145;
        result[1] += 0.5185185185185185;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.04143999889492988586) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3585000038146972656) ) ) {
        result[0] += 0.45454545454545453;
        result[1] += 0.5454545454545454;
      } else {
        result[0] += 0.03870967741935484;
        result[1] += 0.9612903225806452;
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.6754399985074996948) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.1220000013709068298) ) ) {
        result[0] += 0.35294117647058826;
        result[1] += 0.6470588235294118;
      } else {
        result[0] += 0.8461538461538461;
        result[1] += 0.15384615384615385;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.06945999991148710251) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.5080200135707855225) ) ) {
        result[0] += 0.96;
        result[1] += 0.04;
      } else {
        result[0] += 0.045454545454545456;
        result[1] += 0.9545454545454546;
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.2965200096368789673) ) ) {
        result[0] += 0.41935483870967744;
        result[1] += 0.5806451612903226;
      } else {
        result[0] += 0.04201680672268908;
        result[1] += 0.957983193277311;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.897180020809173584) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.01710000075399875641) ) ) {
        result[0] += 0.92;
        result[1] += 0.08;
      } else {
        result[0] += 0.5833333333333334;
        result[1] += 0.4166666666666667;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.8211749792098999023) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
        result[0] += 0.19337016574585636;
        result[1] += 0.8066298342541437;
      } else {
        result[0] += 0.7777777777777778;
        result[1] += 0.2222222222222222;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9832650125026702881) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.06942499801516532898) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.4668100029230117798) ) ) {
        result[0] += 0.9375;
        result[1] += 0.0625;
      } else {
        result[0] += 0.05128205128205128;
        result[1] += 0.9487179487179487;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.6141949966549873352) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.044642857142857144;
        result[1] += 0.9553571428571429;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.8599999845027923584) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2807449996471405029) ) ) {
        result[0] += 0.375;
        result[1] += 0.625;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.144859999418258667) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.434575006365776062) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.3148950040340423584) ) ) {
        result[0] += 0.8181818181818182;
        result[1] += 0.18181818181818182;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8376899957656860352) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.05409500002861022949) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.2270999997854232788) ) ) {
        result[0] += 0.5;
        result[1] += 0.5;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.7950850129127502441) ) ) {
        result[0] += 0.11627906976744186;
        result[1] += 0.8837209302325582;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9361749887466430664) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.8768799901008605957) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2052299976348876953) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.19704433497536947;
        result[1] += 0.8029556650246306;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1384000033140182495) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.04143999889492988586) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.35135135135135137;
        result[1] += 0.6486486486486487;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.6283050179481506348) ) ) {
        result[0] += 0.7647058823529411;
        result[1] += 0.23529411764705882;
      } else {
        result[0] += 0.11333333333333333;
        result[1] += 0.8866666666666667;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.1532750055193901062) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.4666950106620788574) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.1386500000953674316) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.7692307692307693;
        result[1] += 0.23076923076923078;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7989200055599212646) ) ) {
        result[0] += 0.8;
        result[1] += 0.2;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.4225250035524368286) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.75;
        result[1] += 0.25;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9872500002384185791) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.08571428571428572;
        result[1] += 0.9142857142857143;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3002800047397613525) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.7325700074434280396) ) ) {
        result[0] += 0.3333333333333333;
        result[1] += 0.6666666666666666;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.8788850009441375732) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
        result[0] += 0.03571428571428571;
        result[1] += 0.9642857142857143;
      } else {
        result[0] += 0.6818181818181818;
        result[1] += 0.3181818181818182;
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 50;
  result[1] /= 50;
  
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
    

    FILE* file = fopen("./codegen/dataset_52/split_4/test_data.csv", "r");
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
