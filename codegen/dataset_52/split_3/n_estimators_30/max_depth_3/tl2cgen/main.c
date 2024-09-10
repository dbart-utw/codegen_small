
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.9906100034713745117) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.7493149936199188232) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.075;
        result[1] += 0.925;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.3913050070405006409) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.5357142857142857;
        result[1] += 0.4642857142857143;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.05153499916195869446) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.3359899967908859253) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.00370500003919005394) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.9166666666666666;
        result[1] += 0.08333333333333333;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.06383500248193740845) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.125;
        result[1] += 0.875;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9622650146484375) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.11486486486486487;
        result[1] += 0.8851351351351351;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.7564949989318847656) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
        result[0] += 0.08187134502923976;
        result[1] += 0.9181286549707602;
      } else {
        result[0] += 0.7692307692307693;
        result[1] += 0.23076923076923078;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7555849850177764893) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.0783132530120482;
        result[1] += 0.9216867469879518;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.2729100063443183899) ) ) {
        result[0] += 0.75;
        result[1] += 0.25;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9236549735069274902) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.2151149958372116089) ) ) {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
        result[0] += 0.75;
        result[1] += 0.25;
      } else {
        result[0] += 0.0963855421686747;
        result[1] += 0.9036144578313253;
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.5002399981021881104) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.295560002326965332) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9003050029277801514) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.3811150118708610535) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.7766600251197814941) ) ) {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7745099961757659912) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
        result[0] += 0.09782608695652174;
        result[1] += 0.9021739130434783;
      } else {
        result[0] += 0.8;
        result[1] += 0.2;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9306100010871887207) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.3544049859046936035) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0) ) ) {
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
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9236549735069274902) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1199500039219856262) ) ) {
        result[0] += 0.5942028985507246;
        result[1] += 0.4057971014492754;
      } else {
        result[0] += 0.05970149253731343;
        result[1] += 0.9402985074626866;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.78125) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.9;
        result[1] += 0.1;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7664049863815307617) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
        result[0] += 0.9696969696969697;
        result[1] += 0.030303030303030304;
      } else {
        result[0] += 0.14285714285714285;
        result[1] += 0.8571428571428571;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7953100204467773438) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.4980050027370452881) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.18811881188118812;
        result[1] += 0.8118811881188119;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1523000001907348633) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.10778443113772455;
        result[1] += 0.8922155688622755;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.8604550063610076904) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.1348499953746795654) ) ) {
        result[0] += 0.8571428571428571;
        result[1] += 0.14285714285714285;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.3511250019073486328) ) ) {
        result[0] += 0.3333333333333333;
        result[1] += 0.6666666666666666;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9236549735069274902) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3787900060415267944) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2248550057411193848) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.2033898305084746;
        result[1] += 0.7966101694915254;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.1056850031018257141) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.06923076923076923;
        result[1] += 0.9307692307692308;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.877200007438659668) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.8741100132465362549) ) ) {
        result[0] += 0.3333333333333333;
        result[1] += 0.6666666666666666;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.05869499966502189636) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.04741499945521354675) ) ) {
        result[0] += 0.7777777777777778;
        result[1] += 0.2222222222222222;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1626800000667572021) ) ) {
        result[0] += 0.7142857142857143;
        result[1] += 0.2857142857142857;
      } else {
        result[0] += 0.11363636363636363;
        result[1] += 0.8863636363636364;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.8356750011444091797) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.8805600106716156006) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.06474820143884892;
        result[1] += 0.935251798561151;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.3994800001382827759) ) ) {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2599149942398071289) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.05180999822914600372) ) ) {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.9970000088214874268) ) ) {
        result[0] += 0.06493506493506493;
        result[1] += 0.935064935064935;
      } else {
        result[0] += 0.6923076923076923;
        result[1] += 0.3076923076923077;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.4737699851393699646) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.6176450029015541077) ) ) {
        result[0] += 0.47619047619047616;
        result[1] += 0.5238095238095238;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.2432349994778633118) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.06078499555587768555) ) ) {
        result[0] += 0.3333333333333333;
        result[1] += 0.6666666666666666;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6023550033569335938) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2175149992108345032) ) ) {
        result[0] += 0.8260869565217391;
        result[1] += 0.17391304347826086;
      } else {
        result[0] += 0.059880239520958084;
        result[1] += 0.9401197604790419;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9664799869060516357) ) ) {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.9121600091457366943) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.4626800119876861572) ) ) {
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
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
        result[0] += 0.1956521739130435;
        result[1] += 0.8043478260869565;
      } else {
        result[0] += 0.4827586206896552;
        result[1] += 0.5172413793103449;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2599149942398071289) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6057699918746948242) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
        result[0] += 0.07428571428571429;
        result[1] += 0.9257142857142857;
      } else {
        result[0] += 0.6428571428571429;
        result[1] += 0.35714285714285715;
      }
    }
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.8474049866199493408) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.746230006217956543) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.9424299895763397217) ) ) {
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
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.2445850074291229248) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.03053499944508075714) ) ) {
        result[0] += 0.9444444444444444;
        result[1] += 0.05555555555555555;
      } else {
        result[0] += 0.2608695652173913;
        result[1] += 0.7391304347826086;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1333349943161010742) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.08666666666666667;
        result[1] += 0.9133333333333333;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4454549998044967651) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.009039999917149543762) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.2716649994254112244) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.8571428571428571;
        result[1] += 0.14285714285714285;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.6029949933290481567) ) ) {
        result[0] += 0.3333333333333333;
        result[1] += 0.6666666666666666;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7953100204467773438) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1707299947738647461) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.07865168539325842;
        result[1] += 0.9213483146067416;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1500599980354309082) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.1801149938255548477) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.3962499946355819702) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9622650146484375) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8250949978828430176) ) ) {
        result[0] += 0.08854166666666667;
        result[1] += 0.9114583333333334;
      } else {
        result[0] += 0.7272727272727273;
        result[1] += 0.2727272727272727;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3900399953126907349) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.0724849998950958252) ) ) {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7272749990224838257) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.8768799901008605957) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.11475409836065574;
        result[1] += 0.8852459016393442;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.1968499943614006042) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.8217200040817260742) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2276500016450881958) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.09959500283002853394) ) ) {
        result[0] += 0.8571428571428571;
        result[1] += 0.14285714285714285;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4330900013446807861) ) ) {
        result[0] += 0.875;
        result[1] += 0.125;
      } else {
        result[0] += 0.055865921787709494;
        result[1] += 0.9441340782122905;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.813050001859664917) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9108099937438964844) ) ) {
        result[0] += 0.12941176470588237;
        result[1] += 0.8705882352941177;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7287800014019012451) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
        result[0] += 0.28;
        result[1] += 0.72;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4404000043869018555) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.03068999946117401123) ) ) {
        result[0] += 0.8695652173913043;
        result[1] += 0.13043478260869565;
      } else {
        result[0] += 0.4166666666666667;
        result[1] += 0.5833333333333334;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7750049829483032227) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.0783132530120482;
        result[1] += 0.9216867469879518;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.5740499794483184814) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.5642800033092498779) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6060149967670440674) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.959515005350112915) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.1377551020408163;
        result[1] += 0.8622448979591837;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1756750009953975677) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.9928950071334838867) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.5839999914169311523) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.0903954802259887;
        result[1] += 0.9096045197740112;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3998099863529205322) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.35;
        result[1] += 0.65;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.05153499916195869446) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.03259499929845333099) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.07461000233888626099) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.06896551724137931;
        result[1] += 0.9310344827586207;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.04989999905228614807) ) ) {
        result[0] += 0.9545454545454546;
        result[1] += 0.045454545454545456;
      } else {
        result[0] += 0.5;
        result[1] += 0.5;
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.9048750102519989014) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
        result[0] += 0.09090909090909091;
        result[1] += 0.9090909090909091;
      } else {
        result[0] += 0.8461538461538461;
        result[1] += 0.15384615384615385;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
        result[0] += 0.06832298136645963;
        result[1] += 0.9316770186335404;
      } else {
        result[0] += 0.7714285714285715;
        result[1] += 0.22857142857142856;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1480049975216388702) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6255199909210205078) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.11827956989247312;
        result[1] += 0.8817204301075269;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02598000038415193558) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.4028549985960125923) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.222220003604888916) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      }
    }
  } else {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.8474049866199493408) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.834430009126663208) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9444444444444444;
        result[1] += 0.05555555555555555;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1506249979138374329) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.11428571428571428;
        result[1] += 0.8857142857142857;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.03123999945819377899) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.2443300038576126099) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.3333333333333333;
        result[1] += 0.6666666666666666;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8980149924755096436) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.125) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.13;
        result[1] += 0.87;
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 30;
  result[1] /= 30;
  
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
    

    FILE* file = fopen("./codegen/dataset_52/split_3/test_data.csv", "r");
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
