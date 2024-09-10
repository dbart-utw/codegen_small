
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
          result[0] += 0.28292682926829266;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.15853658536585366;
          result[4] += 0.5577235772357724;
          result[5] += 0.0008130081300813008;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0012345679012345679;
          result[2] += 0.00905349794238683;
          result[3] += 0.9613168724279836;
          result[4] += 0.023045267489711935;
          result[5] += 0.005349794238683128;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9933774834437086;
          result[4] += 0.006622516556291391;
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
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9985272459499264;
          result[1] += 0;
          result[2] += 0.0014727540500736377;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9663865546218487;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.03361344537815126;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)55) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 0.5514911120904951;
          result[1] += 0.0017628911414720142;
          result[2] += 0.007051564565888057;
          result[3] += 0.4392537094167768;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00044072278536800354;
        } else {
          result[0] += 0.9665631717219967;
          result[1] += 0;
          result[2] += 0.007881538094100788;
          result[3] += 0.024361117745402436;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011941724385001193;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          result[0] += 0.3037037037037037;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6962962962962963;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.005385996409335727;
          result[1] += 0.008976660682226212;
          result[2] += 0;
          result[3] += 0.9856373429084381;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0.08009241432422025;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9172121678860223;
          result[4] += 0.0007701193685021178;
          result[5] += 0.0019252984212552945;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.025943396226415096;
          result[3] += 0;
          result[4] += 0.9705188679245284;
          result[5] += 0.003537735849056604;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8797814207650273;
          result[4] += 0.12021857923497267;
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-5230.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          result[0] += 0.999227202472952;
          result[1] += 0;
          result[2] += 0.0007727975270479134;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.8415464198203104;
          result[1] += 0;
          result[2] += 0.006806425265450586;
          result[3] += 0.14946909882929485;
          result[4] += 0;
          result[5] += 0.0005445140212360468;
          result[6] += 0.0016335420637081405;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.012567324955116697;
          result[3] += 0.9874326750448833;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
          result[0] += 0.29605263157894735;
          result[1] += 0.013157894736842105;
          result[2] += 0;
          result[3] += 0.6907894736842105;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9889212827988338;
          result[1] += 0.0006360985952822688;
          result[2] += 0.002968460111317254;
          result[3] += 0.007262125629472568;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002120328650940896;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
          result[0] += 0.49599753694581283;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5040024630541872;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9126896041435442;
          result[1] += 0;
          result[2] += 0.0011098779134295228;
          result[3] += 0.08546059933407325;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007399186089530152;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
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
          result[2] += 0;
          result[3] += 0.9962434259954921;
          result[4] += 0.0015026296018031556;
          result[5] += 0.002253944402704733;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-31) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.027851458885941646;
          result[3] += 0;
          result[4] += 0.9694960212201591;
          result[5] += 0.002652519893899204;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.08536585365853659;
          result[2] += 0;
          result[3] += 0.9146341463414634;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)13) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)32.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)51) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16666666666666666;
          result[3] += 0.8333333333333334;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0016260162601626016;
          result[3] += 0.9983739837398374;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
          result[0] += 0.9934981223025616;
          result[1] += 0.0007286587074715544;
          result[2] += 0.0038114455467742844;
          result[3] += 0.0017375707639706297;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00022420267922201672;
        } else {
          result[0] += 0.7151253918495298;
          result[1] += 0;
          result[2] += 0.006073667711598746;
          result[3] += 0.27801724137931033;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007836990595611285;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5393345370131545;
          result[1] += 0;
          result[2] += 0.004642765024503482;
          result[3] += 0.456022697962342;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          result[0] += 0.9813218390804598;
          result[1] += 0;
          result[2] += 0.01867816091954023;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8571428571428571;
          result[1] += 0;
          result[2] += 0.14285714285714285;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)97.5) ) ) {
          result[0] += 0.028445006321112517;
          result[1] += 0;
          result[2] += 0.0025284450063211127;
          result[3] += 0.9690265486725663;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.19169329073482427;
          result[1] += 0.01757188498402556;
          result[2] += 0;
          result[3] += 0.7907348242811502;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 0.09820359281437126;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8976047904191616;
          result[4] += 0;
          result[5] += 0.004191616766467066;
          result[6] += 0;
        } else {
          result[0] += 0.609375;
          result[1] += 0;
          result[2] += 0.34375;
          result[3] += 0.03125;
          result[4] += 0;
          result[5] += 0.015625;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
          result[0] += 0.9963552361396304;
          result[1] += 0;
          result[2] += 0.0005646817248459959;
          result[3] += 0.003028747433264887;
          result[4] += 0;
          result[5] += 0;
          result[6] += 5.13347022587269e-05;
        } else {
          result[0] += 0.9662921348314607;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.033707865168539325;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
          result[0] += 0.9105683990961237;
          result[1] += 0.0015644011819920041;
          result[2] += 0.00391100295498001;
          result[3] += 0.0833478185294629;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000608378237441335;
        } else {
          result[0] += 0.5092215568862275;
          result[1] += 0;
          result[2] += 0.003592814371257485;
          result[3] += 0.487185628742515;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)35) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)2.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8333333333333334;
          result[5] += 0.16666666666666666;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)29) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0;
          result[1] += 0.0003123048094940662;
          result[2] += 0;
          result[3] += 0.9993753903810119;
          result[4] += 0;
          result[5] += 0.0003123048094940662;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.1875;
          result[2] += 0.75;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.0625;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          result[0] += 0.9798994974874372;
          result[1] += 0.020100502512562814;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          result[0] += 0.9978236424970075;
          result[1] += 0.0003989988755486235;
          result[2] += 0.0016322681272443688;
          result[3] += 3.627262504987486e-05;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00010881787514962457;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9;
          result[3] += 0.1;
          result[4] += 0;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)45) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.005571943625040971;
          result[3] += 0.994428056374959;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9858281665190434;
          result[1] += 0;
          result[2] += 0.011957484499557131;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0022143489813994687;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-305.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9948741845293569;
          result[1] += 0;
          result[2] += 0.004193849021435228;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009319664492078285;
        } else {
          result[0] += 0.999709398870807;
          result[1] += 0;
          result[2] += 0.00029060112919295915;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
          result[0] += 0.00331858407079646;
          result[1] += 0.0022123893805309734;
          result[2] += 0;
          result[3] += 0.21128318584070796;
          result[4] += 0.7831858407079646;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.028922872340425534;
          result[1] += 0.003656914893617022;
          result[2] += 0.023271276595744683;
          result[3] += 0.8533909574468086;
          result[4] += 0.08776595744680853;
          result[5] += 0.002992021276595745;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 0.5707285200914733;
          result[1] += 0;
          result[2] += 0.002123489055864097;
          result[3] += 0.42649460960470437;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006533812479581836;
        } else {
          result[0] += 0.9716193656093489;
          result[1] += 0;
          result[2] += 0.005723825423324589;
          result[3] += 0.021702838063439065;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009539709038874314;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.18181818181818182;
          result[3] += 0.8181818181818182;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0038424591738712775;
          result[2] += 0;
          result[3] += 0.9961575408261287;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)88.5) ) ) {
          result[0] += 0.8586956521739131;
          result[1] += 0;
          result[2] += 0.14130434782608695;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
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
          result[0] += 0.028169014084507043;
          result[1] += 0.14084507042253522;
          result[2] += 0;
          result[3] += 0.8309859154929577;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
          result[0] += 0.9814814814814815;
          result[1] += 0;
          result[2] += 0.018518518518518517;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.009919404835709857;
          result[1] += 0.0037197768133911966;
          result[2] += 0.021078735275883446;
          result[3] += 0.9640421574705518;
          result[4] += 0;
          result[5] += 0.0012399256044637321;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
          result[0] += 0.9924559932942163;
          result[1] += 0;
          result[2] += 0.007124895222129086;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00041911148365465214;
        } else {
          result[0] += 0.4069077172153265;
          result[1] += 0;
          result[2] += 0.01025364274150027;
          result[3] += 0.5822989746357259;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005396654074473826;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9965771458662454;
          result[1] += 0;
          result[2] += 0.00315955766192733;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002632964718272775;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.7459755312298777;
          result[1] += 0.0017707662588538314;
          result[2] += 0.0070830650354153256;
          result[3] += 0.21410173857050868;
          result[4] += 0.02913715389568577;
          result[5] += 0.0011268512556342563;
          result[6] += 0.0008048937540244687;
        } else {
          result[0] += 0;
          result[1] += 0.0008467400508044031;
          result[2] += 0.00042337002540220156;
          result[3] += 0.7811176968670619;
          result[4] += 0.21718882303132941;
          result[5] += 0.00042337002540220156;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
          result[0] += 0.15159235668789808;
          result[1] += 0.01019108280254777;
          result[2] += 0.012738853503184714;
          result[3] += 0.8254777070063695;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0033783783783783786;
          result[2] += 0;
          result[3] += 0.04391891891891892;
          result[4] += 0.9527027027027027;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0.000956327701625757;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9977685686962066;
          result[4] += 0;
          result[5] += 0.001275103602167676;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.21052631578947367;
          result[2] += 0.631578947368421;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.15789473684210525;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)20.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9814814814814815;
          result[1] += 0;
          result[2] += 0.018518518518518517;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
          result[0] += 0.5229357798165137;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.47706422018348627;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9968450826805918;
          result[1] += 0;
          result[2] += 0.0013054830287206266;
          result[3] += 0.0017406440382941688;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00010879025239338555;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-32.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5550584996558844;
          result[1] += 0;
          result[2] += 0.008947006194081212;
          result[3] += 0.4349621472814866;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0010323468685478321;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9956557154493619;
          result[1] += 0;
          result[2] += 0.0040727667662231876;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00027151778441487917;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
          result[0] += 0.9421841541755889;
          result[1] += 0.006423982869379015;
          result[2] += 0.008297644539614561;
          result[3] += 0.042558886509635976;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005353319057815846;
        } else {
          result[0] += 0.4215861657722123;
          result[1] += 0;
          result[2] += 0.006857483601669648;
          result[3] += 0.5715563506261181;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          result[0] += 0.9616368286445013;
          result[1] += 0;
          result[2] += 0.03836317135549872;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-11) ) ) {
          result[0] += 0.16019417475728157;
          result[1] += 0.009708737864077669;
          result[2] += 0;
          result[3] += 0.8300970873786407;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.009976976208749041;
          result[3] += 0.990023023791251;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
          result[0] += 0.9967825585862466;
          result[1] += 0;
          result[2] += 0.0006242796772954283;
          result[3] += 0.0025931617364579333;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.058823529411764705;
          result[1] += 0.0196078431372549;
          result[2] += 0.043137254901960784;
          result[3] += 0.8588235294117647;
          result[4] += 0.0196078431372549;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)68.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.8470055359838953;
          result[1] += 0.001509813789632612;
          result[2] += 0.0017614494212380473;
          result[3] += 0.14871665827881228;
          result[4] += 0.00012581781580271766;
          result[5] += 0.000377453447408153;
          result[6] += 0.0005032712632108706;
        } else {
          result[0] += 0.5076597992604333;
          result[1] += 0;
          result[2] += 0.002289135411163938;
          result[3] += 0.48987497798908264;
          result[4] += 0.0001760873393203029;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06230529595015576;
          result[3] += 0.7757009345794392;
          result[4] += 0.16199376947040497;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.991346877351392;
          result[1] += 0;
          result[2] += 0.007524454477050414;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001128668171557562;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)9) ) ) {
          result[0] += 0.9980458413060294;
          result[1] += 8.142327891544193e-05;
          result[2] += 0.0005699629524080935;
          result[3] += 0.001099214265358466;
          result[4] += 8.142327891544193e-05;
          result[5] += 0;
          result[6] += 0.0001221349183731629;
        } else {
          result[0] += 0.8938737623762377;
          result[1] += 0.0030940594059405946;
          result[2] += 0.0030940594059405946;
          result[3] += 0.09746287128712873;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0024752475247524757;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)68.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9904214559386973;
          result[4] += 0.0028735632183908046;
          result[5] += 0.006704980842911878;
          result[6] += 0;
        } else {
          result[0] += 0.5599603567888999;
          result[1] += 0;
          result[2] += 0.0019821605550049554;
          result[3] += 0.4380574826560951;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
          result[0] += 0;
          result[1] += 0.0034223134839151265;
          result[2] += 0.02053388090349076;
          result[3] += 0.9363449691991786;
          result[4] += 0.03969883641341547;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9767741935483871;
          result[1] += 0;
          result[2] += 0.023225806451612905;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.4;
          result[4] += 0.6;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.002161383285302594;
          result[1] += 0.006484149855907781;
          result[2] += 0;
          result[3] += 0.04899135446685879;
          result[4] += 0.9423631123919308;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)49) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)23) ) ) {
          result[0] += 0.9843934040047114;
          result[1] += 0;
          result[2] += 0.012367491166077738;
          result[3] += 0.001177856301531213;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002061248527679623;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3157894736842105;
          result[3] += 0;
          result[4] += 0.6842105263157895;
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
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4715.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-166) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)33.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9989908673495131;
          result[1] += 0;
          result[2] += 0.0009082193854382159;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00010091326504869065;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-3.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9866666666666667;
          result[5] += 0.013333333333333334;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)51.5) ) ) {
          result[0] += 0.10461538461538461;
          result[1] += 0.038461538461538464;
          result[2] += 0.038461538461538464;
          result[3] += 0.8184615384615385;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.006099331977926227;
          result[1] += 0.004937554458321232;
          result[2] += 0.01045599767644496;
          result[3] += 0.9773453383677025;
          result[4] += 0;
          result[5] += 0.0011617775196049957;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 0.5837507827175956;
          result[1] += 0;
          result[2] += 0.0025046963055729496;
          result[3] += 0.41311834690043836;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006261740763932374;
        } else {
          result[0] += 0.9654532807790401;
          result[1] += 0;
          result[2] += 0.006260143751449107;
          result[3] += 0.026663575237653607;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001623000231857176;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
          result[0] += 0.9823182711198428;
          result[1] += 0;
          result[2] += 0.009823182711198428;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.007858546168958742;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          result[0] += 0.9990201318368074;
          result[1] += 0;
          result[2] += 0.0009798681631925886;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
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
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.024195499637067505;
          result[1] += 0.004839099927413501;
          result[2] += 0.011855794822163078;
          result[3] += 0.9569320106460198;
          result[4] += 0;
          result[5] += 0.0021775949673360755;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)102) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.01048951048951049;
          result[2] += 0;
          result[3] += 0.0034965034965034965;
          result[4] += 0.986013986013986;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
          result[0] += 0.9819253941802334;
          result[1] += 0;
          result[2] += 0.007050378156646585;
          result[3] += 0.009485963338033587;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0015382643250865275;
        } else {
          result[0] += 0.8397790055248618;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.16022099447513813;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
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
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)252) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9876796714579056;
          result[1] += 0;
          result[2] += 0.011293634496919919;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001026694045174538;
        } else {
          result[0] += 0.9987266137721618;
          result[1] += 0;
          result[2] += 0.001273386227838182;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.02118530437114508;
          result[1] += 0.004022526146419952;
          result[2] += 0.015017430946634486;
          result[3] += 0.9592384017162778;
          result[4] += 0;
          result[5] += 0.0005363368195226602;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9796351824087957;
          result[1] += 0;
          result[2] += 0.007371314342828585;
          result[3] += 0.012368815592203899;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006246876561719141;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.00037936267071320183;
          result[3] += 0.9996206373292867;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
          result[0] += 0.0024630541871921183;
          result[1] += 0.014778325123152709;
          result[2] += 0;
          result[3] += 0.08251231527093596;
          result[4] += 0.9002463054187192;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6518218623481782;
          result[4] += 0.3481781376518219;
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
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          result[0] += 0.00034188034188034193;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.967863247863248;
          result[4] += 0.031111111111111114;
          result[5] += 0.0006837606837606839;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7263581488933601;
          result[4] += 0.27364185110663986;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9993777224642191;
          result[5] += 0.0006222775357809583;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.45;
          result[2] += 0.4;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.15;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)61) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
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
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 0.9998285028297033;
          result[1] += 0;
          result[2] += 0.0001714971702966901;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7837837837837838;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.21621621621621623;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
          result[0] += 0.8532338308457712;
          result[1] += 0;
          result[2] += 0.00612323000382702;
          result[3] += 0.13987753539992348;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007654037504783775;
        } else {
          result[0] += 0.43568147013782543;
          result[1] += 0;
          result[2] += 0.007656967840735069;
          result[3] += 0.5566615620214395;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9963608006238628;
          result[1] += 0;
          result[2] += 0.0033792565635560176;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002599428125812321;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          result[0] += 0.6424108783535465;
          result[1] += 0.00735023888276369;
          result[2] += 0.015067989709665565;
          result[3] += 0.3344358691657479;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000735023888276369;
        } else {
          result[0] += 0.7342673949180718;
          result[1] += 0;
          result[2] += 0.0014248397055331278;
          result[3] += 0.26407029209213967;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00023747328425552128;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9857142857142858;
          result[1] += 0;
          result[2] += 0.014285714285714285;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.999390412856747;
          result[1] += 0;
          result[2] += 0.0005541701302299807;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 5.541701302299806e-05;
        }
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
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          result[0] += 0.00039936102236421724;
          result[1] += 0.006789137380191693;
          result[2] += 0.007987220447284345;
          result[3] += 0.9824281150159745;
          result[4] += 0.0011980830670926517;
          result[5] += 0.0011980830670926517;
          result[6] += 0;
        } else {
          result[0] += 0.9958978183852322;
          result[1] += 0;
          result[2] += 0.0029834048107402573;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011187768040275966;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)47.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.01657317695053544;
          result[3] += 0.7432432432432432;
          result[4] += 0.23890872004079552;
          result[5] += 0.0012748597654258032;
          result[6] += 0;
        } else {
          result[0] += 0.9900947459086994;
          result[1] += 0;
          result[2] += 0.0068906115417743325;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0030146425495262705;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
          result[0] += 0.006756756756756757;
          result[1] += 0.04054054054054054;
          result[2] += 0;
          result[3] += 0.08108108108108109;
          result[4] += 0.8716216216216216;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.16019818331957061;
          result[1] += 0.004128819157720892;
          result[2] += 0;
          result[3] += 0.8356729975227085;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)16) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.2894736842105263;
          result[1] += 0;
          result[2] += 0.03508771929824561;
          result[3] += 0.6754385964912281;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
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
  result[6] /= 15;
  
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
    

    FILE* file = fopen("./codegen/dataset_148/split_1/test_data.csv", "r");
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
