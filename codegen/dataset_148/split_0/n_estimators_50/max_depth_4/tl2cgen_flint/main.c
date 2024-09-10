
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
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0.010273972602739725;
          result[1] += 0.010273972602739725;
          result[2] += 0.0136986301369863;
          result[3] += 0.9657534246575342;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.007216494845360825;
          result[2] += 0;
          result[3] += 0.9927835051546392;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x423e0000))) ) ) {
          result[0] += 0.9926931106471816;
          result[1] += 0;
          result[2] += 0.007306889352818371;
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
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41d80000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0.7128385818101741;
          result[1] += 0;
          result[2] += 0.0022021581149526542;
          result[3] += 0.28407839682889235;
          result[4] += 0.00022021581149526539;
          result[5] += 0.00022021581149526539;
          result[6] += 0.00044043162299053077;
        } else {
          result[0] += 0.39925373134328357;
          result[1] += 0;
          result[2] += 0.06716417910447761;
          result[3] += 0;
          result[4] += 0.5335820895522388;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41e80000))) ) ) {
          result[0] += 0.8776077885952712;
          result[1] += 0.016689847009735744;
          result[2] += 0;
          result[3] += 0.10570236439499305;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.986409871602468;
          result[1] += 0.00016675004168751045;
          result[2] += 0.0006670001667500418;
          result[3] += 0.012172753043188262;
          result[4] += 0.0004585626146406537;
          result[5] += 8.337502084375522e-05;
          result[6] += 4.168751042187761e-05;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9950445986124876;
          result[4] += 0.003964321110009911;
          result[5] += 0.0009910802775024777;
          result[6] += 0;
        } else {
          result[0] += 0.4583963691376702;
          result[1] += 0;
          result[2] += 0.01588502269288956;
          result[3] += 0;
          result[4] += 0.5257186081694403;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0.9981829194427619;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0018170805572380376;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9836165048543689;
          result[1] += 0;
          result[2] += 0.010922330097087379;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0054611650485436895;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41700000))) ) ) {
          result[0] += 0.16666666666666666;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5;
          result[5] += 0.3333333333333333;
          result[6] += 0;
        } else {
          result[0] += 0.09429065743944637;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9039792387543253;
          result[4] += 0;
          result[5] += 0.0017301038062283738;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42d50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.008152173913043478;
          result[3] += 0;
          result[4] += 0.9904891304347826;
          result[5] += 0.001358695652173913;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06741573033707865;
          result[3] += 0;
          result[4] += 0.9325842696629213;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0.974495480995419;
          result[1] += 0.0012999876191655318;
          result[2] += 0.0019190293425776898;
          result[3] += 0.02197598118113161;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000309520861706079;
        } else {
          result[0] += 0.9994402686710379;
          result[1] += 0;
          result[2] += 0.0005597313289620982;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0.43743037504641663;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5625696249535833;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9863013698630138;
          result[1] += 0;
          result[2] += 0.010194329404268877;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.0003185727938834024;
          result[6] += 0.003185727938834024;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41000000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x41280000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
          result[0] += 0.21176470588235294;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.788235294117647;
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0.2926829268292683;
          result[1] += 0;
          result[2] += 0.08130081300813008;
          result[3] += 0.6260162601626016;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.1259328358208955;
          result[1] += 0.017723880597014924;
          result[2] += 0;
          result[3] += 0.8563432835820896;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0.009433962264150943;
          result[1] += 0.003329633740288568;
          result[2] += 0.00776914539400666;
          result[3] += 0.9794672586015538;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.16594360086767895;
          result[4] += 0.834056399132321;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9382022471910112;
          result[1] += 0;
          result[2] += 0.06179775280898876;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ca0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x44b9b000))) ) ) {
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
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0011655011655011655;
          result[1] += 0.01048951048951049;
          result[2] += 0;
          result[3] += 0.0011655011655011655;
          result[4] += 0.9871794871794872;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42890000))) ) ) {
          result[0] += 0.5141388174807198;
          result[1] += 0;
          result[2] += 0.001713796058269066;
          result[3] += 0.48414738646101113;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7308337996642418;
          result[1] += 0;
          result[2] += 0.008953553441522105;
          result[3] += 0.16787912702853947;
          result[4] += 0.0923335198656967;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
          result[0] += 0.18375241779497098;
          result[1] += 0;
          result[2] += 0.01160541586073501;
          result[3] += 0.781431334622824;
          result[4] += 0.0183752417794971;
          result[5] += 0.004835589941972921;
          result[6] += 0;
        } else {
          result[0] += 0.9084900418214252;
          result[1] += 0.00040944052876319703;
          result[2] += 0.0016377621150527881;
          result[3] += 0.0891410522621589;
          result[4] += 0;
          result[5] += 8.773725616354223e-05;
          result[6] += 0.0002339660164361126;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x433f0000))) ) ) {
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
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41e80000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x420c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.021739130434782608;
          result[4] += 0.9782608695652174;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d80000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.011544011544011544;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9884559884559885;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0.050216450216450215;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9489177489177489;
          result[4] += 0.0008658008658008658;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03455723542116631;
          result[3] += 0;
          result[4] += 0.9654427645788337;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.09495548961424333;
          result[1] += 0;
          result[2] += 0.006528189910979229;
          result[3] += 0.8931750741839762;
          result[4] += 0;
          result[5] += 0.005341246290801187;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41d00000))) ) ) {
          result[0] += 0.02631578947368421;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9736842105263158;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.4012605042016807;
          result[1] += 0.01365546218487395;
          result[2] += 0;
          result[3] += 0.5850840336134454;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0.9809608995655508;
          result[1] += 0.0008944543828264759;
          result[2] += 0.0026194735497061077;
          result[3] += 0.014950166112956811;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005750063889598773;
        } else {
          result[0] += 0.9995967416727155;
          result[1] += 0;
          result[2] += 0.0004032583272844584;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
          result[0] += 0.17845698792210993;
          result[1] += 0;
          result[2] += 0.0007394626571358146;
          result[3] += 0.8208035494207543;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9955849889624724;
          result[1] += 0;
          result[2] += 0.004415011037527594;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42200000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7142857142857143;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.2857142857142857;
          result[6] += 0;
        } else {
          result[0] += 0.9919379844961241;
          result[1] += 0;
          result[2] += 0.00558139534883721;
          result[3] += 0.0012403100775193801;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0012403100775193801;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 0.004656577415599534;
          result[1] += 0.004268529297632906;
          result[2] += 0.007372914241365929;
          result[3] += 0.7458284827318588;
          result[4] += 0.23787349631354288;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.470873786407767;
          result[4] += 0.529126213592233;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.23529411764705882;
          result[1] += 0;
          result[2] += 0.7647058823529411;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0.005076142131979695;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.01015228426395939;
          result[4] += 0.9847715736040609;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.10606060606060606;
          result[2] += 0;
          result[3] += 0.6590909090909091;
          result[4] += 0.23484848484848486;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42be0000))) ) ) {
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
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41d80000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
          result[0] += 0.0006738544474393531;
          result[1] += 0;
          result[2] += 0.009433962264150943;
          result[3] += 0.8901617250673854;
          result[4] += 0.09973045822102426;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9934930493936706;
          result[1] += 0;
          result[2] += 0.005028098195800059;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0014788524105294291;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41e80000))) ) ) {
          result[0] += 0.8727770177838577;
          result[1] += 0.015047879616963064;
          result[2] += 0;
          result[3] += 0.1121751025991792;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9876193255241986;
          result[1] += 4.168577264579599e-05;
          result[2] += 0.0005002292717495518;
          result[3] += 0.011421901704948102;
          result[4] += 0.00016674309058318395;
          result[5] += 0.00020842886322897995;
          result[6] += 4.168577264579599e-05;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42440000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.006854949273375378;
          result[3] += 0.8061420345489444;
          result[4] += 0.1867288182067453;
          result[5] += 0.0002741979709350151;
          result[6] += 0;
        } else {
          result[0] += 0.9860009332711153;
          result[1] += 0;
          result[2] += 0.010732617825478302;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0032664489034064394;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41700000))) ) ) {
          result[0] += 0.05555555555555555;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9166666666666666;
          result[5] += 0.027777777777777776;
          result[6] += 0;
        } else {
          result[0] += 0.001187178472497032;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.998812821527503;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41300000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.225;
          result[2] += 0.675;
          result[3] += 0.1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x423c0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41f80000))) ) ) {
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
          result[3] += 0.9230769230769231;
          result[4] += 0;
          result[5] += 0.07692307692307693;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42740000))) ) ) {
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
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 0.9959657085224407;
          result[1] += 0;
          result[2] += 0.0005042864346949068;
          result[3] += 0.0035300050428643467;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7769492624412384;
          result[1] += 0;
          result[2] += 0.003566218187712757;
          result[3] += 0.2186740152374777;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008105041335710813;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 0.8945881330145621;
          result[1] += 0.001738752445120626;
          result[2] += 0.0016300804173005868;
          result[3] += 0.10188002608128667;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001630080417300587;
        } else {
          result[0] += 0.995965030262273;
          result[1] += 0;
          result[2] += 0.003026227303295225;
          result[3] += 0.0008406186953597848;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00016812373907195696;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42480000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.007011866235167206;
          result[1] += 0.005933117583603021;
          result[2] += 0.007551240560949299;
          result[3] += 0.9795037756202805;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9518072289156626;
          result[1] += 0;
          result[2] += 0.04819277108433735;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.000992063492063492;
          result[1] += 0.013888888888888888;
          result[2] += 0;
          result[3] += 0.011904761904761904;
          result[4] += 0.9732142857142857;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41d80000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
          result[0] += 0.5829228243021347;
          result[1] += 0;
          result[2] += 0.009852216748768475;
          result[3] += 0.3842364532019705;
          result[4] += 0.02298850574712644;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7056307911617962;
          result[1] += 0;
          result[2] += 0.006414825374198147;
          result[3] += 0.25540508434307435;
          result[4] += 0.031123782371109528;
          result[5] += 0;
          result[6] += 0.0014255167498218105;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40f00000))) ) ) {
          result[0] += 0.9255319148936171;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.06382978723404256;
          result[4] += 0.010638297872340427;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9850514621793822;
          result[1] += 0.000530958993628492;
          result[2] += 0.0007351739911779119;
          result[3] += 0.0132739748407123;
          result[4] += 8.1685999019768e-05;
          result[5] += 0.000163371998039536;
          result[6] += 0.000163371998039536;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0.2875833760903027;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7124166239096973;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5556261919898283;
          result[1] += 0;
          result[2] += 0.02733630006357279;
          result[3] += 0.0012714558169103624;
          result[4] += 0.4157660521296885;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42420000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9642857142857143;
          result[4] += 0.02197802197802198;
          result[5] += 0.013736263736263736;
          result[6] += 0;
        } else {
          result[0] += 0.9944567627494457;
          result[1] += 0;
          result[2] += 0.0047117516629711755;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008314855875831486;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 0.9929824561403509;
          result[1] += 0;
          result[2] += 0.007017543859649123;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9996706915477497;
          result[1] += 0;
          result[2] += 0.00032930845225027445;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 0.32709113607990015;
          result[1] += 0.0033291718684977114;
          result[2] += 0.0070744902205576365;
          result[3] += 0.6625052018310446;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8039215686274511;
          result[1] += 0.0007843137254901962;
          result[2] += 0.006274509803921569;
          result[3] += 0.18599439775910367;
          result[4] += 0.0011204481792717088;
          result[5] += 0.0006722689075630253;
          result[6] += 0.0012324929971988799;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
          result[0] += 0;
          result[1] += 0.0010070493454179255;
          result[2] += 0;
          result[3] += 0.9969788519637462;
          result[4] += 0.0016784155756965425;
          result[5] += 0.0003356831151393085;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05563480741797432;
          result[3] += 0;
          result[4] += 0.9443651925820257;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.002652519893899204;
          result[1] += 0.03713527851458886;
          result[2] += 0;
          result[3] += 0.9602122015915119;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.06753812636165578;
          result[4] += 0.9324618736383442;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0009380863039399625;
          result[4] += 0.99906191369606;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 0.9998631261976457;
          result[1] += 0;
          result[2] += 0.0001368738023542294;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9960484720758693;
          result[1] += 0;
          result[2] += 0.0036880927291886197;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00026343519494204424;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b80000))) ) ) {
          result[0] += 0.013513513513513514;
          result[1] += 0.02702702702702703;
          result[2] += 0;
          result[3] += 0.9504504504504504;
          result[4] += 0;
          result[5] += 0.009009009009009009;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 0.02185792349726776;
          result[1] += 0.007103825136612022;
          result[2] += 0.01612021857923497;
          result[3] += 0.9355191256830601;
          result[4] += 0.01639344262295082;
          result[5] += 0.003005464480874317;
          result[6] += 0;
        } else {
          result[0] += 0.7429946221341637;
          result[1] += 0.00018869704689121618;
          result[2] += 0.004528729125389188;
          result[3] += 0.251816209076328;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004717426172280404;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42f90000))) ) ) {
          result[0] += 0;
          result[1] += 0.006024096385542169;
          result[2] += 0;
          result[3] += 0.9939759036144579;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.23529411764705882;
          result[1] += 0.35294117647058826;
          result[2] += 0;
          result[3] += 0.4117647058823529;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42040000))) ) ) {
          result[0] += 0;
          result[1] += 0.013959390862944163;
          result[2] += 0;
          result[3] += 0.8464467005076142;
          result[4] += 0.13959390862944163;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41a00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.03076923076923077;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9692307692307692;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 0.959173471088152;
          result[1] += 0;
          result[2] += 0.0016663889351774704;
          result[3] += 0.02032994500916514;
          result[4] += 0.018663556073987668;
          result[5] += 0.00016663889351774705;
          result[6] += 0;
        } else {
          result[0] += 0.9023090586145648;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.003552397868561279;
          result[4] += 0.0941385435168739;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42260000))) ) ) {
          result[0] += 0.36923644411656215;
          result[1] += 0;
          result[2] += 0.00885282183696053;
          result[3] += 0.6101069715971966;
          result[4] += 0.011803762449280709;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9256878374903574;
          result[1] += 0;
          result[2] += 0.0038570326562098224;
          result[3] += 0.06968372332219079;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007714065312419646;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
          result[0] += 0.21465428276573786;
          result[1] += 0.008255933952528379;
          result[2] += 0;
          result[3] += 0.7770897832817337;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5405138339920948;
          result[1] += 0;
          result[2] += 0.039525691699604744;
          result[3] += 0.4051383399209486;
          result[4] += 0.014822134387351778;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41a80000))) ) ) {
          result[0] += 0;
          result[1] += 0.002484472049689441;
          result[2] += 0;
          result[3] += 0.231055900621118;
          result[4] += 0.7664596273291926;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
          result[0] += 0.133130081300813;
          result[1] += 0;
          result[2] += 0.00508130081300813;
          result[3] += 0.8099593495934959;
          result[4] += 0.04573170731707317;
          result[5] += 0.006097560975609756;
          result[6] += 0;
        } else {
          result[0] += 0.9954848301304994;
          result[1] += 0.000991134849402566;
          result[2] += 0.0014316392269148174;
          result[3] += 0.0017069544628599746;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003854413303232201;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0.6976704055220018;
          result[1] += 0;
          result[2] += 0.0018981880931837791;
          result[3] += 0.2992234685073339;
          result[4] += 0.0006902502157031924;
          result[5] += 0;
          result[6] += 0.0005176876617773944;
        } else {
          result[0] += 0.004301075268817204;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9956989247311828;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x4467a000))) ) ) {
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d60000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.007040543821315854;
          result[3] += 0.7747025977178927;
          result[4] += 0.21510075260985675;
          result[5] += 0.0031561058509346927;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.011312217194570135;
          result[2] += 0;
          result[3] += 0.014705882352941176;
          result[4] += 0.9739819004524887;
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
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 0.9997143265247822;
          result[1] += 0;
          result[2] += 0.00028567347521782604;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.996279564177518;
          result[1] += 0;
          result[2] += 0.0034546904065904864;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00026574541589157585;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x425c0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 0.6912310768351899;
          result[1] += 0.000856898029134533;
          result[2] += 0.011139674378748929;
          result[3] += 0.29562982005141386;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011425307055127106;
        } else {
          result[0] += 0.7631512710797885;
          result[1] += 0;
          result[2] += 0.0012584948401711553;
          result[3] += 0.2350868361439718;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005033979360684622;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0.9557522123893806;
          result[1] += 0.04424778761061947;
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
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
          result[0] += 0.4766355140186916;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5093457943925234;
          result[4] += 0.014018691588785047;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9939884617249236;
          result[1] += 0;
          result[2] += 0.0006787220633150725;
          result[3] += 0.00518737576962234;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001454404421389441;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42d90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.012213740458015267;
          result[3] += 0;
          result[4] += 0.9877862595419847;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5925925925925926;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4074074074074074;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x41480000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42340000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8571428571428571;
          result[4] += 0.14285714285714285;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9090909090909091;
          result[1] += 0;
          result[2] += 0.09090909090909091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.7846851817791675;
          result[1] += 0.0003678499172337686;
          result[2] += 0.0035558825332597634;
          result[3] += 0.21053276929679357;
          result[4] += 0;
          result[5] += 6.130831953896144e-05;
          result[6] += 0.0007970081540064987;
        } else {
          result[0] += 0.17783291976840365;
          result[1] += 0;
          result[2] += 0.015301902398676593;
          result[3] += 0.6985111662531017;
          result[4] += 0.10752688172043011;
          result[5] += 0.0008271298593879239;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42f90000))) ) ) {
          result[0] += 0;
          result[1] += 0.008647798742138365;
          result[2] += 0;
          result[3] += 0.9913522012578616;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.391304347826087;
          result[2] += 0;
          result[3] += 0.6086956521739131;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x3f800000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9529411764705882;
          result[1] += 0;
          result[2] += 0.047058823529411764;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41700000))) ) ) {
          result[0] += 0.0045871559633027525;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.981651376146789;
          result[5] += 0.013761467889908258;
          result[6] += 0;
        } else {
          result[0] += 0.001253918495297806;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.99717868338558;
          result[4] += 0;
          result[5] += 0.0015673981191222572;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42900000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7142857142857143;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.2857142857142857;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0026613439787092482;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9973386560212908;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42740000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
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
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 0.9965260545905708;
          result[1] += 0;
          result[2] += 0.0006617038875103391;
          result[3] += 0.0028122415219189413;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5606744956338453;
          result[1] += 0;
          result[2] += 0.0063233965672990075;
          result[3] += 0.4327009936766035;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003011141222523337;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 0.9992547879871824;
          result[1] += 0;
          result[2] += 0.0006706908115358819;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 7.452120128176467e-05;
        } else {
          result[0] += 0.5200286123032904;
          result[1] += 0.006914639961850262;
          result[2] += 0.003814973772055317;
          result[3] += 0.4682880305197902;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009537434430138292;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x422c0000))) ) ) {
          result[0] += 0.9988312636961286;
          result[1] += 0;
          result[2] += 0.0010226442658875093;
          result[3] += 0.0001460920379839299;
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
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0.38961038961038963;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6103896103896104;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9933396764985728;
          result[1] += 0;
          result[2] += 0.00507453219156359;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001585791309863622;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9886234357224118;
          result[1] += 0;
          result[2] += 0.007963594994311717;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0034129692832764505;
        } else {
          result[0] += 0.9996025832091406;
          result[1] += 0;
          result[2] += 0.0003974167908594138;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0.021764032073310423;
          result[1] += 0.008018327605956471;
          result[2] += 0.002290950744558992;
          result[3] += 0.965922107674685;
          result[4] += 0.0014318442153493699;
          result[5] += 0.000572737686139748;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.019348749410099102;
          result[3] += 0.2581406323737612;
          result[4] += 0.7206229353468617;
          result[5] += 0.0018876828692779614;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0.023121387283236993;
          result[2] += 0;
          result[3] += 0.24855491329479767;
          result[4] += 0.7283236994219653;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03943217665615142;
          result[4] += 0.9605678233438486;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0.9950099800399202;
          result[1] += 0.0004990019960079841;
          result[2] += 0.003992015968063873;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004990019960079841;
        } else {
          result[0] += 0.7146118721461188;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2853881278538813;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.9717480871100648;
          result[1] += 0;
          result[2] += 0.009417304296645085;
          result[3] += 0.0164802825191289;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002354326074161271;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0011769321302471558;
          result[3] += 0.9988230678697528;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 0.06677524429967427;
          result[1] += 0;
          result[2] += 0.013843648208469055;
          result[3] += 0.7662866449511401;
          result[4] += 0.1490228013029316;
          result[5] += 0.004071661237785016;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6615384615384615;
          result[4] += 0.3384615384615385;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0.9960953989024905;
          result[1] += 0;
          result[2] += 0.0006331785563528915;
          result[3] += 0.0031658927817644574;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00010552975939214858;
        } else {
          result[0] += 0.5625223934073809;
          result[1] += 0;
          result[2] += 0.00895736295234683;
          result[3] += 0.42637047653170906;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002149767108563239;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9971324296141815;
          result[1] += 0;
          result[2] += 0.0023461939520333683;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005213764337851929;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
          result[0] += 0.6156691769057999;
          result[1] += 0.0015854141894569957;
          result[2] += 0.0031708283789139914;
          result[3] += 0.31245871317214957;
          result[4] += 0.0656625710133439;
          result[5] += 0.0006605892456070815;
          result[6] += 0.0007927070947284979;
        } else {
          result[0] += 0.016715830875122913;
          result[1] += 0;
          result[2] += 0.01868239921337267;
          result[3] += 0.7797443461160276;
          result[4] += 0.18485742379547693;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42f90000))) ) ) {
          result[0] += 0;
          result[1] += 0.005710206995003569;
          result[2] += 0;
          result[3] += 0.9942897930049964;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.4375;
          result[2] += 0;
          result[3] += 0.5625;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x3f800000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8539325842696629;
          result[1] += 0;
          result[2] += 0.14606741573033707;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
          result[0] += 0.03534031413612566;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9367364746945899;
          result[4] += 0.026614310645724257;
          result[5] += 0.0013089005235602095;
          result[6] += 0;
        } else {
          result[0] += 0.9455782312925171;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05442176870748299;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41500000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.3129205921938089;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.686406460296097;
          result[4] += 0;
          result[5] += 0.0006729475100942128;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40200000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9954337899543378;
          result[5] += 0.0045662100456621;
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420a0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.3548387096774194;
          result[2] += 0.6129032258064516;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.03225806451612903;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.996186844613918;
          result[1] += 0;
          result[2] += 0.002859866539561487;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009532888465204957;
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42180000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0707070707070707;
          result[2] += 0;
          result[3] += 0.9292929292929293;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9993272788429196;
          result[1] += 0;
          result[2] += 0.0006727211570803902;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0.5186609686609688;
          result[1] += 0.001994301994301995;
          result[2] += 0.006980056980056981;
          result[3] += 0.4716524216524217;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007122507122507124;
        } else {
          result[0] += 0.9652650822669104;
          result[1] += 0;
          result[2] += 0.007998171846435101;
          result[3] += 0.02536563071297989;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0013711151736745886;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420a0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40200000))) ) ) {
          result[0] += 0.9882352941176471;
          result[1] += 0;
          result[2] += 0.011764705882352941;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b30000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 0.012620192307692308;
          result[1] += 0;
          result[2] += 0.01622596153846154;
          result[3] += 0.8022836538461539;
          result[4] += 0.16887019230769232;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7288878072523729;
          result[1] += 0;
          result[2] += 0.005354100754441471;
          result[3] += 0.2642978826965199;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0014602092966658556;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42df0000))) ) ) {
          result[0] += 0.12033195020746888;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6376210235131397;
          result[4] += 0.24204702627939143;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.011904761904761904;
          result[1] += 0.03571428571428571;
          result[2] += 0;
          result[3] += 0.19444444444444445;
          result[4] += 0.7579365079365079;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.996578947368421;
          result[1] += 0;
          result[2] += 0.003157894736842105;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002631578947368421;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 0.16075307748008688;
          result[1] += 0.003620564808110065;
          result[2] += 0.004344677769732078;
          result[3] += 0.44569152787834904;
          result[4] += 0.38559015206372194;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8001091305929429;
          result[1] += 0.0007275372862859222;
          result[2] += 0.009276100400145508;
          result[3] += 0.1560567479083303;
          result[4] += 0.032739177882866496;
          result[5] += 0.0007275372862859222;
          result[6] += 0.0003637686431429611;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41c00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0011001100110011;
          result[3] += 0.9988998899889989;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9937888198757764;
          result[5] += 0.006211180124223602;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0.057991513437057995;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.93988684582744;
          result[4] += 0.001060820367751061;
          result[5] += 0.001060820367751061;
          result[6] += 0;
        } else {
          result[0] += 0.9347826086956522;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.043478260869565216;
          result[4] += 0;
          result[5] += 0.021739130434782608;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
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
          result[2] += 0.9047619047619048;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.09523809523809523;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x43608000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x42240000))) ) ) {
          result[0] += 0;
          result[1] += 0.018050541516245487;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9819494584837545;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0033222591362126247;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9966777408637874;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
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
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x426c0000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
          result[0] += 0;
          result[1] += 0.01045751633986928;
          result[2] += 0;
          result[3] += 0.9895424836601308;
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
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 0.9998742612850496;
          result[1] += 0;
          result[2] += 0.0001257387149503332;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6750114836931557;
          result[1] += 0;
          result[2] += 0.006430868167202572;
          result[3] += 0.3164905833716123;
          result[4] += 0;
          result[5] += 0.00045934772622875517;
          result[6] += 0.001607717041800643;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
          result[0] += 0.6924564796905223;
          result[1] += 0;
          result[2] += 0.03288201160541586;
          result[3] += 0.2746615087040619;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9245508488544586;
          result[1] += 0.0004944783253667381;
          result[2] += 0.0018955002472391628;
          result[3] += 0.07297675951870776;
          result[4] += 0;
          result[5] += 0;
          result[6] += 8.241305422778968e-05;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41700000))) ) ) {
          result[0] += 0;
          result[1] += 0.5517241379310346;
          result[2] += 0.4137931034482759;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.03448275862068966;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.00038461538461538467;
          result[2] += 0.005384615384615385;
          result[3] += 0.9926923076923078;
          result[4] += 0;
          result[5] += 0.0015384615384615387;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
          result[0] += 0.9864583333333333;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.013541666666666667;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9990457509409957;
          result[1] += 0.000371096856279489;
          result[2] += 0.0005831522027249113;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bc0000))) ) ) {
          result[0] += 0.6122448979591837;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3877551020408163;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9732620320855615;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.026737967914438502;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 0.025806451612903226;
          result[1] += 0.017741935483870968;
          result[2] += 0.012903225806451613;
          result[3] += 0.9435483870967742;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9197666489885598;
          result[1] += 0.0003030532616107281;
          result[2] += 0.0032578225623153267;
          result[3] += 0.07599060534889007;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006818698386241382;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
          result[0] += 0.35320754716981134;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6467924528301887;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9616858237547893;
          result[1] += 0;
          result[2] += 0.038314176245210725;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x43880000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x40200000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 0.9992905056759546;
          result[1] += 0;
          result[2] += 0.0007094943240454077;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9969450101832994;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.003054989816700611;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 0.0008586147681740127;
          result[1] += 0.006582713222667431;
          result[2] += 0.002289639381797367;
          result[3] += 0.9204350314825416;
          result[4] += 0.06868918145392103;
          result[5] += 0.0011448196908986836;
          result[6] += 0;
        } else {
          result[0] += 0.9969177422461953;
          result[1] += 0.0005779233288383741;
          result[2] += 0.002119052205740705;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00038528221922558276;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x422c0000))) ) ) {
          result[0] += 0.9468739876903143;
          result[1] += 0;
          result[2] += 0.00809847748623259;
          result[3] += 0.04308390022675738;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0019436345966958213;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.012429378531073447;
          result[3] += 0.1536723163841808;
          result[4] += 0.8333333333333334;
          result[5] += 0.0005649717514124294;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 0;
          result[1] += 0.001671681711802073;
          result[2] += 0;
          result[3] += 0.9983283182881979;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.75;
          result[5] += 0.25;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
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
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41600000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43320000))) ) ) {
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41b40000))) ) ) {
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
          result[4] += 0.9995926680244399;
          result[5] += 0.0004073319755600815;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0.0006216972334473112;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9975132110662108;
          result[4] += 0;
          result[5] += 0.0018650917003419337;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.21875;
          result[2] += 0.75;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.03125;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41a80000))) ) ) {
          result[0] += 0.9411764705882353;
          result[1] += 0.058823529411764705;
          result[2] += 0;
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
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 0.9994986212083229;
          result[1] += 0;
          result[2] += 0.00045124091250940083;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 5.0137879167711205e-05;
        } else {
          result[0] += 0.6526717557251909;
          result[1] += 0.015267175572519083;
          result[2] += 0;
          result[3] += 0.3320610687022901;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 0.9998231340643792;
          result[1] += 0;
          result[2] += 0.00017686593562079943;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.703962703962704;
          result[1] += 0.0013053613053613054;
          result[2] += 0.007272727272727273;
          result[3] += 0.286993006993007;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004662004662004662;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42640000))) ) ) {
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
          result[0] += 0.0036215482118605704;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.993662290629244;
          result[4] += 0;
          result[5] += 0.002716161158895428;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0.3159722222222222;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6819444444444445;
          result[4] += 0;
          result[5] += 0.0020833333333333333;
          result[6] += 0;
        } else {
          result[0] += 0.7226277372262774;
          result[1] += 0.072992700729927;
          result[2] += 0.19708029197080293;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.0072992700729927005;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40900000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x40200000))) ) ) {
          result[0] += 0.9994079336885732;
          result[1] += 0;
          result[2] += 0.0005920663114268798;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9985888993414863;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0014111006585136407;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 0;
          result[1] += 0.04953560371517028;
          result[2] += 0.06811145510835913;
          result[3] += 0.8823529411764706;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9972222222222222;
          result[1] += 0.00017361111111111112;
          result[2] += 0.0022569444444444442;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00034722222222222224;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.8214285714285714;
          result[1] += 0;
          result[2] += 0.012537993920972644;
          result[3] += 0.1641337386018237;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001899696048632219;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.005482456140350877;
          result[3] += 0.9945175438596491;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42990000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
          result[0] += 0.9845360824742269;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.015463917525773196;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0018461538461538461;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9901538461538462;
          result[4] += 0.003076923076923077;
          result[5] += 0.004923076923076923;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0.9858657243816256;
          result[1] += 0.000821760210370614;
          result[2] += 0.0023831046100747807;
          result[3] += 0.010600706713780921;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003287040841482456;
        } else {
          result[0] += 0.9998053843658774;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.00019461563412260784;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0.5112676056338028;
          result[1] += 0;
          result[2] += 0.026056338028169014;
          result[3] += 0.46267605633802816;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.14635958395245172;
          result[1] += 0.020059435364041606;
          result[2] += 0.004457652303120356;
          result[3] += 0.8291233283803864;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x41180000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40f00000))) ) ) {
          result[0] += 0.9;
          result[1] += 0;
          result[2] += 0.06666666666666667;
          result[3] += 0;
          result[4] += 0.03333333333333333;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.35358931552587647;
          result[1] += 0;
          result[2] += 0.007679465776293823;
          result[3] += 0.5268781302170283;
          result[4] += 0.11085141903171954;
          result[5] += 0.000333889816360601;
          result[6] += 0.000667779632721202;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41f80000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6666666666666666;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x43880000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420e0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 0.9945872801082544;
          result[1] += 0;
          result[2] += 0.005412719891745603;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9946865037194474;
          result[1] += 0;
          result[2] += 0.003188097768331562;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0021253985122210413;
        } else {
          result[0] += 0.9998756605533106;
          result[1] += 0;
          result[2] += 0.00012433944668946222;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.7272022332506204;
          result[1] += 0.0021712158808933004;
          result[2] += 0.007754342431761787;
          result[3] += 0.233560794044665;
          result[4] += 0.027140198511166252;
          result[5] += 0.0010856079404466502;
          result[6] += 0.0010856079404466502;
        } else {
          result[0] += 0;
          result[1] += 0.003284072249589491;
          result[2] += 0.014778325123152709;
          result[3] += 0.8115763546798029;
          result[4] += 0.16954022988505746;
          result[5] += 0.0008210180623973727;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0.6899526857779015;
          result[1] += 0;
          result[2] += 0.0005566379070414695;
          result[3] += 0.2797105482883384;
          result[4] += 0.02922349011967715;
          result[5] += 0.0005566379070414695;
          result[6] += 0;
        } else {
          result[0] += 0.35962330782813423;
          result[1] += 0;
          result[2] += 0.0005885815185403179;
          result[3] += 0.5038257798705121;
          result[4] += 0.13478516774573282;
          result[5] += 0;
          result[6] += 0.0011771630370806358;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0.15445402298850575;
          result[1] += 0.004310344827586207;
          result[2] += 0.008620689655172414;
          result[3] += 0.8326149425287356;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.03870967741935484;
          result[2] += 0;
          result[3] += 0.9612903225806452;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0.33333333333333337;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5000000000000001;
          result[5] += 0.16666666666666669;
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
          result[0] += 0.0020903010033444815;
          result[1] += 0;
          result[2] += 0.0020903010033444815;
          result[3] += 0.9937290969899666;
          result[4] += 0;
          result[5] += 0.0020903010033444815;
          result[6] += 0;
        } else {
          result[0] += 0.9680365296803652;
          result[1] += 0;
          result[2] += 0.0319634703196347;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.027777777777777776;
          result[4] += 0.9722222222222222;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.36492890995260663;
          result[4] += 0.6350710900473934;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.8571428571428571;
          result[2] += 0;
          result[3] += 0.14285714285714285;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0.9988655700510494;
          result[1] += 0;
          result[2] += 0.0011344299489506524;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9813333333333334;
          result[1] += 0;
          result[2] += 0.013333333333333336;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.005333333333333334;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.9888888888888889;
          result[1] += 0;
          result[2] += 0.011111111111111112;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9997045540877052;
          result[1] += 0;
          result[2] += 0.0002954459122947706;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.9554735547355474;
          result[1] += 0.0012300123001230013;
          result[2] += 0.008487084870848708;
          result[3] += 0.03394833948339483;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008610086100861009;
        } else {
          result[0] += 0;
          result[1] += 0.0010615711252653928;
          result[2] += 0.0031847133757961785;
          result[3] += 0.9957537154989384;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41300000))) ) ) {
          result[0] += 0.3074141048824593;
          result[1] += 0.018083182640144666;
          result[2] += 0;
          result[3] += 0.674502712477396;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.010218978102189781;
          result[3] += 0.9883211678832117;
          result[4] += 0;
          result[5] += 0.00145985401459854;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41dc0000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9965740388275599;
          result[4] += 0.0026646364674533687;
          result[5] += 0.0007613247049866769;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0684931506849315;
          result[4] += 0.9315068493150684;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 0.875;
          result[1] += 0.05357142857142857;
          result[2] += 0;
          result[3] += 0.05357142857142857;
          result[4] += 0;
          result[5] += 0.017857142857142856;
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
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42020000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41b80000))) ) ) {
          result[0] += 0;
          result[1] += 0.1875;
          result[2] += 0.125;
          result[3] += 0.6875;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0011350737797956867;
          result[3] += 0.996594778660613;
          result[4] += 0;
          result[5] += 0.0022701475595913734;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 0.9951629192579597;
          result[1] += 0.0002657736671450592;
          result[2] += 0.00031892840057407104;
          result[3] += 0.0040929144740339115;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00015946420028703552;
        } else {
          result[0] += 0.5534722222222223;
          result[1] += 0.002361111111111111;
          result[2] += 0.003472222222222222;
          result[3] += 0.4404166666666667;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002777777777777778;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40200000))) ) ) {
          result[0] += 0.996065808297568;
          result[1] += 0;
          result[2] += 0.002145922746781116;
          result[3] += 0.001430615164520744;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000357653791130186;
        } else {
          result[0] += 0.9840446749102513;
          result[1] += 0;
          result[2] += 0.0030581039755351682;
          result[3] += 0.012498337986969818;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00039888312724371757;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0.0076045627376425855;
          result[2] += 0.004839267196681645;
          result[3] += 0.9080539232630488;
          result[4] += 0.07950224680262703;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.008631319358816275;
          result[3] += 0.055487053020961775;
          result[4] += 0.935881627620222;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x421c0000))) ) ) {
          result[0] += 0.9994152046783625;
          result[1] += 0;
          result[2] += 0.0005847953216374269;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9789303079416531;
          result[1] += 0.0016207455429497568;
          result[2] += 0.019448946515397084;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 0.7189132706374086;
          result[1] += 0;
          result[2] += 0.0036572622779519333;
          result[3] += 0.2727272727272727;
          result[4] += 0.0005224660397074191;
          result[5] += 0.001567398119122257;
          result[6] += 0.002612330198537095;
        } else {
          result[0] += 0.9559400230680508;
          result[1] += 0.0018454440599769322;
          result[2] += 0.0014994232987312573;
          result[3] += 0.04025374855824684;
          result[4] += 0.00046136101499423304;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0.9652305366591082;
          result[1] += 0;
          result[2] += 0.0007558578987150417;
          result[3] += 0.033257747543461835;
          result[4] += 0;
          result[5] += 0.0007558578987150417;
          result[6] += 0;
        } else {
          result[0] += 0.9996036726335954;
          result[1] += 0;
          result[2] += 0.00026421824426976683;
          result[3] += 0;
          result[4] += 6.605456106744171e-05;
          result[5] += 6.605456106744171e-05;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41700000))) ) ) {
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
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
          result[2] += 0.011295180722891566;
          result[3] += 0.9887048192771084;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42420000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7;
          result[5] += 0.3;
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
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x41d00000))) ) ) {
          result[0] += 0.9941906522313178;
          result[1] += 0;
          result[2] += 0.004224980195405335;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0015843675732770005;
        } else {
          result[0] += 0.8;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.2;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41000000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x40f00000))) ) ) {
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
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
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
          result[2] += 0.0061614294516327784;
          result[3] += 0.9926062846580407;
          result[4] += 0;
          result[5] += 0.0012322858903265558;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3181818181818182;
          result[4] += 0.6818181818181818;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.013580246913580247;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9864197530864197;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.9867109634551495;
          result[1] += 0;
          result[2] += 0.013289036544850499;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9986975252980663;
          result[1] += 0;
          result[2] += 0.0012022843402464682;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00010019036168720569;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 0.12034383954154727;
          result[1] += 0.02865329512893983;
          result[2] += 0.01862464183381089;
          result[3] += 0.832378223495702;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.979992589848092;
          result[1] += 0.00024700506360380393;
          result[2] += 0.0050636038038779805;
          result[3] += 0.013338273434605412;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0013585278498209215;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
          result[0] += 0;
          result[1] += 0.15384615384615385;
          result[2] += 0.7692307692307693;
          result[3] += 0.07692307692307693;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.002148997134670487;
          result[3] += 0.9978510028653295;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43320000))) ) ) {
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0.001491053677932405;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9965208747514909;
          result[4] += 0.001491053677932405;
          result[5] += 0.000497017892644135;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.024024024024024024;
          result[3] += 0;
          result[4] += 0.973973973973974;
          result[5] += 0.002002002002002002;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.9946445959104188;
          result[1] += 0;
          result[2] += 0.003894839337877313;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0014605647517039924;
        } else {
          result[0] += 0.9997090364951368;
          result[1] += 0;
          result[2] += 0.00029096350486324717;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41700000))) ) ) {
          result[0] += 0.5949976697219201;
          result[1] += 0.0010874631039304024;
          result[2] += 0.005903371135622185;
          result[3] += 0.3967686810626068;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0012428149759204598;
        } else {
          result[0] += 0.8347750865051903;
          result[1] += 0.0010813148788927337;
          result[2] += 0.007569204152249135;
          result[3] += 0.15570934256055363;
          result[4] += 0;
          result[5] += 0.00043252595155709344;
          result[6] += 0.00043252595155709344;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 0.7184873949579832;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2815126050420168;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0021413276231263384;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9550321199143469;
          result[4] += 0.042826552462526764;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.045454545454545456;
          result[1] += 0.09090909090909091;
          result[2] += 0;
          result[3] += 0.8636363636363636;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.12998859749144812;
          result[1] += 0.011402508551881414;
          result[2] += 0.0068415051311288486;
          result[3] += 0.8517673888255416;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0.0027548209366391185;
          result[2] += 0;
          result[3] += 0.11570247933884298;
          result[4] += 0.8815426997245179;
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
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0.04790419161676647;
          result[1] += 0;
          result[2] += 0.05089820359281437;
          result[3] += 0.8952095808383234;
          result[4] += 0.005988023952095809;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.007612456747404845;
          result[2] += 0;
          result[3] += 0.9923875432525952;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ae0000))) ) ) {
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
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.1875;
          result[1] += 0.75;
          result[2] += 0;
          result[3] += 0.0625;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0.9853936413652077;
          result[1] += 0.00014606358634792346;
          result[2] += 0.0003895028969277959;
          result[3] += 0.013340474219777009;
          result[4] += 0.0005355664832757194;
          result[5] += 9.737572423194897e-05;
          result[6] += 9.737572423194897e-05;
        } else {
          result[0] += 0.8714069591527988;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.12859304084720122;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 0.71875;
          result[1] += 0;
          result[2] += 0.28125;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.001445086705202312;
          result[3] += 0;
          result[4] += 0.9985549132947977;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0.5161140378060117;
          result[1] += 0.0017043693833281685;
          result[2] += 0.004338394793926247;
          result[3] += 0.4772234273318872;
          result[4] += 0;
          result[5] += 0.0001549426712116517;
          result[6] += 0.00046482801363495507;
        } else {
          result[0] += 0.9863296083324292;
          result[1] += 0;
          result[2] += 0.0020614082673321038;
          result[3] += 0.0111750027123793;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00043398068785939026;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.977469670710572;
          result[4] += 0.01646447140381283;
          result[5] += 0.006065857885615252;
          result[6] += 0;
        } else {
          result[0] += 0.10305343511450382;
          result[1] += 0;
          result[2] += 0.11450381679389313;
          result[3] += 0.2633587786259542;
          result[4] += 0.5190839694656488;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
          result[0] += 0.0020909566126502874;
          result[1] += 0.006272869837950863;
          result[2] += 0;
          result[3] += 0.7584945112388918;
          result[4] += 0.23314166231050706;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0.9982841823056301;
          result[1] += 0;
          result[2] += 0.0008579088471849867;
          result[3] += 0.0008579088471849867;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0625;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9375;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0.2005610098176718;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7994389901823282;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6774809160305344;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.32251908396946566;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07772020725388601;
          result[3] += 0;
          result[4] += 0.9222797927461139;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9607458292443573;
          result[1] += 0;
          result[2] += 0.022571148184494603;
          result[3] += 0;
          result[4] += 0.009813542688910697;
          result[5] += 0;
          result[6] += 0.0068694798822374874;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41080000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.053497942386831275;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9465020576131687;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.34;
          result[1] += 0.006060606060606061;
          result[2] += 0.012727272727272728;
          result[3] += 0.6412121212121212;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0006779661016949153;
          result[1] += 0;
          result[2] += 0.010169491525423728;
          result[3] += 0.5661016949152542;
          result[4] += 0.4216949152542373;
          result[5] += 0.0013559322033898306;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0.9698608964451314;
          result[1] += 0.0006869311351537008;
          result[2] += 0.0015455950540958269;
          result[3] += 0.027563111798042245;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003434655675768504;
        } else {
          result[0] += 0.876924316917869;
          result[1] += 0;
          result[2] += 0.0011283952607399048;
          result[3] += 0.12186668815990973;
          result[4] += 0;
          result[5] += 0;
          result[6] += 8.059966148142178e-05;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 0.01953125;
          result[1] += 0.03125;
          result[2] += 0;
          result[3] += 0.1796875;
          result[4] += 0.76953125;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.003703703703703704;
          result[2] += 0;
          result[3] += 0.040740740740740744;
          result[4] += 0.9555555555555556;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x41080000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0.4864024864024864;
          result[1] += 0;
          result[2] += 0.010878010878010878;
          result[3] += 0.4902874902874903;
          result[4] += 0.012432012432012432;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.12977707006369427;
          result[1] += 0.005573248407643312;
          result[2] += 0.0035828025477707007;
          result[3] += 0.5195063694267515;
          result[4] += 0.34156050955414013;
          result[5] += 0;
          result[6] += 0;
        }
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
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x423e0000))) ) ) {
          result[0] += 0.985982316152685;
          result[1] += 0.00017252533965926245;
          result[2] += 0.0005175760189777874;
          result[3] += 0.012896269139529869;
          result[4] += 0.00017252533965926245;
          result[5] += 8.626266982963122e-05;
          result[6] += 0.00017252533965926245;
        } else {
          result[0] += 0.926942404329339;
          result[1] += 0.0011596443757247777;
          result[2] += 0.0017394665635871666;
          result[3] += 0.06938538848086587;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007730962504831851;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9934272300469484;
          result[4] += 0.0018779342723004697;
          result[5] += 0.004694835680751175;
          result[6] += 0;
        } else {
          result[0] += 0.13253012048192772;
          result[1] += 0;
          result[2] += 0.10843373493975904;
          result[3] += 0;
          result[4] += 0.7530120481927711;
          result[5] += 0.006024096385542169;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
          result[0] += 0.29548455241616056;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7045154475838394;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.778353856124433;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.22164614387556708;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42d90000))) ) ) {
          result[0] += 0.7968703867729555;
          result[1] += 0;
          result[2] += 0.011219368172423977;
          result[3] += 0.0008857395925597876;
          result[4] += 0.18954827280779454;
          result[5] += 0.00029524653085326254;
          result[6] += 0.0011809861234130502;
        } else {
          result[0] += 0.9723247232472325;
          result[1] += 0;
          result[2] += 0.0036900369003690036;
          result[3] += 0;
          result[4] += 0.023985239852398525;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0.5608628659476117;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.4391371340523883;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.16417910447761194;
          result[1] += 0;
          result[2] += 0.04477611940298507;
          result[3] += 0.07462686567164178;
          result[4] += 0.7164179104477612;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
          result[0] += 0.012711864406779662;
          result[1] += 0.046610169491525424;
          result[2] += 0;
          result[3] += 0.2330508474576271;
          result[4] += 0.7076271186440678;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.12827586206896555;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5958620689655173;
          result[4] += 0.2758620689655173;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0.0047169811320754715;
          result[1] += 0.005765199161425576;
          result[2] += 0.006813417190775681;
          result[3] += 0.6860587002096437;
          result[4] += 0.2966457023060797;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9863201094391245;
          result[1] += 0;
          result[2] += 0.013679890560875513;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.4;
          result[4] += 0.6;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.004335260115606936;
          result[2] += 0;
          result[3] += 0.06358381502890173;
          result[4] += 0.9320809248554913;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9961501443695862;
          result[1] += 0;
          result[2] += 0.002406159769008662;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0014436958614051972;
        } else {
          result[0] += 0.9997932089830017;
          result[1] += 0;
          result[2] += 0.0002067910169982216;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0.4028853860539674;
          result[1] += 0.0022709056906224955;
          result[2] += 0.008148543948704248;
          result[3] += 0.579615281859471;
          result[4] += 0.006144803633449105;
          result[5] += 0.0008014961261020571;
          result[6] += 0.0001335826876836762;
        } else {
          result[0] += 0.9653119337302615;
          result[1] += 0;
          result[2] += 0.0038829924928811804;
          result[3] += 0.03002847527828113;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000776598498576236;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x42ec0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
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
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0.02702702702702703;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.972972972972973;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.012448132780082987;
          result[1] += 0.04564315352697095;
          result[2] += 0;
          result[3] += 0.012448132780082987;
          result[4] += 0.9294605809128631;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
          result[0] += 0.9676945668135095;
          result[1] += 0;
          result[2] += 0.032305433186490456;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.07828282828282829;
          result[1] += 0.00404040404040404;
          result[2] += 0;
          result[3] += 0.9161616161616162;
          result[4] += 0.0015151515151515152;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0.30601092896174864;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.09836065573770492;
          result[4] += 0.5956284153005464;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42220000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.125;
          result[1] += 0;
          result[2] += 0.875;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b40000))) ) ) {
          result[0] += 0.3038461538461538;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6807692307692308;
          result[4] += 0.007692307692307693;
          result[5] += 0.007692307692307693;
          result[6] += 0;
        } else {
          result[0] += 0.9918337762744625;
          result[1] += 0.00019328340178787146;
          result[2] += 0.00024160425223483932;
          result[3] += 0.007683015221067891;
          result[4] += 0;
          result[5] += 0;
          result[6] += 4.8320850446967865e-05;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42d90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.010494752623688156;
          result[3] += 0;
          result[4] += 0.9895052473763118;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6170212765957447;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3829787234042553;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b60000))) ) ) {
          result[0] += 0.6734816596512327;
          result[1] += 0.0032070555221487274;
          result[2] += 0.005411906193625977;
          result[3] += 0.28542794147123673;
          result[4] += 0.03046702746041291;
          result[5] += 0.0012026458208057728;
          result[6] += 0.0008017638805371818;
        } else {
          result[0] += 0.0013976240391334732;
          result[1] += 0;
          result[2] += 0.00628930817610063;
          result[3] += 0.9888190076869323;
          result[4] += 0.0024458420684835783;
          result[5] += 0.001048218029350105;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 0.9281138790035588;
          result[1] += 0;
          result[2] += 0.004982206405693951;
          result[3] += 0.06690391459074735;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9955796918413741;
          result[1] += 0;
          result[2] += 0.002525890376357666;
          result[3] += 0.001262945188178833;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006314725940894166;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9808917197452229;
          result[1] += 0;
          result[2] += 0.01910828025477707;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0.1294678316123908;
          result[1] += 0.00873709293089754;
          result[2] += 0;
          result[3] += 0.817315329626688;
          result[4] += 0.044479745830023835;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0038498556304138597;
          result[1] += 0.007699711260827719;
          result[2] += 0;
          result[3] += 0.7757459095283927;
          result[4] += 0.21270452358036573;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b40000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40a00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04847207586933614;
          result[4] += 0.9515279241306639;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.2261029411764706;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7738970588235294;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42220000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.125;
          result[1] += 0;
          result[2] += 0.875;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9946627850557982;
          result[1] += 0;
          result[2] += 0.0038816108685104317;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001455604075691412;
        } else {
          result[0] += 0.9996687919185228;
          result[1] += 0;
          result[2] += 0.00033120808147718805;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0.6938083121289228;
          result[1] += 0.0021204410517387615;
          result[2] += 0.003604749787955895;
          result[3] += 0.29877014418999154;
          result[4] += 0.00021204410517387616;
          result[5] += 0.0008481764206955047;
          result[6] += 0.0006361323155216285;
        } else {
          result[0] += 0.886455605808141;
          result[1] += 0;
          result[2] += 0.012139966674601287;
          result[3] += 0.06379433468221854;
          result[4] += 0.034991668650321356;
          result[5] += 0.0007141156867412522;
          result[6] += 0.0019043084979766724;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41000000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0009871668311944718;
          result[2] += 0.008884501480750246;
          result[3] += 0.9901283316880553;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0.09689922480620156;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8701550387596899;
          result[4] += 0.03294573643410853;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.28571428571428575;
          result[1] += 0.007585335018963338;
          result[2] += 0;
          result[3] += 0.6586599241466499;
          result[4] += 0.04804045512010115;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
          result[0] += 0.6964285714285714;
          result[1] += 0;
          result[2] += 0.30357142857142855;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9949494949494949;
          result[5] += 0.005050505050505051;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41d00000))) ) ) {
          result[0] += 0.13636363636363635;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8636363636363636;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9983692106979778;
          result[1] += 0;
          result[2] += 0.0008697542944118286;
          result[3] += 0.0005435964340073929;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00021743857360295715;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0.3333333333333333;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6666666666666666;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9823651452282157;
          result[1] += 0;
          result[2] += 0.015560165975103735;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002074688796680498;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 0.004573170731707317;
          result[1] += 0.004573170731707317;
          result[2] += 0.009908536585365854;
          result[3] += 0.9397865853658537;
          result[4] += 0.041158536585365856;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9783783783783784;
          result[1] += 0.0018018018018018018;
          result[2] += 0.016216216216216217;
          result[3] += 0.0036036036036036037;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41280000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.058823529411764705;
          result[2] += 0;
          result[3] += 0.9411764705882353;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
          result[0] += 0.9957020057306591;
          result[1] += 0;
          result[2] += 0.0008868877063719472;
          result[3] += 0.0031382180379315055;
          result[4] += 0.00020466639377814165;
          result[5] += 0;
          result[6] += 6.822213125938056e-05;
        } else {
          result[0] += 0.014577259475218658;
          result[1] += 0.0029154518950437317;
          result[2] += 0;
          result[3] += 0.19970845481049562;
          result[4] += 0.782798833819242;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0.4191800188501414;
          result[1] += 0.001413760603204524;
          result[2] += 0.007540056550424128;
          result[3] += 0.5419415645617343;
          result[4] += 0.027803958529688973;
          result[5] += 0.00117813383600377;
          result[6] += 0.000942507068803016;
        } else {
          result[0] += 0.9855049378783052;
          result[1] += 0;
          result[2] += 0.0012742911755336094;
          result[3] += 0.013220770946161198;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
          result[0] += 0.9986611127640583;
          result[1] += 0;
          result[2] += 0.0010413567390657541;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002975304968759298;
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
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
          result[0] += 0.5786903440621531;
          result[1] += 0;
          result[2] += 0.0059933407325194225;
          result[3] += 0.3658157602663707;
          result[4] += 0.04950055493895671;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8672865595942517;
          result[1] += 0.0013524936601859677;
          result[2] += 0.004226542688081149;
          result[3] += 0.12442941673710901;
          result[4] += 0.0010143702451394757;
          result[5] += 0.0005071851225697378;
          result[6] += 0.0011834319526627217;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9985185185185185;
          result[5] += 0.0014814814814814814;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0006420545746388443;
          result[2] += 0.010914927768860353;
          result[3] += 0.9881219903691814;
          result[4] += 0;
          result[5] += 0.00032102728731942215;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
          result[0] += 0.13316582914572864;
          result[1] += 0.01507537688442211;
          result[2] += 0.00314070351758794;
          result[3] += 0.8486180904522613;
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
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41000000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42400000))) ) ) {
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
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
          result[0] += 0.9703989703989704;
          result[1] += 0;
          result[2] += 0.029601029601029602;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.07716870675891431;
          result[1] += 0.012240553485896753;
          result[2] += 0;
          result[3] += 0.9105907397551889;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x43880000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 0.9979414455626715;
          result[1] += 0;
          result[2] += 0.0018298261665141812;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00022872827081427266;
        } else {
          result[0] += 0.9997719290243123;
          result[1] += 0;
          result[2] += 0.000228070975687634;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 0.003389830508474576;
          result[2] += 0;
          result[3] += 0.24632768361581922;
          result[4] += 0.7502824858757062;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.39619444806464227;
          result[1] += 0.0010426169685911638;
          result[2] += 0.00664668317476867;
          result[3] += 0.576176202267692;
          result[4] += 0.018506451192493157;
          result[5] += 0.0010426169685911638;
          result[6] += 0.00039098136322168644;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42100000))) ) ) {
          result[0] += 0.9911883182275931;
          result[1] += 0;
          result[2] += 0.005790533736153071;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0030211480362537764;
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
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 0.9995515695067264;
          result[1] += 0;
          result[2] += 0.0004484304932735426;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.23501577287066247;
          result[1] += 0;
          result[2] += 0.028391167192429023;
          result[3] += 0.44637223974763407;
          result[4] += 0.2902208201892745;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.7393436439079593;
          result[1] += 0;
          result[2] += 0.0033949453036589967;
          result[3] += 0.2561297623538287;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001131648434552999;
        } else {
          result[0] += 0.1362088535754824;
          result[1] += 0;
          result[2] += 0.009080590238365494;
          result[3] += 0.7548240635641317;
          result[4] += 0.09648127128263337;
          result[5] += 0.00340522133938706;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0.9396636993076163;
          result[1] += 0.0005934718100890209;
          result[2] += 0.000692383778437191;
          result[3] += 0.011078140454995056;
          result[4] += 0.04797230464886252;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9826865671641791;
          result[1] += 0;
          result[2] += 0.0003980099502487562;
          result[3] += 0.016318407960199004;
          result[4] += 0.0003980099502487562;
          result[5] += 0;
          result[6] += 0.0001990049751243781;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0.4018132716049382;
          result[1] += 0.002893518518518518;
          result[2] += 0.007330246913580245;
          result[3] += 0.55054012345679;
          result[4] += 0.03626543209876543;
          result[5] += 0.00019290123456790117;
          result[6] += 0.0009645061728395059;
        } else {
          result[0] += 0.9860792412421601;
          result[1] += 0;
          result[2] += 0.0010708275967569222;
          result[3] += 0.012543980419152516;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003059507419305492;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40e00000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.3231707317073171;
          result[1] += 0;
          result[2] += 0.021341463414634148;
          result[3] += 0.6554878048780488;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x42240000))) ) ) {
          result[0] += 0.2;
          result[1] += 0.32;
          result[2] += 0;
          result[3] += 0.48;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0009033423667570009;
          result[1] += 0.011743450767841012;
          result[2] += 0;
          result[3] += 0.987353206865402;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 0.1745776347546259;
          result[1] += 0;
          result[2] += 0.007240547063555913;
          result[3] += 0.47144006436041835;
          result[4] += 0.3419147224456959;
          result[5] += 0.004827031375703942;
          result[6] += 0;
        } else {
          result[0] += 0.012269938650306749;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.24846625766871167;
          result[4] += 0.7392638036809815;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.00425273390036452;
          result[3] += 0.9860267314702309;
          result[4] += 0.009720534629404616;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5833333333333334;
          result[4] += 0.4166666666666667;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42aa0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bc0000))) ) ) {
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x43608000))) ) ) {
          result[0] += 0;
          result[1] += 0.004169562195969423;
          result[2] += 0;
          result[3] += 0.006254343293954135;
          result[4] += 0.9895760945100764;
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
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x3f800000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42100000))) ) ) {
          result[0] += 0;
          result[1] += 0.01532567049808429;
          result[2] += 0.006385696040868455;
          result[3] += 0.9782886334610472;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9983525535420099;
          result[1] += 0.0016474464579901153;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0.9925314465408805;
          result[1] += 0.0005002858776443683;
          result[2] += 0.0012507146941109204;
          result[3] += 0.005467409948542024;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00025014293882218413;
        } else {
          result[0] += 0.859504132231405;
          result[1] += 0;
          result[2] += 0.028925619834710745;
          result[3] += 0.1115702479338843;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 0.25974930362116994;
          result[1] += 0;
          result[2] += 0.010445682451253482;
          result[3] += 0.7298050139275766;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5089727722772277;
          result[1] += 0;
          result[2] += 0.0003094059405940594;
          result[3] += 0.4907178217821782;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
          result[0] += 0.9363444268357105;
          result[1] += 0;
          result[2] += 0.00792393026941363;
          result[3] += 0.0549392498679345;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000792393026941363;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9918367346938776;
          result[4] += 0;
          result[5] += 0.00816326530612245;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42100000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d40000))) ) ) {
          result[0] += 0;
          result[1] += 0.003943661971830986;
          result[2] += 0.009577464788732394;
          result[3] += 0.9853521126760564;
          result[4] += 0.0011267605633802818;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.05084745762711865;
          result[2] += 0;
          result[3] += 0.00847457627118644;
          result[4] += 0.940677966101695;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9767441860465116;
          result[1] += 0.023255813953488372;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41800000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
          result[0] += 0.12857142857142856;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8714285714285714;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.4331983805668016;
          result[1] += 0;
          result[2] += 0.03643724696356275;
          result[3] += 0.5303643724696356;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.9899396378269618;
          result[1] += 0;
          result[2] += 0.01006036217303823;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9996784152302547;
          result[1] += 0;
          result[2] += 0.00032158476974530485;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0.9990749306197965;
          result[1] += 0;
          result[2] += 0.0009250693802035153;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 0.04161979752530934;
          result[1] += 0.00562429696287964;
          result[2] += 0.006749156355455568;
          result[3] += 0.874578177727784;
          result[4] += 0.0686164229471316;
          result[5] += 0.00281214848143982;
          result[6] += 0;
        } else {
          result[0] += 0.9828499721137758;
          result[1] += 0;
          result[2] += 0.005716675962074735;
          result[3] += 0.009899609592861127;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0015337423312883436;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
          result[0] += 0;
          result[1] += 0.0019249278152069298;
          result[2] += 0;
          result[3] += 0.9939043952518447;
          result[4] += 0.0038498556304138597;
          result[5] += 0.0003208213025344883;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.038461538461538464;
          result[3] += 0;
          result[4] += 0.9615384615384616;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0.014285714285714285;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.004761904761904762;
          result[4] += 0.9809523809523809;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.17105263157894737;
          result[2] += 0;
          result[3] += 0.39473684210526316;
          result[4] += 0.4342105263157895;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9976825028968713;
          result[4] += 0.002317497103128621;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9716874292185731;
          result[1] += 0.014722536806342015;
          result[2] += 0.013590033975084938;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42740000))) ) ) {
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04966887417218543;
          result[4] += 0.9503311258278145;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.05106382978723404;
          result[1] += 0;
          result[2] += 0.01702127659574468;
          result[3] += 0.2936170212765957;
          result[4] += 0.6382978723404256;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 0.9959138187221397;
          result[1] += 0;
          result[2] += 0.004086181277860327;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9996625042186973;
          result[1] += 0;
          result[2] += 0.0003374957813027337;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.996268656716418;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0037313432835820895;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41500000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9969418960244648;
          result[5] += 0.0030581039755351682;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.022857142857142857;
          result[2] += 0;
          result[3] += 0.9771428571428571;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
          result[0] += 0.6723359277409436;
          result[1] += 0.0009608917075045642;
          result[2] += 0.004612280196021909;
          result[3] += 0.3210339194772749;
          result[4] += 0;
          result[5] += 0.00019217834150091285;
          result[6] += 0.0008648025367541078;
        } else {
          result[0] += 0.013533834586466165;
          result[1] += 0;
          result[2] += 0.006015037593984963;
          result[3] += 0.8578947368421053;
          result[4] += 0.11729323308270677;
          result[5] += 0.005263157894736842;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43320000))) ) ) {
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.007450599287333981;
          result[3] += 0.9692257855523162;
          result[4] += 0.019760285066407514;
          result[5] += 0.0035633300939423387;
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
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.022727272727272728;
          result[4] += 0.9772727272727273;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.005635566687539136;
          result[2] += 0;
          result[3] += 0.10958046336881654;
          result[4] += 0.8847839699436444;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x40200000))) ) ) {
          result[0] += 0.9954977488744372;
          result[1] += 0;
          result[2] += 0.004502251125562781;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9763779527559056;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.023622047244094488;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 0.9996132276155483;
          result[1] += 0;
          result[2] += 0.00038677238445175013;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 0.989765100671141;
          result[1] += 0.0028523489932885905;
          result[2] += 0.006543624161073826;
          result[3] += 0.0005033557046979866;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003355704697986577;
        } else {
          result[0] += 0.016778523489932886;
          result[1] += 0.030201342281879196;
          result[2] += 0;
          result[3] += 0.9530201342281879;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41700000))) ) ) {
          result[0] += 0.3330689928628073;
          result[1] += 0;
          result[2] += 0.008987575997885276;
          result[3] += 0.6576790906687814;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002643404705260375;
        } else {
          result[0] += 0.5829624920534011;
          result[1] += 0;
          result[2] += 0.006993006993006993;
          result[3] += 0.41004450095359185;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.9921671018276762;
          result[1] += 0;
          result[2] += 0.007832898172323759;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9994954003803905;
          result[1] += 0;
          result[2] += 0.0003881535535457827;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00011644606606373481;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0.0045871559633027525;
          result[1] += 0.005733944954128441;
          result[2] += 0;
          result[3] += 0.19036697247706422;
          result[4] += 0.7993119266055045;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.026406035665294925;
          result[1] += 0.00205761316872428;
          result[2] += 0.016803840877914953;
          result[3] += 0.8539094650205762;
          result[4] += 0.09842249657064472;
          result[5] += 0.0024005486968449933;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.9866310160427807;
          result[1] += 0;
          result[2] += 0.004456327985739751;
          result[3] += 0.007512095747389865;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0014005602240896359;
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
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 0;
          result[1] += 0.015873015873015872;
          result[2] += 0;
          result[3] += 0.9841269841269841;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
          result[0] += 0.8898305084745762;
          result[1] += 0;
          result[2] += 0.11016949152542373;
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
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41000000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.058394160583941604;
          result[2] += 0;
          result[3] += 0.9416058394160584;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41500000))) ) ) {
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
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40900000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42060000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 0.9949799196787149;
          result[1] += 0;
          result[2] += 0.0035140562248995983;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0015060240963855422;
        } else {
          result[0] += 0.9996136907981148;
          result[1] += 0;
          result[2] += 0.0003863092018851889;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
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
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0.019552354000514537;
          result[1] += 0.004373552868536146;
          result[2] += 0.009518909184461024;
          result[3] += 0.9459737586827888;
          result[4] += 0.019295086184718292;
          result[5] += 0.0012863390789812194;
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.006859756097560976;
          result[2] += 0;
          result[3] += 0.23932926829268292;
          result[4] += 0.7538109756097561;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.9894665766374071;
          result[1] += 0;
          result[2] += 0.0051316677920324105;
          result[3] += 0.004186360567184335;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0012153950033760973;
        } else {
          result[0] += 0.8704819277108434;
          result[1] += 0.0015060240963855422;
          result[2] += 0.024096385542168676;
          result[3] += 0.10391566265060241;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
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
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42100000))) ) ) {
          result[0] += 0;
          result[1] += 0.007246376811594203;
          result[2] += 0.005521048999309869;
          result[3] += 0.9006211180124224;
          result[4] += 0.08661145617667357;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9969620253164557;
          result[1] += 0.0015189873417721519;
          result[2] += 0.0015189873417721519;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42940000))) ) ) {
          result[0] += 0.8150000000000001;
          result[1] += 0;
          result[2] += 0.07500000000000001;
          result[3] += 0.11000000000000001;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03318992009834051;
          result[4] += 0.9668100799016595;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41980000))) ) ) {
          result[0] += 0.9895156695156696;
          result[1] += 0;
          result[2] += 0.0006837606837606839;
          result[3] += 0.009800569800569802;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.015527950310559008;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9813664596273293;
          result[4] += 0;
          result[5] += 0.0031055900621118015;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
          result[0] += 0.9900253592561284;
          result[1] += 0.0005071851225697379;
          result[2] += 0.0010143702451394759;
          result[3] += 0.008227669766131304;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00022541561003099465;
        } else {
          result[0] += 0;
          result[1] += 0.0030120481927710845;
          result[2] += 0;
          result[3] += 0.9668674698795181;
          result[4] += 0.012048192771084338;
          result[5] += 0.018072289156626505;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42440000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9971671388101984;
          result[4] += 0.002203336480956878;
          result[5] += 0.0006295247088448223;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03994082840236687;
          result[3] += 0;
          result[4] += 0.9600591715976331;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9893518518518518;
          result[1] += 0;
          result[2] += 0.007407407407407408;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0032407407407407406;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40b00000))) ) ) {
          result[0] += 0.0029239766081871343;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9956140350877193;
          result[5] += 0.0014619883040935672;
          result[6] += 0;
        } else {
          result[0] += 0.8132780082987552;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.18672199170124482;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41700000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.19753086419753085;
          result[3] += 0;
          result[4] += 0.7654320987654321;
          result[5] += 0.037037037037037035;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0030970406056434964;
          result[3] += 0.9965588437715073;
          result[4] += 0;
          result[5] += 0.00034411562284927734;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9717514124293786;
          result[4] += 0.02824858757062147;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.275;
          result[4] += 0.725;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0030845157310302285;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9969154842689698;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0.9989741374655796;
          result[1] += 0.00021597105987797635;
          result[2] += 0.0004859348847254468;
          result[3] += 0.00026996382484747045;
          result[4] += 0;
          result[5] += 0;
          result[6] += 5.399276496949409e-05;
        } else {
          result[0] += 0.8545727136431784;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.1454272863568216;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0.923217550274223;
          result[1] += 0.004341864716636197;
          result[2] += 0.006170018281535649;
          result[3] += 0.06489945155393052;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0013711151736745886;
        } else {
          result[0] += 0.003937007874015748;
          result[1] += 0;
          result[2] += 0.004921259842519685;
          result[3] += 0.9911417322834646;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x42740000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9944029850746269;
          result[1] += 0;
          result[2] += 0.003148320895522388;
          result[3] += 0.001982276119402985;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004664179104477612;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x424c0000))) ) ) {
          result[0] += 0.9252601702932829;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.07473982970671712;
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
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42220000))) ) ) {
          result[0] += 0.9986551392891451;
          result[1] += 0;
          result[2] += 0.0013448607108549472;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9997246316948919;
          result[1] += 0;
          result[2] += 0.00027536830510808204;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40900000))) ) ) {
          result[0] += 0.9994603345925526;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005396654074473826;
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
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
          result[0] += 0.023330417031204434;
          result[1] += 0.005540974044911053;
          result[2] += 0.009040536599591718;
          result[3] += 0.9442986293379995;
          result[4] += 0.016622922134733157;
          result[5] += 0.0011665208515602217;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.005638134290107637;
          result[2] += 0;
          result[3] += 0.15530497180932856;
          result[4] += 0.8390568939005638;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0.987012987012987;
          result[1] += 0;
          result[2] += 0.003986112897003986;
          result[3] += 0.007843641507007844;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011572585830011573;
        } else {
          result[0] += 0.8828571428571429;
          result[1] += 0;
          result[2] += 0.04;
          result[3] += 0.07714285714285714;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 0;
          result[1] += 0.0006591957811470006;
          result[2] += 0;
          result[3] += 0.999340804218853;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8666666666666667;
          result[5] += 0.13333333333333333;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1642512077294686;
          result[3] += 0;
          result[4] += 0.8357487922705314;
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41600000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40e00000))) ) ) {
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
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.00881334592382751;
          result[3] += 0.987724268177526;
          result[4] += 0;
          result[5] += 0.003462385898646522;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9166666666666666;
          result[2] += 0;
          result[3] += 0.08333333333333333;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420a0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.989335520918786;
          result[1] += 0;
          result[2] += 0.008203445447087778;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0024610336341263335;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.999194847020934;
          result[1] += 0;
          result[2] += 0.0008051529790660225;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
          result[0] += 0.49870801033591733;
          result[1] += 0.01808785529715762;
          result[2] += 0;
          result[3] += 0.48320413436692505;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9503998000999501;
          result[1] += 0.0016241879060469764;
          result[2] += 0.007371314342828585;
          result[3] += 0.03960519740129935;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009995002498750624;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
          result[0] += 0;
          result[1] += 0.0010496850944716584;
          result[2] += 0;
          result[3] += 0.9989503149055283;
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
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9959839357429718;
          result[1] += 0;
          result[2] += 0.0033467202141900937;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006693440428380187;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0.9992174399105646;
          result[1] += 0;
          result[2] += 0.0007825600894354388;
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
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
          result[0] += 0.02132564841498559;
          result[1] += 0.008357348703170028;
          result[2] += 0.007204610951008645;
          result[3] += 0.9409221902017291;
          result[4] += 0.01988472622478386;
          result[5] += 0.0023054755043227667;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.004;
          result[2] += 0;
          result[3] += 0.1425;
          result[4] += 0.8535;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42000000))) ) ) {
          result[0] += 0.9848443473511742;
          result[1] += 0;
          result[2] += 0.005871108683779356;
          result[3] += 0.009011469142545057;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00027307482250136535;
        } else {
          result[0] += 0.9394366197183099;
          result[1] += 0;
          result[2] += 0.015492957746478875;
          result[3] += 0.03661971830985916;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.008450704225352114;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40200000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9791666666666666;
          result[5] += 0.020833333333333332;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42cf0000))) ) ) {
          result[0] += 0;
          result[1] += 0.0016846361185983828;
          result[2] += 0;
          result[3] += 0.9979784366576819;
          result[4] += 0;
          result[5] += 0.00033692722371967657;
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
  
  // Average tree outputs
  result[0] /= 50;
  result[1] /= 50;
  result[2] /= 50;
  result[3] /= 50;
  result[4] /= 50;
  result[5] /= 50;
  result[6] /= 50;
  
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
