
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
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)3.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)6504) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)875.5) ) ) {
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)34.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          result[0] += 0.9973577593799542;
          result[1] += 0;
          result[2] += 0.0026422406200457987;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9986017541629592;
          result[1] += 0;
          result[2] += 0.001271132579128003;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00012711325791280032;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
          result[0] += 0.9748369058713887;
          result[1] += 0.002640571606088848;
          result[2] += 0.002951227089158124;
          result[3] += 0.018639328984156572;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009319664492078286;
        } else {
          result[0] += 0.6729141475211609;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3252720677146312;
          result[4] += 0;
          result[5] += 0.0018137847642079807;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
          result[0] += 0.13213213213213212;
          result[1] += 0.003003003003003003;
          result[2] += 0.014091014091014091;
          result[3] += 0.6558096558096558;
          result[4] += 0.1945021945021945;
          result[5] += 0.000462000462000462;
          result[6] += 0;
        } else {
          result[0] += 0.0038240917782026767;
          result[1] += 0.010516252390057362;
          result[2] += 0;
          result[3] += 0.11567877629063097;
          result[4] += 0.869980879541109;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)101) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
          result[0] += 0;
          result[1] += 0.00196078431372549;
          result[2] += 0;
          result[3] += 0.9980392156862745;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6666666666666666;
          result[5] += 0.3333333333333333;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14210526315789473;
          result[3] += 0;
          result[4] += 0.8578947368421053;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0038240917782026767;
          result[3] += 0;
          result[4] += 0.994263862332696;
          result[5] += 0.0019120458891013384;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
          result[0] += 0.003401360544217687;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9931972789115646;
          result[5] += 0.003401360544217687;
          result[6] += 0;
        } else {
          result[0] += 0.14021268215833005;
          result[1] += 0.00039385584875935406;
          result[2] += 0.0019692792437967705;
          result[3] += 0.8562426152028357;
          result[4] += 0;
          result[5] += 0.0011815675462780622;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)82.5) ) ) {
          result[0] += 0.9954334589736156;
          result[1] += 0.0005798782255726297;
          result[2] += 0.001920846622209336;
          result[3] += 0.0018483618440127572;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00021745433458973616;
        } else {
          result[0] += 0.7387033398821219;
          result[1] += 0;
          result[2] += 0.021611001964636545;
          result[3] += 0.23968565815324167;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          result[0] += 0.012375571697605597;
          result[1] += 0;
          result[2] += 0.009416195856873822;
          result[3] += 0.7944578961528114;
          result[4] += 0.18375033629270918;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9188191881918819;
          result[1] += 0;
          result[2] += 0.006918819188191882;
          result[3] += 0.06595940959409594;
          result[4] += 0.005535055350553505;
          result[5] += 0.0018450184501845018;
          result[6] += 0.0009225092250922509;
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
          result[0] += 0.8031088082901554;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.19689119170984457;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5214285714285715;
          result[1] += 0;
          result[2] += 0.025;
          result[3] += 0.45357142857142857;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0.007207207207207207;
          result[2] += 0;
          result[3] += 0.9927927927927928;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.14285714285714285;
          result[1] += 0.6428571428571429;
          result[2] += 0;
          result[3] += 0.21428571428571427;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
          result[0] += 0.0003512469265893924;
          result[1] += 0.0007024938531787848;
          result[2] += 0.0031612223393045315;
          result[3] += 0.9943800491745698;
          result[4] += 0.0007024938531787848;
          result[5] += 0.0007024938531787848;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6146788990825688;
          result[4] += 0.3853211009174312;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0;
          result[1] += 0.022727272727272728;
          result[2] += 0;
          result[3] += 0.15384615384615385;
          result[4] += 0.8234265734265734;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.06777217015140591;
          result[4] += 0.9322278298485941;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0014641288433382138;
          result[3] += 0;
          result[4] += 0.9985358711566618;
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)104) ) ) {
          result[0] += 0.5763239875389408;
          result[1] += 0.024922118380062305;
          result[2] += 0;
          result[3] += 0.3987538940809969;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)77.5) ) ) {
          result[0] += 0.9979521167665786;
          result[1] += 0.000781919052760919;
          result[2] += 0.0009308560151915702;
          result[3] += 7.446848121532561e-05;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00026063968425363965;
        } else {
          result[0] += 0.9449152542372882;
          result[1] += 0;
          result[2] += 0.05367231638418079;
          result[3] += 0.0014124293785310734;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
          result[0] += 0.27715763680914784;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7228423631908522;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.990602975724354;
          result[1] += 0;
          result[2] += 0.009397024275646046;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          result[0] += 0.9248777977874968;
          result[1] += 0;
          result[2] += 0.004888088500128634;
          result[3] += 0.06920504244918961;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0010290712631849757;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.021897810218978103;
          result[3] += 0.9781021897810219;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
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
          result[0] += 0.9936801166747691;
          result[1] += 0;
          result[2] += 0.00583373845405931;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004861448711716091;
        } else {
          result[0] += 0.9996710120491837;
          result[1] += 0;
          result[2] += 0.00032898795081630133;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
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
          result[2] += 0.0015220700152207;
          result[3] += 0;
          result[4] += 0.9984779299847792;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          result[0] += 0.653990770808409;
          result[1] += 0.000512732866176722;
          result[2] += 0.006836438215689627;
          result[3] += 0.33772004785506754;
          result[4] += 0.00017091095539224066;
          result[5] += 0.00034182191078448133;
          result[6] += 0.0004272773884806017;
        } else {
          result[0] += 0.0019181585677749361;
          result[1] += 0;
          result[2] += 0.023017902813299233;
          result[3] += 0.7781329923273658;
          result[4] += 0.1969309462915601;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)76) ) ) {
          result[0] += 0.34226190476190477;
          result[1] += 0;
          result[2] += 0.026785714285714284;
          result[3] += 0.6309523809523809;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
          result[0] += 0.15433212996389892;
          result[1] += 0.009025270758122744;
          result[2] += 0;
          result[3] += 0.8366425992779783;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
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
          result[0] += 0.1;
          result[1] += 0.8;
          result[2] += 0;
          result[3] += 0.1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9724950884086444;
          result[1] += 0;
          result[2] += 0.0275049115913556;
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
          result[0] += 0.08345053914674168;
          result[1] += 0.007032348804500703;
          result[2] += 0.005157055789967183;
          result[3] += 0.9043600562587905;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.004273504273504274;
          result[3] += 0.9957264957264957;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9109311740890689;
          result[1] += 0;
          result[2] += 0.08906882591093117;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          result[0] += 0.1739130434782609;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8212560386473431;
          result[4] += 0.0019323671497584543;
          result[5] += 0.0028985507246376816;
          result[6] += 0;
        } else {
          result[0] += 0.05555555555555555;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9444444444444444;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0030257186081694403;
          result[3] += 0;
          result[4] += 0.9969742813918305;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4098360655737705;
          result[3] += 0;
          result[4] += 0.5573770491803278;
          result[5] += 0.03278688524590164;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          result[0] += 0.9948768175996384;
          result[1] += 0.00030136367060950805;
          result[2] += 0.0012807956000904092;
          result[3] += 0.003541023129661719;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9902588737656793;
          result[1] += 0;
          result[2] += 0.00013344008540165468;
          result[3] += 0.009073925807312519;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005337603416066187;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
          result[0] += 0.9144008056394763;
          result[1] += 0.0010985992859104642;
          result[2] += 0.002838048155268699;
          result[3] += 0.08038084775244896;
          result[4] += 0;
          result[5] += 0.0004577497024626934;
          result[6] += 0.0008239494644328481;
        } else {
          result[0] += 0.4989458889669712;
          result[1] += 0;
          result[2] += 0.0030452096509721244;
          result[3] += 0.49800890138205667;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
          result[0] += 0.9933481152993349;
          result[1] += 0;
          result[2] += 0.0066518847006651885;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9614035087719298;
          result[1] += 0;
          result[2] += 0.031578947368421054;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.007017543859649123;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          result[0] += 0.9985248017702378;
          result[1] += 0;
          result[2] += 0.0014751982297621243;
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
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.7171012734990904;
          result[1] += 0.0027289266221952697;
          result[2] += 0.010006064281382655;
          result[3] += 0.24105518496058218;
          result[4] += 0.02607640994542147;
          result[5] += 0.0009096422073984233;
          result[6] += 0.002122498483929654;
        } else {
          result[0] += 0;
          result[1] += 0.001185302252074279;
          result[2] += 0.012248123271434215;
          result[3] += 0.8206242591860925;
          result[4] += 0.1651521137890162;
          result[5] += 0.0007902015013828526;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          result[0] += 0.6688970927549608;
          result[1] += 0;
          result[2] += 0.00023073373327180433;
          result[3] += 0.27249653899400095;
          result[4] += 0.0583756345177665;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.13953488372093023;
          result[1] += 0;
          result[2] += 0.0011074197120708748;
          result[3] += 0.7751937984496124;
          result[4] += 0.08416389811738649;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          result[0] += 0.6438053097345133;
          result[1] += 0;
          result[2] += 0.011061946902654869;
          result[3] += 0.3451327433628319;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0027198549410698096;
          result[1] += 0.022665457842248413;
          result[2] += 0;
          result[3] += 0.9746146872166818;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
          result[0] += 0.16258169934640523;
          result[1] += 0.013888888888888888;
          result[2] += 0;
          result[3] += 0.8235294117647058;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.29833333333333334;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7016666666666667;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0.02321083172147002;
          result[1] += 0;
          result[2] += 0.027079303675048357;
          result[3] += 0.9497098646034816;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9934640522875817;
          result[1] += 0;
          result[2] += 0.006535947712418301;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
          result[0] += 0.9741038667795653;
          result[1] += 0.0007761783799040362;
          result[2] += 0.0010584250635055038;
          result[3] += 0.023885125599774203;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001764041772509173;
        } else {
          result[0] += 0.021477663230240553;
          result[1] += 0;
          result[2] += 0.022336769759450176;
          result[3] += 0.847938144329897;
          result[4] += 0.10738831615120276;
          result[5] += 0.0008591065292096221;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
          result[0] += 0.45161290322580644;
          result[1] += 0;
          result[2] += 0.004887585532746823;
          result[3] += 0.5434995112414467;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9196675900277009;
          result[1] += 0;
          result[2] += 0.0038781163434903052;
          result[3] += 0.07202216066481996;
          result[4] += 0.0019390581717451526;
          result[5] += 0.0005540166204986151;
          result[6] += 0.0019390581717451526;
        }
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
          result[0] += 0.996222851746931;
          result[1] += 0;
          result[2] += 0.003777148253068933;
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4.5) ) ) {
          result[0] += 0.9465020576131687;
          result[1] += 0;
          result[2] += 0.0411522633744856;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.012345679012345678;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0.9997749774977498;
          result[1] += 0;
          result[2] += 0.000225022502250225;
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          result[0] += 0.7187878787878788;
          result[1] += 0;
          result[2] += 0.00703030303030303;
          result[3] += 0.2511515151515151;
          result[4] += 0.02181818181818182;
          result[5] += 0.0007272727272727272;
          result[6] += 0.00048484848484848484;
        } else {
          result[0] += 0.13986599664991625;
          result[1] += 0.010050251256281407;
          result[2] += 0;
          result[3] += 0.5108877721943048;
          result[4] += 0.3391959798994975;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)14.5) ) ) {
          result[0] += 0.5622659176029963;
          result[1] += 0.003589263420724095;
          result[2] += 0.009987515605493134;
          result[3] += 0.25124843945068664;
          result[4] += 0.17228464419475656;
          result[5] += 0.00046816479400749064;
          result[6] += 0.00015605493133583021;
        } else {
          result[0] += 0.6805094130675526;
          result[1] += 0;
          result[2] += 0.0011074197120708748;
          result[3] += 0.2081949058693245;
          result[4] += 0.11018826135105204;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.009298393913778529;
          result[3] += 0.9907016060862215;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0021175224986765486;
          result[2] += 0;
          result[3] += 0.9978824775013234;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.55;
          result[3] += 0;
          result[4] += 0.35;
          result[5] += 0.1;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0029850746268656717;
          result[3] += 0;
          result[4] += 0.9970149253731343;
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
          result[0] += 0.1;
          result[1] += 0;
          result[2] += 0.9;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9921414538310412;
          result[1] += 0;
          result[2] += 0.007858546168958742;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
          result[0] += 0.08916256157635467;
          result[1] += 0.004433497536945813;
          result[2] += 0.007389162561576354;
          result[3] += 0.8891625615763546;
          result[4] += 0.009852216748768473;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.19891500904159132;
          result[4] += 0.8010849909584087;
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.11764705882352941;
          result[1] += 0.8823529411764706;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0.46365914786967416;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5338345864661654;
          result[4] += 0;
          result[5] += 0.002506265664160401;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)20.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.32835820895522394;
          result[3] += 0;
          result[4] += 0.6417910447761195;
          result[5] += 0.02985074626865672;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.004180602006688963;
          result[3] += 0.9933110367892977;
          result[4] += 0;
          result[5] += 0.002508361204013378;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
          result[0] += 0.6600790513833992;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.33992094861660077;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9961978589885566;
          result[1] += 0.0007382798080472499;
          result[2] += 0.0015503875968992248;
          result[3] += 0.0011812476928755998;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003322259136212625;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          result[0] += 0.4403153153153153;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5596846846846847;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9892053973013494;
          result[1] += 0;
          result[2] += 0.007796101949025487;
          result[3] += 0.0017991004497751124;
          result[4] += 0;
          result[5] += 0.0002998500749625187;
          result[6] += 0.0008995502248875562;
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
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
          result[0] += 0.20252469813391877;
          result[1] += 0.009879253567508232;
          result[2] += 0;
          result[3] += 0.787596048298573;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.4856870229007634;
          result[1] += 0;
          result[2] += 0.03148854961832061;
          result[3] += 0.48282442748091603;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
          result[0] += 0.9434073202998675;
          result[1] += 0.000881963839482581;
          result[2] += 0.0023519035719535494;
          result[3] += 0.05291783036895486;
          result[4] += 0.0004409819197412905;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9983227104998322;
          result[1] += 0.00027954825002795484;
          result[2] += 0.00027954825002795484;
          result[3] += 0.0010622833501062283;
          result[4] += 0;
          result[5] += 5.590965000559097e-05;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 0.6400621118012423;
          result[1] += 0;
          result[2] += 0.0027950310559006213;
          result[3] += 0.3559006211180124;
          result[4] += 0;
          result[5] += 0.0006211180124223603;
          result[6] += 0.0006211180124223603;
        } else {
          result[0] += 0.8483443708609272;
          result[1] += 0;
          result[2] += 0.02052980132450331;
          result[3] += 0.039735099337748346;
          result[4] += 0.0913907284768212;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          result[0] += 0.43421292083712465;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5657870791628753;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9811375507835172;
          result[1] += 0;
          result[2] += 0.013639001741149159;
          result[3] += 0.0011607661056297156;
          result[4] += 0.0020313406848520023;
          result[5] += 0.0008705745792222867;
          result[6] += 0.0011607661056297156;
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-15.5) ) ) {
          result[0] += 0.1111111111111111;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8888888888888888;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9994369369369369;
          result[5] += 0.0005630630630630631;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)115.5) ) ) {
          result[0] += 0.0006146281499692685;
          result[1] += 0.0006146281499692685;
          result[2] += 0.0021511985248924403;
          result[3] += 0.9935464044253227;
          result[4] += 0;
          result[5] += 0.003073140749846343;
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
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)93) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
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
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)33.5) ) ) {
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 0.8518477539278602;
          result[1] += 0;
          result[2] += 0.003098030537729586;
          result[3] += 0.1447222836910821;
          result[4] += 0;
          result[5] += 0.00011064394777605666;
          result[6] += 0.0002212878955521133;
        } else {
          result[0] += 0.9903245942571786;
          result[1] += 0;
          result[2] += 0.004369538077403246;
          result[3] += 0.003745318352059925;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001560549313358302;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9943977591036415;
          result[1] += 0;
          result[2] += 0.0035014005602240898;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0021008403361344537;
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
          result[0] += 0.9488907610221847;
          result[1] += 0.009547879809042405;
          result[2] += 0.008143779837124403;
          result[3] += 0.03341757933164841;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.4287421571556618;
          result[1] += 0;
          result[2] += 0.0044816253361219;
          result[3] += 0.5667762175082163;
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
          result[0] += 0.9884583676834295;
          result[1] += 0;
          result[2] += 0.010717230008244023;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008244023083264633;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0.9991061452513966;
          result[1] += 0;
          result[2] += 0.000893854748603352;
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0.22823984526112184;
          result[1] += 0.008381689232753063;
          result[2] += 0;
          result[3] += 0.49000644745325594;
          result[4] += 0.2733720180528691;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.17485265225933203;
          result[1] += 0.0029469548133595285;
          result[2] += 0.009495743287491814;
          result[3] += 0.4155206286836935;
          result[4] += 0.3971840209561231;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
          result[0] += 0.6499652052887961;
          result[1] += 0;
          result[2] += 0.010786360473208072;
          result[3] += 0.29366736256089077;
          result[4] += 0.04558107167710508;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8615667894208238;
          result[1] += 0.0026782725142283233;
          result[2] += 0.0036826247070639445;
          result[3] += 0.12989621694007367;
          result[4] += 0.0010043521928356212;
          result[5] += 0.0010043521928356212;
          result[6] += 0.0001673920321392702;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)101) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
          result[0] += 0;
          result[1] += 0.02362204724409449;
          result[2] += 0;
          result[3] += 0.9566929133858268;
          result[4] += 0.011811023622047246;
          result[5] += 0.007874015748031498;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)26) ) ) {
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
          result[2] += 0.010279001468428781;
          result[3] += 0;
          result[4] += 0.9897209985315712;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5;
          result[5] += 0.5;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          result[0] += 0.053395240858966915;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9460243760882182;
          result[4] += 0;
          result[5] += 0.0005803830528148578;
          result[6] += 0;
        } else {
          result[0] += 0.20298260149130073;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7970173985086992;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
          result[0] += 0;
          result[1] += 0.03353057199211045;
          result[2] += 0.03155818540433925;
          result[3] += 0.9289940828402367;
          result[4] += 0;
          result[5] += 0.005917159763313609;
          result[6] += 0;
        } else {
          result[0] += 0.973170731707317;
          result[1] += 0;
          result[2] += 0.026829268292682926;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9844617092119867;
          result[1] += 0;
          result[2] += 0.014428412874583796;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011098779134295228;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          result[0] += 0.9975903614457832;
          result[1] += 0;
          result[2] += 0.0024096385542168677;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9998602180598267;
          result[1] += 0;
          result[2] += 0.0001397819401733296;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          result[0] += 0.07264957264957266;
          result[1] += 0.03311965811965812;
          result[2] += 0.049145299145299144;
          result[3] += 0.8450854700854701;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5797780903266135;
          result[1] += 0.0001562744178777934;
          result[2] += 0.0035943116111892483;
          result[3] += 0.41600250039068604;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00046882325363338024;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)52.5) ) ) {
          result[0] += 0.8405172413793104;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.15948275862068967;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9856594110115237;
          result[1] += 0;
          result[2] += 0.0046094750320102434;
          result[3] += 0.008706786171574905;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001024327784891165;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9723756906077348;
          result[1] += 0;
          result[2] += 0.019337016574585635;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.008287292817679558;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          result[0] += 0.9972677595628415;
          result[1] += 0;
          result[2] += 0.00273224043715847;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)34.5) ) ) {
          result[0] += 0.993943472409152;
          result[1] += 0;
          result[2] += 0.006056527590847914;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9996985530546624;
          result[1] += 0;
          result[2] += 0.0003014469453376206;
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
          result[0] += 0.9691500848372667;
          result[1] += 0.002930741940459664;
          result[2] += 0.0041647385469689956;
          result[3] += 0.022211938917167977;
          result[4] += 0;
          result[5] += 0.00030849915162733303;
          result[6] += 0.0012339966065093321;
        } else {
          result[0] += 0.6989640463132237;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.29555149299207806;
          result[4] += 0;
          result[5] += 0.005484460694698355;
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
          result[0] += 0.165430063204177;
          result[1] += 0.005221214619400935;
          result[2] += 0.014014839241549878;
          result[3] += 0.8145094806265458;
          result[4] += 0;
          result[5] += 0.0008244023083264634;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)103.5) ) ) {
          result[0] += 0;
          result[1] += 0.0013188262446422684;
          result[2] += 0;
          result[3] += 0.9986811737553577;
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
          result[4] += 0.9980119284294234;
          result[5] += 0.0019880715705765406;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.054945054945054944;
          result[3] += 0;
          result[4] += 0.945054945054945;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
          result[0] += 0.9989332329317269;
          result[1] += 0;
          result[2] += 0.001004016064257028;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 6.275100401606425e-05;
        } else {
          result[0] += 0.9998051821546854;
          result[1] += 0;
          result[2] += 0.0001948178453146308;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.7413529524173516;
          result[1] += 0.0010510223581119819;
          result[2] += 0.005732849226065356;
          result[3] += 0.2267341868908848;
          result[4] += 0.023791324288171226;
          result[5] += 0.0009554748710108925;
          result[6] += 0.000382189948404357;
        } else {
          result[0] += 0;
          result[1] += 0.00232249502322495;
          result[2] += 0.009953550099535502;
          result[3] += 0.9820836098208361;
          result[4] += 0.0036496350364963502;
          result[5] += 0.0019907100199071004;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)217) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)71) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.002347417840375587;
          result[3] += 0;
          result[4] += 0.9976525821596244;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0.0625;
          result[1] += 0.07291666666666667;
          result[2] += 0;
          result[3] += 0.2708333333333333;
          result[4] += 0.59375;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.01098901098901099;
          result[2] += 0;
          result[3] += 0.054945054945054944;
          result[4] += 0.9340659340659341;
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
          result[0] += 0.96875;
          result[1] += 0.03125;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
          result[0] += 0.06093189964157706;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.11469534050179211;
          result[4] += 0.8243727598566308;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)11) ) ) {
          result[0] += 0.009523809523809525;
          result[1] += 0;
          result[2] += 0.06666666666666667;
          result[3] += 0.9238095238095239;
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-16) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
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
          result[0] += 0.9924242424242424;
          result[1] += 0;
          result[2] += 0.007575757575757576;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9962709757613425;
          result[1] += 0;
          result[2] += 0.0037290242386575512;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9996925914540424;
          result[1] += 0;
          result[2] += 0.0003074085459575776;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0.011964735516372796;
          result[1] += 0.010075566750629723;
          result[2] += 0;
          result[3] += 0.9351385390428212;
          result[4] += 0.04219143576826197;
          result[5] += 0.0006297229219143577;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.026442307692307696;
          result[3] += 0.3004807692307693;
          result[4] += 0.670673076923077;
          result[5] += 0.0024038461538461544;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
          result[0] += 0.9979035639412998;
          result[1] += 0;
          result[2] += 0.0020964360587002098;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.406494960806271;
          result[1] += 0;
          result[2] += 0.002799552071668533;
          result[3] += 0.5862262038073908;
          result[4] += 0;
          result[5] += 0.0016797312430011197;
          result[6] += 0.002799552071668533;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)2.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          result[0] += 0.5473515248796148;
          result[1] += 0.013911182450508293;
          result[2] += 0.019261637239165328;
          result[3] += 0.3996789727126806;
          result[4] += 0.01658640984483681;
          result[5] += 0.0016051364365971107;
          result[6] += 0.0016051364365971107;
        } else {
          result[0] += 0.33022207917605406;
          result[1] += 0;
          result[2] += 0.009333762471837787;
          result[3] += 0.34406179594464115;
          result[4] += 0.31606050852912776;
          result[5] += 0.000321853878339234;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)41) ) ) {
          result[0] += 0.6575682382133995;
          result[1] += 0;
          result[2] += 0.0007444168734491315;
          result[3] += 0.2883374689826303;
          result[4] += 0.05310173697270471;
          result[5] += 0;
          result[6] += 0.00024813895781637717;
        } else {
          result[0] += 0.06372239747634069;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5766561514195584;
          result[4] += 0.35962145110410093;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0.000991080277502478;
          result[1] += 0.00033036009250082593;
          result[2] += 0;
          result[3] += 0.996366038982491;
          result[4] += 0.0016518004625041298;
          result[5] += 0.0006607201850016519;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.18421052631578946;
          result[3] += 0;
          result[4] += 0.7763157894736842;
          result[5] += 0.039473684210526314;
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
          result[1] += 0.05365853658536585;
          result[2] += 0;
          result[3] += 0.9463414634146341;
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
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)51) ) ) {
          result[0] += 0.9981073881957101;
          result[1] += 0.00021029020047665778;
          result[2] += 0.0014720314033366045;
          result[3] += 0.00014019346698443852;
          result[4] += 0;
          result[5] += 0;
          result[6] += 7.009673349221926e-05;
        } else {
          result[0] += 0.9908913467794405;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.009108653220559532;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.3770491803278688;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6229508196721312;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)46.5) ) ) {
          result[0] += 0.9986462093862816;
          result[1] += 0;
          result[2] += 0.0013537906137184115;
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
          result[0] += 0.940877519905133;
          result[1] += 0.0032187023547348807;
          result[2] += 0.007962053193291546;
          result[3] += 0.047094697611384045;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008470269354565475;
        } else {
          result[0] += 0.40746240950436236;
          result[1] += 0;
          result[2] += 0.006868386857248932;
          result[3] += 0.5834416187117134;
          result[4] += 0;
          result[5] += 0.00037126415444588826;
          result[6] += 0.0018563207722294413;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0.9889196675900277;
          result[1] += 0;
          result[2] += 0.0110803324099723;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9317073170731708;
          result[1] += 0;
          result[2] += 0.05365853658536585;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.014634146341463415;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9925925925925926;
          result[1] += 0;
          result[2] += 0.007407407407407408;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9994944388270981;
          result[1] += 0;
          result[2] += 0.0005055611729019212;
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
          result[0] += 0.02135712354690457;
          result[1] += 0.009462016761286834;
          result[2] += 0.005947553392808867;
          result[3] += 0.8872668288726683;
          result[4] += 0.07488510408218438;
          result[5] += 0.0010813733441470668;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.007616974972796518;
          result[3] += 0.19912948857453755;
          result[4] += 0.7921653971708379;
          result[5] += 0.001088139281828074;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0.8596491228070176;
          result[1] += 0.0043859649122807015;
          result[2] += 0.006578947368421052;
          result[3] += 0.125;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0043859649122807015;
        } else {
          result[0] += 0.9895274250556355;
          result[1] += 0;
          result[2] += 0.005498101845791334;
          result[3] += 0.004581751538159445;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003927215604136667;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)21.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)106.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9882352941176471;
          result[5] += 0.011764705882352941;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09497206703910614;
          result[3] += 0;
          result[4] += 0.9050279329608939;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)103.5) ) ) {
          result[0] += 0;
          result[1] += 0.0016318537859007832;
          result[2] += 0;
          result[3] += 0.9983681462140992;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
          result[0] += 0.29523809523809524;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7047619047619048;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6062322946175638;
          result[1] += 0;
          result[2] += 0.018413597733711047;
          result[3] += 0.37535410764872523;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-41) ) ) {
          result[0] += 0.05;
          result[1] += 0.6;
          result[2] += 0;
          result[3] += 0.35;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.1409485637942552;
          result[1] += 0.008684034736138945;
          result[2] += 0.0033400133600534404;
          result[3] += 0.8470273881095525;
          result[4] += 0;
          result[5] += 0;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          result[0] += 0.9900839054157132;
          result[1] += 0;
          result[2] += 0.006102212051868803;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0038138825324180014;
        } else {
          result[0] += 0.9985671886193839;
          result[1] += 0;
          result[2] += 0.001432811380616109;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 0.4740948813982522;
          result[1] += 0.0026529338327091136;
          result[2] += 0.006398252184769039;
          result[3] += 0.49719101123595505;
          result[4] += 0.019350811485642945;
          result[5] += 0;
          result[6] += 0.00031210986267166043;
        } else {
          result[0] += 0.9667452212621105;
          result[1] += 0;
          result[2] += 0.004713275726630008;
          result[3] += 0.02749410840534171;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0010473946059177796;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.37987012987012986;
          result[4] += 0.6158008658008658;
          result[5] += 0.004329004329004329;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.022459893048128343;
          result[3] += 0.9240641711229947;
          result[4] += 0.05026737967914439;
          result[5] += 0.0032085561497326204;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
          result[0] += 0.4063926940639269;
          result[1] += 0.00228310502283105;
          result[2] += 0;
          result[3] += 0.5821917808219178;
          result[4] += 0;
          result[5] += 0.0091324200913242;
          result[6] += 0;
        } else {
          result[0] += 0.9977989181122926;
          result[1] += 0.00048498414474911405;
          result[2] += 0.0007088229807871667;
          result[3] += 0.0007088229807871667;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00029845178138407017;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)32.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9910714285714286;
          result[4] += 0;
          result[5] += 0.008928571428571428;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          result[0] += 0.45876887340301975;
          result[1] += 0;
          result[2] += 0.0313588850174216;
          result[3] += 0.5087108013937283;
          result[4] += 0;
          result[5] += 0.0011614401858304297;
          result[6] += 0;
        } else {
          result[0] += 0.08448540706605223;
          result[1] += 0.010368663594470046;
          result[2] += 0.014592933947772658;
          result[3] += 0.8905529953917051;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)49) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.010006253908692933;
          result[3] += 0.9853033145716072;
          result[4] += 0.0028142589118198874;
          result[5] += 0.001876172607879925;
          result[6] += 0;
        } else {
          result[0] += 0.9949610627576729;
          result[1] += 0;
          result[2] += 0.0036646816307833257;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001374255611543747;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)191) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)71) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0025188916876574307;
          result[3] += 0;
          result[4] += 0.9974811083123426;
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
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9960474308300395;
          result[5] += 0.003952569169960474;
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
          result[0] += 0.00064;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.99776;
          result[4] += 0;
          result[5] += 0.0016;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.1836734693877551;
          result[2] += 0.7142857142857143;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.10204081632653061;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
          result[0] += 0.9949135300101729;
          result[1] += 0;
          result[2] += 0.00508646998982706;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0.9988069673109043;
          result[1] += 0;
          result[2] += 0.0011930326890956812;
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)55) ) ) {
          result[0] += 0.6922526134899041;
          result[1] += 0.002004868967492482;
          result[2] += 0.011599599026206501;
          result[3] += 0.29328368895890017;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008592295574967779;
        } else {
          result[0] += 0.14202898550724638;
          result[1] += 0.020289855072463767;
          result[2] += 0;
          result[3] += 0.8376811594202899;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-3.5) ) ) {
          result[0] += 0.5798319327731093;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.42016806722689076;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7429906542056075;
          result[1] += 0;
          result[2] += 0.001721593703885883;
          result[3] += 0.25504181013280863;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00024594195769798326;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
          result[0] += 0.09408194233687406;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9059180576631259;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.013422818791946308;
          result[2] += 0;
          result[3] += 0.2516778523489933;
          result[4] += 0.7348993288590604;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)8.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)10.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.29315223542727786;
          result[1] += 0.004527447651386531;
          result[2] += 0.01697792869269949;
          result[3] += 0.6853423882286361;
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)27) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
          result[0] += 0.0020920502092050207;
          result[1] += 0;
          result[2] += 0.00697350069735007;
          result[3] += 0.9121338912133892;
          result[4] += 0.07740585774058577;
          result[5] += 0.001394700139470014;
          result[6] += 0;
        } else {
          result[0] += 0.9930785434848028;
          result[1] += 0;
          result[2] += 0.005717724947336744;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0012037315678603672;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)9) ) ) {
          result[0] += 0.9978539886921712;
          result[1] += 0.0002888861375923404;
          result[2] += 0.0009079278610044984;
          result[3] += 0.0006603111716396351;
          result[4] += 8.253889645495439e-05;
          result[5] += 0;
          result[6] += 0.000206347241137386;
        } else {
          result[0] += 0.0026954177897574125;
          result[1] += 0.03234501347708895;
          result[2] += 0;
          result[3] += 0.9433962264150944;
          result[4] += 0.013477088948787063;
          result[5] += 0.008086253369272238;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)49) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.009523809523809526;
          result[3] += 0.806878306878307;
          result[4] += 0.1830687830687831;
          result[5] += 0.0005291005291005292;
          result[6] += 0;
        } else {
          result[0] += 0.9951477723864137;
          result[1] += 0;
          result[2] += 0.004411116012351125;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004411116012351125;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)55) ) ) {
          result[0] += 0.5;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.5;
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
          result[0] += 0.0006351222610352494;
          result[1] += 0.0038107335662114963;
          result[2] += 0.0015878056525881234;
          result[3] += 0.9914258494760242;
          result[4] += 0;
          result[5] += 0.0025404890441409977;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          result[0] += 0.996969587647462;
          result[1] += 0.00039683971283235327;
          result[2] += 0.00220065658934305;
          result[3] += 0.0002164580251812836;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002164580251812836;
        } else {
          result[0] += 0.6987951807228916;
          result[1] += 0;
          result[2] += 0.10843373493975904;
          result[3] += 0.1927710843373494;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)104) ) ) {
          result[0] += 0.47368421052631576;
          result[1] += 0.03508771929824561;
          result[2] += 0;
          result[3] += 0.49122807017543857;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.014598540145985401;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9854014598540146;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
          result[0] += 0.3285714285714286;
          result[1] += 0;
          result[2] += 0.4428571428571429;
          result[3] += 0;
          result[4] += 0.15714285714285717;
          result[5] += 0.07142857142857144;
          result[6] += 0;
        } else {
          result[0] += 0.17528207819469954;
          result[1] += 0;
          result[2] += 0.0010495932826029913;
          result[3] += 0.8236683285226974;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
          result[0] += 0.72;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.28;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9959758551307848;
          result[1] += 0;
          result[2] += 0.003018108651911469;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0010060362173038232;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)71) ) ) {
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          result[0] += 0.9988484790327223;
          result[1] += 0;
          result[2] += 0.0011515209672776125;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9887640449438202;
          result[1] += 0;
          result[2] += 0.003745318352059925;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00749063670411985;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-15.5) ) ) {
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
          result[0] += 0.020877817319098463;
          result[1] += 0.006168446026097272;
          result[2] += 0.011387900355871889;
          result[3] += 0.9603795966785291;
          result[4] += 0;
          result[5] += 0.0011862396204033218;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.9955597843323819;
          result[1] += 0;
          result[2] += 0.003805899143672693;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006343165239454488;
        } else {
          result[0] += 0.0027472527472527475;
          result[1] += 0;
          result[2] += 0.0003924646781789639;
          result[3] += 0.9968602825745683;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          result[0] += 0.9885860703470767;
          result[1] += 0;
          result[2] += 0.004425809457255998;
          result[3] += 0.006289308176100629;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006988120195667365;
        } else {
          result[0] += 0.9044222539229672;
          result[1] += 0.0014265335235378032;
          result[2] += 0.017118402282453638;
          result[3] += 0.07703281027104136;
          result[4] += 0;
          result[5] += 0;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)33.5) ) ) {
          result[0] += 0.9411764705882353;
          result[1] += 0;
          result[2] += 0.058823529411764705;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9937275985663082;
          result[1] += 0;
          result[2] += 0.005376344086021506;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008960573476702509;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)37.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9985899605188945;
          result[1] += 0;
          result[2] += 0.0014100394811054709;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
          result[0] += 0.0011507479861910242;
          result[1] += 0.0023014959723820483;
          result[2] += 0;
          result[3] += 0.2289988492520138;
          result[4] += 0.7675489067894131;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.017020382433284305;
          result[1] += 0.005043076276528682;
          result[2] += 0.013448203404076486;
          result[3] += 0.7623450304685858;
          result[4] += 0.2008825383483925;
          result[5] += 0.0012607690691321706;
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
          result[0] += 0;
          result[1] += 0.01985981308411215;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9801401869158879;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0.865771812080537;
          result[1] += 0;
          result[2] += 0.011185682326621926;
          result[3] += 0.12304250559284118;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9883329012185637;
          result[1] += 0;
          result[2] += 0.004796473943479388;
          result[3] += 0.005185377236193933;
          result[4] += 0;
          result[5] += 0.00025926886180969663;
          result[6] += 0.0014259787399533315;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0017421602787456446;
          result[3] += 0.9982578397212544;
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
          result[1] += 0.0021511985248924403;
          result[2] += 0.0018438844499078057;
          result[3] += 0.9953902888752305;
          result[4] += 0;
          result[5] += 0.0006146281499692685;
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
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
          result[0] += 0.4083885209713024;
          result[1] += 0.024282560706401765;
          result[2] += 0;
          result[3] += 0.5673289183222958;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.21978021978021978;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7802197802197802;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)77.5) ) ) {
          result[0] += 0.9979806289966718;
          result[1] += 0.0005609363898133953;
          result[2] += 0.0011592685389476835;
          result[3] += 3.739575932089302e-05;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002617703152462511;
        } else {
          result[0] += 0.9499304589707928;
          result[1] += 0;
          result[2] += 0.0458970792767733;
          result[3] += 0.004172461752433936;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
          result[0] += 0.9463840399002493;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05361596009975062;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.3746012759170654;
          result[1] += 0;
          result[2] += 0.000996810207336523;
          result[3] += 0.6244019138755981;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)26) ) ) {
          result[0] += 0.9899180844360429;
          result[1] += 0;
          result[2] += 0.009136735979836169;
          result[3] += 0.000630119722747322;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000315059861373661;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)84.5) ) ) {
          result[0] += 0.012413793103448275;
          result[1] += 0;
          result[2] += 0.03586206896551724;
          result[3] += 0.9020689655172414;
          result[4] += 0.0496551724137931;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.010353753235547885;
          result[2] += 0;
          result[3] += 0.9896462467644521;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
          result[0] += 0.9913127413127413;
          result[1] += 0;
          result[2] += 0.008687258687258687;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9692307692307692;
          result[1] += 0;
          result[2] += 0.03076923076923077;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)18.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.009345794392523364;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9906542056074766;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          result[0] += 0.9949186991869919;
          result[1] += 0;
          result[2] += 0.0035569105691056913;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0015243902439024393;
        } else {
          result[0] += 0.999710576366493;
          result[1] += 0;
          result[2] += 0.0002894236335069875;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.7386831275720165;
          result[1] += 0.002849002849002849;
          result[2] += 0.004906616017727129;
          result[3] += 0.24469768914213358;
          result[4] += 0.007122507122507123;
          result[5] += 0.0006331117442228553;
          result[6] += 0.0011079455523899967;
        } else {
          result[0] += 0.4050295294341779;
          result[1] += 0;
          result[2] += 0.008763574014097924;
          result[3] += 0.5818251095446751;
          result[4] += 0.0024766622213755;
          result[5] += 0.0007620499142693847;
          result[6] += 0.001143074871404077;
        }
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
          result[3] += 0.9936102236421726;
          result[4] += 0.006389776357827476;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 0.009339080459770116;
          result[2] += 0.01221264367816092;
          result[3] += 0.978448275862069;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9928352098259979;
          result[1] += 0;
          result[2] += 0.007164790174002047;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-35) ) ) {
          result[0] += 0.027777777777777776;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9722222222222222;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.09219858156028368;
          result[2] += 0;
          result[3] += 0.9078014184397163;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)33.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9989868287740629;
          result[1] += 0;
          result[2] += 0.0006585612968591692;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003546099290780142;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
          result[0] += 0.02631578947368421;
          result[1] += 0.008771929824561403;
          result[2] += 0;
          result[3] += 0.9605263157894737;
          result[4] += 0.0043859649122807015;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7541654044229021;
          result[1] += 0.0021205695243865495;
          result[2] += 0.006816116328385338;
          result[3] += 0.2146319297182672;
          result[4] += 0.02059981823689791;
          result[5] += 0.0009088155104513784;
          result[6] += 0.000757346258709482;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          result[0] += 0.013099219620958752;
          result[1] += 0;
          result[2] += 0.006967670011148272;
          result[3] += 0.7965440356744704;
          result[4] += 0.18338907469342253;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9163398692810458;
          result[1] += 0;
          result[2] += 0.0074074074074074086;
          result[3] += 0.06797385620915034;
          result[4] += 0.004793028322440088;
          result[5] += 0.0017429193899782137;
          result[6] += 0.0017429193899782137;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)115.5) ) ) {
          result[0] += 0.0006197706848466068;
          result[1] += 0.0006197706848466068;
          result[2] += 0.0030988534242330336;
          result[3] += 0.9938022931515339;
          result[4] += 0;
          result[5] += 0.0018593120545398203;
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)99.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9017857142857143;
          result[1] += 0.09821428571428571;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.4927536231884058;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5072463768115942;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
          result[0] += 0.9541698411768151;
          result[1] += 0.0007618824356795403;
          result[2] += 0.003574986813573228;
          result[3] += 0.04114165152669518;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00035163804723671095;
        } else {
          result[0] += 0.7407284768211921;
          result[1] += 0;
          result[2] += 0.001655629139072848;
          result[3] += 0.2572847682119206;
          result[4] += 0;
          result[5] += 0.00022075055187637972;
          result[6] += 0.00011037527593818986;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.951219512195122;
          result[1] += 0;
          result[2] += 0.0015243902439024393;
          result[3] += 0.04725609756097562;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9954439108484177;
          result[1] += 0;
          result[2] += 0.0030784386159339984;
          result[3] += 0.0009851003570988794;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004925501785494397;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2066.5) ) ) {
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
          result[1] += 0.0004526935264825713;
          result[2] += 0.014486192847442281;
          result[3] += 0.9846084200995926;
          result[4] += 0;
          result[5] += 0.0004526935264825713;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-1) ) ) {
          result[0] += 0.7;
          result[1] += 0;
          result[2] += 0.023076923076923078;
          result[3] += 0.27692307692307694;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9960831247959961;
          result[1] += 0.00043520835600043526;
          result[2] += 0.0017771007870017773;
          result[3] += 0.0014869618830014872;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00021760417800021763;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
          result[0] += 0.459552495697074;
          result[1] += 0;
          result[2] += 0.0024861350162554982;
          result[3] += 0.5379613692866705;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9299805501528202;
          result[1] += 0;
          result[2] += 0.0025006946373992774;
          result[3] += 0.06612948041122534;
          result[4] += 0;
          result[5] += 0.0005557099194220616;
          result[6] += 0.0008335648791330926;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)28) ) ) {
          result[0] += 0;
          result[1] += 0.01334604385128694;
          result[2] += 0;
          result[3] += 0.9866539561487131;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9593908629441624;
          result[1] += 0.04060913705583756;
          result[2] += 0;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
          result[0] += 0.05791505791505792;
          result[1] += 0;
          result[2] += 0.03088803088803089;
          result[3] += 0.9111969111969112;
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
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)3.5) ) ) {
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
          result[0] += 0.9977493074792244;
          result[1] += 0;
          result[2] += 0.002077562326869806;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00017313019390581717;
        } else {
          result[0] += 0.9992376596150181;
          result[1] += 0;
          result[2] += 0.0007623403849818944;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
          result[0] += 0.5699977743156021;
          result[1] += 0;
          result[2] += 0.0120186957489428;
          result[3] += 0.3630091253060316;
          result[4] += 0.054974404629423546;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8628734474655925;
          result[1] += 0.0023497818059751594;
          result[2] += 0.004196038939241357;
          result[3] += 0.12755958375293722;
          result[4] += 0.0005035246727089627;
          result[5] += 0.001342732460557234;
          result[6] += 0.0011748909029875797;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
          result[0] += 0;
          result[1] += 0.0016191709844559584;
          result[2] += 0.0045336787564766836;
          result[3] += 0.9938471502590673;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.02467343976777939;
          result[3] += 0;
          result[4] += 0.9709724238026125;
          result[5] += 0.0043541364296081275;
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
          result[0] += 0.13009198423127463;
          result[1] += 0.015111695137976347;
          result[2] += 0.0045992115637319315;
          result[3] += 0.8501971090670171;
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-5.5) ) ) {
          result[0] += 0.8425096030729834;
          result[1] += 0;
          result[2] += 0.0012804097311139564;
          result[3] += 0.15620998719590268;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8767585818795723;
          result[1] += 0;
          result[2] += 0.008441193021947102;
          result[3] += 0.11480022509848059;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
          result[0] += 0.08493031358885017;
          result[1] += 0.006097560975609756;
          result[2] += 0.013066202090592335;
          result[3] += 0.875;
          result[4] += 0.020905923344947737;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0009442870632672333;
          result[1] += 0.0056657223796034;
          result[2] += 0;
          result[3] += 0.1562795089707271;
          result[4] += 0.8371104815864022;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
          result[0] += 0.7870147715561663;
          result[1] += 0.004122294744074201;
          result[2] += 0.004122294744074201;
          result[3] += 0.2013053933356235;
          result[4] += 0.00034352456200618345;
          result[5] += 0.0010305736860185502;
          result[6] += 0.0020611473720371005;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
          result[0] += 0.4330543933054394;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5564853556485356;
          result[4] += 0.002092050209205021;
          result[5] += 0.008368200836820085;
          result[6] += 0;
        } else {
          result[0] += 0.997944149391811;
          result[1] += 4.283022100394039e-05;
          result[2] += 0.0011992461881103309;
          result[3] += 0.0006424533150591058;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00017132088401576156;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03880597014925373;
          result[3] += 0;
          result[4] += 0.9611940298507463;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0014820303816228233;
          result[3] += 0.9985179696183771;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
          result[0] += 0.9298883406907297;
          result[1] += 0;
          result[2] += 0.005193456245131135;
          result[3] += 0.06258114775383017;
          result[4] += 0;
          result[5] += 0.0007790184367696703;
          result[6] += 0.0015580368735393405;
        } else {
          result[0] += 0.06944444444444446;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8541666666666667;
          result[4] += 0.06250000000000001;
          result[5] += 0.01388888888888889;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)103) ) ) {
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
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)22.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4049) ) ) {
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
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
          result[4] += 0.9986149584487535;
          result[5] += 0.0013850415512465374;
          result[6] += 0;
        }
      }
    } else {
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
          result[1] += 0.003094777562862669;
          result[2] += 0.007736943907156673;
          result[3] += 0.9876208897485493;
          result[4] += 0;
          result[5] += 0.0015473887814313346;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)32) ) ) {
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
          result[2] += 0.004731861198738171;
          result[3] += 0.9905362776025237;
          result[4] += 0;
          result[5] += 0.004731861198738171;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
          result[0] += 0.9784172661870504;
          result[1] += 0;
          result[2] += 0.01618705035971223;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00539568345323741;
        } else {
          result[0] += 0.9992942836979535;
          result[1] += 0;
          result[2] += 0.0007057163020465773;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9974243399871217;
          result[1] += 0;
          result[2] += 0.0025756600128783;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9999084249084249;
          result[1] += 0;
          result[2] += 9.157509157509158e-05;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          result[0] += 0.12680115273775217;
          result[1] += 0.01440922190201729;
          result[2] += 0.0446685878962536;
          result[3] += 0.8141210374639769;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.983271375464684;
          result[1] += 0;
          result[2] += 0.005080545229244114;
          result[3] += 0.010408921933085501;
          result[4] += 0;
          result[5] += 0.00024783147459727387;
          result[6] += 0.0009913258983890955;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
          result[0] += 0;
          result[1] += 0.45454545454545453;
          result[2] += 0.45454545454545453;
          result[3] += 0.09090909090909091;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0021398002853067048;
          result[3] += 0.9978601997146933;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
          result[0] += 0.9983215218202164;
          result[1] += 0;
          result[2] += 0.0015541464627626509;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00012433171702101205;
        } else {
          result[0] += 0.9997059688326962;
          result[1] += 0;
          result[2] += 0.00029403116730373417;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          result[0] += 0.64063417498532;
          result[1] += 0.0015099404412381512;
          result[2] += 0.006375304085227749;
          result[3] += 0.3508094958476638;
          result[4] += 0;
          result[5] += 0.00016777116013757235;
          result[6] += 0.000503313480412717;
        } else {
          result[0] += 0.003898635477582846;
          result[1] += 0;
          result[2] += 0.016894087069525665;
          result[3] += 0.8096166341780376;
          result[4] += 0.16699155295646523;
          result[5] += 0.002599090318388564;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)191) ) ) {
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
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
          result[0] += 0.15555555555555556;
          result[1] += 0.006666666666666667;
          result[2] += 0.005925925925925926;
          result[3] += 0.8318518518518518;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)123.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0.010810810810810811;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3837837837837838;
          result[4] += 0.6054054054054054;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.009259259259259259;
          result[2] += 0;
          result[3] += 0.08950617283950617;
          result[4] += 0.9012345679012346;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-130) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.017094017094017096;
          result[2] += 0;
          result[3] += 0.014957264957264958;
          result[4] += 0.967948717948718;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
          result[0] += 0.01639344262295082;
          result[1] += 0;
          result[2] += 0.013114754098360656;
          result[3] += 0;
          result[4] += 0.9639344262295082;
          result[5] += 0.006557377049180328;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0018390804597701149;
          result[3] += 0.9958620689655172;
          result[4] += 0;
          result[5] += 0.0022988505747126436;
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
          result[0] += 0.958974358974359;
          result[1] += 0;
          result[2] += 0.041025641025641026;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
          result[0] += 0.9970389379657505;
          result[1] += 0;
          result[2] += 0.0006909144746582442;
          result[3] += 0.0022207965256872135;
          result[4] += 0;
          result[5] += 0;
          result[6] += 4.93510339041603e-05;
        } else {
          result[0] += 0.17543859649122806;
          result[1] += 0.14035087719298245;
          result[2] += 0;
          result[3] += 0.6842105263157895;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
          result[0] += 0.9124666289135184;
          result[1] += 0.0008898956395113664;
          result[2] += 0.005258474233476256;
          result[3] += 0.08041420597039074;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009707952431033087;
        } else {
          result[0] += 0.5083692013390723;
          result[1] += 0;
          result[2] += 0.0028694404591104736;
          result[3] += 0.4887613582018173;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)103.5) ) ) {
          result[0] += 0.19269406392694063;
          result[1] += 0.0045662100456621;
          result[2] += 0;
          result[3] += 0.7990867579908676;
          result[4] += 0.0036529680365296802;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)19.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.3333333333333333;
          result[1] += 0;
          result[2] += 0.01718213058419244;
          result[3] += 0.6494845360824743;
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
          result[0] += 0.07692307692307693;
          result[1] += 0.5384615384615384;
          result[2] += 0;
          result[3] += 0.38461538461538464;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.011627906976744186;
          result[1] += 0.011627906976744186;
          result[2] += 0;
          result[3] += 0.9767441860465116;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
          result[0] += 0.009397457158651189;
          result[1] += 0.007739082365948038;
          result[2] += 0.012161415146489774;
          result[3] += 0.9679380873410725;
          result[4] += 0.002763957987838585;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.18824701195219123;
          result[4] += 0.8117529880478087;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)102) ) ) {
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
          result[0] += 0.3157894736842105;
          result[1] += 0.5789473684210527;
          result[2] += 0;
          result[3] += 0.10526315789473684;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)27) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9934123847167327;
          result[1] += 0;
          result[2] += 0.003952569169960475;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.0013175230566534917;
          result[6] += 0.0013175230566534917;
        } else {
          result[0] += 0.6540354330708661;
          result[1] += 0;
          result[2] += 0.005659448818897638;
          result[3] += 0.3061023622047244;
          result[4] += 0.0327263779527559;
          result[5] += 0.0004921259842519685;
          result[6] += 0.000984251968503937;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47.5) ) ) {
          result[0] += 0.9857658990989423;
          result[1] += 0.00026117616332216087;
          result[2] += 0.0006964697688590955;
          result[3] += 0.012579985200017414;
          result[4] += 0.0003917642449832412;
          result[5] += 0.0001741174422147739;
          result[6] += 0.00013058808166108044;
        } else {
          result[0] += 0.9370979270907792;
          result[1] += 0.008577555396711938;
          result[2] += 0;
          result[3] += 0.05432451751250894;
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
          result[3] += 0.994280266920877;
          result[4] += 0.0044486812837623135;
          result[5] += 0.001271051795360661;
          result[6] += 0;
        } else {
          result[0] += 0.462406015037594;
          result[1] += 0;
          result[2] += 0.022556390977443608;
          result[3] += 0;
          result[4] += 0.5150375939849624;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
          result[0] += 0.76;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.24;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9955452256440054;
          result[1] += 0;
          result[2] += 0.004261088514429595;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001936858415649816;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
          result[0] += 0.006636038795303726;
          result[1] += 0.0035732516590096988;
          result[2] += 0.008677896886166412;
          result[3] += 0.9806023481368045;
          result[4] += 0.0005104645227156713;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.001943634596695821;
          result[3] += 0.1652089407191448;
          result[4] += 0.8328474246841594;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          result[0] += 0.9990167158308751;
          result[1] += 0;
          result[2] += 0.0009832841691248771;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9765258215962441;
          result[1] += 0;
          result[2] += 0.023474178403755867;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)121.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0.02040816326530612;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.40816326530612246;
          result[4] += 0.5714285714285714;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.14084507042253522;
          result[4] += 0.8591549295774648;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)212) ) ) {
          result[0] += 0;
          result[1] += 0.014331210191082803;
          result[2] += 0;
          result[3] += 0.03980891719745223;
          result[4] += 0.945859872611465;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.25;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5;
          result[4] += 0.25;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)63) ) ) {
          result[0] += 0.5384615384615384;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.4564102564102564;
          result[4] += 0.005128205128205128;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.001557632398753894;
          result[3] += 0;
          result[4] += 0.9984423676012462;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)20.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3205128205128205;
          result[3] += 0;
          result[4] += 0.641025641025641;
          result[5] += 0.03846153846153846;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0008169934640522876;
          result[2] += 0.004084967320261438;
          result[3] += 0.9926470588235294;
          result[4] += 0;
          result[5] += 0.0024509803921568627;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)14) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09876543209876543;
          result[3] += 0.9012345679012346;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9622803502947742;
          result[1] += 0.0013164672886497625;
          result[2] += 0.0029763608265125064;
          result[3] += 0.033026157632648385;
          result[4] += 0;
          result[5] += 5.723770820216359e-05;
          result[6] += 0.0003434262492129815;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)94.5) ) ) {
          result[0] += 0.9990967392286153;
          result[1] += 0;
          result[2] += 0.000722608617107759;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00018065215427693975;
        } else {
          result[0] += 0.6590754125187509;
          result[1] += 0;
          result[2] += 0.0013636983499249965;
          result[3] += 0.33956088913132415;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
          result[0] += 0.0873320537428023;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8800383877159309;
          result[4] += 0.03262955854126679;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.29704142011834317;
          result[1] += 0.004733727810650888;
          result[2] += 0;
          result[3] += 0.6497041420118344;
          result[4] += 0.047337278106508875;
          result[5] += 0.001183431952662722;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
          result[0] += 0.996614759647935;
          result[1] += 0;
          result[2] += 0.003385240352064997;
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
          result[0] += 0.5526859504132232;
          result[1] += 0;
          result[2] += 0.005165289256198348;
          result[3] += 0.440771349862259;
          result[4] += 0;
          result[5] += 0.00034435261707988987;
          result[6] += 0.0010330578512396697;
        } else {
          result[0] += 0.9819875776397516;
          result[1] += 0;
          result[2] += 0.009316770186335406;
          result[3] += 0.004968944099378883;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.003726708074534162;
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
          result[0] += 0.9901873327386262;
          result[1] += 0;
          result[2] += 0.008028545941123996;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001784121320249777;
        } else {
          result[0] += 0.9996471625992355;
          result[1] += 0;
          result[2] += 0.00035283740076448106;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          result[0] += 0.00165929203539823;
          result[1] += 0.015486725663716814;
          result[2] += 0.00995575221238938;
          result[3] += 0.941924778761062;
          result[4] += 0.030420353982300884;
          result[5] += 0.0005530973451327434;
          result[6] += 0;
        } else {
          result[0] += 0.9931998488855308;
          result[1] += 0.0007555723460521345;
          result[2] += 0.00415564790328674;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0018889308651303363;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
          result[0] += 0.44745899979752984;
          result[1] += 0;
          result[2] += 0.00911115610447459;
          result[3] += 0.4359182020651954;
          result[4] += 0.10730917189714517;
          result[5] += 0.00020247013565499088;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.048761609907120744;
          result[4] += 0.9512383900928792;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)32.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)33.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9873417721518988;
          result[1] += 0;
          result[2] += 0.012658227848101266;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.7946458827516096;
          result[1] += 0;
          result[2] += 0.004744154523890207;
          result[3] += 0.19959335818366655;
          result[4] += 0;
          result[5] += 0.0010166045408336157;
          result[6] += 0;
        } else {
          result[0] += 0.3545906829488919;
          result[1] += 0;
          result[2] += 0.017639077340569877;
          result[3] += 0.5413839891451832;
          result[4] += 0.0845771144278607;
          result[5] += 0.0009045680687471732;
          result[6] += 0.0009045680687471732;
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
          result[0] += 0.0809090909090909;
          result[1] += 0.013636363636363636;
          result[2] += 0;
          result[3] += 0.9018181818181819;
          result[4] += 0;
          result[5] += 0.0036363636363636364;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82) ) ) {
          result[0] += 0.09090909090909091;
          result[1] += 0.0005980861244019139;
          result[2] += 0;
          result[3] += 0.9061004784688995;
          result[4] += 0.0005980861244019139;
          result[5] += 0.0017942583732057417;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.022222222222222223;
          result[3] += 0;
          result[4] += 0.9748148148148148;
          result[5] += 0.002962962962962963;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)85) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.19310344827586207;
          result[4] += 0.8068965517241379;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)84) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.22641509433962265;
          result[1] += 0.025728987993138937;
          result[2] += 0;
          result[3] += 0.7478559176672385;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 0.9989035087719299;
          result[1] += 0;
          result[2] += 0.0009868421052631581;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00010964912280701756;
        } else {
          result[0] += 0.693060364293241;
          result[1] += 0.0012042751768779167;
          result[2] += 0.008580460635255156;
          result[3] += 0.296552762306187;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006021375884389584;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
          result[0] += 0.16037219485495346;
          result[1] += 0.0049261083743842365;
          result[2] += 0;
          result[3] += 0.7985769020251778;
          result[4] += 0.03557744937055282;
          result[5] += 0.0005473453749315818;
          result[6] += 0;
        } else {
          result[0] += 0.9985787884171256;
          result[1] += 0;
          result[2] += 0.0008882572392965003;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005329543435779002;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
          result[0] += 0.9983466519702398;
          result[1] += 0;
          result[2] += 0.0016533480297602646;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.013303769401330377;
          result[3] += 0.0975609756097561;
          result[4] += 0.8891352549889135;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 0.08713692946058091;
          result[1] += 0;
          result[2] += 0.025587828492392807;
          result[3] += 0.8105117565698479;
          result[4] += 0.07468879668049792;
          result[5] += 0.002074688796680498;
          result[6] += 0;
        } else {
          result[0] += 0.9907975460122698;
          result[1] += 0;
          result[2] += 0.003834355828220858;
          result[3] += 0.0007668711656441716;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00460122699386503;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
          result[0] += 0.005025125628140704;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7135678391959799;
          result[4] += 0.2814070351758794;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9813664596273292;
          result[1] += 0;
          result[2] += 0.012422360248447204;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.006211180124223602;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)10.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.36363636363636365;
          result[1] += 0.0065293822199899544;
          result[2] += 0.014063284781516826;
          result[3] += 0.6157709693621296;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
          result[0] += 0.9830580941692054;
          result[1] += 0.0010154454598899046;
          result[2] += 0.0010154454598899046;
          result[3] += 0.014483458927903373;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004275559831115387;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03395585738539898;
          result[3] += 0.9286926994906621;
          result[4] += 0.03225806451612903;
          result[5] += 0.0050933786078098476;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)97) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.004032258064516129;
          result[1] += 0;
          result[2] += 0.0020161290322580645;
          result[3] += 0;
          result[4] += 0.9939516129032258;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
          result[0] += 0.20138288677614521;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7981849611063094;
          result[4] += 0;
          result[5] += 0.000432152117545376;
          result[6] += 0;
        } else {
          result[0] += 0.9979873490511788;
          result[1] += 0;
          result[2] += 0.0020126509488211618;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)99) ) ) {
          result[0] += 0.0012183978068839476;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9960402071276272;
          result[4] += 0.0018275967103259215;
          result[5] += 0.0009137983551629607;
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
          result[4] += 0.9993535875888817;
          result[5] += 0.0006464124111182935;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.2857142857142857;
          result[2] += 0.6428571428571429;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.07142857142857142;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)11) ) ) {
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
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
          result[0] += 0.48148148148148145;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5185185185185185;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9976032247521517;
          result[1] += 0;
          result[2] += 0.0006536659766859135;
          result[3] += 0.001743109271162436;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44) ) ) {
          result[0] += 0.10714285714285714;
          result[1] += 0;
          result[2] += 0.0026954177897574125;
          result[3] += 0.8901617250673854;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.991864406779661;
          result[1] += 0;
          result[2] += 0.006101694915254237;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002033898305084746;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
          result[0] += 0.9983622666229938;
          result[1] += 0.0006550933508024893;
          result[2] += 0.000982640026203734;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9886247443762781;
          result[1] += 0;
          result[2] += 0.0011503067484662577;
          result[3] += 0.010224948875255624;
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
          result[0] += 0.698307579102281;
          result[1] += 0.0023546725533480496;
          result[2] += 0.007652685798381161;
          result[3] += 0.2912435614422369;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004415011037527593;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)37.5) ) ) {
          result[0] += 0.9961174472215482;
          result[1] += 0;
          result[2] += 0.003882552778451832;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9994206257242179;
          result[1] += 0;
          result[2] += 0.0005793742757821553;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-15.5) ) ) {
          result[0] += 0.15384615384615385;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8461538461538461;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9987794955248169;
          result[5] += 0.0012205044751830757;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
          result[0] += 0.538961038961039;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.461038961038961;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.001715686274509804;
          result[1] += 0.008333333333333333;
          result[2] += 0.01642156862745098;
          result[3] += 0.9723039215686274;
          result[4] += 0;
          result[5] += 0.0012254901960784314;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
          result[0] += 0.9962134251290877;
          result[1] += 0.00017211703958691912;
          result[2] += 0.0024096385542168677;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0012048192771084338;
        } else {
          result[0] += 0.9532908704883227;
          result[1] += 0;
          result[2] += 0.011040339702760084;
          result[3] += 0.03481953290870488;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008492569002123143;
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
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)76.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
          result[0] += 0.12697576396206534;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8698630136986302;
          result[4] += 0.0026343519494204425;
          result[5] += 0.0005268703898840885;
          result[6] += 0;
        } else {
          result[0] += 0.9942834996608856;
          result[1] += 0.0019377967251235344;
          result[2] += 0.0031004747601976555;
          result[3] += 0.0002906695087685302;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00038755934502470693;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
          result[0] += 0.9992412746585736;
          result[1] += 0.0001167269756040621;
          result[2] += 0.00040854441461421736;
          result[3] += 0.00017509046340609315;
          result[4] += 5.836348780203105e-05;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9512195121951219;
          result[4] += 0;
          result[5] += 0.04878048780487805;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)53) ) ) {
          result[0] += 0.9378468368479467;
          result[1] += 0;
          result[2] += 0.05993340732519423;
          result[3] += 0.0022197558268590455;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.07498463429625077;
          result[1] += 0.006146281499692686;
          result[2] += 0.006146281499692686;
          result[3] += 0.8819913952059004;
          result[4] += 0.03073140749846343;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0.0032626427406199023;
          result[1] += 0.013050570962479609;
          result[2] += 0;
          result[3] += 0.27569331158238175;
          result[4] += 0.7079934747145188;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.000708215297450425;
          result[2] += 0;
          result[3] += 0.12181303116147309;
          result[4] += 0.8774787535410765;
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
          result[2] += 0.036290322580645164;
          result[3] += 0;
          result[4] += 0.956989247311828;
          result[5] += 0.006720430107526882;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)32) ) ) {
          result[0] += 0.9972870320130223;
          result[1] += 0;
          result[2] += 0.0027129679869777536;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.926829268292683;
          result[1] += 0;
          result[2] += 0.04878048780487805;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.024390243902439025;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0.00196078431372549;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.996078431372549;
          result[5] += 0.00196078431372549;
          result[6] += 0;
        } else {
          result[0] += 0.18328267477203647;
          result[1] += 0.00030395136778115504;
          result[2] += 0.01094224924012158;
          result[3] += 0.8039513677811551;
          result[4] += 0;
          result[5] += 0.001519756838905775;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)95.5) ) ) {
          result[0] += 0.16519823788546256;
          result[1] += 0;
          result[2] += 0.004405286343612335;
          result[3] += 0.8303964757709251;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)107) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.015037593984962405;
          result[2] += 0;
          result[3] += 0.024704618689581095;
          result[4] += 0.9602577873254565;
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
          result[0] += 0.9814241486068112;
          result[1] += 0.018575851393188854;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 0.9991757675664538;
          result[1] += 0;
          result[2] += 0.0006696888522563362;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00015454358128992376;
        } else {
          result[0] += 0.5266325609389106;
          result[1] += 0.001504664459825459;
          result[2] += 0.009328919650917845;
          result[3] += 0.4616310562744508;
          result[4] += 0;
          result[5] += 0.0001504664459825459;
          result[6] += 0.0007523322299127295;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.9477575160177427;
          result[1] += 0;
          result[2] += 0.0014785608674223755;
          result[3] += 0.050763923114834894;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9960130482058717;
          result[1] += 0;
          result[2] += 0.002657967862752205;
          result[3] += 0.0006040836051709556;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007249003262051468;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)120) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
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
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9739130434782609;
          result[1] += 0;
          result[2] += 0.014492753623188406;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.011594202898550725;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          result[0] += 0.9972936400541272;
          result[1] += 0;
          result[2] += 0.0027063599458728013;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
          result[0] += 0.9943100995732574;
          result[1] += 0;
          result[2] += 0.005689900426742532;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.999695832910879;
          result[1] += 0;
          result[2] += 0.00030416708912095713;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          result[0] += 0.9073982125124131;
          result[1] += 0.0009930486593843098;
          result[2] += 0.003475670307845084;
          result[3] += 0.08676762661370407;
          result[4] += 0;
          result[5] += 0.00024826216484607745;
          result[6] += 0.0011171797418073487;
        } else {
          result[0] += 0.16753623188405797;
          result[1] += 0.004347826086956522;
          result[2] += 0.01565217391304348;
          result[3] += 0.7979710144927536;
          result[4] += 0.013623188405797102;
          result[5] += 0.0008695652173913044;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)21.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.01661631419939577;
          result[3] += 0;
          result[4] += 0.9803625377643505;
          result[5] += 0.0030211480362537764;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0006587615283267457;
          result[2] += 0.004940711462450593;
          result[3] += 0.9944005270092227;
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
          result[0] += 0.0625;
          result[1] += 0.625;
          result[2] += 0;
          result[3] += 0.3125;
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9914396887159533;
          result[4] += 0.008560311284046693;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.52;
          result[1] += 0;
          result[2] += 0.0325;
          result[3] += 0;
          result[4] += 0.4475;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7623762376237624;
          result[4] += 0.2376237623762376;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.02242152466367713;
          result[2] += 0;
          result[3] += 0.006726457399103139;
          result[4] += 0.9708520179372198;
          result[5] += 0;
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
          result[1] += 0.002171552660152009;
          result[2] += 0.0054288816503800215;
          result[3] += 0.989685124864278;
          result[4] += 0;
          result[5] += 0.0027144408251900108;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)64) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)77.5) ) ) {
          result[0] += 0.9979755567219015;
          result[1] += 0.0006373247356976831;
          result[2] += 0.0010872010197195772;
          result[3] += 7.497938067031566e-05;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000224938142010947;
        } else {
          result[0] += 0.9642857142857143;
          result[1] += 0;
          result[2] += 0.03354978354978355;
          result[3] += 0.0021645021645021645;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
          result[0] += 0.18181818181818182;
          result[1] += 0.8181818181818182;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
          result[0] += 0.1867966991747937;
          result[1] += 0;
          result[2] += 0.001250312578144536;
          result[3] += 0.8119529882470617;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9979134063641106;
          result[1] += 0;
          result[2] += 0.0020865936358894104;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0.9747327502429541;
          result[1] += 0;
          result[2] += 0.02137998056365403;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.0009718172983479103;
          result[6] += 0.0029154518950437313;
        } else {
          result[0] += 0.9960835509138382;
          result[1] += 0;
          result[2] += 0.0030461270670147957;
          result[3] += 0.0008703220191470844;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)27.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0011855364552459987;
          result[3] += 0.997628927089508;
          result[4] += 0.0011855364552459987;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9677083333333334;
          result[1] += 0.012500000000000002;
          result[2] += 0.01979166666666667;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)73) ) ) {
          result[0] += 0.005405405405405406;
          result[1] += 0;
          result[2] += 0.04864864864864865;
          result[3] += 0.9459459459459459;
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
          result[0] += 0.025;
          result[1] += 0.35;
          result[2] += 0;
          result[3] += 0.625;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          result[0] += 0.001949317738791423;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9948018193632229;
          result[4] += 0.001949317738791423;
          result[5] += 0.001299545159194282;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0547945205479452;
          result[3] += 0;
          result[4] += 0.9315068493150684;
          result[5] += 0.0136986301369863;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
          result[0] += 0.9357798165137615;
          result[1] += 0;
          result[2] += 0.06422018348623854;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.00291970802919708;
          result[3] += 0;
          result[4] += 0.997080291970803;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)58.5) ) ) {
          result[0] += 0.9740792056344534;
          result[1] += 0.0008659508139937653;
          result[2] += 0.0017896316822537815;
          result[3] += 0.023092021706500408;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00017319016279875306;
        } else {
          result[0] += 0.046357615894039736;
          result[1] += 0;
          result[2] += 0.013245033112582781;
          result[3] += 0.9403973509933775;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
          result[0] += 0.9309737009095396;
          result[1] += 0;
          result[2] += 0.0019036875132200522;
          result[3] += 0.0666995699076359;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00042304166960445606;
        } else {
          result[0] += 0.6428728794888742;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3571271205111258;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)95) ) ) {
          result[0] += 0;
          result[1] += 0.00031269543464665416;
          result[2] += 0;
          result[3] += 0.99812382739212;
          result[4] += 0.0009380863039399625;
          result[5] += 0.0006253908692933083;
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
          result[1] += 0.0026749888542131075;
          result[2] += 0.006687472135532769;
          result[3] += 0;
          result[4] += 0.9897458760588498;
          result[5] += 0.0008916629514043691;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0.9969021065675341;
          result[1] += 0;
          result[2] += 0.0030978934324659233;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.974025974025974;
          result[1] += 0;
          result[2] += 0.012987012987012988;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.012987012987012988;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          result[0] += 0.9998112020138452;
          result[1] += 0;
          result[2] += 0.00018879798615481435;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          result[0] += 0;
          result[1] += 0.12023460410557185;
          result[2] += 0.06451612903225806;
          result[3] += 0.8152492668621701;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9959370238699848;
          result[1] += 0;
          result[2] += 0.0028779414254274595;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011850347045877774;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)49) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.007262393432270287;
          result[3] += 0.9927376065677297;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9936794582392776;
          result[1] += 0;
          result[2] += 0.004966139954853273;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0013544018058690745;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)109) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.011904761904761904;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9880952380952381;
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
          result[0] += 0.25;
          result[1] += 0.625;
          result[2] += 0;
          result[3] += 0.125;
          result[4] += 0;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          result[0] += 0.4860298895386615;
          result[1] += 0;
          result[2] += 0.016244314489928528;
          result[3] += 0.49772579597141003;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.13576415826221877;
          result[1] += 0.003878975950349108;
          result[2] += 0.0031031807602792862;
          result[3] += 0.8572536850271528;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
          result[0] += 0.998776758409786;
          result[1] += 0;
          result[2] += 0.0012232415902140672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9805825242718447;
          result[1] += 0;
          result[2] += 0.009708737864077669;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.009708737864077669;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
          result[0] += 0.9989604089058304;
          result[1] += 0;
          result[2] += 0.0010395910941696266;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.883963963963964;
          result[1] += 0.0052252252252252265;
          result[2] += 0.0023423423423423427;
          result[3] += 0.10774774774774776;
          result[4] += 0;
          result[5] += 0.0003603603603603604;
          result[6] += 0.0003603603603603604;
        } else {
          result[0] += 0.4045212277154935;
          result[1] += 0;
          result[2] += 0.008270538503951479;
          result[3] += 0.5278441462966367;
          result[4] += 0.05826134901672487;
          result[5] += 0.0001837897445322551;
          result[6] += 0.0009189487226612755;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9957805907172996;
          result[5] += 0.004219409282700422;
          result[6] += 0;
        } else {
          result[0] += 0.031705227077977724;
          result[1] += 0;
          result[2] += 0.018851756640959727;
          result[3] += 0.9443016281062554;
          result[4] += 0;
          result[5] += 0.005141388174807198;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-15.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)55) ) ) {
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)54) ) ) {
          result[0] += 0.00030627871362940275;
          result[1] += 0.004287901990811639;
          result[2] += 0.0018376722817764165;
          result[3] += 0.9926493108728943;
          result[4] += 0;
          result[5] += 0.0009188361408882082;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
          result[0] += 0.9820971867007673;
          result[1] += 0;
          result[2] += 0.010230179028132993;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0076726342710997444;
        } else {
          result[0] += 0.9988207547169812;
          result[1] += 0;
          result[2] += 0.0011792452830188679;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)37.5) ) ) {
          result[0] += 0.9991088138312093;
          result[1] += 0;
          result[2] += 0.0008911861687906604;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)1.5) ) ) {
          result[0] += 0.49753937007874016;
          result[1] += 0.005659448818897638;
          result[2] += 0.0054133858267716535;
          result[3] += 0.4894192913385827;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001968503937007874;
        } else {
          result[0] += 0.5794302269435055;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.4196040560115886;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009657170449058426;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          result[0] += 0.9840340606705695;
          result[1] += 0.00319318786588611;
          result[2] += 0.01277275146354444;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8147034708936868;
          result[1] += 0;
          result[2] += 0.007652364033889041;
          result[3] += 0.17682426892593606;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008198961464881115;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
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
          result[2] += 0;
          result[3] += 0.9815845824411135;
          result[4] += 0.017558886509635975;
          result[5] += 0.0008565310492505353;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)31) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0008417508417508417;
          result[2] += 0;
          result[3] += 0.8198653198653199;
          result[4] += 0.17845117845117844;
          result[5] += 0.0008417508417508417;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9473684210526315;
          result[1] += 0;
          result[2] += 0.05263157894736842;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0.11363636363636363;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8409090909090909;
          result[5] += 0.045454545454545456;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.004591368227731864;
          result[3] += 0;
          result[4] += 0.9944903581267218;
          result[5] += 0.0009182736455463728;
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9944693178825389;
          result[1] += 0;
          result[2] += 0.005267316302343956;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002633658151171978;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)17.5) ) ) {
          result[0] += 0.9317884507568679;
          result[1] += 0.0054195477480844705;
          result[2] += 0.010091571668846944;
          result[3] += 0.051952905998878716;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007475238273219959;
        } else {
          result[0] += 0.9757142857142858;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.022857142857142857;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0014285714285714286;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)49.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.007631160572337043;
          result[3] += 0.9907790143084261;
          result[4] += 0;
          result[5] += 0.001589825119236884;
          result[6] += 0;
        } else {
          result[0] += 0.9941808415398389;
          result[1] += 0;
          result[2] += 0.004923903312444047;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008952551477170994;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          result[0] += 0.9954614220877458;
          result[1] += 0;
          result[2] += 0.0035300050428643467;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0010085728693898135;
        } else {
          result[0] += 0.9995051954477981;
          result[1] += 0;
          result[2] += 0.0004948045522018803;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          result[0] += 0.6508309551787813;
          result[1] += 0.0017626321974148062;
          result[2] += 0.0057075709249622296;
          result[3] += 0.34027194896760116;
          result[4] += 0;
          result[5] += 0.0010911532650663086;
          result[6] += 0.00033573946617424877;
        } else {
          result[0] += 0.003190810465858328;
          result[1] += 0;
          result[2] += 0.018506700701978303;
          result[3] += 0.7913209955328654;
          result[4] += 0.18634333120612637;
          result[5] += 0.0006381620931716656;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)204) ) ) {
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)85) ) ) {
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
          result[0] += 0.30514705882352944;
          result[1] += 0;
          result[2] += 0.03676470588235294;
          result[3] += 0.6580882352941176;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5864197530864198;
          result[4] += 0.41358024691358025;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.010706638115631691;
          result[2] += 0;
          result[3] += 0.9892933618843683;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.03125;
          result[1] += 0.10416666666666667;
          result[2] += 0;
          result[3] += 0.8645833333333334;
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
          result[1] += 0.03333333333333333;
          result[2] += 0;
          result[3] += 0.9666666666666667;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
          result[0] += 0.00821917808219178;
          result[1] += 0.0038356164383561643;
          result[2] += 0.010958904109589041;
          result[3] += 0.9764383561643836;
          result[4] += 0.000547945205479452;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.15508021390374332;
          result[4] += 0.8449197860962567;
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
          result[0] += 0.5;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.015873015873015872;
          result[1] += 0.07142857142857142;
          result[2] += 0;
          result[3] += 0.9126984126984127;
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
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
          result[0] += 0.9426883308714918;
          result[1] += 0.0017725258493353029;
          result[2] += 0.0019202363367799113;
          result[3] += 0.05258493353028065;
          result[4] += 0.0005908419497784342;
          result[5] += 0;
          result[6] += 0.0004431314623338257;
        } else {
          result[0] += 0.9979909593169262;
          result[1] += 0.00027903342820469895;
          result[2] += 0.00011161337128187957;
          result[3] += 0.0014509738266644343;
          result[4] += 0;
          result[5] += 0.00016742005692281934;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
          result[0] += 0.9215796897038082;
          result[1] += 0;
          result[2] += 0.0031029619181946405;
          result[3] += 0.07475317348377997;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005641748942172073;
        } else {
          result[0] += 0.019878997407087293;
          result[1] += 0;
          result[2] += 0.02592912705272256;
          result[3] += 0.8271391529818496;
          result[4] += 0.12532411408815902;
          result[5] += 0.001728608470181504;
          result[6] += 0;
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
          result[0] += 0.40919452887537994;
          result[1] += 0;
          result[2] += 0.008358662613981762;
          result[3] += 0.5797872340425532;
          result[4] += 0.0013297872340425532;
          result[5] += 0.0011398176291793312;
          result[6] += 0.00018996960486322188;
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0015220700152207;
          result[3] += 0;
          result[4] += 0.9984779299847792;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0.0016789791806581598;
          result[1] += 0.0010073875083948958;
          result[2] += 0;
          result[3] += 0.9949630624580256;
          result[4] += 0.000671591672263264;
          result[5] += 0.0016789791806581598;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1032258064516129;
          result[3] += 0;
          result[4] += 0.8774193548387097;
          result[5] += 0.01935483870967742;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)93) ) ) {
          result[0] += 0.9972489683631361;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002751031636863824;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.024113475177304965;
          result[3] += 0;
          result[4] += 0.975886524822695;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-23) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)109) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0024154589371980675;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9975845410628019;
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)28) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)65) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.2857142857142857;
          result[1] += 0.7142857142857143;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
          result[0] += 0.990052470485352;
          result[1] += 0.001311762133799738;
          result[2] += 0.002842151289899432;
          result[3] += 0.005793616090948842;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9968526619012056;
          result[1] += 0;
          result[2] += 0.0029339592446388564;
          result[3] += 0.0001066894270777766;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001066894270777766;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.17636171337916445;
          result[1] += 0;
          result[2] += 0.003437334743521946;
          result[3] += 0.819672131147541;
          result[4] += 0;
          result[5] += 0.0005288207297726071;
          result[6] += 0;
        } else {
          result[0] += 0.9953870838347373;
          result[1] += 0;
          result[2] += 0.0024067388688327317;
          result[3] += 0.001604492579221821;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006016847172081829;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-6.5) ) ) {
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38) ) ) {
          result[0] += 0;
          result[1] += 0.01304945054945055;
          result[2] += 0;
          result[3] += 0.9869505494505495;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87) ) ) {
          result[0] += 0.5838779956427015;
          result[1] += 0;
          result[2] += 0.023238925199709513;
          result[3] += 0.39288307915758897;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.016129032258064516;
          result[1] += 0;
          result[2] += 0.07258064516129033;
          result[3] += 0.9112903225806451;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
          result[0] += 0.42;
          result[1] += 0;
          result[2] += 0.03111111111111111;
          result[3] += 0.5422222222222223;
          result[4] += 0.006666666666666667;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9938793354707083;
          result[1] += 0.0005343437287476926;
          result[2] += 0.0005343437287476926;
          result[3] += 0.00500340036918294;
          result[4] += 0;
          result[5] += 0;
          result[6] += 4.85767026134266e-05;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 0.43600430223178277;
          result[1] += 0.0017477816617370264;
          result[2] += 0.0028233396074213504;
          result[3] += 0.552702339338532;
          result[4] += 0.00551223447163216;
          result[5] += 0.0006722237160527025;
          result[6] += 0.000537778972842162;
        } else {
          result[0] += 0.9851926636378934;
          result[1] += 0;
          result[2] += 0.0003365303718660609;
          result[3] += 0.014470805990240618;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47.5) ) ) {
          result[0] += 0.8492063492063492;
          result[1] += 0;
          result[2] += 0.15079365079365079;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.990303409446356;
          result[1] += 0;
          result[2] += 0.004379105411323116;
          result[3] += 0.0006255864873318737;
          result[4] += 0.0025023459493274947;
          result[5] += 0.001876759461995621;
          result[6] += 0.00031279324366593683;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
          result[0] += 0.9913606911447084;
          result[1] += 0;
          result[2] += 0.008639308855291577;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9259259259259259;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.07407407407407407;
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
          result[0] += 0.9962168978562421;
          result[1] += 0;
          result[2] += 0.0037831021437578815;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0.9994993115533859;
          result[1] += 0;
          result[2] += 0.0005006884466140943;
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
          result[0] += 0.9066224351885981;
          result[1] += 0.001965843469713724;
          result[2] += 0.004791743457427202;
          result[3] += 0.0857599213662612;
          result[4] += 0;
          result[5] += 0.00012286521685710776;
          result[6] += 0.0007371913011426465;
        } else {
          result[0] += 0.1924347042930051;
          result[1] += 0.003002101471029721;
          result[2] += 0.018613029120384268;
          result[3] += 0.784449114380066;
          result[4] += 0.0009006304413089162;
          result[5] += 0.0006004202942059442;
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
          result[1] += 0.0016307893020221786;
          result[2] += 0.007827788649706457;
          result[3] += 0.9902152641878669;
          result[4] += 0;
          result[5] += 0.00032615786040443573;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
          result[0] += 0.0026041666666666665;
          result[1] += 0.026041666666666668;
          result[2] += 0;
          result[3] += 0.08072916666666667;
          result[4] += 0.890625;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
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
          result[2] += 0;
          result[3] += 0.2159730033745782;
          result[4] += 0.782902137232846;
          result[5] += 0.0011248593925759283;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)50) ) ) {
          result[0] += 0;
          result[1] += 0.0010319917440660474;
          result[2] += 0.0068799449604403165;
          result[3] += 0.9693842449260406;
          result[4] += 0.02063983488132095;
          result[5] += 0.0020639834881320948;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
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
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
          result[0] += 0.9971961075375226;
          result[1] += 0.0006597394029358403;
          result[2] += 0.0021441530595414813;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9999235649315906;
          result[1] += 0;
          result[2] += 7.643506840938622e-05;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
          result[0] += 0.7011070110701108;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2988929889298893;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
          result[0] += 0.3965183752417795;
          result[1] += 0.013539651837524178;
          result[2] += 0;
          result[3] += 0.5899419729206963;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9919335420178185;
          result[1] += 0.0014447387430772936;
          result[2] += 0.005417770286539851;
          result[3] += 0.0007223693715386468;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004815795810257645;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
          result[0] += 0.010678391959798994;
          result[1] += 0;
          result[2] += 0.00628140703517588;
          result[3] += 0.9824120603015075;
          result[4] += 0;
          result[5] += 0.000628140703517588;
          result[6] += 0;
        } else {
          result[0] += 0.9961656441717791;
          result[1] += 0;
          result[2] += 0.003067484662576687;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007668711656441718;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-7.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)52.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)10) ) ) {
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)85) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.07317073170731707;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.926829268292683;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9994229659549914;
          result[5] += 0.0005770340450086555;
          result[6] += 0;
        } else {
          result[0] += 0.2461404653185475;
          result[1] += 0.0021743857360295715;
          result[2] += 0.0032615786040443573;
          result[3] += 0.7475538160469667;
          result[4] += 0;
          result[5] += 0.0008697542944118286;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)105.5) ) ) {
          result[0] += 0.9945751110463846;
          result[1] += 0.0007645816646035098;
          result[2] += 0.0024393795965921504;
          result[3] += 0.0018932498361610719;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00032767785625864706;
        } else {
          result[0] += 0.06976744186046512;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9302325581395349;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0361794500723589;
          result[3] += 0;
          result[4] += 0.9638205499276411;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.017645062775704105;
          result[1] += 0;
          result[2] += 0.0040719375636240245;
          result[3] += 0.9782829996606719;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
          result[0] += 0.08333333333333333;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9166666666666666;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9149888143176734;
          result[1] += 0;
          result[2] += 0.006263982102908278;
          result[3] += 0.06577181208053691;
          result[4] += 0.006711409395973154;
          result[5] += 0.0026845637583892616;
          result[6] += 0.0035794183445190158;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)109) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.011095700416088766;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9889042995839112;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)82.5) ) ) {
          result[0] += 0.0009132420091324201;
          result[1] += 0;
          result[2] += 0.005936073059360731;
          result[3] += 0.9648401826484019;
          result[4] += 0.024200913242009132;
          result[5] += 0.00410958904109589;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5266299357208448;
          result[4] += 0.4733700642791552;
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-33.5) ) ) {
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
          result[2] += 0.018439716312056736;
          result[3] += 0;
          result[4] += 0.9815602836879432;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          result[0] += 0.9976551623067341;
          result[1] += 0.00047629515644463986;
          result[2] += 0.0013556092914193596;
          result[3] += 0.0002931047116582399;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00021982853374367993;
        } else {
          result[0] += 0.5454545454545454;
          result[1] += 0;
          result[2] += 0.4393939393939394;
          result[3] += 0.015151515151515152;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)104) ) ) {
          result[0] += 0.4563758389261745;
          result[1] += 0.030201342281879196;
          result[2] += 0;
          result[3] += 0.5134228187919463;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.01948051948051948;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9805194805194806;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)40) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
          result[0] += 0.8503914988814318;
          result[1] += 0;
          result[2] += 0.004194630872483222;
          result[3] += 0.14485458612975394;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005592841163310963;
        } else {
          result[0] += 0.006666666666666667;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9933333333333333;
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
          result[2] += 0.00703125;
          result[3] += 0.99296875;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          result[0] += 0.9906832298136646;
          result[1] += 0;
          result[2] += 0.007763975155279503;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0015527950310559005;
        } else {
          result[0] += 0.9986810064935064;
          result[1] += 0;
          result[2] += 0.0013189935064935065;
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
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.7216649198981884;
          result[1] += 0.0019463991615511305;
          result[2] += 0.012277287019014822;
          result[3] += 0.23251983829914658;
          result[4] += 0.029195987423266956;
          result[5] += 0.0016469531366971103;
          result[6] += 0.0007486150621350501;
        } else {
          result[0] += 0;
          result[1] += 0.001567398119122257;
          result[2] += 0.01293103448275862;
          result[3] += 0.8170062695924765;
          result[4] += 0.16810344827586207;
          result[5] += 0.00039184952978056425;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          result[0] += 0.02433628318584071;
          result[1] += 0;
          result[2] += 0.0007374631268436579;
          result[3] += 0.7116519174041299;
          result[4] += 0.2625368731563422;
          result[5] += 0.0007374631268436579;
          result[6] += 0;
        } else {
          result[0] += 0.7832538420773715;
          result[1] += 0;
          result[2] += 0.0005299417064122947;
          result[3] += 0.21621621621621623;
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
          result[0] += 0.13078470824949698;
          result[1] += 0.01676727028839705;
          result[2] += 0.0026827632461435278;
          result[3] += 0.8497652582159625;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
          result[0] += 0.991304347826087;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.008695652173913044;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.001488095238095238;
          result[2] += 0;
          result[3] += 0.9940476190476191;
          result[4] += 0;
          result[5] += 0.004464285714285714;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)55.5) ) ) {
          result[0] += 0.9973149521099666;
          result[1] += 0.0005610547829920249;
          result[2] += 0.0009217328577726122;
          result[3] += 0.0010018835410571872;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00020037670821143746;
        } else {
          result[0] += 0.9679690249912003;
          result[1] += 0;
          result[2] += 0.0031678986272439284;
          result[3] += 0.028511087645195353;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00035198873636043646;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)107) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
          result[0] += 0.17266798979302522;
          result[1] += 0.0025517436915225406;
          result[2] += 0.018712787071165297;
          result[3] += 0.5721576410547208;
          result[4] += 0.2339098383895662;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9951298701298701;
          result[4] += 0.003246753246753247;
          result[5] += 0.0016233766233766235;
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
          result[0] += 0.027972027972027972;
          result[1] += 0.0979020979020979;
          result[2] += 0;
          result[3] += 0.8741258741258742;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
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
          result[2] += 0.012126865671641791;
          result[3] += 0.9825870646766169;
          result[4] += 0.0037313432835820895;
          result[5] += 0.001554726368159204;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-191) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9943114947038054;
          result[1] += 0;
          result[2] += 0.0033346410357002745;
          result[3] += 0.001569242840329541;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007846214201647705;
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47) ) ) {
          result[0] += 0.9487179487179487;
          result[1] += 0;
          result[2] += 0.05128205128205128;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)33.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9978655282817502;
          result[1] += 0;
          result[2] += 0.0021344717182497333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9969834087481146;
          result[1] += 0;
          result[2] += 0.0030165912518853697;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)14.5) ) ) {
          result[0] += 0.013937282229965157;
          result[1] += 0.027874564459930314;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9477351916376306;
          result[5] += 0.010452961672473868;
          result[6] += 0;
        } else {
          result[0] += 0.021372328458942633;
          result[1] += 0.006749156355455568;
          result[2] += 0.007592800899887514;
          result[3] += 0.9642857142857143;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.018841262364578427;
          result[3] += 0.26424870466321243;
          result[4] += 0.7154969382948657;
          result[5] += 0.001413094677343382;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 0.47117422636710476;
          result[1] += 0;
          result[2] += 0.0008478168715557441;
          result[3] += 0.5273420941076729;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006358626536668081;
        } else {
          result[0] += 0.8936627282491945;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.10633727175080558;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          result[0] += 0.9881201956673653;
          result[1] += 0;
          result[2] += 0.003261122757978103;
          result[3] += 0.007453994875378522;
          result[4] += 0;
          result[5] += 0.0002329373398555788;
          result[6] += 0.0009317493594223152;
        } else {
          result[0] += 0.9052478134110787;
          result[1] += 0;
          result[2] += 0.01749271137026239;
          result[3] += 0.07725947521865889;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)25) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9984756097560976;
          result[5] += 0.001524390243902439;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
          result[0] += 0;
          result[1] += 0.4;
          result[2] += 0.5;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.1;
          result[6] += 0;
        } else {
          result[0] += 0.0009351620947630924;
          result[1] += 0;
          result[2] += 0.0015586034912718207;
          result[3] += 0.9962593516209477;
          result[4] += 0;
          result[5] += 0.0012468827930174565;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)95.5) ) ) {
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
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          result[0] += 0.9978575254418853;
          result[1] += 0;
          result[2] += 0.0008569898232458489;
          result[3] += 0.00096411355115158;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00032137118371719335;
        } else {
          result[0] += 0.01818181818181818;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9818181818181818;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          result[0] += 0.3206879109762266;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6793120890237734;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9764102564102565;
          result[1] += 0;
          result[2] += 0.02153846153846154;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0020512820512820517;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 0.9988830143718818;
          result[1] += 0;
          result[2] += 0.0010425199195770347;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 7.446570854121677e-05;
        } else {
          result[0] += 0.545688847235239;
          result[1] += 0.004217432052483599;
          result[2] += 0.009137769447047797;
          result[3] += 0.44048734770384257;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00046860356138706655;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
          result[0] += 0.9922275216392863;
          result[1] += 0;
          result[2] += 0.0035329447094152974;
          result[3] += 0.0042395336512983575;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.955108359133127;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04489164086687306;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)95) ) ) {
          result[0] += 0;
          result[1] += 0.0009239297813366185;
          result[2] += 0;
          result[3] += 0.9972282106559902;
          result[4] += 0.0012319063751154915;
          result[5] += 0.0006159531875577457;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9954648526077098;
          result[5] += 0.0045351473922902496;
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
          result[1] += 0.18867924528301888;
          result[2] += 0.660377358490566;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.1509433962264151;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9122807017543859;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.08771929824561403;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-13) ) ) {
          result[0] += 0.4221698113207547;
          result[1] += 0.018867924528301886;
          result[2] += 0;
          result[3] += 0.5589622641509434;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
          result[0] += 0.9990186457311089;
          result[1] += 0.0005451968160505942;
          result[2] += 0.00032711808963035657;
          result[3] += 0.00010903936321011885;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9910281058317312;
          result[1] += 0;
          result[2] += 0.0008239494644328481;
          result[3] += 0.007964844822850866;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00018309988098507736;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
          result[0] += 0.991187270501836;
          result[1] += 0.002203182374541004;
          result[2] += 0.00587515299877601;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007343941248470012;
        } else {
          result[0] += 0.6234947161464734;
          result[1] += 0;
          result[2] += 0.005038092897517819;
          result[3] += 0.3710985500122881;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000368640943720816;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)11.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.2076966610073571;
          result[1] += 0.005659309564233163;
          result[2] += 0;
          result[3] += 0.7866440294284097;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0.01181434599156118;
          result[1] += 0;
          result[2] += 0.02531645569620253;
          result[3] += 0.5729957805907173;
          result[4] += 0.389873417721519;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9853107344632769;
          result[1] += 0;
          result[2] += 0.014689265536723164;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
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
          result[0] += 0.02564102564102564;
          result[1] += 0.08974358974358974;
          result[2] += 0;
          result[3] += 0.8846153846153846;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)2.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.005277044854881266;
          result[4] += 0.9947229551451188;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.005681818181818182;
          result[2] += 0;
          result[3] += 0.08238636363636363;
          result[4] += 0.9119318181818182;
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
          result[0] += 0.994910941475827;
          result[1] += 0;
          result[2] += 0.004580152671755726;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005089058524173029;
        } else {
          result[0] += 0.9997099287253439;
          result[1] += 0;
          result[2] += 0.00029007127465605835;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9971711456859972;
          result[5] += 0.002828854314002829;
          result[6] += 0;
        } else {
          result[0] += 0.4044750430292599;
          result[1] += 0.0015887726731100226;
          result[2] += 0.007149477028995101;
          result[3] += 0.5857275254865616;
          result[4] += 0;
          result[5] += 0.0009267840593141798;
          result[6] += 0.00013239772275916854;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)36) ) ) {
          result[0] += 0.9951884522854851;
          result[1] += 0;
          result[2] += 0.003475006682705159;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0013365410318096765;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 0.001448225923244026;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9757422157856626;
          result[4] += 0.020999275887038378;
          result[5] += 0.0018102824040550326;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.004243281471004243;
          result[2] += 0;
          result[3] += 0.7538896746817539;
          result[4] += 0.24186704384724186;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
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
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)88.5) ) ) {
          result[0] += 0.8791208791208791;
          result[1] += 0;
          result[2] += 0.08791208791208792;
          result[3] += 0;
          result[4] += 0.03296703296703297;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.031019202363367804;
          result[3] += 0;
          result[4] += 0.9630723781388479;
          result[5] += 0.005908419497784344;
          result[6] += 0;
        }
      }
    }
  } else {
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
          result[0] += 0.9765100671140939;
          result[1] += 0;
          result[2] += 0.021252796420581657;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0022371364653243847;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0.9996336549029186;
          result[1] += 0;
          result[2] += 0.00036634509708145075;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          result[0] += 0.09542483660130718;
          result[1] += 0.02483660130718954;
          result[2] += 0.0392156862745098;
          result[3] += 0.8405228758169935;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.983272999625515;
          result[1] += 0;
          result[2] += 0.0039945075521158405;
          result[3] += 0.011733865934340282;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009986268880289601;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 0.8571428571428571;
          result[2] += 0;
          result[3] += 0.14285714285714285;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0063025210084033615;
          result[3] += 0.9936974789915967;
          result[4] += 0;
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
          result[0] += 0.3496376811594203;
          result[1] += 0.0036231884057971015;
          result[2] += 0;
          result[3] += 0.644927536231884;
          result[4] += 0.0018115942028985507;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9976667530832192;
          result[1] += 0.000592570645531647;
          result[2] += 0.0008888559682974704;
          result[3] += 0.0007407133069145587;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001111069960371838;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 0.24508240297713982;
          result[1] += 0;
          result[2] += 0.000531632110579479;
          result[3] += 0.7506645401382244;
          result[4] += 0.002126528442317916;
          result[5] += 0.001594896331738437;
          result[6] += 0;
        } else {
          result[0] += 0.6595744680851063;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3351063829787234;
          result[4] += 0;
          result[5] += 0.005319148936170213;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
          result[0] += 0.24676165803108807;
          result[1] += 0.009715025906735751;
          result[2] += 0;
          result[3] += 0.7435233160621761;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5886990801576872;
          result[1] += 0;
          result[2] += 0.05913272010512484;
          result[3] += 0.26544021024967146;
          result[4] += 0.08672798948751642;
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
          result[0] += 0.0033112582781456954;
          result[1] += 0.029801324503311258;
          result[2] += 0;
          result[3] += 0.9668874172185431;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
          result[0] += 0.004563004563004563;
          result[1] += 0;
          result[2] += 0.009828009828009828;
          result[3] += 0.9856089856089856;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8620829943043125;
          result[1] += 0;
          result[2] += 0.008950366151342554;
          result[3] += 0.1224572823433686;
          result[4] += 0.0024410089503661514;
          result[5] += 0.0020341741253051262;
          result[6] += 0.0020341741253051262;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)11.5) ) ) {
          result[0] += 0.009478672985781991;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.990521327014218;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.000609942055504727;
          result[2] += 0;
          result[3] += 0.9981701738334858;
          result[4] += 0;
          result[5] += 0.001219884111009454;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.925;
          result[5] += 0.075;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23) ) ) {
          result[0] += 0;
          result[1] += 0.25;
          result[2] += 0.75;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9431818181818182;
          result[1] += 0;
          result[2] += 0.022727272727272728;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.03409090909090909;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
          result[0] += 0.9985546149081148;
          result[1] += 0.00010324179227751394;
          result[2] += 0.0012389015073301672;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00010324179227751394;
        } else {
          result[0] += 0;
          result[1] += 0.6666666666666666;
          result[2] += 0;
          result[3] += 0.3333333333333333;
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
          result[0] += 0.9516214779372674;
          result[1] += 0;
          result[2] += 0.0034556087187666137;
          result[3] += 0.044657097288676235;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002658160552897395;
        } else {
          result[0] += 0.5167958656330749;
          result[1] += 0;
          result[2] += 0.008490217792543374;
          result[3] += 0.4739756367663344;
          result[4] += 0;
          result[5] += 0.0007382798080472499;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 0.5167570231641203;
          result[1] += 0.00665352390340069;
          result[2] += 0.010842779694430755;
          result[3] += 0.4650073928043371;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007392804337111878;
        } else {
          result[0] += 0.9848112918073029;
          result[1] += 0;
          result[2] += 0.00122737035900583;
          result[3] += 0.013961337833691316;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)9.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)25.5) ) ) {
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
          result[1] += 0.0003155569580309246;
          result[2] += 0;
          result[3] += 0.9977911012937836;
          result[4] += 0;
          result[5] += 0.0018933417481855476;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
          result[0] += 0.9696969696969697;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.030303030303030304;
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
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.2727272727272727;
          result[2] += 0.6363636363636364;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.09090909090909091;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
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
          result[0] += 0.9931372549019608;
          result[1] += 0;
          result[2] += 0.006862745098039216;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.999321151779148;
          result[1] += 0;
          result[2] += 0.0005091361656389659;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00016971205521298862;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          result[0] += 0.9868616232252594;
          result[1] += 0.006145369781733416;
          result[2] += 0.005933460478915023;
          result[3] += 0.00021190930281839369;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008476372112735747;
        } else {
          result[0] += 0.7727593507410021;
          result[1] += 0;
          result[2] += 0.012702893436838392;
          result[3] += 0.2145377558221595;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
          result[0] += 0.0031141868512110727;
          result[1] += 0;
          result[2] += 0.004152249134948097;
          result[3] += 0.9927335640138408;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.841576794347341;
          result[1] += 0;
          result[2] += 0.008553365563406471;
          result[3] += 0.14801041279285979;
          result[4] += 0;
          result[5] += 0.0003718854592785422;
          result[6] += 0.0014875418371141688;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
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
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
          result[0] += 0.0820578231292517;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9175170068027211;
          result[4] += 0;
          result[5] += 0.00042517006802721087;
          result[6] += 0;
        } else {
          result[0] += 0.2970007315288954;
          result[1] += 0.000731528895391368;
          result[2] += 0;
          result[3] += 0.7015362106803219;
          result[4] += 0;
          result[5] += 0.000731528895391368;
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
          result[1] += 0.2553191489361702;
          result[2] += 0.723404255319149;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.02127659574468085;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79) ) ) {
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
          result[3] += 1;
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
          result[0] += 0.9976303317535545;
          result[1] += 0;
          result[2] += 0.0022785271600437476;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 9.11410864017499e-05;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
          result[0] += 0.984561403508772;
          result[1] += 0.0043859649122807015;
          result[2] += 0.009649122807017544;
          result[3] += 0.0005263157894736842;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008771929824561404;
        } else {
          result[0] += 0.40828512782235493;
          result[1] += 0;
          result[2] += 0.0072774771412576975;
          result[3] += 0.5840641910804254;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003732039559619332;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
          result[0] += 0.015151515151515152;
          result[1] += 0;
          result[2] += 0.09090909090909091;
          result[3] += 0;
          result[4] += 0.8636363636363636;
          result[5] += 0.030303030303030304;
          result[6] += 0;
        } else {
          result[0] += 0.0009749756256093598;
          result[1] += 0.0006499837504062399;
          result[2] += 0.0006499837504062399;
          result[3] += 0.9964250893727656;
          result[4] += 0;
          result[5] += 0.0012999675008124798;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)11) ) ) {
          result[0] += 0.9986996098829649;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0013003901170351106;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.025518341307814992;
          result[3] += 0;
          result[4] += 0.9744816586921851;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)96) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
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
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
          result[0] += 0.9990842490842491;
          result[1] += 0;
          result[2] += 0.0009157509157509158;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9908856405846947;
          result[1] += 0;
          result[2] += 0.0008598452278589854;
          result[3] += 0.007910576096302666;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00034393809114359415;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
          result[0] += 0.35714285714285715;
          result[1] += 0.047619047619047616;
          result[2] += 0;
          result[3] += 0.5952380952380952;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.6666666666666666;
          result[2] += 0;
          result[3] += 0.3333333333333333;
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
          result[0] += 0.9989953114534494;
          result[1] += 0;
          result[2] += 0.0010046885465505692;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9142193847939638;
          result[1] += 0.0031340684852002314;
          result[2] += 0.007196749854904235;
          result[3] += 0.07475333720255367;
          result[4] += 0;
          result[5] += 0.00011607661056297154;
          result[6] += 0.0005803830528148577;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.001830831197363603;
          result[3] += 0.9981691688026364;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
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
          result[1] += 0.0022509848058525606;
          result[2] += 0;
          result[3] += 0.7405740011254924;
          result[4] += 0.25717501406865506;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)1.5) ) ) {
          result[0] += 0.19719887955182072;
          result[1] += 0.0005602240896358543;
          result[2] += 0.008403361344537815;
          result[3] += 0.41680672268907565;
          result[4] += 0.37478991596638656;
          result[5] += 0.002240896358543417;
          result[6] += 0;
        } else {
          result[0] += 0.09266802443991853;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.594704684317719;
          result[4] += 0.31262729124236255;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)46) ) ) {
          result[0] += 0;
          result[1] += 0.016;
          result[2] += 0.004;
          result[3] += 0.98;
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
          result[0] += 0.05714285714285714;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9428571428571428;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.99450389459125;
          result[1] += 0.0006915629322268328;
          result[2] += 0.0023658731891970596;
          result[3] += 0.002256679042003349;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00018199024532285072;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.005962820063135742;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9940371799368642;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
          result[0] += 0.924404272801972;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.07559572719802794;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)23) ) ) {
          result[0] += 0.9880843263061412;
          result[1] += 0;
          result[2] += 0.00916590284142988;
          result[3] += 0.0018331805682859762;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009165902841429881;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4666666666666667;
          result[3] += 0;
          result[4] += 0.4;
          result[5] += 0.13333333333333333;
          result[6] += 0;
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.002962962962962963;
          result[3] += 0;
          result[4] += 0.997037037037037;
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
          result[1] += 0.002778635381290522;
          result[2] += 0.00216116085211485;
          result[3] += 0.9935165174436554;
          result[4] += 0;
          result[5] += 0.0015436863229391787;
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
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
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
          result[0] += 0.9976973263400282;
          result[1] += 0;
          result[2] += 0.002302673659971856;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          result[0] += 0;
          result[1] += 0.06451612903225806;
          result[2] += 0;
          result[3] += 0.9354838709677419;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8387096774193549;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.16129032258064516;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          result[0] += 0.02788339670468948;
          result[1] += 0.025348542458808618;
          result[2] += 0.053231939163498096;
          result[3] += 0.8935361216730038;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.614821591948765;
          result[1] += 0.0001524855138761818;
          result[2] += 0.002134797194266545;
          result[3] += 0.381671241232083;
          result[4] += 0;
          result[5] += 0.0001524855138761818;
          result[6] += 0.0010673985971332725;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
          result[0] += 0.9895408163265307;
          result[1] += 0;
          result[2] += 0.003954081632653062;
          result[3] += 0.005994897959183674;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005102040816326532;
        } else {
          result[0] += 0.971159179145868;
          result[1] += 0;
          result[2] += 0.003882418191902385;
          result[3] += 0.024958402662229616;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9959302325581395;
          result[1] += 0;
          result[2] += 0.004069767441860465;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9995460391919497;
          result[1] += 0;
          result[2] += 0.0004539608080502383;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          result[0] += 0.9490740740740741;
          result[1] += 0;
          result[2] += 0.032407407407407406;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.018518518518518517;
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
          result[0] += 0.9995102840352595;
          result[1] += 0;
          result[2] += 0.0004897159647404506;
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
          result[0] += 0.9684726048362412;
          result[1] += 0.0026017753290480563;
          result[2] += 0.0053565962656871744;
          result[3] += 0.022344658708295072;
          result[4] += 0;
          result[5] += 0.00015304560759106213;
          result[6] += 0.0010713192531374349;
        } else {
          result[0] += 0.6740196078431372;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3253676470588235;
          result[4] += 0;
          result[5] += 0.0006127450980392156;
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
          result[0] += 0.16080129940443963;
          result[1] += 0.0046020573903627505;
          result[2] += 0.016242555495397944;
          result[3] += 0.8183540877097997;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)102.5) ) ) {
          result[0] += 0;
          result[1] += 0.0019336126329358686;
          result[2] += 0;
          result[3] += 0.9974218498227522;
          result[4] += 0.0003222687721559781;
          result[5] += 0.0003222687721559781;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8888888888888888;
          result[5] += 0.1111111111111111;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)26) ) ) {
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
          result[2] += 0.011577424023154847;
          result[3] += 0;
          result[4] += 0.9884225759768451;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4.5) ) ) {
          result[0] += 0.9834938101788171;
          result[1] += 0;
          result[2] += 0.012379642365887207;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0041265474552957355;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          result[0] += 0.9987636003956478;
          result[1] += 0;
          result[2] += 0.0012363996043521265;
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
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
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
          result[0] += 0.3087248322147651;
          result[1] += 0.009395973154362415;
          result[2] += 0.010067114093959731;
          result[3] += 0.6718120805369128;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          result[0] += 0.03581744656268053;
          result[1] += 0.008087810514153668;
          result[2] += 0.01097631426920855;
          result[3] += 0.8757943385326401;
          result[4] += 0.06932409012131716;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9811987560079164;
          result[1] += 0;
          result[2] += 0.005371783997738197;
          result[3] += 0.01229855810008482;
          result[4] += 0;
          result[5] += 0.00028272547356516825;
          result[6] += 0.0008481764206955048;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)101) ) ) {
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
          result[1] += 0.003246753246753247;
          result[2] += 0;
          result[3] += 0.9956709956709957;
          result[4] += 0.0010822510822510823;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)106.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9959839357429718;
          result[5] += 0.004016064257028112;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16666666666666666;
          result[3] += 0;
          result[4] += 0.8333333333333334;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
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
          result[0] += 0.00044802867383512545;
          result[1] += 0.00044802867383512545;
          result[2] += 0;
          result[3] += 0.9959677419354839;
          result[4] += 0.0031362007168458782;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
          result[0] += 0.10526315789473684;
          result[1] += 0;
          result[2] += 0.7894736842105263;
          result[3] += 0;
          result[4] += 0.10526315789473684;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.022066198595787363;
          result[3] += 0;
          result[4] += 0.9739217652958877;
          result[5] += 0.004012036108324975;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
          result[0] += 0.6654205607476635;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.33457943925233646;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9970232693215232;
          result[1] += 0.0006171270918793335;
          result[2] += 0.0018513812756380005;
          result[3] += 0.00014520637455984318;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003630159363996079;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0.5270083102493075;
          result[1] += 0;
          result[2] += 0.010734072022160665;
          result[3] += 0.4615650969529086;
          result[4] += 0;
          result[5] += 0.00034626038781163435;
          result[6] += 0.00034626038781163435;
        } else {
          result[0] += 0.7047813510294368;
          result[1] += 0;
          result[2] += 0.00136123872724179;
          result[3] += 0.2938574102433214;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)103.5) ) ) {
          result[0] += 0.1950989632422243;
          result[1] += 0.011310084825636193;
          result[2] += 0;
          result[3] += 0.7926484448633365;
          result[4] += 0.000942507068803016;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.2644927536231884;
          result[1] += 0;
          result[2] += 0.043478260869565216;
          result[3] += 0.6920289855072463;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)102) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
          result[0] += 0.045454545454545456;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9545454545454546;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0.00847457627118644;
          result[1] += 0.01694915254237288;
          result[2] += 0;
          result[3] += 0.00423728813559322;
          result[4] += 0.9703389830508474;
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
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
          result[0] += 0.9928366762177651;
          result[1] += 0;
          result[2] += 0.0071633237822349575;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9736842105263158;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.02631578947368421;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9830508474576272;
          result[1] += 0;
          result[2] += 0.01694915254237288;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9996044303797469;
          result[1] += 0;
          result[2] += 0.00039556962025316455;
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)19) ) ) {
          result[0] += 0.9996534996534997;
          result[1] += 0;
          result[2] += 0.0003465003465003465;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8776978417266187;
          result[1] += 0.0015145778114350624;
          result[2] += 0.003975766755017039;
          result[3] += 0.11491859144263536;
          result[4] += 0;
          result[5] += 0.0001893222264293828;
          result[6] += 0.0017039000378644452;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0.16128109808407207;
          result[1] += 0.006863025450386045;
          result[2] += 0.007434944237918215;
          result[3] += 0.7437803831855877;
          result[4] += 0.08064054904203603;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.02324352879027998;
          result[1] += 0;
          result[2] += 0.017960908610670893;
          result[3] += 0.16270470153195984;
          result[4] += 0.7945060750132066;
          result[5] += 0.001584786053882726;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
          result[0] += 0;
          result[1] += 0.00281195079086116;
          result[2] += 0.00421792618629174;
          result[3] += 0.9929701230228472;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.026755852842809364;
          result[3] += 0.9732441471571907;
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
          result[4] += 0.9969088098918083;
          result[5] += 0.0030911901081916537;
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
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.002288329519450801;
          result[3] += 0.7711670480549199;
          result[4] += 0.22654462242562928;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9795918367346939;
          result[1] += 0;
          result[2] += 0.02040816326530612;
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
          result[0] += 0.13798449612403102;
          result[1] += 0.013953488372093023;
          result[2] += 0;
          result[3] += 0.8480620155038759;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
          result[0] += 0.998546511627907;
          result[1] += 0;
          result[2] += 0.0014534883720930232;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.7153722978382706;
          result[1] += 0;
          result[2] += 0.00040032025620496394;
          result[3] += 0.28422738190552443;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.3446033810143043;
          result[1] += 0;
          result[2] += 0.0199393151278717;
          result[3] += 0.551798872995232;
          result[4] += 0.08149111400086693;
          result[5] += 0.0008669267446900738;
          result[6] += 0.0013003901170351108;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
          result[0] += 0;
          result[1] += 0.011111111111111112;
          result[2] += 0.020634920634920634;
          result[3] += 0.8277777777777777;
          result[4] += 0.14047619047619048;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9953379953379954;
          result[1] += 0.004662004662004662;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
          result[0] += 0.03969957081545064;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.018240343347639486;
          result[4] += 0.9420600858369099;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
          result[0] += 0.9959547480287968;
          result[1] += 0;
          result[2] += 0.0009598902982516285;
          result[3] += 0.002948234487487145;
          result[4] += 6.856359273225919e-05;
          result[5] += 0;
          result[6] += 6.856359273225919e-05;
        } else {
          result[0] += 0.02;
          result[1] += 0.006153846153846154;
          result[2] += 0.0015384615384615385;
          result[3] += 0.2723076923076923;
          result[4] += 0.7;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
          result[0] += 0.7144317849839322;
          result[1] += 0.0013146362839614374;
          result[2] += 0.0013146362839614374;
          result[3] += 0.28118609406952966;
          result[4] += 0;
          result[5] += 0.0008764241893076249;
          result[6] += 0.0008764241893076249;
        } else {
          result[0] += 0.8259018036072144;
          result[1] += 0;
          result[2] += 0.00751503006012024;
          result[3] += 0.12975951903807614;
          result[4] += 0.03682364729458918;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)10.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.007641365257259297;
          result[1] += 0.006622516556291391;
          result[2] += 0.016811003565970453;
          result[3] += 0.9689251146204788;
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
          result[0] += 0.1111111111111111;
          result[1] += 0;
          result[2] += 0.8888888888888888;
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
          result[0] += 0.05;
          result[1] += 0.5;
          result[2] += 0;
          result[3] += 0.45;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.02912621359223301;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.970873786407767;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)25) ) ) {
          result[0] += 0.7050423917893798;
          result[1] += 0;
          result[2] += 0.004016064257028112;
          result[3] += 0.2784471218206158;
          result[4] += 0.01249442213297635;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8676018447348194;
          result[1] += 0;
          result[2] += 0.004996156802459646;
          result[3] += 0.12605687932359724;
          result[4] += 0.00048039969254419675;
          result[5] += 0.00048039969254419675;
          result[6] += 0.0003843197540353574;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 0.9988005016084183;
          result[1] += 0;
          result[2] += 0.0011994983915817022;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6028654889414382;
          result[1] += 0.002364723883711225;
          result[2] += 0.00486854917234664;
          result[3] += 0.37585199610516057;
          result[4] += 0.01321463346779802;
          result[5] += 0.0006955070246209486;
          result[6] += 0.0001391014049241897;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)191) ) ) {
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
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
          result[0] += 0.8954169190389663;
          result[1] += 0.0012113870381586917;
          result[2] += 0.00343226327478296;
          result[3] += 0.09953563496870584;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004037956793862306;
        } else {
          result[0] += 0.9867249201814822;
          result[1] += 0.00021004873130566295;
          result[2] += 0.0006301461939169889;
          result[3] += 0.01218282641572845;
          result[4] += 0;
          result[5] += 0.00012602923878339778;
          result[6] += 0.00012602923878339778;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85) ) ) {
          result[0] += 0.18914883026381285;
          result[1] += 0;
          result[2] += 0.015928322548531607;
          result[3] += 0.7929318068690892;
          result[4] += 0.0014932802389248383;
          result[5] += 0.0004977600796416127;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.10069444444444445;
          result[3] += 0;
          result[4] += 0.8993055555555556;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
          result[0] += 0.4261321455085375;
          result[1] += 0;
          result[2] += 0.014105419450631032;
          result[3] += 0.032665181885671864;
          result[4] += 0.5270972531551597;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.01282483968950388;
          result[1] += 0;
          result[2] += 0.006749915626054675;
          result[3] += 0.974687816402295;
          result[4] += 0.004049949375632805;
          result[5] += 0.0016874789065136687;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
          result[0] += 0.6538461538461539;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.34615384615384615;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9942242581159132;
          result[1] += 0;
          result[2] += 0.0047799243178649675;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009958175662218682;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-34) ) ) {
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
          result[0] += 0.10256410256410256;
          result[1] += 0.358974358974359;
          result[2] += 0;
          result[3] += 0.5384615384615384;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)105) ) ) {
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          result[0] += 0.6030701754385965;
          result[1] += 0;
          result[2] += 0.02412280701754386;
          result[3] += 0.37280701754385964;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0053590568060021436;
          result[2] += 0;
          result[3] += 0.9946409431939979;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2727272727272727;
          result[4] += 0.7272727272727273;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.07009345794392523;
          result[4] += 0.9299065420560748;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 80;
  result[1] /= 80;
  result[2] /= 80;
  result[3] /= 80;
  result[4] /= 80;
  result[5] /= 80;
  result[6] /= 80;
  
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
