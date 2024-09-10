
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-41) ) ) {
          result[0] += 0;
          result[1] += 0.68;
          result[2] += 0;
          result[3] += 0.32;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.006923837784371909;
          result[1] += 0.006429277942631058;
          result[2] += 0.008902077151335312;
          result[3] += 0.9777448071216617;
          result[4] += 0;
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
          result[0] += 0.9807692307692307;
          result[1] += 0;
          result[2] += 0.019230769230769232;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)25) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.012121212121212123;
          result[3] += 0.8840909090909091;
          result[4] += 0.1037878787878788;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.994240460763139;
          result[1] += 0;
          result[2] += 0.004679625629949604;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0010799136069114472;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
          result[0] += 0.864561403508772;
          result[1] += 0.005614035087719298;
          result[2] += 0.0014035087719298245;
          result[3] += 0.12771929824561404;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007017543859649122;
        } else {
          result[0] += 0.9864514510328678;
          result[1] += 4.1816509157815506e-05;
          result[2] += 0.0005854311282094171;
          result[3] += 0.012335870201555575;
          result[4] += 0.000250899054946893;
          result[5] += 0.00020908254578907754;
          result[6] += 0.0001254495274734465;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)100.5) ) ) {
          result[0] += 0.17148470390120685;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8285152960987932;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.050824175824175824;
          result[1] += 0;
          result[2] += 0.034340659340659344;
          result[3] += 0;
          result[4] += 0.9107142857142857;
          result[5] += 0.004120879120879121;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)29) ) ) {
          result[0] += 0.9944144838212635;
          result[1] += 0;
          result[2] += 0.0025038520801232665;
          result[3] += 0.0023112480739599386;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007704160246533128;
        } else {
          result[0] += 0.6875;
          result[1] += 0;
          result[2] += 0.125;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.1875;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)49) ) ) {
          result[0] += 0.9674185463659147;
          result[1] += 0;
          result[2] += 0.03258145363408521;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.006818181818181818;
          result[3] += 0.9931818181818182;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
          result[0] += 0;
          result[1] += 0.01903114186851211;
          result[2] += 0;
          result[3] += 0.9809688581314879;
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9929577464788732;
          result[5] += 0.007042253521126761;
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
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0006518904823989571;
          result[2] += 0.014341590612777054;
          result[3] += 0.9837027379400262;
          result[4] += 0;
          result[5] += 0.0013037809647979141;
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
          result[0] += 0.9990889212827988;
          result[1] += 0;
          result[2] += 0.0009110787172011661;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.9700871632329636;
          result[1] += 0.0015847860538827261;
          result[2] += 0.004358161648177497;
          result[3] += 0.02357369255150555;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00039619651347068153;
        } else {
          result[0] += 0.41975552050473186;
          result[1] += 0;
          result[2] += 0.009069400630914827;
          result[3] += 0.5692034700315457;
          result[4] += 0;
          result[5] += 0.0009858044164037854;
          result[6] += 0.0009858044164037854;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-7.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)918.5) ) ) {
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-158) ) ) {
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9980110297441461;
          result[1] += 0;
          result[2] += 0.001988970255853901;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
          result[0] += 0.4356171039844509;
          result[1] += 0.0018221574344023323;
          result[2] += 0.0036443148688046646;
          result[3] += 0.47862001943634597;
          result[4] += 0.07956754130223517;
          result[5] += 0.00024295432458697764;
          result[6] += 0.00048590864917395527;
        } else {
          result[0] += 0.9340634778721503;
          result[1] += 0;
          result[2] += 0.009834599910594549;
          result[3] += 0.054313813142601704;
          result[4] += 0;
          result[5] += 0.00044702726866338853;
          result[6] += 0.0013410818059901657;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
          result[0] += 0;
          result[1] += 0.0033065658951346244;
          result[2] += 0.0136986301369863;
          result[3] += 0.9782711384034011;
          result[4] += 0.0023618327822390174;
          result[5] += 0.0023618327822390174;
          result[6] += 0;
        } else {
          result[0] += 0.9936305732484076;
          result[1] += 0;
          result[2] += 0.006369426751592357;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.015384615384615385;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8423076923076923;
          result[4] += 0.1423076923076923;
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
          result[0] += 0;
          result[1] += 0.08;
          result[2] += 0;
          result[3] += 0.92;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-9.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)57) ) ) {
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)94) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.006628787878787879;
          result[3] += 0.992739898989899;
          result[4] += 0;
          result[5] += 0.0006313131313131314;
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9829059829059829;
          result[1] += 0;
          result[2] += 0.017094017094017096;
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
          result[0] += 0.9987389659520807;
          result[1] += 0;
          result[2] += 0.0011640314288485789;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 9.700261907071492e-05;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          result[0] += 0.9883375742154368;
          result[1] += 0.004664970313825276;
          result[2] += 0.005937234944868533;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0010602205258693808;
        } else {
          result[0] += 0.826407671502336;
          result[1] += 0;
          result[2] += 0.009835259404966807;
          result[3] += 0.16105237275633147;
          result[4] += 0;
          result[5] += 0.0004917629702483404;
          result[6] += 0.002212933366117532;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)49) ) ) {
          result[0] += 0.9784037558685446;
          result[1] += 0;
          result[2] += 0.0215962441314554;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0032537960954446853;
          result[3] += 0.9967462039045553;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)103.5) ) ) {
          result[0] += 0.17901748542880933;
          result[1] += 0.004163197335553705;
          result[2] += 0.00832639467110741;
          result[3] += 0.8084929225645295;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.008733624454148471;
          result[1] += 0.043668122270742356;
          result[2] += 0;
          result[3] += 0.9475982532751092;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9987893462469734;
          result[1] += 0;
          result[2] += 0.0011556240369799693;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 5.5029716046665196e-05;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.8098674869853287;
          result[1] += 0.0016564126833885466;
          result[2] += 0.004969238050165641;
          result[3] += 0.1771178419309039;
          result[4] += 0.004969238050165641;
          result[5] += 0.00023663038334122095;
          result[6] += 0.0011831519167061048;
        } else {
          result[0] += 0;
          result[1] += 0.0009529860228716646;
          result[2] += 0.009212198221092757;
          result[3] += 0.9841168996188056;
          result[4] += 0.005082592121982211;
          result[5] += 0.0006353240152477764;
          result[6] += 0;
        }
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)112) ) ) {
          result[0] += 0.0012484394506866417;
          result[1] += 0.0009363295880149813;
          result[2] += 0;
          result[3] += 0.9953183520599251;
          result[4] += 0.0018726591760299626;
          result[5] += 0.0006242197253433209;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.009433962264150943;
          result[4] += 0.9905660377358491;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
          result[0] += 0;
          result[1] += 0.008430609597924773;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9915693904020753;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.20967741935483872;
          result[3] += 0;
          result[4] += 0.7419354838709677;
          result[5] += 0.04838709677419355;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
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
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
          result[0] += 0.46564885496183206;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5343511450381679;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9957360622534911;
          result[1] += 0;
          result[2] += 0.0017055750986035604;
          result[3] += 0.002451764204242618;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00010659844366272253;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)61) ) ) {
          result[0] += 0.9940492291046795;
          result[1] += 0.0008114687584527996;
          result[2] += 0.0033540708682715716;
          result[3] += 0.0016770354341357858;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00010819583446037328;
        } else {
          result[0] += 0;
          result[1] += 0.06756756756756757;
          result[2] += 0;
          result[3] += 0.9324324324324325;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9993686868686869;
          result[4] += 0;
          result[5] += 0.0006313131313131314;
          result[6] += 0;
        } else {
          result[0] += 0.9739413680781759;
          result[1] += 0;
          result[2] += 0.026058631921824105;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
          result[0] += 0.9979240806642942;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0020759193357058124;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9900293255131964;
          result[1] += 0;
          result[2] += 0.008797653958944282;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011730205278592375;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-16) ) ) {
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
          result[0] += 0.9986492570914003;
          result[1] += 0;
          result[2] += 0.0013507429085997298;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          result[0] += 0;
          result[1] += 0.008559201141226819;
          result[2] += 0.003708987161198288;
          result[3] += 0.9078459343794579;
          result[4] += 0.07960057061340942;
          result[5] += 0.0002853067047075606;
          result[6] += 0;
        } else {
          result[0] += 0.9974098425981271;
          result[1] += 0;
          result[2] += 0.0019924287706714486;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005977286312014345;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)74) ) ) {
          result[0] += 0.8654017195375038;
          result[1] += 0;
          result[2] += 0.018084790987251707;
          result[3] += 0.11443818559146163;
          result[4] += 0;
          result[5] += 0.00029647198339756897;
          result[6] += 0.0017788319003854138;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.018904823989569754;
          result[4] += 0.9810951760104303;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
          result[0] += 0;
          result[1] += 0.0006626905235255136;
          result[2] += 0;
          result[3] += 0.9993373094764745;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)106.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9939148073022313;
          result[5] += 0.006085192697768763;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07352941176470588;
          result[3] += 0;
          result[4] += 0.9264705882352942;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)3.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-4) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.25;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.75;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)11) ) ) {
          result[0] += 0.9982121815448377;
          result[1] += 0;
          result[2] += 0.0006094835642598838;
          result[3] += 0.0010158059404331396;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00016252895046930236;
        } else {
          result[0] += 0.8662632375189108;
          result[1] += 0.0033282904689863843;
          result[2] += 0.0027231467473524964;
          result[3] += 0.1264750378214826;
          result[4] += 0;
          result[5] += 0.000302571860816944;
          result[6] += 0.000907715582450832;
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0063801208865010076;
          result[3] += 0.9519811954331766;
          result[4] += 0.041638683680322364;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9909379247847757;
          result[1] += 0;
          result[2] += 0.007249660172179429;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0018124150430448573;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)92) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8;
          result[5] += 0.2;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
          result[0] += 0.27381230985256266;
          result[1] += 0.002106248537327405;
          result[2] += 0.013573601684998831;
          result[3] += 0.6941259068570093;
          result[4] += 0.015445822607067635;
          result[5] += 0.0009361104610344022;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.17747747747747747;
          result[4] += 0.8225225225225226;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.06451612903225806;
          result[1] += 0.3548387096774194;
          result[2] += 0;
          result[3] += 0.5806451612903226;
          result[4] += 0;
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
          result[3] += 0.12982456140350876;
          result[4] += 0.8701754385964913;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          result[0] += 0;
          result[1] += 0.0043980208905992305;
          result[2] += 0.01154480483782298;
          result[3] += 0.982957669048928;
          result[4] += 0.0010995052226498076;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.3695652173913044;
          result[1] += 0.04347826086956522;
          result[2] += 0.02173913043478261;
          result[3] += 0.5652173913043479;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.4444444444444444;
          result[1] += 0;
          result[2] += 0.5555555555555556;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)114.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0012484394506866417;
          result[1] += 0.016229712858926344;
          result[2] += 0;
          result[3] += 0.0898876404494382;
          result[4] += 0.8926342072409488;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 0.9993115318416523;
          result[1] += 0;
          result[2] += 0.0005901155642980084;
          result[3] += 0;
          result[4] += 4.917629702483403e-05;
          result[5] += 0;
          result[6] += 4.917629702483403e-05;
        } else {
          result[0] += 0.7043478260869566;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2956521739130435;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
          result[0] += 0.01966292134831461;
          result[1] += 0.001404494382022472;
          result[2] += 0.015449438202247192;
          result[3] += 0.36095505617977536;
          result[4] += 0.5997191011235956;
          result[5] += 0.002808988764044944;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.12727272727272726;
          result[4] += 0.8727272727272727;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 0.9993189170781542;
          result[1] += 0;
          result[2] += 0.0006810829218457347;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6854330708661418;
          result[1] += 0.0007874015748031497;
          result[2] += 0.003346456692913386;
          result[3] += 0.3089566929133859;
          result[4] += 0;
          result[5] += 9.842519685039371e-05;
          result[6] += 0.001377952755905512;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)80.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9878844361602983;
          result[4] += 0.011183597390493944;
          result[5] += 0.0009319664492078286;
          result[6] += 0;
        } else {
          result[0] += 0.08745247148288973;
          result[1] += 0;
          result[2] += 0.09125475285171103;
          result[3] += 0.2623574144486692;
          result[4] += 0.55893536121673;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)1.5) ) ) {
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
          result[0] += 0.9669421487603306;
          result[1] += 0;
          result[2] += 0.03305785123966942;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
          result[0] += 0.9988640666414237;
          result[1] += 0;
          result[2] += 0.001135933358576297;
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
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          result[0] += 0.967741935483871;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.03225806451612903;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0.025115473441108545;
          result[1] += 0.01010392609699769;
          result[2] += 0.003464203233256351;
          result[3] += 0.8972286374133949;
          result[4] += 0.06351039260969978;
          result[5] += 0.0005773672055427252;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.01089108910891089;
          result[3] += 0.18811881188118812;
          result[4] += 0.8;
          result[5] += 0.0009900990099009901;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0.8442437923250564;
          result[1] += 0;
          result[2] += 0.011286681715575621;
          result[3] += 0.14446952595936793;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9888557729687703;
          result[1] += 0;
          result[2] += 0.005312945445121161;
          result[3] += 0.004665025268886873;
          result[4] += 0;
          result[5] += 0.0002591680704937152;
          result[6] += 0.0009070882467280031;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
          result[0] += 0;
          result[1] += 0.0006691201070592171;
          result[2] += 0;
          result[3] += 0.9993308798929408;
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
          result[0] += 0;
          result[1] += 0.008547008547008548;
          result[2] += 0.006944444444444444;
          result[3] += 0.9813034188034188;
          result[4] += 0.003205128205128205;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.04564315352697095;
          result[2] += 0;
          result[3] += 0.004149377593360996;
          result[4] += 0.950207468879668;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)99.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.989010989010989;
          result[1] += 0.01098901098901099;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.034807149576669805;
          result[4] += 0.9651928504233303;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)70) ) ) {
          result[0] += 0.542483660130719;
          result[1] += 0;
          result[2] += 0.05446623093681918;
          result[3] += 0.4030501089324619;
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)57) ) ) {
          result[0] += 0.015625;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.921875;
          result[5] += 0.0625;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 0.10025873221216042;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8990944372574385;
          result[4] += 0;
          result[5] += 0.000646830530401035;
          result[6] += 0;
        } else {
          result[0] += 0.611111111111111;
          result[1] += 0;
          result[2] += 0.3555555555555555;
          result[3] += 0.02222222222222222;
          result[4] += 0;
          result[5] += 0.01111111111111111;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
          result[0] += 0.1391304347826087;
          result[1] += 0;
          result[2] += 0.06086956521739131;
          result[3] += 0.8;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9653252195878065;
          result[1] += 0.0004018600378896608;
          result[2] += 0.0022389344968138246;
          result[3] += 0.03186176014696596;
          result[4] += 0;
          result[5] += 0.00017222573052414034;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8173118434307095;
          result[1] += 0;
          result[2] += 0.001654914376169233;
          result[3] += 0.1806734781983019;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003597639948193985;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)25) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
          result[0] += 0.4166075230660043;
          result[1] += 0;
          result[2] += 0.014194464158978;
          result[3] += 0.5621007806955288;
          result[4] += 0.007097232079489;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6589181940098346;
          result[1] += 0;
          result[2] += 0.008270004470272686;
          result[3] += 0.2717925793473402;
          result[4] += 0.06034868126955744;
          result[5] += 0.0004470272686633885;
          result[6] += 0.00022351363433169424;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
          result[0] += 0.8504098360655737;
          result[1] += 0.008879781420765027;
          result[2] += 0.0006830601092896175;
          result[3] += 0.14002732240437157;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9868648170757379;
          result[1] += 4.209994527007115e-05;
          result[2] += 0.000841998905401423;
          result[3] += 0.01166168483980971;
          result[4] += 0.0003788995074306404;
          result[5] += 0.0001683997810802846;
          result[6] += 4.209994527007115e-05;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9959677419354839;
          result[4] += 0.0030241935483870967;
          result[5] += 0.0010080645161290322;
          result[6] += 0;
        } else {
          result[0] += 0.4612490594431904;
          result[1] += 0;
          result[2] += 0.024078254326561323;
          result[3] += 0;
          result[4] += 0.5146726862302483;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
          result[0] += 0.997382960162838;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.002617039837161966;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9856459330143541;
          result[1] += 0;
          result[2] += 0.011363636363636364;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0029904306220095694;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)122) ) ) {
          result[0] += 0;
          result[1] += 0.006617038875103391;
          result[2] += 0.0016542597187758478;
          result[3] += 0.9917287014061208;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.4146341463414634;
          result[2] += 0;
          result[3] += 0.5853658536585366;
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
          result[0] += 0.8679245283018868;
          result[1] += 0;
          result[2] += 0.1320754716981132;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-7) ) ) {
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
          result[0] += 0.9820971867007673;
          result[1] += 0;
          result[2] += 0.015345268542199489;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0025575447570332483;
        } else {
          result[0] += 0.999353169469599;
          result[1] += 0;
          result[2] += 0.000646830530401035;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          result[0] += 0.9992870510649675;
          result[1] += 0;
          result[2] += 0.0007129489350325283;
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
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
          result[0] += 0;
          result[1] += 0.008620689655172414;
          result[2] += 0;
          result[3] += 0.9913793103448276;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7117082035306335;
          result[1] += 0.0014278296988577363;
          result[2] += 0.003245067497403946;
          result[3] += 0.282061266874351;
          result[4] += 0.0006490134994807892;
          result[5] += 0.0003894080996884735;
          result[6] += 0.0005192107995846313;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
          result[0] += 0.015237020316027089;
          result[1] += 0;
          result[2] += 0.005925507900677201;
          result[3] += 0.7931715575620768;
          result[4] += 0.18566591422121898;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8023715415019763;
          result[1] += 0;
          result[2] += 0.01437297879985627;
          result[3] += 0.0639597556593604;
          result[4] += 0.11426518145885735;
          result[5] += 0.0021559468199784403;
          result[6] += 0.002874595759971254;
        }
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
          result[0] += 0.16259477674810446;
          result[1] += 0.02274641954507161;
          result[2] += 0;
          result[3] += 0.814658803706824;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
          result[0] += 0.3384146341463415;
          result[1] += 0;
          result[2] += 0.027439024390243903;
          result[3] += 0.6341463414634146;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.024446142093200916;
          result[4] += 0.975553857906799;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.001298701298701299;
          result[3] += 0.9974025974025975;
          result[4] += 0.001298701298701299;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.06451612903225806;
          result[1] += 0.06912442396313365;
          result[2] += 0.08755760368663594;
          result[3] += 0.7788018433179723;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)47.5) ) ) {
          result[0] += 0.9964747356051704;
          result[1] += 0;
          result[2] += 0.0035252643948296123;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.4;
          result[1] += 0;
          result[2] += 0.6;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-35) ) ) {
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-23) ) ) {
          result[0] += 0.0010672358591248667;
          result[1] += 0.01814300960512273;
          result[2] += 0;
          result[3] += 0.13660618996798293;
          result[4] += 0.8441835645677694;
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)16.5) ) ) {
          result[0] += 0.2;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 0.08841843088418432;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9115815691158157;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6463414634146342;
          result[1] += 0;
          result[2] += 0.3048780487804878;
          result[3] += 0.024390243902439025;
          result[4] += 0;
          result[5] += 0.024390243902439025;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-20.5) ) ) {
          result[0] += 0.9989775051124744;
          result[1] += 0;
          result[2] += 0.0010224948875255625;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9925842522130766;
          result[1] += 0.0006988662835844075;
          result[2] += 0.001591862090386706;
          result[3] += 0.004814412175803696;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00031060723714862557;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          result[0] += 0.4409937888198758;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5590062111801242;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9895348837209302;
          result[1] += 0;
          result[2] += 0.007558139534883721;
          result[3] += 0.0008720930232558139;
          result[4] += 0;
          result[5] += 0.0008720930232558139;
          result[6] += 0.0011627906976744186;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)16.5) ) ) {
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
          result[4] += 0.9948364888123924;
          result[5] += 0.0051635111876075735;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
          result[0] += 0;
          result[1] += 0.011829652996845425;
          result[2] += 0;
          result[3] += 0.9873817034700315;
          result[4] += 0;
          result[5] += 0.0007886435331230284;
          result[6] += 0;
        } else {
          result[0] += 0.954954954954955;
          result[1] += 0;
          result[2] += 0.04504504504504504;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0;
          result[1] += 0.0014211274277593558;
          result[2] += 0;
          result[3] += 0.9256276646139271;
          result[4] += 0.07247749881572714;
          result[5] += 0.0004737091425864519;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0011883541295306002;
          result[2] += 0.007724301841948901;
          result[3] += 0;
          result[4] += 0.9904931669637552;
          result[5] += 0.0005941770647653001;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-26) ) ) {
          result[0] += 0.045454545454545456;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9545454545454546;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5287356321839081;
          result[1] += 0.02586206896551724;
          result[2] += 0;
          result[3] += 0.4454022988505747;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
          result[0] += 0.9671814671814671;
          result[1] += 0;
          result[2] += 0.029922779922779922;
          result[3] += 0.0028957528957528956;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9980383280519088;
          result[1] += 0.0006035913686434284;
          result[2] += 0.0010185604345857855;
          result[3] += 0.00011317338162064282;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00022634676324128565;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          result[0] += 0.3291010665312341;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6708989334687658;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9829157175398633;
          result[1] += 0;
          result[2] += 0.01366742596810934;
          result[3] += 0.003416856492027335;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
          result[0] += 0.9046116504854369;
          result[1] += 0;
          result[2] += 0.006796116504854369;
          result[3] += 0.08689320388349514;
          result[4] += 0;
          result[5] += 0.0004854368932038835;
          result[6] += 0.0012135922330097086;
        } else {
          result[0] += 0.0111731843575419;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9888268156424581;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-15) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)33.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9919571045576407;
          result[1] += 0;
          result[2] += 0.00804289544235925;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.999536822603057;
          result[1] += 0;
          result[2] += 0.000411713241727137;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 5.146415521589213e-05;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
          result[0] += 0.35690968443960824;
          result[1] += 0.005077983315197679;
          result[2] += 0.008342401160681901;
          result[3] += 0.6289445048966268;
          result[4] += 0.0007254261878853826;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.006896551724137931;
          result[2] += 0;
          result[3] += 0.1310344827586207;
          result[4] += 0.8620689655172413;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
          result[0] += 0.9285155230889642;
          result[1] += 0.0016957996347508478;
          result[2] += 0.003652491521001826;
          result[3] += 0.06496217062353248;
          result[4] += 0;
          result[5] += 0.0003913383772501957;
          result[6] += 0.0007826767545003914;
        } else {
          result[0] += 0.014242878560719641;
          result[1] += 0;
          result[2] += 0.017991004497751126;
          result[3] += 0.8575712143928037;
          result[4] += 0.10569715142428787;
          result[5] += 0.004497751124437782;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)101) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)52) ) ) {
          result[0] += 0;
          result[1] += 0.0003351206434316354;
          result[2] += 0;
          result[3] += 0.9996648793565683;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7096774193548387;
          result[3] += 0;
          result[4] += 0.22580645161290322;
          result[5] += 0.06451612903225806;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0014534883720930232;
          result[3] += 0;
          result[4] += 0.998546511627907;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4979) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-327) ) ) {
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
          result[0] += 0.9985413437870362;
          result[1] += 0;
          result[2] += 0.0014586562129638072;
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
          result[0] += 0;
          result[1] += 0.015463917525773196;
          result[2] += 0;
          result[3] += 0.9845360824742269;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0014705882352941176;
          result[3] += 0;
          result[4] += 0.9926470588235294;
          result[5] += 0.0058823529411764705;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          result[0] += 0.6587717814244629;
          result[1] += 0.000845880561664693;
          result[2] += 0.007359160886482829;
          result[3] += 0.3319235323972255;
          result[4] += 0.0001691761123329386;
          result[5] += 0.00025376416849940786;
          result[6] += 0.0006767044493317544;
        } else {
          result[0] += 0.07731520815632965;
          result[1] += 0.00594732370433305;
          result[2] += 0.0118946474086661;
          result[3] += 0.9035683942225998;
          result[4] += 0.0008496176720475786;
          result[5] += 0.0004248088360237893;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9938271604938271;
          result[4] += 0.006172839506172839;
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
          result[0] += 0.003125;
          result[1] += 0.028125;
          result[2] += 0;
          result[3] += 0.225;
          result[4] += 0.74375;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0017331022530329288;
          result[4] += 0.9982668977469671;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-35) ) ) {
          result[0] += 0;
          result[1] += 0.875;
          result[2] += 0;
          result[3] += 0.125;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0006163328197226503;
          result[1] += 0.0006163328197226503;
          result[2] += 0.0018489984591679508;
          result[3] += 0.9966101694915255;
          result[4] += 0;
          result[5] += 0.0003081664098613251;
          result[6] += 0;
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)19) ) ) {
          result[0] += 0.9797919047332652;
          result[1] += 0.0007217176880976725;
          result[2] += 0.0021651530642930175;
          result[3] += 0.017080651951644914;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00024057256269922414;
        } else {
          result[0] += 0.06724782067247821;
          result[1] += 0.024906600249066;
          result[2] += 0.024906600249066;
          result[3] += 0.8829389788293898;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
          result[0] += 0.8654263565891473;
          result[1] += 0;
          result[2] += 0.0012403100775193801;
          result[3] += 0.13317829457364344;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00015503875968992252;
        } else {
          result[0] += 0.479145122371596;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.520854877628404;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
          result[0] += 0.9776951672862454;
          result[1] += 0;
          result[2] += 0.022304832713754646;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9993992189846801;
          result[1] += 0;
          result[2] += 0.0004505857614899369;
          result[3] += 0.00015019525382997898;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
          result[0] += 0.36153846153846153;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6384615384615384;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9935503685503686;
          result[1] += 0;
          result[2] += 0.0042997542997543;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00214987714987715;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
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
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9963768115942029;
          result[5] += 0.0036231884057971015;
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
          result[1] += 0.0006110601894286587;
          result[2] += 0.008249312557286892;
          result[3] += 0.9890009165902841;
          result[4] += 0;
          result[5] += 0.0021387106630003055;
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)64) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.036303630363036306;
          result[2] += 0;
          result[3] += 0.9636963696369637;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          result[0] += 0.9969297453494672;
          result[1] += 0.0006501715730540004;
          result[2] += 0.0020588766480043345;
          result[3] += 0.0001083619288423334;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00025284450063211124;
        } else {
          result[0] += 0.2564102564102564;
          result[1] += 0;
          result[2] += 0.1794871794871795;
          result[3] += 0.5641025641025641;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0.28783783783783784;
          result[1] += 0;
          result[2] += 0.00945945945945946;
          result[3] += 0.7027027027027027;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5134027120782088;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.48659728792179124;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
          result[0] += 0.9360406091370559;
          result[1] += 0;
          result[2] += 0.0025380710659898475;
          result[3] += 0.06015228426395939;
          result[4] += 0;
          result[5] += 0.0005076142131979696;
          result[6] += 0.0007614213197969543;
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-305.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9876506153252433;
          result[1] += 8.575961579692123e-05;
          result[2] += 0.0006860769263753698;
          result[3] += 0.011491788516787445;
          result[4] += 0;
          result[5] += 0;
          result[6] += 8.575961579692123e-05;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
          result[0] += 0.9671232876712329;
          result[1] += 0;
          result[2] += 0.002054794520547945;
          result[3] += 0.030821917808219176;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9469623915139826;
          result[1] += 0.0048216007714561235;
          result[2] += 0.0028929604628736743;
          result[3] += 0.044358727097396335;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009643201542912247;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)101) ) ) {
          result[0] += 0.18149146451033243;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8185085354896675;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.31;
          result[1] += 0;
          result[2] += 0.125;
          result[3] += 0;
          result[4] += 0.55;
          result[5] += 0.015;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-190) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9956581803828696;
          result[1] += 0;
          result[2] += 0.003749753305703572;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005920663114268798;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)115.5) ) ) {
          result[0] += 0;
          result[1] += 0.0033624747814391394;
          result[2] += 0.00773369199731002;
          result[3] += 0.9838601210490922;
          result[4] += 0.003026227303295225;
          result[5] += 0.0020174848688634837;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.020588235294117647;
          result[2] += 0;
          result[3] += 0.15588235294117647;
          result[4] += 0.8235294117647058;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)74) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98) ) ) {
          result[0] += 0.39338235294117646;
          result[1] += 0;
          result[2] += 0.07536764705882353;
          result[3] += 0.53125;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9910233393177738;
          result[5] += 0.008976660682226212;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)106.5) ) ) {
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
          result[3] += 0.05522388059701493;
          result[4] += 0.9447761194029851;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9869477911646586;
          result[1] += 0;
          result[2] += 0.013052208835341365;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.020942408376963352;
          result[3] += 0.9773123909249564;
          result[4] += 0.0017452006980802793;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.05573248407643312;
          result[1] += 0.0019904458598726115;
          result[2] += 0.0011942675159235668;
          result[3] += 0.580015923566879;
          result[4] += 0.36106687898089174;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
          result[0] += 0.02666666666666667;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9733333333333334;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.042105263157894736;
          result[2] += 0;
          result[3] += 0.010526315789473684;
          result[4] += 0.9473684210526315;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
          result[0] += 0.9396103110250515;
          result[1] += 0.001089192787123321;
          result[2] += 0.0036306426237444032;
          result[3] += 0.05530678930170641;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00036306426237444034;
        } else {
          result[0] += 0.9968996188055909;
          result[1] += 0.00015247776365946632;
          result[2] += 0.00030495552731893264;
          result[3] += 0.002388818297331639;
          result[4] += 0.00020330368487928843;
          result[5] += 5.082592121982211e-05;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)50) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0027297543221110106;
          result[3] += 0.9963603275705187;
          result[4] += 0;
          result[5] += 0.0009099181073703368;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.30303030303030304;
          result[3] += 0;
          result[4] += 0.696969696969697;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
          result[0] += 0.3177821201758671;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6822178798241328;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8540983606557377;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.14590163934426228;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
          result[0] += 0.9848844101956136;
          result[1] += 0;
          result[2] += 0.013337285121517486;
          result[3] += 0.0005927682276229994;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011855364552459987;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.009090909090909092;
          result[3] += 0;
          result[4] += 0.9893939393939395;
          result[5] += 0.0015151515151515154;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          result[0] += 0.9994879380974055;
          result[1] += 0;
          result[2] += 0.000512061902594447;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          result[0] += 0.024421186171899777;
          result[1] += 0.005708848715509039;
          result[2] += 0.01585791309863622;
          result[3] += 0.8652077386615922;
          result[4] += 0.08753568030447194;
          result[5] += 0.0012686330478908975;
          result[6] += 0;
        } else {
          result[0] += 0.7396327014218009;
          result[1] += 0;
          result[2] += 0.0033570300157977884;
          result[3] += 0.25602290679304895;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009873617693522906;
        }
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)71) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0047169811320754715;
          result[3] += 0;
          result[4] += 0.9952830188679245;
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
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
          result[1] += 0.017006802721088437;
          result[2] += 0;
          result[3] += 0.9268707482993197;
          result[4] += 0.05612244897959184;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
          result[0] += 0.0019305019305019305;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9980694980694981;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.05803571428571429;
          result[2] += 0;
          result[3] += 0.008928571428571428;
          result[4] += 0.9330357142857143;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)11) ) ) {
          result[0] += 0.0796812749003984;
          result[1] += 0;
          result[2] += 0.05179282868525897;
          result[3] += 0.8685258964143426;
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
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.011126564673157162;
          result[3] += 0;
          result[4] += 0.9791376912378303;
          result[5] += 0.009735744089012517;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.00033433634236041456;
          result[2] += 0.006352390504847877;
          result[3] += 0.9926446004680709;
          result[4] += 0;
          result[5] += 0.0006686726847208291;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)112) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9745222929936306;
          result[4] += 0.025477707006369428;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03225806451612903;
          result[4] += 0.967741935483871;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.11702127659574468;
          result[4] += 0.8829787234042553;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.008658008658008658;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9913419913419913;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9285714285714286;
          result[1] += 0.07142857142857142;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
          result[0] += 0.9526806526806527;
          result[1] += 0.0006993006993006993;
          result[2] += 0.003787878787878788;
          result[3] += 0.04283216783216783;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7432372993182318;
          result[1] += 0;
          result[2] += 0.0014295139652518143;
          result[3] += 0.25511326149109304;
          result[4] += 0;
          result[5] += 0.00010996261271167803;
          result[6] += 0.00010996261271167803;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
          result[0] += 0.9935565527557243;
          result[1] += 0;
          result[2] += 0.0028765389483373606;
          result[3] += 0.0028765389483373606;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006903693476009665;
        } else {
          result[0] += 0.9461400359066428;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05385996409335727;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)34.5) ) ) {
          result[0] += 0.9933962264150943;
          result[1] += 0;
          result[2] += 0.006603773584905661;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9994868578596271;
          result[1] += 0;
          result[2] += 0.0005131421403728833;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
          result[0] += 0.45041322314049587;
          result[1] += 0;
          result[2] += 0.009641873278236915;
          result[3] += 0.4398530762167126;
          result[4] += 0.10009182736455463;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8112362271461436;
          result[1] += 0.0013318803729265045;
          result[2] += 0.006054001695120475;
          result[3] += 0.17411308875166484;
          result[4] += 0.005690761593413246;
          result[5] += 0.0003632401017072285;
          result[6] += 0.001210800339024095;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)21.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.022796352583586626;
          result[3] += 0;
          result[4] += 0.9772036474164134;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.00032530904359141186;
          result[2] += 0.008458035133376708;
          result[3] += 0.9912166558230319;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)11) ) ) {
          result[0] += 0.14814814814814814;
          result[1] += 0.019204389574759947;
          result[2] += 0.006172839506172839;
          result[3] += 0.8264746227709191;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)32.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.993480032599837;
          result[1] += 0;
          result[2] += 0.004889975550122249;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0016299918500407497;
        } else {
          result[0] += 0.9997379729588094;
          result[1] += 0;
          result[2] += 0.0002620270411906509;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.02284064058808086;
          result[1] += 0.006300866369125755;
          result[2] += 0.015752165922814386;
          result[3] += 0.9543187188238382;
          result[4] += 0;
          result[5] += 0.0007876082961407193;
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
          result[1] += 0.008245877061469266;
          result[2] += 0;
          result[3] += 0.20389805097451275;
          result[4] += 0.787856071964018;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)3.5) ) ) {
          result[0] += 0.5229357798165137;
          result[1] += 0;
          result[2] += 0.003223406893131664;
          result[3] += 0.4728489957847756;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009918175055789735;
        } else {
          result[0] += 0.60932944606414;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3900874635568513;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005830903790087463;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0.05555555555555555;
          result[1] += 0.013888888888888888;
          result[2] += 0.013888888888888888;
          result[3] += 0.9166666666666666;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9800575657894737;
          result[1] += 0;
          result[2] += 0.008018092105263159;
          result[3] += 0.009457236842105263;
          result[4] += 0;
          result[5] += 0.00041118421052631577;
          result[6] += 0.002055921052631579;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          result[0] += 0;
          result[1] += 0.008450704225352112;
          result[2] += 0.014084507042253521;
          result[3] += 0.9140845070422535;
          result[4] += 0.06338028169014084;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9988532110091743;
          result[1] += 0.0011467889908256881;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)115) ) ) {
          result[0] += 0.15285714285714286;
          result[1] += 0.008571428571428572;
          result[2] += 0;
          result[3] += 0.8385714285714285;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.012269938650306749;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9877300613496932;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)15) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
          result[0] += 0.09063260340632603;
          result[1] += 0;
          result[2] += 0.0030413625304136255;
          result[3] += 0.015206812652068127;
          result[4] += 0.8911192214111923;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.28668941979522183;
          result[1] += 0;
          result[2] += 0.04778156996587031;
          result[3] += 0.6655290102389079;
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)14) ) ) {
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
          result[4] += 0.9958563535911602;
          result[5] += 0.004143646408839779;
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.011165387299371946;
          result[3] += 0.9860432658757851;
          result[4] += 0;
          result[5] += 0.0027913468248429866;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          result[0] += 0.999024334251607;
          result[1] += 0;
          result[2] += 0.0009756657483930211;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9998841251448436;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00011587485515643106;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
          result[0] += 0.6910552349546579;
          result[1] += 0.002267106347897774;
          result[2] += 0.004018961253091508;
          result[3] += 0.30162819455894474;
          result[4] += 0;
          result[5] += 0.00010305028854080792;
          result[6] += 0.0009274525968672713;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.023346303501945526;
          result[3] += 0.9727626459143969;
          result[4] += 0;
          result[5] += 0.0038910505836575876;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-3.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9993564993564994;
          result[1] += 0;
          result[2] += 0.0006435006435006435;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.7166384112375878;
          result[1] += 0;
          result[2] += 0.008476628723661903;
          result[3] += 0.2528457253572294;
          result[4] += 0.019859530152579317;
          result[5] += 0.0004843787842092516;
          result[6] += 0.0016953257447323807;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.02121640735502122;
          result[3] += 0.8394625176803395;
          result[4] += 0.13861386138613865;
          result[5] += 0.0007072135785007073;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 0.9992821645499724;
          result[1] += 0;
          result[2] += 0.0005521811154058532;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00016565433462175595;
        } else {
          result[0] += 0.5751466275659824;
          result[1] += 0.0021994134897360706;
          result[2] += 0.007086999022482893;
          result[3] += 0.39296187683284456;
          result[4] += 0.021505376344086023;
          result[5] += 0.0006109481915933529;
          result[6] += 0.0004887585532746823;
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
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
          result[0] += 0.29136690647482016;
          result[1] += 0;
          result[2] += 0.050359712230215826;
          result[3] += 0.658273381294964;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0.004689331770222743;
          result[1] += 0.012895662368112544;
          result[2] += 0;
          result[3] += 0.9824150058616647;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0635593220338983;
          result[2] += 0;
          result[3] += 0.9364406779661016;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)49) ) ) {
          result[0] += 0.42424242424242425;
          result[1] += 0;
          result[2] += 0.5757575757575758;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.013915547024952015;
          result[2] += 0.0028790786948176585;
          result[3] += 0.9832053742802304;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
          result[0] += 0.998289136013687;
          result[1] += 0;
          result[2] += 0.001710863986313088;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8545454545454545;
          result[1] += 0;
          result[2] += 0.14545454545454545;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 0.9998750624687656;
          result[1] += 0;
          result[2] += 0.0001249375312343828;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5704697986577182;
          result[1] += 0;
          result[2] += 0.010391859709893918;
          result[3] += 0.41502489716388835;
          result[4] += 0.0012989824637367397;
          result[5] += 0.0008659883091578264;
          result[6] += 0.0019484736956051096;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
          result[0] += 0.15242018537590113;
          result[1] += 0;
          result[2] += 0.016477857878475798;
          result[3] += 0.7775489186405767;
          result[4] += 0.04737384140061792;
          result[5] += 0.006179196704428424;
          result[6] += 0;
        } else {
          result[0] += 0.9219073659789544;
          result[1] += 0.0007042837020465656;
          result[2] += 0.00169856657552407;
          result[3] += 0.07535835611898252;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00033142762449250146;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)2060.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-135) ) ) {
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)16.5) ) ) {
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9961612284069098;
          result[5] += 0.003838771593090211;
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
          result[1] += 0.004320987654320987;
          result[2] += 0.006172839506172839;
          result[3] += 0.9882716049382716;
          result[4] += 0;
          result[5] += 0.0012345679012345679;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9655172413793104;
          result[1] += 0;
          result[2] += 0.034482758620689655;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9974411463664279;
          result[1] += 0;
          result[2] += 0.0020470829068577278;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005117707267144319;
        } else {
          result[0] += 0.9998264491496008;
          result[1] += 0;
          result[2] += 0.00017355085039916696;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
          result[0] += 0.49043715846994534;
          result[1] += 0.020491803278688523;
          result[2] += 0;
          result[3] += 0.4890710382513661;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9490636704119851;
          result[1] += 0.001373283395755306;
          result[2] += 0.009113607990012486;
          result[3] += 0.03907615480649189;
          result[4] += 0;
          result[5] += 0.0003745318352059926;
          result[6] += 0.0009987515605493135;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
          result[0] += 0;
          result[1] += 0.00138217000691085;
          result[2] += 0;
          result[3] += 0.9986178299930891;
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 0.2845100105374078;
          result[1] += 0.01053740779768177;
          result[2] += 0;
          result[3] += 0.7038988408851422;
          result[4] += 0.001053740779768177;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.08936825885978428;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9106317411402157;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
          result[0] += 0.5746785361028685;
          result[1] += 0;
          result[2] += 0.01582591493570722;
          result[3] += 0.4094955489614243;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.11650485436893204;
          result[3] += 0.883495145631068;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)20.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.00904977375565611;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9909502262443439;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
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
          result[0] += 0.9983581136550215;
          result[1] += 0;
          result[2] += 0.0016418863449785643;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
          result[0] += 0.9294980998558511;
          result[1] += 0.0023587996330756127;
          result[2] += 0.003538199449613419;
          result[3] += 0.06329445682086227;
          result[4] += 0;
          result[5] += 0.0002620888481195125;
          result[6] += 0.00104835539247805;
        } else {
          result[0] += 0.013417521704814523;
          result[1] += 0;
          result[2] += 0.016574585635359115;
          result[3] += 0.861878453038674;
          result[4] += 0.10497237569060773;
          result[5] += 0.0031570639305445935;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
          result[0] += 0;
          result[1] += 0.0003313452617627568;
          result[2] += 0.003644797879390325;
          result[3] += 0.9960238568588469;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.027649769585253458;
          result[3] += 0;
          result[4] += 0.9708141321044547;
          result[5] += 0.0015360983102918587;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)926.5) ) ) {
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
          result[0] += 0;
          result[1] += 0.0546448087431694;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9453551912568307;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0018315018315018315;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9981684981684982;
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
          result[1] += 0;
          result[2] += 0.006666666666666667;
          result[3] += 0.9923809523809524;
          result[4] += 0;
          result[5] += 0.0009523809523809524;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          result[0] += 0.9875518672199171;
          result[1] += 0;
          result[2] += 0.01037344398340249;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002074688796680498;
        } else {
          result[0] += 0.9994633393707654;
          result[1] += 0;
          result[2] += 0.0005366606292345878;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9938080495356038;
          result[1] += 0;
          result[2] += 0.006191950464396285;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)64) ) ) {
          result[0] += 0.9912310866574966;
          result[1] += 0.002235213204951857;
          result[2] += 0.005330123796423659;
          result[3] += 0.000687757909215956;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005158184319119669;
        } else {
          result[0] += 0.00749063670411985;
          result[1] += 0.02247191011235955;
          result[2] += 0;
          result[3] += 0.9700374531835206;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.8314779270633398;
          result[1] += 0;
          result[2] += 0.006525911708253359;
          result[3] += 0.15738963531669867;
          result[4] += 0;
          result[5] += 0.0011516314779270633;
          result[6] += 0.00345489443378119;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.003663003663003663;
          result[3] += 0.9963369963369964;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)236) ) ) {
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)1.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          result[0] += 0.997646206771682;
          result[1] += 0;
          result[2] += 0.002353793228317943;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9999206349206349;
          result[1] += 0;
          result[2] += 7.936507936507937e-05;
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
          result[0] += 0.021551724137931036;
          result[1] += 0.008045977011494253;
          result[2] += 0.0034482758620689655;
          result[3] += 0.964367816091954;
          result[4] += 0.002011494252873563;
          result[5] += 0.0005747126436781609;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0226628895184136;
          result[3] += 0.24032105760151085;
          result[4] += 0.7365439093484419;
          result[5] += 0.00047214353163361664;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
          result[0] += 0;
          result[1] += 0.016260162601626018;
          result[2] += 0;
          result[3] += 0.04552845528455285;
          result[4] += 0.9382113821138212;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.19345238095238096;
          result[4] += 0.8065476190476191;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)42) ) ) {
          result[0] += 0.9827423909632883;
          result[1] += 0;
          result[2] += 0.004079071226859115;
          result[3] += 0.012550988390335738;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006275494195167869;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          result[0] += 0.19554848966613672;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8044515103338633;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9736842105263158;
          result[1] += 0;
          result[2] += 0.017543859649122806;
          result[3] += 0.0043859649122807015;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0043859649122807015;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
          result[0] += 0.0021668472372697724;
          result[1] += 0;
          result[2] += 0.0065005417118093175;
          result[3] += 0;
          result[4] += 0.9891657638136512;
          result[5] += 0.0021668472372697724;
          result[6] += 0;
        } else {
          result[0] += 0.0007259528130671506;
          result[1] += 0.001088929219600726;
          result[2] += 0.0003629764065335753;
          result[3] += 0.9970961887477314;
          result[4] += 0;
          result[5] += 0.0007259528130671506;
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
          result[0] += 0.9673024523160763;
          result[1] += 0;
          result[2] += 0.0326975476839237;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)185) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)27) ) ) {
          result[0] += 0;
          result[1] += 0.009557945041816009;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9904420549581839;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.10344827586206896;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.896551724137931;
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
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9985703536493604;
          result[1] += 0;
          result[2] += 0.0012039127163280662;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002257336343115124;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
          result[0] += 0.9948302361324577;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.005169763867542266;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.41935483870967744;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5806451612903226;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)46.5) ) ) {
          result[0] += 0.9991035410129987;
          result[1] += 0;
          result[2] += 0.0008964589870013447;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 0.4983142279163857;
          result[1] += 0.0036412677006068777;
          result[2] += 0.006877950101146325;
          result[3] += 0.49049224544841535;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006743088334457181;
        } else {
          result[0] += 0.964785447761194;
          result[1] += 0;
          result[2] += 0.0072294776119402986;
          result[3] += 0.025652985074626867;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0023320895522388058;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          result[0] += 0.9779917469050894;
          result[1] += 0;
          result[2] += 0.02200825309491059;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8769230769230769;
          result[1] += 0;
          result[2] += 0.09230769230769231;
          result[3] += 0.03076923076923077;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
          result[0] += 0.08936170212765958;
          result[1] += 0.00425531914893617;
          result[2] += 0.0015957446808510637;
          result[3] += 0.9042553191489362;
          result[4] += 0.0005319148936170213;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.19501625135427952;
          result[4] += 0.8049837486457205;
          result[5] += 0;
          result[6] += 0;
        }
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
          result[0] += 0.01282051282051282;
          result[1] += 0.15384615384615385;
          result[2] += 0;
          result[3] += 0.8333333333333334;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)97) ) ) {
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.012768427161926872;
          result[3] += 0.9007544979686594;
          result[4] += 0.08299477655252467;
          result[5] += 0.003482298316889147;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)19) ) ) {
          result[0] += 0.9792767167817961;
          result[1] += 0.0006965809485110582;
          result[2] += 0.0014512103093980379;
          result[3] += 0.018459395135543042;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00011609682475184304;
        } else {
          result[0] += 0.069164265129683;
          result[1] += 0.008645533141210375;
          result[2] += 0.03170028818443804;
          result[3] += 0.8847262247838616;
          result[4] += 0;
          result[5] += 0.005763688760806916;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
          result[0] += 0.9350056211354694;
          result[1] += 0;
          result[2] += 0.0026700393479482856;
          result[3] += 0.061832490163012926;
          result[4] += 0;
          result[5] += 7.026419336706015e-05;
          result[6] += 0.00042158516020236085;
        } else {
          result[0] += 0.6530478479353288;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.34695215206467117;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          result[0] += 0;
          result[1] += 0.004939626783754116;
          result[2] += 0.009330406147091108;
          result[3] += 0.9851811196487377;
          result[4] += 0.0005488474204171241;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.3695652173913044;
          result[1] += 0.02173913043478261;
          result[2] += 0.04347826086956522;
          result[3] += 0.5652173913043479;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.956989247311828;
          result[1] += 0;
          result[2] += 0.043010752688172046;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)99) ) ) {
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
          result[3] += 0.05;
          result[4] += 0.95;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.13398294762484775;
          result[4] += 0.8660170523751523;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0011135857461024498;
          result[1] += 0.015590200445434299;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9832962138084632;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.9990980608307862;
          result[1] += 0;
          result[2] += 0.0006514005110988626;
          result[3] += 0;
          result[4] += 0.00025053865811494716;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9155145929339478;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.08448540706605223;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
          result[0] += 0.05016722408026756;
          result[1] += 0.0033444816053511705;
          result[2] += 0.013377926421404682;
          result[3] += 0.9331103678929766;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.006060606060606061;
          result[3] += 0;
          result[4] += 0.9893939393939394;
          result[5] += 0.004545454545454545;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.8321587052988776;
          result[1] += 0;
          result[2] += 0.0013051422605063951;
          result[3] += 0.16027146959018532;
          result[4] += 0.006264682850430697;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5394252026529108;
          result[1] += 0;
          result[2] += 0.006632277081798084;
          result[3] += 0.4491525423728814;
          result[4] += 0.0029476787030213707;
          result[5] += 0;
          result[6] += 0.0018422991893883567;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 0.4219261337073399;
          result[1] += 0.0035063113604488078;
          result[2] += 0.005376344086021506;
          result[3] += 0.5418419822346892;
          result[4] += 0.026881720430107527;
          result[5] += 0.0004675081813931744;
          result[6] += 0;
        } else {
          result[0] += 0.9839912962387318;
          result[1] += 0;
          result[2] += 0.001709667391980106;
          result[3] += 0.01414361206092633;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001554243083618278;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
          result[0] += 0.9753521126760564;
          result[1] += 0;
          result[2] += 0.02464788732394366;
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
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 0.007449856733524355;
          result[2] += 0.002292263610315186;
          result[3] += 0.9896848137535816;
          result[4] += 0.0005730659025787965;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)20.5) ) ) {
          result[0] += 0;
          result[1] += 0.8888888888888888;
          result[2] += 0;
          result[3] += 0.1111111111111111;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.003875968992248062;
          result[1] += 0.007751937984496124;
          result[2] += 0;
          result[3] += 0.9883720930232558;
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
          result[1] += 0.0006090133982947625;
          result[2] += 0.013398294762484775;
          result[3] += 0.8982947624847747;
          result[4] += 0.08587088915956151;
          result[5] += 0.0018270401948842874;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
          result[0] += 0.995847581827064;
          result[1] += 0;
          result[2] += 0.000635075720566683;
          result[3] += 0.0034684904738641917;
          result[4] += 0;
          result[5] += 0;
          result[6] += 4.885197850512946e-05;
        } else {
          result[0] += 0.802365292183152;
          result[1] += 0.0003794586390083481;
          result[2] += 0.004427017455097395;
          result[3] += 0.19200607133822414;
          result[4] += 0;
          result[5] += 0.00012648621300278268;
          result[6] += 0.0006956741715153049;
        }
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
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9992734538189084;
          result[1] += 0;
          result[2] += 0.0006357279084551812;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 9.081827263645445e-05;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          result[0] += 0.9171568014015767;
          result[1] += 0.0013765486171943436;
          result[2] += 0.004129645851583031;
          result[3] += 0.07596045551245151;
          result[4] += 0;
          result[5] += 0.00012514078338130396;
          result[6] += 0.0012514078338130396;
        } else {
          result[0] += 0.17651854871585812;
          result[1] += 0;
          result[2] += 0.019975540154912354;
          result[3] += 0.6913982878108439;
          result[4] += 0.11210762331838565;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9985422740524781;
          result[5] += 0.0014577259475218659;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.000980392156862745;
          result[2] += 0.010784313725490196;
          result[3] += 0.9879084967320262;
          result[4] += 0;
          result[5] += 0.000326797385620915;
          result[6] += 0;
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
          result[0] += 0.2878787878787879;
          result[1] += 0;
          result[2] += 0.045454545454545456;
          result[3] += 0.6666666666666666;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)124.5) ) ) {
          result[0] += 0;
          result[1] += 0.010587102983638113;
          result[2] += 0;
          result[3] += 0.9894128970163619;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.06666666666666667;
          result[1] += 0.7333333333333333;
          result[2] += 0;
          result[3] += 0.2;
          result[4] += 0;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-16) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)6504) ) ) {
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
          result[0] += 0.9970703125;
          result[1] += 0;
          result[2] += 0.00244140625;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00048828125;
        } else {
          result[0] += 0.9996695443843199;
          result[1] += 0;
          result[2] += 0.000330455615680119;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-30.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4;
          result[3] += 0.6;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.022265246853823816;
          result[1] += 0.007018393030009682;
          result[2] += 0.017182962245885773;
          result[3] += 0.9528073572120039;
          result[4] += 0;
          result[5] += 0.0007260406582768636;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9723728375935965;
          result[1] += 0.00025819777949909623;
          result[2] += 0.0033565711334882513;
          result[3] += 0.023237800154918664;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007745933384972888;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0028363047001620746;
          result[3] += 0.997163695299838;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)52.5) ) ) {
          result[0] += 0.8096330275229358;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.19036697247706422;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9846514047866806;
          result[1] += 0;
          result[2] += 0.006763787721123829;
          result[3] += 0.007023933402705515;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0015608740894901144;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)1753.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9859550561797753;
          result[1] += 0;
          result[2] += 0.014044943820224719;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9996150885296382;
          result[1] += 0;
          result[2] += 0.00030792917628945344;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 7.698229407236336e-05;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)76) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.1111111111111111;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8888888888888888;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 0.001075268817204301;
          result[2] += 0.002150537634408602;
          result[3] += 0.24623655913978496;
          result[4] += 0.7494623655913979;
          result[5] += 0.001075268817204301;
          result[6] += 0;
        } else {
          result[0] += 0.03091032608695652;
          result[1] += 0.004755434782608696;
          result[2] += 0.019021739130434784;
          result[3] += 0.8322010869565217;
          result[4] += 0.109375;
          result[5] += 0.003736413043478261;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 0.5842070773263434;
          result[1] += 0;
          result[2] += 0.004423328964613368;
          result[3] += 0.4108781127129751;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000491480996068152;
        } else {
          result[0] += 0.971927341354093;
          result[1] += 0;
          result[2] += 0.004010379806558151;
          result[3] += 0.02264685067232838;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0014154281670205238;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)124.5) ) ) {
          result[0] += 0.13646209386281588;
          result[1] += 0.010108303249097473;
          result[2] += 0.012996389891696752;
          result[3] += 0.8404332129963898;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.041666666666666664;
          result[1] += 0.5833333333333334;
          result[2] += 0;
          result[3] += 0.375;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)236) ) ) {
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
          result[0] += 0.979381443298969;
          result[1] += 0;
          result[2] += 0.01804123711340206;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002577319587628866;
        } else {
          result[0] += 0.9987277353689568;
          result[1] += 0;
          result[2] += 0.001272264631043257;
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
          result[0] += 0.9989683276591355;
          result[1] += 0;
          result[2] += 0.0010316723408645414;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          result[0] += 0.02047162477325732;
          result[1] += 0.0064783622700181395;
          result[2] += 0.016584607411246437;
          result[3] += 0.9365120497538222;
          result[4] += 0.01891681782845297;
          result[5] += 0.0010365379632029023;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.32038834951456313;
          result[4] += 0.6796116504854369;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.011412268188302425;
          result[2] += 0;
          result[3] += 0.043509272467902996;
          result[4] += 0.9450784593437945;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.9959260419931056;
          result[1] += 0;
          result[2] += 0.0031338138514572234;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000940144155437167;
        } else {
          result[0] += 0.005791505791505791;
          result[1] += 0;
          result[2] += 0.0015444015444015444;
          result[3] += 0.9926640926640926;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)32) ) ) {
          result[0] += 0.9762837249782419;
          result[1] += 0.0006527415143603133;
          result[2] += 0.005221932114882507;
          result[3] += 0.01784160139251523;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.816949152542373;
          result[1] += 0;
          result[2] += 0.03050847457627119;
          result[3] += 0.1322033898305085;
          result[4] += 0;
          result[5] += 0.0033898305084745766;
          result[6] += 0.016949152542372885;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
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
          result[1] += 0.003699593044765076;
          result[2] += 0.011098779134295227;
          result[3] += 0.9852016278209397;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85.5) ) ) {
          result[0] += 0.9982253771073647;
          result[1] += 0.0008873114463176575;
          result[2] += 0.0008873114463176575;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8837209302325582;
          result[1] += 0;
          result[2] += 0.11627906976744186;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
          result[0] += 0.7875412541254126;
          result[1] += 0.005363036303630364;
          result[2] += 0.0016501650165016504;
          result[3] += 0.20173267326732677;
          result[4] += 0;
          result[5] += 0.0012376237623762379;
          result[6] += 0.0024752475247524757;
        } else {
          result[0] += 0.9650617283950618;
          result[1] += 0.00037037037037037035;
          result[2] += 0.0009876543209876543;
          result[3] += 0.032962962962962965;
          result[4] += 0.0002469135802469136;
          result[5] += 0;
          result[6] += 0.00037037037037037035;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)22) ) ) {
          result[0] += 0.8804780876494024;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.11952191235059761;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9991446725317691;
          result[1] += 6.109481915933527e-05;
          result[2] += 0.0002443792766373411;
          result[3] += 0.0003054740957966764;
          result[4] += 0.00012218963831867055;
          result[5] += 0.00012218963831867055;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
          result[0] += 0.17226590421729807;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.827734095782702;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7033398821218074;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2966601178781925;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)40.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16956521739130434;
          result[3] += 0;
          result[4] += 0.8304347826086956;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9885297184567258;
          result[1] += 0;
          result[2] += 0.008342022940563087;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0031282586027111575;
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0008818342151675485;
          result[3] += 0.8011463844797179;
          result[4] += 0.1970899470899471;
          result[5] += 0.0008818342151675485;
          result[6] += 0;
        } else {
          result[0] += 0.9915433403805497;
          result[1] += 0;
          result[2] += 0.006342494714587738;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0021141649048625794;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0008684324793747286;
          result[2] += 0;
          result[3] += 0.9943551888840643;
          result[4] += 0.0034737299174989146;
          result[5] += 0.0013026487190620929;
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
          result[0] += 0.02857142857142857;
          result[1] += 0;
          result[2] += 0.8857142857142857;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.08571428571428572;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0.9989608917438125;
          result[1] += 0;
          result[2] += 0.0010391082561874174;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 0.551177603318027;
          result[1] += 0.0022218930528810545;
          result[2] += 0.008739446007998815;
          result[3] += 0.43741667901051695;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00044437861057621095;
        } else {
          result[0] += 0.967680608365019;
          result[1] += 0;
          result[2] += 0.005228136882129277;
          result[3] += 0.025665399239543727;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0014258555133079848;
        }
      }
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)124.5) ) ) {
          result[0] += 0.14801762114537445;
          result[1] += 0.007929515418502203;
          result[2] += 0;
          result[3] += 0.8440528634361234;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.09523809523809523;
          result[1] += 0.7142857142857143;
          result[2] += 0;
          result[3] += 0.19047619047619047;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
          result[0] += 0.10256410256410256;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.1282051282051282;
          result[4] += 0.7692307692307693;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)48) ) ) {
          result[0] += 0.9102564102564102;
          result[1] += 0;
          result[2] += 0.08974358974358974;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.005555555555555556;
          result[3] += 0.9944444444444445;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-5.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)21) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.046511627906976744;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9534883720930233;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-35) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0012547051442910915;
          result[1] += 0;
          result[2] += 0.003450439146800502;
          result[3] += 0.9937264742785445;
          result[4] += 0;
          result[5] += 0.0015683814303638645;
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
          result[0] += 0.9986431478968792;
          result[1] += 0;
          result[2] += 0.0013568521031207597;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9948006932409013;
          result[1] += 0;
          result[2] += 0.004332755632582322;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008665511265164644;
        } else {
          result[0] += 0.998823103385841;
          result[1] += 0.0001810610175629187;
          result[2] += 0.0006337135614702154;
          result[3] += 0.0003621220351258374;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
          result[0] += 0.9950263311878291;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.00497366881217086;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.31746031746031744;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6825396825396826;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          result[0] += 0.9910313901345291;
          result[1] += 0;
          result[2] += 0.008968609865470852;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
          result[0] += 0.5248599439775911;
          result[1] += 0.0019257703081232494;
          result[2] += 0.005427170868347339;
          result[3] += 0.46743697478991597;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00035014005602240897;
        } else {
          result[0] += 0.8565423976608187;
          result[1] += 0.0029239766081871343;
          result[2] += 0.010782163742690058;
          result[3] += 0.1284722222222222;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0012792397660818713;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85.5) ) ) {
          result[0] += 0.9854014598540146;
          result[1] += 0;
          result[2] += 0.014598540145985401;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8828828828828829;
          result[1] += 0;
          result[2] += 0.11711711711711711;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-5536) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.08138101109741061;
          result[1] += 0.010275380189066995;
          result[2] += 0.005343197698314837;
          result[3] += 0.9030004110152076;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
          result[0] += 0.9382716049382716;
          result[1] += 0.002665544332210999;
          result[2] += 0.0015432098765432098;
          result[3] += 0.057379349046015715;
          result[4] += 0.00014029180695847364;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.996918675030263;
          result[1] += 5.5023660173874766e-05;
          result[2] += 0.00022009464069549907;
          result[3] += 0.0024210410476504895;
          result[4] += 0.00022009464069549907;
          result[5] += 0.0001650709805216243;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
          result[0] += 0.5943661971830986;
          result[1] += 0;
          result[2] += 0.014084507042253521;
          result[3] += 0.39154929577464787;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7133313088369269;
          result[1] += 0;
          result[2] += 0.0072881870634679624;
          result[3] += 0.26935924688733676;
          result[4] += 0.009717582751290617;
          result[5] += 0;
          result[6] += 0.0003036744609778318;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)94.5) ) ) {
          result[0] += 0.6624149659863946;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.33758503401360546;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.3820170109356015;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6179829890643985;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)40) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.04291845493562232;
          result[3] += 0;
          result[4] += 0.9542203147353362;
          result[5] += 0.002861230329041488;
          result[6] += 0;
        } else {
          result[0] += 0.9946300715990454;
          result[1] += 0;
          result[2] += 0.004474940334128878;
          result[3] += 0.0002983293556085919;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005966587112171838;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)5624.5) ) ) {
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
          result[0] += 0.9916839916839917;
          result[1] += 0;
          result[2] += 0.008316008316008316;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9994033412887828;
          result[1] += 0;
          result[2] += 0.0005966587112171838;
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.022390072835176692;
          result[1] += 0.006474237928243863;
          result[2] += 0.01699487456164014;
          result[3] += 0.9519827353655247;
          result[4] += 0;
          result[5] += 0.002158079309414621;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.981607795371498;
          result[1] += 0.00012180267965895247;
          result[2] += 0.00645554202192448;
          result[3] += 0.010962241169305723;
          result[4] += 0;
          result[5] += 0.00012180267965895247;
          result[6] += 0.0007308160779537149;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0015810276679841897;
          result[3] += 0.9984189723320158;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
          result[0] += 0.005479452054794521;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9945205479452055;
          result[4] += 0;
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
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)3.5) ) ) {
          result[0] += 0.75;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.25;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9990844936105283;
          result[1] += 0;
          result[2] += 0.0008392141903490368;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 7.629219912263972e-05;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)1.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9442387279459813;
          result[1] += 0.0023959921585711176;
          result[2] += 0.006098889130908299;
          result[3] += 0.0448703986059682;
          result[4] += 0;
          result[5] += 0.00043563493792202136;
          result[6] += 0.001960357220649096;
        } else {
          result[0] += 0;
          result[1] += 0.0023485204321277596;
          result[2] += 0.007984969469234382;
          result[3] += 0.9835603569751057;
          result[4] += 0.0061061531235321745;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 0.5403925148334094;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.4189867640346874;
          result[4] += 0.040164308534915566;
          result[5] += 0;
          result[6] += 0.00045641259698767686;
        } else {
          result[0] += 0.9852112676056338;
          result[1] += 0;
          result[2] += 0.0014084507042253522;
          result[3] += 0.013380281690140845;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)35) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)57) ) ) {
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
          result[0] += 0;
          result[1] += 0.5789473684210527;
          result[2] += 0.2631578947368421;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.15789473684210525;
          result[6] += 0;
        } else {
          result[0] += 0.0033112582781456954;
          result[1] += 0.004515352197471403;
          result[2] += 0.007224563515954244;
          result[3] += 0.9849488260084287;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)12) ) ) {
          result[0] += 0.9862459546925566;
          result[1] += 0;
          result[2] += 0.013754045307443365;
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
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          result[0] += 0.015007503751875938;
          result[1] += 0.004502251125562781;
          result[2] += 0;
          result[3] += 0.7348674337168585;
          result[4] += 0.24412206103051526;
          result[5] += 0.0015007503751875938;
          result[6] += 0;
        } else {
          result[0] += 0.9701252810793447;
          result[1] += 0;
          result[2] += 0.0057822036620623195;
          result[3] += 0.02055894635399936;
          result[4] += 0;
          result[5] += 0.00064246707356248;
          result[6] += 0.0028911018310311598;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)21.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.041237113402061855;
          result[3] += 0;
          result[4] += 0.9587628865979382;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.015557476231633534;
          result[3] += 0.9844425237683665;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)3.5) ) ) {
          result[0] += 0.16666666666666666;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8333333333333334;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9829096346934416;
          result[1] += 0.0009613330484939116;
          result[2] += 0.0007477034821619312;
          result[3] += 0.015274513992736594;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00010681478316599017;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.21655231560891938;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7439965694682675;
          result[4] += 0.03945111492281304;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9941011235955056;
          result[1] += 0;
          result[2] += 0.0022471910112359553;
          result[3] += 0.0033707865168539327;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002808988764044944;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
          result[0] += 0.35755813953488375;
          result[1] += 0.003875968992248062;
          result[2] += 0.014534883720930232;
          result[3] += 0.624031007751938;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.019130434782608695;
          result[3] += 0.9739130434782609;
          result[4] += 0;
          result[5] += 0.006956521739130435;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
          result[0] += 0.1056782334384858;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8943217665615142;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5844155844155844;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3939393939393939;
          result[4] += 0.012987012987012988;
          result[5] += 0.008658008658008658;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
          result[0] += 0.9978351073425943;
          result[1] += 0.0005412231643514342;
          result[2] += 0.000469060075771243;
          result[3] += 0.0010102832401226772;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00014432617716038246;
        } else {
          result[0] += 0.8483412322274881;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.15165876777251186;
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          result[0] += 0.18837772397094432;
          result[1] += 0.008716707021791767;
          result[2] += 0.026634382566585957;
          result[3] += 0.7757869249394673;
          result[4] += 0;
          result[5] += 0.00048426150121065375;
          result[6] += 0;
        } else {
          result[0] += 0.14433811802232854;
          result[1] += 0.003189792663476874;
          result[2] += 0.003189792663476874;
          result[3] += 0.8492822966507177;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.17697704081632654;
          result[1] += 0;
          result[2] += 0.009247448979591837;
          result[3] += 0.8137755102040817;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9927797833935018;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.007220216606498195;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)93.5) ) ) {
          result[0] += 0.5376175548589341;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.46238244514106586;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9349112426035503;
          result[1] += 0;
          result[2] += 0.004790081713158636;
          result[3] += 0.05409974640743871;
          result[4] += 0.0030994646379261764;
          result[5] += 0.0008453085376162299;
          result[6] += 0.0022541561003099463;
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
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)29) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
          result[0] += 0.25;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.75;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15) ) ) {
          result[0] += 0;
          result[1] += 0.010106681639528355;
          result[2] += 0.003368893879842785;
          result[3] += 0;
          result[4] += 0.9842784952274003;
          result[5] += 0.0022459292532285235;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0012146978439113274;
          result[2] += 0.002125721226844823;
          result[3] += 0.9963559064682661;
          result[4] += 0;
          result[5] += 0.00030367446097783184;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          result[0] += 0.9975034372964758;
          result[1] += 0.0003980027498371807;
          result[2] += 0.0016643751356827557;
          result[3] += 0.0002894565453361314;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001447282726680657;
        } else {
          result[0] += 0.7683397683397684;
          result[1] += 0;
          result[2] += 0.04633204633204633;
          result[3] += 0.18532818532818532;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)27.5) ) ) {
          result[0] += 0;
          result[1] += 0.004;
          result[2] += 0;
          result[3] += 0.996;
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.2747957992998833;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7252042007001167;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)50) ) ) {
          result[0] += 0.022690437601296597;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9773095623987034;
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
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
          result[0] += 0.9845360824742269;
          result[1] += 0;
          result[2] += 0.013402061855670102;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002061855670103093;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.004424778761061947;
          result[3] += 0;
          result[4] += 0.9889380530973452;
          result[5] += 0.00663716814159292;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)24) ) ) {
          result[0] += 0.990234375;
          result[1] += 0;
          result[2] += 0.0078125;
          result[3] += 0.001953125;
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)35) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)37.5) ) ) {
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
          result[4] += 0;
          result[5] += 1;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)94) ) ) {
          result[0] += 0.001579778830963665;
          result[1] += 0.001184834123222749;
          result[2] += 0.001184834123222749;
          result[3] += 0.9948657187993681;
          result[4] += 0;
          result[5] += 0.001184834123222749;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.9908045977011494;
          result[1] += 0;
          result[2] += 0.00842911877394636;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007662835249042146;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
          result[0] += 0.9996519923438316;
          result[1] += 0;
          result[2] += 0.0003480076561684357;
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)1.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)55) ) ) {
          result[0] += 0.6942590120160214;
          result[1] += 0.0014686248331108145;
          result[2] += 0.009479305740987983;
          result[3] += 0.29279038718291056;
          result[4] += 0;
          result[5] += 0.00040053404539385846;
          result[6] += 0.0016021361815754338;
        } else {
          result[0] += 0.0745814307458143;
          result[1] += 0.0167427701674277;
          result[2] += 0.0030441400304414;
          result[3] += 0.9056316590563166;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          result[0] += 0.95509977827051;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04379157427937916;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011086474501108647;
        } else {
          result[0] += 0.49956445993031356;
          result[1] += 0;
          result[2] += 0.00043554006968641115;
          result[3] += 0.5;
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
    

    FILE* file = fopen("./codegen/dataset_148/split_2/test_data.csv", "r");
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
