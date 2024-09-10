
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
          result[0] += 0.9914438502673797;
          result[1] += 0;
          result[2] += 0.008556149732620321;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8387096774193549;
          result[1] += 0;
          result[2] += 0.16129032258064516;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
          result[0] += 0;
          result[1] += 0.006342494714587738;
          result[2] += 0.006342494714587738;
          result[3] += 0.968816067653277;
          result[4] += 0.01849894291754757;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)99.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
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
          result[1] += 0.04892966360856269;
          result[2] += 0;
          result[3] += 0.9510703363914373;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
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
          result[1] += 0.0014094432699083862;
          result[2] += 0.016913319238900635;
          result[3] += 0.97815362931642;
          result[4] += 0;
          result[5] += 0.0035236081747709656;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
          result[0] += 0.994993870044953;
          result[1] += 0.0003064977523498161;
          result[2] += 0.0012770739681242337;
          result[3] += 0.0032693093583980384;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00015324887617490805;
        } else {
          result[0] += 0.9570247933884297;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04297520661157025;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.9794948397609995;
          result[1] += 0.0014937533948940792;
          result[2] += 0.0031233025529603478;
          result[3] += 0.015209125475285171;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006789788158609451;
        } else {
          result[0] += 0.6342972597550195;
          result[1] += 0;
          result[2] += 0.0037883571157974485;
          result[3] += 0.3611567117060234;
          result[4] += 0;
          result[5] += 0.0002525571410531632;
          result[6] += 0.0005051142821063264;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)6504) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)1.5) ) ) {
          result[0] += 0.9988542746467347;
          result[1] += 0;
          result[2] += 0.0011457253532653172;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9998751872191712;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00012481278082875687;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
          result[0] += 0.0030241935483870967;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9959677419354839;
          result[5] += 0.0010080645161290322;
          result[6] += 0;
        } else {
          result[0] += 0.027972027972027972;
          result[1] += 0.005944055944055944;
          result[2] += 0.026923076923076925;
          result[3] += 0.9363636363636364;
          result[4] += 0;
          result[5] += 0.002797202797202797;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
          result[0] += 0.554781054512958;
          result[1] += 0;
          result[2] += 0.0010723860589812334;
          result[3] += 0.44325290437890974;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008936550491510277;
        } else {
          result[0] += 0.9762162162162162;
          result[1] += 0;
          result[2] += 0.00627027027027027;
          result[3] += 0.016;
          result[4] += 0;
          result[5] += 0.00021621621621621621;
          result[6] += 0.0012972972972972972;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)103.5) ) ) {
          result[0] += 0.1985494106980961;
          result[1] += 0.004533091568449683;
          result[2] += 0;
          result[3] += 0.7951042611060744;
          result[4] += 0.001813236627379873;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)74) ) ) {
          result[0] += 0.2664359861591695;
          result[1] += 0;
          result[2] += 0.01384083044982699;
          result[3] += 0.7197231833910035;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)102) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
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
          result[0] += 0.2727272727272727;
          result[1] += 0.7272727272727273;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          result[0] += 0.9940828402366864;
          result[1] += 0;
          result[2] += 0.005917159763313609;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7435897435897436;
          result[1] += 0;
          result[2] += 0.2564102564102564;
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
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.07081436519979767;
          result[1] += 0.010116337885685382;
          result[2] += 0.0020232675771370764;
          result[3] += 0.9170460293373799;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)73) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9545454545454546;
          result[1] += 0;
          result[2] += 0.045454545454545456;
          result[3] += 0;
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)6504) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0.9998748278883465;
          result[1] += 0;
          result[2] += 0.00012517211165352359;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9984085171770387;
          result[1] += 0;
          result[2] += 0.0013170892327955218;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002743935901657337;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)22.5) ) ) {
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
          result[0] += 0.46802280782863315;
          result[1] += 0.0020033903529049165;
          result[2] += 0.0075512405609493;
          result[3] += 0.5030050855293575;
          result[4] += 0.018492834026814613;
          result[5] += 0.00046232085067036526;
          result[6] += 0.00046232085067036526;
        } else {
          result[0] += 0.04849340866290019;
          result[1] += 0;
          result[2] += 0.010828625235404897;
          result[3] += 0.6059322033898306;
          result[4] += 0.332391713747646;
          result[5] += 0.0023540489642184556;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)36) ) ) {
          result[0] += 0.9957264957264957;
          result[1] += 0;
          result[2] += 0.0032679738562091504;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001005530417295123;
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4064.5) ) ) {
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)99) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9984132021580451;
          result[4] += 0.000952078705172961;
          result[5] += 0.0006347191367819739;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.23913043478260873;
          result[2] += 0.6956521739130436;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.06521739130434784;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9984740104911779;
          result[1] += 0;
          result[2] += 0.001335240820219361;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00019074868860276584;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91) ) ) {
          result[0] += 0.9887191947240541;
          result[1] += 0.0024297119055883376;
          result[2] += 0.007115584866365845;
          result[3] += 0.0010413051023950017;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006942034015966678;
        } else {
          result[0] += 0.3515981735159817;
          result[1] += 0.0319634703196347;
          result[2] += 0;
          result[3] += 0.6164383561643836;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
          result[0] += 0.0038115038115038116;
          result[1] += 0;
          result[2] += 0.005544005544005544;
          result[3] += 0.9906444906444907;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.837909992372235;
          result[1] += 0;
          result[2] += 0.012204424103737605;
          result[3] += 0.14721586575133486;
          result[4] += 0;
          result[5] += 0.0007627765064836003;
          result[6] += 0.0019069412662090007;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)20.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          result[0] += 0.125;
          result[1] += 0;
          result[2] += 0.625;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.25;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
          result[0] += 0.9956389010030527;
          result[1] += 0;
          result[2] += 0.000920676454911082;
          result[3] += 0.003440422542036149;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.04744525547445255;
          result[1] += 0.01824817518248175;
          result[2] += 0.0036496350364963502;
          result[3] += 0.9306569343065694;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.9297457125960971;
          result[1] += 0.0018923713778829098;
          result[2] += 0.001774098166765228;
          result[3] += 0.06564163217031344;
          result[4] += 0;
          result[5] += 0.0003548196333530456;
          result[6] += 0.0005913660555884094;
        } else {
          result[0] += 0.6324200913242009;
          result[1] += 0;
          result[2] += 0.004439370877727041;
          result[3] += 0.3628868594622019;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002536783358701166;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0.16166751398068124;
          result[1] += 0;
          result[2] += 0.011184544992374174;
          result[3] += 0.8271479410269446;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.13008130081300814;
          result[1] += 0;
          result[2] += 0.06504065040650407;
          result[3] += 0.2032520325203252;
          result[4] += 0.5894308943089431;
          result[5] += 0.012195121951219513;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0.02564102564102564;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9743589743589743;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.17105263157894737;
          result[2] += 0;
          result[3] += 0.40789473684210525;
          result[4] += 0.42105263157894735;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.007952286282306162;
          result[2] += 0;
          result[3] += 0.9920477137176938;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)11) ) ) {
          result[0] += 0.0811965811965812;
          result[1] += 0;
          result[2] += 0.038461538461538464;
          result[3] += 0.8803418803418803;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.14893617021276595;
          result[4] += 0.851063829787234;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0009372071227741331;
          result[4] += 0.9990627928772259;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
          result[0] += 0.963375796178344;
          result[1] += 0.0009366804046459349;
          result[2] += 0.0018733608092918698;
          result[3] += 0.03362682652678907;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000187336080929187;
        } else {
          result[0] += 0.27372708757637476;
          result[1] += 0;
          result[2] += 0.006517311608961304;
          result[3] += 0.714867617107943;
          result[4] += 0.004073319755600814;
          result[5] += 0.000814663951120163;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)20) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.029508196721311476;
          result[3] += 0;
          result[4] += 0.9639344262295082;
          result[5] += 0.006557377049180328;
          result[6] += 0;
        } else {
          result[0] += 0.984065778281826;
          result[1] += 0;
          result[2] += 0.0016444570456478594;
          result[3] += 0.014233059257159059;
          result[4] += 0;
          result[5] += 5.670541536716756e-05;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9950033311125916;
          result[4] += 0.0029980013324450365;
          result[5] += 0.001998667554963358;
          result[6] += 0;
        } else {
          result[0] += 0.4741506646971935;
          result[1] += 0;
          result[2] += 0.01846381093057607;
          result[3] += 0;
          result[4] += 0.5073855243722304;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)311.5) ) ) {
          result[0] += 0.9956279809220986;
          result[1] += 0;
          result[2] += 0.001987281399046105;
          result[3] += 0.0017885532591414945;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005961844197138314;
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
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.02766798418972332;
          result[2] += 0;
          result[3] += 0.9723320158102767;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)88.5) ) ) {
          result[0] += 0.8947368421052632;
          result[1] += 0;
          result[2] += 0.10526315789473684;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-41) ) ) {
          result[0] += 0.05263157894736842;
          result[1] += 0.3684210526315789;
          result[2] += 0;
          result[3] += 0.5789473684210527;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.016574585635359115;
          result[2] += 0;
          result[3] += 0.9834254143646409;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)83) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0.9995766299745978;
          result[1] += 0;
          result[2] += 0.0004233700254022015;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9940789473684211;
          result[1] += 0;
          result[2] += 0.003947368421052632;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001973684210526316;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
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
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0.6830756135622075;
          result[1] += 0.0018442332245708613;
          result[2] += 0.004397786920130516;
          result[3] += 0.3095474535395092;
          result[4] += 0.00014186409419775857;
          result[5] += 0.0005674563767910343;
          result[6] += 0.0004255922825932757;
        } else {
          result[0] += 0.8512534818941502;
          result[1] += 0;
          result[2] += 0.011142061281337046;
          result[3] += 0.049582172701949846;
          result[4] += 0.08384401114206126;
          result[5] += 0.002228412256267409;
          result[6] += 0.0019498607242339828;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
          result[0] += 0.19197707736389685;
          result[1] += 0.00501432664756447;
          result[2] += 0.00501432664756447;
          result[3] += 0.7979942693409742;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0030102347983142685;
          result[1] += 0.00481637567730283;
          result[2] += 0;
          result[3] += 0.10174593618302227;
          result[4] += 0.8904274533413606;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)21.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0013986013986013986;
          result[3] += 0;
          result[4] += 0.9986013986013986;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6538461538461539;
          result[3] += 0;
          result[4] += 0.34615384615384615;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
          result[0] += 0;
          result[1] += 0.0009794319294809011;
          result[2] += 0.006203068886712374;
          result[3] += 0.9928174991838067;
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.08314350797266515;
          result[1] += 0.004555808656036446;
          result[2] += 0;
          result[3] += 0.8553530751708428;
          result[4] += 0.05694760820045558;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)73) ) ) {
          result[0] += 0.39568345323741005;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.60431654676259;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05393258426966292;
          result[4] += 0.946067415730337;
          result[5] += 0;
          result[6] += 0;
        }
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
          result[0] += 0.952;
          result[1] += 0;
          result[2] += 0.048;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.053446940356312936;
          result[1] += 0.010844306738962044;
          result[2] += 0.0023237800154918666;
          result[3] += 0.9333849728892332;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
          result[0] += 0.25128865979381443;
          result[1] += 0.002577319587628866;
          result[2] += 0;
          result[3] += 0.7435567010309279;
          result[4] += 0.001288659793814433;
          result[5] += 0.001288659793814433;
          result[6] += 0;
        } else {
          result[0] += 0.9971347744088206;
          result[1] += 0.0004714928188016829;
          result[2] += 0.000979254315972726;
          result[3] += 0.0012331350645582474;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00018134339184680112;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
          result[0] += 0.028763183125599234;
          result[1] += 0;
          result[2] += 0.012464046021093002;
          result[3] += 0.9558964525407478;
          result[4] += 0;
          result[5] += 0.0028763183125599234;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.11450381679389313;
          result[3] += 0;
          result[4] += 0.8854961832061069;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
          result[0] += 0.3183050012318305;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6816949987681695;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8358565737051793;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.1641434262948207;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          result[0] += 0.9738442822384428;
          result[1] += 0;
          result[2] += 0.019768856447688565;
          result[3] += 0.0009124087591240876;
          result[4] += 0.0033454987834549877;
          result[5] += 0.0015206812652068127;
          result[6] += 0.0006082725060827251;
        } else {
          result[0] += 0.0027816411682892906;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9972183588317107;
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
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)54) ) ) {
          result[0] += 0;
          result[1] += 0.0021766169154228856;
          result[2] += 0.004353233830845771;
          result[3] += 0.9919154228855721;
          result[4] += 0;
          result[5] += 0.001554726368159204;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 0.03558718861209965;
          result[2] += 0;
          result[3] += 0.9644128113879004;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
          result[0] += 0.9483870967741936;
          result[1] += 0;
          result[2] += 0.048387096774193554;
          result[3] += 0.0032258064516129037;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9971065029491413;
          result[1] += 0.0005935378565864154;
          result[2] += 0.002003190265979152;
          result[3] += 7.419223207330192e-05;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00022257669621990577;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
          result[0] += 0.3745128604832424;
          result[1] += 0;
          result[2] += 0.0009742790335151987;
          result[3] += 0.6245128604832424;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)58) ) ) {
          result[0] += 0.9920332525112574;
          result[1] += 0;
          result[2] += 0.0048493245583650845;
          result[3] += 0.0010391409767925182;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0020782819535850364;
        } else {
          result[0] += 0.9413680781758957;
          result[1] += 0;
          result[2] += 0.05863192182410423;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)25) ) ) {
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
          result[4] += 0.9979166666666667;
          result[5] += 0.0020833333333333333;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)96) ) ) {
          result[0] += 0;
          result[1] += 0.00030807147258163895;
          result[2] += 0.010166358595194085;
          result[3] += 0.9873690696241528;
          result[4] += 0;
          result[5] += 0.0021565003080714724;
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)27.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0.009433962264150943;
          result[2] += 0;
          result[3] += 0.9905660377358491;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
          result[0] += 0;
          result[1] += 1;
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
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)89.5) ) ) {
          result[0] += 0.9963398880436343;
          result[1] += 0.0005023683077364719;
          result[2] += 0.0022247739342615186;
          result[3] += 0.000789435912157313;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00014353380221042057;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.1695547853905625;
          result[1] += 0;
          result[2] += 0.002932551319648094;
          result[3] += 0.8275126632897893;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9963716992541827;
          result[1] += 0;
          result[2] += 0.0012094335819391251;
          result[3] += 0.0018141503729086877;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006047167909695626;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9977957384276267;
          result[1] += 0;
          result[2] += 0.002204261572373255;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
          result[0] += 0.9605911330049262;
          result[1] += 0;
          result[2] += 0.034482758620689655;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0049261083743842365;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
          result[0] += 0.9989707227813358;
          result[1] += 0;
          result[2] += 0.0010292772186642268;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9805825242718447;
          result[1] += 0;
          result[2] += 0.019417475728155338;
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)40) ) ) {
          result[0] += 0.004807692307692308;
          result[1] += 0.0673076923076923;
          result[2] += 0;
          result[3] += 0.9278846153846154;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8763076923076923;
          result[1] += 0.0024615384615384616;
          result[2] += 0.0036923076923076922;
          result[3] += 0.11671794871794872;
          result[4] += 0;
          result[5] += 0.00041025641025641023;
          result[6] += 0.00041025641025641023;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-4.5) ) ) {
          result[0] += 0.04477611940298507;
          result[1] += 0;
          result[2] += 0.014925373134328358;
          result[3] += 0.7686567164179104;
          result[4] += 0.17164179104477612;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.19331453886427707;
          result[1] += 0.0016109544905356424;
          result[2] += 0.004832863471606927;
          result[3] += 0.7821184051550544;
          result[4] += 0.017720499395892066;
          result[5] += 0.0004027386226339106;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 0;
          result[1] += 0.0051094890510948905;
          result[2] += 0.008029197080291971;
          result[3] += 0.3613138686131387;
          result[4] += 0.6248175182481752;
          result[5] += 0.00072992700729927;
          result[6] += 0;
        } else {
          result[0] += 0.9898719094429551;
          result[1] += 0;
          result[2] += 0.007745010425975574;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0023830801310694076;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39) ) ) {
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
          result[2] += 0.011444921316165951;
          result[3] += 0.9864091559370529;
          result[4] += 0.002145922746781116;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.996;
          result[5] += 0.004;
          result[6] += 0;
        } else {
          result[0] += 0.131629392971246;
          result[1] += 0;
          result[2] += 0.014057507987220448;
          result[3] += 0.8536741214057508;
          result[4] += 0;
          result[5] += 0.0006389776357827476;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0.14864864864864866;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8513513513513513;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0005455537370430987;
          result[1] += 0;
          result[2] += 0.00436442989634479;
          result[3] += 0.9907255864702673;
          result[4] += 0;
          result[5] += 0.00436442989634479;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.006072874493927126;
          result[3] += 0;
          result[4] += 0.9939271255060729;
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)27.5) ) ) {
          result[0] += 0;
          result[1] += 0.014705882352941176;
          result[2] += 0;
          result[3] += 0.9852941176470589;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.21428571428571427;
          result[1] += 0.7857142857142857;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 0.9991719712260002;
          result[1] += 0;
          result[2] += 0.0007245251772499096;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00010350359674998707;
        } else {
          result[0] += 0.5286577280094298;
          result[1] += 0.0033888315898040373;
          result[2] += 0.011050537792839252;
          result[3] += 0.45631354059230883;
          result[4] += 0;
          result[5] += 0.0002946810078090467;
          result[6] += 0.0002946810078090467;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
          result[0] += 0.9979942693409742;
          result[1] += 0;
          result[2] += 0.0020057306590257878;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9662352279122116;
          result[1] += 0;
          result[2] += 0.004501969611705121;
          result[3] += 0.028418683173888577;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008441193021947102;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)95) ) ) {
          result[0] += 0;
          result[1] += 0.00032061558191728113;
          result[2] += 0;
          result[3] += 0.9974350753446616;
          result[4] += 0.0012824623276691245;
          result[5] += 0.0009618467457518433;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)33.5) ) ) {
          result[0] += 0.9797979797979798;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.020202020202020204;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0.20689655172413793;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7758620689655172;
          result[5] += 0.017241379310344827;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.007579135086937138;
          result[3] += 0;
          result[4] += 0.9919750334373607;
          result[5] += 0.00044583147570218456;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
          result[0] += 0.9961768617021277;
          result[1] += 0.0009973404255319148;
          result[2] += 0.0026595744680851063;
          result[3] += 0.00016622340425531914;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9993106300841031;
          result[1] += 0;
          result[2] += 0.0006893699158968703;
          result[3] += 0;
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
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
          result[0] += 0.34966592427616927;
          result[1] += 0.026726057906458798;
          result[2] += 0;
          result[3] += 0.623608017817372;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9924078091106291;
          result[1] += 0.0014461315979754157;
          result[2] += 0.005181971559411906;
          result[3] += 0.00012051096649795132;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008435767654856592;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.008243500317057706;
          result[1] += 0;
          result[2] += 0.004755865567533292;
          result[3] += 0.9866835764109069;
          result[4] += 0;
          result[5] += 0.00031705770450221946;
          result[6] += 0;
        } else {
          result[0] += 0.9910418695228822;
          result[1] += 0;
          result[2] += 0.005063291139240506;
          result[3] += 0.002142161635832522;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0017526777020447906;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)39) ) ) {
          result[0] += 0.9982570806100218;
          result[1] += 0;
          result[2] += 0.0017429193899782135;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.1832967032967033;
          result[1] += 0;
          result[2] += 0.016263736263736263;
          result[3] += 0.6821978021978022;
          result[4] += 0.11824175824175824;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 0.999124176535547;
          result[1] += 0;
          result[2] += 0.000799664902326644;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 7.615856212634706e-05;
        } else {
          result[0] += 0.5672884743504331;
          result[1] += 0.001998667554963358;
          result[2] += 0.006662225183211193;
          result[3] += 0.4216078170108816;
          result[4] += 0.0007772596047079725;
          result[5] += 0.000999333777481679;
          result[6] += 0.0006662225183211193;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-102.5) ) ) {
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9731543624161074;
          result[1] += 0;
          result[2] += 0.026845637583892617;
          result[3] += 0;
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
          result[0] += 0;
          result[1] += 0.21052631578947367;
          result[2] += 0;
          result[3] += 0.7894736842105263;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-26) ) ) {
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
          result[1] += 0.0707070707070707;
          result[2] += 0;
          result[3] += 0.9292929292929293;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
          result[0] += 0.4375;
          result[1] += 0;
          result[2] += 0.5625;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.011267605633802818;
          result[2] += 0.002347417840375587;
          result[3] += 0.9863849765258216;
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
          result[0] += 0.9891500904159132;
          result[1] += 0;
          result[2] += 0.0108499095840868;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)5595) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9982741393405395;
          result[1] += 0;
          result[2] += 0.001635025887909892;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 9.083477155054956e-05;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)11631) ) ) {
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 0.7091815538014126;
          result[1] += 0.0029081844619858743;
          result[2] += 0.0018695471541337765;
          result[3] += 0.2829248026589115;
          result[4] += 0.0006231823847112588;
          result[5] += 0.0004154549231408392;
          result[6] += 0.002077274615704196;
        } else {
          result[0] += 0.8862231016571853;
          result[1] += 0.00024734108335394515;
          result[2] += 0.01014098441751175;
          result[3] += 0.06925550333910464;
          result[4] += 0.03042295325253525;
          result[5] += 0.0022260697501855064;
          result[6] += 0.0014840465001236707;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)101) ) ) {
          result[0] += 0;
          result[1] += 0.0019448946515397082;
          result[2] += 0;
          result[3] += 0.9961102106969206;
          result[4] += 0.0012965964343598054;
          result[5] += 0.0006482982171799027;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.04084507042253521;
          result[3] += 0;
          result[4] += 0.956338028169014;
          result[5] += 0.0028169014084507044;
          result[6] += 0;
        }
      }
    }
  }
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
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9852476290832455;
          result[1] += 0;
          result[2] += 0.0136986301369863;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001053740779768177;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-16) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9924528301886792;
          result[1] += 0;
          result[2] += 0.007547169811320755;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9997039292813941;
          result[1] += 0;
          result[2] += 0.00029607071860592986;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          result[0] += 0.019390581717451522;
          result[1] += 0.007914523149980214;
          result[2] += 0.02809655718242976;
          result[3] += 0.7146814404432132;
          result[4] += 0.22675108824693313;
          result[5] += 0.0031658092599920855;
          result[6] += 0;
        } else {
          result[0] += 0.7198909256173308;
          result[1] += 0;
          result[2] += 0.003029843963035904;
          result[3] += 0.2752613240418119;
          result[4] += 0;
          result[5] += 0.00015149219815179522;
          result[6] += 0.0016664141796697471;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          result[0] += 0.6728692855501953;
          result[1] += 0;
          result[2] += 0.0006891798759476223;
          result[3] += 0.27107741787273143;
          result[4] += 0.05490466345049391;
          result[5] += 0;
          result[6] += 0.00045945325063174823;
        } else {
          result[0] += 0.13318534961154274;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7691453940066593;
          result[4] += 0.097669256381798;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
          result[0] += 0.22332015810276679;
          result[1] += 0;
          result[2] += 0.019762845849802372;
          result[3] += 0.42292490118577075;
          result[4] += 0.3339920948616601;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.09855618330194602;
          result[1] += 0.007532956685499058;
          result[2] += 0;
          result[3] += 0.615819209039548;
          result[4] += 0.2780916509730069;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)102) ) ) {
          result[0] += 0.008620689655172414;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9913793103448276;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0023148148148148147;
          result[1] += 0.008101851851851851;
          result[2] += 0;
          result[3] += 0.0011574074074074073;
          result[4] += 0.9884259259259259;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          result[0] += 0.9991181657848325;
          result[1] += 0;
          result[2] += 0.0008818342151675485;
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
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
          result[0] += 0.9959704499664204;
          result[1] += 0;
          result[2] += 0.004029550033579583;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
          result[0] += 0.6623775686575764;
          result[1] += 0.0015363933166890724;
          result[2] += 0.0056654503552909545;
          result[3] += 0.3196658344536201;
          result[4] += 0.009794507393892836;
          result[5] += 0.0002880737468792011;
          result[6] += 0.0006721720760514692;
        } else {
          result[0] += 0.4116172168825742;
          result[1] += 0;
          result[2] += 0.010029251984956121;
          result[3] += 0.35562055996656916;
          result[4] += 0.22106142916840785;
          result[5] += 0.001671541997492687;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)100.5) ) ) {
          result[0] += 0.04481665912177456;
          result[1] += 0;
          result[2] += 0.015844273426889995;
          result[3] += 0.911272068809416;
          result[4] += 0.026708918062471707;
          result[5] += 0.001358080579447714;
          result[6] += 0;
        } else {
          result[0] += 0.45754716981132076;
          result[1] += 0.05660377358490566;
          result[2] += 0;
          result[3] += 0.4858490566037736;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
          result[0] += 0.0030959752321981426;
          result[1] += 0.010835913312693499;
          result[2] += 0;
          result[3] += 0.04179566563467492;
          result[4] += 0.9442724458204335;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.42368045649072755;
          result[4] += 0.5763195435092725;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9877112135176651;
          result[1] += 0;
          result[2] += 0.01228878648233487;
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
          result[0] += 0.952755905511811;
          result[1] += 0;
          result[2] += 0.04330708661417323;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.003937007874015748;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0.9996600181323663;
          result[1] += 0;
          result[2] += 0.0003399818676337262;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.9603960396039604;
          result[1] += 0;
          result[2] += 0.039603960396039604;
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.8786479109804746;
          result[1] += 0.0033592273777031285;
          result[2] += 0.0033592273777031285;
          result[3] += 0.11316397228637415;
          result[4] += 0;
          result[5] += 0.0008398068444257821;
          result[6] += 0.0006298551333193367;
        } else {
          result[0] += 0;
          result[1] += 0.008130081300813009;
          result[2] += 0;
          result[3] += 0.991869918699187;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)112) ) ) {
          result[0] += 0.18262548262548262;
          result[1] += 0.005019305019305019;
          result[2] += 0.011969111969111969;
          result[3] += 0.8;
          result[4] += 0.0003861003861003861;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.02197802197802198;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.978021978021978;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
          result[0] += 0.0011556240369799693;
          result[1] += 0.003852080123266564;
          result[2] += 0.010400616332819723;
          result[3] += 0.34938366718027736;
          result[4] += 0.6352080123266564;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.005843071786310518;
          result[1] += 0;
          result[2] += 0.010573177518085699;
          result[3] += 0.7979966611018364;
          result[4] += 0.18363939899833054;
          result[5] += 0.0019476905954368391;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)41) ) ) {
          result[0] += 0.9942493946731235;
          result[1] += 0;
          result[2] += 0.0033292978208232446;
          result[3] += 0.00211864406779661;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003026634382566586;
        } else {
          result[0] += 0.9090909090909091;
          result[1] += 0;
          result[2] += 0.09090909090909091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)86) ) ) {
          result[0] += 0.9863588667366212;
          result[1] += 0;
          result[2] += 0.013641133263378805;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8695652173913043;
          result[1] += 0;
          result[2] += 0.13043478260869565;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)100.5) ) ) {
          result[0] += 0.05068119891008174;
          result[1] += 0;
          result[2] += 0.006539509536784741;
          result[3] += 0.9269754768392371;
          result[4] += 0.01580381471389646;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.4256410256410256;
          result[1] += 0.06153846153846154;
          result[2] += 0;
          result[3] += 0.5128205128205128;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
          result[0] += 0.006578947368421052;
          result[1] += 0.013157894736842105;
          result[2] += 0;
          result[3] += 0.09210526315789473;
          result[4] += 0.8881578947368421;
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
          result[0] += 0.10903426791277258;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8884735202492212;
          result[4] += 0;
          result[5] += 0.0024922118380062306;
          result[6] += 0;
        } else {
          result[0] += 0.5671641791044777;
          result[1] += 0.05970149253731344;
          result[2] += 0.3134328358208956;
          result[3] += 0.02985074626865672;
          result[4] += 0;
          result[5] += 0.02985074626865672;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
          result[0] += 0.6538461538461539;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.34615384615384615;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9966329966329966;
          result[1] += 0.000666000666000666;
          result[2] += 0.001406001406001406;
          result[3] += 0.000925000925000925;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00037000037000037;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.1801752464403067;
          result[1] += 0;
          result[2] += 0.004381161007667032;
          result[3] += 0.8146221248630887;
          result[4] += 0;
          result[5] += 0.0008214676889375684;
          result[6] += 0;
        } else {
          result[0] += 0.9944827586206897;
          result[1] += 0;
          result[2] += 0.00374384236453202;
          result[3] += 0.0009852216748768472;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007881773399014779;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9512195121951219;
          result[1] += 0;
          result[2] += 0.04878048780487805;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-41) ) ) {
          result[0] += 0.007042253521126761;
          result[1] += 0.07042253521126761;
          result[2] += 0;
          result[3] += 0.04225352112676056;
          result[4] += 0.8802816901408451;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.06441476826394343;
          result[1] += 0;
          result[2] += 0.0007855459544383347;
          result[3] += 0.6653574234092694;
          result[4] += 0.2694422623723488;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)53.5) ) ) {
          result[0] += 0.9766240157480315;
          result[1] += 0;
          result[2] += 0.0008612204724409449;
          result[3] += 0.02251476377952756;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6774397972116604;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3200253485424588;
          result[4] += 0.0012674271229404308;
          result[5] += 0;
          result[6] += 0.0012674271229404308;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44) ) ) {
          result[0] += 0.08507936507936507;
          result[1] += 0;
          result[2] += 0.02603174603174603;
          result[3] += 0.7885714285714286;
          result[4] += 0.09904761904761905;
          result[5] += 0.0012698412698412698;
          result[6] += 0;
        } else {
          result[0] += 0.9880636604774535;
          result[1] += 0;
          result[2] += 0.003978779840848806;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.007957559681697613;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)32.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)1.5) ) ) {
          result[0] += 0.9969540458217455;
          result[1] += 0;
          result[2] += 0.0030459541782545357;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9998478161619236;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00015218383807639628;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          result[0] += 0.8856019472008987;
          result[1] += 0.0016850777008050927;
          result[2] += 0.005616925669350309;
          result[3] += 0.10597266429507583;
          result[4] += 0;
          result[5] += 0.0003744617112900206;
          result[6] += 0.0007489234225800412;
        } else {
          result[0] += 0.038657171922685654;
          result[1] += 0.0054255679891488644;
          result[2] += 0.014242115971515769;
          result[3] += 0.5005086469989827;
          result[4] += 0.441166497117667;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)61) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9989106753812637;
          result[4] += 0.0010893246187363835;
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
  result[0] /= 20;
  result[1] /= 20;
  result[2] /= 20;
  result[3] /= 20;
  result[4] /= 20;
  result[5] /= 20;
  result[6] /= 20;
  
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
