
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-3.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0.9919273461150353;
          result[1] += 0;
          result[2] += 0.008072653884964682;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
          result[0] += 0.31797426317974264;
          result[1] += 0.0020755500207555004;
          result[2] += 0.007056870070568701;
          result[3] += 0.6724782067247821;
          result[4] += 0.00041511000415110004;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7996102630724261;
          result[1] += 0.001407383349572372;
          result[2] += 0.0071451770055212735;
          result[3] += 0.18534156111291544;
          result[4] += 0.005521273140630075;
          result[5] += 0.0003247807729782397;
          result[6] += 0.0006495615459564793;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.998587570621469;
          result[5] += 0.0014124293785310734;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.001989389920424403;
          result[2] += 0.008952254641909815;
          result[3] += 0.9890583554376657;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          result[0] += 0.010101010101010102;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7828282828282829;
          result[4] += 0.20707070707070707;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.007722007722007722;
          result[2] += 0;
          result[3] += 0.15444015444015444;
          result[4] += 0.8378378378378378;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15) ) ) {
          result[0] += 0;
          result[1] += 0.6;
          result[2] += 0.24;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.16;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0009640102827763497;
          result[2] += 0.0051413881748071984;
          result[3] += 0.9932519280205656;
          result[4] += 0;
          result[5] += 0.0006426735218508998;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          result[0] += 0.9975374809879047;
          result[1] += 0.0007966973274426015;
          result[2] += 0.0013761135655826755;
          result[3] += 0.00018106757441877308;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00010864054465126386;
        } else {
          result[0] += 0.6875;
          result[1] += 0;
          result[2] += 0.28125;
          result[3] += 0.03125;
          result[4] += 0;
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
          result[0] += 0.013559322033898305;
          result[1] += 0.030508474576271188;
          result[2] += 0;
          result[3] += 0.9559322033898305;
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
          result[0] += 0.0025289017341040463;
          result[1] += 0;
          result[2] += 0.0050578034682080926;
          result[3] += 0.9924132947976878;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8446927374301676;
          result[1] += 0;
          result[2] += 0.01080074487895717;
          result[3] += 0.14338919925512103;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011173184357541898;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
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
          result[0] += 0.9961977186311787;
          result[1] += 0;
          result[2] += 0.0038022813688212928;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9996294313830444;
          result[1] += 0;
          result[2] += 0.00037056861695557294;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)97.5) ) ) {
          result[0] += 0.022432859399684046;
          result[1] += 0.0044233807266982625;
          result[2] += 0.010110584518167456;
          result[3] += 0.8830963665086888;
          result[4] += 0.07835703001579779;
          result[5] += 0.001579778830963665;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0364963503649635;
          result[3] += 0;
          result[4] += 0.9635036496350365;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 0.5844134263875043;
          result[1] += 0;
          result[2] += 0.0033233632436025264;
          result[3] += 0.4119308740445331;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003323363243602526;
        } else {
          result[0] += 0.9703400048227635;
          result[1] += 0;
          result[2] += 0.0038582107547624795;
          result[3] += 0.024113817217265496;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0016879672052085848;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-7) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.3344594594594595;
          result[1] += 0;
          result[2] += 0.0472972972972973;
          result[3] += 0.6182432432432432;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          result[0] += 0;
          result[1] += 0.02695035460992908;
          result[2] += 0;
          result[3] += 0.9730496453900709;
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
          result[0] += 0.9791666666666666;
          result[1] += 0;
          result[2] += 0.020833333333333332;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9975381585425899;
          result[1] += 0;
          result[2] += 0.002461841457410143;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9999161987765022;
          result[1] += 0;
          result[2] += 8.380122349786307e-05;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)55) ) ) {
          result[0] += 0.9518599562363239;
          result[1] += 0;
          result[2] += 0.02407002188183808;
          result[3] += 0.02407002188183808;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.08;
          result[1] += 0.0037735849056603774;
          result[2] += 0;
          result[3] += 0.8384905660377359;
          result[4] += 0.07773584905660377;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)35) ) ) {
          result[0] += 0.845945945945946;
          result[1] += 0.0033264033264033266;
          result[2] += 0.0033264033264033266;
          result[3] += 0.14636174636174637;
          result[4] += 0;
          result[5] += 0.0002079002079002079;
          result[6] += 0.0008316008316008316;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9978331527627302;
          result[4] += 0;
          result[5] += 0.0021668472372697724;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.0018001800180018;
          result[1] += 0.0027002700270027003;
          result[2] += 0.01575157515751575;
          result[3] += 0.6989198919891989;
          result[4] += 0.2785778577857786;
          result[5] += 0.0022502250225022503;
          result[6] += 0;
        } else {
          result[0] += 0.9836065573770492;
          result[1] += 0;
          result[2] += 0.01249024199843872;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0039032006245121;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.5378358392901158;
          result[1] += 0.0012324377618930244;
          result[2] += 0.008380576780872565;
          result[3] += 0.1456741434557555;
          result[4] += 0.3068770027113631;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.000946073793755913;
          result[3] += 0.7729422894985809;
          result[4] += 0.22563859981078524;
          result[5] += 0.0004730368968779565;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
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
          result[2] += 0;
          result[3] += 0.9690966719492868;
          result[4] += 0.030903328050713153;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9983766233766234;
          result[5] += 0.0016233766233766235;
          result[6] += 0;
        } else {
          result[0] += 0.3225806451612903;
          result[1] += 0.2903225806451613;
          result[2] += 0.3225806451612903;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.06451612903225806;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.12022792022792023;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8792022792022792;
          result[4] += 0;
          result[5] += 0.0005698005698005698;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)27) ) ) {
          result[0] += 0.9848484848484849;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.015151515151515152;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0017261219792865361;
          result[2] += 0.005178365937859608;
          result[3] += 0;
          result[4] += 0.9930955120828538;
          result[5] += 0;
          result[6] += 0;
        }
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
          result[0] += 0.9989608076009502;
          result[1] += 7.422802850356296e-05;
          result[2] += 0.0009649643705463184;
          result[3] += 0;
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
          result[0] += 0.8947368421052632;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.10526315789473684;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)55) ) ) {
          result[0] += 0.9903253114040392;
          result[1] += 0.001088402467045592;
          result[2] += 0.004595477083081389;
          result[3] += 0.0037489418309348166;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00024186721489902045;
        } else {
          result[0] += 0.1553672316384181;
          result[1] += 0.00847457627118644;
          result[2] += 0;
          result[3] += 0.8361581920903954;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          result[0] += 0.3673469387755102;
          result[1] += 0;
          result[2] += 0.0024247322691452818;
          result[3] += 0.6302283289553445;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9865188735769923;
          result[1] += 0;
          result[2] += 0.011384062312762134;
          result[3] += 0.0008987417615338527;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011983223487118037;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.9975471067008586;
          result[1] += 0;
          result[2] += 0.0023413981491805106;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001114951499609767;
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)97.5) ) ) {
          result[0] += 0.02688172043010753;
          result[1] += 0.005376344086021507;
          result[2] += 0.010240655401945726;
          result[3] += 0.9429083461341526;
          result[4] += 0.014080901177675373;
          result[5] += 0.0005120327700972863;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05196850393700787;
          result[3] += 0;
          result[4] += 0.9448818897637795;
          result[5] += 0.0031496062992125984;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3588039867109635;
          result[4] += 0.6411960132890365;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.00792507204610951;
          result[2] += 0;
          result[3] += 0.04899135446685879;
          result[4] += 0.9430835734870316;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)38) ) ) {
          result[0] += 0.9906566311964703;
          result[1] += 0;
          result[2] += 0.007786140669608098;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0015572281339216196;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
          result[0] += 0.7021978021978021;
          result[1] += 0;
          result[2] += 0.0032967032967032967;
          result[3] += 0.29120879120879123;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0032967032967032967;
        } else {
          result[0] += 0.960272417707151;
          result[1] += 0;
          result[2] += 0.009080590238365494;
          result[3] += 0.03064699205448354;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
          result[0] += 0.0007877116975187082;
          result[1] += 0.0003938558487593541;
          result[2] += 0.003938558487593542;
          result[3] += 0.8940527766837338;
          result[4] += 0.10003938558487595;
          result[5] += 0.0007877116975187082;
          result[6] += 0;
        } else {
          result[0] += 0.989247311827957;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.010752688172043012;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)82.5) ) ) {
          result[0] += 0.9958229808073168;
          result[1] += 0.00043210543372582897;
          result[2] += 0.0016924129487594969;
          result[3] += 0.0019444744517662306;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00010802635843145724;
        } else {
          result[0] += 0.7363083164300203;
          result[1] += 0;
          result[2] += 0.012170385395537525;
          result[3] += 0.2515212981744422;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)100.5) ) ) {
          result[0] += 0.15744438106103822;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8425556189389618;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.060689655172413794;
          result[1] += 0;
          result[2] += 0.037241379310344824;
          result[3] += 0;
          result[4] += 0.896551724137931;
          result[5] += 0.005517241379310344;
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
          result[0] += 0.9892221180880975;
          result[1] += 0;
          result[2] += 0.005623242736644799;
          result[3] += 0.0037488284910965324;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0014058106841611997;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)49) ) ) {
          result[0] += 0.9411764705882353;
          result[1] += 0;
          result[2] += 0.058823529411764705;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.06511627906976744;
          result[1] += 0;
          result[2] += 0.004651162790697674;
          result[3] += 0.9302325581395349;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 0.009019165727170236;
          result[2] += 0;
          result[3] += 0.9909808342728298;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-35) ) ) {
          result[0] += 0.02564102564102564;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05128205128205128;
          result[4] += 0.9230769230769231;
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
          result[0] += 0.003194888178913738;
          result[1] += 0.038338658146964855;
          result[2] += 0;
          result[3] += 0.20766773162939298;
          result[4] += 0.7507987220447284;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.01557632398753894;
          result[4] += 0.9844236760124611;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
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
          result[0] += 0.018867924528301886;
          result[1] += 0.03773584905660377;
          result[2] += 0;
          result[3] += 0.9433962264150944;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.16666666666666666;
          result[1] += 0.4583333333333333;
          result[2] += 0;
          result[3] += 0.375;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
          result[0] += 0;
          result[1] += 0.0015991471215351812;
          result[2] += 0.007995735607675906;
          result[3] += 0.9712153518123667;
          result[4] += 0.019189765458422176;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)19.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.014354066985645933;
          result[1] += 0;
          result[2] += 0.04784688995215311;
          result[3] += 0.937799043062201;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 0.10147492625368734;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8938053097345134;
          result[4] += 0.0023598820058997054;
          result[5] += 0.0023598820058997054;
          result[6] += 0;
        } else {
          result[0] += 0.9069767441860465;
          result[1] += 0.046511627906976744;
          result[2] += 0;
          result[3] += 0.023255813953488372;
          result[4] += 0;
          result[5] += 0.023255813953488372;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6666666666666666;
          result[3] += 0;
          result[4] += 0.3333333333333333;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.014742014742014743;
          result[3] += 0;
          result[4] += 0.9852579852579852;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 0.9995499099819964;
          result[1] += 0;
          result[2] += 0.0004500900180036007;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5164694595458906;
          result[1] += 0.0017588743204349215;
          result[2] += 0.006555804285257435;
          result[3] += 0.47393668052446436;
          result[4] += 0;
          result[5] += 0.0001598976654940838;
          result[6] += 0.0011192836584585865;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
          result[0] += 0.9815866460161763;
          result[1] += 0;
          result[2] += 0.0010325245224574087;
          result[3] += 0.017380829461366376;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9917374881964117;
          result[1] += 0;
          result[2] += 0.007318224740321058;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009442870632672333;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
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
          result[0] += 0.9942734430923408;
          result[1] += 0;
          result[2] += 0.005010737294201861;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007158196134574087;
        } else {
          result[0] += 0.9993878175696358;
          result[1] += 0;
          result[2] += 0.0006121824303642485;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.8642785626877295;
          result[1] += 0.0012237178774057182;
          result[2] += 0.006007342307264435;
          result[3] += 0.1272666592501947;
          result[4] += 0;
          result[5] += 0.0002224941595283124;
          result[6] += 0.0010012237178774058;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.008837707552222818;
          result[3] += 0.8007498660953402;
          result[4] += 0.18907337975361543;
          result[5] += 0.001339046598821639;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)97.5) ) ) {
          result[0] += 0.03838862559241706;
          result[1] += 0;
          result[2] += 0.013270142180094787;
          result[3] += 0.9459715639810427;
          result[4] += 0.0018957345971563982;
          result[5] += 0.00047393364928909954;
          result[6] += 0;
        } else {
          result[0] += 0.5108225108225108;
          result[1] += 0.021645021645021644;
          result[2] += 0;
          result[3] += 0.4675324675324675;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)19) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.011467889908256881;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9885321100917431;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)115.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.04776119402985075;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9492537313432836;
          result[4] += 0.0029850746268656717;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.36635006784260515;
          result[1] += 0.004070556309362279;
          result[2] += 0.004522840343735866;
          result[3] += 0.6250565355042967;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
          result[0] += 0.015625;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.984375;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.011029411764705883;
          result[1] += 0.04779411764705882;
          result[2] += 0;
          result[3] += 0.014705882352941176;
          result[4] += 0.9264705882352942;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90) ) ) {
          result[0] += 0.03026227303295225;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03160726294552791;
          result[4] += 0.9381304640215198;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.009950248756218905;
          result[1] += 0;
          result[2] += 0.014925373134328358;
          result[3] += 0.9751243781094527;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9875;
          result[1] += 0;
          result[2] += 0.0125;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9994982051183078;
          result[1] += 0;
          result[2] += 0.0005017948816922067;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.6267318663406684;
          result[1] += 0.0032599837000815;
          result[2] += 0.006519967400163;
          result[3] += 0.33333333333333337;
          result[4] += 0.02811735941320294;
          result[5] += 0.000814995925020375;
          result[6] += 0.0012224938875305626;
        } else {
          result[0] += 0;
          result[1] += 0.0005546311702717693;
          result[2] += 0.00887409872434831;
          result[3] += 0.8022739877981142;
          result[4] += 0.18829728230726567;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)36) ) ) {
          result[0] += 0.993138500635324;
          result[1] += 0;
          result[2] += 0.0055908513341804324;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0012706480304955528;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15) ) ) {
          result[0] += 0.015625;
          result[1] += 0;
          result[2] += 0.125;
          result[3] += 0;
          result[4] += 0.84375;
          result[5] += 0.015625;
          result[6] += 0;
        } else {
          result[0] += 0.0003424657534246576;
          result[1] += 0.0003424657534246576;
          result[2] += 0.0010273972602739727;
          result[3] += 0.9962328767123289;
          result[4] += 0;
          result[5] += 0.0020547945205479454;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
          result[0] += 0.9986244841815681;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.001375515818431912;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.02046783625730994;
          result[3] += 0;
          result[4] += 0.97953216374269;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8012422360248447;
          result[4] += 0.19875776397515527;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.38202247191011235;
          result[4] += 0.6179775280898876;
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
          result[1] += 0.3333333333333333;
          result[2] += 0;
          result[3] += 0.6666666666666666;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          result[0] += 0.9556650246305419;
          result[1] += 0.04433497536945813;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
          result[0] += 0.9623983739837398;
          result[1] += 0;
          result[2] += 0.03353658536585366;
          result[3] += 0.0040650406504065045;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9977363615785105;
          result[1] += 0.0004527276842978948;
          result[2] += 0.0014713649739681583;
          result[3] += 0.00015090922809929828;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00018863653512412283;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
          result[0] += 0.9416785206258891;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05832147937411095;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.3652956923825748;
          result[1] += 0;
          result[2] += 0.0034071550255536627;
          result[3] += 0.6312971525918715;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)93.5) ) ) {
          result[0] += 0.5006535947712418;
          result[1] += 0;
          result[2] += 0.011764705882352941;
          result[3] += 0.4875816993464052;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9409448818897639;
          result[1] += 0;
          result[2] += 0.005061867266591677;
          result[3] += 0.05286839145106862;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011248593925759283;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9821428571428571;
          result[5] += 0.017857142857142856;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
          result[0] += 0.0008025682182985554;
          result[1] += 0.0040128410914927765;
          result[2] += 0;
          result[3] += 0.9943820224719101;
          result[4] += 0;
          result[5] += 0.0008025682182985554;
          result[6] += 0;
        } else {
          result[0] += 0.9587628865979382;
          result[1] += 0;
          result[2] += 0.041237113402061855;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
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
          result[1] += 0.002053388090349076;
          result[2] += 0.004106776180698152;
          result[3] += 0.9917864476386037;
          result[4] += 0;
          result[5] += 0.002053388090349076;
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
          result[0] += 0.9757575757575757;
          result[1] += 0;
          result[2] += 0.024242424242424242;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          result[0] += 0.9974747474747475;
          result[1] += 0;
          result[2] += 0.0025252525252525255;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9997037037037036;
          result[1] += 0;
          result[2] += 0.0002962962962962963;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          result[0] += 0.9701033464566929;
          result[1] += 0.0015994094488188976;
          result[2] += 0.006028543307086614;
          result[3] += 0.0203001968503937;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001968503937007874;
        } else {
          result[0] += 0.2540106951871658;
          result[1] += 0.00267379679144385;
          result[2] += 0.026737967914438502;
          result[3] += 0.7165775401069518;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-30.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0007437709185570844;
          result[2] += 0.003718854592785422;
          result[3] += 0.9955373744886575;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9922480620155039;
          result[5] += 0.007751937984496124;
          result[6] += 0;
        } else {
          result[0] += 0.07654563297350343;
          result[1] += 0;
          result[2] += 0.015701668302257114;
          result[3] += 0.9057899901864573;
          result[4] += 0;
          result[5] += 0.001962708537782139;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
          result[0] += 0.3244803695150115;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.11893764434180139;
          result[4] += 0.5565819861431871;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0007173601147776184;
          result[2] += 0.013629842180774749;
          result[3] += 0.8464849354375896;
          result[4] += 0.13486370157819225;
          result[5] += 0.00430416068866571;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)82.5) ) ) {
          result[0] += 0.9958061509785647;
          result[1] += 0.00032260377087963294;
          result[2] += 0.002043157215571009;
          result[3] += 0.0017563983081224461;
          result[4] += 0;
          result[5] += 0;
          result[6] += 7.168972686214065e-05;
        } else {
          result[0] += 0.7338403041825096;
          result[1] += 0;
          result[2] += 0.01711026615969582;
          result[3] += 0.2490494296577947;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          result[0] += 0.4398854961832061;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5601145038167938;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9901870591842993;
          result[1] += 0;
          result[2] += 0.006746396810794235;
          result[3] += 0.0009199632014719411;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0021465808034345293;
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
          result[0] += 0.27715355805243447;
          result[1] += 0;
          result[2] += 0.04119850187265917;
          result[3] += 0.6816479400749064;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
          result[0] += 0;
          result[1] += 0.0037629350893697085;
          result[2] += 0;
          result[3] += 0.9962370649106302;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.8333333333333334;
          result[2] += 0;
          result[3] += 0.16666666666666666;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
          result[0] += 0;
          result[1] += 0.010856453558504224;
          result[2] += 0.007237635705669482;
          result[3] += 0.8733413751507841;
          result[4] += 0.10856453558504223;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7525510204081632;
          result[4] += 0.24744897959183673;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          result[0] += 0.9972826086956522;
          result[1] += 0.002717391304347826;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)84) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04633204633204633;
          result[4] += 0.9536679536679536;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.06666666666666667;
          result[1] += 0;
          result[2] += 0.02;
          result[3] += 0.2966666666666667;
          result[4] += 0.6166666666666667;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          result[0] += 0.9991119005328597;
          result[1] += 0;
          result[2] += 0.0008880994671403197;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9998664975635805;
          result[1] += 0;
          result[2] += 6.675121820973233e-05;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 6.675121820973233e-05;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 0.46761972837741245;
          result[1] += 0.0014295925661186562;
          result[2] += 0.005003573981415297;
          result[3] += 0.4800571837026447;
          result[4] += 0.0453180843459614;
          result[5] += 0;
          result[6] += 0.0005718370264474624;
        } else {
          result[0] += 0.964294569799157;
          result[1] += 0;
          result[2] += 0.004959087527894868;
          result[3] += 0.028762707661790232;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001983635011157947;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)27) ) ) {
          result[0] += 0.016091954022988506;
          result[1] += 0;
          result[2] += 0.01532567049808429;
          result[3] += 0.8567049808429119;
          result[4] += 0.1103448275862069;
          result[5] += 0.0015325670498084292;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9863387978142076;
          result[5] += 0.01366120218579235;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.020089285714285716;
          result[3] += 0.9799107142857143;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9903846153846154;
          result[1] += 0;
          result[2] += 0.009615384615384616;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-11) ) ) {
          result[0] += 0.169921875;
          result[1] += 0.0146484375;
          result[2] += 0;
          result[3] += 0.8154296875;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)373) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9992893068007873;
          result[1] += 0;
          result[2] += 0.0006560244915810191;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 5.4668707631751595e-05;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
          result[0] += 0.923535648025444;
          result[1] += 0.0014577259475218659;
          result[2] += 0.005300821627352239;
          result[3] += 0.06838059899284389;
          result[4] += 0;
          result[5] += 0.00013252054068380598;
          result[6] += 0.0011926848661542539;
        } else {
          result[0] += 0.013016845329249618;
          result[1] += 0;
          result[2] += 0.016079632465543645;
          result[3] += 0.8644716692189893;
          result[4] += 0.10336906584992343;
          result[5] += 0.0030627871362940277;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
          result[0] += 0;
          result[1] += 0.00033772374197906115;
          result[2] += 0.005065856129685917;
          result[3] += 0.994596420128335;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.014804845222072678;
          result[3] += 0;
          result[4] += 0.9811574697173621;
          result[5] += 0.004037685060565276;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9870317002881844;
          result[1] += 0;
          result[2] += 0.012968299711815562;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0.9998807678550137;
          result[1] += 0;
          result[2] += 0.0001192321449862883;
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
          result[0] += 0.9606299212598425;
          result[1] += 0;
          result[2] += 0.03937007874015748;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-35) ) ) {
          result[0] += 0.031914893617021274;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.010638297872340425;
          result[4] += 0.9574468085106383;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.3088757396449704;
          result[1] += 0.004733727810650888;
          result[2] += 0.008284023668639054;
          result[3] += 0.6775147928994083;
          result[4] += 0.000591715976331361;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
          result[0] += 0;
          result[1] += 0.008620689655172415;
          result[2] += 0;
          result[3] += 0.9870689655172414;
          result[4] += 0.004310344827586208;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7290041719571921;
          result[1] += 0.0016325049882096863;
          result[2] += 0.003809178305822601;
          result[3] += 0.26355886087429714;
          result[4] += 0.0005441683294032287;
          result[5] += 0.0007255577725376383;
          result[6] += 0.0007255577725376383;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90) ) ) {
          result[0] += 0.009286618826509076;
          result[1] += 0.003799071338117349;
          result[2] += 0.010130856901646263;
          result[3] += 0.2739552553820177;
          result[4] += 0.7019839594765724;
          result[5] += 0.0008442380751371887;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0054787372815027395;
          result[3] += 0.8152882859379077;
          result[4] += 0.17818940777458908;
          result[5] += 0.0010435690060005217;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)42) ) ) {
          result[0] += 0.9915722173786691;
          result[1] += 0;
          result[2] += 0.006684103458297007;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001743679163034002;
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
          result[0] += 0.0009254974548819991;
          result[1] += 0.0009254974548819991;
          result[2] += 0;
          result[3] += 0.994909763998149;
          result[4] += 0.0018509949097639982;
          result[5] += 0.0013882461823229986;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.02584493041749503;
          result[3] += 0;
          result[4] += 0.9721669980119284;
          result[5] += 0.0019880715705765406;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          result[0] += 0.9970238095238095;
          result[1] += 0;
          result[2] += 0.00248015873015873;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000496031746031746;
        } else {
          result[0] += 0.999749707992658;
          result[1] += 0;
          result[2] += 0.0002502920073418989;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9362441081617465;
          result[1] += 0.0017365418010419254;
          result[2] += 0.00880674770528405;
          result[3] += 0.05160009923096007;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001612503100967502;
        } else {
          result[0] += 0;
          result[1] += 0.001793400286944046;
          result[2] += 0.005021520803443328;
          result[3] += 0.9931850789096126;
          result[4] += 0;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
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
          result[1] += 0.006168080185042405;
          result[2] += 0.0007710100231303007;
          result[3] += 0.9930609097918273;
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
          result[0] += 0.891566265060241;
          result[1] += 0;
          result[2] += 0.10843373493975904;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
          result[0] += 0.9976360478579699;
          result[1] += 0;
          result[2] += 0.00043419529139328446;
          result[3] += 0.0018815129293708994;
          result[4] += 4.8243921265920496e-05;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.06;
          result[1] += 0.006666666666666667;
          result[2] += 0;
          result[3] += 0.92;
          result[4] += 0.013333333333333334;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-27.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2857142857142857;
          result[3] += 0;
          result[4] += 0.7142857142857143;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.028208744710860368;
          result[1] += 0;
          result[2] += 0.015514809590973202;
          result[3] += 0;
          result[4] += 0.9562764456981664;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 0.9993081978554134;
          result[1] += 0;
          result[2] += 0.0006918021445866483;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5820405183427634;
          result[1] += 0.0009125752874612156;
          result[2] += 0.005475451724767294;
          result[3] += 0.40901624384011687;
          result[4] += 0.0011863478736995805;
          result[5] += 0.00036503011498448625;
          result[6] += 0.0010038328162073373;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          result[0] += 0.980590717299578;
          result[1] += 0;
          result[2] += 0.008438818565400843;
          result[3] += 0.010970464135021098;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.003875968992248062;
          result[1] += 0;
          result[2] += 0.03617571059431524;
          result[3] += 0.6072351421188631;
          result[4] += 0.35271317829457366;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)115.5) ) ) {
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
          result[1] += 0.007216494845360825;
          result[2] += 0;
          result[3] += 0.9927835051546392;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0.013215859030837005;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.022026431718061675;
          result[4] += 0.9647577092511013;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.052083333333333336;
          result[2] += 0;
          result[3] += 0.5416666666666666;
          result[4] += 0.40625;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
          result[0] += 0.07954545454545454;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.1893939393939394;
          result[4] += 0.7310606060606061;
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
          result[0] += 0.8918918918918919;
          result[1] += 0;
          result[2] += 0.10810810810810811;
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
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          result[0] += 0.9992418498862775;
          result[1] += 0;
          result[2] += 0.000758150113722517;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
          result[0] += 0.6603632744463798;
          result[1] += 0;
          result[2] += 0.010699178900223937;
          result[3] += 0.3279422741975616;
          result[4] += 0.0007464543418760887;
          result[5] += 0;
          result[6] += 0.00024881811395869625;
        } else {
          result[0] += 0.2345360824742268;
          result[1] += 0;
          result[2] += 0.006443298969072165;
          result[3] += 0.5728092783505154;
          result[4] += 0.18363402061855671;
          result[5] += 0.002577319587628866;
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
          result[0] += 0.9989124524197933;
          result[1] += 0;
          result[2] += 0.001087547580206634;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.7548324742268041;
          result[1] += 0.0033827319587628867;
          result[2] += 0.007409793814432989;
          result[3] += 0.20827963917525774;
          result[4] += 0.02496778350515464;
          result[5] += 0.0008054123711340206;
          result[6] += 0.00032216494845360824;
        } else {
          result[0] += 0;
          result[1] += 0.0012987012987012987;
          result[2] += 0.0004329004329004329;
          result[3] += 0.7787878787878788;
          result[4] += 0.21948051948051947;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0.02336448598130841;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.014018691588785047;
          result[4] += 0.9626168224299065;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.15853658536585366;
          result[2] += 0;
          result[3] += 0.45121951219512196;
          result[4] += 0.3902439024390244;
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
          result[1] += 0.004721435316336166;
          result[2] += 0;
          result[3] += 0.9952785646836638;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
          result[0] += 0.9150943396226415;
          result[1] += 0;
          result[2] += 0.08490566037735849;
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0.0003720238095238095;
          result[1] += 0.0003720238095238095;
          result[2] += 0;
          result[3] += 0.9951636904761905;
          result[4] += 0.0033482142857142855;
          result[5] += 0.000744047619047619;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.009221311475409836;
          result[3] += 0;
          result[4] += 0.9825819672131147;
          result[5] += 0.00819672131147541;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          result[0] += 0.9659090909090909;
          result[1] += 0;
          result[2] += 0.03409090909090909;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-9422.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6666666666666666;
          result[4] += 0.3333333333333333;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.009400705052878966;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9905992949471211;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
          result[0] += 0.9865642994241842;
          result[1] += 0;
          result[2] += 0.013435700575815739;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.998641304347826;
          result[1] += 0;
          result[2] += 0.001358695652173913;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0.9988222698072805;
          result[1] += 0;
          result[2] += 0.001177730192719486;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          result[0] += 0.9469387755102041;
          result[1] += 0.0012368583797155227;
          result[2] += 0.005936920222634508;
          result[3] += 0.04353741496598639;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002350030921459493;
        } else {
          result[0] += 0.2598274209012464;
          result[1] += 0.005752636625119847;
          result[2] += 0.005752636625119847;
          result[3] += 0.7286673058485139;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)103.5) ) ) {
          result[0] += 0;
          result[1] += 0.0010507880910683013;
          result[2] += 0;
          result[3] += 0.9989492119089317;
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
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)1753.5) ) ) {
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
          result[0] += 0.9861431870669746;
          result[1] += 0;
          result[2] += 0.013856812933025405;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9992269635126778;
          result[1] += 0;
          result[2] += 0.0007215007215007215;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 5.1535765821480104e-05;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-4) ) ) {
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          result[0] += 0.017458279845956354;
          result[1] += 0.004878048780487805;
          result[2] += 0.013093709884467265;
          result[3] += 0.9483953786906291;
          result[4] += 0.015147625160462131;
          result[5] += 0.0010269576379974327;
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
          result[1] += 0.03409090909090909;
          result[2] += 0;
          result[3] += 0.9659090909090909;
          result[4] += 0;
          result[5] += 0;
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
          result[0] += 0.978634061998271;
          result[1] += 0;
          result[2] += 0.006669136717302705;
          result[3] += 0.013214770902803508;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0014820303816228233;
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)110) ) ) {
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
          result[1] += 0.05357142857142857;
          result[2] += 0;
          result[3] += 0.9464285714285714;
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
          result[0] += 0.16666666666666666;
          result[1] += 0.5833333333333334;
          result[2] += 0;
          result[3] += 0.25;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
          result[0] += 0.20426829268292682;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7926829268292683;
          result[4] += 0.003048780487804878;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.568338249754179;
          result[1] += 0;
          result[2] += 0.01769911504424779;
          result[3] += 0.39921337266470014;
          result[4] += 0.014749262536873158;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.1819767441860465;
          result[1] += 0.005813953488372093;
          result[2] += 0.009883720930232558;
          result[3] += 0.8023255813953488;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)27.5) ) ) {
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
          result[2] += 0.017289073305670817;
          result[3] += 0.9806362378976486;
          result[4] += 0;
          result[5] += 0.002074688796680498;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9829268292682927;
          result[1] += 0;
          result[2] += 0.01707317073170732;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9994927621054275;
          result[1] += 0;
          result[2] += 0.0005072378945725545;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
          result[0] += 0.5281157513975665;
          result[1] += 0.002301874383426504;
          result[2] += 0.0034528115751397558;
          result[3] += 0.46514304505097;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009865175928970731;
        } else {
          result[0] += 0.9291243347847121;
          result[1] += 0;
          result[2] += 0.01088534107402032;
          result[3] += 0.05853894533139816;
          result[4] += 0;
          result[5] += 0.0004837929366231253;
          result[6] += 0.0009675858732462506;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-2467) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-114) ) ) {
          result[0] += 0.16666666666666666;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8333333333333334;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0.015337423312883436;
          result[2] += 0;
          result[3] += 0.19631901840490798;
          result[4] += 0.7883435582822086;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          result[0] += 0.98;
          result[1] += 0;
          result[2] += 0.02;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7837837837837838;
          result[1] += 0;
          result[2] += 0.21621621621621623;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
          result[0] += 0.08668730650154799;
          result[1] += 0.0020639834881320948;
          result[2] += 0;
          result[3] += 0.9107327141382869;
          result[4] += 0.0005159958720330237;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.15691736304549675;
          result[4] += 0.8430826369545033;
          result[5] += 0;
          result[6] += 0;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          result[0] += 0.993;
          result[1] += 0;
          result[2] += 0.007;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9996714444125016;
          result[1] += 0;
          result[2] += 0.0003285555874984599;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9302047327838341;
          result[1] += 0.0018612071257644244;
          result[2] += 0.004653017814411061;
          result[3] += 0.0618186652486041;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0014623770273863334;
        } else {
          result[0] += 0;
          result[1] += 0.0003040437823046519;
          result[2] += 0.009121313469139556;
          result[3] += 0.90392216479173;
          result[4] += 0.08665247795682578;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)25) ) ) {
          result[0] += 0.01568627450980392;
          result[1] += 0;
          result[2] += 0.01803921568627451;
          result[3] += 0.8596078431372549;
          result[4] += 0.10352941176470588;
          result[5] += 0.003137254901960784;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9900744416873449;
          result[5] += 0.009925558312655087;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          result[0] += 0.9995562786570034;
          result[1] += 0;
          result[2] += 0.00044372134299659814;
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          result[0] += 0.9985521235521235;
          result[1] += 0;
          result[2] += 0.0014478764478764478;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          result[0] += 0.029930686830497794;
          result[1] += 0.005356017643352237;
          result[2] += 0.020793950850661626;
          result[3] += 0.8664146187775678;
          result[4] += 0.0759294265910523;
          result[5] += 0.001575299306868305;
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
          result[0] += 0.9830204081632653;
          result[1] += 0;
          result[2] += 0.0034285714285714284;
          result[3] += 0.01289795918367347;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006530612244897959;
        } else {
          result[0] += 0.3876967095851216;
          result[1] += 0;
          result[2] += 0.005007153075822604;
          result[3] += 0.6049117787315212;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002384358607534573;
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
          result[0] += 0.1454248366013072;
          result[1] += 0.010620915032679739;
          result[2] += 0;
          result[3] += 0.8439542483660131;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
          result[0] += 0.021247429746401644;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.12748457847840988;
          result[4] += 0.8512679917751885;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6046511627906976;
          result[1] += 0;
          result[2] += 0.046511627906976744;
          result[3] += 0.3488372093023256;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9722222222222222;
          result[5] += 0.027777777777777776;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)29.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0047489823609226595;
          result[2] += 0.008819538670284939;
          result[3] += 0.9843962008141113;
          result[4] += 0;
          result[5] += 0.0020352781546811396;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)32.5) ) ) {
          result[0] += 0.9993084370677732;
          result[1] += 0;
          result[2] += 0.0006915629322268327;
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
          result[0] += 0.5479105107640354;
          result[1] += 0;
          result[2] += 0.005487547488391726;
          result[3] += 0.4461798227100042;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00042211903756859433;
        } else {
          result[0] += 0.8836872586872587;
          result[1] += 0;
          result[2] += 0.007722007722007722;
          result[3] += 0.10569498069498069;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0028957528957528956;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)27.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0006825938566552901;
          result[2] += 0.005460750853242321;
          result[3] += 0.9924914675767919;
          result[4] += 0;
          result[5] += 0.0013651877133105802;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
          result[0] += 0.31951640759930916;
          result[1] += 0.017271157167530225;
          result[2] += 0;
          result[3] += 0.6632124352331606;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9890893607962106;
          result[1] += 0.0007451168236734259;
          result[2] += 0.0023950183618074404;
          result[3] += 0.007451168236734259;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003193357815743254;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
          result[0] += 0.5222121486854034;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.47778785131459656;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8972841225626741;
          result[1] += 0;
          result[2] += 0.005919220055710306;
          result[3] += 0.0967966573816156;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)111.5) ) ) {
          result[0] += 0.008126195028680689;
          result[1] += 0;
          result[2] += 0.013862332695984704;
          result[3] += 0.7901529636711281;
          result[4] += 0.18594646271510518;
          result[5] += 0.0019120458891013384;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.028368794326241134;
          result[2] += 0;
          result[3] += 0.18439716312056736;
          result[4] += 0.7872340425531915;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
          result[0] += 0.7534927041291525;
          result[1] += 0;
          result[2] += 0.003725551071095933;
          result[3] += 0.24278174479975162;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6855524079320113;
          result[1] += 0;
          result[2] += 0.0113314447592068;
          result[3] += 0.29933899905571293;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.003777148253068933;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82) ) ) {
          result[0] += 0.09594333547971667;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.901481004507405;
          result[4] += 0;
          result[5] += 0.0025756600128783;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.008561643835616438;
          result[3] += 0;
          result[4] += 0.988013698630137;
          result[5] += 0.003424657534246575;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.02631578947368421;
          result[2] += 0;
          result[3] += 0.9736842105263158;
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
          result[0] += 0.9981578947368421;
          result[1] += 0;
          result[2] += 0.0015789473684210526;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002631578947368421;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.8527433628318585;
          result[1] += 0.0024778761061946906;
          result[2] += 0.008849557522123895;
          result[3] += 0.13522123893805313;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007079646017699116;
        } else {
          result[0] += 0;
          result[1] += 0.0022975301550832855;
          result[2] += 0.0005743825387708214;
          result[3] += 0.9971280873061459;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
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
          result[2] += 0;
          result[3] += 0.954983922829582;
          result[4] += 0.04501607717041801;
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
          result[0] += 0.00047258979206049156;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9026465028355388;
          result[4] += 0.09451795841209831;
          result[5] += 0.002362948960302458;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)33.5) ) ) {
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
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9995497523638001;
          result[5] += 0.00045024763619990995;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.4642857142857143;
          result[2] += 0.4642857142857143;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.07142857142857142;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
          result[0] += 0.9978529253891573;
          result[1] += 0;
          result[2] += 0.0021470746108427268;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9996182477572055;
          result[1] += 0;
          result[2] += 0.0003817522427944264;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9922244759972955;
          result[1] += 0.004732927653820149;
          result[2] += 0.002704530087897228;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003380662609871535;
        } else {
          result[0] += 0;
          result[1] += 0.0007544322897019992;
          result[2] += 0.0033949453036589967;
          result[3] += 0.995850622406639;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0.026573426573426574;
          result[1] += 0.012587412587412588;
          result[2] += 0.03776223776223776;
          result[3] += 0.9230769230769231;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.960074976569822;
          result[1] += 0;
          result[2] += 0.0071227741330834125;
          result[3] += 0.03186504217432053;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009372071227741332;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9923224568138196;
          result[1] += 0;
          result[2] += 0.007677543186180422;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9986979166666666;
          result[1] += 0;
          result[2] += 0.0013020833333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          result[0] += 0.9992822537233088;
          result[1] += 0;
          result[2] += 0.0007177462766911897;
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          result[0] += 0.9167697254513976;
          result[1] += 0.0019787286668315612;
          result[2] += 0.006183527083848628;
          result[3] += 0.07370764283947565;
          result[4] += 0;
          result[5] += 0.00024734108335394515;
          result[6] += 0.0011130348750927532;
        } else {
          result[0] += 0.17912291537986413;
          result[1] += 0.0033971587399629407;
          result[2] += 0.019456454601605933;
          result[3] += 0.7930821494749847;
          result[4] += 0.0033971587399629407;
          result[5] += 0.0015441630636195184;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
          result[0] += 0;
          result[1] += 0.0006662225183211193;
          result[2] += 0.004996668887408394;
          result[3] += 0.9943371085942705;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.020833333333333332;
          result[3] += 0;
          result[4] += 0.9732142857142857;
          result[5] += 0.005952380952380952;
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
          result[1] += 0.018306636155606407;
          result[2] += 0;
          result[3] += 0.9816933638443935;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)19) ) ) {
          result[0] += 0.9912176596249703;
          result[1] += 0;
          result[2] += 0.00035604082601471633;
          result[3] += 0.008307619273676715;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00011868027533823879;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9949748743718593;
          result[4] += 0.005025125628140704;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          result[0] += 0.5938740782756665;
          result[1] += 0;
          result[2] += 0.007941009642654566;
          result[3] += 0.3630175836642087;
          result[4] += 0.03516732841747022;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.11198428290766209;
          result[1] += 0.0068762278978389;
          result[2] += 0;
          result[3] += 0.5088408644400786;
          result[4] += 0.37229862475442044;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)1.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          result[0] += 0.7692307692307693;
          result[1] += 0;
          result[2] += 0.012195121951219513;
          result[3] += 0.20919324577861162;
          result[4] += 0.006566604127579738;
          result[5] += 0;
          result[6] += 0.0028142589118198874;
        } else {
          result[0] += 0.35714285714285715;
          result[1] += 0;
          result[2] += 0.013528138528138528;
          result[3] += 0.5568181818181818;
          result[4] += 0.07251082251082251;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
          result[0] += 0.006024096385542169;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7349397590361446;
          result[4] += 0.25903614457831325;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9711538461538461;
          result[1] += 0;
          result[2] += 0.019230769230769232;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.009615384615384616;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
          result[0] += 0.9991708126036484;
          result[1] += 0;
          result[2] += 0.0008291873963515755;
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
          result[0] += 0.9639040607931608;
          result[1] += 0.00379957254808834;
          result[2] += 0.004037045832343861;
          result[3] += 0.027309427689384946;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000949893137022085;
        } else {
          result[0] += 0;
          result[1] += 0.0015923566878980893;
          result[2] += 0.0021231422505307855;
          result[3] += 0.9723991507430998;
          result[4] += 0.02388535031847134;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.2994074590449634;
          result[1] += 0.0027884280237016382;
          result[2] += 0.01673056814220983;
          result[3] += 0.6796793307772743;
          result[4] += 0;
          result[5] += 0.0013942140118508191;
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
          result[1] += 0.013888888888888888;
          result[2] += 0;
          result[3] += 0.9861111111111112;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)115.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
          result[0] += 0.1979045401629802;
          result[1] += 0.0034924330616996507;
          result[2] += 0;
          result[3] += 0.7986030267753201;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5365239294710328;
          result[1] += 0;
          result[2] += 0.015113350125944584;
          result[3] += 0.44836272040302266;
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
          result[0] += 0.027777777777777776;
          result[1] += 0.1388888888888889;
          result[2] += 0;
          result[3] += 0.8333333333333334;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)70) ) ) {
          result[0] += 0.5088105726872246;
          result[1] += 0;
          result[2] += 0.03524229074889868;
          result[3] += 0.45594713656387664;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-166) ) ) {
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
          result[0] += 0.9987216946676406;
          result[1] += 0;
          result[2] += 0.0012783053323593865;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)33.5) ) ) {
          result[0] += 0.006644518272425249;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.08637873754152824;
          result[4] += 0.9069767441860465;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0034904013961605585;
          result[2] += 0;
          result[3] += 0.2774869109947644;
          result[4] += 0.7155322862129145;
          result[5] += 0.0034904013961605585;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.7714146658014277;
          result[1] += 0.0014600908500973396;
          result[2] += 0.004055807916937055;
          result[3] += 0.21268656716417914;
          result[4] += 0.008760545100584037;
          result[5] += 0.0009733939000648931;
          result[6] += 0.0006489292667099287;
        } else {
          result[0] += 0.41416100872938894;
          result[1] += 0;
          result[2] += 0.010863239573229874;
          result[3] += 0.5724539282250243;
          result[4] += 0.0013579049466537342;
          result[5] += 0.00019398642095053346;
          result[6] += 0.0009699321047526673;
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
