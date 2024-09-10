
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
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)76.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
          result[0] += 0.9905027932960894;
          result[1] += 0.0003192338387869114;
          result[2] += 0.0007980845969672786;
          result[3] += 0.008140462889066242;
          result[4] += 3.990422984836392e-05;
          result[5] += 0;
          result[6] += 0.00019952114924181964;
        } else {
          result[0] += 0.0034129692832764505;
          result[1] += 0.030716723549488054;
          result[2] += 0;
          result[3] += 0.9453924914675768;
          result[4] += 0.017064846416382253;
          result[5] += 0.0034129692832764505;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)31) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.99768875192604;
          result[4] += 0;
          result[5] += 0.0023112480739599386;
          result[6] += 0;
        } else {
          result[0] += 0.9946371111905613;
          result[1] += 0;
          result[2] += 0.003575259206292456;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001787629603146228;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0.3274170948155068;
          result[1] += 0.004203643157403083;
          result[2] += 0.012143858010275572;
          result[3] += 0.6562354040168146;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6733167082294265;
          result[1] += 0;
          result[2] += 0.06982543640897755;
          result[3] += 0.12468827930174564;
          result[4] += 0.13216957605985039;
          result[5] += 0;
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
          result[0] += 0.0007751937984496124;
          result[1] += 0.010077519379844961;
          result[2] += 0;
          result[3] += 0.24031007751937986;
          result[4] += 0.7488372093023256;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)102.5) ) ) {
          result[0] += 0.16022696568495;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.83977303431505;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.4731182795698925;
          result[1] += 0;
          result[2] += 0.3655913978494624;
          result[3] += 0;
          result[4] += 0.053763440860215055;
          result[5] += 0.10752688172043011;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
          result[0] += 0.625;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.375;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9965979587752651;
          result[1] += 0;
          result[2] += 0.003001801080648389;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00040024014408645187;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-118) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.061224489795918366;
          result[3] += 0;
          result[4] += 0.9387755102040817;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)54) ) ) {
          result[0] += 0;
          result[1] += 0.00274390243902439;
          result[2] += 0.00274390243902439;
          result[3] += 0.9932926829268293;
          result[4] += 0;
          result[5] += 0.0012195121951219512;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          result[0] += 0.9748549323017408;
          result[1] += 0;
          result[2] += 0.017408123791102514;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.007736943907156673;
        } else {
          result[0] += 0.9990479428765726;
          result[1] += 0;
          result[2] += 0.0009520571234274056;
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
          result[0] += 0.9997759856630825;
          result[1] += 0;
          result[2] += 0.00022401433691756272;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          result[0] += 0;
          result[1] += 0.07323943661971831;
          result[2] += 0.056338028169014086;
          result[3] += 0.8704225352112676;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9955172413793103;
          result[1] += 0;
          result[2] += 0.003793103448275862;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000689655172413793;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
          result[0] += 0.003155680224403927;
          result[1] += 0;
          result[2] += 0.0070126227208976155;
          result[3] += 0.9898316970546984;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8479351601698186;
          result[1] += 0;
          result[2] += 0.007719027402547279;
          result[3] += 0.1401003473562331;
          result[4] += 0;
          result[5] += 0.0011578541103820917;
          result[6] += 0.0030876109610189118;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-16) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)204) ) ) {
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9927385892116183;
          result[1] += 0;
          result[2] += 0.007261410788381743;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9995043896913056;
          result[1] += 0;
          result[2] += 0.0004956103086944209;
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
          result[0] += 0.3196687370600414;
          result[1] += 0.002484472049689441;
          result[2] += 0.007867494824016562;
          result[3] += 0.6687370600414079;
          result[4] += 0.0012422360248447205;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7970243266724587;
          result[1] += 0.0007602085143353606;
          result[2] += 0.007602085143353606;
          result[3] += 0.18766290182450043;
          result[4] += 0.006081668114682885;
          result[5] += 0.0004344048653344917;
          result[6] += 0.0004344048653344917;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)101) ) ) {
          result[0] += 0;
          result[1] += 0.0019255455712451862;
          result[2] += 0;
          result[3] += 0.9977535301668806;
          result[4] += 0;
          result[5] += 0.00032092426187419767;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.04393939393939394;
          result[3] += 0;
          result[4] += 0.956060606060606;
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
          result[0] += 0.4;
          result[1] += 0.6;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          result[0] += 0.26411960132890366;
          result[1] += 0;
          result[2] += 0.014950166112956811;
          result[3] += 0.7209302325581395;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6213592233009708;
          result[1] += 0;
          result[2] += 0.010787486515641856;
          result[3] += 0.36785329018338725;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
          result[0] += 0;
          result[1] += 0.01313755795981453;
          result[2] += 0;
          result[3] += 0.9868624420401855;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9356435643564357;
          result[1] += 0;
          result[2] += 0.06435643564356436;
          result[3] += 0;
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
          result[0] += 0.9982687927107061;
          result[1] += 0;
          result[2] += 0.001366742596810934;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00036446469248291574;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.6401739818109926;
          result[1] += 0.001977066034005536;
          result[2] += 0.007512850929221037;
          result[3] += 0.32226176354290237;
          result[4] += 0.026690391459074737;
          result[5] += 0.000988533017002768;
          result[6] += 0.0003954132068011072;
        } else {
          result[0] += 0;
          result[1] += 0.0010655301012253596;
          result[2] += 0.007192328183271177;
          result[3] += 0.7972828982418754;
          result[4] += 0.19392647842301544;
          result[5] += 0.0005327650506126798;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)36) ) ) {
          result[0] += 0.9942928039702233;
          result[1] += 0;
          result[2] += 0.004714640198511167;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009925558312655087;
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
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)80.5) ) ) {
          result[0] += 0.6126951799049559;
          result[1] += 0;
          result[2] += 0.005770536320434488;
          result[3] += 0.38051595383570946;
          result[4] += 0.0010183299389002036;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5244279529993816;
          result[1] += 0;
          result[2] += 0.012987012987012988;
          result[3] += 0.3067408781694496;
          result[4] += 0.15584415584415584;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
          result[0] += 0.8756441419543024;
          result[1] += 0.0007454221357964673;
          result[2] += 0.0016853022200615784;
          result[3] += 0.12088802463134014;
          result[4] += 0.00045373521309350186;
          result[5] += 0.0001296386323124291;
          result[6] += 0.00045373521309350186;
        } else {
          result[0] += 0.9941093308199811;
          result[1] += 0;
          result[2] += 0.00589066918001885;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
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
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)109.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.2559880239520958;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7440119760479041;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
          result[0] += 0.014084507042253521;
          result[1] += 0.03755868544600939;
          result[2] += 0;
          result[3] += 0.28169014084507044;
          result[4] += 0.6666666666666666;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.012987012987012988;
          result[4] += 0.987012987012987;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
          result[0] += 0;
          result[1] += 0.0051813471502590676;
          result[2] += 0;
          result[3] += 0.046632124352331605;
          result[4] += 0.9481865284974094;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.1286549707602339;
          result[1] += 0.021929824561403508;
          result[2] += 0;
          result[3] += 0.8494152046783626;
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
          result[0] += 0.08928571428571429;
          result[1] += 0;
          result[2] += 0.023809523809523808;
          result[3] += 0.8869047619047619;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)8.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
          result[0] += 0.3506637168141593;
          result[1] += 0.0022123893805309734;
          result[2] += 0.006268436578171091;
          result[3] += 0.6397492625368731;
          result[4] += 0.0011061946902654867;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0020942408376963353;
          result[1] += 0;
          result[2] += 0.010471204188481676;
          result[3] += 0.16230366492146597;
          result[4] += 0.8251308900523561;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)106) ) ) {
          result[0] += 0.011235955056179775;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9887640449438202;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.016556291390728478;
          result[1] += 0.016556291390728478;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9668874172185431;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          result[0] += 0.9831144465290806;
          result[1] += 0;
          result[2] += 0.0150093808630394;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001876172607879925;
        } else {
          result[0] += 0.9968573224387178;
          result[1] += 0;
          result[2] += 0.0031426775612822125;
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
          result[0] += 0.9992086259768523;
          result[1] += 0;
          result[2] += 0.0007913740231476902;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          result[0] += 0.03997715591090805;
          result[1] += 0.004568817818389492;
          result[2] += 0.011993146773272416;
          result[3] += 0.8623643632210166;
          result[4] += 0.07766990291262135;
          result[5] += 0.0034266133637921186;
          result[6] += 0;
        } else {
          result[0] += 0.9830315129046059;
          result[1] += 0;
          result[2] += 0.004848139170112649;
          result[3] += 0.011407386282617997;
          result[4] += 0;
          result[5] += 0.0002851846570654499;
          result[6] += 0.0004277769855981749;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)21) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.025147928994082844;
          result[3] += 0;
          result[4] += 0.9733727810650888;
          result[5] += 0.0014792899408284025;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0019261637239165329;
          result[2] += 0.007383627608346709;
          result[3] += 0.9906902086677367;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)83) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
          result[0] += 0.9944382647385984;
          result[1] += 0;
          result[2] += 0.0055617352614015575;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9770114942528736;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.022988505747126436;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)34.5) ) ) {
          result[0] += 0.9991586538461539;
          result[1] += 0;
          result[2] += 0.0008413461538461539;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9999372095943739;
          result[1] += 0;
          result[2] += 6.279040562602035e-05;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
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
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          result[0] += 0.9147210616859179;
          result[1] += 0.001597444089456869;
          result[2] += 0.0035635291226345537;
          result[3] += 0.07852052101253379;
          result[4] += 0;
          result[5] += 0.0008601622020152371;
          result[6] += 0.0007372818874416319;
        } else {
          result[0] += 0.1699402220324509;
          result[1] += 0;
          result[2] += 0.01964133219470538;
          result[3] += 0.7028181041844578;
          result[4] += 0.1063193851409052;
          result[5] += 0.0012809564474807857;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)19.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.016717325227963525;
          result[3] += 0;
          result[4] += 0.9787234042553191;
          result[5] += 0.004559270516717325;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0016056518946692357;
          result[2] += 0.005459216441875401;
          result[3] += 0.9929351316634554;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)109) ) ) {
          result[0] += 0.0375;
          result[1] += 0.0375;
          result[2] += 0;
          result[3] += 0.925;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0014064697609001407;
          result[1] += 0.004219409282700422;
          result[2] += 0;
          result[3] += 0.0028129395218002813;
          result[4] += 0.9915611814345991;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
          result[0] += 0.19129193433261957;
          result[1] += 0.004996431120628123;
          result[2] += 0.007137758743754461;
          result[3] += 0.7965738758029979;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.09975961538461539;
          result[4] += 0.9002403846153846;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-25.5) ) ) {
          result[0] += 0.8;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.08647083160943318;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.896979726934216;
          result[4] += 0.015721969383533305;
          result[5] += 0.0008274720728175424;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
          result[0] += 0;
          result[1] += 0.0008210180623973727;
          result[2] += 0;
          result[3] += 0.825944170771757;
          result[4] += 0.1724137931034483;
          result[5] += 0.0008210180623973727;
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
          result[0] += 0.8235294117647058;
          result[1] += 0.17647058823529413;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)84.5) ) ) {
          result[0] += 0.09190672153635117;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9080932784636488;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.01454775458570525;
          result[3] += 0;
          result[4] += 0.9822896900695762;
          result[5] += 0.0031625553447185324;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9791666666666667;
          result[1] += 0;
          result[2] += 0.014583333333333335;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.006250000000000001;
        } else {
          result[0] += 0.9993288590604027;
          result[1] += 0;
          result[2] += 0.0006711409395973154;
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
          result[0] += 0.9988403963736032;
          result[1] += 0;
          result[2] += 0.0011596036263967953;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          result[0] += 0.09104046242774566;
          result[1] += 0.03468208092485549;
          result[2] += 0.03757225433526012;
          result[3] += 0.8367052023121387;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.984487465872425;
          result[1] += 0.00012410027302060066;
          result[2] += 0.0035989079175974188;
          result[3] += 0.010300322660709854;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0014892032762472078;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
          result[0] += 0;
          result[1] += 0.001774937877174299;
          result[2] += 0;
          result[3] += 0.9982250621228257;
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
          result[1] += 0.0021334958854007926;
          result[2] += 0.0051813471502590676;
          result[3] += 0.9914660164583968;
          result[4] += 0;
          result[5] += 0.0012191405059433099;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
          result[0] += 0.974757281553398;
          result[1] += 0;
          result[2] += 0.017475728155339806;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.007766990291262136;
        } else {
          result[0] += 0.9986004198740378;
          result[1] += 0;
          result[2] += 0.0013995801259622112;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9944819129368485;
          result[1] += 0;
          result[2] += 0.005518087063151441;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9997268381516048;
          result[1] += 0;
          result[2] += 0.00027316184839517416;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91) ) ) {
          result[0] += 0.9905693950177936;
          result[1] += 0.002491103202846975;
          result[2] += 0.005516014234875445;
          result[3] += 0.0008896797153024911;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005338078291814947;
        } else {
          result[0] += 0.33544303797468356;
          result[1] += 0.023206751054852322;
          result[2] += 0;
          result[3] += 0.6413502109704642;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
          result[0] += 0.006036931818181818;
          result[1] += 0;
          result[2] += 0.004261363636363636;
          result[3] += 0.9897017045454546;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8552732871439569;
          result[1] += 0;
          result[2] += 0.006928406466512702;
          result[3] += 0.13471901462663588;
          result[4] += 0;
          result[5] += 0.00038491147036181676;
          result[6] += 0.0026943802925327174;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0.9880952380952381;
          result[1] += 0;
          result[2] += 0.011904761904761904;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9428571428571428;
          result[1] += 0;
          result[2] += 0.05238095238095238;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.004761904761904762;
        }
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          result[0] += 0.9982074263764404;
          result[1] += 0;
          result[2] += 0.001792573623559539;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9996783014315587;
          result[1] += 0;
          result[2] += 0.00032169856844137045;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.024322830292979547;
          result[1] += 0.008568269762299612;
          result[2] += 0.00552791597567717;
          result[3] += 0.960751796572692;
          result[4] += 0;
          result[5] += 0.0008291873963515755;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0015128593040847202;
          result[3] += 0;
          result[4] += 0.9984871406959153;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.025333947489636112;
          result[3] += 0.2597881160755412;
          result[4] += 0.7144173192077383;
          result[5] += 0.00046061722708429296;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
          result[0] += 0.9984603541185527;
          result[1] += 0;
          result[2] += 0.0011547344110854503;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00038491147036181676;
        } else {
          result[0] += 0.33286985539488323;
          result[1] += 0;
          result[2] += 0.004171301446051168;
          result[3] += 0.6618464961067854;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011123470522803114;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)27) ) ) {
          result[0] += 0.9799283154121864;
          result[1] += 0.00023894862604540023;
          result[2] += 0.0052568697729988055;
          result[3] += 0.013859020310633213;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007168458781362007;
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
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)50.5) ) ) {
          result[0] += 0.9838074753459681;
          result[1] += 0.0009739864453553022;
          result[2] += 0.0009334036767988312;
          result[3] += 0.013838724077756584;
          result[4] += 0.00012174830566941277;
          result[5] += 0.0001623310742258837;
          result[6] += 0.0001623310742258837;
        } else {
          result[0] += 0.898320895522388;
          result[1] += 0;
          result[2] += 0.0013992537313432835;
          result[3] += 0.0986473880597015;
          result[4] += 0;
          result[5] += 0.0002332089552238806;
          result[6] += 0.0013992537313432835;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          result[0] += 0.2007017543859649;
          result[1] += 0;
          result[2] += 0.02526315789473684;
          result[3] += 0.655438596491228;
          result[4] += 0.11789473684210526;
          result[5] += 0.0007017543859649122;
          result[6] += 0;
        } else {
          result[0] += 0.14737991266375547;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7445414847161572;
          result[4] += 0.10807860262008734;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          result[0] += 0.3571042679632631;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6428957320367369;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8039772727272725;
          result[1] += 0;
          result[2] += 0.04071969696969696;
          result[3] += 0;
          result[4] += 0.1496212121212121;
          result[5] += 0.0018939393939393936;
          result[6] += 0.003787878787878787;
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
          result[0] += 0.36353651839648543;
          result[1] += 0;
          result[2] += 0.002471169686985173;
          result[3] += 0.499725425590335;
          result[4] += 0.1342668863261944;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-19) ) ) {
          result[0] += 0.18282988871224165;
          result[1] += 0.02702702702702703;
          result[2] += 0;
          result[3] += 0.7901430842607313;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.10141509433962265;
          result[1] += 0;
          result[2] += 0.009433962264150943;
          result[3] += 0.8891509433962265;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          result[0] += 0.9857881136950905;
          result[1] += 0;
          result[2] += 0.014211886304909561;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6140350877192983;
          result[1] += 0;
          result[2] += 0.3684210526315789;
          result[3] += 0.017543859649122806;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          result[0] += 0.1366120218579235;
          result[1] += 0.012750455373406194;
          result[2] += 0.0018214936247723133;
          result[3] += 0.848816029143898;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.001890359168241966;
          result[1] += 0.012287334593572778;
          result[2] += 0;
          result[3] += 0.9858223062381852;
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
          result[0] += 0.23843416370106763;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7603795966785291;
          result[4] += 0.0011862396204033216;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9973227206946454;
          result[1] += 0.0007959479015918958;
          result[2] += 0.0009044862518089725;
          result[3] += 0.0008683068017366136;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001085383502170767;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9949849548645938;
          result[4] += 0.003009027081243731;
          result[5] += 0.0020060180541624875;
          result[6] += 0;
        } else {
          result[0] += 0.13440860215053763;
          result[1] += 0;
          result[2] += 0.16129032258064516;
          result[3] += 0;
          result[4] += 0.6989247311827957;
          result[5] += 0.005376344086021506;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9949731903485255;
          result[4] += 0.003351206434316354;
          result[5] += 0.001675603217158177;
          result[6] += 0;
        } else {
          result[0] += 0.47236551215917466;
          result[1] += 0;
          result[2] += 0.021370670596904937;
          result[3] += 0;
          result[4] += 0.5062638172439204;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
          result[0] += 0.6785714285714286;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.32142857142857145;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9951189749847469;
          result[1] += 0;
          result[2] += 0.00447427293064877;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00040675208460443367;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9985795454545454;
          result[5] += 0.0014204545454545455;
          result[6] += 0;
        } else {
          result[0] += 0.7820773930753564;
          result[1] += 0;
          result[2] += 0.002036659877800407;
          result[3] += 0.2158859470468432;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)50) ) ) {
          result[0] += 0;
          result[1] += 0.0006932409012131716;
          result[2] += 0.0027729636048526864;
          result[3] += 0.9760831889081456;
          result[4] += 0.017677642980935875;
          result[5] += 0.0027729636048526864;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9230769230769231;
          result[3] += 0;
          result[4] += 0.07692307692307693;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0.04954954954954955;
          result[2] += 0;
          result[3] += 0.04954954954954955;
          result[4] += 0.9009009009009009;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)77.5) ) ) {
          result[0] += 0.9984269662921349;
          result[1] += 0.0004494382022471911;
          result[2] += 0.0009363295880149814;
          result[3] += 7.490636704119852e-05;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00011235955056179777;
        } else {
          result[0] += 0.9505347593582888;
          result[1] += 0;
          result[2] += 0.0481283422459893;
          result[3] += 0.001336898395721925;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
          result[0] += 0.3825503355704698;
          result[1] += 0.026845637583892617;
          result[2] += 0;
          result[3] += 0.5906040268456376;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.06451612903225806;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9354838709677419;
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
          result[2] += 0.006150061500615006;
          result[3] += 0.9932349323493235;
          result[4] += 0;
          result[5] += 0.0006150061500615006;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)68.5) ) ) {
          result[0] += 0.9980035492457853;
          result[1] += 0;
          result[2] += 0.0013309671694764862;
          result[3] += 0.0006654835847382431;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9663120567375887;
          result[1] += 0;
          result[2] += 0.030141843971631204;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0035460992907801418;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9920091324200914;
          result[1] += 0;
          result[2] += 0.007990867579908675;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
          result[0] += 0.9497716894977168;
          result[1] += 0;
          result[2] += 0.0502283105022831;
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)6504) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9963898916967509;
          result[1] += 0;
          result[2] += 0.0036101083032490976;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9998320245244194;
          result[1] += 0;
          result[2] += 0.00016797547558056525;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)13.5) ) ) {
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          result[0] += 0.0050335570469798654;
          result[1] += 0.015100671140939598;
          result[2] += 0;
          result[3] += 0.9731543624161074;
          result[4] += 0;
          result[5] += 0.006711409395973154;
          result[6] += 0;
        } else {
          result[0] += 0.9837253829321663;
          result[1] += 0;
          result[2] += 0.0028719912472647702;
          result[3] += 0.01162472647702407;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0017778993435448578;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0.16230512249443207;
          result[1] += 0.005846325167037862;
          result[2] += 0.005289532293986637;
          result[3] += 0.7438752783964365;
          result[4] += 0.08240534521158129;
          result[5] += 0.00027839643652561246;
          result[6] += 0;
        } else {
          result[0] += 0.02280790674100355;
          result[1] += 0;
          result[2] += 0.01419158641662443;
          result[3] += 0.16016218955904712;
          result[4] += 0.8028383172833249;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)103.5) ) ) {
          result[0] += 0;
          result[1] += 0.0025948751216347712;
          result[2] += 0;
          result[3] += 0.9974051248783652;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.48;
          result[3] += 0;
          result[4] += 0.36;
          result[5] += 0.16;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0014044943820224719;
          result[3] += 0;
          result[4] += 0.9985955056179775;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.08971553610503283;
          result[1] += 0.007658643326039387;
          result[2] += 0;
          result[3] += 0.9026258205689278;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          result[0] += 0.004405286343612335;
          result[1] += 0.0052863436123348016;
          result[2] += 0.021145374449339206;
          result[3] += 0.9674008810572687;
          result[4] += 0.001762114537444934;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9774696707105719;
          result[1] += 0.0017331022530329288;
          result[2] += 0.010398613518197574;
          result[3] += 0.010398613518197574;
          result[4] += 0;
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
          result[0] += 0;
          result[1] += 0.01680672268907563;
          result[2] += 0;
          result[3] += 0.9831932773109243;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
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
          result[2] += 0.017119244391971666;
          result[3] += 0.9025974025974026;
          result[4] += 0.07910271546635184;
          result[5] += 0.0011806375442739079;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 0.9992683020757115;
          result[1] += 0;
          result[2] += 0.0006161666730850695;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00011553125120345054;
        } else {
          result[0] += 0.6832346374138433;
          result[1] += 0.001553247257547811;
          result[2] += 0.0050480535870303855;
          result[3] += 0.30851373653043396;
          result[4] += 0;
          result[5] += 0.00019415590719347637;
          result[6] += 0.0014561693039510726;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-81) ) ) {
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
          result[2] += 0.005263157894736842;
          result[3] += 0;
          result[4] += 0.9947368421052631;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)20.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9;
          result[3] += 0;
          result[4] += 0.1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.00727802037845706;
          result[3] += 0;
          result[4] += 0.9898107714701602;
          result[5] += 0.002911208151382824;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.9875739934445478;
          result[1] += 4.892128565138692e-05;
          result[2] += 0.0006359767134680299;
          result[3] += 0.0115943446993787;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00014676385695416077;
        } else {
          result[0] += 0.8847858197932054;
          result[1] += 0;
          result[2] += 0.0014771048744460858;
          result[3] += 0.1137370753323486;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.934688995215311;
          result[1] += 0.001076555023923445;
          result[2] += 0.001076555023923445;
          result[3] += 0.06244019138755981;
          result[4] += 0;
          result[5] += 0.00011961722488038278;
          result[6] += 0.0005980861244019139;
        } else {
          result[0] += 0.6356559469116896;
          result[1] += 0;
          result[2] += 0.002679938744257274;
          result[3] += 0.3605155691679428;
          result[4] += 0;
          result[5] += 0.00025523226135783564;
          result[6] += 0.0008933129147524247;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0.1729064039408867;
          result[1] += 0;
          result[2] += 0.013793103448275862;
          result[3] += 0.8118226600985222;
          result[4] += 0.001477832512315271;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.1721132897603486;
          result[1] += 0;
          result[2] += 0.05664488017429194;
          result[3] += 0.20043572984749455;
          result[4] += 0.5642701525054467;
          result[5] += 0.006535947712418301;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.34718100890207715;
          result[1] += 0;
          result[2] += 0.020771513353115726;
          result[3] += 0.6320474777448071;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.13721973094170403;
          result[1] += 0.008968609865470852;
          result[2] += 0;
          result[3] += 0.8538116591928251;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)102) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1487) ) ) {
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.047619047619047616;
          result[1] += 0.7619047619047619;
          result[2] += 0;
          result[3] += 0.19047619047619047;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.039589442815249266;
          result[3] += 0.9398826979472141;
          result[4] += 0.020527859237536656;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.20617864338482203;
          result[1] += 0.0047011417058428475;
          result[2] += 0.0033579583613163196;
          result[3] += 0.7857622565480188;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
          result[0] += 0.027777777777777776;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9722222222222222;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0041841004184100415;
          result[1] += 0.02510460251046025;
          result[2] += 0;
          result[3] += 0.006276150627615063;
          result[4] += 0.9644351464435147;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9920337394564199;
          result[1] += 0;
          result[2] += 0.007029053420805999;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009372071227741332;
        } else {
          result[0] += 0.9998337282287899;
          result[1] += 0;
          result[2] += 0.0001662717712100428;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
          result[0] += 0.8794570135746604;
          result[1] += 0.0034389140271493205;
          result[2] += 0.0016289592760180991;
          result[3] += 0.11420814479638006;
          result[4] += 0;
          result[5] += 0.0003619909502262443;
          result[6] += 0.0009049773755656107;
        } else {
          result[0] += 0.013731825525040387;
          result[1] += 0;
          result[2] += 0.018578352180936994;
          result[3] += 0.8715670436187399;
          result[4] += 0.09531502423263329;
          result[5] += 0.0008077544426494346;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          result[0] += 0.016958424507658644;
          result[1] += 0;
          result[2] += 0.011214442013129104;
          result[3] += 0.7926695842450766;
          result[4] += 0.17915754923413565;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.902459711620017;
          result[1] += 0;
          result[2] += 0.008481764206955048;
          result[3] += 0.08142493638676847;
          result[4] += 0.0038167938931297713;
          result[5] += 0.0016963528413910095;
          result[6] += 0.002120441051738762;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.02724177071509648;
          result[3] += 0.9727582292849035;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.986284289276808;
          result[1] += 0;
          result[2] += 0.00997506234413965;
          result[3] += 0.003740648379052369;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-11) ) ) {
          result[0] += 0.16511194029850745;
          result[1] += 0.014925373134328358;
          result[2] += 0;
          result[3] += 0.8199626865671642;
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
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0013166556945358788;
          result[1] += 0.0006583278472679394;
          result[2] += 0;
          result[3] += 0.9934167215273206;
          result[4] += 0.0032916392363396972;
          result[5] += 0.0013166556945358788;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-33) ) ) {
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
          result[2] += 0.015815085158150853;
          result[3] += 0;
          result[4] += 0.9829683698296837;
          result[5] += 0.0012165450121654502;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          result[0] += 0.9850855745721272;
          result[1] += 0.0015484922575387124;
          result[2] += 0.0023634881825590876;
          result[3] += 0.010350448247758763;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006519967400163;
        } else {
          result[0] += 0.9990158771814722;
          result[1] += 0;
          result[2] += 0.0008529064427240519;
          result[3] += 0.0001312163758037003;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.17717161016949154;
          result[1] += 0;
          result[2] += 0.00423728813559322;
          result[3] += 0.8172669491525424;
          result[4] += 0;
          result[5] += 0.0013241525423728813;
          result[6] += 0;
        } else {
          result[0] += 0.9946257961783439;
          result[1] += 0;
          result[2] += 0.0031847133757961785;
          result[3] += 0.001393312101910828;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007961783439490446;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9888888888888889;
          result[1] += 0;
          result[2] += 0.011111111111111112;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
          result[0] += 0.014029180695847365;
          result[1] += 0;
          result[2] += 0.020202020202020207;
          result[3] += 0.8535353535353536;
          result[4] += 0.10774410774410775;
          result[5] += 0.004489337822671157;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0109717868338558;
          result[2] += 0;
          result[3] += 0.25705329153605017;
          result[4] += 0.731974921630094;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 0.5836190476190476;
          result[1] += 0;
          result[2] += 0.002285714285714286;
          result[3] += 0.4137142857142857;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00038095238095238096;
        } else {
          result[0] += 0.9800257731958764;
          result[1] += 0;
          result[2] += 0.00966494845360825;
          result[3] += 0.009020618556701032;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0012886597938144332;
        }
      }
    }
  } else {
    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-8.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)84.5) ) ) {
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
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)9.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.08590441621294616;
          result[1] += 0.0012099213551119178;
          result[2] += 0.004839685420447671;
          result[3] += 0.9044162129461585;
          result[4] += 0;
          result[5] += 0.003629764065335753;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
          result[0] += 0.968858490077206;
          result[1] += 0.0011399554381056013;
          result[2] += 0.003160785532929167;
          result[3] += 0.026685320482926576;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000155448468832582;
        } else {
          result[0] += 0.6866710875331565;
          result[1] += 0;
          result[2] += 0.0016578249336870027;
          result[3] += 0.3116710875331565;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)82.5) ) ) {
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
          result[0] += 0.001962708537782139;
          result[1] += 0.0004906771344455348;
          result[2] += 0;
          result[3] += 0.9901864573110893;
          result[4] += 0.003925417075564278;
          result[5] += 0.0034347399411187437;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)26) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8;
          result[3] += 0;
          result[4] += 0.2;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.024531024531024532;
          result[3] += 0;
          result[4] += 0.9711399711399712;
          result[5] += 0.004329004329004329;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)17) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.00333889816360601;
          result[2] += 0;
          result[3] += 0.996661101836394;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-3.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)8) ) ) {
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
          result[2] += 0.006472491909385114;
          result[3] += 0.9870550161812298;
          result[4] += 0;
          result[5] += 0.006472491909385114;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)47) ) ) {
          result[0] += 0;
          result[1] += 0.005628517823639775;
          result[2] += 0.00375234521575985;
          result[3] += 0.9906191369606003;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          result[0] += 0.9950364117242129;
          result[1] += 0.0002173834281366617;
          result[2] += 0.0029709068512010434;
          result[3] += 0.001521683996956632;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000253613999492772;
        } else {
          result[0] += 0.0975609756097561;
          result[1] += 0.21951219512195122;
          result[2] += 0;
          result[3] += 0.6829268292682927;
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
          result[0] += 0.401378782075833;
          result[1] += 0;
          result[2] += 0.005936422826503256;
          result[3] += 0.5919188050555343;
          result[4] += 0;
          result[5] += 0.00019149751053236308;
          result[6] += 0.0005744925315970893;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)112) ) ) {
          result[0] += 0.0009236453201970443;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9966133004926109;
          result[4] += 0.0009236453201970443;
          result[5] += 0.001539408866995074;
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
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
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
          result[2] += 0.9285714285714286;
          result[3] += 0;
          result[4] += 0.07142857142857142;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0.175;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.825;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.010237319683573755;
          result[3] += 0;
          result[4] += 0.9892973476035365;
          result[5] += 0.00046533271288971617;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
          result[0] += 0.9971433737118062;
          result[1] += 0.0004700777436268306;
          result[2] += 0.002097269933104321;
          result[3] += 0.00010847947929849937;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001807991321641656;
        } else {
          result[0] += 0.7149122807017544;
          result[1] += 0;
          result[2] += 0.07456140350877193;
          result[3] += 0.21052631578947367;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          result[0] += 0.2631578947368421;
          result[1] += 0.7368421052631579;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
          result[0] += 0.9386401326699834;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.06135986733001658;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.01547694251421352;
          result[1] += 0;
          result[2] += 0.003790271636133923;
          result[3] += 0.9807327858496525;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)311.5) ) ) {
          result[0] += 0.9945323179066589;
          result[1] += 0;
          result[2] += 0.003124389767623511;
          result[3] += 0.002148017965241164;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00019527436047646945;
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
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)107) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0041183077499064025;
          result[3] += 0.6615499812804193;
          result[4] += 0.3343317109696743;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0006779661016949154;
          result[1] += 0.0006779661016949154;
          result[2] += 0;
          result[3] += 0.9803389830508475;
          result[4] += 0.014915254237288138;
          result[5] += 0.0033898305084745766;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3695652173913043;
          result[4] += 0.6304347826086957;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.009009009009009009;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.990990990990991;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)11) ) ) {
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
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0015527950310559005;
          result[3] += 0;
          result[4] += 0.9984472049689441;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-101) ) ) {
          result[0] += 0.5;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0031645569620253164;
          result[1] += 0.015822784810126583;
          result[2] += 0;
          result[3] += 0.9810126582278481;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
          result[0] += 0.9774774774774775;
          result[1] += 0;
          result[2] += 0.021021021021021023;
          result[3] += 0.0015015015015015015;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9980809825369411;
          result[1] += 0.00042218384187296107;
          result[2] += 0.0012665515256188831;
          result[3] += 0.0001535213970447131;
          result[4] += 0;
          result[5] += 0;
          result[6] += 7.676069852235655e-05;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.18828451882845187;
          result[1] += 0;
          result[2] += 0.0034457297563376815;
          result[3] += 0.8082697514152104;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9922894424673784;
          result[1] += 0;
          result[2] += 0.005140371688414393;
          result[3] += 0.0015816528272044287;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009885330170027679;
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)35) ) ) {
          result[0] += 0.0008944543828264759;
          result[1] += 0.0005963029218843172;
          result[2] += 0;
          result[3] += 0.9293381037567084;
          result[4] += 0.06797853309481217;
          result[5] += 0.0011926058437686344;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5384615384615384;
          result[4] += 0.46153846153846156;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0.13043478260869565;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8695652173913043;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
          result[0] += 0.9789473684210527;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.021052631578947368;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.036231884057971016;
          result[3] += 0;
          result[4] += 0.9579710144927536;
          result[5] += 0.005797101449275362;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-26) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
          result[0] += 0.07692307692307693;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9230769230769231;
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
          result[1] += 0.05963302752293578;
          result[2] += 0;
          result[3] += 0.9403669724770642;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          result[0] += 0.9973497912506807;
          result[1] += 0.0007623888182973316;
          result[2] += 0.0015247776365946632;
          result[3] += 0.0001452169177709203;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00021782537665638048;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9375;
          result[3] += 0.0625;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          result[0] += 0.4559128630705394;
          result[1] += 0;
          result[2] += 0.0013831258644536654;
          result[3] += 0.5427040110650069;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9903672486453944;
          result[1] += 0;
          result[2] += 0.006923540036122818;
          result[3] += 0.001806140878988561;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009030704394942806;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 0.16767189384800965;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8323281061519904;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9591836734693877;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.02040816326530612;
          result[5] += 0.02040816326530612;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          result[0] += 0.9864279290327856;
          result[1] += 0.0015534298095004498;
          result[2] += 0.002534543373395471;
          result[3] += 0.008911781538713108;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005723162456054289;
        } else {
          result[0] += 0.9997439344472185;
          result[1] += 0;
          result[2] += 0.00025606555278151206;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0.15971731448763252;
          result[1] += 0.005653710247349823;
          result[2] += 0;
          result[3] += 0.7992932862190812;
          result[4] += 0.0353356890459364;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.07740585774058577;
          result[1] += 0;
          result[2] += 0.01882845188284519;
          result[3] += 0.06903765690376569;
          result[4] += 0.8347280334728033;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
          result[0] += 0.1507996953541508;
          result[1] += 0.003808073115003808;
          result[2] += 0.020563594821020565;
          result[3] += 0.602056359482102;
          result[4] += 0.22239146991622238;
          result[5] += 0.0003808073115003808;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0030257186081694403;
          result[2] += 0;
          result[3] += 0.0453857791225416;
          result[4] += 0.9515885022692889;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)100.5) ) ) {
          result[0] += 0.1851400730816078;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8148599269183922;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.07922077922077922;
          result[1] += 0;
          result[2] += 0.048051948051948054;
          result[3] += 0;
          result[4] += 0.8727272727272727;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)100.5) ) ) {
          result[0] += 0.9877862595419847;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.012213740458015267;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)48.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)29) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9860834990059643;
          result[4] += 0.009940357852882704;
          result[5] += 0.003976143141153081;
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
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-195.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9949874686716792;
          result[1] += 0;
          result[2] += 0.004177109440267335;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000835421888053467;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.991745283018868;
          result[1] += 0;
          result[2] += 0.007075471698113209;
          result[3] += 0.001179245283018868;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0029154518950437317;
          result[3] += 0.9868804664723032;
          result[4] += 0.01020408163265306;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.06443798449612403;
          result[1] += 0.005329457364341085;
          result[2] += 0;
          result[3] += 0.5726744186046512;
          result[4] += 0.35755813953488375;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
          result[0] += 0.011695906432748537;
          result[1] += 0.05263157894736842;
          result[2] += 0;
          result[3] += 0.32748538011695905;
          result[4] += 0.6081871345029239;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)100) ) ) {
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-16) ) ) {
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
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9901234567901235;
          result[1] += 0;
          result[2] += 0.008395061728395062;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0014814814814814814;
        } else {
          result[0] += 0.999834758540918;
          result[1] += 0;
          result[2] += 0.0001652414590820837;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 0.7176203263788473;
          result[1] += 0.0028919644701507954;
          result[2] += 0.0026853955794257384;
          result[3] += 0.2753563313365007;
          result[4] += 0.0002065688907250568;
          result[5] += 0.0004131377814501136;
          result[6] += 0.0008262755629002272;
        } else {
          result[0] += 0.8871365204534253;
          result[1] += 0.0004928536224741252;
          result[2] += 0.009857072449482503;
          result[3] += 0.07171020206998521;
          result[4] += 0.028831936914736324;
          result[5] += 0.0009857072449482504;
          result[6] += 0.0009857072449482504;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
          result[0] += 0;
          result[1] += 0.0019582245430809398;
          result[2] += 0.013054830287206266;
          result[3] += 0.8436684073107049;
          result[4] += 0.14033942558746737;
          result[5] += 0.0009791122715404699;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6930555555555555;
          result[4] += 0.30694444444444446;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-16) ) ) {
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
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
          result[0] += 0.9782178217821782;
          result[1] += 0;
          result[2] += 0.019801980198019802;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0019801980198019802;
        } else {
          result[0] += 0.9986329460013671;
          result[1] += 0;
          result[2] += 0.001367053998632946;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          result[0] += 0.9990979613927476;
          result[1] += 0;
          result[2] += 0.0009020386072523904;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0.6871757925072047;
          result[1] += 0.0021613832853025943;
          result[2] += 0.003890489913544669;
          result[3] += 0.30504322766570613;
          result[4] += 0.00014409221902017294;
          result[5] += 0.0002881844380403459;
          result[6] += 0.0012968299711815564;
        } else {
          result[0] += 0.8498698293317906;
          result[1] += 0;
          result[2] += 0.0101243853051779;
          result[3] += 0.055539485102690196;
          result[4] += 0.08359849580561181;
          result[5] += 0.0002892681515765114;
          result[6] += 0.0005785363031530228;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
          result[0] += 0;
          result[1] += 0.0006499837504062399;
          result[2] += 0.004549886252843679;
          result[3] += 0.99480012999675;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.016620498614958453;
          result[3] += 0;
          result[4] += 0.979224376731302;
          result[5] += 0.004155124653739613;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0.0029411764705882353;
          result[1] += 0.023529411764705882;
          result[2] += 0;
          result[3] += 0.20588235294117646;
          result[4] += 0.7676470588235295;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.006928406466512702;
          result[4] += 0.9930715935334873;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)11) ) ) {
          result[0] += 0.09893666204345816;
          result[1] += 0.0036985668053629217;
          result[2] += 0.0036985668053629217;
          result[3] += 0.5418400369856681;
          result[4] += 0.35182616736014793;
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
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)11.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.1257606490872211;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8742393509127789;
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
          result[4] += 0.9983050847457627;
          result[5] += 0.001694915254237288;
          result[6] += 0;
        } else {
          result[0] += 0.5294117647058824;
          result[1] += 0.21568627450980393;
          result[2] += 0.21568627450980393;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.0392156862745098;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
          result[0] += 0.9980897803247374;
          result[1] += 0;
          result[2] += 0.0019102196752626551;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
          result[0] += 0.5620408163265306;
          result[1] += 0;
          result[2] += 0.002857142857142857;
          result[3] += 0.4346938775510204;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00040816326530612246;
        } else {
          result[0] += 0.8605898123324397;
          result[1] += 0;
          result[2] += 0.00580875781948168;
          result[3] += 0.1322609472743521;
          result[4] += 0;
          result[5] += 0.00044682752457551384;
          result[6] += 0.0008936550491510277;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          result[0] += 0.0034158838599487617;
          result[1] += 0.005123825789923143;
          result[2] += 0.017933390264730998;
          result[3] += 0.9718189581554227;
          result[4] += 0.0017079419299743809;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9958071278825996;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0041928721174004195;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.55;
          result[4] += 0.45;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0009082652134423251;
          result[2] += 0;
          result[3] += 0.030881017257039057;
          result[4] += 0.9682107175295186;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)35) ) ) {
          result[0] += 0.9754759770054322;
          result[1] += 0.0013712356943199199;
          result[2] += 0.0015294551975106798;
          result[3] += 0.021043193924371078;
          result[4] += 0;
          result[5] += 0.00021095933758767996;
          result[6] += 0.00036917884077843993;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03667136812411848;
          result[3] += 0.7404795486600847;
          result[4] += 0.2214386459802539;
          result[5] += 0.0014104372355430185;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          result[0] += 0.5062146892655367;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.4937853107344633;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8226375176304654;
          result[1] += 0;
          result[2] += 0.002468265162200282;
          result[3] += 0.0003526093088857546;
          result[4] += 0.17454160789844853;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
          result[0] += 0.0016518004625041298;
          result[1] += 0.00033036009250082593;
          result[2] += 0.004294681202510737;
          result[3] += 0.9881070366699704;
          result[4] += 0.0033036009250082595;
          result[5] += 0.002312520647505782;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.22920203735144312;
          result[4] += 0.7707979626485568;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0.031914893617021274;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9680851063829787;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)61) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
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
          result[2] += 0.0014903129657228018;
          result[3] += 0;
          result[4] += 0.9985096870342772;
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
          result[0] += 0.9896623018607856;
          result[1] += 0;
          result[2] += 0.008270158511371467;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002067539627842867;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          result[0] += 0.9985479186834463;
          result[1] += 0;
          result[2] += 0.001452081316553727;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9999062133645955;
          result[1] += 0;
          result[2] += 9.378663540445487e-05;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          result[0] += 0.10548523206751055;
          result[1] += 0.02390998593530239;
          result[2] += 0.035161744022503515;
          result[3] += 0.8354430379746836;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9848091885883661;
          result[1] += 0;
          result[2] += 0.005310608867481783;
          result[3] += 0.008768679757935037;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011115227862171174;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 0.75;
          result[2] += 0;
          result[3] += 0.25;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.004723837209302325;
          result[3] += 0.9952761627906976;
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
          result[0] += 0.9806451612903225;
          result[1] += 0;
          result[2] += 0.01827956989247312;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001075268817204301;
        } else {
          result[0] += 0.9990057665539869;
          result[1] += 0;
          result[2] += 0.000994233446013124;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)97.5) ) ) {
          result[0] += 0.022800256904303148;
          result[1] += 0.005138086062941554;
          result[2] += 0.01348747591522158;
          result[3] += 0.8651252408477842;
          result[4] += 0.09216441875401413;
          result[5] += 0.0012845215157353885;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06162464985994398;
          result[3] += 0;
          result[4] += 0.9355742296918768;
          result[5] += 0.0028011204481792717;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
          result[0] += 0.5460422855145903;
          result[1] += 0;
          result[2] += 0.0019220688450113578;
          result[3] += 0.4515114450463044;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005242005940940068;
        } else {
          result[0] += 0.9821580288870009;
          result[1] += 0;
          result[2] += 0.004248088360237893;
          result[3] += 0.01231945624468989;
          result[4] += 0;
          result[5] += 0.00021240441801189465;
          result[6] += 0.0010620220900594733;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
          result[0] += 0.19104268719384185;
          result[1] += 0.01119664100769769;
          result[2] += 0.007697690692792162;
          result[3] += 0.7900629811056683;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.10990502035278155;
          result[4] += 0.8900949796472184;
          result[5] += 0;
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
          result[0] += 0.004689331770222743;
          result[1] += 0.021101992966002344;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9742086752637749;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
          result[0] += 0.42494226327944573;
          result[1] += 0;
          result[2] += 0.016166281755196306;
          result[3] += 0.5427251732101617;
          result[4] += 0.013856812933025405;
          result[5] += 0.0023094688221709007;
          result[6] += 0;
        } else {
          result[0] += 0.9944985394352484;
          result[1] += 0.00024342745861733207;
          result[2] += 0.0008763388510223954;
          result[3] += 0.004333008763388511;
          result[4] += 0;
          result[5] += 0;
          result[6] += 4.8685491723466414e-05;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)113.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0015772870662460567;
          result[3] += 0;
          result[4] += 0.998422712933754;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6733358264771877;
          result[1] += 0.0009349289454001496;
          result[2] += 0.004020194465220644;
          result[3] += 0.3207741211667913;
          result[4] += 0;
          result[5] += 0.00028047868362004487;
          result[6] += 0.0006544502617801048;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)75) ) ) {
          result[0] += 0.1917808219178082;
          result[1] += 0;
          result[2] += 0.017005196032120924;
          result[3] += 0.7912139820500709;
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)103.5) ) ) {
          result[0] += 0.1728492501973165;
          result[1] += 0.013417521704814523;
          result[2] += 0.010260457774269928;
          result[3] += 0.8034727703235991;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.02247191011235955;
          result[1] += 0.033707865168539325;
          result[2] += 0;
          result[3] += 0.9438202247191011;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          result[0] += 0.9642857142857143;
          result[1] += 0;
          result[2] += 0.03571428571428571;
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
          result[0] += 0.9915333960489181;
          result[1] += 0;
          result[2] += 0.008466603951081843;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          result[0] += 0.9994322482967449;
          result[1] += 0;
          result[2] += 0.0005677517032551098;
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
          result[0] += 0.6659006032749211;
          result[1] += 0.0008618213157138754;
          result[2] += 0.006032749209997128;
          result[3] += 0.3162884228669923;
          result[4] += 0.009863066168725464;
          result[5] += 0.0002872737719046252;
          result[6] += 0.000766063391745667;
        } else {
          result[0] += 0.437173825772782;
          result[1] += 0;
          result[2] += 0.006423123243677238;
          result[3] += 0.3327980730630269;
          result[4] += 0.22240064231232437;
          result[5] += 0.0012043356081894822;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          result[0] += 0.18996415770609318;
          result[1] += 0.008960573476702509;
          result[2] += 0.012544802867383513;
          result[3] += 0.7867383512544803;
          result[4] += 0.0017921146953405018;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0015243902439024393;
          result[1] += 0;
          result[2] += 0.02134146341463415;
          result[3] += 0.9344512195121952;
          result[4] += 0.04192073170731708;
          result[5] += 0.0007621951219512196;
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
          result[0] += 0.005847953216374269;
          result[1] += 0.04093567251461988;
          result[2] += 0;
          result[3] += 0.9532163742690059;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.753731343283582;
          result[4] += 0.2462686567164179;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.00078064012490242;
          result[2] += 0;
          result[3] += 0.04839968774395004;
          result[4] += 0.9508196721311475;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85) ) ) {
          result[0] += 0.5744503200667965;
          result[1] += 0;
          result[2] += 0.008627887559142778;
          result[3] += 0.4169217923740607;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.2961165048543689;
          result[1] += 0;
          result[2] += 0.055825242718446605;
          result[3] += 0;
          result[4] += 0.6480582524271845;
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
          result[0] += 0.15936826992103376;
          result[1] += 0.01363962670495334;
          result[2] += 0.004307250538406318;
          result[3] += 0.8226848528356067;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)22.5) ) ) {
          result[0] += 0.11232449297971919;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8767550702028081;
          result[4] += 0.0062402496099844;
          result[5] += 0.0046801872074883;
          result[6] += 0;
        } else {
          result[0] += 0.2975;
          result[1] += 0.0075;
          result[2] += 0;
          result[3] += 0.695;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
          result[0] += 0.735632183908046;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.26436781609195403;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9965892794852913;
          result[1] += 0.0010852292546800512;
          result[2] += 0.0009689546916786171;
          result[3] += 0.0011239874423471959;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002325491260028681;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
          result[0] += 0.45461479786422576;
          result[1] += 0;
          result[2] += 0.015255530129672006;
          result[3] += 0.02288329519450801;
          result[4] += 0.5072463768115942;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.01684981684981685;
          result[1] += 0;
          result[2] += 0.00695970695970696;
          result[3] += 0.9761904761904762;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)51) ) ) {
          result[0] += 0.99644128113879;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0035587188612099642;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
          result[0] += 0.9380165289256199;
          result[1] += 0;
          result[2] += 0.003357438016528926;
          result[3] += 0.05759297520661158;
          result[4] += 0;
          result[5] += 0.0005165289256198348;
          result[6] += 0.0005165289256198348;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.875;
          result[4] += 0.09027777777777778;
          result[5] += 0.034722222222222224;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
          result[0] += 0.004422332780541736;
          result[1] += 0.00552791597567717;
          result[2] += 0.008844665561083471;
          result[3] += 0.9806522940851299;
          result[4] += 0.000552791597567717;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.16884531590413943;
          result[4] += 0.8311546840958606;
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
          result[0] += 0.9712643678160919;
          result[1] += 0;
          result[2] += 0.028735632183908046;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)124.5) ) ) {
          result[0] += 0.009345794392523364;
          result[1] += 0.009345794392523364;
          result[2] += 0;
          result[3] += 0.9813084112149533;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.05555555555555555;
          result[1] += 0.5;
          result[2] += 0;
          result[3] += 0.4444444444444444;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
          result[0] += 0.9950980392156863;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004901960784313725;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.002365464222353637;
          result[1] += 0.0005913660555884093;
          result[2] += 0.00768775872264932;
          result[3] += 0.9024246008279124;
          result[4] += 0.0833826138379657;
          result[5] += 0.0035481963335304554;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)25) ) ) {
          result[0] += 0.9527954469367258;
          result[1] += 0;
          result[2] += 0.008369601606963508;
          result[3] += 0.0381653833277536;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006695681285570807;
        } else {
          result[0] += 0.9975436010808155;
          result[1] += 0.0004912797838368951;
          result[2] += 0.0009825595676737902;
          result[3] += 0.0009416195856873823;
          result[4] += 0;
          result[5] += 0;
          result[6] += 4.093998198640793e-05;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.4139336308946245;
          result[1] += 0;
          result[2] += 0.00892683873471764;
          result[3] += 0.5732582961381719;
          result[4] += 0.002910925674364448;
          result[5] += 0.0009703085581214826;
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
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
          result[0] += 0.9594317890964935;
          result[1] += 0.001919631430765293;
          result[2] += 0.0021755822882006653;
          result[3] += 0.03532121832608139;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001151778858459176;
        } else {
          result[0] += 0.2622415669205658;
          result[1] += 0.002176278563656148;
          result[2] += 0.00544069640914037;
          result[3] += 0.7098295248458469;
          result[4] += 0.018498367791077257;
          result[5] += 0.0018135654697134566;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
          result[0] += 0.3453014184397163;
          result[1] += 0.004875886524822695;
          result[2] += 0;
          result[3] += 0.5554078014184397;
          result[4] += 0.09441489361702128;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9980963712076145;
          result[1] += 0.0002379535990481856;
          result[2] += 0.0016656751933372992;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)41) ) ) {
          result[0] += 0.9997298514182801;
          result[1] += 0;
          result[2] += 0.00018009905447996397;
          result[3] += 0;
          result[4] += 9.004952723998198e-05;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.782608695652174;
          result[1] += 0;
          result[2] += 0.21739130434782608;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.016999260901699925;
          result[3] += 0.06134515890613452;
          result[4] += 0.9216555801921655;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.01773049645390071;
          result[3] += 0.01773049645390071;
          result[4] += 0.9645390070921985;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.24571020019065776;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7542897998093422;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0014577259475218659;
          result[3] += 0;
          result[4] += 0.9985422740524781;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6666666666666666;
          result[3] += 0;
          result[4] += 0.26666666666666666;
          result[5] += 0.06666666666666667;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9793906810035843;
          result[1] += 0;
          result[2] += 0.016129032258064516;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.004480286738351254;
        } else {
          result[0] += 0.9981826442526125;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.001817355747387551;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-15.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)13) ) ) {
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9962121212121212;
          result[5] += 0.003787878787878788;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0.0009551098376313276;
          result[1] += 0.0003183699458771092;
          result[2] += 0;
          result[3] += 0.9977714103788602;
          result[4] += 0;
          result[5] += 0.0009551098376313276;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.3111111111111111;
          result[2] += 0.6;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.08888888888888889;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9928762243989314;
          result[1] += 0;
          result[2] += 0.006233303650934996;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008904719501335708;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9958988380041012;
          result[1] += 0;
          result[2] += 0.004101161995898838;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.999818676337262;
          result[1] += 0;
          result[2] += 0.00018132366273798732;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
          result[0] += 0.434;
          result[1] += 0.024;
          result[2] += 0;
          result[3] += 0.542;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9866267816294211;
          result[1] += 0.0031673411930318494;
          result[2] += 0.008270279781805384;
          result[3] += 0.0017596339961288051;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00017596339961288053;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)45) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0018933417481855476;
          result[3] += 0.9974755443357526;
          result[4] += 0;
          result[5] += 0.0006311139160618492;
          result[6] += 0;
        } else {
          result[0] += 0.9861976847729297;
          result[1] += 0;
          result[2] += 0.012911843276936777;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008904719501335708;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.05605935696619951;
          result[1] += 0.00989282769991756;
          result[2] += 0;
          result[3] += 0.6232481450948063;
          result[4] += 0.3107996702390767;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-23) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05405405405405406;
          result[4] += 0.9459459459459459;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.1111111111111111;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7037037037037037;
          result[4] += 0.18518518518518517;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)8.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4.5) ) ) {
          result[0] += 0.17301231802911535;
          result[1] += 0.007278835386338186;
          result[2] += 0.016237402015677492;
          result[3] += 0.3824188129899216;
          result[4] += 0.42105263157894735;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.24306688417618272;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.4461663947797716;
          result[4] += 0.3107667210440457;
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)20.5) ) ) {
          result[0] += 0.029239766081871343;
          result[1] += 0;
          result[2] += 0.1111111111111111;
          result[3] += 0;
          result[4] += 0.8245614035087719;
          result[5] += 0.03508771929824561;
          result[6] += 0;
        } else {
          result[0] += 0.11647727272727273;
          result[1] += 0.0005681818181818183;
          result[2] += 0.003977272727272728;
          result[3] += 0.8778409090909092;
          result[4] += 0;
          result[5] += 0.0011363636363636365;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
          result[0] += 0.9603728270814272;
          result[1] += 0.0012008234217749313;
          result[2] += 0.0025731930466605674;
          result[3] += 0.035395699908508695;
          result[4] += 0;
          result[5] += 0.0002859103385178408;
          result[6] += 0.00017154620311070448;
        } else {
          result[0] += 0.8641935827736916;
          result[1] += 0;
          result[2] += 0.001598976654940838;
          result[3] += 0.1340475429058736;
          result[4] += 0;
          result[5] += 5.329922183136127e-05;
          result[6] += 0.00010659844366272254;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)5.5) ) ) {
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
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)25) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          result[0] += 0.893567926160946;
          result[1] += 0;
          result[2] += 0.005191808479953851;
          result[3] += 0.0995096625324488;
          result[4] += 0;
          result[5] += 0.00028843380444188056;
          result[6] += 0.001442169022209403;
        } else {
          result[0] += 0.18003487358326067;
          result[1] += 0;
          result[2] += 0.022667829119442023;
          result[3] += 0.6878814298169137;
          result[4] += 0.10941586748038361;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
          result[0] += 0.9378124081152602;
          result[1] += 0.0011761246692149367;
          result[2] += 0.0024992649220817406;
          result[3] += 0.05777712437518377;
          result[4] += 0.00029403116730373417;
          result[5] += 0;
          result[6] += 0.0004410467509556013;
        } else {
          result[0] += 0.9968016479644387;
          result[1] += 0.00010841871306987586;
          result[2] += 0.0001626280696048138;
          result[3] += 0.0028188865398167725;
          result[4] += 0;
          result[5] += 0.00010841871306987586;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
          result[0] += 0.40541098719537383;
          result[1] += 0;
          result[2] += 0.0080545229244114;
          result[3] += 0.5863279636513837;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00020652622883106156;
        } else {
          result[0] += 0.16299137104506234;
          result[1] += 0;
          result[2] += 0.00479386385426654;
          result[3] += 0.15244487056567596;
          result[4] += 0.6730584851390221;
          result[5] += 0.006711409395973155;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          result[0] += 0.5013192612137203;
          result[1] += 0;
          result[2] += 0.026385224274406333;
          result[3] += 0.47229551451187335;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0021141649048625794;
          result[1] += 0.008456659619450317;
          result[2] += 0;
          result[3] += 0.9894291754756871;
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.17647058823529413;
          result[1] += 0.47058823529411764;
          result[2] += 0;
          result[3] += 0.35294117647058826;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
          result[0] += 0.9597083653108212;
          result[1] += 0.0011511895625479663;
          result[2] += 0.002686108979278588;
          result[3] += 0.03581478639038117;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006395497569710924;
        } else {
          result[0] += 0.9985646914086529;
          result[1] += 0;
          result[2] += 0.0004100881689563256;
          result[3] += 0.0009226983801517326;
          result[4] += 0.0001025220422390814;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)15) ) ) {
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
          result[3] += 0.995575221238938;
          result[4] += 0;
          result[5] += 0.004424778761061947;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          result[0] += 0;
          result[1] += 0.008733624454148471;
          result[2] += 0.007389989922741014;
          result[3] += 0.8982196842458852;
          result[4] += 0.08532079274437353;
          result[5] += 0.0003359086328518643;
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
          result[0] += 0.25287356321839083;
          result[1] += 0;
          result[2] += 0.20114942528735633;
          result[3] += 0.5459770114942529;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)49) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.010554988083077971;
          result[3] += 0.989445011916922;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9900149775336995;
          result[1] += 0;
          result[2] += 0.008487269096355467;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0014977533699450823;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
          result[0] += 0.1994535519125683;
          result[1] += 0;
          result[2] += 0.01092896174863388;
          result[3] += 0.39617486338797814;
          result[4] += 0.3879781420765027;
          result[5] += 0.00546448087431694;
          result[6] += 0;
        } else {
          result[0] += 0.14116094986807387;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.18601583113456466;
          result[4] += 0.6701846965699209;
          result[5] += 0.002638522427440633;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)22.5) ) ) {
          result[0] += 0.5;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9972714870395635;
          result[5] += 0.002728512960436562;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
          result[0] += 0.0779367469879518;
          result[1] += 0.0011295180722891566;
          result[2] += 0.008659638554216868;
          result[3] += 0.911144578313253;
          result[4] += 0;
          result[5] += 0.0011295180722891566;
          result[6] += 0;
        } else {
          result[0] += 0.45302897278314314;
          result[1] += 0;
          result[2] += 0.000877963125548727;
          result[3] += 0.5460930640913082;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
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
          result[3] += 0.9893048128342246;
          result[4] += 0.0106951871657754;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.012578616352201259;
          result[2] += 0;
          result[3] += 0.015723270440251572;
          result[4] += 0.9716981132075472;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
          result[0] += 0.997899464001159;
          result[1] += 0.00032594524119947853;
          result[2] += 0.001267564826886861;
          result[3] += 0.00014486455164421268;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003621613791105317;
        } else {
          result[0] += 0.8838028169014085;
          result[1] += 0;
          result[2] += 0.10915492957746478;
          result[3] += 0.007042253521126761;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1487) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.03169014084507042;
          result[2] += 0;
          result[3] += 0.9683098591549296;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
          result[0] += 0.005143277002204262;
          result[1] += 0;
          result[2] += 0.005143277002204262;
          result[3] += 0.9897134459955915;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.834565978980148;
          result[1] += 0;
          result[2] += 0.008563643441027637;
          result[3] += 0.15570260801868432;
          result[4] += 0;
          result[5] += 0.0007785130400934215;
          result[6] += 0.00038925652004671076;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)83) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)37.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)33.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9963241729389113;
          result[1] += 0;
          result[2] += 0.003675827061088745;
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
          result[0] += 0.9992703925288196;
          result[1] += 0;
          result[2] += 0.000583685976944404;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000145921494236101;
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
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-15.5) ) ) {
          result[0] += 0.08333333333333333;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9166666666666666;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9995951417004049;
          result[5] += 0.0004048582995951417;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
          result[0] += 0.018563751831949193;
          result[1] += 0.010258915486077186;
          result[2] += 0.008549096238397655;
          result[3] += 0.9616511968734733;
          result[4] += 0;
          result[5] += 0.0009770395701025891;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)38) ) ) {
          result[0] += 0.992617980490377;
          result[1] += 0;
          result[2] += 0.005009227524387028;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002372791985235961;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
          result[0] += 0.9927992799279928;
          result[1] += 0.00030003000300030005;
          result[2] += 0.006000600060006;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009000900090009;
        } else {
          result[0] += 0.6920415224913495;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3070934256055364;
          result[4] += 0;
          result[5] += 0.000865051903114187;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
          result[0] += 0.0018957345971563982;
          result[1] += 0;
          result[2] += 0.0044233807266982625;
          result[3] += 0.9560821484992101;
          result[4] += 0.03665086887835703;
          result[5] += 0.0009478672985781991;
          result[6] += 0;
        } else {
          result[0] += 0.9972714870395635;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002728512960436562;
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
          result[1] += 0.061068702290076333;
          result[2] += 0;
          result[3] += 0.9389312977099237;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
          result[0] += 0.9973996894073459;
          result[1] += 0.0005778467983675828;
          result[2] += 0.0018418866697966702;
          result[3] += 7.223084979594785e-05;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00010834627469392178;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0.6666666666666666;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          result[0] += 0.9230769230769231;
          result[1] += 0.07692307692307693;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
          result[0] += 0.8924466338259441;
          result[1] += 0;
          result[2] += 0.005747126436781609;
          result[3] += 0.09688013136288999;
          result[4] += 0.002052545155993432;
          result[5] += 0.00041050903119868636;
          result[6] += 0.0024630541871921183;
        } else {
          result[0] += 0.009259259259259259;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9907407407407407;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.005362888809438684;
          result[3] += 0.9946371111905613;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.015558698727015558;
          result[3] += 0;
          result[4] += 0.983026874115983;
          result[5] += 0.0014144271570014145;
          result[6] += 0;
        }
      }
    }
  }
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-31.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.002442002442002442;
          result[2] += 0.005189255189255189;
          result[3] += 0.98992673992674;
          result[4] += 0;
          result[5] += 0.002442002442002442;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)27.5) ) ) {
          result[0] += 0;
          result[1] += 0.014545454545454545;
          result[2] += 0;
          result[3] += 0.9854545454545455;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
          result[0] += 0.9417402157439602;
          result[1] += 0.0006686279753944906;
          result[2] += 0.004234643844165107;
          result[3] += 0.05264330926272623;
          result[4] += 0;
          result[5] += 0.00017830079343853083;
          result[6] += 0.0005349023803155925;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5273141122913505;
          result[1] += 0;
          result[2] += 0.0030349013657056147;
          result[3] += 0.46965098634294383;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
          result[0] += 0.013201320132013201;
          result[1] += 0.033003300330033;
          result[2] += 0;
          result[3] += 0.09900990099009901;
          result[4] += 0.8547854785478548;
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
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          result[0] += 0.48121761658031087;
          result[1] += 0;
          result[2] += 0.011658031088082901;
          result[3] += 0.5071243523316062;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.13867595818815331;
          result[1] += 0.010452961672473868;
          result[2] += 0.005574912891986063;
          result[3] += 0.8452961672473868;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)22.5) ) ) {
          result[0] += 0.5;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5;
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
          result[0] += 0.1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8994082840236687;
          result[4] += 0;
          result[5] += 0.000591715976331361;
          result[6] += 0;
        } else {
          result[0] += 0.6176470588235294;
          result[1] += 0;
          result[2] += 0.35294117647058826;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.029411764705882353;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9923664122137404;
          result[4] += 0;
          result[5] += 0.007633587786259542;
          result[6] += 0;
        } else {
          result[0] += 0.9435970692594812;
          result[1] += 0.0008755356895995577;
          result[2] += 0.0026726878945670706;
          result[3] += 0.05253214137597346;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003225657803787844;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
          result[0] += 0.9962526277305548;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0037473722694452063;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.4709639953542393;
          result[1] += 0;
          result[2] += 0.0078397212543554;
          result[3] += 0.5211962833914053;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)83) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.992;
          result[1] += 0;
          result[2] += 0.008;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.998631074606434;
          result[1] += 0;
          result[2] += 0.0013689253935660506;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)34.5) ) ) {
          result[0] += 0.9990271190563055;
          result[1] += 0;
          result[2] += 0.0009728809436945154;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9999378881987577;
          result[1] += 0;
          result[2] += 6.211180124223603e-05;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
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
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          result[0] += 0.9161153414055674;
          result[1] += 0.0011234552490325801;
          result[2] += 0.0031207090250905006;
          result[3] += 0.078517039071277;
          result[4] += 0;
          result[5] += 0.0004993134440144801;
          result[6] += 0.0006241418050181001;
        } else {
          result[0] += 0.16584802080323607;
          result[1] += 0.002311470673215834;
          result[2] += 0.013290956370991045;
          result[3] += 0.8052585957815661;
          result[4] += 0.012713088702687086;
          result[5] += 0.0005778676683039585;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)101) ) ) {
          result[0] += 0;
          result[1] += 0.0016857720836142953;
          result[2] += 0;
          result[3] += 0.9983142279163857;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03982930298719772;
          result[3] += 0;
          result[4] += 0.9601706970128022;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-12) ) ) {
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0.009411764705882352;
          result[1] += 0.023529411764705882;
          result[2] += 0;
          result[3] += 0.13647058823529412;
          result[4] += 0.8305882352941176;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.01407035175879397;
          result[4] += 0.985929648241206;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
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
          result[0] += 0.0002663115845539281;
          result[1] += 0.002396804260985353;
          result[2] += 0.0002663115845539281;
          result[3] += 0.9286284953395473;
          result[4] += 0.0673768308921438;
          result[5] += 0.0010652463382157123;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)32) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.006089309878213802;
          result[3] += 0;
          result[4] += 0.9939106901217862;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9912280701754386;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.008771929824561403;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-26) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)34.5) ) ) {
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
          result[0] += 0.9853546910755149;
          result[1] += 0.002745995423340961;
          result[2] += 0.0037757437070938217;
          result[3] += 0.008123569794050343;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9978170588861676;
          result[1] += 0.00026621233095516984;
          result[2] += 0.0015972739857310191;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003194547971462038;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)32) ) ) {
          result[0] += 0.6837782340862423;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3162217659137577;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.2074966532797858;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7925033467202142;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
          result[0] += 0.404505076142132;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5954949238578681;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0.9625506072874493;
          result[1] += 0;
          result[2] += 0.03441295546558704;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.003036437246963563;
        } else {
          result[0] += 0.9952298352124892;
          result[1] += 0;
          result[2] += 0.004336513443191674;
          result[3] += 0.0004336513443191674;
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.75;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)47.5) ) ) {
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0006244146113019045;
          result[1] += 0.0006244146113019045;
          result[2] += 0;
          result[3] += 0.9978145488604433;
          result[4] += 0;
          result[5] += 0.0009366219169528567;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)50) ) ) {
          result[0] += 0;
          result[1] += 0.375;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6071428571428571;
          result[5] += 0.017857142857142856;
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
          result[0] += 0.6451612903225806;
          result[1] += 0;
          result[2] += 0.3118279569892473;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.043010752688172046;
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
          result[0] += 0.9972259076106622;
          result[1] += 0;
          result[2] += 0.0025328669641780243;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00024122542515981184;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
          result[0] += 0.45793826911438373;
          result[1] += 0.003631228565664717;
          result[2] += 0.0038329634859794234;
          result[3] += 0.5335888642323987;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0010086746015735325;
        } else {
          result[0] += 0.6662337662337663;
          result[1] += 0.006060606060606061;
          result[2] += 0.012554112554112554;
          result[3] += 0.31471861471861473;
          result[4] += 0;
          result[5] += 0.0004329004329004329;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-195.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.991550925925926;
          result[1] += 0;
          result[2] += 0.0032407407407407406;
          result[3] += 0.004629629629629629;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005787037037037037;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.6082474226804123;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3917525773195876;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9951790633608816;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0048209366391184574;
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
          result[0] += 0.9671052631578947;
          result[1] += 0;
          result[2] += 0.03289473684210526;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.00261437908496732;
          result[3] += 0.9973856209150327;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          result[0] += 0.5768261964735516;
          result[1] += 0;
          result[2] += 0.017632241813602016;
          result[3] += 0.40554156171284633;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0009551098376313276;
          result[1] += 0.018147086914995225;
          result[2] += 0;
          result[3] += 0.9808978032473734;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.9867533483233942;
          result[1] += 0.00029328380095806043;
          result[2] += 0.0005865676019161209;
          result[3] += 0.011877993938801446;
          result[4] += 0.00029328380095806043;
          result[5] += 4.888063349301007e-05;
          result[6] += 0.00014664190047903022;
        } else {
          result[0] += 0.841715976331361;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.15828402366863906;
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
          result[0] += 0.6122448979591837;
          result[1] += 0;
          result[2] += 0.3877551020408163;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          result[0] += 0.010712372790573112;
          result[1] += 0.00856989823245849;
          result[2] += 0.02088912694161757;
          result[3] += 0.8901981788966256;
          result[4] += 0.06802356722013926;
          result[5] += 0.0016068559185859668;
          result[6] += 0;
        } else {
          result[0] += 0.5703804811465621;
          result[1] += 0;
          result[2] += 0.0025592902235113467;
          result[3] += 0.42654837058522443;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005118580447022694;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
          result[0] += 0.9776260902540767;
          result[1] += 0;
          result[2] += 0.0003792188092529389;
          result[3] += 0.021994690936670457;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9958384332925336;
          result[1] += 0;
          result[2] += 0.003182374541003672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009791921664626683;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)31.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9951923076923077;
          result[1] += 0;
          result[2] += 0.004807692307692308;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 0.41038141669056494;
          result[1] += 0;
          result[2] += 0.009750501864066534;
          result[3] += 0.5314023515916261;
          result[4] += 0.0476053914539719;
          result[5] += 0.0008603383997705764;
          result[6] += 0;
        } else {
          result[0] += 0.9831629585087192;
          result[1] += 0;
          result[2] += 0.010222489476849068;
          result[3] += 0.005411906193625977;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0012026458208057728;
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
          result[0] += 0.09250693802035152;
          result[1] += 0.012025901942645698;
          result[2] += 0.0009250693802035153;
          result[3] += 0.8917668825161887;
          result[4] += 0;
          result[5] += 0.0027752081406105457;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)22.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
          result[0] += 0.9722222222222222;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.027777777777777776;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.008583690987124463;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.776824034334764;
          result[4] += 0.2145922746781116;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.9950736189527288;
          result[1] += 0.0009963467286615742;
          result[2] += 0.001328462304882099;
          result[3] += 0.0023801616295804273;
          result[4] += 0;
          result[5] += 5.535259603675413e-05;
          result[6] += 0.00016605778811026238;
        } else {
          result[0] += 0.7067241379310345;
          result[1] += 0;
          result[2] += 0.0008620689655172414;
          result[3] += 0.2924137931034483;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)23) ) ) {
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          result[0] += 0.6350078492935636;
          result[1] += 0;
          result[2] += 0.015698587127158554;
          result[3] += 0.347723704866562;
          result[4] += 0;
          result[5] += 0.0015698587127158557;
          result[6] += 0;
        } else {
          result[0] += 0.058160237388724036;
          result[1] += 0.005934718100890208;
          result[2] += 0.017804154302670624;
          result[3] += 0.9175074183976261;
          result[4] += 0;
          result[5] += 0.0005934718100890207;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
          result[0] += 0.30747126436781613;
          result[1] += 0.002873563218390805;
          result[2] += 0;
          result[3] += 0.67816091954023;
          result[4] += 0.008620689655172415;
          result[5] += 0.002873563218390805;
          result[6] += 0;
        } else {
          result[0] += 0.9977102669992232;
          result[1] += 0.0004906570715950444;
          result[2] += 0.0009813141431900888;
          result[3] += 0.0006950975180929795;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001226642678987611;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.018636363636363635;
          result[3] += 0.8563636363636363;
          result[4] += 0.12363636363636364;
          result[5] += 0.0013636363636363637;
          result[6] += 0;
        } else {
          result[0] += 0.9969187675070028;
          result[1] += 0;
          result[2] += 0.0028011204481792717;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00028011204481792715;
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
          result[2] += 0.012369433754810335;
          result[3] += 0.7952171522814734;
          result[4] += 0.1918636613523914;
          result[5] += 0.0005497526113249038;
          result[6] += 0;
        } else {
          result[0] += 0.9906103286384976;
          result[1] += 0;
          result[2] += 0.007042253521126761;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002347417840375587;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          result[0] += 0.26023778071334214;
          result[1] += 0.022457067371202115;
          result[2] += 0;
          result[3] += 0.7173051519154557;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.024630541871921183;
          result[1] += 0.013546798029556651;
          result[2] += 0.01847290640394089;
          result[3] += 0.9433497536945813;
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
          result[1] += 0.003693444136657433;
          result[2] += 0.003693444136657433;
          result[3] += 0.9901508156355802;
          result[4] += 0;
          result[5] += 0.0024622960911049553;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
          result[0] += 0.9527272727272728;
          result[1] += 0;
          result[2] += 0.03272727272727273;
          result[3] += 0.014545454545454545;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9978096228096228;
          result[1] += 0.0006311256311256311;
          result[2] += 0.0014478764478764478;
          result[3] += 3.712503712503712e-05;
          result[4] += 0;
          result[5] += 0;
          result[6] += 7.425007425007424e-05;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          result[0] += 0.8627450980392157;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.13725490196078433;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.006622516556291391;
          result[1] += 0.033112582781456956;
          result[2] += 0;
          result[3] += 0.9602649006622517;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          result[0] += 0.24191992281717317;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7580800771828268;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9614035087719298;
          result[1] += 0;
          result[2] += 0.028070175438596492;
          result[3] += 0.0035087719298245615;
          result[4] += 0;
          result[5] += 0.0017543859649122807;
          result[6] += 0.005263157894736842;
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
