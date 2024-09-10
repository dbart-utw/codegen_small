
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
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)8.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0.00832517140058766;
          result[1] += 0.009794319294809012;
          result[2] += 0.014691478942213516;
          result[3] += 0.9671890303623898;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.990990990990991;
          result[1] += 0;
          result[2] += 0.009009009009009009;
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
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
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
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)62) ) ) {
          result[0] += 0.9832149158361545;
          result[1] += 0.00038147918554193874;
          result[2] += 0.0005722187783129081;
          result[3] += 0.015736016403604974;
          result[4] += 0;
          result[5] += 0;
          result[6] += 9.536979638548469e-05;
        } else {
          result[0] += 0.6346153846153846;
          result[1] += 0;
          result[2] += 0.36538461538461536;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          result[0] += 0.012162876784769964;
          result[1] += 0.006874669487043892;
          result[2] += 0.010047593865679535;
          result[3] += 0.8958223162347964;
          result[4] += 0.07297726070861978;
          result[5] += 0.0021152829190904283;
          result[6] += 0;
        } else {
          result[0] += 0.9123097286565189;
          result[1] += 0;
          result[2] += 0.0027299801455989417;
          result[3] += 0.08462938451356719;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003309066843150232;
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
          result[2] += 0.012687427912341407;
          result[3] += 0.9873125720876585;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
          result[0] += 0.975452196382429;
          result[1] += 0;
          result[2] += 0.02454780361757106;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.001364256480218281;
          result[3] += 0.9986357435197817;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          result[0] += 0.24746743849493488;
          result[1] += 0.00723589001447178;
          result[2] += 0;
          result[3] += 0.7452966714905933;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.03048780487804878;
          result[1] += 0.018292682926829267;
          result[2] += 0.01097560975609756;
          result[3] += 0.9402439024390243;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-16) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)32.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9994111296496221;
          result[1] += 0;
          result[2] += 0.0004907252919815488;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 9.814505839630975e-05;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
          result[0] += 0.0011976047904191617;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9976047904191617;
          result[5] += 0.0011976047904191617;
          result[6] += 0;
        } else {
          result[0] += 0.4107485604606526;
          result[1] += 0.0014075495841330773;
          result[2] += 0.011132437619961612;
          result[3] += 0.5753039027511196;
          result[4] += 0;
          result[5] += 0.0007677543186180423;
          result[6] += 0.0006397952655150352;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.8774120317820658;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.12258796821793416;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9901649746192893;
          result[1] += 0;
          result[2] += 0.006345177664974619;
          result[3] += 0.0028553299492385786;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006345177664974619;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)125.5) ) ) {
          result[0] += 0.010830324909747292;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.06498194945848375;
          result[4] += 0.924187725631769;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0425531914893617;
          result[1] += 0.14893617021276595;
          result[2] += 0;
          result[3] += 0.3404255319148936;
          result[4] += 0.46808510638297873;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9994385176866929;
          result[4] += 0.0005614823133071309;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9648351648351648;
          result[1] += 0.015384615384615385;
          result[2] += 0.01978021978021978;
          result[3] += 0;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.06060606060606061;
          result[1] += 0;
          result[2] += 0.03896103896103896;
          result[3] += 0.9004329004329005;
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
          result[0] += 0.9979987264622943;
          result[1] += 0;
          result[2] += 0.0019103065587191851;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 9.096697898662787e-05;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-136) ) ) {
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.8795417934490782;
          result[1] += 0.003400751745122606;
          result[2] += 0.001968856273492035;
          result[3] += 0.1147306246643995;
          result[4] += 0;
          result[5] += 0.00017898693395382138;
          result[6] += 0.00017898693395382138;
        } else {
          result[0] += 0.38982437081296395;
          result[1] += 0;
          result[2] += 0.009053050878145934;
          result[3] += 0.543545174723882;
          result[4] += 0.056491037479630635;
          result[5] += 0.0001810610175629187;
          result[6] += 0.0009053050878145935;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9943609022556391;
          result[5] += 0.005639097744360902;
          result[6] += 0;
        } else {
          result[0] += 0.027138157894736847;
          result[1] += 0;
          result[2] += 0.0180921052631579;
          result[3] += 0.9523026315789475;
          result[4] += 0;
          result[5] += 0.002467105263157895;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
          result[0] += 0.6666666666666666;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3333333333333333;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
          result[0] += 0.0743862220593624;
          result[1] += 0.005130084279956028;
          result[2] += 0.003664345914254306;
          result[3] += 0.9160864785635764;
          result[4] += 0;
          result[5] += 0.0007328691828508611;
          result[6] += 0;
        } else {
          result[0] += 0.4680105170902717;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5319894829097284;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
          result[0] += 0.9983391703072535;
          result[1] += 0.00025273495324403363;
          result[2] += 0.0010831497996172871;
          result[3] += 7.220998664115247e-05;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00025273495324403363;
        } else {
          result[0] += 0.7561728395061729;
          result[1] += 0;
          result[2] += 0.08950617283950617;
          result[3] += 0.15432098765432098;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)27.5) ) ) {
          result[0] += 0;
          result[1] += 0.006734006734006734;
          result[2] += 0;
          result[3] += 0.9932659932659933;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.38461538461538464;
          result[1] += 0.5384615384615384;
          result[2] += 0;
          result[3] += 0.07692307692307693;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)95.5) ) ) {
          result[0] += 0.40728476821192056;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5927152317880795;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.2661596958174905;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7338403041825095;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
          result[0] += 0.2165470662726889;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7834529337273111;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)23) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9645390070921986;
          result[1] += 0;
          result[2] += 0.031028368794326244;
          result[3] += 0.0026595744680851068;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001773049645390071;
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
          result[2] += 0.004524886877828055;
          result[3] += 0;
          result[4] += 0.9879336349924586;
          result[5] += 0.007541478129713424;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)83) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)33.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          result[0] += 0.9954591321897074;
          result[1] += 0;
          result[2] += 0.0030272452068617556;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0015136226034308778;
        } else {
          result[0] += 0.999494779386999;
          result[1] += 0;
          result[2] += 0.0005052206130010104;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)217) ) ) {
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
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)89.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          result[0] += 0.01178781925343811;
          result[1] += 0;
          result[2] += 0.02095612311722331;
          result[3] += 0.7773411918795021;
          result[4] += 0.18860510805500977;
          result[5] += 0.001309757694826457;
          result[6] += 0;
        } else {
          result[0] += 0.730889799855317;
          result[1] += 0;
          result[2] += 0.0026525198938992037;
          result[3] += 0.266216542078611;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00024113817217265488;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0.1644295302013423;
          result[1] += 0.015100671140939598;
          result[2] += 0;
          result[3] += 0.6879194630872483;
          result[4] += 0.1325503355704698;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0025974025974025974;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.21818181818181817;
          result[4] += 0.7792207792207793;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          result[0] += 0.0005810575246949448;
          result[1] += 0.013945380592678676;
          result[2] += 0.01220220801859384;
          result[3] += 0.9453805926786751;
          result[4] += 0.027309703660662404;
          result[5] += 0.0005810575246949448;
          result[6] += 0;
        } else {
          result[0] += 0.994951316263974;
          result[1] += 0.000721240533717995;
          result[2] += 0.0025243418680129825;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0018031013342949874;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.5572653884964682;
          result[1] += 0;
          result[2] += 0.009838546922300706;
          result[3] += 0.13269424823410697;
          result[4] += 0.3002018163471241;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.00129366106080207;
          result[3] += 0.7619663648124192;
          result[4] += 0.2363087537731781;
          result[5] += 0.00043122035360068997;
          result[6] += 0;
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
