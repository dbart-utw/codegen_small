
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
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          result[0] += 0.9937137330754352;
          result[1] += 0;
          result[2] += 0.004835589941972921;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0014506769825918763;
        } else {
          result[0] += 0.9996257018091079;
          result[1] += 0;
          result[2] += 0.00037429819089207733;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          result[0] += 0.6421017845340383;
          result[1] += 0.001487111698612029;
          result[2] += 0.006113681427627231;
          result[3] += 0.3487276933245208;
          result[4] += 0;
          result[5] += 0.00033046926635822867;
          result[6] += 0.0012392597488433575;
        } else {
          result[0] += 0.003816793893129771;
          result[1] += 0;
          result[2] += 0.023536895674300253;
          result[3] += 0.7818066157760815;
          result[4] += 0.1895674300254453;
          result[5] += 0.001272264631043257;
          result[6] += 0;
        }
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          result[0] += 0.5037220843672456;
          result[1] += 0;
          result[2] += 0.022332506203473945;
          result[3] += 0.4739454094292804;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0011325028312570782;
          result[1] += 0.0022650056625141564;
          result[2] += 0;
          result[3] += 0.9966024915062288;
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-9422.5) ) ) {
          result[0] += 0.6;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.4;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.011450381679389313;
          result[2] += 0;
          result[3] += 0.20610687022900764;
          result[4] += 0.7824427480916031;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-26) ) ) {
          result[0] += 0;
          result[1] += 0.0016286644951140066;
          result[2] += 0;
          result[3] += 0.10912052117263844;
          result[4] += 0.8892508143322475;
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)27) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0006583278472679394;
          result[2] += 0.003949967083607637;
          result[3] += 0.9753127057274523;
          result[4] += 0.017445687952600396;
          result[5] += 0.0026333113890717576;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)93) ) ) {
          result[0] += 0.9972714870395635;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002728512960436562;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.02252252252252252;
          result[3] += 0;
          result[4] += 0.9774774774774775;
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
          result[3] += 0.028169014084507043;
          result[4] += 0.971830985915493;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9937106918238994;
          result[4] += 0.006289308176100629;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.1568627450980392;
          result[4] += 0.8431372549019608;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.006008010680907877;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9939919893190922;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)33.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
          result[0] += 0.9990928333837314;
          result[1] += 0;
          result[2] += 0.0009071666162685213;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.999800299550674;
          result[1] += 0;
          result[2] += 0.00019970044932601097;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91) ) ) {
          result[0] += 0.9888248646760956;
          result[1] += 0.0024445608521040684;
          result[2] += 0.007333682556312206;
          result[3] += 0.0008730574471800245;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005238344683080147;
        } else {
          result[0] += 0.36551724137931035;
          result[1] += 0.013793103448275862;
          result[2] += 0;
          result[3] += 0.6206896551724138;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)8.5) ) ) {
          result[0] += 0.39937048694686167;
          result[1] += 0;
          result[2] += 0.007220885021292353;
          result[3] += 0.5913719681540456;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002036659877800407;
        } else {
          result[0] += 0.9310344827586207;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.06896551724137931;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-166) ) ) {
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.00031446540880503143;
          result[2] += 0.0047169811320754715;
          result[3] += 0.9937106918238994;
          result[4] += 0;
          result[5] += 0.0012578616352201257;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)96.5) ) ) {
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)27.5) ) ) {
          result[0] += 0;
          result[1] += 0.0023006134969325155;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9976993865030674;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.06;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.94;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          result[0] += 0.9842105263157894;
          result[1] += 0.010526315789473684;
          result[2] += 0;
          result[3] += 0.005263157894736842;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.47072072072072074;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5292792792792793;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          result[0] += 0.996771353096566;
          result[1] += 0.0006237158790724978;
          result[2] += 0.0024581743469327855;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000146756677428823;
        } else {
          result[0] += 0.034482758620689655;
          result[1] += 0.13793103448275862;
          result[2] += 0;
          result[3] += 0.8275862068965517;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
          result[0] += 0.9173789173789174;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.08262108262108261;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.37888446215139443;
          result[1] += 0;
          result[2] += 0.001195219123505976;
          result[3] += 0.6199203187250996;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47.5) ) ) {
          result[0] += 0.8702290076335878;
          result[1] += 0;
          result[2] += 0.1297709923664122;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9898085237801112;
          result[1] += 0;
          result[2] += 0.0077208153180975915;
          result[3] += 0.0018529956763434219;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006176652254478073;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)33.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0.9998477929984779;
          result[1] += 0;
          result[2] += 0.00015220700152207003;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.997976011994003;
          result[1] += 0;
          result[2] += 0.0017991004497751124;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00022488755622188905;
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          result[0] += 0.9149981574745117;
          result[1] += 0.0012283503255128363;
          result[2] += 0.004422061171846211;
          result[3] += 0.07812308070261638;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0012283503255128363;
        } else {
          result[0] += 0.1699000587889477;
          result[1] += 0.002645502645502646;
          result[2] += 0.014697236919459143;
          result[3] += 0.7968841857730747;
          result[4] += 0.015579071134626692;
          result[5] += 0.0002939447383891829;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
          result[0] += 0;
          result[1] += 0.000328515111695138;
          result[2] += 0.005256241787122208;
          result[3] += 0.9944152431011827;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0162962962962963;
          result[3] += 0;
          result[4] += 0.9777777777777779;
          result[5] += 0.0059259259259259265;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.016260162601626018;
          result[1] += 0.08130081300813008;
          result[2] += 0;
          result[3] += 0.9024390243902439;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.009790209790209791;
          result[3] += 0.5258741258741259;
          result[4] += 0.46153846153846156;
          result[5] += 0.002797202797202797;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.006208609271523178;
          result[3] += 0.9362582781456954;
          result[4] += 0.05587748344370861;
          result[5] += 0.0016556291390728477;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7209302325581395;
          result[4] += 0.27906976744186046;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0031191515907673115;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9968808484092326;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)64) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
          result[0] += 0.9214659685863874;
          result[1] += 0;
          result[2] += 0.02931937172774869;
          result[3] += 0.049214659685863874;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9978572484114083;
          result[1] += 0.0002955519432540269;
          result[2] += 0.0015147037091768878;
          result[3] += 0.00011083197872026008;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00022166395744052016;
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
          result[0] += 0;
          result[1] += 0.029605263157894735;
          result[2] += 0;
          result[3] += 0.9703947368421053;
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
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9884868421052632;
          result[1] += 0;
          result[2] += 0.011513157894736841;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-190.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9954119289846399;
          result[1] += 0;
          result[2] += 0.002593257530420906;
          result[3] += 0.0011968880909634949;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007979253939756633;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
          result[0] += 0.9796954314720813;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.02030456852791878;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9907692307692307;
          result[4] += 0;
          result[5] += 0.009230769230769232;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          result[0] += 0.9905918301704728;
          result[1] += 0.0010453522032807976;
          result[2] += 0.0009649404953361209;
          result[3] += 0.0069154068832422;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00048247024766806047;
        } else {
          result[0] += 0.9998072474942175;
          result[1] += 0;
          result[2] += 0.00019275250578257516;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
          result[0] += 0.017543859649122806;
          result[1] += 0.039473684210526314;
          result[2] += 0;
          result[3] += 0.17543859649122806;
          result[4] += 0.7675438596491229;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.044596912521440824;
          result[4] += 0.9554030874785592;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
          result[0] += 0.1783343391671696;
          result[1] += 0.0024140012070006035;
          result[2] += 0.002715751357875679;
          result[3] += 0.8047676523838262;
          result[4] += 0.011768255884127943;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.026387625113739762;
          result[3] += 0.059144676979071886;
          result[4] += 0.9144676979071884;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
          result[0] += 0.011035955856176576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9889640441438234;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.02849002849002849;
          result[3] += 0;
          result[4] += 0.9715099715099715;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)47) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9682539682539683;
          result[4] += 0.022222222222222223;
          result[5] += 0.009523809523809525;
          result[6] += 0;
        } else {
          result[0] += 0.9810874704491725;
          result[1] += 0;
          result[2] += 0.014657210401891253;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00425531914893617;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)115.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
          result[0] += 0.9863013698630136;
          result[1] += 0;
          result[2] += 0.0136986301369863;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.08791725434884815;
          result[1] += 0.004231311706629055;
          result[2] += 0.005641748942172073;
          result[3] += 0.9017395392571698;
          result[4] += 0.0004701457451810061;
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
          result[0] += 0.02040816326530612;
          result[1] += 0.12244897959183673;
          result[2] += 0;
          result[3] += 0.8571428571428571;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)71) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.004901960784313725;
          result[3] += 0.9950980392156863;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9061224489795918;
          result[1] += 0;
          result[2] += 0.09387755102040816;
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
          result[0] += 0.9951456310679612;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0048543689320388345;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0006510416666666666;
          result[1] += 0.0006510416666666666;
          result[2] += 0.00390625;
          result[3] += 0.9583333333333334;
          result[4] += 0.030598958333333332;
          result[5] += 0.005859375;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
          result[0] += 0.9974519940915805;
          result[1] += 0.00051698670605613;
          result[2] += 0.001292466765140325;
          result[3] += 0.00048005908419497783;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000258493353028065;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06896551724137931;
          result[3] += 0.9310344827586207;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
          result[0] += 0.40742971887550206;
          result[1] += 0;
          result[2] += 0.0072289156626506035;
          result[3] += 0.57570281124498;
          result[4] += 0.009036144578313254;
          result[5] += 0;
          result[6] += 0.000602409638554217;
        } else {
          result[0] += 0.08585247883917775;
          result[1] += 0;
          result[2] += 0.0012091898428053204;
          result[3] += 0.14026602176541716;
          result[4] += 0.7714631197097944;
          result[5] += 0.0012091898428053204;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)95) ) ) {
          result[0] += 0.0006402048655569782;
          result[1] += 0.0003201024327784891;
          result[2] += 0;
          result[3] += 0.9958386683738797;
          result[4] += 0.0019206145966709346;
          result[5] += 0.0012804097311139564;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)14) ) ) {
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
          result[0] += 0;
          result[1] += 0.008349389852280027;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9916506101477199;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03463203463203463;
          result[3] += 0;
          result[4] += 0.9581529581529582;
          result[5] += 0.007215007215007215;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          result[0] += 0.9985692711231222;
          result[1] += 0.00015896987520864795;
          result[2] += 0.0012717590016691836;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9998566513761468;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00014334862385321102;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-9.5) ) ) {
          result[0] += 0.7931034482758621;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.20689655172413793;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.893455098934551;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.106544901065449;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
          result[0] += 0.9232175502742231;
          result[1] += 0.003199268738574041;
          result[2] += 0.01074040219378428;
          result[3] += 0.06192870201096893;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009140767824497259;
        } else {
          result[0] += 0.0029771749917300696;
          result[1] += 0;
          result[2] += 0.006946741647370162;
          result[3] += 0.9900760833608998;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
          result[0] += 0.9916897506925207;
          result[1] += 0;
          result[2] += 0.003777386048854193;
          result[3] += 0.003651473180559053;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008813900780659784;
        } else {
          result[0] += 0.9517923362175525;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.048207663782447466;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
          result[0] += 0.0019204389574759945;
          result[1] += 0.003840877914951989;
          result[2] += 0.00027434842249657066;
          result[3] += 0.9190672153635117;
          result[4] += 0.07407407407407407;
          result[5] += 0.0008230452674897119;
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
          result[0] += 0.8699186991869919;
          result[1] += 0;
          result[2] += 0.11382113821138212;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.01626016260162602;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)66) ) ) {
          result[0] += 0.9973662069722354;
          result[1] += 0.0004023850459084757;
          result[2] += 0.0020119252295423785;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00021948275231371402;
        } else {
          result[0] += 0.05084745762711865;
          result[1] += 0.13559322033898305;
          result[2] += 0;
          result[3] += 0.8135593220338984;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
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
          result[0] += 0.03076923076923077;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0.7692307692307693;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)101) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)108.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.045779685264663805;
          result[3] += 0;
          result[4] += 0.9542203147353362;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7058823529411765;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.29411764705882354;
          result[5] += 0;
          result[6] += 0;
        }
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)105.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9852143913257763;
          result[1] += 0;
          result[2] += 0.01232134056185313;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0024642681123706258;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          result[0] += 0.9869706840390879;
          result[1] += 0;
          result[2] += 0.010857763300760043;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002171552660152009;
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
          result[0] += 0.9982409850483729;
          result[1] += 0;
          result[2] += 0.001759014951627089;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
          result[0] += 0;
          result[1] += 0.018518518518518517;
          result[2] += 0;
          result[3] += 0.1111111111111111;
          result[4] += 0.8703703703703703;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.026490066225165563;
          result[1] += 0.004319032536711776;
          result[2] += 0.0048949035416066804;
          result[3] += 0.9608407716671465;
          result[4] += 0.002303484019579614;
          result[5] += 0.001151742009789807;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.011857707509881422;
          result[3] += 0.019104084321475624;
          result[4] += 0.9664031620553359;
          result[5] += 0.002635046113306983;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.017227235438884332;
          result[3] += 0.4265791632485644;
          result[4] += 0.5553732567678425;
          result[5] += 0.0008203445447087777;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0.8281250000000001;
          result[1] += 0;
          result[2] += 0.00892857142857143;
          result[3] += 0.15848214285714288;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.004464285714285715;
        } else {
          result[0] += 0.9878682842287695;
          result[1] += 0;
          result[2] += 0.006399146780429276;
          result[3] += 0.0041327822956939075;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001599786695107319;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0017482517482517483;
          result[3] += 0.9982517482517482;
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
