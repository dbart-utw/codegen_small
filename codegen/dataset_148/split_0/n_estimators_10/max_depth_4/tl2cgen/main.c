
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
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
          result[0] += 0.2063953488372093;
          result[1] += 0.004651162790697674;
          result[2] += 0;
          result[3] += 0.7877906976744186;
          result[4] += 0.0011627906976744186;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5712132629992465;
          result[1] += 0;
          result[2] += 0.008289374529012811;
          result[3] += 0.42049736247174074;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.00468384074941452;
          result[3] += 0;
          result[4] += 0.9953161592505855;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.30033003300330036;
          result[1] += 0;
          result[2] += 0.0231023102310231;
          result[3] += 0.6765676567656765;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.1111111111111111;
          result[1] += 0.8333333333333334;
          result[2] += 0;
          result[3] += 0.05555555555555555;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
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
          result[2] += 0.009765625000000002;
          result[3] += 0.9576822916666667;
          result[4] += 0.02994791666666667;
          result[5] += 0.002604166666666667;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.9948623853211009;
          result[1] += 0.0004036697247706422;
          result[2] += 0.0008440366972477065;
          result[3] += 0.003779816513761468;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00011009174311926606;
        } else {
          result[0] += 0.6455783883629648;
          result[1] += 0;
          result[2] += 0.003809743708150543;
          result[3] += 0.3500346340337105;
          result[4] += 0;
          result[5] += 0.00034634033710459483;
          result[6] += 0.00023089355806972989;
        }
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
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
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
          result[1] += 0.010845986984815618;
          result[2] += 0.005422993492407809;
          result[3] += 0.9837310195227765;
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
          result[0] += 0.998015873015873;
          result[1] += 0.001984126984126984;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)84) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0.06986027944111776;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.16367265469061876;
          result[4] += 0.7664670658682635;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.012897678417884782;
          result[1] += 0;
          result[2] += 0.005159071367153913;
          result[3] += 0.1349957007738607;
          result[4] += 0.8469475494411006;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)63) ) ) {
          result[0] += 0.5833333333333334;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.4090909090909091;
          result[4] += 0.0025252525252525255;
          result[5] += 0.005050505050505051;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)54) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.005734767025089606;
          result[3] += 0.992831541218638;
          result[4] += 0.0014336917562724014;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.047619047619047616;
          result[3] += 0;
          result[4] += 0.9523809523809523;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
          result[0] += 0.6134751773049646;
          result[1] += 0;
          result[2] += 0.0035460992907801418;
          result[3] += 0.3829787234042553;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9972141783658957;
          result[1] += 0.0003665554781716213;
          result[2] += 0.0010263553388805396;
          result[3] += 0.0010630108866977017;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00032989993035445914;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.17507499318243797;
          result[1] += 0;
          result[2] += 0.00327242977911099;
          result[3] += 0.8208344695936733;
          result[4] += 0;
          result[5] += 0.0008181074447777475;
          result[6] += 0;
        } else {
          result[0] += 0.9932067932067932;
          result[1] += 0;
          result[2] += 0.004195804195804196;
          result[3] += 0.0017982017982017982;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007992007992007992;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-310) ) ) {
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0.9961389961389961;
          result[1] += 0;
          result[2] += 0.0032175032175032173;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006435006435006435;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0.011764705882352941;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9882352941176471;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.028188668713368687;
          result[1] += 0.010047446274072006;
          result[2] += 0.0030700530281886685;
          result[3] += 0.9570192576053587;
          result[4] += 0;
          result[5] += 0.0016745743790120011;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.013333333333333334;
          result[3] += 0.024666666666666667;
          result[4] += 0.962;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.014437689969604863;
          result[3] += 0.42857142857142855;
          result[4] += 0.5554711246200608;
          result[5] += 0.001519756838905775;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          result[0] += 0.9867982568572161;
          result[1] += 0;
          result[2] += 0.004870546013842604;
          result[3] += 0.006921302230197385;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0014098948987439118;
        } else {
          result[0] += 0.8888888888888888;
          result[1] += 0.003367003367003367;
          result[2] += 0.016835016835016835;
          result[3] += 0.09090909090909091;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)103.5) ) ) {
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)57) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-11) ) ) {
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
          result[4] += 0.997037037037037;
          result[5] += 0.002962962962962963;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)54) ) ) {
          result[0] += 0;
          result[1] += 0.0024293956878226543;
          result[2] += 0.0024293956878226543;
          result[3] += 0.9921044640145764;
          result[4] += 0;
          result[5] += 0.0030367446097783178;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9960159362549801;
          result[1] += 0;
          result[2] += 0.00199203187250996;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00199203187250996;
        } else {
          result[0] += 0.9998249452954048;
          result[1] += 0;
          result[2] += 0.000175054704595186;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9941999317639031;
          result[1] += 0.002729443875810304;
          result[2] += 0.002729443875810304;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000341180484476288;
        } else {
          result[0] += 0;
          result[1] += 0.001486988847583643;
          result[2] += 0.0037174721189591076;
          result[3] += 0.9947955390334573;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          result[0] += 0.9864864864864865;
          result[1] += 0.0076576576576576575;
          result[2] += 0.005855855855855856;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7689558335460812;
          result[1] += 0;
          result[2] += 0.007658922644881287;
          result[3] += 0.2231299463875415;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002552974214960429;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-174.5) ) ) {
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
          result[0] += 0.9909706546275395;
          result[1] += 0;
          result[2] += 0.006772009029345372;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002257336343115124;
        } else {
          result[0] += 0.9986559139784946;
          result[1] += 0;
          result[2] += 0.0013440860215053765;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)35.5) ) ) {
          result[0] += 0.9996807491752687;
          result[1] += 0;
          result[2] += 0.00031925082473129723;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)109) ) ) {
          result[0] += 0.023908812899638587;
          result[1] += 0.0105643591882124;
          result[2] += 0.004448151237142063;
          result[3] += 0.9588546010564359;
          result[4] += 0.0008340283569641367;
          result[5] += 0.0013900472616068947;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.016877637130801686;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9831223628691983;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
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
          result[2] += 0.02489229296314026;
          result[3] += 0.2790808999521302;
          result[4] += 0.6945907132599329;
          result[5] += 0.0014360938247965534;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0.8516129032258064;
          result[1] += 0.002150537634408602;
          result[2] += 0.008602150537634409;
          result[3] += 0.13763440860215054;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9890573500329598;
          result[1] += 0;
          result[2] += 0.005800922874093606;
          result[3] += 0.004350692155570204;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007910349373764008;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.003865979381443299;
          result[3] += 0.9961340206185567;
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
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-7.5) ) ) {
          result[0] += 0.2888888888888889;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6666666666666667;
          result[4] += 0.04444444444444445;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.856813483860709;
          result[1] += 0.0012720623310542214;
          result[2] += 0.0017490857051995544;
          result[3] += 0.13913181745905548;
          result[4] += 0.0003975194784544442;
          result[5] += 0.00015900779138177767;
          result[6] += 0.000477023374145333;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
          result[0] += 0.9989435999765245;
          result[1] += 0;
          result[2] += 0.0002347555607723458;
          result[3] += 0.0005868889019308644;
          result[4] += 0.00017606667057925933;
          result[5] += 5.868889019308645e-05;
          result[6] += 0;
        } else {
          result[0] += 0.1830985915492958;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7887323943661972;
          result[4] += 0.014084507042253523;
          result[5] += 0.014084507042253523;
          result[6] += 0;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          result[0] += 0;
          result[1] += 0.011515151515151515;
          result[2] += 0.016363636363636365;
          result[3] += 0.9721212121212122;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9674418604651163;
          result[1] += 0.002325581395348837;
          result[2] += 0.030232558139534883;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)97.5) ) ) {
          result[0] += 0.17522849038764576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8247715096123542;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.02459016393442623;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9754098360655737;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
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
          result[0] += 0.5694444444444444;
          result[1] += 0;
          result[2] += 0.4027777777777778;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.027777777777777776;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9919447640966629;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.00805523590333717;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9387755102040817;
          result[1] += 0;
          result[2] += 0.05714285714285714;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.004081632653061225;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15) ) ) {
          result[0] += 0.024054982817869417;
          result[1] += 0;
          result[2] += 0.013745704467353952;
          result[3] += 0;
          result[4] += 0.9450171821305842;
          result[5] += 0.01718213058419244;
          result[6] += 0;
        } else {
          result[0] += 0.0004666355576294914;
          result[1] += 0;
          result[2] += 0.0013999066728884741;
          result[3] += 0.9967335510965936;
          result[4] += 0;
          result[5] += 0.0013999066728884741;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          result[0] += 0.9247787610619469;
          result[1] += 0;
          result[2] += 0.0752212389380531;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
          result[0] += 0.9501256632225635;
          result[1] += 0.0008377548170901983;
          result[2] += 0.002624965093549288;
          result[3] += 0.04602066461882156;
          result[4] += 0;
          result[5] += 0.00016755096341803966;
          result[6] += 0.0002234012845573862;
        } else {
          result[0] += 0.7472453339329885;
          result[1] += 0;
          result[2] += 0.0006746120980436249;
          result[3] += 0.2516303125702721;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00044974139869574995;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.9474467030242936;
          result[1] += 0;
          result[2] += 0.000991571641051066;
          result[3] += 0.05156172533465544;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9961291883391798;
          result[1] += 0;
          result[2] += 0.002056368694810693;
          result[3] += 0.000846740050804403;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009677029152050321;
        }
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)11) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-11) ) ) {
          result[0] += 0.16180620884289745;
          result[1] += 0.020696142991533398;
          result[2] += 0;
          result[3] += 0.8174976481655691;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.05319148936170213;
          result[1] += 0;
          result[2] += 0.02553191489361702;
          result[3] += 0.9212765957446809;
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
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)906) ) ) {
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9865319865319866;
          result[1] += 0;
          result[2] += 0.011223344556677891;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0022446689113355786;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
          result[0] += 0.9999007887295996;
          result[1] += 0;
          result[2] += 9.921127040031748e-05;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9990279465370595;
          result[1] += 0;
          result[2] += 0.0009720534629404617;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          result[0] += 0.02243928194297783;
          result[1] += 0.00607180570221753;
          result[2] += 0.009767687434002114;
          result[3] += 0.9561774023231258;
          result[4] += 0.0018479408658922916;
          result[5] += 0.0036958817317845833;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)94.5) ) ) {
          result[0] += 0.9799454516284293;
          result[1] += 0.00016043638697256537;
          result[2] += 0.004331782448259265;
          result[3] += 0.015081020375421146;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00048130916091769613;
        } else {
          result[0] += 0.4106358381502889;
          result[1] += 0;
          result[2] += 0.005780346820809247;
          result[3] += 0.5821965317919074;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0013872832369942194;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
          result[0] += 0.044444444444444446;
          result[1] += 0.17777777777777778;
          result[2] += 0;
          result[3] += 0.7777777777777778;
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9986559139784946;
          result[5] += 0.0013440860215053765;
          result[6] += 0;
        } else {
          result[0] += 0.08122605363984674;
          result[1] += 0;
          result[2] += 0.0072796934865900385;
          result[3] += 0.9103448275862069;
          result[4] += 0;
          result[5] += 0.0011494252873563218;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9735099337748344;
          result[4] += 0.026490066225165563;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)122.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)117) ) ) {
          result[0] += 0;
          result[1] += 1;
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
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-10.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)20) ) ) {
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          result[0] += 0.986408176166895;
          result[1] += 0.00038633090998489803;
          result[2] += 0.001229234713588312;
          result[3] += 0.011765532258630985;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00021072595090085346;
        } else {
          result[0] += 0.2596273291925466;
          result[1] += 0.011180124223602485;
          result[2] += 0;
          result[3] += 0.7291925465838509;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
          result[0] += 0.28328840970350405;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.716711590296496;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9882747068676717;
          result[1] += 0;
          result[2] += 0.011725293132328308;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
          result[0] += 0.0049504950495049506;
          result[1] += 0;
          result[2] += 0.06435643564356436;
          result[3] += 0.9306930693069307;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9090909090909092;
          result[1] += 0;
          result[2] += 0.005665722379603401;
          result[3] += 0.08472830285861449;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005150656708730365;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-272) ) ) {
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
          result[0] += 0.9998616682805367;
          result[1] += 0;
          result[2] += 0.00013833171946327292;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.997167868177137;
          result[1] += 0;
          result[2] += 0.0028321318228630276;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
          result[0] += 0.46875;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.43125;
          result[4] += 0.1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0021733224667209996;
          result[1] += 0.012496604183645748;
          result[2] += 0.0032599837000814994;
          result[3] += 0.9223037218147243;
          result[4] += 0.05895137190980712;
          result[5] += 0.0008149959250203749;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.10236220472440945;
          result[3] += 0.8976377952755905;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.008254716981132075;
          result[3] += 0.13443396226415094;
          result[4] += 0.8565251572327044;
          result[5] += 0.0007861635220125787;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-60.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9817027632561613;
          result[1] += 0.00024894199651481205;
          result[2] += 0.004978839930296241;
          result[3] += 0.011451331839681354;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0016181229773462784;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.037037037037037035;
          result[3] += 0.9629629629629629;
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
  
  // Average tree outputs
  result[0] /= 10;
  result[1] /= 10;
  result[2] /= 10;
  result[3] /= 10;
  result[4] /= 10;
  result[5] /= 10;
  result[6] /= 10;
  
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
