
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
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-178) ) ) {
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
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0067062161465050295;
          result[3] += 0.8070673200928553;
          result[4] += 0.18338921846788755;
          result[5] += 0.002837245292752128;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.17864271457085829;
          result[4] += 0.8213572854291418;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)212) ) ) {
          result[0] += 0;
          result[1] += 0.019851116625310174;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9801488833746899;
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9956559513466551;
          result[1] += 0;
          result[2] += 0.0034752389226759338;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008688097306689834;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9997569275644141;
          result[1] += 0;
          result[2] += 0.00024307243558580456;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.8204903677758318;
          result[1] += 0.004159369527145359;
          result[2] += 0.0074430823117338;
          result[3] += 0.16768826619964974;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00021891418563922942;
        } else {
          result[0] += 0;
          result[1] += 0.0022205773501110288;
          result[2] += 0.0033308660251665434;
          result[3] += 0.9944485566247224;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)52.5) ) ) {
          result[0] += 0.8023809523809524;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.1976190476190476;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9869083585095669;
          result[1] += 0;
          result[2] += 0.00730110775427996;
          result[3] += 0.004783484390735146;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0010070493454179255;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)10.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
          result[0] += 0.9699248120300752;
          result[1] += 0;
          result[2] += 0.03007518796992481;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.07313357034027425;
          result[1] += 0.006094464195022855;
          result[2] += 0;
          result[3] += 0.9207719654647029;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)101) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.002437043054427295;
          result[1] += 0.011372867587327376;
          result[2] += 0;
          result[3] += 0.22989439480097482;
          result[4] += 0.7562956945572705;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-32) ) ) {
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
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9949431099873578;
          result[1] += 0;
          result[2] += 0.004424778761061947;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006321112515802782;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          result[0] += 0.9996400935756703;
          result[1] += 0;
          result[2] += 0.00035990642432967427;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 0.6575313807531382;
          result[1] += 0.0027196652719665274;
          result[2] += 0.0033472803347280337;
          result[3] += 0.3343096234309624;
          result[4] += 0.0004184100418410042;
          result[5] += 0.0004184100418410042;
          result[6] += 0.0012552301255230127;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.011308147005911076;
          result[3] += 0.7779491133384734;
          result[4] += 0.20920071960935493;
          result[5] += 0.0015420200462606013;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)36) ) ) {
          result[0] += 0.9917119917119918;
          result[1] += 0;
          result[2] += 0.006993006993006993;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001295001295001295;
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
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)85.5) ) ) {
          result[0] += 0.024817518248175182;
          result[1] += 0;
          result[2] += 0.016058394160583942;
          result[3] += 0.9372262773722628;
          result[4] += 0.021897810218978103;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.005788712011577424;
          result[2] += 0;
          result[3] += 0.6367583212735166;
          result[4] += 0.35745296671490595;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)39) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9937597503900156;
          result[1] += 0;
          result[2] += 0.0062402496099844;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0.010526315789473684;
          result[1] += 0.0456140350877193;
          result[2] += 0;
          result[3] += 0.12280701754385964;
          result[4] += 0.8210526315789474;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
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
          result[3] += 0.09821428571428571;
          result[4] += 0.9017857142857143;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9960745829244357;
          result[1] += 0;
          result[2] += 0.0024533856722276743;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0014720314033366045;
        } else {
          result[0] += 0.9996289424860854;
          result[1] += 0;
          result[2] += 0.00037105751391465676;
          result[3] += 0;
          result[4] += 0;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91) ) ) {
          result[0] += 0.7456953642384105;
          result[1] += 0.005077262693156733;
          result[2] += 0.001986754966887417;
          result[3] += 0.24282560706401765;
          result[4] += 0.0006622516556291391;
          result[5] += 0.002869757174392936;
          result[6] += 0.0008830022075055188;
        } else {
          result[0] += 0.02140845070422535;
          result[1] += 0;
          result[2] += 0.008169014084507042;
          result[3] += 0.796056338028169;
          result[4] += 0.1743661971830986;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 0.5784;
          result[1] += 0;
          result[2] += 0.0008;
          result[3] += 0.4208;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8830092445011157;
          result[1] += 0;
          result[2] += 0.008288173414089895;
          result[3] += 0.055148230793751994;
          result[4] += 0.04972904048453937;
          result[5] += 0.0015938795027095952;
          result[6] += 0.0022314313037934334;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
          result[0] += 0.3669527896995708;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6330472103004292;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9966338361800274;
          result[1] += 0.0009350455055479366;
          result[2] += 0.001683081909986286;
          result[3] += 0.0004986909362922329;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00024934546814611643;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          result[0] += 0.5203520352035204;
          result[1] += 0;
          result[2] += 0.0016501650165016502;
          result[3] += 0.4768976897689769;
          result[4] += 0;
          result[5] += 0.0011001100110011;
          result[6] += 0;
        } else {
          result[0] += 0.07848291400675929;
          result[1] += 0.00938790837401427;
          result[2] += 0.004130679684566279;
          result[3] += 0.8193766428839655;
          result[4] += 0.08862185505069471;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
          result[0] += 0.1408140814081408;
          result[1] += 0;
          result[2] += 0.01155115511551155;
          result[3] += 0.024752475247524754;
          result[4] += 0.8228822882288229;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9995412002202239;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0004587997797761057;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
          result[0] += 0.027777777777777776;
          result[1] += 0;
          result[2] += 0.125;
          result[3] += 0.8472222222222222;
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)880) ) ) {
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
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)24) ) ) {
          result[0] += 0.9825314128102973;
          result[1] += 0;
          result[2] += 0.014403922770456636;
          result[3] += 0.0009193993257738277;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0021452650934722646;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14285714285714285;
          result[3] += 0;
          result[4] += 0.8571428571428571;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2306.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9921875;
          result[5] += 0.0078125;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
          result[0] += 0.0015313935681470138;
          result[1] += 0.0019142419601837673;
          result[2] += 0.005359877488514548;
          result[3] += 0.9896630934150077;
          result[4] += 0;
          result[5] += 0.0015313935681470138;
          result[6] += 0;
        } else {
          result[0] += 0.9491525423728814;
          result[1] += 0;
          result[2] += 0.05084745762711865;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)6) ) ) {
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
          result[2] += 0.0034782608695652175;
          result[3] += 0.9930434782608696;
          result[4] += 0;
          result[5] += 0.0034782608695652175;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)53) ) ) {
          result[0] += 0.9973348699848736;
          result[1] += 0.00036015270474681264;
          result[2] += 0.001908809335158107;
          result[3] += 0.0002160916228480876;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00018007635237340632;
        } else {
          result[0] += 0.7180851063829787;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.28191489361702127;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)27.5) ) ) {
          result[0] += 0;
          result[1] += 0.009404388714733543;
          result[2] += 0;
          result[3] += 0.9905956112852664;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.2222222222222222;
          result[1] += 0.7777777777777778;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
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
          result[0] += 0.2407891609222724;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7592108390777276;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
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
          result[0] += 0.9662337662337662;
          result[1] += 0;
          result[2] += 0.027705627705627706;
          result[3] += 0.0025974025974025974;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.003463203463203463;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)22.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-178) ) ) {
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
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9984825493171472;
          result[5] += 0.0015174506828528073;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0.0012476606363069245;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9971927635683094;
          result[4] += 0;
          result[5] += 0.0015595757953836558;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.23809523809523808;
          result[2] += 0.5714285714285714;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.19047619047619047;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)11) ) ) {
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
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9951823812801102;
          result[1] += 0;
          result[2] += 0.0041293874741913286;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006882312456985547;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9898305084745763;
          result[1] += 0;
          result[2] += 0.010169491525423728;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9999130207880317;
          result[1] += 0;
          result[2] += 8.697921196833956e-05;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9893503727369543;
          result[1] += 0.005324813631522897;
          result[2] += 0.003549875754348598;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001774937877174299;
        } else {
          result[0] += 0;
          result[1] += 0.001085383502170767;
          result[2] += 0.005065123010130246;
          result[3] += 0.993849493487699;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0.022546419098143235;
          result[1] += 0.01856763925729443;
          result[2] += 0.033156498673740056;
          result[3] += 0.9257294429708223;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9604108309990663;
          result[1] += 0;
          result[2] += 0.006535947712418301;
          result[3] += 0.032306255835667604;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007469654528478057;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-327) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9936395759717315;
          result[1] += 0;
          result[2] += 0.005653710247349823;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007067137809187279;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          result[0] += 0.9993835911976823;
          result[1] += 0;
          result[2] += 0.0006164088023176971;
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          result[0] += 0.7515269025690742;
          result[1] += 0.0007755695588948134;
          result[2] += 0.006495395055744062;
          result[3] += 0.23422200678623364;
          result[4] += 0.005913717886572952;
          result[5] += 0.0003877847794474067;
          result[6] += 0.0006786233640329617;
        } else {
          result[0] += 0.18243243243243243;
          result[1] += 0.010510510510510511;
          result[2] += 0.0075075075075075074;
          result[3] += 0.7995495495495496;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
          result[0] += 0;
          result[1] += 0.0019887305270135896;
          result[2] += 0.003646005966191581;
          result[3] += 0.9943652635067949;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.023709902370990237;
          result[3] += 0;
          result[4] += 0.9735006973500697;
          result[5] += 0.002789400278940028;
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
          result[0] += 0.21428571428571427;
          result[1] += 0.6428571428571429;
          result[2] += 0;
          result[3] += 0.14285714285714285;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
          result[0] += 0.9521637282702503;
          result[1] += 0.0013561829614104303;
          result[2] += 0.002342497842436198;
          result[3] += 0.04339785476513377;
          result[4] += 0;
          result[5] += 0.00012328936012822092;
          result[6] += 0.0006164468006411047;
        } else {
          result[0] += 0.998820210310336;
          result[1] += 0.000205180815593742;
          result[2] += 0.000102590407796871;
          result[3] += 0.000820723262374968;
          result[4] += 5.12952038984355e-05;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
          result[0] += 0.46546906187624754;
          result[1] += 0;
          result[2] += 0.014770459081836329;
          result[3] += 0.41516966067864275;
          result[4] += 0.10459081836327347;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9972948602344455;
          result[4] += 0.0009017132551848512;
          result[5] += 0.0018034265103697023;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.8983793254489707;
          result[1] += 0;
          result[2] += 0.010512483574244415;
          result[3] += 0.08716600963644328;
          result[4] += 0.0017520805957074025;
          result[5] += 0.0004380201489268506;
          result[6] += 0.0017520805957074025;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.008018327605956471;
          result[3] += 0.8124284077892325;
          result[4] += 0.179553264604811;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)115.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
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
          result[0] += 0.0875;
          result[1] += 0.1125;
          result[2] += 0;
          result[3] += 0.8;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
          result[0] += 0;
          result[1] += 0.011648745519713262;
          result[2] += 0;
          result[3] += 0.9883512544802867;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9583333333333334;
          result[1] += 0;
          result[2] += 0.041666666666666664;
          result[3] += 0;
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
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)14) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
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
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2263) ) ) {
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
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9988367584335014;
          result[4] += 0;
          result[5] += 0.0011632415664986429;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.20588235294117646;
          result[2] += 0.7941176470588235;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)46) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9966777408637874;
          result[4] += 0;
          result[5] += 0.0033222591362126247;
          result[6] += 0;
        } else {
          result[0] += 0.9646017699115044;
          result[1] += 0;
          result[2] += 0.035398230088495575;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)46) ) ) {
          result[0] += 0;
          result[1] += 0.007079646017699115;
          result[2] += 0.0017699115044247787;
          result[3] += 0.9911504424778761;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9981220657276996;
          result[1] += 0;
          result[2] += 0.0018779342723004694;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9998688811188812;
          result[1] += 0;
          result[2] += 0.00013111888111888112;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9347851403284034;
          result[1] += 0.0019797368114591826;
          result[2] += 0.006870851286828928;
          result[3] += 0.05531617561430069;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0010480959590078024;
        } else {
          result[0] += 0;
          result[1] += 0.0003551136363636364;
          result[2] += 0.005326704545454545;
          result[3] += 0.9943181818181818;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          result[0] += 0.9963403476669717;
          result[1] += 0;
          result[2] += 0.0036596523330283625;
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)2.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8695652173913043;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.13043478260869565;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9980662983425415;
          result[1] += 0;
          result[2] += 0.0019337016574585636;
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
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          result[0] += 0.01191275167785235;
          result[1] += 0.005704697986577181;
          result[2] += 0.005704697986577181;
          result[3] += 0.6808724832214765;
          result[4] += 0.29379194630872485;
          result[5] += 0.0020134228187919465;
          result[6] += 0;
        } else {
          result[0] += 0.9759341355288157;
          result[1] += 0.00031665611146295124;
          result[2] += 0.004116529449018366;
          result[3] += 0.018999366687777075;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006333122229259025;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9575163398692811;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.042483660130718956;
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
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)53) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8863636363636364;
          result[3] += 0.06818181818181818;
          result[4] += 0;
          result[5] += 0.045454545454545456;
          result[6] += 0;
        } else {
          result[0] += 0.9750000000000001;
          result[1] += 0;
          result[2] += 0.019827586206896557;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.005172413793103449;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
          result[0] += 0.9972459776779243;
          result[1] += 0;
          result[2] += 0.0004831618108904672;
          result[3] += 0.002222544330096149;
          result[4] += 0;
          result[5] += 0;
          result[6] += 4.831618108904672e-05;
        } else {
          result[0] += 0.07692307692307693;
          result[1] += 0.01282051282051282;
          result[2] += 0.03205128205128205;
          result[3] += 0.8621794871794872;
          result[4] += 0.01282051282051282;
          result[5] += 0.003205128205128205;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          result[0] += 0.6538709677419354;
          result[1] += 0.0007741935483870965;
          result[2] += 0.0033548387096774186;
          result[3] += 0.3230967741935483;
          result[4] += 0.01851612903225806;
          result[5] += 0.00019354838709677413;
          result[6] += 0.00019354838709677413;
        } else {
          result[0] += 0.9853881278538813;
          result[1] += 0;
          result[2] += 0.0091324200913242;
          result[3] += 0.00030441400304414006;
          result[4] += 0.0033485540334855404;
          result[5] += 0.0009132420091324201;
          result[6] += 0.0009132420091324201;
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)103.5) ) ) {
          result[0] += 0.19606003752345216;
          result[1] += 0.006566604127579738;
          result[2] += 0;
          result[3] += 0.797373358348968;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.009259259259259259;
          result[1] += 0.06944444444444445;
          result[2] += 0;
          result[3] += 0.9212962962962963;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9174311926605505;
          result[1] += 0;
          result[2] += 0.08256880733944955;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.9829659318637275;
          result[1] += 0;
          result[2] += 0.000286286859433152;
          result[3] += 0.01646149441740624;
          result[4] += 0;
          result[5] += 0.000286286859433152;
          result[6] += 0;
        } else {
          result[0] += 0.37579617834394907;
          result[1] += 0;
          result[2] += 0.07961783439490445;
          result[3] += 0.5445859872611465;
          result[4] += 0;
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
          result[0] += 0.31735537190082647;
          result[1] += 0.005785123966942148;
          result[2] += 0;
          result[3] += 0.6768595041322314;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)40) ) ) {
          result[0] += 0.7641857037582904;
          result[1] += 0;
          result[2] += 0.004175878162613609;
          result[3] += 0.22107590272660282;
          result[4] += 0.008351756325227219;
          result[5] += 0.0007369196757553428;
          result[6] += 0.0014738393515106856;
        } else {
          result[0] += 0.4214992927864215;
          result[1] += 0;
          result[2] += 0.0049504950495049506;
          result[3] += 0.5735502121640735;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
          result[0] += 0.417910447761194;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5761194029850746;
          result[4] += 0.0029850746268656717;
          result[5] += 0.0029850746268656717;
          result[6] += 0;
        } else {
          result[0] += 0.9968838684547326;
          result[1] += 0.001057258917144288;
          result[2] += 0.0013354849479717322;
          result[3] += 0.00044516164932391074;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00027822603082744424;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          result[0] += 0.5213352685050798;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.47866473149492017;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9740259740259741;
          result[1] += 0;
          result[2] += 0.0050272308336824474;
          result[3] += 0.0004189359028068706;
          result[4] += 0.02010892333472979;
          result[5] += 0;
          result[6] += 0.0004189359028068706;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          result[0] += 0.45271739130434785;
          result[1] += 0;
          result[2] += 0.005978260869565218;
          result[3] += 0.28695652173913044;
          result[4] += 0.25217391304347825;
          result[5] += 0.002173913043478261;
          result[6] += 0;
        } else {
          result[0] += 0.07463672391017173;
          result[1] += 0.009247027741083224;
          result[2] += 0.01453104359313078;
          result[3] += 0.8698811096433289;
          result[4] += 0.031704095112285335;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0528169014084507;
          result[4] += 0.9471830985915493;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0017985611510791368;
          result[2] += 0;
          result[3] += 0.13489208633093525;
          result[4] += 0.8633093525179856;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0.9998632198057721;
          result[1] += 0;
          result[2] += 0.0001367801942278758;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.996164663768857;
          result[1] += 0;
          result[2] += 0.0038353362311429303;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
          result[0] += 0;
          result[1] += 0.005141388174807198;
          result[2] += 0;
          result[3] += 0.11696658097686376;
          result[4] += 0.877892030848329;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.015092879256965947;
          result[1] += 0.0036764705882352945;
          result[2] += 0.010448916408668732;
          result[3] += 0.7710913312693499;
          result[4] += 0.19872291021671828;
          result[5] += 0.0009674922600619196;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
          result[0] += 0.993227226549272;
          result[1] += 0.0003386386725364037;
          result[2] += 0.005587538096850661;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008465966813410091;
        } else {
          result[0] += 0.7142857142857143;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2857142857142857;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          result[0] += 0.0046820132657042525;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9953179867342957;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.983568075117371;
          result[1] += 0;
          result[2] += 0.011737089201877935;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.004694835680751175;
        }
      }
    }
  }
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)32.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9987962897401402;
          result[1] += 0;
          result[2] += 0.001062097288111591;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00014161297174821214;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)97.5) ) ) {
          result[0] += 0.024758842443729903;
          result[1] += 0.006430868167202572;
          result[2] += 0.0090032154340836;
          result[3] += 0.8829581993569132;
          result[4] += 0.07620578778135048;
          result[5] += 0.0006430868167202572;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.02717391304347826;
          result[3] += 0;
          result[4] += 0.967391304347826;
          result[5] += 0.005434782608695652;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9869424692954105;
          result[1] += 0;
          result[2] += 0.004654169360051713;
          result[3] += 0.0074983839689722045;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009049773755656109;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0015048908954100827;
          result[3] += 0.9984951091045899;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 0.009916094584286803;
          result[2] += 0;
          result[3] += 0.9900839054157132;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9637681159420289;
          result[1] += 0;
          result[2] += 0.036231884057971016;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 0.0104;
          result[2] += 0;
          result[3] += 0.9888;
          result[4] += 0.0008;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0.024208566108007448;
          result[1] += 0;
          result[2] += 0.0335195530726257;
          result[3] += 0.9422718808193669;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9891500904159132;
          result[1] += 0;
          result[2] += 0.0108499095840868;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)101) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6058091286307054;
          result[4] += 0.3941908713692946;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.002068252326783868;
          result[1] += 0.016546018614270942;
          result[2] += 0;
          result[3] += 0.10444674250258532;
          result[4] += 0.8769389865563598;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
          result[0] += 0.0029239766081871343;
          result[1] += 0;
          result[2] += 0.00760233918128655;
          result[3] += 0.9;
          result[4] += 0.08538011695906433;
          result[5] += 0.004093567251461989;
          result[6] += 0;
        } else {
          result[0] += 0.9606986899563319;
          result[1] += 0;
          result[2] += 0.039301310043668124;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
          result[0] += 0.9942589733693555;
          result[1] += 9.6487842531841e-05;
          result[2] += 0.000385951370127364;
          result[3] += 0.005210343496719414;
          result[4] += 0;
          result[5] += 0;
          result[6] += 4.82439212659205e-05;
        } else {
          result[0] += 0.8029893055018683;
          result[1] += 0.0007730962504831851;
          result[2] += 0.003994330627496457;
          result[3] += 0.19134132199458834;
          result[4] += 0;
          result[5] += 6.442468754026543e-05;
          result[6] += 0.0008375209380234506;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4516) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
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
          result[3] += 0;
          result[4] += 1;
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
