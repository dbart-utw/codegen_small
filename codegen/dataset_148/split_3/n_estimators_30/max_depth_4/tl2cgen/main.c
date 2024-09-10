
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)48.5) ) ) {
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
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
          result[1] += 0.0007547169811320754;
          result[2] += 0;
          result[3] += 0.9984905660377359;
          result[4] += 0;
          result[5] += 0.0007547169811320754;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.17777777777777778;
          result[2] += 0.8;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.022222222222222223;
          result[6] += 0;
        }
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          result[0] += 0.991140642303433;
          result[1] += 0;
          result[2] += 0.008305647840531562;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005537098560354374;
        } else {
          result[0] += 0.9994495816820784;
          result[1] += 0;
          result[2] += 0.0005504183179216205;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          result[0] += 0.05714285714285714;
          result[1] += 0.013127413127413128;
          result[2] += 0.02702702702702703;
          result[3] += 0.9011583011583012;
          result[4] += 0;
          result[5] += 0.0015444015444015444;
          result[6] += 0;
        } else {
          result[0] += 0.9816491313922192;
          result[1] += 0.00012233912405187178;
          result[2] += 0.005382921458282359;
          result[3] += 0.011132860288720332;
          result[4] += 0;
          result[5] += 0.0003670173721556154;
          result[6] += 0.0013457303645705897;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)103.5) ) ) {
          result[0] += 0;
          result[1] += 0.001451378809869376;
          result[2] += 0;
          result[3] += 0.9985486211901307;
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)29) ) ) {
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
          result[3] += 0.9536707056307911;
          result[4] += 0.04632929436920884;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
          result[0] += 0.6585365853658537;
          result[1] += 0;
          result[2] += 0.34146341463414637;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.014729950900163666;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9819967266775778;
          result[5] += 0.0032733224222585926;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)29) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.00048449612403100775;
          result[2] += 0;
          result[3] += 0.9142441860465116;
          result[4] += 0.08381782945736434;
          result[5] += 0.0014534883720930232;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
          result[0] += 0;
          result[1] += 0.0009523809523809524;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9990476190476191;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0975609756097561;
          result[1] += 0;
          result[2] += 0.013008130081300813;
          result[3] += 0;
          result[4] += 0.8894308943089431;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 0.9988394974519401;
          result[1] += 0;
          result[2] += 0.0010091326504869068;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000151369897573036;
        } else {
          result[0] += 0.7884615384615384;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.21153846153846154;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)36) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.04878048780487805;
          result[2] += 0;
          result[3] += 0.9512195121951219;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          result[0] += 0.9298975938722838;
          result[1] += 0.000333028057613854;
          result[2] += 0.004662392806593955;
          result[3] += 0.06419115810507035;
          result[4] += 0;
          result[5] += 8.32570144034635e-05;
          result[6] += 0.000832570144034635;
        } else {
          result[0] += 0.2607099143206854;
          result[1] += 0.009791921664626682;
          result[2] += 0.037943696450428395;
          result[3] += 0.6915544675642595;
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.00744047619047619;
          result[3] += 0.9925595238095238;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
          result[0] += 0.9777158774373259;
          result[1] += 0;
          result[2] += 0.019498607242339833;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002785515320334262;
        } else {
          result[0] += 0.9987608426270136;
          result[1] += 0;
          result[2] += 0.0012391573729863693;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)34.5) ) ) {
          result[0] += 0.998201007435836;
          result[1] += 0;
          result[2] += 0.001798992564164068;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.999937280481686;
          result[1] += 0;
          result[2] += 6.271951831409934e-05;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)76.5) ) ) {
          result[0] += 0.7400692269655513;
          result[1] += 0.0009889566507334763;
          result[2] += 0.002307565518378111;
          result[3] += 0.2548211636723257;
          result[4] += 0.0006593044338223175;
          result[5] += 0.00016482610845557937;
          result[6] += 0.0009889566507334763;
        } else {
          result[0] += 0.2557612391386475;
          result[1] += 0.0056667925953910086;
          result[2] += 0.01095579901775595;
          result[3] += 0.64072534945221;
          result[4] += 0.08689081979599547;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
          result[0] += 0.06654888103651355;
          result[1] += 0;
          result[2] += 0.004711425206124852;
          result[3] += 0.11896348645465253;
          result[4] += 0.809776207302709;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8757644029610557;
          result[1] += 0;
          result[2] += 0.013196009011908594;
          result[3] += 0.06565819118120374;
          result[4] += 0.04248471194077889;
          result[5] += 0.0016092693916961698;
          result[6] += 0.001287415513356936;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
          result[0] += 0;
          result[1] += 0.03864734299516908;
          result[2] += 0;
          result[3] += 0.961352657004831;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0014641288433382138;
          result[3] += 0;
          result[4] += 0.9956076134699854;
          result[5] += 0.0029282576866764276;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9975026757046022;
          result[4] += 0.0017838030681412772;
          result[5] += 0.0007135212272565109;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.96875;
          result[3] += 0;
          result[4] += 0.03125;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          result[0] += 0.9973684210526316;
          result[1] += 0;
          result[2] += 0.002631578947368421;
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
          result[0] += 0.009906439185470555;
          result[1] += 0.006604292790313704;
          result[2] += 0.018712162905888827;
          result[3] += 0.9636763896532746;
          result[4] += 0;
          result[5] += 0.001100715465052284;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
          result[0] += 0.9949874686716792;
          result[1] += 0;
          result[2] += 0.0037593984962406013;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0012531328320802004;
        } else {
          result[0] += 0.4047362755651238;
          result[1] += 0;
          result[2] += 0.002691065662002153;
          result[3] += 0.589881593110872;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002691065662002153;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
          result[0] += 0;
          result[1] += 0.0049504950495049506;
          result[2] += 0;
          result[3] += 0.0297029702970297;
          result[4] += 0.9653465346534653;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.3237139272271017;
          result[1] += 0.009410288582183188;
          result[2] += 0.01380175658720201;
          result[3] += 0.6518193224592221;
          result[4] += 0.0012547051442910917;
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
          result[0] += 0.297029702970297;
          result[1] += 0;
          result[2] += 0.024752475247524754;
          result[3] += 0.6782178217821783;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)53.5) ) ) {
          result[0] += 0.9819135147873218;
          result[1] += 0.0011193590196771532;
          result[2] += 0.0008247908566042182;
          result[3] += 0.015553199010250972;
          result[4] += 0.0002945681630729351;
          result[5] += 0.00011782726522917403;
          result[6] += 0.00017674089784376105;
        } else {
          result[0] += 0.7009579341940858;
          result[1] += 0;
          result[2] += 0.007496876301541024;
          result[3] += 0.25780924614743855;
          result[4] += 0.03290295710120783;
          result[5] += 0;
          result[6] += 0.0008329862557267805;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          result[0] += 0.6941604574597124;
          result[1] += 0;
          result[2] += 0.0010396811644429044;
          result[3] += 0.304626581181771;
          result[4] += 0.0001732801940738174;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.001834862385321101;
          result[1] += 0;
          result[2] += 0.001834862385321101;
          result[3] += 0;
          result[4] += 0.9963302752293578;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)80.5) ) ) {
          result[0] += 0.002909796314258002;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.989815712900097;
          result[4] += 0.0033947623666343357;
          result[5] += 0.0038797284190106693;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.01282051282051282;
          result[3] += 0.8965811965811966;
          result[4] += 0.0905982905982906;
          result[5] += 0;
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
          result[2] += 0.01904761904761905;
          result[3] += 0;
          result[4] += 0.9809523809523809;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
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
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-41) ) ) {
          result[0] += 0;
          result[1] += 0.02214022140221402;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.977859778597786;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0016778523489932886;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9983221476510067;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)99.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8679245283018868;
          result[1] += 0.1320754716981132;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9907362262311068;
          result[1] += 0;
          result[2] += 0.006338371526084837;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0029254022428083864;
        } else {
          result[0] += 0.9998298379206194;
          result[1] += 0;
          result[2] += 0.00017016207938061004;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
          result[0] += 0.9871954472701405;
          result[1] += 0.002134092121643251;
          result[2] += 0.009425573537257691;
          result[3] += 0.0007113640405477503;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005335230304108127;
        } else {
          result[0] += 0.4130991584339554;
          result[1] += 0;
          result[2] += 0.008049762166117821;
          result[3] += 0.5777533845590926;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0010976948408342483;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)79) ) ) {
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9959349593495935;
          result[5] += 0.0040650406504065045;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9993887530562348;
          result[4] += 0;
          result[5] += 0.0006112469437652812;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0.1590909090909091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8409090909090909;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.008866075594960336;
          result[3] += 0;
          result[4] += 0.9906672888474102;
          result[5] += 0.0004666355576294914;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)3.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          result[0] += 0.9899598393574297;
          result[1] += 0;
          result[2] += 0.008701472556894244;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0013386880856760374;
        } else {
          result[0] += 0.9992331288343558;
          result[1] += 0;
          result[2] += 0.0007668711656441718;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9459267164710069;
          result[1] += 0.001185817621249852;
          result[2] += 0.007233487489624097;
          result[3] += 0.04470532432111942;
          result[4] += 0;
          result[5] += 0.00011858176212498519;
          result[6] += 0.0008300723348748963;
        } else {
          result[0] += 0;
          result[1] += 0.0010263427984946972;
          result[2] += 0.005131713992473486;
          result[3] += 0.9938419432090319;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)183) ) ) {
          result[0] += 0;
          result[1] += 0.030612244897959183;
          result[2] += 0;
          result[3] += 0.9693877551020408;
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
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          result[0] += 0.005415162454873646;
          result[1] += 0.02707581227436823;
          result[2] += 0;
          result[3] += 0.9675090252707581;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9969576410016382;
          result[1] += 0;
          result[2] += 0.0030423589983618066;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)3.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9864036928241713;
          result[1] += 0.00020981955518254304;
          result[2] += 0.0007133864876206463;
          result[3] += 0.012547209399916074;
          result[4] += 0;
          result[5] += 4.196391103650861e-05;
          result[6] += 8.392782207301721e-05;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
          result[0] += 0;
          result[1] += 0.0039020929407591345;
          result[2] += 0.013479957431713374;
          result[3] += 0.9826179496275275;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9701726844583988;
          result[1] += 0.0031397174254317113;
          result[2] += 0.02511773940345369;
          result[3] += 0.0015698587127158557;
          result[4] += 0;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
          result[0] += 0.14957118353344767;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8504288164665523;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5081833060556464;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.4918166939443535;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          result[0] += 0.945273631840796;
          result[1] += 0;
          result[2] += 0.04145936981757877;
          result[3] += 0.003316749585406302;
          result[4] += 0.003316749585406302;
          result[5] += 0.003316749585406302;
          result[6] += 0.003316749585406302;
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
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
          result[0] += 0.3491773308957952;
          result[1] += 0.005484460694698354;
          result[2] += 0;
          result[3] += 0.6416819012797075;
          result[4] += 0;
          result[5] += 0.003656307129798903;
          result[6] += 0;
        } else {
          result[0] += 0.9973579429166821;
          result[1] += 0.0006326052171324377;
          result[2] += 0.0012652104342648755;
          result[3] += 0.00048375693074833475;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00026048450117218026;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 0.22900365153886282;
          result[1] += 0;
          result[2] += 0.001564945226917058;
          result[3] += 0.7673448095983307;
          result[4] += 0.0010432968179447052;
          result[5] += 0.0010432968179447052;
          result[6] += 0;
        } else {
          result[0] += 0.7318435754189945;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.25698324022346375;
          result[4] += 0;
          result[5] += 0.011173184357541902;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
          result[0] += 0.37167070217917675;
          result[1] += 0;
          result[2] += 0.01694915254237288;
          result[3] += 0.5968523002421308;
          result[4] += 0.014527845036319613;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0016863406408094434;
          result[1] += 0.00505902192242833;
          result[2] += 0;
          result[3] += 0.23608768971332209;
          result[4] += 0.7571669477234402;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.32713085234093636;
          result[1] += 0.005402160864345739;
          result[2] += 0.02460984393757503;
          result[3] += 0.6428571428571429;
          result[4] += 0;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.7518037518037518;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2481962481962482;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-31) ) ) {
          result[0] += 0.5833333333333334;
          result[1] += 0;
          result[2] += 0.16666666666666666;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.25;
          result[6] += 0;
        } else {
          result[0] += 0.981442681831787;
          result[1] += 0;
          result[2] += 0.014067644417838972;
          result[3] += 0.000897934750074828;
          result[4] += 0.001795869500149656;
          result[5] += 0.0005986231667165521;
          result[6] += 0.0011972463334331042;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.044444444444444446;
          result[3] += 0;
          result[4] += 0.9555555555555556;
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-16) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-141) ) ) {
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.967948717948718;
          result[1] += 0;
          result[2] += 0.03205128205128205;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          result[0] += 0.9974059662775616;
          result[1] += 0;
          result[2] += 0.0025940337224383916;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9996677740863787;
          result[1] += 0;
          result[2] += 0.0003322259136212625;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
          result[0] += 0.9718287692791943;
          result[1] += 0.002360717658168083;
          result[2] += 0.0031476235442241107;
          result[3] += 0.021403840100723954;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0012590494176896443;
        } else {
          result[0] += 0.6664667066586683;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.33293341331733656;
          result[4] += 0;
          result[5] += 0.0005998800239952009;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
          result[0] += 0.12915936952714538;
          result[1] += 0.0030647985989492124;
          result[2] += 0.01225919439579685;
          result[3] += 0.6589316987740806;
          result[4] += 0.1954903677758319;
          result[5] += 0.0010945709281961473;
          result[6] += 0;
        } else {
          result[0] += 0.0019455252918287938;
          result[1] += 0.0038910505836575876;
          result[2] += 0;
          result[3] += 0.11770428015564202;
          result[4] += 0.8764591439688716;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)103.5) ) ) {
          result[0] += 0;
          result[1] += 0.002242152466367713;
          result[2] += 0;
          result[3] += 0.9977578475336323;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
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
          result[2] += 0.004155124653739613;
          result[3] += 0;
          result[4] += 0.9930747922437674;
          result[5] += 0.0027700831024930752;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-41) ) ) {
          result[0] += 0;
          result[1] += 0.052980132450331126;
          result[2] += 0;
          result[3] += 0.07947019867549669;
          result[4] += 0.8675496688741722;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7356902356902357;
          result[4] += 0.26430976430976433;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6774193548387096;
          result[1] += 0;
          result[2] += 0.3225806451612903;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
          result[0] += 0;
          result[1] += 0.0022675736961451248;
          result[2] += 0;
          result[3] += 0.011337868480725623;
          result[4] += 0.9863945578231292;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.19148936170212766;
          result[4] += 0.8085106382978723;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
          result[0] += 0.3459715639810427;
          result[1] += 0.00737230121116377;
          result[2] += 0.016324381253291206;
          result[3] += 0.6140073723012112;
          result[4] += 0.016324381253291206;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.08268156424581005;
          result[1] += 0;
          result[2] += 0.008938547486033519;
          result[3] += 0.14078212290502792;
          result[4] += 0.7675977653631285;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 0.9988250269264662;
          result[1] += 0;
          result[2] += 0.0009791442279447763;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00019582884558895524;
        } else {
          result[0] += 0.6986301369863014;
          result[1] += 0.003424657534246575;
          result[2] += 0;
          result[3] += 0.2979452054794521;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
          result[0] += 0.004149377593360996;
          result[1] += 0.012448132780082987;
          result[2] += 0;
          result[3] += 0.970954356846473;
          result[4] += 0.012448132780082987;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.024691358024691357;
          result[3] += 0;
          result[4] += 0.9753086419753086;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
          result[0] += 0.9108377480470502;
          result[1] += 0.0010774894495824726;
          result[2] += 0.002783514411421388;
          result[3] += 0.08377480470503725;
          result[4] += 0;
          result[5] += 0.00026937236239561816;
          result[6] += 0.0012570710245128848;
        } else {
          result[0] += 0.5081131200741771;
          result[1] += 0;
          result[2] += 0.004636068613815485;
          result[3] += 0.4872508113120074;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)49) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.007073386383731211;
          result[3] += 0.986737400530504;
          result[4] += 0;
          result[5] += 0.00618921308576481;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0;
          result[4] += 0.7142857142857143;
          result[5] += 0.03571428571428571;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
          result[0] += 0.1603053435114504;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8295165394402036;
          result[4] += 0.0025445292620865146;
          result[5] += 0.0076335877862595426;
          result[6] += 0;
        } else {
          result[0] += 0.9986660198884307;
          result[1] += 0;
          result[2] += 0.00024254183846713557;
          result[3] += 0.0008488964346349745;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00024254183846713557;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37) ) ) {
          result[0] += 0;
          result[1] += 0.0024737167594310453;
          result[2] += 0;
          result[3] += 0.7297464440321583;
          result[4] += 0.26777983920841064;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9955634427684117;
          result[1] += 0;
          result[2] += 0.0044365572315882874;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44) ) ) {
          result[0] += 0.08399138549892318;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9160086145010768;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          result[0] += 0.9616122840690979;
          result[1] += 0;
          result[2] += 0.028790786948176585;
          result[3] += 0;
          result[4] += 0.0067178502879078695;
          result[5] += 0;
          result[6] += 0.0028790786948176585;
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)10.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          result[0] += 0.0015723270440251573;
          result[1] += 0.007861635220125786;
          result[2] += 0.01650943396226415;
          result[3] += 0.9740566037735849;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.97632058287796;
          result[1] += 0.0036429872495446266;
          result[2] += 0.01639344262295082;
          result[3] += 0.0036429872495446266;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          result[0] += 0.9974085207836633;
          result[1] += 0;
          result[2] += 0.002591479216336685;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9996524559777572;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00034754402224281743;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.8134187712024123;
          result[1] += 0.0028269883151149644;
          result[2] += 0.00603090840557859;
          result[3] += 0.159442140972484;
          result[4] += 0.01752732755371278;
          result[5] += 0.0005653976630229929;
          result[6] += 0.00018846588767433095;
        } else {
          result[0] += 0;
          result[1] += 0.00211864406779661;
          result[2] += 0.00211864406779661;
          result[3] += 0.7805084745762711;
          result[4] += 0.21440677966101696;
          result[5] += 0.000847457627118644;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9743589743589743;
          result[5] += 0.02564102564102564;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)29) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.010566037735849057;
          result[2] += 0.009056603773584906;
          result[3] += 0.9773584905660377;
          result[4] += 0;
          result[5] += 0.0030188679245283017;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)2.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0.2682333873581848;
          result[1] += 0.0008103727714748786;
          result[2] += 0;
          result[3] += 0.6523500810372772;
          result[4] += 0.07293354943273907;
          result[5] += 0.00567260940032415;
          result[6] += 0;
        } else {
          result[0] += 0.06570841889117043;
          result[1] += 0;
          result[2] += 0.014373716632443531;
          result[3] += 0;
          result[4] += 0.919917864476386;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)10.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.13526570048309178;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8647342995169082;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
          result[0] += 0.9752442996742672;
          result[1] += 0;
          result[2] += 0.023452768729641697;
          result[3] += 0.0013029315960912055;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9980759610574518;
          result[1] += 0.00038480778850963945;
          result[2] += 0.0012313849232308462;
          result[3] += 0.00015392311540385578;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00015392311540385578;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)163) ) ) {
          result[0] += 0.0030864197530864196;
          result[1] += 0.033950617283950615;
          result[2] += 0;
          result[3] += 0.9629629629629629;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6666666666666666;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
          result[0] += 0.9484662576687116;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.051533742331288344;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.016600061481709193;
          result[1] += 0;
          result[2] += 0.006148170919151552;
          result[3] += 0.9769443590531817;
          result[4] += 0;
          result[5] += 0.0003074085459575776;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)38) ) ) {
          result[0] += 0.9952597274343276;
          result[1] += 0;
          result[2] += 0.0027651589966423075;
          result[3] += 0.0013825794983211538;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005925340707090659;
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-9) ) ) {
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)35) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9979123173277662;
          result[5] += 0.0020876826722338203;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
          result[0] += 0;
          result[1] += 0.25;
          result[2] += 0.6666666666666666;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.08333333333333333;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0006269592476489029;
          result[2] += 0.00877742946708464;
          result[3] += 0.9896551724137931;
          result[4] += 0;
          result[5] += 0.0009404388714733542;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-11) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1487) ) ) {
          result[0] += 0.6666666666666666;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.021052631578947368;
          result[2] += 0;
          result[3] += 0.9789473684210527;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 0.9993900579444953;
          result[1] += 0;
          result[2] += 0.000609942055504727;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6788321167883211;
          result[1] += 0.010948905109489052;
          result[2] += 0;
          result[3] += 0.3102189781021898;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 0.5445140609063093;
          result[1] += 0.002331341978726505;
          result[2] += 0.0088882412938948;
          result[3] += 0.4433921025790471;
          result[4] += 0;
          result[5] += 0.00029141774734081313;
          result[6] += 0.0005828354946816263;
        } else {
          result[0] += 0.987534484520282;
          result[1] += 0;
          result[2] += 0.0018391744150403596;
          result[3] += 0.01031981199550424;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003065290691733933;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9950367647058823;
          result[1] += 0;
          result[2] += 0.004963235294117647;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9987012987012988;
          result[5] += 0.0012987012987012987;
          result[6] += 0;
        } else {
          result[0] += 0.020706132200690206;
          result[1] += 0.006636580833554553;
          result[2] += 0.019113352800637112;
          result[3] += 0.9511547650650385;
          result[4] += 0;
          result[5] += 0.002389169100079639;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3697478991596639;
          result[4] += 0.6302521008403361;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.009232954545454546;
          result[2] += 0;
          result[3] += 0.0546875;
          result[4] += 0.9360795454545454;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)38) ) ) {
          result[0] += 0.9921813917122753;
          result[1] += 0;
          result[2] += 0.006515506906437321;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0013031013812874641;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0004248088360237893;
          result[3] += 0.9995751911639762;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)40.5) ) ) {
          result[0] += 0.7379784102060843;
          result[1] += 0.0009813542688910696;
          result[2] += 0.008832188420019628;
          result[3] += 0.2492639842983317;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002944062806673209;
        } else {
          result[0] += 0.9734564339296019;
          result[1] += 0;
          result[2] += 0.004616272360069245;
          result[3] += 0.021927293710328914;
          result[4] += 0;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)29) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
          result[0] += 0;
          result[1] += 0.28;
          result[2] += 0.64;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.08;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0015748031496062992;
          result[2] += 0.005039370078740157;
          result[3] += 0.9921259842519685;
          result[4] += 0;
          result[5] += 0.0012598425196850393;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)46) ) ) {
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-26) ) ) {
          result[0] += 0.15625;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.84375;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9946125004550254;
          result[1] += 0.0009100505988132941;
          result[2] += 0.002511739652724692;
          result[3] += 0.0019293072694841836;
          result[4] += 0;
          result[5] += 0;
          result[6] += 3.6402023952531766e-05;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
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
          result[2] += 0.0032102728731942215;
          result[3] += 0.9964686998394864;
          result[4] += 0;
          result[5] += 0.00032102728731942215;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)311.5) ) ) {
          result[0] += 0.9965490797546013;
          result[1] += 0;
          result[2] += 0.0019171779141104294;
          result[3] += 0.0009585889570552147;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005751533742331289;
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-35) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.00031036623215394165;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9972067039106145;
          result[4] += 0.00186219739292365;
          result[5] += 0.0006207324643078833;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)33.5) ) ) {
          result[0] += 0.9894736842105263;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.010526315789473684;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9995535714285714;
          result[5] += 0.0004464285714285714;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.2;
          result[2] += 0.7142857142857143;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.08571428571428572;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
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
          result[0] += 0.9982995262966112;
          result[1] += 0;
          result[2] += 0.0015790112960038867;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00012146240738491437;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          result[0] += 0.06695464362850972;
          result[1] += 0.03347732181425486;
          result[2] += 0.04535637149028078;
          result[3] += 0.8542116630669546;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5805995919008005;
          result[1] += 0;
          result[2] += 0.0015696123057604772;
          result[3] += 0.4167320671794067;
          result[4] += 0;
          result[5] += 0.0001569612305760477;
          result[6] += 0.0009417673834562863;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
          result[0] += 0.9807692307692307;
          result[1] += 0;
          result[2] += 0.019230769230769232;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
          result[0] += 0.9953781512605042;
          result[1] += 0;
          result[2] += 0.0021008403361344537;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0025210084033613447;
        } else {
          result[0] += 0.8936170212765958;
          result[1] += 0;
          result[2] += 0.002775208140610546;
          result[3] += 0.10360777058279372;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)83) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9977564390200125;
          result[1] += 0;
          result[2] += 0.0017051063447904515;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005384546351969847;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-141) ) ) {
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)75) ) ) {
          result[0] += 0.019118869492934336;
          result[1] += 0.004710446106954836;
          result[2] += 0.022998060404544197;
          result[3] += 0.7705735660847881;
          result[4] += 0.18121363258520368;
          result[5] += 0.0013854253255749518;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 0.5744363395225465;
          result[1] += 0;
          result[2] += 0.002652519893899204;
          result[3] += 0.4224137931034483;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004973474801061008;
        } else {
          result[0] += 0.9691284730467821;
          result[1] += 0;
          result[2] += 0.004749465685110425;
          result[3] += 0.024934694846829725;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011873664212776061;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.013215859030837005;
          result[2] += 0;
          result[3] += 0.986784140969163;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9021739130434783;
          result[1] += 0;
          result[2] += 0.09782608695652174;
          result[3] += 0;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.2;
          result[1] += 0.8;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)3.5) ) ) {
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          result[0] += 0.00031298904538341156;
          result[1] += 0.00031298904538341156;
          result[2] += 0.008763693270735524;
          result[3] += 0.9464788732394366;
          result[4] += 0.04131455399061033;
          result[5] += 0.0028169014084507044;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)95) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9714285714285714;
          result[4] += 0.02857142857142857;
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
          result[1] += 0.04054054054054054;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9594594594594594;
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
          result[0] += 0.9982522575007283;
          result[1] += 0.0005461695310224295;
          result[2] += 0.000946693853772211;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002548791144771338;
        } else {
          result[0] += 0.9100719424460432;
          result[1] += 0;
          result[2] += 0.0683453237410072;
          result[3] += 0.02158273381294964;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          result[0] += 0.38461538461538464;
          result[1] += 0.6153846153846154;
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
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
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
          result[2] += 0.0034821145932257044;
          result[3] += 0.9958847736625515;
          result[4] += 0;
          result[5] += 0.0006331117442228553;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)38) ) ) {
          result[0] += 0.9952550415183867;
          result[1] += 0;
          result[2] += 0.002372479240806643;
          result[3] += 0.001383946223803875;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009885330170027679;
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)86) ) ) {
          result[0] += 0.1386410432395333;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8606726149622512;
          result[4] += 0;
          result[5] += 0.0006863417982155113;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08717948717948718;
          result[3] += 0;
          result[4] += 0.9076923076923077;
          result[5] += 0.005128205128205128;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)99.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.018292682926829267;
          result[2] += 0;
          result[3] += 0.2347560975609756;
          result[4] += 0.7469512195121951;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
          result[0] += 0.001492537313432836;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9233830845771145;
          result[4] += 0.0746268656716418;
          result[5] += 0.0004975124378109454;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7619047619047619;
          result[1] += 0.023809523809523808;
          result[2] += 0.20238095238095238;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.011904761904761904;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38) ) ) {
          result[0] += 0;
          result[1] += 0.017114914425427872;
          result[2] += 0;
          result[3] += 0.9828850855745721;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
          result[0] += 0.8662188515709642;
          result[1] += 0.00047670639219934995;
          result[2] += 0.0028602383531960997;
          result[3] += 0.13001083423618634;
          result[4] += 0;
          result[5] += 8.66738894907909e-05;
          result[6] += 0.0003466955579631636;
        } else {
          result[0] += 0.9953703703703703;
          result[1] += 0;
          result[2] += 0.004629629629629629;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          result[0] += 0.9992649220817407;
          result[1] += 0;
          result[2] += 0.0007350779182593355;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8333333333333334;
          result[1] += 0;
          result[2] += 0.16666666666666666;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)52.5) ) ) {
          result[0] += 0.8812199036918138;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.1187800963081862;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9834888729361091;
          result[1] += 0;
          result[2] += 0.002871500358937545;
          result[3] += 0.012203876525484566;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0014357501794687725;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)48) ) ) {
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
          result[3] += 0.991044776119403;
          result[4] += 0.008955223880597015;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
          result[0] += 0.26346015793251976;
          result[1] += 0.007896625987078248;
          result[2] += 0;
          result[3] += 0.7286432160804021;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5420289855072464;
          result[1] += 0;
          result[2] += 0.03285024154589372;
          result[3] += 0.4251207729468599;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)115.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0064516129032258064;
          result[1] += 0.03870967741935484;
          result[2] += 0;
          result[3] += 0.2161290322580645;
          result[4] += 0.7387096774193549;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.140625;
          result[4] += 0.859375;
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
          result[0] += 0.2455470737913486;
          result[1] += 0.002544529262086514;
          result[2] += 0;
          result[3] += 0.7519083969465649;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9966805281972715;
          result[1] += 0.0006930765302400234;
          result[2] += 0.001167286787772671;
          result[3] += 0.0013131976362442547;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00014591084847158386;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)53) ) ) {
          result[0] += 0.017641597028783658;
          result[1] += 0;
          result[2] += 0.012070566388115135;
          result[3] += 0.9656453110492108;
          result[4] += 0;
          result[5] += 0.004642525533890436;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03968253968253968;
          result[3] += 0;
          result[4] += 0.9603174603174603;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
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
          result[2] += 0.00824248869981388;
          result[3] += 0.8093592129752726;
          result[4] += 0.18053709119914915;
          result[5] += 0.0018612071257644244;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
          result[0] += 0.7272727272727273;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2727272727272727;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9963920625375827;
          result[1] += 0;
          result[2] += 0.0036079374624173183;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-108) ) ) {
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
          result[2] += 0.0032216494845360823;
          result[3] += 0.9784149484536082;
          result[4] += 0.01643041237113402;
          result[5] += 0.0019329896907216496;
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
          result[0] += 0;
          result[1] += 0.06403940886699508;
          result[2] += 0;
          result[3] += 0.9359605911330049;
          result[4] += 0;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)106.5) ) ) {
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
          result[2] += 0.08571428571428572;
          result[3] += 0;
          result[4] += 0.9142857142857143;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
          result[0] += 0.6021671826625387;
          result[1] += 0.0030959752321981426;
          result[2] += 0;
          result[3] += 0.39473684210526316;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9912737634121366;
          result[1] += 0.0012911268420818308;
          result[2] += 0.00293842660611727;
          result[3] += 0.0041405102177106985;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003561729219536085;
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.005917159763313609;
          result[3] += 0.9940828402366864;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)41) ) ) {
          result[0] += 0.9994092453108847;
          result[1] += 0;
          result[2] += 0.0005907546891153448;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8307692307692308;
          result[1] += 0;
          result[2] += 0.16923076923076924;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)52.5) ) ) {
          result[0] += 0.8762541806020067;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.12374581939799331;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.982636428065202;
          result[1] += 0;
          result[2] += 0.004606661941885188;
          result[3] += 0.011339475549255847;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001417434443656981;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)6504) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
          result[0] += 0.9975160724722385;
          result[1] += 0;
          result[2] += 0.002483927527761543;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)84) ) ) {
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)29.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9008498583569405;
          result[4] += 0.09915014164305949;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9956616052060737;
          result[1] += 0;
          result[2] += 0.0028922631959508315;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0014461315979754157;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
          result[0] += 0.4643150123051682;
          result[1] += 0.005468963631391851;
          result[2] += 0.00847689362865737;
          result[3] += 0.5170905113480996;
          result[4] += 0.0038282745419742957;
          result[5] += 0;
          result[6] += 0.0008203445447087777;
        } else {
          result[0] += 0.6819870009285052;
          result[1] += 0.0032497678737233057;
          result[2] += 0.0027855153203342623;
          result[3] += 0.29340761374187563;
          result[4] += 0.018105849582172706;
          result[5] += 0.0004642525533890437;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          result[0] += 0.47589098532494767;
          result[1] += 0;
          result[2] += 0.008944793850454229;
          result[3] += 0.4110412299091545;
          result[4] += 0.10342417889587702;
          result[5] += 0.00027952480782669466;
          result[6] += 0.00041928721174004196;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.02830188679245283;
          result[3] += 0.9595687331536388;
          result[4] += 0.0026954177897574125;
          result[5] += 0.009433962264150943;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0;
          result[1] += 0.014414414414414415;
          result[2] += 0;
          result[3] += 0.2;
          result[4] += 0.7855855855855856;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0008051529790660225;
          result[2] += 0;
          result[3] += 0.04830917874396135;
          result[4] += 0.9508856682769726;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)5447.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)32.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9887048192771084;
          result[1] += 0;
          result[2] += 0.011295180722891566;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
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
          result[0] += 0.9990139039542452;
          result[1] += 0;
          result[2] += 0.0009860960457548566;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)10343) ) ) {
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)22.5) ) ) {
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
          result[4] += 0.9992119779353822;
          result[5] += 0.0007880220646178094;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
          result[0] += 0.5035971223021583;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.49640287769784175;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0007621951219512195;
          result[1] += 0.009146341463414634;
          result[2] += 0.017784552845528455;
          result[3] += 0.9707825203252033;
          result[4] += 0;
          result[5] += 0.001524390243902439;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          result[0] += 0.9912292538119012;
          result[1] += 0;
          result[2] += 0.002833625691539603;
          result[3] += 0.004587774929159357;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001349345567399811;
        } else {
          result[0] += 0.9026425591098749;
          result[1] += 0.0013908205841446455;
          result[2] += 0.025034770514603618;
          result[3] += 0.07093184979137693;
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
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
          result[0] += 0.16329346826126956;
          result[1] += 0.004599816007359705;
          result[2] += 0;
          result[3] += 0.6338546458141674;
          result[4] += 0.19825206991720332;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.45326370757180157;
          result[1] += 0;
          result[2] += 0.019321148825065273;
          result[3] += 0.30809399477806787;
          result[4] += 0.2193211488250653;
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
          result[0] += 0.03418803418803419;
          result[1] += 0.09401709401709402;
          result[2] += 0;
          result[3] += 0.8717948717948718;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)25) ) ) {
          result[0] += 0.6418772563176895;
          result[1] += 0;
          result[2] += 0.002888086642599278;
          result[3] += 0.35379061371841153;
          result[4] += 0;
          result[5] += 0.0007220216606498195;
          result[6] += 0.0007220216606498195;
        } else {
          result[0] += 0.9489505902929602;
          result[1] += 0.0010931351114997813;
          result[2] += 0.0010931351114997813;
          result[3] += 0.04864451246174027;
          result[4] += 0.00010931351114997814;
          result[5] += 0;
          result[6] += 0.00010931351114997814;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
          result[0] += 0.6526315789473685;
          result[1] += 0;
          result[2] += 0.10526315789473684;
          result[3] += 0.010526315789473684;
          result[4] += 0.23157894736842105;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9967201383505279;
          result[1] += 5.9633848172222564e-05;
          result[2] += 0.00029816924086111283;
          result[3] += 0.0028027908640944604;
          result[4] += 5.9633848172222564e-05;
          result[5] += 5.9633848172222564e-05;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
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
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9792874896437449;
          result[1] += 0;
          result[2] += 0.010770505385252694;
          result[3] += 0;
          result[4] += 0.004971002485501244;
          result[5] += 0.002485501242750622;
          result[6] += 0.002485501242750622;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05056179775280899;
          result[3] += 0.004213483146067416;
          result[4] += 0.9424157303370787;
          result[5] += 0.0028089887640449437;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37) ) ) {
          result[0] += 0;
          result[1] += 0.005283018867924529;
          result[2] += 0.0007547169811320754;
          result[3] += 0.6573584905660378;
          result[4] += 0.3366037735849057;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9901639344262295;
          result[1] += 0;
          result[2] += 0.009836065573770493;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)27) ) ) {
          result[0] += 0.7290470723306545;
          result[1] += 0;
          result[2] += 0.000574052812858783;
          result[3] += 0.269804822043628;
          result[4] += 0.000574052812858783;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9836340206185566;
          result[1] += 0;
          result[2] += 0.0001288659793814433;
          result[3] += 0.015850515463917525;
          result[4] += 0;
          result[5] += 0.0003865979381443299;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.6516245487364621;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3483754512635379;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.20566419420094403;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7943358057990559;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          result[0] += 0.9373776908023483;
          result[1] += 0;
          result[2] += 0.049902152641878667;
          result[3] += 0;
          result[4] += 0.00684931506849315;
          result[5] += 0.0019569471624266144;
          result[6] += 0.003913894324853229;
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          result[0] += 0.3263157894736842;
          result[1] += 0.0009569377990430622;
          result[2] += 0.016267942583732056;
          result[3] += 0.6555023923444976;
          result[4] += 0;
          result[5] += 0.0009569377990430622;
          result[6] += 0;
        } else {
          result[0] += 0.14285714285714285;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8556624722427831;
          result[4] += 0;
          result[5] += 0.0014803849000740192;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)1.5) ) ) {
          result[0] += 0.9985750636132316;
          result[1] += 0;
          result[2] += 0.001424936386768448;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
          result[0] += 0.9518336070060208;
          result[1] += 0.006294471811713191;
          result[2] += 0.0090311986863711;
          result[3] += 0.032567049808429116;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002736726874657909;
        } else {
          result[0] += 0.4469256653410829;
          result[1] += 0;
          result[2] += 0.004894463138574488;
          result[3] += 0.5481798715203426;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
          result[0] += 0;
          result[1] += 0.026490066225165563;
          result[2] += 0;
          result[3] += 0.11258278145695365;
          result[4] += 0.8609271523178808;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.003882418191902385;
          result[2] += 0.011092623405435386;
          result[3] += 0.9850249584026622;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)73) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0.5306122448979592;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.46938775510204084;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.3;
          result[1] += 0;
          result[2] += 0.023809523809523808;
          result[3] += 0.6761904761904762;
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
          result[0] += 0.9718631178707225;
          result[1] += 0;
          result[2] += 0.0006518196632265074;
          result[3] += 0.027376425855513312;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00010863661053775124;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.011342155009451797;
          result[3] += 0.9187145557655955;
          result[4] += 0.0661625708884688;
          result[5] += 0.003780718336483932;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
          result[0] += 0.976933585540143;
          result[1] += 0.0011034047919293824;
          result[2] += 0.0013661202185792352;
          result[3] += 0.020176544766708705;
          result[4] += 0.00010508617065994117;
          result[5] += 0;
          result[6] += 0.0003152585119798235;
        } else {
          result[0] += 0.03343023255813953;
          result[1] += 0;
          result[2] += 0.030523255813953487;
          result[3] += 0.7761627906976745;
          result[4] += 0.15988372093023256;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
          result[0] += 0.0003287310979618672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9957264957264957;
          result[4] += 0.0029585798816568047;
          result[5] += 0.0009861932938856016;
          result[6] += 0;
        } else {
          result[0] += 0.4819985304922851;
          result[1] += 0;
          result[2] += 0.01689933872152829;
          result[3] += 0;
          result[4] += 0.5011021307861866;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)68.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9744408945686901;
          result[1] += 0;
          result[2] += 0.020766773162939296;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.004792332268370607;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
          result[0] += 0.0002722570106180234;
          result[1] += 0.004900626191124422;
          result[2] += 0.001361285053090117;
          result[3] += 0.9259460931118977;
          result[4] += 0.06751973863326981;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          result[0] += 0.9961571306575576;
          result[1] += 0.0007319751128461632;
          result[2] += 0.0026229108210320848;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004879834085641088;
        } else {
          result[0] += 0.35294117647058826;
          result[1] += 0.6470588235294118;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)80.5) ) ) {
          result[0] += 0.9998164632467652;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.00018353675323483528;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.509090909090909;
          result[1] += 0;
          result[2] += 0.13636363636363635;
          result[3] += 0;
          result[4] += 0.35454545454545455;
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
          result[0] += 0.6167247386759582;
          result[1] += 0;
          result[2] += 0.05226480836236934;
          result[3] += 0.3310104529616725;
          result[4] += 0;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)49) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)101) ) ) {
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
          result[2] += 0.039889958734525444;
          result[3] += 0;
          result[4] += 0.951856946354883;
          result[5] += 0.008253094910591471;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)311.5) ) ) {
          result[0] += 0.9954710144927537;
          result[1] += 0;
          result[2] += 0.004076086956521739;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004528985507246377;
        } else {
          result[0] += 0.5;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2991.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9979838709677419;
          result[5] += 0.0020161290322580645;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)29) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)117) ) ) {
          result[0] += 0;
          result[1] += 0.0006250000000000001;
          result[2] += 0.009687500000000002;
          result[3] += 0.9878125000000001;
          result[4] += 0;
          result[5] += 0.0018750000000000001;
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          result[0] += 0.9285714285714286;
          result[1] += 0.07142857142857142;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
          result[0] += 0.9964237979987719;
          result[1] += 0.0006140952931401945;
          result[2] += 0.002600874182711412;
          result[3] += 0.00010836975761297548;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002528627677636095;
        } else {
          result[0] += 0.8152610441767069;
          result[1] += 0;
          result[2] += 0.012048192771084338;
          result[3] += 0.17269076305220885;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)102.5) ) ) {
          result[0] += 0.15730946569026308;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.842690534309737;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7894736842105263;
          result[1] += 0;
          result[2] += 0.15789473684210525;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.05263157894736842;
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
          result[0] += 0.9905704856199906;
          result[1] += 0;
          result[2] += 0.006129184347006129;
          result[3] += 0.001885902876001886;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0014144271570014145;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          result[0] += 0.9897567221510883;
          result[1] += 0;
          result[2] += 0.010243277848911651;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7384615384615385;
          result[1] += 0;
          result[2] += 0.23076923076923078;
          result[3] += 0.03076923076923077;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-19) ) ) {
          result[0] += 0.3265822784810127;
          result[1] += 0.020253164556962026;
          result[2] += 0;
          result[3] += 0.6531645569620254;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.02594033722438392;
          result[1] += 0;
          result[2] += 0.005188067444876783;
          result[3] += 0.9688715953307393;
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
          result[3] += 0.49812734082397003;
          result[4] += 0.50187265917603;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0011037527593818985;
          result[1] += 0.0033112582781456954;
          result[2] += 0;
          result[3] += 0.11810154525386314;
          result[4] += 0.8774834437086093;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
          result[0] += 0.9984838147221591;
          result[1] += 7.580926389204761e-05;
          result[2] += 0.0012887574861648093;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00015161852778409522;
        } else {
          result[0] += 0.9866539561487131;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.01334604385128694;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
          result[0] += 0;
          result[1] += 0.007722007722007722;
          result[2] += 0.04247104247104247;
          result[3] += 0.9498069498069498;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.009859154929577466;
          result[3] += 0;
          result[4] += 0.9873239436619718;
          result[5] += 0.0028169014084507044;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91) ) ) {
          result[0] += 0.6878612716763006;
          result[1] += 0.0015945784333266893;
          result[2] += 0.004584412995814232;
          result[3] += 0.27805461431134143;
          result[4] += 0.025712577237392863;
          result[5] += 0.0007972892166633447;
          result[6] += 0.0013952561291608531;
        } else {
          result[0] += 0.002701789935832489;
          result[1] += 0;
          result[2] += 0.005403579871664978;
          result[3] += 0.9854778790949004;
          result[4] += 0.004728132387706856;
          result[5] += 0.0016886187098953055;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.9401650618982118;
          result[1] += 0;
          result[2] += 0.000687757909215956;
          result[3] += 0.059147180192572216;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9967291483205435;
          result[1] += 0;
          result[2] += 0.001887029815071078;
          result[3] += 0.0008806139136998364;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005032079506856208;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)83) ) ) {
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
          result[0] += 0.9811320754716981;
          result[1] += 0;
          result[2] += 0.013318534961154272;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.005549389567147614;
        } else {
          result[0] += 0.9998062953995157;
          result[1] += 0;
          result[2] += 0.0001937046004842615;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)5198.5) ) ) {
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0.026747195858498704;
          result[1] += 0.006614897900488927;
          result[2] += 0.004889272361230946;
          result[3] += 0.8886971527178602;
          result[4] += 0.0724762726488352;
          result[5] += 0.0005752085130859936;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.012156448202959831;
          result[3] += 0.18604651162790697;
          result[4] += 0.7996828752642706;
          result[5] += 0.0021141649048625794;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
          result[0] += 0.9945018327224259;
          result[1] += 0.0003332222592469177;
          result[2] += 0.0036654448517160947;
          result[3] += 0.0003332222592469177;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011662779073642118;
        } else {
          result[0] += 0.9437712069801261;
          result[1] += 0;
          result[2] += 0.00872515753756665;
          result[3] += 0.04459524963645177;
          result[4] += 0;
          result[5] += 0.001454192922927775;
          result[6] += 0.001454192922927775;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)21.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9971223021582734;
          result[5] += 0.0028776978417266188;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8666666666666667;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.13333333333333333;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
          result[0] += 0;
          result[1] += 0.0009917355371900827;
          result[2] += 0;
          result[3] += 0.9990082644628099;
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
  
  // Average tree outputs
  result[0] /= 30;
  result[1] /= 30;
  result[2] /= 30;
  result[3] /= 30;
  result[4] /= 30;
  result[5] /= 30;
  result[6] /= 30;
  
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
    

    FILE* file = fopen("./codegen/dataset_148/split_3/test_data.csv", "r");
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
