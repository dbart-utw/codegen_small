
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
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        result[0] += (float)0.98559670781893;
        result[1] += (float)0;
        result[2] += (float)0.01440329218106996;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9992151733158927;
        result[1] += (float)0;
        result[2] += (float)0.0007848266841072596;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
        result[0] += (float)0.9972401103955841;
        result[1] += (float)0;
        result[2] += (float)0.0027598896044158236;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.9995993589743589;
        result[5] += (float)0.00040064102564102563;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.016231474947071278;
        result[1] += (float)0.009174311926605505;
        result[2] += (float)0.015525758645024701;
        result[3] += (float)0.9578922606445542;
        result[4] += (float)0;
        result[5] += (float)0.0011761938367442955;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += (float)0.9833989178553862;
        result[1] += (float)0;
        result[2] += (float)0.004672897196261683;
        result[3] += (float)0.010329562223315299;
        result[4] += (float)0;
        result[5] += (float)0.00036891293654697495;
        result[6] += (float)0.0012297097884899166;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.0007493443237167478;
        result[3] += (float)0.9992506556762832;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        result[0] += (float)0.0012330456226880395;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.998766954377312;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.19365652398143374;
        result[1] += (float)0.00025786487880350697;
        result[2] += (float)0.007735946364105209;
        result[3] += (float)0.79706034038164;
        result[4] += (float)0;
        result[5] += (float)0.0012893243940175349;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)8) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.09523809523809523;
        result[2] += (float)0;
        result[3] += (float)0.9047619047619048;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
        result[0] += (float)0.367112810707457;
        result[1] += (float)0.02676864244741874;
        result[2] += (float)0;
        result[3] += (float)0.6061185468451242;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.8774296821404068;
        result[1] += (float)0.0002667886271819498;
        result[2] += (float)0.0020961963564296053;
        result[3] += (float)0.11997865690982541;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00022867596615595696;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += (float)0.945376137997125;
        result[1] += (float)0;
        result[2] += (float)0.0014374700527072352;
        result[3] += (float)0.05318639195016771;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9954822954822955;
        result[1] += (float)0;
        result[2] += (float)0.0029304029304029304;
        result[3] += (float)0.001221001221001221;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0003663003663003663;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)6504) ) ) {
        result[0] += (float)0.9993893828950884;
        result[1] += (float)0;
        result[2] += (float)0.0004961263977407167;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00011449070717093463;
      } else {
        result[0] += (float)0.6666666666666666;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.3333333333333333;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += (float)0.7368471216164697;
        result[1] += (float)0.0013343499809378575;
        result[2] += (float)0.0072436141822340835;
        result[3] += (float)0.22683949675943577;
        result[4] += (float)0.025924513915364086;
        result[5] += (float)0.0007624857033930614;
        result[6] += (float)0.0010484178421654594;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.0007903055848261329;
        result[2] += (float)0.005795574288724975;
        result[3] += (float)0.8237618545837725;
        result[4] += (float)0.16912539515279243;
        result[5] += (float)0.0005268703898840886;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
        result[0] += (float)0.24423076923076922;
        result[1] += (float)0;
        result[2] += (float)0.015384615384615385;
        result[3] += (float)0.40384615384615385;
        result[4] += (float)0.33653846153846156;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.09174917491749175;
        result[1] += (float)0.007260726072607261;
        result[2] += (float)0;
        result[3] += (float)0.592079207920792;
        result[4] += (float)0.3089108910891089;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
        result[0] += (float)0.005008347245409015;
        result[1] += (float)0.02003338898163606;
        result[2] += (float)0;
        result[3] += (float)0.19532554257095158;
        result[4] += (float)0.7796327212020033;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        result[0] += (float)0.20846477392218718;
        result[1] += (float)0.0002628811777076761;
        result[2] += (float)0.002365930599369085;
        result[3] += (float)0.7736593059936908;
        result[4] += (float)0.014458464773922187;
        result[5] += (float)0.0007886435331230284;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.00421274354923644;
        result[2] += (float)0;
        result[3] += (float)0.09899947340705635;
        result[4] += (float)0.8967877830437072;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
        result[0] += (float)0.6121562952243126;
        result[1] += (float)0.004341534008683068;
        result[2] += (float)0.002894356005788712;
        result[3] += (float)0.38060781476121563;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9935126123514062;
        result[1] += (float)0.0007248477819657872;
        result[2] += (float)0.002319512902290519;
        result[3] += (float)0.0031893302406494637;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0002536967236880255;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.9967458509599739;
        result[4] += (float)0.00292873413602343;
        result[5] += (float)0.0003254149040026033;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.4619718309859155;
        result[1] += (float)0;
        result[2] += (float)0.021830985915492956;
        result[3] += (float)0;
        result[4] += (float)0.5161971830985915;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
        result[0] += (float)0.9991063449508489;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.0008936550491510277;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9873798076923077;
        result[1] += (float)0;
        result[2] += (float)0.008413461538461538;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.004206730769230769;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += (float)0.9993534154876008;
        result[1] += (float)0;
        result[2] += (float)0.0006085501293169025;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)3.8034383082306405e-05;
      } else {
        result[0] += (float)0.5686028489187395;
        result[1] += (float)0.0008118680345412946;
        result[2] += (float)0.007971067975496349;
        result[3] += (float)0.3998081039191085;
        result[4] += (float)0.021329987452948562;
        result[5] += (float)0.0009594804044578937;
        result[6] += (float)0.0005166432947080967;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.5;
        result[1] += (float)0;
        result[2] += (float)0.5;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)115.5) ) ) {
        result[0] += (float)0.17457627118644067;
        result[1] += (float)0.011864406779661017;
        result[2] += (float)0;
        result[3] += (float)0.8135593220338984;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.0034482758620689655;
        result[1] += (float)0.017241379310344827;
        result[2] += (float)0;
        result[3] += (float)0.20344827586206896;
        result[4] += (float)0.7758620689655172;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
        result[0] += (float)0.011904761904761904;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.034126984126984124;
        result[4] += (float)0.953968253968254;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.31679389312977096;
        result[1] += (float)0;
        result[2] += (float)0.030534351145038167;
        result[3] += (float)0.6526717557251909;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)25) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.9995920032639739;
        result[5] += (float)0.0004079967360261118;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        result[0] += (float)0.00030165912518853697;
        result[1] += (float)0.0030165912518853697;
        result[2] += (float)0.0030165912518853697;
        result[3] += (float)0.9924585218702866;
        result[4] += (float)0;
        result[5] += (float)0.0012066365007541479;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9724310776942355;
        result[1] += (float)0;
        result[2] += (float)0.02756892230576441;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)64) ) ) {
        result[0] += (float)0.9967390122830537;
        result[1] += (float)0.0005797311496793362;
        result[2] += (float)0.002463857386137179;
        result[3] += (float)0.00014493278741983405;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)7.246639370991702e-05;
      } else {
        result[0] += (float)0.010101010101010102;
        result[1] += (float)0.037037037037037035;
        result[2] += (float)0;
        result[3] += (float)0.9528619528619529;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        result[0] += (float)0.4601025641025641;
        result[1] += (float)0;
        result[2] += (float)0.003076923076923077;
        result[3] += (float)0.5368205128205128;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.8611578188806149;
        result[1] += (float)0;
        result[2] += (float)0.003843382176315157;
        result[3] += (float)0.13355753062695172;
        result[4] += (float)0;
        result[5] += (float)0.00048042277203939464;
        result[6] += (float)0.0009608455440787893;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.9988338192419826;
        result[5] += (float)0.0011661807580174927;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.17438623133383954;
        result[1] += (float)0.001771703366236396;
        result[2] += (float)0.004049607694254619;
        result[3] += (float)0.8187800556821058;
        result[4] += (float)0;
        result[5] += (float)0.0010124019235636548;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
        result[0] += (float)0.9956896551724138;
        result[1] += (float)0.0005747126436781609;
        result[2] += (float)0.0026221264367816094;
        result[3] += (float)0.0008979885057471264;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00021551724137931034;
      } else {
        result[0] += (float)0.2857142857142857;
        result[1] += (float)0.014492753623188406;
        result[2] += (float)0;
        result[3] += (float)0.6997929606625258;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)101) ) ) {
        result[0] += (float)0.15870445344129555;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.8412955465587044;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.08267716535433071;
        result[1] += (float)0;
        result[2] += (float)0.030183727034120734;
        result[3] += (float)0;
        result[4] += (float)0.8779527559055118;
        result[5] += (float)0.009186351706036745;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-195.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)1;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9964285714285714;
        result[1] += (float)0;
        result[2] += (float)0.002777777777777778;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0007936507936507937;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)107) ) ) {
        result[0] += (float)0.0012281994595922379;
        result[1] += (float)0.0004912797838368951;
        result[2] += (float)0.0024563989191844758;
        result[3] += (float)0.7722918201915991;
        result[4] += (float)0.2215671825104397;
        result[5] += (float)0.0019651191353475803;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.013953488372093023;
        result[2] += (float)0;
        result[3] += (float)0.01744186046511628;
        result[4] += (float)0.9686046511627907;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.024079320113314446;
        result[3] += (float)0;
        result[4] += (float)0.9759206798866855;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.015822784810126583;
        result[1] += (float)0.03164556962025317;
        result[2] += (float)0;
        result[3] += (float)0.9525316455696202;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += (float)0.9992146082858826;
        result[1] += (float)0;
        result[2] += (float)0.0007461221284115453;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)3.92695857058708e-05;
      } else {
        result[0] += (float)0.6949973103819259;
        result[1] += (float)0.0018827326519634214;
        result[2] += (float)0.008786085709162634;
        result[3] += (float)0.2939752555137171;
        result[4] += (float)0;
        result[5] += (float)8.965393580778198e-05;
        result[6] += (float)0.0002689618074233459;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
        result[0] += (float)0.00045116174148432213;
        result[1] += (float)0.004511617414843221;
        result[2] += (float)0.009023234829686443;
        result[3] += (float)0.5928265283103993;
        result[4] += (float)0.39318745770358676;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9930270713699754;
        result[1] += (float)0;
        result[2] += (float)0.0061525840853158325;
        result[3] += (float)0.0008203445447087777;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        result[0] += (float)0.20476190476190478;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.7866666666666667;
        result[4] += (float)0.004761904761904763;
        result[5] += (float)0.00380952380952381;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9944395444261226;
        result[1] += (float)0.0007286114200253097;
        result[2] += (float)0.0009203512674003911;
        result[3] += (float)0.003719753039076581;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0001917398473750815;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
        result[0] += (float)0.16082029141932003;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.83917970858068;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
        result[0] += (float)0.8526090936832469;
        result[1] += (float)0;
        result[2] += (float)0.012511443393347574;
        result[3] += (float)0;
        result[4] += (float)0.13274336283185842;
        result[5] += (float)0.00091547146780592;
        result[6] += (float)0.0012206286237412267;
      } else {
        result[0] += (float)0.6869340232858991;
        result[1] += (float)0;
        result[2] += (float)0.00129366106080207;
        result[3] += (float)0.00646830530401035;
        result[4] += (float)0.3027166882276843;
        result[5] += (float)0;
        result[6] += (float)0.00258732212160414;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        result[0] += (float)0.12714987714987716;
        result[1] += (float)0;
        result[2] += (float)0.009828009828009828;
        result[3] += (float)0.757985257985258;
        result[4] += (float)0.10257985257985258;
        result[5] += (float)0.002457002457002457;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.017985611510791366;
        result[2] += (float)0;
        result[3] += (float)0.1618705035971223;
        result[4] += (float)0.8201438848920863;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
        result[0] += (float)0.18329278183292785;
        result[1] += (float)0.0004055150040551501;
        result[2] += (float)0;
        result[3] += (float)0.7554744525547447;
        result[4] += (float)0.05920519059205191;
        result[5] += (float)0.0016220600162206004;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.041766109785202864;
        result[1] += (float)0.0017899761336515514;
        result[2] += (float)0.0029832935560859188;
        result[3] += (float)0;
        result[4] += (float)0.9534606205250596;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)3.5) ) ) {
        result[0] += (float)0.9990277627741169;
        result[1] += (float)0;
        result[2] += (float)0.0008642108674516582;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00010802635843145727;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        result[0] += (float)0.7093934325204684;
        result[1] += (float)0.001672682454441412;
        result[2] += (float)0.007835196760278194;
        result[3] += (float)0.28065850867153797;
        result[4] += (float)0;
        result[5] += (float)8.803591865481116e-05;
        result[6] += (float)0.00035214367461924466;
      } else {
        result[0] += (float)0.009036144578313253;
        result[1] += (float)0.024096385542168676;
        result[2] += (float)0;
        result[3] += (float)0.9668674698795181;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.0005810575246949448;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.9314352120859966;
        result[4] += (float)0.0674026728646136;
        result[5] += (float)0.0005810575246949448;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += (float)0.3488372093023256;
        result[1] += (float)0.1511627906976744;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.5;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.030629853321829163;
        result[1] += (float)0;
        result[2] += (float)0.012079378774805867;
        result[3] += (float)0;
        result[4] += (float)0.9568593615185504;
        result[5] += (float)0.0004314063848144953;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        result[0] += (float)0.9958784131890779;
        result[1] += (float)0;
        result[2] += (float)0.0025759917568263786;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.001545595054095827;
      } else {
        result[0] += (float)0.9994462665587597;
        result[1] += (float)0;
        result[2] += (float)0.0005537334412403629;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += (float)0.5241210139002453;
        result[1] += (float)0.0025892613791223765;
        result[2] += (float)0.008585445625511038;
        result[3] += (float)0.46443172526574;
        result[4] += (float)0;
        result[5] += (float)0.0001362769146906514;
        result[6] += (float)0.0001362769146906514;
      } else {
        result[0] += (float)0.9703824626865672;
        result[1] += (float)0;
        result[2] += (float)0.004197761194029852;
        result[3] += (float)0.024253731343283586;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.001166044776119403;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += (float)0.1403831982313928;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.8563006632277083;
        result[4] += (float)0.0025792188651436996;
        result[5] += (float)0.0007369196757553428;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.001968503937007874;
        result[1] += (float)0;
        result[2] += (float)0.0344488188976378;
        result[3] += (float)0;
        result[4] += (float)0.9606299212598425;
        result[5] += (float)0.002952755905511811;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += (float)0.8933989339893399;
        result[1] += (float)0;
        result[2] += (float)0.003034030340303403;
        result[3] += (float)0.10315703157031571;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0004100041000410004;
      } else {
        result[0] += (float)0.918498615860609;
        result[1] += (float)0.0007327796775769418;
        result[2] += (float)0.003134668620745807;
        result[3] += (float)0.07743038593063019;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0002035499104380394;
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
        result[0] += (float)0.15111796453353893;
        result[1] += (float)0.010023130300693909;
        result[2] += (float)0.002313030069390902;
        result[3] += (float)0.8365458750963762;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.36885245901639346;
        result[4] += (float)0.6311475409836066;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.002156721782890007;
        result[1] += (float)0.0035945363048166786;
        result[2] += (float)0;
        result[3] += (float)0.04601006470165349;
        result[4] += (float)0.9482386772106398;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)86) ) ) {
        result[0] += (float)0.18615879828326182;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.8111587982832619;
        result[4] += (float)0.0010729613733905582;
        result[5] += (float)0.0016094420600858371;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.028070175438596492;
        result[3] += (float)0;
        result[4] += (float)0.9695906432748538;
        result[5] += (float)0.0023391812865497076;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.28028503562945367;
        result[4] += (float)0.7197149643705463;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.008708272859216255;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.9912917271407837;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        result[0] += (float)0.9953421712647796;
        result[1] += (float)0.0003941239699032605;
        result[2] += (float)0.0024364027230383374;
        result[3] += (float)0.0016839842350412039;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00014331780723754928;
      } else {
        result[0] += (float)0.003745318352059925;
        result[1] += (float)0.03745318352059925;
        result[2] += (float)0;
        result[3] += (float)0.9588014981273408;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += (float)0.17519181585677748;
        result[1] += (float)0;
        result[2] += (float)0.004859335038363171;
        result[3] += (float)0.8191815856777493;
        result[4] += (float)0;
        result[5] += (float)0.0007672634271099745;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9946332737030411;
        result[1] += (float)0;
        result[2] += (float)0.0027827469687934803;
        result[3] += (float)0.0013913734843967402;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0011926058437686344;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)6504) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9986566362170876;
        result[1] += (float)0;
        result[2] += (float)0.0013433637829124126;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)84) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += (float)0.6137770897832817;
        result[1] += (float)0.0015479876160990713;
        result[2] += (float)0.00348297213622291;
        result[3] += (float)0.2948916408668731;
        result[4] += (float)0.08494582043343653;
        result[5] += (float)0.0003869969040247678;
        result[6] += (float)0.0009674922600619195;
      } else {
        result[0] += (float)0.5831924655880222;
        result[1] += (float)0.0028978507606858247;
        result[2] += (float)0.006882395556628834;
        result[3] += (float)0.24897367785559044;
        result[4] += (float)0.15744989133059648;
        result[5] += (float)0.0003622313450857281;
        result[6] += (float)0.0002414875633904854;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)21.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.01634877384196185;
        result[3] += (float)0;
        result[4] += (float)0.9822888283378747;
        result[5] += (float)0.0013623978201634877;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.0009596928982725527;
        result[2] += (float)0.005118362124120281;
        result[3] += (float)0.9939219449776072;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
        result[0] += (float)0.9984237074401009;
        result[1] += (float)0;
        result[2] += (float)0.001450189155107188;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00012610340479192938;
      } else {
        result[0] += (float)0.9999014972419228;
        result[1] += (float)0;
        result[2] += (float)9.850275807722617e-05;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        result[0] += (float)0.015450643776824034;
        result[1] += (float)0.006437768240343348;
        result[2] += (float)0.014163090128755365;
        result[3] += (float)0.8072961373390558;
        result[4] += (float)0.15429184549356223;
        result[5] += (float)0.0023605150214592273;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.004371053909664886;
        result[2] += (float)0;
        result[3] += (float)0.1544439048081593;
        result[4] += (float)0.8411850412821759;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += (float)0.9813649265704061;
        result[1] += (float)0.00024682216463038387;
        result[2] += (float)0.005430087621868445;
        result[3] += (float)0.012217697149204;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0007404664938911516;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.00075046904315197;
        result[3] += (float)0.999249530956848;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)-15.5) ) ) {
        result[0] += (float)0.1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.9;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)29) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.0027010804321728698;
        result[2] += (float)0.007202881152460985;
        result[3] += (float)0.9885954381752702;
        result[4] += (float)0;
        result[5] += (float)0.0015006002400960387;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += (float)0.9987684729064039;
        result[1] += (float)0;
        result[2] += (float)0.0010775862068965517;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0001539408866995074;
      } else {
        result[0] += (float)0.6527331189710611;
        result[1] += (float)0.02572347266881029;
        result[2] += (float)0;
        result[3] += (float)0.3215434083601286;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += (float)0.9996517499564688;
        result[1] += (float)0;
        result[2] += (float)0.00034825004353125546;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.6857768052516412;
        result[1] += (float)0.0021881838074398253;
        result[2] += (float)0.005864332603938731;
        result[3] += (float)0.30520787746170686;
        result[4] += (float)0;
        result[5] += (float)8.752735229759301e-05;
        result[6] += (float)0.0008752735229759301;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)3.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
        result[0] += (float)0.9990134418547293;
        result[1] += (float)0;
        result[2] += (float)0.0007399186089530152;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00024663953631767175;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
        result[0] += (float)0.0013333333333333333;
        result[1] += (float)0.005;
        result[2] += (float)0.007666666666666666;
        result[3] += (float)0.9473333333333334;
        result[4] += (float)0.03833333333333333;
        result[5] += (float)0.0003333333333333333;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9956493365238199;
        result[1] += (float)0;
        result[2] += (float)0.0026103980857080703;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.001740265390472047;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += (float)0.5463082901554405;
        result[1] += (float)0.00048575129533678756;
        result[2] += (float)0.007124352331606218;
        result[3] += (float)0.163860103626943;
        result[4] += (float)0.2810880829015544;
        result[5] += (float)0.0008095854922279792;
        result[6] += (float)0.0003238341968911917;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.009404388714733543;
        result[3] += (float)0.805072670276432;
        result[4] += (float)0.18495297805642633;
        result[5] += (float)0.0005699629524080935;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        result[0] += (float)0.1967388398823844;
        result[1] += (float)0;
        result[2] += (float)0.0037423148890670943;
        result[3] += (float)0.7816091954022989;
        result[4] += (float)0.01657310879443999;
        result[5] += (float)0.0013365410318096765;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.003735325506937033;
        result[2] += (float)0;
        result[3] += (float)0.10458911419423693;
        result[4] += (float)0.891675560298826;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        result[0] += (float)0.9854588118178262;
        result[1] += (float)0.0007466135741458385;
        result[2] += (float)0.002737583105201408;
        result[3] += (float)0.010879226366125075;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00017776513670139012;
      } else {
        result[0] += (float)0.8294573643410853;
        result[1] += (float)0;
        result[2] += (float)0.027131782945736434;
        result[3] += (float)0.1434108527131783;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.0014667057788207685;
        result[1] += (float)0;
        result[2] += (float)0.006453505426811381;
        result[3] += (float)0.7987679671457906;
        result[4] += (float)0.1933118216485773;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)48.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.9455958549222798;
        result[4] += (float)0.031088082901554404;
        result[5] += (float)0.023316062176165803;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9941520467836257;
        result[1] += (float)0;
        result[2] += (float)0.005263157894736842;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0005847953216374269;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        result[0] += (float)0.10575984380084608;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.8717865278229743;
        result[4] += (float)0.021477383664171817;
        result[5] += (float)0.0009762447120078099;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.285569105691057;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.5294715447154472;
        result[4] += (float)0.1819105691056911;
        result[5] += (float)0.0030487804878048786;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
        result[0] += (float)0.8648648648648649;
        result[1] += (float)0;
        result[2] += (float)0.10810810810810811;
        result[3] += (float)0;
        result[4] += (float)0.02702702702702703;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.0062360801781737195;
        result[2] += (float)0.0071269487750556795;
        result[3] += (float)0;
        result[4] += (float)0.9853006681514477;
        result[5] += (float)0.0013363028953229399;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
        result[0] += (float)0.935639028859368;
        result[1] += (float)0.0013742556115437473;
        result[2] += (float)0.003149335776454421;
        result[3] += (float)0.05960833715071004;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00022904260192395788;
      } else {
        result[0] += (float)0.7425304713623125;
        result[1] += (float)0;
        result[2] += (float)0.001402221982526157;
        result[3] += (float)0.2558515801963111;
        result[4] += (float)0;
        result[5] += (float)0.00010786322942508899;
        result[6] += (float)0.00010786322942508899;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
        result[0] += (float)0.9986922406277245;
        result[1] += (float)0;
        result[2] += (float)0.0013077593722755014;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9587896253602306;
        result[1] += (float)0;
        result[2] += (float)0.004899135446685879;
        result[3] += (float)0.03429394812680115;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0020172910662824206;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)-16) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)-136) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
        result[0] += (float)0.9987986089155865;
        result[1] += (float)0;
        result[2] += (float)0.0010749288650015807;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00012646221941195067;
      } else {
        result[0] += (float)0.9999027048063825;
        result[1] += (float)0;
        result[2] += (float)9.72951936174353e-05;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        result[0] += (float)0.013937929752834047;
        result[1] += (float)0.007805240661587066;
        result[2] += (float)0.006504367217989222;
        result[3] += (float)0.6469057795948709;
        result[4] += (float)0.3244750046459766;
        result[5] += (float)0.0003716781267422413;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9818093028934196;
        result[1] += (float)0;
        result[2] += (float)0.005493834696618239;
        result[3] += (float)0.011109754608716884;
        result[4] += (float)0;
        result[5] += (float)0.00024417043096081065;
        result[6] += (float)0.0013429373702844585;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0.006535947712418301;
        result[2] += (float)0.0010893246187363835;
        result[3] += (float)0.22004357298474944;
        result[4] += (float)0.7723311546840959;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.01099278598419787;
        result[3] += (float)0.9845413947097218;
        result[4] += (float)0.0037787701820680177;
        result[5] += (float)0.0006870491240123669;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)22.5) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.9988221436984688;
        result[5] += (float)0.001177856301531213;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)29) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.00368211107701749;
        result[2] += (float)0.00981896287204664;
        result[3] += (float)0.9849647131021786;
        result[4] += (float)0;
        result[5] += (float)0.0015342129487572874;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += (float)0.9965878869988459;
        result[1] += (float)0;
        result[2] += (float)0.0010035626473982638;
        result[3] += (float)0.00235837222138592;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)5.0178132369913194e-05;
      } else {
        result[0] += (float)0.18181818181818182;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.8181818181818182;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
        result[0] += (float)0.8894906208303901;
        result[1] += (float)0.0018051958245035712;
        result[2] += (float)0.004630719723726552;
        result[3] += (float)0.10344556942155247;
        result[4] += (float)0;
        result[5] += (float)7.848677497841614e-05;
        result[6] += (float)0.0005494074248489129;
      } else {
        result[0] += (float)0.5065987497105812;
        result[1] += (float)0;
        result[2] += (float)0.0037045612410280156;
        result[3] += (float)0.4896966890483908;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)47.5) ) ) {
        result[0] += (float)0.9861266695389919;
        result[1] += (float)0.0003015941404566997;
        result[2] += (float)0.0006893580353295993;
        result[3] += (float)0.012623869021973287;
        result[4] += (float)4.308487720809996e-05;
        result[5] += (float)0.00012925463162429988;
        result[6] += (float)8.616975441619992e-05;
      } else {
        result[0] += (float)0.9032258064516129;
        result[1] += (float)0.001075268817204301;
        result[2] += (float)0.0023297491039426525;
        result[3] += (float)0.09193548387096774;
        result[4] += (float)0;
        result[5] += (float)0.0005376344086021505;
        result[6] += (float)0.0008960573476702509;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        result[0] += (float)0.18996188055908517;
        result[1] += (float)0.001588310038119441;
        result[2] += (float)0.018742058449809407;
        result[3] += (float)0.7665184243964422;
        result[4] += (float)0.023189326556543842;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.000980872976949485;
        result[1] += (float)0.004413928396272682;
        result[2] += (float)0;
        result[3] += (float)0.15301618440411965;
        result[4] += (float)0.8415890142226582;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.17329093799682035;
        result[1] += (float)0;
        result[2] += (float)0.007419183889772125;
        result[3] += (float)0.8179650238473768;
        result[4] += (float)0;
        result[5] += (float)0.0013248542660307366;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)3.5) ) ) {
        result[0] += (float)0.9967914438502674;
        result[1] += (float)0;
        result[2] += (float)0.002352941176470588;
        result[3] += (float)0.000213903743315508;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0006417112299465241;
      } else {
        result[0] += (float)0.9850746268656716;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.014925373134328358;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        result[0] += (float)0.0016072002571520412;
        result[1] += (float)0.0006428801028608164;
        result[2] += (float)0.0032144005143040825;
        result[3] += (float)0.9752491160398585;
        result[4] += (float)0.017036322725811636;
        result[5] += (float)0.0022500803600128574;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.5031667839549613;
        result[1] += (float)0;
        result[2] += (float)0.013370865587614356;
        result[3] += (float)0;
        result[4] += (float)0.48346235045742436;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.050761421319796954;
        result[2] += (float)0;
        result[3] += (float)0.949238578680203;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
        result[0] += (float)0.42362525458248473;
        result[1] += (float)0.032586558044806514;
        result[2] += (float)0;
        result[3] += (float)0.5437881873727087;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9969704712194767;
        result[1] += (float)0.0005840055480527066;
        result[2] += (float)0.0021535204584443557;
        result[3] += (float)0.00025550242727305917;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)3.650034675329416e-05;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        result[0] += (float)0.4602449657463151;
        result[1] += (float)0;
        result[2] += (float)0.003321569441561138;
        result[3] += (float)0.5364334648121237;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.8653934652554073;
        result[1] += (float)0;
        result[2] += (float)0.0043718361711919005;
        result[3] += (float)0.12977450529222273;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0004601932811780948;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
        result[0] += (float)0.936578728550911;
        result[1] += (float)0.0014362385667850935;
        result[2] += (float)0.002192153601935143;
        result[3] += (float)0.059339330259278865;
        result[4] += (float)0;
        result[5] += (float)0.00015118300703000987;
        result[6] += (float)0.00030236601406001973;
      } else {
        result[0] += (float)0.9998067757310318;
        result[1] += (float)0;
        result[2] += (float)0.0001932242689681824;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        result[0] += (float)0.14593817397555714;
        result[1] += (float)0.0023963575365444525;
        result[2] += (float)0.012461059190031152;
        result[3] += (float)0.630242032111191;
        result[4] += (float)0.20896237718667626;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.004149377593360996;
        result[1] += (float)0.011410788381742738;
        result[2] += (float)0;
        result[3] += (float)0.11099585062240663;
        result[4] += (float)0.8734439834024896;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
        result[0] += (float)0.1653815474607817;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.8346184525392183;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.04269972451790634;
        result[3] += (float)0;
        result[4] += (float)0.9545454545454546;
        result[5] += (float)0.0027548209366391185;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9940334128878282;
        result[1] += (float)0;
        result[2] += (float)0.004474940334128878;
        result[3] += (float)0.0008949880668257757;
        result[4] += (float)0;
        result[5] += (float)0.0002983293556085919;
        result[6] += (float)0.0002983293556085919;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        result[0] += (float)0.9543325526932084;
        result[1] += (float)0;
        result[2] += (float)0.04215456674473068;
        result[3] += (float)0.00351288056206089;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.07377049180327869;
        result[1] += (float)0.007765314926660914;
        result[2] += (float)0.0012942191544434857;
        result[3] += (float)0.917169974115617;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82) ) ) {
        result[0] += (float)0.1260115606936416;
        result[1] += (float)0.0011560693641618498;
        result[2] += (float)0;
        result[3] += (float)0.869942196531792;
        result[4] += (float)0.0017341040462427746;
        result[5] += (float)0.0011560693641618498;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.038461538461538464;
        result[3] += (float)0;
        result[4] += (float)0.9591346153846154;
        result[5] += (float)0.002403846153846154;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
        result[0] += (float)0.9595769010863351;
        result[1] += (float)0.0009719839908519154;
        result[2] += (float)0.0024585477415666095;
        result[3] += (float)0.03659233847913093;
        result[4] += (float)0;
        result[5] += (float)0.00011435105774728416;
        result[6] += (float)0.0002858776443682104;
      } else {
        result[0] += (float)0.8662915326902465;
        result[1] += (float)0;
        result[2] += (float)0.0017148981779206859;
        result[3] += (float)0.13172561629153268;
        result[4] += (float)0;
        result[5] += (float)0.00010718113612004287;
        result[6] += (float)0.0001607717041800643;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-41) ) ) {
        result[0] += (float)0;
        result[1] += (float)0.02491103202846975;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.9750889679715302;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        result[0] += (float)0.07027192178429575;
        result[1] += (float)0.00030553009471432935;
        result[2] += (float)0.007638252367858234;
        result[3] += (float)0.7128017109685304;
        result[4] += (float)0.20623281393217233;
        result[5] += (float)0.002749770852428964;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.1443478260869565;
        result[4] += (float)0.8556521739130435;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)6) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.0034762456546929316;
        result[2] += (float)0.005793742757821553;
        result[3] += (float)0.9837775202780996;
        result[4] += (float)0;
        result[5] += (float)0.006952491309385863;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        result[0] += (float)0.9951577402787969;
        result[1] += (float)0.0009904622157006606;
        result[2] += (float)0.0023477622890682322;
        result[3] += (float)0.0013206162876008805;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00018341892883345565;
      } else {
        result[0] += (float)0.6291635022241511;
        result[1] += (float)0;
        result[2] += (float)0.0041228165346642075;
        result[3] += (float)0.3659542150374308;
        result[4] += (float)0;
        result[5] += (float)0.00021699034392969513;
        result[6] += (float)0.0005424758598242378;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += (float)0.9933649289099526;
        result[1] += (float)0;
        result[2] += (float)0.006161137440758294;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00047393364928909954;
      } else {
        result[0] += (float)0.999749498997996;
        result[1] += (float)0;
        result[2] += (float)0.000250501002004008;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        result[0] += (float)0.0008312551953449709;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.99833748960931;
        result[5] += (float)0.0008312551953449709;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.01835518474374255;
        result[1] += (float)0.007389749702026222;
        result[2] += (float)0.017878426698450536;
        result[3] += (float)0.9554231227651967;
        result[4] += (float)0;
        result[5] += (float)0.0009535160905840286;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += (float)0.9830467130137822;
        result[1] += (float)0.00024393218685205513;
        result[2] += (float)0.004756677643615075;
        result[3] += (float)0.010854982314916453;
        result[4] += (float)0;
        result[5] += (float)0.00012196609342602757;
        result[6] += (float)0.0009757287474082205;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.0003792188092529389;
        result[3] += (float)0.999620781190747;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
        result[0] += (float)0.07780320366132723;
        result[1] += (float)0;
        result[2] += (float)0.016018306636155607;
        result[3] += (float)0.700228832951945;
        result[4] += (float)0.2036613272311213;
        result[5] += (float)0.002288329519450801;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.8970792767732964;
        result[1] += (float)0;
        result[2] += (float)0.002781641168289291;
        result[3] += (float)0.09973001718072488;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0004090648776896016;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.22281879194630871;
        result[1] += (float)0.016107382550335572;
        result[2] += (float)0;
        result[3] += (float)0.7610738255033557;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        result[0] += (float)0.06533142584644731;
        result[1] += (float)0;
        result[2] += (float)0.004768717215069147;
        result[3] += (float)0.5999046256556987;
        result[4] += (float)0.32618025751072965;
        result[5] += (float)0.0038149737720553174;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9155140338105638;
        result[1] += (float)0.0006875353878508454;
        result[2] += (float)0.002224379195988029;
        result[3] += (float)0.08133139205694412;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00024265954865323954;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.13844515441959532;
        result[1] += (float)0.008519701810436636;
        result[2] += (float)0.011714589989350373;
        result[3] += (float)0.8413205537806177;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.0053868756121449556;
        result[2] += (float)0.013712047012732615;
        result[3] += (float)0.6767874632713027;
        result[4] += (float)0.30264446620959845;
        result[5] += (float)0.0014691478942213516;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
        result[0] += (float)0.18019093078758952;
        result[1] += (float)0.00039777247414478925;
        result[2] += (float)0;
        result[3] += (float)0.7478122513922038;
        result[4] += (float)0.07120127287191727;
        result[5] += (float)0.00039777247414478925;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.042455536431440045;
        result[1] += (float)0.0005737234652897303;
        result[2] += (float)0.0068846815834767644;
        result[3] += (float)0;
        result[4] += (float)0.9495123350545037;
        result[5] += (float)0.0005737234652897303;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += (float)0.9988536293054036;
        result[1] += (float)0.0003126465530717524;
        result[2] += (float)0.0006252931061435048;
        result[3] += (float)5.2107758845292065e-05;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0001563232765358762;
      } else {
        result[0] += (float)0.8854166666666666;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.11458333333333333;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += (float)0.5385449126134672;
        result[1] += (float)0.0033870749220972773;
        result[2] += (float)0.007858013819265684;
        result[3] += (float)0.44926161766698286;
        result[4] += (float)0;
        result[5] += (float)0.0002709659937677822;
        result[6] += (float)0.0006774149844194554;
      } else {
        result[0] += (float)0.9847767948981692;
        result[1] += (float)0;
        result[2] += (float)0.003188644311869986;
        result[3] += (float)0.011417403826373176;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0006171569635877392;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9983938609797448;
        result[1] += (float)0;
        result[2] += (float)0.001338449183545998;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0002676898367091996;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        result[0] += (float)0.00041152263374485596;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.9987654320987654;
        result[5] += (float)0.0008230452674897119;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.016876634181126695;
        result[1] += (float)0.0068932731162348465;
        result[2] += (float)0.017352032327073923;
        result[3] += (float)0.9569764677917756;
        result[4] += (float)0;
        result[5] += (float)0.0019015925837889231;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
        result[0] += (float)0.6232142857142857;
        result[1] += (float)0;
        result[2] += (float)0.001948051948051948;
        result[3] += (float)0.374512987012987;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0003246753246753247;
      } else {
        result[0] += (float)0.9165734734958623;
        result[1] += (float)0.00022366360993066427;
        result[2] += (float)0.00469693580854395;
        result[3] += (float)0.07716394542607918;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0013419816595839856;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        result[0] += (float)0.0005662514156285391;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.9994337485843715;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.1853416149068323;
        result[1] += (float)0.0029813664596273293;
        result[2] += (float)0.002484472049689441;
        result[3] += (float)0.808695652173913;
        result[4] += (float)0;
        result[5] += (float)0.0004968944099378882;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        result[0] += (float)0.994950218465726;
        result[1] += (float)0.0004655826946493804;
        result[2] += (float)0.0025069837404197407;
        result[3] += (float)0.0017548886182938185;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0003223264809111095;
      } else {
        result[0] += (float)0.006993006993006993;
        result[1] += (float)0.03146853146853147;
        result[2] += (float)0;
        result[3] += (float)0.9615384615384616;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
        result[0] += (float)0.2870627429205997;
        result[1] += (float)0;
        result[2] += (float)0.013325930038867296;
        result[3] += (float)0.6079955580233204;
        result[4] += (float)0.09161576901721266;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.8414918414918415;
        result[1] += (float)0;
        result[2] += (float)0.003885003885003885;
        result[3] += (float)0.13908313908313907;
        result[4] += (float)0.005439005439005439;
        result[5] += (float)0.003885003885003885;
        result[6] += (float)0.006216006216006216;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        result[0] += (float)0.6907494935854153;
        result[1] += (float)0;
        result[2] += (float)0.00016880486158001352;
        result[3] += (float)0.3087440918298447;
        result[4] += (float)0.00033760972316002703;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.002044989775051125;
        result[1] += (float)0;
        result[2] += (float)0.002044989775051125;
        result[3] += (float)0;
        result[4] += (float)0.9959100204498977;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.9963369963369964;
        result[5] += (float)0.003663003663003663;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
        result[0] += (float)0.20112570356472795;
        result[1] += (float)0.004127579737335835;
        result[2] += (float)0.01125703564727955;
        result[3] += (float)0.7812382739212007;
        result[4] += (float)0;
        result[5] += (float)0.00225140712945591;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.13620569840166782;
        result[1] += (float)0.0006949270326615705;
        result[2] += (float)0;
        result[3] += (float)0.862404447533009;
        result[4] += (float)0;
        result[5] += (float)0.0006949270326615705;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
        result[0] += (float)0.9955834619273134;
        result[1] += (float)0.000585324322886181;
        result[2] += (float)0.001170648645772362;
        result[3] += (float)0.0026073538019475337;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)5.321130208056191e-05;
      } else {
        result[0] += (float)0.9604938271604938;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.03950617283950617;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
        result[0] += (float)0.8924393499254143;
        result[1] += (float)0.0006280913872968518;
        result[2] += (float)0.004082594017429537;
        result[3] += (float)0.10222187328256263;
        result[4] += (float)0;
        result[5] += (float)7.851142341210648e-05;
        result[6] += (float)0.0005495799638847454;
      } else {
        result[0] += (float)0.5113230035756854;
        result[1] += (float)0;
        result[2] += (float)0.003575685339690107;
        result[3] += (float)0.48510131108462456;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
      result[0] += (float)1;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)0;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += (float)0.9972323701981622;
        result[1] += (float)0;
        result[2] += (float)0.002324809033543673;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.000442820768294033;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += (float)0.7415283037188077;
        result[1] += (float)0.0011651616661811828;
        result[2] += (float)0.007864841246722985;
        result[3] += (float)0.22060394213030393;
        result[4] += (float)0.02786678318283329;
        result[5] += (float)0.0002912904165452957;
        result[6] += (float)0.00067967763860569;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.0020849622100599426;
        result[2] += (float)0.009903570497784727;
        result[3] += (float)0.8102684388845453;
        result[4] += (float)0.1777430284076101;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)85) ) ) {
        result[0] += (float)0.18495934959349597;
        result[1] += (float)0.00948509485094851;
        result[2] += (float)0.003387533875338754;
        result[3] += (float)0.7513550135501356;
        result[4] += (float)0.05081300813008131;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.0013012361743656475;
        result[1] += (float)0.0032530904359141183;
        result[2] += (float)0;
        result[3] += (float)0.07091737150292778;
        result[4] += (float)0.9245283018867925;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)22.5) ) ) {
        result[0] += (float)0.6666666666666666;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.3333333333333333;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.9995728321230244;
        result[5] += (float)0.00042716787697565144;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)29) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.0012496094970321774;
        result[2] += (float)0.006248047485160888;
        result[3] += (float)0.9906279287722587;
        result[4] += (float)0;
        result[5] += (float)0.0018744142455482662;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-26) ) ) {
        result[0] += (float)0.016666666666666666;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.9833333333333333;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.5211267605633803;
        result[1] += (float)0.022535211267605635;
        result[2] += (float)0;
        result[3] += (float)0.4563380281690141;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
        result[0] += (float)0.9352938609886994;
        result[1] += (float)0.0006981107378157861;
        result[2] += (float)0.003839609057986823;
        result[3] += (float)0.05955757231990925;
        result[4] += (float)0;
        result[5] += (float)4.363192111348663e-05;
        result[6] += (float)0.0005672149744753262;
      } else {
        result[0] += (float)0.8680675909878683;
        result[1] += (float)0;
        result[2] += (float)0.001372039283651069;
        result[3] += (float)0.13056036972848067;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)-15.5) ) ) {
        result[0] += (float)0.08333333333333333;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.9166666666666666;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.9995847176079734;
        result[5] += (float)0.0004152823920265781;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)29) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.005639097744360902;
        result[2] += (float)0.0072055137844611525;
        result[3] += (float)0.9855889724310777;
        result[4] += (float)0;
        result[5] += (float)0.0015664160401002505;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += (float)0.9984988871059579;
        result[1] += (float)0.00020705005435063927;
        result[2] += (float)0.0009834877581655365;
        result[3] += (float)0.00015528754076297944;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00015528754076297944;
      } else {
        result[0] += (float)0.8878248974008208;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.1121751025991792;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        result[0] += (float)0.9551260314230813;
        result[1] += (float)0.0031649146603368373;
        result[2] += (float)0.0068949926528766815;
        result[3] += (float)0.03447496326438341;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00033909799932180403;
      } else {
        result[0] += (float)0.6137386018237082;
        result[1] += (float)0;
        result[2] += (float)0.004863221884498481;
        result[3] += (float)0.3810334346504559;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.000364741641337386;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)25) ) ) {
        result[0] += (float)0.6158270873278718;
        result[1] += (float)0;
        result[2] += (float)0.009761199233048634;
        result[3] += (float)0.32961478124455296;
        result[4] += (float)0.04357678229039568;
        result[5] += (float)0.00034861425832316545;
        result[6] += (float)0.0008715356458079137;
      } else {
        result[0] += (float)0.9780880433492861;
        result[1] += (float)0.0008701499030969426;
        result[2] += (float)0.0007514930981291777;
        result[3] += (float)0.019499268283036032;
        result[4] += (float)0.0003164181465807064;
        result[5] += (float)0.0002373136099355298;
        result[6] += (float)0.0002373136099355298;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.3426308539944904;
        result[1] += (float)0;
        result[2] += (float)0.007403581267217632;
        result[3] += (float)0.5347796143250689;
        result[4] += (float)0.11415289256198348;
        result[5] += (float)0.0006887052341597797;
        result[6] += (float)0.00034435261707988987;
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        result[0] += (float)0.5581395348837209;
        result[1] += (float)0;
        result[2] += (float)0.014799154334038054;
        result[3] += (float)0.427061310782241;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.01327433628318584;
        result[2] += (float)0;
        result[3] += (float)0.9867256637168141;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += (float)0.00963855421686747;
        result[1] += (float)0.033734939759036145;
        result[2] += (float)0;
        result[3] += (float)0.36626506024096384;
        result[4] += (float)0.5903614457831325;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.01854714064914992;
        result[4] += (float)0.98145285935085;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)83) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
        result[0] += (float)0.9991147084861515;
        result[1] += (float)0;
        result[2] += (float)0.0007588212975844188;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0001264702162640698;
      } else {
        result[0] += (float)0.9999024865919064;
        result[1] += (float)0;
        result[2] += (float)9.751340809361287e-05;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)-141) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += (float)0.01886311496303849;
        result[1] += (float)0.010706092276319143;
        result[2] += (float)0.003823604384399694;
        result[3] += (float)0.9033902625541678;
        result[4] += (float)0.06168748406831506;
        result[5] += (float)0.0015294417537598777;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.01788974078130705;
        result[3] += (float)0.1847389558232932;
        result[4] += (float)0.7959109163928442;
        result[5] += (float)0.0014603870025556775;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += (float)0.9822233045172288;
        result[1] += (float)0.00036527456471447707;
        result[2] += (float)0.0038962620236210883;
        result[3] += (float)0.012297577012054061;
        result[4] += (float)0;
        result[5] += (float)0.00036527456471447707;
        result[6] += (float)0.0008523073176671132;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)1;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9764201500535906;
        result[1] += (float)0;
        result[2] += (float)0.013933547695605574;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00964630225080386;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9989282930631332;
        result[1] += (float)0;
        result[2] += (float)0.0010717069368667187;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += (float)0.5976308750477646;
        result[1] += (float)0.0015284677111196026;
        result[2] += (float)0.0032479938861291555;
        result[3] += (float)0.3119984715322889;
        result[4] += (float)0.08311043179212839;
        result[5] += (float)0.0013374092472296522;
        result[6] += (float)0.0011463507833397019;
      } else {
        result[0] += (float)0.5861074390097344;
        result[1] += (float)0.0027640908544646074;
        result[2] += (float)0.007210671794255498;
        result[3] += (float)0.24768657613267636;
        result[4] += (float)0.15551015502944357;
        result[5] += (float)0.00024035572647518327;
        result[6] += (float)0.00048071145295036654;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
        result[0] += (float)0;
        result[1] += (float)0.001590836780146357;
        result[2] += (float)0.004772510340439071;
        result[3] += (float)0.9936366528794146;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.021834061135371178;
        result[3] += (float)0;
        result[4] += (float)0.9723435225618632;
        result[5] += (float)0.005822416302765648;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)-10) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)875.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += (float)0.9861878453038674;
        result[1] += (float)0;
        result[2] += (float)0.013812154696132596;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9994160697601994;
        result[1] += (float)0;
        result[2] += (float)0.0004671441918405481;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00011678604796013703;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += (float)0.018369987063389392;
        result[1] += (float)0.01034928848641656;
        result[2] += (float)0.0036222509702457956;
        result[3] += (float)0.8998706338939197;
        result[4] += (float)0.06649417852522639;
        result[5] += (float)0.00129366106080207;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.021431040442447286;
        result[3] += (float)0.2049775319737297;
        result[4] += (float)0.7722087798133426;
        result[5] += (float)0.00138264777048047;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += (float)0.5975956975640621;
        result[1] += (float)0.00031635558367605187;
        result[2] += (float)0.002530844669408415;
        result[3] += (float)0.3986080354318254;
        result[4] += (float)0;
        result[5] += (float)0.00031635558367605187;
        result[6] += (float)0.0006327111673521037;
      } else {
        result[0] += (float)0.9702380952380952;
        result[1] += (float)0;
        result[2] += (float)0.007326007326007326;
        result[3] += (float)0.02152014652014652;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0009157509157509158;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        result[0] += (float)0.001001001001001001;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.997997997997998;
        result[5] += (float)0.001001001001001001;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.14007023019898557;
        result[1] += (float)0.0003901677721420211;
        result[2] += (float)0.009364026531408505;
        result[3] += (float)0.8478345688646118;
        result[4] += (float)0;
        result[5] += (float)0.0023410066328521262;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += (float)0.8815630657815329;
        result[1] += (float)0.0004903439951719976;
        result[2] += (float)0.002904345202172601;
        result[3] += (float)0.1148159324079662;
        result[4] += (float)0;
        result[5] += (float)0.00011315630657815328;
        result[6] += (float)0.00011315630657815328;
      } else {
        result[0] += (float)0.9867433473048055;
        result[1] += (float)0;
        result[2] += (float)0.0019495077492933035;
        result[3] += (float)0.01111219417097183;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00019495077492933034;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0.009833585476550681;
        result[2] += (float)0;
        result[3] += (float)0.9901664145234493;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9810126582278481;
        result[1] += (float)0;
        result[2] += (float)0.0189873417721519;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        result[0] += (float)0.015873015873015872;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.9841269841269841;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.1777490297542044;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.8217335058214748;
        result[4] += (float)0;
        result[5] += (float)0.000517464424320828;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
        result[0] += (float)0.8543689320388349;
        result[1] += (float)0;
        result[2] += (float)0.11650485436893204;
        result[3] += (float)0;
        result[4] += (float)0.02912621359223301;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.0026373626373626374;
        result[2] += (float)0.00967032967032967;
        result[3] += (float)0;
        result[4] += (float)0.9868131868131869;
        result[5] += (float)0.0008791208791208791;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += (float)0.998538698397787;
        result[1] += (float)0.00031313605761703456;
        result[2] += (float)0.0007828401440425863;
        result[3] += (float)0.0002609467146808621;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00010437868587234484;
      } else {
        result[0] += (float)0.8784153005464481;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.12158469945355191;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        result[0] += (float)0.9573465035357503;
        result[1] += (float)0.0023571669098664274;
        result[2] += (float)0.005387810079694691;
        result[3] += (float)0.03401055112807273;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0008979683466157818;
      } else {
        result[0] += (float)0.6242837986102645;
        result[1] += (float)0;
        result[2] += (float)0.005120078020236499;
        result[3] += (float)0.36998659027185177;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0006095330976472023;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)29) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.0008766803039158387;
        result[2] += (float)0;
        result[3] += (float)0.928988895382817;
        result[4] += (float)0.06984219754529515;
        result[5] += (float)0.0002922267679719462;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += (float)0.40298507462686567;
        result[1] += (float)0.13432835820895522;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.44776119402985076;
        result[5] += (float)0.014925373134328358;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.027927927927927927;
        result[1] += (float)0;
        result[2] += (float)0.014864864864864866;
        result[3] += (float)0;
        result[4] += (float)0.9572072072072072;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
        result[0] += (float)0.40357852882703776;
        result[1] += (float)0.02385685884691849;
        result[2] += (float)0;
        result[3] += (float)0.5725646123260437;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9965431919074303;
        result[1] += (float)0.0005458118040899498;
        result[2] += (float)0.0023651844843897824;
        result[3] += (float)0.0002910996288479732;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00025471217524197657;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.39941797017097125;
        result[1] += (float)0;
        result[2] += (float)0.007821025827573663;
        result[3] += (float)0.5902146234994543;
        result[4] += (float)0;
        result[5] += (float)0.0003637686431429611;
        result[6] += (float)0.0021826118588577663;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
      result[0] += (float)1;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)0;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += (float)0.9861407249466951;
        result[1] += (float)0;
        result[2] += (float)0.01279317697228145;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0010660980810234541;
      } else {
        result[0] += (float)0.9992130631516821;
        result[1] += (float)0;
        result[2] += (float)0.0007869368483179224;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-8.5) ) ) {
        result[0] += (float)0.05263157894736842;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.6491228070175439;
        result[4] += (float)0.2982456140350877;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.6092998396579369;
        result[1] += (float)0.0028059861036878677;
        result[2] += (float)0.0044094067343666485;
        result[3] += (float)0.3727952966328167;
        result[4] += (float)0.009620523784072688;
        result[5] += (float)0.00040085515766969537;
        result[6] += (float)0.0006680919294494923;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        result[0] += (float)0.1248433191276009;
        result[1] += (float)0;
        result[2] += (float)0.006768613687641012;
        result[3] += (float)0.6949110052644774;
        result[4] += (float)0.17347706192028078;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.5168460045863469;
        result[1] += (float)0.0017639795378373614;
        result[2] += (float)0.008290703827835599;
        result[3] += (float)0.18010231081319458;
        result[4] += (float)0.2907038278355972;
        result[5] += (float)0.0010583877227024168;
        result[6] += (float)0.001234785676486153;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)3.5) ) ) {
        result[0] += (float)0.75;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.25;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9994624894417569;
        result[1] += (float)0;
        result[2] += (float)0.00046072333563695;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)7.678722260615834e-05;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += (float)0.6685855263157895;
        result[1] += (float)0.002349624060150376;
        result[2] += (float)0.007283834586466165;
        result[3] += (float)0.2894736842105263;
        result[4] += (float)0.031602443609022556;
        result[5] += (float)0.00035244360902255637;
        result[6] += (float)0.00035244360902255637;
      } else {
        result[0] += (float)0.34800270819228163;
        result[1] += (float)0;
        result[2] += (float)0.008632362897765741;
        result[3] += (float)0.5269126607989167;
        result[4] += (float)0.11425186188219363;
        result[5] += (float)0.001015572105619499;
        result[6] += (float)0.001184834123222749;
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.17703349282296652;
        result[1] += (float)0.011961722488038277;
        result[2] += (float)0;
        result[3] += (float)0.8110047846889952;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        result[0] += (float)0.3116438356164384;
        result[1] += (float)0;
        result[2] += (float)0.030821917808219176;
        result[3] += (float)0.6575342465753424;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.01718494271685761;
        result[4] += (float)0.9828150572831423;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)3.5) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += (float)0.9893842887473461;
        result[1] += (float)0;
        result[2] += (float)0.009200283085633405;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0014154281670205238;
      } else {
        result[0] += (float)0.9996636394214599;
        result[1] += (float)0;
        result[2] += (float)0.0003363605785401951;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      result[0] += (float)1;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)0;
      result[5] += (float)0;
      result[6] += (float)0;
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += (float)0.7332242225859248;
        result[1] += (float)0.0011552902666795034;
        result[2] += (float)0.004813709444497931;
        result[3] += (float)0.23317608549147975;
        result[4] += (float)0.026090305189178785;
        result[5] += (float)0.0009627418888995861;
        result[6] += (float)0.0005776451333397517;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.002431775195893002;
        result[2] += (float)0.009456903539583896;
        result[3] += (float)0.8100513374763577;
        result[4] += (float)0.17751958930018913;
        result[5] += (float)0.0005403944879762226;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.192643391521197;
        result[1] += (float)0.011845386533665835;
        result[2] += (float)0.009351620947630923;
        result[3] += (float)0.7861596009975063;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += (float)0.11721611721611722;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.8485958485958486;
        result[4] += (float)0.03418803418803419;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.1881918819188192;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.7408774087740877;
        result[4] += (float)0.06970069700697007;
        result[5] += (float)0.0012300123001230013;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += (float)0.36619718309859156;
        result[1] += (float)0.08450704225352113;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.5211267605633803;
        result[5] += (float)0.028169014084507043;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.02276707530647986;
        result[1] += (float)0;
        result[2] += (float)0.01138353765323993;
        result[3] += (float)0;
        result[4] += (float)0.9654115586690017;
        result[5] += (float)0.00043782837127845885;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
        result[0] += (float)0.9636363636363636;
        result[1] += (float)0.03636363636363636;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.1471264367816092;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.8528735632183908;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += (float)0.9990569003458032;
        result[1] += (float)0;
        result[2] += (float)0.0009430996541967935;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.7051128512206357;
        result[1] += (float)0.0016582220175034548;
        result[2] += (float)0.006356517733763244;
        result[3] += (float)0.2864117918010134;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.000460617227084293;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)4.5) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        result[0] += (float)0.9873501997336884;
        result[1] += (float)0;
        result[2] += (float)0.009320905459387484;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.003328894806924101;
      } else {
        result[0] += (float)0.9994968412813775;
        result[1] += (float)0;
        result[2] += (float)0.0005031587186224633;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      result[0] += (float)1;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)0;
      result[5] += (float)0;
      result[6] += (float)0;
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2991.5) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        result[0] += (float)0.02219006271104679;
        result[1] += (float)0.00964785335262904;
        result[2] += (float)0.021225277375783887;
        result[3] += (float)0.9462132175590932;
        result[4] += (float)0;
        result[5] += (float)0.000723589001447178;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.7410105538432802;
        result[1] += (float)0.00018679368637340062;
        result[2] += (float)0.004669842159335015;
        result[3] += (float)0.25357242925189133;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0005603810591202019;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
        result[0] += (float)0.9976539589442815;
        result[1] += (float)0;
        result[2] += (float)0.002346041055718475;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9801136363636364;
        result[1] += (float)0;
        result[2] += (float)0.011363636363636364;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.008522727272727272;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
        result[0] += (float)0.9990011098779135;
        result[1] += (float)0;
        result[2] += (float)0.0009988901220865706;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        result[0] += (float)0.0008347245409015025;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.9991652754590985;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.0162227602905569;
        result[1] += (float)0.009927360774818402;
        result[2] += (float)0.018401937046004842;
        result[3] += (float)0.9537530266343826;
        result[4] += (float)0;
        result[5] += (float)0.001694915254237288;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += (float)0.9803479784703968;
        result[1] += (float)0.00025034422330704717;
        result[2] += (float)0.00663412191763675;
        result[3] += (float)0.011515834272124171;
        result[4] += (float)0;
        result[5] += (float)0.00012517211165352359;
        result[6] += (float)0.0011265490048817123;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)1;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        result[0] += (float)0.541645885286783;
        result[1] += (float)0;
        result[2] += (float)0.017456359102244388;
        result[3] += (float)0.4234413965087282;
        result[4] += (float)0.017456359102244388;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.17114695340501793;
        result[1] += (float)0.0035842293906810036;
        result[2] += (float)0.008064516129032258;
        result[3] += (float)0.8172043010752689;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)99.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.004583651642475172;
        result[2] += (float)0;
        result[3] += (float)0.2482811306340718;
        result[4] += (float)0.747135217723453;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
        result[0] += (float)0.09276807980049875;
        result[1] += (float)0.000997506234413965;
        result[2] += (float)0.011970074812967581;
        result[3] += (float)0.6369077306733167;
        result[4] += (float)0.2543640897755611;
        result[5] += (float)0.0029925187032418953;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.032663316582914576;
        result[1] += (float)0;
        result[2] += (float)0.007537688442211055;
        result[3] += (float)0.36432160804020103;
        result[4] += (float)0.5954773869346733;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
        result[0] += (float)0.9598315885298134;
        result[1] += (float)0.0010810195721438324;
        result[2] += (float)0.0023327264451524807;
        result[3] += (float)0.03647018661811561;
        result[4] += (float)0;
        result[5] += (float)0.0001137915339098771;
        result[6] += (float)0.00017068730086481566;
      } else {
        result[0] += (float)0.8654525686327806;
        result[1] += (float)0;
        result[2] += (float)0.0018483283500951345;
        result[3] += (float)0.13242729002446316;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0002718129926610492;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
        result[0] += (float)0.9747145675174844;
        result[1] += (float)0.0010161994141909257;
        result[2] += (float)0.0015541873393508274;
        result[3] += (float)0.022117281367684854;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0005977643612887799;
      } else {
        result[0] += (float)0.25346320346320345;
        result[1] += (float)0.004761904761904762;
        result[2] += (float)0.005627705627705628;
        result[3] += (float)0.679004329004329;
        result[4] += (float)0.05670995670995671;
        result[5] += (float)0.0004329004329004329;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
        result[0] += (float)0.8718512256973796;
        result[1] += (float)0;
        result[2] += (float)0.002451394759087067;
        result[3] += (float)0.002282333051563821;
        result[4] += (float)0.12341504649196958;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9337979094076655;
        result[1] += (float)0;
        result[2] += (float)0.006968641114982578;
        result[3] += (float)0.059233449477351915;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      result[0] += (float)1;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)0;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += (float)0.8497557003257331;
        result[1] += (float)0;
        result[2] += (float)0.007736156351791533;
        result[3] += (float)0.1384364820846906;
        result[4] += (float)0.00040716612377850176;
        result[5] += (float)0.001628664495114007;
        result[6] += (float)0.0020358306188925086;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.007727532913566113;
        result[3] += (float)0.7996565540927304;
        result[4] += (float)0.19261591299370348;
        result[5] += (float)0;
        result[6] += (float)0;
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
  result[0] += (float)0;
  result[1] += (float)0;
  result[2] += (float)0;
  result[3] += (float)0;
  result[4] += (float)0;
  result[5] += (float)0;
  result[6] += (float)0;
  
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
    

    FILE* file = fopen("./codegen_small/dataset_148/split_3/test_data.csv", "r");
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
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        
    }
    

    return 0;
}
