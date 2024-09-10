
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
    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-9.5) ) ) {
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.986737400530504;
        result[1] += 0;
        result[2] += 0.013262599469496022;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9997680083516993;
        result[1] += 0;
        result[2] += 0.00019332637358388433;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.8665274716776864e-05;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9987654320987654;
        result[5] += 0.0012345679012345679;
        result[6] += 0;
      } else {
        result[0] += 0.017969888295288974;
        result[1] += 0.010927634774162214;
        result[2] += 0.01578436134045653;
        result[3] += 0.9545896066051481;
        result[4] += 0;
        result[5] += 0.0007285089849441476;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        result[0] += 0.5452780229479259;
        result[1] += 0;
        result[2] += 0.0019417475728155341;
        result[3] += 0.4522506619593999;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005295675198587821;
      } else {
        result[0] += 0.9700119952019193;
        result[1] += 0;
        result[2] += 0.00899640143942423;
        result[3] += 0.01919232307077169;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.001799280287884846;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9929328621908127;
        result[5] += 0.007067137809187279;
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
        result[1] += 0.0034450360162856246;
        result[2] += 0.007203257124960852;
        result[3] += 0.9868462261196367;
        result[4] += 0;
        result[5] += 0.002505480739116818;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9993444937474788;
        result[1] += 0;
        result[2] += 0.0003025413473174667;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0003529649052037112;
      } else {
        result[0] += 0.7137254901960784;
        result[1] += 0.01568627450980392;
        result[2] += 0;
        result[3] += 0.27058823529411763;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.5365057783820532;
        result[1] += 0.003942895989123047;
        result[2] += 0.0076138681169272615;
        result[3] += 0.4512576478585997;
        result[4] += 0;
        result[5] += 0.0002719238613188308;
        result[6] += 0.00040788579197824614;
      } else {
        result[0] += 0.9887524507274791;
        result[1] += 0;
        result[2] += 0.0024765246104633165;
        result[3] += 0.00815189350944175;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006191311526158291;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)35) ) ) {
        result[0] += 0.002044989775051125;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9938650306748467;
        result[5] += 0.00408997955010225;
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
        result[0] += 0.00030553009471432935;
        result[1] += 0.0036663611365719525;
        result[2] += 0.008554842652001222;
        result[3] += 0.9856400855484265;
        result[4] += 0;
        result[5] += 0.0018331805682859762;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91) ) ) {
        result[0] += 0.9970374163344428;
        result[1] += 0.0006217768186971947;
        result[2] += 0.0020116308840203356;
        result[3] += 0.00014630042792875168;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0001828755349109396;
      } else {
        result[0] += 0.3626609442060086;
        result[1] += 0.034334763948497854;
        result[2] += 0;
        result[3] += 0.6030042918454935;
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
        result[0] += 0.41580756013745707;
        result[1] += 0;
        result[2] += 0.008681497558328812;
        result[3] += 0.5735214324470971;
        result[4] += 0;
        result[5] += 0.00036172906493036716;
        result[6] += 0.0016277807921866521;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)6504) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
        result[0] += 0.9988857248978581;
        result[1] += 0;
        result[2] += 0.0010523709298006685;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6.19041723412158e-05;
      } else {
        result[0] += 0.999706716199042;
        result[1] += 0;
        result[2] += 0.00029328380095806043;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
        result[0] += 0.0004042037186742118;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9995957962813258;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.02339325289337602;
        result[1] += 0.0061561191824673735;
        result[2] += 0.016990888943609953;
        result[3] += 0.9522285151440533;
        result[4] += 0;
        result[5] += 0.0012312238364934748;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        result[0] += 0.5609413417632596;
        result[1] += 0;
        result[2] += 0.00228310502283105;
        result[3] += 0.4362486828240253;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005268703898840885;
      } else {
        result[0] += 0.9711361310133061;
        result[1] += 0;
        result[2] += 0.008802456499488229;
        result[3] += 0.018219037871033777;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.001842374616171955;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        result[0] += 0.19462747085656362;
        result[1] += 0.011150532184490624;
        result[2] += 0;
        result[3] += 0.7942219969589458;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5252613240418118;
        result[1] += 0;
        result[2] += 0.02613240418118467;
        result[3] += 0.44860627177700346;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
        result[0] += 0.0832553788587465;
        result[1] += 0.0009354536950420954;
        result[2] += 0.008886810102899906;
        result[3] += 0.637511693171188;
        result[4] += 0.26520112254443406;
        result[5] += 0.00420954162768943;
        result[6] += 0;
      } else {
        result[0] += 0.044444444444444446;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.4074074074074074;
        result[4] += 0.5481481481481482;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
        result[0] += 0.93660596703147;
        result[1] += 0.0009536351664320423;
        result[2] += 0.0029517278960991783;
        result[3] += 0.05898914672358204;
        result[4] += 0;
        result[5] += 9.082239680305164e-05;
        result[6] += 0.0004087007856137324;
      } else {
        result[0] += 0.8774647887323944;
        result[1] += 0;
        result[2] += 0.0012676056338028169;
        result[3] += 0.12126760563380282;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
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
        result[1] += 0.0045090180360721445;
        result[2] += 0.004008016032064128;
        result[3] += 0.6613226452905812;
        result[4] += 0.32915831663326656;
        result[5] += 0.001002004008016032;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
        result[0] += 0.1911705143782908;
        result[1] += 0.0004050222762251924;
        result[2] += 0;
        result[3] += 0.7391656541109761;
        result[4] += 0.06804374240583232;
        result[5] += 0.001215066828675577;
        result[6] += 0;
      } else {
        result[0] += 0.03880597014925373;
        result[1] += 0.001791044776119403;
        result[2] += 0.011940298507462687;
        result[3] += 0;
        result[4] += 0.946865671641791;
        result[5] += 0.0005970149253731343;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
        result[0] += 0.6141141141141141;
        result[1] += 0.0045045045045045045;
        result[2] += 0.0015015015015015015;
        result[3] += 0.37987987987987987;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9936148599622696;
        result[1] += 0.0010158177332752866;
        result[2] += 0.002503265128428385;
        result[3] += 0.0027572195617472065;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00010883761427949499;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        result[0] += 0.4330935251798561;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.5669064748201439;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9878121284185494;
        result[1] += 0;
        result[2] += 0.008620689655172414;
        result[3] += 0.0008917954815695601;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00267538644470868;
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)26.5) ) ) {
        result[0] += 0.3176068376068376;
        result[1] += 0.004786324786324786;
        result[2] += 0.009914529914529915;
        result[3] += 0.6676923076923077;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.09649122807017543;
        result[1] += 0.008771929824561403;
        result[2] += 0;
        result[3] += 0.8947368421052632;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
        result[0] += 0.9991599526518767;
        result[1] += 0;
        result[2] += 0.0006109435259078239;
        result[3] += 0;
        result[4] += 3.818397036923899e-05;
        result[5] += 0;
        result[6] += 0.00019091985184619496;
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
        result[0] += 0.5352323838080959;
        result[1] += 0.0017491254372813594;
        result[2] += 0.009495252373813094;
        result[3] += 0.3925537231384308;
        result[4] += 0.05922038980509745;
        result[5] += 0.0008745627186406797;
        result[6] += 0.0008745627186406797;
      } else {
        result[0] += 0.5978639930252834;
        result[1] += 0;
        result[2] += 0.0015257192676547515;
        result[3] += 0.33740191804707936;
        result[4] += 0.06320836965998257;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)83) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.9872448979591837;
        result[1] += 0;
        result[2] += 0.012755102040816327;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9993028659953525;
        result[1] += 0;
        result[2] += 0.0006584043377226955;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.872966692486444e-05;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)11631) ) ) {
        result[0] += 0.1111111111111111;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8888888888888888;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
        result[0] += 0.6022974846504259;
        result[1] += 0;
        result[2] += 0.009902951079421667;
        result[3] += 0.34957417310358485;
        result[4] += 0.037037037037037035;
        result[5] += 0.0005941770647653001;
        result[6] += 0.0005941770647653001;
      } else {
        result[0] += 0.05941213258286429;
        result[1] += 0.0068792995622263915;
        result[2] += 0.0012507817385866166;
        result[3] += 0.610381488430269;
        result[4] += 0.31957473420888055;
        result[5] += 0.0025015634771732333;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
        result[0] += 0.0011235955056179776;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.998876404494382;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5563841807909604;
        result[1] += 0.003728813559322034;
        result[2] += 0.00711864406779661;
        result[3] += 0.43175141242937853;
        result[4] += 0;
        result[5] += 0.0007909604519774011;
        result[6] += 0.00022598870056497175;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        result[0] += 0.0011761246692149367;
        result[1] += 0.00029403116730373417;
        result[2] += 0;
        result[3] += 0.9267862393413702;
        result[4] += 0.07115554248750368;
        result[5] += 0.0005880623346074683;
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
        result[1] += 0.004380201489268507;
        result[2] += 0.009198423127463865;
        result[3] += 0;
        result[4] += 0.982479194042926;
        result[5] += 0.003942181340341656;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        result[0] += 0.9964184935967008;
        result[1] += 0.000542652485348383;
        result[2] += 0.0026047319296722384;
        result[3] += 0.0002532378264959121;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00018088416178279433;
      } else {
        result[0] += 0.0033333333333333335;
        result[1] += 0.02;
        result[2] += 0;
        result[3] += 0.9766666666666667;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        result[0] += 0.45883575883575883;
        result[1] += 0;
        result[2] += 0.0029106029106029108;
        result[3] += 0.5382536382536383;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8757763975155279;
        result[1] += 0;
        result[2] += 0.007361398665746492;
        result[3] += 0.11548194156889809;
        result[4] += 0;
        result[5] += 0.00023004370830457787;
        result[6] += 0.0011502185415228894;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)3185) ) ) {
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
        result[0] += 0;
        result[1] += 0.0002983293556085919;
        result[2] += 0;
        result[3] += 0.9340692124105012;
        result[4] += 0.06503579952267304;
        result[5] += 0.0005966587112171838;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.007452871547566856;
        result[2] += 0.01446733888645331;
        result[3] += 0;
        result[4] += 0.9745725558965366;
        result[5] += 0.0035072336694432268;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.981954167934948;
        result[1] += 0.0010436143844849328;
        result[2] += 0.0024785841631517155;
        result[3] += 0.014175762055920338;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0003478714614949776;
      } else {
        result[0] += 0.16443594646271512;
        result[1] += 0;
        result[2] += 0.00409724119093144;
        result[3] += 0.8311936629336247;
        result[4] += 0;
        result[5] += 0.0002731494127287626;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += 0.9495204442200909;
        result[1] += 0;
        result[2] += 0.003028773346794548;
        result[3] += 0.04745078243311459;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9962143617650538;
        result[1] += 0;
        result[2] += 0.002720927481367562;
        result[3] += 0.0007098071690524074;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0003549035845262037;
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
        result[0] += 0.9992768241160127;
        result[1] += 0;
        result[2] += 0.0006470521067255358;
        result[3] += 0;
        result[4] += 3.8061888630913876e-05;
        result[5] += 0;
        result[6] += 3.8061888630913876e-05;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.7409655969933507;
        result[1] += 0.0007709357232340754;
        result[2] += 0.008383925990170571;
        result[3] += 0.2230895249108606;
        result[4] += 0.02582634672834153;
        result[5] += 0.0003854678616170377;
        result[6] += 0.0005782017924255567;
      } else {
        result[0] += 0;
        result[1] += 0.0010703773080010704;
        result[2] += 0.007492641156007493;
        result[3] += 0.8075996788868076;
        result[4] += 0.18303451966818304;
        result[5] += 0.0008027829810008028;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)106) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.003978779840848806;
        result[1] += 0.009283819628647215;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.986737400530504;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += 0.19474835886214442;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.5525164113785558;
        result[4] += 0.2527352297592998;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.07641440117560618;
        result[1] += 0.010286554004408524;
        result[2] += 0.002204261572373255;
        result[3] += 0.5187362233651727;
        result[4] += 0.3923585598824394;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
        result[0] += 0.9475706494794249;
        result[1] += 0.002107089737233515;
        result[2] += 0.002726822012890431;
        result[3] += 0.04709965294992563;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004957858205255329;
      } else {
        result[0] += 0.9970656683193362;
        result[1] += 0.0002023677021147425;
        result[2] += 0.00030355155317211374;
        result[3] += 0.0023272285743195387;
        result[4] += 0.00010118385105737125;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += 0.1770744225834046;
        result[1] += 0;
        result[2] += 0.01140575990875392;
        result[3] += 0.7875677216994582;
        result[4] += 0.023952095808383235;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.993415956622773;
        result[1] += 0;
        result[2] += 0.004453911696359412;
        result[3] += 0.0009682416731216112;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0011618900077459333;
      }
    }
  } else {
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
        result[0] += 0.0375;
        result[1] += 0.125;
        result[2] += 0;
        result[3] += 0.8375;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
        result[0] += 0.0005984440454817474;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9982046678635548;
        result[5] += 0.0011968880909634949;
        result[6] += 0;
      } else {
        result[0] += 0.26644370122630995;
        result[1] += 0.002006688963210702;
        result[2] += 0.009810479375696768;
        result[3] += 0.7197324414715719;
        result[4] += 0;
        result[5] += 0.002006688963210702;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)82.5) ) ) {
        result[0] += 0.0013888888888888892;
        result[1] += 0.00046296296296296303;
        result[2] += 0.0018518518518518521;
        result[3] += 0.9689814814814816;
        result[4] += 0.02453703703703704;
        result[5] += 0.0027777777777777783;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.004008746355685131;
        result[2] += 0;
        result[3] += 0.3844752186588921;
        result[4] += 0.6115160349854227;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
        result[0] += 0.9973509933774835;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.0026490066225165563;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.010574018126888218;
        result[3] += 0;
        result[4] += 0.9894259818731118;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
        result[0] += 0.9970569349315069;
        result[1] += 0.0003745719178082192;
        result[2] += 0.0006956335616438357;
        result[3] += 0.0018193493150684933;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5.3510273972602744e-05;
      } else {
        result[0] += 0.9758928571428571;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.024107142857142858;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
        result[0] += 0.887741046831956;
        result[1] += 0.0017600244872972147;
        result[2] += 0.006351392715029079;
        result[3] += 0.10330578512396696;
        result[4] += 0;
        result[5] += 7.652280379553108e-05;
        result[6] += 0.0007652280379553108;
      } else {
        result[0] += 0.5112712061352545;
        result[1] += 0;
        result[2] += 0.004880316058563793;
        result[3] += 0.48384847780618173;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
        result[0] += 0;
        result[1] += 0.009962049335863378;
        result[2] += 0.009013282732447819;
        result[3] += 0.8519924098671727;
        result[4] += 0.12903225806451613;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)73) ) ) {
        result[0] += 0.30368098159509205;
        result[1] += 0;
        result[2] += 0.03374233128834356;
        result[3] += 0.6625766871165644;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.01967435549525102;
        result[4] += 0.980325644504749;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)83) ) ) {
        result[0] += 0.9994665040774331;
        result[1] += 0;
        result[2] += 0.0005334959225668775;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.3638514312751361;
        result[1] += 0.0016560208185474334;
        result[2] += 0.007333806482138634;
        result[3] += 0.529098651525905;
        result[4] += 0.09616749467707596;
        result[5] += 0.0013011592145729834;
        result[6] += 0.0005914360066240834;
      } else {
        result[0] += 0.9671407552721922;
        result[1] += 0;
        result[2] += 0.006620892594409024;
        result[3] += 0.02501226091221187;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0012260912211868563;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2306.5) ) ) {
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
        result[4] += 0.9987421383647799;
        result[5] += 0.0012578616352201257;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        result[0] += 0.001187178472497032;
        result[1] += 0.004748713889988128;
        result[2] += 0.004352987732489117;
        result[3] += 0.9893153937475268;
        result[4] += 0;
        result[5] += 0.0003957261574990107;
        result[6] += 0;
      } else {
        result[0] += 0.9330143540669856;
        result[1] += 0;
        result[2] += 0.06698564593301436;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4.5) ) ) {
        result[0] += 0.9987592410691206;
        result[1] += 0;
        result[2] += 0.0010856640645194645;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0001550948663599235;
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
        result[0] += 0.5209986772486772;
        result[1] += 0.0036375661375661374;
        result[2] += 0.003472222222222222;
        result[3] += 0.4713955026455027;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.000496031746031746;
      } else {
        result[0] += 0.7924528301886793;
        result[1] += 0.0017440938639606786;
        result[2] += 0.008086253369272238;
        result[3] += 0.1954970667512288;
        result[4] += 0;
        result[5] += 0.0006342159505311559;
        result[6] += 0.0015855398763278896;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
        result[0] += 0;
        result[1] += 0.00029967036260113877;
        result[2] += 0;
        result[3] += 0.935271201678154;
        result[4] += 0.0641294575966437;
        result[5] += 0.00029967036260113877;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.008771929824561403;
        result[2] += 0.011842105263157895;
        result[3] += 0;
        result[4] += 0.9776315789473684;
        result[5] += 0.0017543859649122807;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
        result[0] += 0.9944444444444445;
        result[1] += 0.0022544283413848632;
        result[2] += 0.00249597423510467;
        result[3] += 0.0004830917874396135;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00032206119162640903;
      } else {
        result[0] += 0.980544747081712;
        result[1] += 0;
        result[2] += 0.0010376134889753567;
        result[3] += 0.01841763942931258;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        result[0] += 0.46671172693477525;
        result[1] += 0;
        result[2] += 0.001013856032443393;
        result[3] += 0.5322744170327813;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.987012987012987;
        result[1] += 0;
        result[2] += 0.010035419126328217;
        result[3] += 0.0005903187721369539;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0023612750885478157;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)22.5) ) ) {
        result[0] += 0.25;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.75;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9995956328346138;
        result[5] += 0.0004043671653861706;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        result[0] += 0.11900826446280992;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8803305785123967;
        result[4] += 0;
        result[5] += 0.0006611570247933885;
        result[6] += 0;
      } else {
        result[0] += 0.4004499437570304;
        result[1] += 0.010123734533183354;
        result[2] += 0.03037120359955006;
        result[3] += 0.5568053993250844;
        result[4] += 0;
        result[5] += 0.0022497187851518567;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        result[0] += 0.9979667143610211;
        result[1] += 0.00045184125310640863;
        result[2] += 0.0010542962572482868;
        result[3] += 0.00030122750207093907;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00022592062655320432;
      } else {
        result[0] += 0.9893569180032978;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.010643081996702143;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9994720168954594;
        result[1] += 0;
        result[2] += 0.0005279831045406547;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.6858063953994946;
        result[1] += 0.0023525311492550317;
        result[2] += 0.008103162847433999;
        result[3] += 0.3023438180709245;
        result[4] += 0;
        result[5] += 0.00017426156661148382;
        result[6] += 0.001219830966280387;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)115.5) ) ) {
        result[0] += 0.3253846153846154;
        result[1] += 0.004230769230769231;
        result[2] += 0.0034615384615384616;
        result[3] += 0.6657692307692308;
        result[4] += 0.001153846153846154;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.011235955056179775;
        result[1] += 0.033707865168539325;
        result[2] += 0;
        result[3] += 0.18258426966292135;
        result[4] += 0.7724719101123596;
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
        result[0] += 0.27380952380952384;
        result[1] += 0;
        result[2] += 0.023809523809523808;
        result[3] += 0.7023809523809523;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        result[0] += 0.9494295405488745;
        result[1] += 0;
        result[2] += 0.002158495220474869;
        result[3] += 0.020814061054579093;
        result[4] += 0.02759790317607154;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.7017463933181473;
        result[1] += 0;
        result[2] += 0.005770690964312832;
        result[3] += 0.2853454821564161;
        result[4] += 0.005770690964312832;
        result[5] += 0.0006074411541381929;
        result[6] += 0.0007593014426727411;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        result[0] += 0.8872525732383215;
        result[1] += 0.0005146476642913699;
        result[2] += 0.0017022961203483772;
        result[3] += 0.10550277117973081;
        result[4] += 0.004711005542359463;
        result[5] += 0.00011876484560570073;
        result[6] += 0.00019794140934283454;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        result[0] += 0.22031746031746033;
        result[1] += 0.006349206349206349;
        result[2] += 0;
        result[3] += 0.7726984126984127;
        result[4] += 0.0006349206349206349;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5228699551569507;
        result[1] += 0;
        result[2] += 0.02062780269058296;
        result[3] += 0.4565022421524664;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-23) ) ) {
        result[0] += 0.000942507068803016;
        result[1] += 0.008482563619227144;
        result[2] += 0;
        result[3] += 0.20263901979264845;
        result[4] += 0.7879359095193214;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0.20352422907488987;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.19118942731277533;
        result[4] += 0.6035242290748899;
        result[5] += 0.001762114537444934;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.001998667554963358;
        result[2] += 0.014656895403064623;
        result[3] += 0.8727514990006662;
        result[4] += 0.10792804796802132;
        result[5] += 0.002664890073284477;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        result[0] += 0.9956844300053339;
        result[1] += 0.00014546865150560058;
        result[2] += 0.0003879164040149348;
        result[3] += 0.003685205838141881;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9.69791010037337e-05;
      } else {
        result[0] += 0.8062228469205212;
        result[1] += 0.0007027855865065167;
        result[2] += 0.003897265525172501;
        result[3] += 0.18815486838742648;
        result[4] += 0;
        result[5] += 0.00031944799386659844;
        result[6] += 0.0007027855865065167;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9900332225913622;
        result[5] += 0.009966777408637873;
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
        result[0] += 0.06587712805329386;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9341228719467062;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5555555555555556;
        result[1] += 0.12222222222222222;
        result[2] += 0.26666666666666666;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.05555555555555555;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.994693680656054;
        result[1] += 0;
        result[2] += 0.003376748673420164;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.001929570670525808;
      } else {
        result[0] += 0.999791571136771;
        result[1] += 0;
        result[2] += 0.00020842886322897995;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
        result[0] += 0.9328859060402684;
        result[1] += 0.006711409395973154;
        result[2] += 0.006508033353670938;
        result[3] += 0.053691275167785234;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002033760423022168;
      } else {
        result[0] += 0.4737704918032787;
        result[1] += 0;
        result[2] += 0.006010928961748634;
        result[3] += 0.5191256830601093;
        result[4] += 0;
        result[5] += 0.0009562841530054645;
        result[6] += 0.0001366120218579235;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
        result[0] += 0.058823529411764705;
        result[1] += 0;
        result[2] += 0.009558823529411765;
        result[3] += 0.7169117647058824;
        result[4] += 0.2125;
        result[5] += 0.0022058823529411764;
        result[6] += 0;
      } else {
        result[0] += 0.8893979057591624;
        result[1] += 0;
        result[2] += 0.0035994764397905762;
        result[3] += 0.10642997382198954;
        result[4] += 0;
        result[5] += 8.180628272251311e-05;
        result[6] += 0.0004908376963350786;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.9155102844208248;
        result[1] += 0.0009841551028442084;
        result[2] += 0.003296919594528098;
        result[3] += 0.07007184332250764;
        result[4] += 0.009693927763015453;
        result[5] += 0.00014762326542663127;
        result[6] += 0.00029524653085326254;
      } else {
        result[0] += 0.6465530477506525;
        result[1] += 0;
        result[2] += 0.00107477352986335;
        result[3] += 0.2751420236450176;
        result[4] += 0.07707661599877168;
        result[5] += 0.0001535390756947643;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)109) ) ) {
        result[0] += 0.15330188679245282;
        result[1] += 0.013364779874213837;
        result[2] += 0;
        result[3] += 0.8333333333333334;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0038910505836575876;
        result[1] += 0.027237354085603113;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9688715953307393;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
        result[0] += 0.018268467037331215;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.022239872915011914;
        result[4] += 0.9594916600476568;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.24573378839590443;
        result[1] += 0;
        result[2] += 0.030716723549488054;
        result[3] += 0.7235494880546075;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.9961649089165868;
        result[1] += 0;
        result[2] += 0.003835091083413231;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9998767764725212;
        result[1] += 0;
        result[2] += 0.00012322352747884662;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.7484615384615385;
        result[1] += 0.0008653846153846154;
        result[2] += 0.008365384615384615;
        result[3] += 0.21394230769230768;
        result[4] += 0.026923076923076925;
        result[5] += 0.000576923076923077;
        result[6] += 0.0008653846153846154;
      } else {
        result[0] += 0;
        result[1] += 0.0019267822736030828;
        result[2] += 0.007431874483897605;
        result[3] += 0.8056702449766033;
        result[4] += 0.1844205890448665;
        result[5] += 0.0005505092210294523;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        result[0] += 0.22582921665490474;
        result[1] += 0.0077628793225123505;
        result[2] += 0.004940014114326041;
        result[3] += 0.7614678899082569;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0006199628022318661;
        result[1] += 0.006819590824550527;
        result[2] += 0;
        result[3] += 0.10105393676379418;
        result[4] += 0.8915065096094235;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        result[0] += 0.1614704513727315;
        result[1] += 0.003257328990228013;
        result[2] += 0;
        result[3] += 0.6067938576081898;
        result[4] += 0.22847836202885063;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.4075829383886256;
        result[1] += 0;
        result[2] += 0.01828029790115098;
        result[3] += 0.3527420446851727;
        result[4] += 0.22139471902505078;
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
        result[0] += 0.0035714285714285713;
        result[1] += 0.02023809523809524;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9761904761904762;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.10270880361173815;
        result[1] += 0.0028216704288939053;
        result[2] += 0;
        result[3] += 0.8910835214446953;
        result[4] += 0.001693002257336343;
        result[5] += 0.001693002257336343;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.032846715328467155;
        result[3] += 0;
        result[4] += 0.9635036496350365;
        result[5] += 0.0036496350364963502;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.9933461804166818;
        result[1] += 0.0006908337272297567;
        result[2] += 0.0015998254735847;
        result[3] += 0.004072283023670145;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002908773588335818;
      } else {
        result[0] += 0.6505260776105894;
        result[1] += 0;
        result[2] += 0.004072858920692386;
        result[3] += 0.3443828487385451;
        result[4] += 0;
        result[5] += 0.00022626994003846588;
        result[6] += 0.0007919447901346306;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        result[0] += 0.5013568521031208;
        result[1] += 0;
        result[2] += 0.006105834464043419;
        result[3] += 0.4918588873812754;
        result[4] += 0.0006784260515603799;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.16559485530546625;
        result[1] += 0.012057877813504822;
        result[2] += 0.006430868167202572;
        result[3] += 0.8159163987138264;
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
        result[0] += 0.007407407407407408;
        result[1] += 0.025925925925925925;
        result[2] += 0;
        result[3] += 0.9666666666666667;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0.1883920076117983;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.19124643196955282;
        result[4] += 0.6194100856327308;
        result[5] += 0.0009514747859181733;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.001986754966887417;
        result[2] += 0.01456953642384106;
        result[3] += 0.8894039735099337;
        result[4] += 0.09006622516556291;
        result[5] += 0.003973509933774834;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.8840690392546204;
        result[1] += 0.0005727814266076065;
        result[2] += 0.0019856422789063695;
        result[3] += 0.11302886818390102;
        result[4] += 0;
        result[5] += 3.81854284405071e-05;
        result[6] += 0.0003054834275240568;
      } else {
        result[0] += 0.9859071646792156;
        result[1] += 0;
        result[2] += 0.0031536414703853357;
        result[3] += 0.010052232186853256;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0008869616635458756;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9984779299847792;
        result[5] += 0.0015220700152207;
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
        result[0] += 0.06422995031937545;
        result[1] += 0.0028388928317956003;
        result[2] += 0.010290986515259051;
        result[3] += 0.9212207239176722;
        result[4] += 0;
        result[5] += 0.0014194464158978001;
        result[6] += 0;
      } else {
        result[0] += 0.4659400544959128;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.5331516802906449;
        result[4] += 0;
        result[5] += 0.0009082652134423251;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
        result[0] += 0.40471512770137524;
        result[1] += 0.023575638506876228;
        result[2] += 0;
        result[3] += 0.5717092337917485;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9964048371282276;
        result[1] += 0.0005810364237208121;
        result[2] += 0.0025420343537785528;
        result[3] += 0.0002542034353778553;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00021788865889530454;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += 0.19403739262253664;
        result[1] += 0;
        result[2] += 0.004547751389590703;
        result[3] += 0.8011622031328954;
        result[4] += 0;
        result[5] += 0.00025265285497726126;
        result[6] += 0;
      } else {
        result[0] += 0.9908256880733943;
        result[1] += 0;
        result[2] += 0.006246340035135661;
        result[3] += 0.0007807925043919577;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0021471793870778836;
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
        result[0] += 0.9992405543952915;
        result[1] += 0;
        result[2] += 0.0006835010442377065;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.594456047085628e-05;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        result[0] += 0.6232911825017088;
        result[1] += 0.001367053998632946;
        result[2] += 0.0042720437457279565;
        result[3] += 0.313568010936432;
        result[4] += 0.05656185919343814;
        result[5] += 0.0004272043745727956;
        result[6] += 0.0005126452494873548;
      } else {
        result[0] += 0.13964883625969784;
        result[1] += 0;
        result[2] += 0.018783176806859942;
        result[3] += 0.7211106574111883;
        result[4] += 0.11719069007758269;
        result[5] += 0.0032666394446712946;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        result[0] += 0.27105666156202146;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.6845329249617151;
        result[4] += 0.0444104134762634;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.004662004662004662;
        result[1] += 0.011655011655011656;
        result[2] += 0;
        result[3] += 0.14918414918414918;
        result[4] += 0.8344988344988346;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-29) ) ) {
        result[0] += 0;
        result[1] += 0.0035211267605633804;
        result[2] += 0;
        result[3] += 0.04929577464788732;
        result[4] += 0.9471830985915493;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.08241353936718175;
        result[1] += 0.006622516556291391;
        result[2] += 0.0051508462104488595;
        result[3] += 0.5033112582781457;
        result[4] += 0.4025018395879323;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.22030372373621804;
        result[1] += 0.0014562096941959644;
        result[2] += 0.0002080299563137092;
        result[3] += 0.7237362180153943;
        result[4] += 0.05387975868525068;
        result[5] += 0.0004160599126274184;
        result[6] += 0;
      } else {
        result[0] += 0.06031363088057901;
        result[1] += 0;
        result[2] += 0.0036188178528347406;
        result[3] += 0;
        result[4] += 0.9354644149577804;
        result[5] += 0.0006031363088057901;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-26) ) ) {
        result[0] += 0.038461538461538464;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9615384615384616;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9948320413436693;
        result[1] += 0.0005459111256687412;
        result[2] += 0.002329220802853296;
        result[3] += 0.0020744622775412166;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002183644502674965;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
        result[0] += 0.4449838187702266;
        result[1] += 0;
        result[2] += 0.01132686084142395;
        result[3] += 0.02103559870550162;
        result[4] += 0.522653721682848;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.019657577679137603;
        result[1] += 0;
        result[2] += 0.006024096385542169;
        result[3] += 0.9676601141407736;
        result[4] += 0.00538998097653773;
        result[5] += 0.0012682308180088776;
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
        result[0] += 0.994748103481813;
        result[1] += 0;
        result[2] += 0.0029177202878817353;
        result[3] += 0.0011670881151526942;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0011670881151526942;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        result[0] += 0.008337965536409116;
        result[1] += 0.005558643690939411;
        result[2] += 0.010005558643690939;
        result[3] += 0.9760978321289605;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9936642027455121;
        result[1] += 0;
        result[2] += 0.006335797254487857;
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
        result[0] += 0.009009009009009009;
        result[1] += 0.02252252252252252;
        result[2] += 0;
        result[3] += 0.9684684684684685;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
        result[0] += 0.9759485576239875;
        result[1] += 0.00031973852493960493;
        result[2] += 0.0011723745914452182;
        result[3] += 0.022239590734688078;
        result[4] += 0.00010657950831320165;
        result[5] += 0;
        result[6] += 0.0002131590166264033;
      } else {
        result[0] += 0.015586546349466776;
        result[1] += 0;
        result[2] += 0.017227235438884332;
        result[3] += 0.8539786710418376;
        result[4] += 0.10746513535684987;
        result[5] += 0.005742411812961444;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        result[0] += 0.4417821040808686;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.5582178959191314;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8267965895249696;
        result[1] += 0;
        result[2] += 0.012423873325213155;
        result[3] += 0.001218026796589525;
        result[4] += 0.1566382460414129;
        result[5] += 0.00097442143727162;
        result[6] += 0.00194884287454324;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
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
        result[0] += 0.3447098976109215;
        result[1] += 0.016211604095563138;
        result[2] += 0;
        result[3] += 0.6390784982935154;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-8.5) ) ) {
        result[0] += 0.8461538461538461;
        result[1] += 0;
        result[2] += 0.0036231884057971015;
        result[3] += 0.13684503901895206;
        result[4] += 0.012681159420289856;
        result[5] += 0.0002787068004459309;
        result[6] += 0.0004180602006688963;
      } else {
        result[0] += 0.8001694915254237;
        result[1] += 0;
        result[2] += 0.0047457627118644066;
        result[3] += 0.1759322033898305;
        result[4] += 0.01847457627118644;
        result[5] += 0.0005084745762711864;
        result[6] += 0.00016949152542372882;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.2824829037348764;
        result[1] += 0.007364544976328248;
        result[2] += 0.008942661756970016;
        result[3] += 0.5954760652288269;
        result[4] += 0.10573382430299842;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.041631973355537054;
        result[1] += 0;
        result[2] += 0.004163197335553705;
        result[3] += 0.12406328059950042;
        result[4] += 0.8301415487094088;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9989967673614982;
        result[1] += 0;
        result[2] += 0.0009474974919184039;
        result[3] += 0;
        result[4] += 5.573514658343552e-05;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5562596999482671;
        result[1] += 0.0019399896533885154;
        result[2] += 0.004785307811691672;
        result[3] += 0.35501810657009836;
        result[4] += 0.08083290222452148;
        result[5] += 0.0005173305742369375;
        result[6] += 0.0006466632177961718;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        result[0] += 0.19007832898172325;
        result[1] += 0.013577023498694517;
        result[2] += 0;
        result[3] += 0.7963446475195822;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5525;
        result[1] += 0;
        result[2] += 0.019375;
        result[3] += 0.428125;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)3.5) ) ) {
        result[0] += 0.3333333333333333;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.6666666666666666;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9993487338620082;
        result[1] += 0;
        result[2] += 0.0006129563651687545;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.8309772823047157e-05;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.7325413388986997;
        result[1] += 0.002247551773960507;
        result[2] += 0.005939958259752769;
        result[3] += 0.2522074169208541;
        result[4] += 0.005618879434901268;
        result[5] += 0.0011237758869802536;
        result[6] += 0.00032107882485150104;
      } else {
        result[0] += 0.3642990337345313;
        result[1] += 0;
        result[2] += 0.008306492625868793;
        result[3] += 0.5099169350737415;
        result[4] += 0.11578233598915072;
        result[5] += 0.0006780810306831667;
        result[6] += 0.00101712154602475;
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
        result[0] += 0.9668789808917198;
        result[1] += 0;
        result[2] += 0.033121019108280254;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.07238358690640849;
        result[1] += 0.012448132780082987;
        result[2] += 0.0013831258644536654;
        result[3] += 0.9137851544490548;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
        result[0] += 0.9849752619324796;
        result[1] += 0.000509313154831199;
        result[2] += 0.0006548311990686845;
        result[3] += 0.013569557625145518;
        result[4] += 0.00010913853317811408;
        result[5] += 0;
        result[6] += 0.00018189755529685682;
      } else {
        result[0] += 0.23224468636599274;
        result[1] += 0;
        result[2] += 0.01607050285121825;
        result[3] += 0.6837739761534474;
        result[4] += 0.06531881804043546;
        result[5] += 0.002592016588906169;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += 0.15710319296621933;
        result[1] += 0;
        result[2] += 0.004396112910689496;
        result[3] += 0.6716797778806108;
        result[4] += 0.16520129569643682;
        result[5] += 0.0016196205460434984;
        result[6] += 0;
      } else {
        result[0] += 0.9924593967517402;
        result[1] += 0;
        result[2] += 0.0058004640371229705;
        result[3] += 0.0009667440061871617;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0007733952049497295;
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
        result[0] += 0.9768292682926829;
        result[1] += 0;
        result[2] += 0.023170731707317073;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.06167800453514739;
        result[1] += 0.009523809523809525;
        result[2] += 0.0013605442176870747;
        result[3] += 0.927437641723356;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
        result[0] += 0.0012300123001230013;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.998769987699877;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.12155963302752294;
        result[1] += 0;
        result[2] += 0.010894495412844037;
        result[3] += 0.8663990825688074;
        result[4] += 0;
        result[5] += 0.0011467889908256881;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
        result[0] += 0.9582598805800399;
        result[1] += 0.0009667330110889963;
        result[2] += 0.003013932328689224;
        result[3] += 0.03741825419391527;
        result[4] += 0;
        result[5] += 0.0001705999431333523;
        result[6] += 0.0001705999431333523;
      } else {
        result[0] += 0.866264803158007;
        result[1] += 0;
        result[2] += 0.002133788541555532;
        result[3] += 0.13117465059212632;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004267577083111064;
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
        result[0] += 0.968503937007874;
        result[1] += 0;
        result[2] += 0.030183727034120734;
        result[3] += 0.0013123359580052493;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.07217907720420283;
        result[1] += 0.007309273640931932;
        result[2] += 0.0013704888076747374;
        result[3] += 0.9191411603471905;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
        result[0] += 0.08812949640287769;
        result[1] += 0;
        result[2] += 0.017985611510791366;
        result[3] += 0.6933453237410072;
        result[4] += 0.19874100719424462;
        result[5] += 0.0017985611510791368;
        result[6] += 0;
      } else {
        result[0] += 0.8917525773195877;
        result[1] += 0;
        result[2] += 0.004073827735284336;
        result[3] += 0.10325906218822747;
        result[4] += 0;
        result[5] += 8.313934153641503e-05;
        result[6] += 0.0008313934153641503;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.999124487004104;
        result[1] += 0;
        result[2] += 0.0005471956224350205;
        result[3] += 0;
        result[4] += 0.0002188782489740082;
        result[5] += 0;
        result[6] += 0.0001094391244870041;
      } else {
        result[0] += 0.5758139534883722;
        result[1] += 0.001196013289036545;
        result[2] += 0.005448504983388705;
        result[3] += 0.34631229235880406;
        result[4] += 0.06963455149501663;
        result[5] += 0.000930232558139535;
        result[6] += 0.0006644518272425251;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.04472843450479233;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.952076677316294;
        result[4] += 0.003194888178913738;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.38274706867671693;
        result[1] += 0.005025125628140704;
        result[2] += 0.010050251256281407;
        result[3] += 0.602177554438861;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
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
        result[0] += 0.0008396305625524769;
        result[1] += 0.005877413937867338;
        result[2] += 0;
        result[3] += 0.19815281276238456;
        result[4] += 0.7951301427371956;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0.0012755102040816326;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9974489795918368;
        result[5] += 0.0012755102040816326;
        result[6] += 0;
      } else {
        result[0] += 0.10441527446300716;
        result[1] += 0.0011933174224343676;
        result[2] += 0.008949880668257757;
        result[3] += 0.8842482100238663;
        result[4] += 0;
        result[5] += 0.0011933174224343676;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.8821161368728875;
        result[1] += 0.000455736584254301;
        result[2] += 0.0022407048725836464;
        result[3] += 0.11484561923208386;
        result[4] += 0;
        result[5] += 0.00011393414606357525;
        result[6] += 0.0002278682921271505;
      } else {
        result[0] += 0.9876396717096806;
        result[1] += 0;
        result[2] += 0.002472065658063878;
        result[3] += 0.009690497379610403;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00019776525264511026;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-13) ) ) {
        result[0] += 0.1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9995943204868154;
        result[5] += 0.00040567951318458417;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
        result[0] += 0.2164094843808807;
        result[1] += 0.0026345502446368085;
        result[2] += 0.008280015054572827;
        result[3] += 0.7707941287165977;
        result[4] += 0;
        result[5] += 0.001881821603312006;
        result[6] += 0;
      } else {
        result[0] += 0.12808988764044943;
        result[1] += 0.000749063670411985;
        result[2] += 0;
        result[3] += 0.8704119850187266;
        result[4] += 0;
        result[5] += 0.000749063670411985;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
        result[0] += 0.9356027878578423;
        result[1] += 0.0014400092160589827;
        result[2] += 0.0032256206439721215;
        result[3] += 0.05938598007027245;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0003456022118541559;
      } else {
        result[0] += 0.7445066781559673;
        result[1] += 0;
        result[2] += 0.0008616975441619991;
        result[3] += 0.25420077552778975;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00043084877208099956;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
        result[0] += 0.9978012313104662;
        result[1] += 0;
        result[2] += 0.0020521841102316037;
        result[3] += 0.0001465845793022574;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9683118339876613;
        result[1] += 0;
        result[2] += 0.00532809871003926;
        result[3] += 0.024397083567021874;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.001962983735277622;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
        result[0] += 0;
        result[1] += 0.009295499021526418;
        result[2] += 0.008806262230919765;
        result[3] += 0.8571428571428571;
        result[4] += 0.12475538160469667;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9976133651551312;
        result[1] += 0.002386634844868735;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)73) ) ) {
        result[0] += 0.3473684210526316;
        result[1] += 0;
        result[2] += 0.03508771929824561;
        result[3] += 0.6175438596491228;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.022758620689655173;
        result[4] += 0.9772413793103448;
        result[5] += 0;
        result[6] += 0;
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
        result[0] += 0.9995432747202558;
        result[1] += 0;
        result[2] += 0.00041866483976554775;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.806043997868616e-05;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0.0034403669724770644;
        result[1] += 0.008027522935779817;
        result[2] += 0;
        result[3] += 0.24655963302752293;
        result[4] += 0.7408256880733946;
        result[5] += 0.0011467889908256881;
        result[6] += 0;
      } else {
        result[0] += 0.6036980231765509;
        result[1] += 0.0005112474437627813;
        result[2] += 0.007668711656441719;
        result[3] += 0.3755964553510566;
        result[4] += 0.01116223585548739;
        result[5] += 0.000681663258350375;
        result[6] += 0.000681663258350375;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
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
        result[0] += 0.9992391676494085;
        result[1] += 0;
        result[2] += 0.000646707498002815;
        result[3] += 0;
        result[4] += 3.804161752957736e-05;
        result[5] += 0;
        result[6] += 7.608323505915471e-05;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        result[0] += 0.0231396266105706;
        result[1] += 0.0036813042334998686;
        result[2] += 0.015777018143570864;
        result[3] += 0.7104917170654746;
        result[4] += 0.24454378122534842;
        result[5] += 0.00236655272153563;
        result[6] += 0;
      } else {
        result[0] += 0.7445410628019323;
        result[1] += 0;
        result[2] += 0.003961352657004831;
        result[3] += 0.25082125603864736;
        result[4] += 0;
        result[5] += 9.66183574879227e-05;
        result[6] += 0.0005797101449275362;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
        result[0] += 0.006557377049180328;
        result[1] += 0.03934426229508197;
        result[2] += 0;
        result[3] += 0.11475409836065574;
        result[4] += 0.839344262295082;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.1614497528830313;
        result[1] += 0.013179571663920923;
        result[2] += 0;
        result[3] += 0.8253706754530478;
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
        result[0] += 0.25449101796407186;
        result[1] += 0;
        result[2] += 0.023952095808383235;
        result[3] += 0.7215568862275449;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82) ) ) {
        result[0] += 0.09789288849868305;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8985952589991221;
        result[4] += 0.0030728709394205445;
        result[5] += 0.0004389815627743635;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.026444662095984332;
        result[3] += 0;
        result[4] += 0.9676787463271304;
        result[5] += 0.005876591576885407;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.9863095238095239;
        result[1] += 0.00045518207282913166;
        result[2] += 0.002065826330532213;
        result[3] += 0.0109593837535014;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002100840336134454;
      } else {
        result[0] += 0.658596779880127;
        result[1] += 0;
        result[2] += 0.004113291808673171;
        result[3] += 0.33599717945704555;
        result[4] += 0;
        result[5] += 0.0005876131155247386;
        result[6] += 0.0007051357386296863;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
        result[0] += 0.00946372239747634;
        result[1] += 0.0473186119873817;
        result[2] += 0;
        result[3] += 0.08517350157728706;
        result[4] += 0.8580441640378549;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.1565523306948109;
        result[1] += 0.006156552330694811;
        result[2] += 0;
        result[3] += 0.8372911169744943;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
        result[0] += 0.015217391304347827;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.013768115942028985;
        result[4] += 0.9710144927536232;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.24496644295302014;
        result[1] += 0;
        result[2] += 0.03355704697986577;
        result[3] += 0.7214765100671141;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9994248466257669;
        result[1] += 0;
        result[2] += 0.0005368098159509203;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.834355828220859e-05;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += 0.5875629600929874;
        result[1] += 0.002518403719488571;
        result[2] += 0.005811700891127471;
        result[3] += 0.30569546687330496;
        result[4] += 0.09686168151879118;
        result[5] += 0.0005811700891127471;
        result[6] += 0.0009686168151879118;
      } else {
        result[0] += 0.5770311402481855;
        result[1] += 0.0026925778506204636;
        result[2] += 0.00807773355186139;
        result[3] += 0.2553266214001405;
        result[4] += 0.156052446733786;
        result[5] += 0.00023413720440177945;
        result[6] += 0.0005853430110044487;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0;
        result[1] += 0.003504672897196262;
        result[2] += 0;
        result[3] += 0.23831775700934582;
        result[4] += 0.7570093457943926;
        result[5] += 0.0011682242990654207;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.009453781512605041;
        result[3] += 0.9880952380952381;
        result[4] += 0.0017507002801120449;
        result[5] += 0.0007002801120448179;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
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
        result[0] += 0.6074516261836147;
        result[1] += 0.001440922190201729;
        result[2] += 0.004322766570605188;
        result[3] += 0.29518320296418277;
        result[4] += 0.08954302181967888;
        result[5] += 0.001440922190201729;
        result[6] += 0.0006175380815150268;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.01953125;
        result[3] += 0.86640625;
        result[4] += 0.1140625;
        result[5] += 0;
        result[6] += 0;
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
        result[0] += 0.09325513196480939;
        result[1] += 0.002932551319648094;
        result[2] += 0.004105571847507331;
        result[3] += 0.8956011730205279;
        result[4] += 0;
        result[5] += 0.004105571847507331;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        result[0] += 0.2959349593495935;
        result[1] += 0.0065040650406504065;
        result[2] += 0;
        result[3] += 0.697560975609756;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9159338317901833;
        result[1] += 0.0004648820361833185;
        result[2] += 0.0028280323867818542;
        result[3] += 0.08057955293844186;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00019370084840971604;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        result[0] += 0.9786700125470514;
        result[1] += 0;
        result[2] += 0.020075282308657464;
        result[3] += 0.0012547051442910915;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.051623931623931626;
        result[1] += 0.0041025641025641026;
        result[2] += 0.0006837606837606838;
        result[3] += 0.6581196581196581;
        result[4] += 0.28547008547008546;
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
        result[1] += 0.04424778761061947;
        result[2] += 0;
        result[3] += 0.9557522123893806;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0.20512820512820512;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.1932938856015779;
        result[4] += 0.6015779092702169;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.014575411913814956;
        result[3] += 0.894169835234474;
        result[4] += 0.09062103929024082;
        result[5] += 0.0006337135614702154;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        result[0] += 0.994143770435801;
        result[1] += 0.0003416133912449368;
        result[2] += 0.0006832267824898736;
        result[3] += 0.004782587477429115;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4.880191303499097e-05;
      } else {
        result[0] += 0.7988564167725541;
        result[1] += 0.000889453621346887;
        result[2] += 0.004764930114358324;
        result[3] += 0.1941550190597205;
        result[4] += 0;
        result[5] += 0.00031766200762388825;
        result[6] += 0.0010165184243964424;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        result[0] += 0.0009615384615384616;
        result[1] += 0.0003205128205128205;
        result[2] += 0.0035256410256410257;
        result[3] += 0.9724358974358974;
        result[4] += 0.020512820512820513;
        result[5] += 0.0022435897435897434;
        result[6] += 0;
      } else {
        result[0] += 0.5136798905608755;
        result[1] += 0;
        result[2] += 0.008891928864569083;
        result[3] += 0;
        result[4] += 0.4774281805745554;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.7777777777777778;
        result[4] += 0.2222222222222222;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0068415051311288486;
        result[2] += 0;
        result[3] += 0.010262257696693273;
        result[4] += 0.9828962371721779;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += 0.9976200121531295;
        result[1] += 0;
        result[2] += 0.0005063803929511849;
        result[3] += 0.0018229694146242657;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5.0638039295118495e-05;
      } else {
        result[0] += 0.36;
        result[1] += 0.08;
        result[2] += 0;
        result[3] += 0.56;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.5491580662683324;
        result[1] += 0.0027159152634437804;
        result[2] += 0.007740358500814774;
        result[3] += 0.4397066811515481;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006789788158609451;
      } else {
        result[0] += 0.984788157223073;
        result[1] += 0;
        result[2] += 0.003675344563552833;
        result[3] += 0.011230219499744768;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00030627871362940275;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += 0.11069063386944182;
        result[1] += 0.003784295175023652;
        result[2] += 0;
        result[3] += 0.6466414380321666;
        result[4] += 0.23888363292336803;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.1440088963024743;
        result[1] += 0.0008340283569641367;
        result[2] += 0.004170141784820684;
        result[3] += 0.4987489574645538;
        result[4] += 0.3502919099249375;
        result[5] += 0.0019460661662496525;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        result[0] += 0.993625555078069;
        result[1] += 0.0007520412548345509;
        result[2] += 0.00275748460106002;
        result[3] += 0.002435181206130927;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004297378599054577;
      } else {
        result[0] += 0;
        result[1] += 0.07446808510638298;
        result[2] += 0;
        result[3] += 0.925531914893617;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
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
        result[0] += 0.34326424870466316;
        result[1] += 0;
        result[2] += 0.015544041450777198;
        result[3] += 0.5414507772020725;
        result[4] += 0.09671848013816924;
        result[5] += 0.000863557858376511;
        result[6] += 0.0021588946459412776;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += 0.16893830703012913;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.6567431850789096;
        result[4] += 0.17395982783357244;
        result[5] += 0.0003586800573888092;
        result[6] += 0;
      } else {
        result[0] += 0.9975220264317181;
        result[1] += 0;
        result[2] += 0.0005506607929515419;
        result[3] += 0.0013766519823788547;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005506607929515419;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)25) ) ) {
        result[0] += 0.6047151953192221;
        result[1] += 0;
        result[2] += 0.009636895542935812;
        result[3] += 0.3403889175701256;
        result[4] += 0.0447427293064877;
        result[5] += 0;
        result[6] += 0.0005162622612287042;
      } else {
        result[0] += 0.9802393543000278;
        result[1] += 0.0006759174585503558;
        result[2] += 0.0005963977575444316;
        result[3] += 0.0180509721283448;
        result[4] += 0.00027831895352073476;
        result[5] += 7.951970100592422e-05;
        result[6] += 7.951970100592422e-05;
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
        result[0] += 0.3665419925195512;
        result[1] += 0;
        result[2] += 0.01054063243794628;
        result[3] += 0.5083304998299899;
        result[4] += 0.11356681400884054;
        result[5] += 0.0005100306018361103;
        result[6] += 0.0005100306018361103;
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
        result[0] += 0.15881883479648842;
        result[1] += 0.018355945730247406;
        result[2] += 0;
        result[3] += 0.8228252194732641;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        result[0] += 0.2508250825082508;
        result[1] += 0;
        result[2] += 0.0297029702970297;
        result[3] += 0.7194719471947195;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.019062748212867357;
        result[4] += 0.9809372517871326;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)22.5) ) ) {
        result[0] += 0.4;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.6;
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)5.5) ) ) {
        result[0] += 0.2008072653884965;
        result[1] += 0.0016818028927009757;
        result[2] += 0.0073999327278842925;
        result[3] += 0.7884291960982174;
        result[4] += 0;
        result[5] += 0.0016818028927009757;
        result[6] += 0;
      } else {
        result[0] += 0.10871794871794872;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8912820512820513;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
        result[0] += 0.937557286892759;
        result[1] += 0.0015467461044912925;
        result[2] += 0.0034372135655362053;
        result[3] += 0.057401466544454625;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5.728689275893676e-05;
      } else {
        result[0] += 0.7483414899401849;
        result[1] += 0;
        result[2] += 0.0011963023382272975;
        result[3] += 0.2502446982055465;
        result[4] += 0;
        result[5] += 0.0001087547580206634;
        result[6] += 0.0001087547580206634;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
        result[0] += 0.9937407533856835;
        result[1] += 0;
        result[2] += 0.0038693524524866284;
        result[3] += 0.0021622851940366456;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002276089677933311;
      } else {
        result[0] += 0.9514563106796117;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.04854368932038835;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)35) ) ) {
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
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        result[0] += 0.0012073649260488982;
        result[1] += 0.004527618472683369;
        result[2] += 0.00392393600965892;
        result[3] += 0.9894355568970722;
        result[4] += 0;
        result[5] += 0.0009055236945366737;
        result[6] += 0;
      } else {
        result[0] += 0.972396486825596;
        result[1] += 0;
        result[2] += 0.027603513174404015;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
        result[0] += 0.5170731707317073;
        result[1] += 0.014634146341463415;
        result[2] += 0;
        result[3] += 0.4682926829268293;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.3055555555555556;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.6944444444444444;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
        result[0] += 0.9380909901873328;
        result[1] += 0.0006244424620874219;
        result[2] += 0.0037020517395182874;
        result[3] += 0.057181088314005354;
        result[4] += 0;
        result[5] += 4.4603033006244425e-05;
        result[6] += 0.0003568242640499554;
      } else {
        result[0] += 0.870020964360587;
        result[1] += 0;
        result[2] += 0.0015903997686691246;
        result[3] += 0.12838863587074387;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0.3128205128205128;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.14358974358974358;
        result[4] += 0.541025641025641;
        result[5] += 0.002564102564102564;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.00042426813746287653;
        result[2] += 0.011879507848960543;
        result[3] += 0.862537123462028;
        result[4] += 0.12176495545184557;
        result[5] += 0.0033941450997030122;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.990682019486271;
        result[1] += 0.0005314437555358724;
        result[2] += 0.0023029229406554474;
        result[3] += 0.006235606731620903;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002480070859167405;
      } else {
        result[0] += 0.6574807670226203;
        result[1] += 0;
        result[2] += 0.0036743598576185555;
        result[3] += 0.3381559306464577;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006889424733034792;
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-6.5) ) ) {
        result[0] += 0.21120689655172414;
        result[1] += 0.0021551724137931034;
        result[2] += 0;
        result[3] += 0.7866379310344828;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.11006585136406397;
        result[1] += 0.028222013170272814;
        result[2] += 0.005644402634054563;
        result[3] += 0.8560677328316086;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        result[0] += 0.006920415224913495;
        result[1] += 0.009886307464162136;
        result[2] += 0.007909045971329708;
        result[3] += 0.9752842313395946;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9932659932659933;
        result[1] += 0;
        result[2] += 0.006734006734006734;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0.9355547418528012;
        result[1] += 0.00014646649578908824;
        result[2] += 0.0003661662394727206;
        result[3] += 0.013694617356279751;
        result[4] += 0.05023800805565727;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.982849774339136;
        result[1] += 0;
        result[2] += 0.0016763378465506126;
        result[3] += 0.014442295293359123;
        result[4] += 0.0006447453255963894;
        result[5] += 0;
        result[6] += 0.00038684719535783365;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.4270779556014455;
        result[1] += 0.0007743933918430562;
        result[2] += 0.007743933918430563;
        result[3] += 0.5453020134228188;
        result[4] += 0.01729478575116159;
        result[5] += 0.0011615900877645843;
        result[6] += 0.0006453278265358802;
      } else {
        result[0] += 0.9868084671234277;
        result[1] += 0;
        result[2] += 0.0029655383986092647;
        result[3] += 0.010123734533183352;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00010225994477962981;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        result[0] += 0.001769911504424779;
        result[1] += 0.0002949852507374632;
        result[2] += 0;
        result[3] += 0.9303834808259588;
        result[4] += 0.06666666666666668;
        result[5] += 0.0008849557522123895;
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
        result[1] += 0.005787781350482315;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9942122186495177;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.10385064177362893;
        result[1] += 0;
        result[2] += 0.030338389731621937;
        result[3] += 0;
        result[4] += 0.8553092182030338;
        result[5] += 0.010501750291715286;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9989971921379863;
        result[1] += 0;
        result[2] += 0.0008523866827115925;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00015042117930204573;
      } else {
        result[0] += 0.6680497925311203;
        result[1] += 0.029045643153526972;
        result[2] += 0;
        result[3] += 0.3029045643153527;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
        result[0] += 0.8879207920792079;
        result[1] += 0.0018217821782178219;
        result[2] += 0.00601980198019802;
        result[3] += 0.10336633663366336;
        result[4] += 0;
        result[5] += 0.00015841584158415842;
        result[6] += 0.0007128712871287129;
      } else {
        result[0] += 0.5062662567982975;
        result[1] += 0;
        result[2] += 0.0028375502482856467;
        result[3] += 0.4908961929534169;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
        result[0] += 0.07686148919135308;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.900720576461169;
        result[4] += 0.022017614091273018;
        result[5] += 0.00040032025620496394;
        result[6] += 0;
      } else {
        result[0] += 0.28172434729811785;
        result[1] += 0.0006071645415907712;
        result[2] += 0;
        result[3] += 0.6059502125075896;
        result[4] += 0.1117182756527019;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9982014388489209;
        result[5] += 0.0017985611510791368;
        result[6] += 0;
      } else {
        result[0] += 0.78;
        result[1] += 0.04666666666666667;
        result[2] += 0.15333333333333332;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.02;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-5) ) ) {
        result[0] += 0.4740484429065744;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.5259515570934256;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8939678393600523;
        result[1] += 0;
        result[2] += 0.0022039017223083835;
        result[3] += 0.10333850297934864;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004897559382907519;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9991450068399452;
        result[1] += 0;
        result[2] += 0.0006839945280437756;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0001709986320109439;
      } else {
        result[0] += 0.7032042917210382;
        result[1] += 0.003044802087864289;
        result[2] += 0.0053646512976656515;
        result[3] += 0.2879512831665942;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00043497172683775554;
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
    

    FILE* file = fopen("./codegen/dataset_148/split_4/test_data.csv", "r");
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
