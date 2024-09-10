
#include "header.h"


static const int32_t num_class[] = {  7, };

int32_t get_num_target(void) {
  return N_TARGET;
}
void get_num_class(int32_t* out) {
  for (int i = 0; i < N_TARGET; ++i) {
    out[i] = num_class[i];
  }
}
int32_t get_num_feature(void) {
  return 7;
}
const char* get_threshold_type(void) {
  return "float32";
}
const char* get_leaf_output_type(void) {
  return "float32";
}


void predict(union Entry* data, int pred_margin, float* result) {
  unsigned int tmp;
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-5.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)17) ) ) {
          result[0] += 0.4;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)54) ) ) {
          result[0] += 0.0006341154090044388;
          result[1] += 0.0015852885225110971;
          result[2] += 0.0034876347495244133;
          result[3] += 0.9920735573874445;
          result[4] += 0;
          result[5] += 0.0022194039315155357;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)104) ) ) {
          result[0] += 0.5793650793650794;
          result[1] += 0.04497354497354497;
          result[2] += 0;
          result[3] += 0.37566137566137564;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.03184713375796178;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9681528662420382;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)77.5) ) ) {
          result[0] += 0.9978083209509658;
          result[1] += 0.0005572065378900445;
          result[2] += 0.001188707280832095;
          result[3] += 0.00011144130757800891;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00033432392273402675;
        } else {
          result[0] += 0.9626972740315638;
          result[1] += 0;
          result[2] += 0.035868005738880916;
          result[3] += 0.0014347202295552368;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)40) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0.7424924924924925;
          result[1] += 0;
          result[2] += 0.006756756756756757;
          result[3] += 0.24924924924924924;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0015015015015015015;
        } else {
          result[0] += 0.8598405371380613;
          result[1] += 0;
          result[2] += 0.00629458665547629;
          result[3] += 0.13386487620646245;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          result[0] += 0.32694355697550587;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6730564430244942;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9885931558935361;
          result[1] += 0;
          result[2] += 0.010773130544993664;
          result[3] += 0.0006337135614702154;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9954268292682927;
          result[1] += 0;
          result[2] += 0.004573170731707317;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9996290113151549;
          result[1] += 0;
          result[2] += 0.0003709886848451122;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          result[0] += 0.9812206572769953;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.018779342723004695;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
          result[0] += 0.0030534351145038168;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9938931297709923;
          result[5] += 0.0030534351145038168;
          result[6] += 0;
        } else {
          result[0] += 0.004975124378109453;
          result[1] += 0.01990049751243781;
          result[2] += 0;
          result[3] += 0.9751243781094527;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          result[0] += 0.023763648041104687;
          result[1] += 0.0032113037893384713;
          result[2] += 0.01991008349389852;
          result[3] += 0.8516377649325626;
          result[4] += 0.09922928709055877;
          result[5] += 0.00224791265253693;
          result[6] += 0;
        } else {
          result[0] += 0.7431306845380565;
          result[1] += 0;
          result[2] += 0.0036381043561512687;
          result[3] += 0.252082336045955;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011488750598372427;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.2768729641693811;
          result[1] += 0;
          result[2] += 0.03257328990228013;
          result[3] += 0.6905537459283387;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.041666666666666664;
          result[1] += 0.3125;
          result[2] += 0;
          result[3] += 0.6458333333333334;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.05;
          result[1] += 0.9;
          result[2] += 0;
          result[3] += 0.05;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)19) ) ) {
          result[0] += 0.9847619047619047;
          result[1] += 0.0007881773399014779;
          result[2] += 0.001379310344827586;
          result[3] += 0.012873563218390805;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00019704433497536947;
        } else {
          result[0] += 0.00408997955010225;
          result[1] += 0.0081799591002045;
          result[2] += 0;
          result[3] += 0.9693251533742331;
          result[4] += 0.010224948875255624;
          result[5] += 0.0081799591002045;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
          result[0] += 0;
          result[1] += 0.00809323405632891;
          result[2] += 0.0029135642602784073;
          result[3] += 0.9112981547426352;
          result[4] += 0.07769504694075753;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9983000424989376;
          result[1] += 0.0012749681257968552;
          result[2] += 0.00042498937526561835;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
          result[0] += 0.9998160750413831;
          result[1] += 0;
          result[2] += 9.196247930844215e-05;
          result[3] += 0;
          result[4] += 9.196247930844215e-05;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9601990049751243;
          result[1] += 0;
          result[2] += 0.03980099502487562;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)74) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.27906976744186046;
          result[3] += 0.7093023255813954;
          result[4] += 0.011627906976744186;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.030453697949036667;
          result[4] += 0.9695463020509634;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)49) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.009384775808133473;
          result[3] += 0.9739311783107404;
          result[4] += 0.016684045881126174;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9891304347826088;
          result[1] += 0;
          result[2] += 0.008605072463768118;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002264492753623189;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
          result[0] += 0.2632978723404255;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7367021276595744;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0015174506828528073;
          result[3] += 0;
          result[4] += 0.9969650986342944;
          result[5] += 0.0015174506828528073;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)107) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)16.5) ) ) {
          result[0] += 0.3333333333333333;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6666666666666666;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9993898718730934;
          result[5] += 0.0006101281269066504;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.007457121551081284;
          result[3] += 0.9899328859060403;
          result[4] += 0;
          result[5] += 0.0026099925428784494;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-6) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2571428571428571;
          result[4] += 0.7428571428571429;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-41) ) ) {
          result[0] += 0;
          result[1] += 0.01532567049808429;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9846743295019157;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0016611295681063123;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9983388704318937;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
          result[0] += 0.9468599033816425;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05314009661835749;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9989859554834457;
          result[1] += 5.070222582771384e-05;
          result[2] += 0.0004563200324494245;
          result[3] += 0.00035491558079399685;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001521066774831415;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)94) ) ) {
          result[0] += 0.5588235294117647;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.4411764705882353;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9618473895582329;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03815261044176707;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.7272909564868658;
          result[1] += 0.00421094846601163;
          result[2] += 0.00721876879887708;
          result[3] += 0.26007619811509924;
          result[4] += 0;
          result[5] += 0.00020052135552436334;
          result[6] += 0.0010026067776218166;
        } else {
          result[0] += 0.11088977423638778;
          result[1] += 0;
          result[2] += 0.0069721115537848604;
          result[3] += 0.8821381142098274;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          result[0] += 0.9852894147745443;
          result[1] += 0;
          result[2] += 0.002558362647905341;
          result[3] += 0.011619230359236756;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005329922183136128;
        } else {
          result[0] += 0.8762886597938144;
          result[1] += 0;
          result[2] += 0.12371134020618557;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
          result[0] += 0.30952380952380953;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6845238095238095;
          result[4] += 0.005952380952380952;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5808823529411765;
          result[1] += 0;
          result[2] += 0.01365546218487395;
          result[3] += 0.4054621848739496;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
          result[0] += 0;
          result[1] += 0.01218369259606373;
          result[2] += 0;
          result[3] += 0.9878163074039362;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9521739130434783;
          result[1] += 0;
          result[2] += 0.04782608695652174;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.019801980198019802;
          result[1] += 0.1485148514851485;
          result[2] += 0;
          result[3] += 0.8316831683168316;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)22.5) ) ) {
          result[0] += 0.1926829268292683;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7853658536585366;
          result[4] += 0.012195121951219513;
          result[5] += 0.00975609756097561;
          result[6] += 0;
        } else {
          result[0] += 0.9949330587023687;
          result[1] += 0.0009062821833161689;
          result[2] += 0.0005355303810504634;
          result[3] += 0.003501544799176107;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00012358393408856848;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)79.5) ) ) {
          result[0] += 0.7053472376303529;
          result[1] += 0;
          result[2] += 0.0022187708009762594;
          result[3] += 0.29154648324828053;
          result[4] += 0.00022187708009762595;
          result[5] += 0.0004437541601952519;
          result[6] += 0.00022187708009762595;
        } else {
          result[0] += 0.4444444444444444;
          result[1] += 0;
          result[2] += 0.05747126436781609;
          result[3] += 0;
          result[4] += 0.49808429118773945;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          result[0] += 0.2635020586098329;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7364979413901671;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5998920086393088;
          result[1] += 0;
          result[2] += 0.022138228941684664;
          result[3] += 0.0010799136069114472;
          result[4] += 0.37095032397408206;
          result[5] += 0.0016198704103671706;
          result[6] += 0.004319654427645789;
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
  result[6] /= 5;
  
  // Apply base_scores
  result[0] += 0;
  result[1] += 0;
  result[2] += 0;
  result[3] += 0;
  result[4] += 0;
  result[5] += 0;
  result[6] += 0;
  
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
    

    FILE* file = fopen("./codegen/dataset_148/split_0/test_data.csv", "r");
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
