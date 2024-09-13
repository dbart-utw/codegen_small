
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
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        result[0] += 0.5321484579194982;
        result[1] += 0;
        result[2] += 0.012023000522739153;
        result[3] += 0.4391008886565604;
        result[4] += 0.0167276529012023;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.17186183656276327;
        result[1] += 0.007582139848357203;
        result[2] += 0.006739679865206402;
        result[3] += 0.8138163437236732;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.006134969325153374;
        result[1] += 0.03067484662576687;
        result[2] += 0;
        result[3] += 0.9631901840490797;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        result[0] += 0.9824002283213624;
        result[1] += 0.00023783475241402277;
        result[2] += 0.0010464729106217003;
        result[3] += 0.015839794510773917;
        result[4] += 0.00019026780193121822;
        result[5] += 9.513390096560911e-05;
        result[6] += 0.00019026780193121822;
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
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
        result[0] += 0.8003508316008316;
        result[1] += 0.0009095634095634096;
        result[2] += 0.002728690228690229;
        result[3] += 0.19516632016632016;
        result[4] += 0;
        result[5] += 0.00012993762993762994;
        result[6] += 0.0007146569646569647;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.009433962264150943;
        result[3] += 0.9583333333333334;
        result[4] += 0.02908805031446541;
        result[5] += 0.0031446540880503146;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        result[0] += 0.0007874015748031496;
        result[1] += 0;
        result[2] += 0.0031496062992125984;
        result[3] += 0.8822834645669292;
        result[4] += 0.10984251968503937;
        result[5] += 0.003937007874015748;
        result[6] += 0;
      } else {
        result[0] += 0.3564453125;
        result[1] += 0;
        result[2] += 0.0205078125;
        result[3] += 0;
        result[4] += 0.623046875;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.8817365831674616;
        result[1] += 0.0004506703721786157;
        result[2] += 0.0020280166748037707;
        result[3] += 0.1155218387351185;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002628910504375258;
      } else {
        result[0] += 0.9879259980525803;
        result[1] += 0;
        result[2] += 0.0017526777020447906;
        result[3] += 0.01002921129503408;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00029211295034079843;
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
        result[0] += 0.01056338028169014;
        result[1] += 0.035211267605633804;
        result[2] += 0;
        result[3] += 0.11971830985915492;
        result[4] += 0.8345070422535211;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.145985401459854;
        result[1] += 0.006488240064882401;
        result[2] += 0;
        result[3] += 0.8475263584752636;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        result[0] += 0.3003194888178914;
        result[1] += 0;
        result[2] += 0.02875399361022364;
        result[3] += 0.670926517571885;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.02481389578163772;
        result[4] += 0.9751861042183623;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
        result[0] += 0;
        result[1] += 0.006657156443176416;
        result[2] += 0.007608178792201618;
        result[3] += 0.8659058487874466;
        result[4] += 0.11982881597717547;
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
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90) ) ) {
        result[0] += 0.08520475561426684;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.02906208718626156;
        result[4] += 0.8857331571994715;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0047169811320754715;
        result[1] += 0;
        result[2] += 0.03773584905660377;
        result[3] += 0.9575471698113207;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        result[0] += 0.10357714895888949;
        result[1] += 0;
        result[2] += 0.004805125467164977;
        result[3] += 0.820608649225841;
        result[4] += 0.06780565936999468;
        result[5] += 0.0032034169781099842;
        result[6] += 0;
      } else {
        result[0] += 0.9940050559768869;
        result[1] += 0.00046948356807511736;
        result[2] += 0.0010111953773925605;
        result[3] += 0.004153123871433731;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00036114120621162876;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += 0.1429889298892989;
        result[1] += 0;
        result[2] += 0.006457564575645757;
        result[3] += 0.6934963099630996;
        result[4] += 0.15705719557195572;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9941414141414141;
        result[1] += 0;
        result[2] += 0.0036363636363636364;
        result[3] += 0.0012121212121212121;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00101010101010101;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)107) ) ) {
        result[0] += 0.001720747295968535;
        result[1] += 0;
        result[2] += 0.0024582104228121925;
        result[3] += 0.7908062930186824;
        result[4] += 0.20378564405113078;
        result[5] += 0.0012291052114060963;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.013468013468013467;
        result[2] += 0;
        result[3] += 0.019079685746352413;
        result[4] += 0.9674523007856342;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)8) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9832904884318766;
        result[1] += 0;
        result[2] += 0.016709511568123392;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9992357077346378;
        result[1] += 0;
        result[2] += 0.0005095281769081831;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00025476408845409153;
      } else {
        result[0] += 0.5197740112994351;
        result[1] += 0.0042717376326305645;
        result[2] += 0.004822929585228056;
        result[3] += 0.4705801295301089;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005511919525974922;
      }
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)311.5) ) ) {
        result[0] += 0.9875599960818885;
        result[1] += 0;
        result[2] += 0.0023508668821627977;
        result[3] += 0.009893231462435106;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00019590557351356646;
      } else {
        result[0] += 0.6;
        result[1] += 0;
        result[2] += 0.4;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        result[0] += 0.9743290548424738;
        result[1] += 0;
        result[2] += 0.025670945157526253;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.09150657229524772;
        result[1] += 0.005055611729019211;
        result[2] += 0;
        result[3] += 0.903437815975733;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.03088803088803089;
        result[2] += 0;
        result[3] += 0.9691119691119691;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        result[0] += 0.867303953337654;
        result[1] += 0.0008911211924821777;
        result[2] += 0.0013771872974724564;
        result[3] += 0.12953661697990929;
        result[4] += 8.10110174983798e-05;
        result[5] += 0.0001620220349967596;
        result[6] += 0.0006480881399870384;
      } else {
        result[0] += 0.9857251063333916;
        result[1] += 0;
        result[2] += 0.0019227407795839888;
        result[3] += 0.0038454815591679775;
        result[4] += 0.0081570820952048;
        result[5] += 0.0003495892326516343;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        result[0] += 0.43729003359462487;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.5627099664053752;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8185250440473194;
        result[1] += 0;
        result[2] += 0.012836647369745784;
        result[3] += 0.0002516989680342311;
        result[4] += 0.1678832116788321;
        result[5] += 0;
        result[6] += 0.0005033979360684622;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)47.5) ) ) {
        result[0] += 0.9871400736090064;
        result[1] += 0.0001731976618315653;
        result[2] += 0.00047629357003680457;
        result[3] += 0.011690842173630658;
        result[4] += 0.000259796492747348;
        result[5] += 0.0001731976618315653;
        result[6] += 8.659883091578264e-05;
      } else {
        result[0] += 0.9071921540138032;
        result[1] += 0.0016345804576825282;
        result[2] += 0.003632401017072285;
        result[3] += 0.08754086451144207;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.17428087986463622;
        result[1] += 0.00676818950930626;
        result[2] += 0.010998307952622674;
        result[3] += 0.8068245910885504;
        result[4] += 0;
        result[5] += 0.0011280315848843769;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)100.5) ) ) {
        result[0] += 0.1554431727442108;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8445568272557892;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.07632600258732213;
        result[1] += 0;
        result[2] += 0.0258732212160414;
        result[3] += 0;
        result[4] += 0.8926261319534282;
        result[5] += 0.00517464424320828;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)74) ) ) {
        result[0] += 0.994110718492344;
        result[1] += 0;
        result[2] += 0.004318806438947782;
        result[3] += 0.001374165685119749;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00019630938358853556;
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
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
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
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.07845188284518828;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9184100418410042;
        result[4] += 0.0017433751743375174;
        result[5] += 0.001394700139470014;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.015995260663507108;
        result[3] += 0;
        result[4] += 0.9840047393364929;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.999214569731481;
        result[1] += 0;
        result[2] += 0.0006381620931716656;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00014726817534730743;
      } else {
        result[0] += 0.6404109589041096;
        result[1] += 0.02054794520547945;
        result[2] += 0;
        result[3] += 0.339041095890411;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
        result[0] += 0.8502505796993044;
        result[1] += 0.0020195975764829084;
        result[2] += 0.004039195152965817;
        result[3] += 0.14339142793028647;
        result[4] += 0;
        result[5] += 7.479991024010771e-05;
        result[6] += 0.00022439973072032313;
      } else {
        result[0] += 0.5038277511961723;
        result[1] += 0;
        result[2] += 0.0035885167464114833;
        result[3] += 0.4925837320574163;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        result[0] += 0.969047619047619;
        result[1] += 0;
        result[2] += 0.030952380952380953;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.07715281234444997;
        result[1] += 0.007964161274265804;
        result[2] += 0;
        result[3] += 0.9143852663016426;
        result[4] += 0.0004977600796416127;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)101) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0016012810248198558;
        result[1] += 0.010408326661329063;
        result[2] += 0;
        result[3] += 0.21617293835068055;
        result[4] += 0.7718174539631706;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += 0.9960217349117019;
        result[1] += 0;
        result[2] += 0.0009217931302154085;
        result[3] += 0.002862410246458374;
        result[4] += 0.0001455462837182224;
        result[5] += 0;
        result[6] += 4.851542790607413e-05;
      } else {
        result[0] += 0.018027571580063628;
        result[1] += 0.0021208907741251328;
        result[2] += 0.019088016967126194;
        result[3] += 0.28525980911983034;
        result[4] += 0.672322375397667;
        result[5] += 0.003181336161187699;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.4255346560164906;
        result[1] += 0.0009018294254058232;
        result[2] += 0.0055398093274929144;
        result[3] += 0.5477969595465086;
        result[4] += 0.01816542128317444;
        result[5] += 0.0012883277505797476;
        result[6] += 0.0007729966503478485;
      } else {
        result[0] += 0.9834166046561071;
        result[1] += 0;
        result[2] += 0.002019772509833103;
        result[3] += 0.014032103752524715;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005315190815350271;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
        result[0] += 0.999864087346532;
        result[1] += 0;
        result[2] += 0.00013591265346803787;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.999277108433735;
        result[1] += 0;
        result[2] += 0.0007228915662650603;
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
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        result[0] += 0.6178067318132465;
        result[1] += 0;
        result[2] += 0.008686210640608035;
        result[3] += 0.33637350705754615;
        result[4] += 0.036047774158523345;
        result[5] += 0;
        result[6] += 0.0010857763300760044;
      } else {
        result[0] += 0.11361361361361362;
        result[1] += 0.0025025025025025025;
        result[2] += 0.0025025025025025025;
        result[3] += 0.6321321321321322;
        result[4] += 0.24774774774774774;
        result[5] += 0.0015015015015015015;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        result[0] += 0.5424001840984928;
        result[1] += 0.0019560464848694054;
        result[2] += 0.005638016338741228;
        result[3] += 0.3660108157864458;
        result[4] += 0.0827292601541825;
        result[5] += 0.0005753077896674722;
        result[6] += 0.0006903693476009666;
      } else {
        result[0] += 0.05653710247349823;
        result[1] += 0.006562342251388188;
        result[2] += 0.004038364462392731;
        result[3] += 0.37758707723372037;
        result[4] += 0.5552751135790005;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
        result[0] += 0.0070921985815602835;
        result[1] += 0.02127659574468085;
        result[2] += 0;
        result[3] += 0.047872340425531915;
        result[4] += 0.9237588652482269;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.28187919463087246;
        result[4] += 0.7181208053691275;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        result[0] += 0.4754901960784314;
        result[1] += 0;
        result[2] += 0.007352941176470589;
        result[3] += 0.4503676470588236;
        result[4] += 0.06678921568627452;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.09420955882352941;
        result[1] += 0.0027573529411764708;
        result[2] += 0.0027573529411764708;
        result[3] += 0.5579044117647058;
        result[4] += 0.34237132352941174;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.11388888888888889;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8833333333333333;
        result[4] += 0.0005555555555555556;
        result[5] += 0.0022222222222222222;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.025380710659898477;
        result[3] += 0;
        result[4] += 0.9733502538071066;
        result[5] += 0.0012690355329949238;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9995781723357748;
        result[1] += 0;
        result[2] += 0.0002684357863251141;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00015339187790006518;
      } else {
        result[0] += 0.679658716307931;
        result[1] += 0.0021330230754314523;
        result[2] += 0.004750824122551871;
        result[3] += 0.31287570292805894;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005817335660267597;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        result[0] += 0.4907466496490108;
        result[1] += 0;
        result[2] += 0.008934269304403318;
        result[3] += 0.5003190810465858;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.1324200913242009;
        result[1] += 0.009784735812133072;
        result[2] += 0.005870841487279843;
        result[3] += 0.8519243313763861;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-9.5) ) ) {
        result[0] += 0.9655172413793104;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.034482758620689655;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9993852065321805;
        result[1] += 0;
        result[2] += 0.0004995196926032661;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00011527377521613833;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.7950672645739911;
        result[1] += 0.0011210762331838567;
        result[2] += 0.004820627802690584;
        result[3] += 0.18284753363228703;
        result[4] += 0.014349775784753365;
        result[5] += 0.000672645739910314;
        result[6] += 0.0011210762331838567;
      } else {
        result[0] += 0;
        result[1] += 0.0013109596224436288;
        result[2] += 0.006030414263240692;
        result[3] += 0.8038804404824331;
        result[4] += 0.1885159937073938;
        result[5] += 0.00026219192448872575;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9980938549514387;
        result[1] += 0;
        result[2] += 0.0016338386130525552;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002723064355087592;
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
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.023316062176165803;
        result[1] += 0.00932642487046632;
        result[2] += 0.002849740932642487;
        result[3] += 0.8987046632124353;
        result[4] += 0.0650259067357513;
        result[5] += 0.0007772020725388601;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.012718023255813955;
        result[3] += 0.20130813953488375;
        result[4] += 0.7848837209302326;
        result[5] += 0.0010901162790697676;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        result[0] += 0.5447966919365955;
        result[1] += 0;
        result[2] += 0.0018952446588559617;
        result[3] += 0.4524465885596141;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.000861474844934528;
      } else {
        result[0] += 0.9684942716857611;
        result[1] += 0;
        result[2] += 0.007978723404255319;
        result[3] += 0.02229950900163666;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0012274959083469722;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        result[0] += 0.46833648393194705;
        result[1] += 0;
        result[2] += 0.011342155009451797;
        result[3] += 0.41776937618147447;
        result[4] += 0.10255198487712665;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.09913202375513934;
        result[1] += 0.005025125628140704;
        result[2] += 0.00548195523069895;
        result[3] += 0.5783462768387392;
        result[4] += 0.31201461854728185;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.007874015748031496;
        result[1] += 0.11811023622047244;
        result[2] += 0;
        result[3] += 0.8740157480314961;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        result[0] += 0.0014224751066856333;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9971550497866288;
        result[5] += 0.0014224751066856333;
        result[6] += 0;
      } else {
        result[0] += 0.11927144535840188;
        result[1] += 0;
        result[2] += 0.0099882491186839;
        result[3] += 0.8678025851938895;
        result[4] += 0;
        result[5] += 0.002937720329024677;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.993546967808169;
        result[1] += 0.0005499743345310553;
        result[2] += 0.0010999486690621105;
        result[3] += 0.00458311945442546;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002199897338124221;
      } else {
        result[0] += 0.6586910626319493;
        result[1] += 0;
        result[2] += 0.0038705137227304713;
        result[3] += 0.3368519821721792;
        result[4] += 0;
        result[5] += 0.0003518648838845883;
        result[6] += 0.0002345765892563922;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)373) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        result[0] += 0.9963692946058091;
        result[1] += 0;
        result[2] += 0.0025933609958506223;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.001037344398340249;
      } else {
        result[0] += 0.9996297362899577;
        result[1] += 0;
        result[2] += 0.00037026371004237463;
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
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
        result[0] += 0.0008598452278589854;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.999140154772141;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.020947393477743395;
        result[1] += 0.007141156867412521;
        result[2] += 0.015472506546060461;
        result[3] += 0.9540585574863127;
        result[4] += 0;
        result[5] += 0.00238038562247084;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.5913043478260871;
        result[1] += 0.000316205533596838;
        result[2] += 0.002213438735177866;
        result[3] += 0.40521739130434786;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009486166007905139;
      } else {
        result[0] += 0.9684950135992747;
        result[1] += 0;
        result[2] += 0.007932910244786946;
        result[3] += 0.023118766999093383;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00045330915684496827;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
        result[0] += 0.996495943935103;
        result[1] += 4.8000768012288194e-05;
        result[2] += 0.00048000768012288196;
        result[3] += 0.0028800460807372917;
        result[4] += 4.8000768012288194e-05;
        result[5] += 0;
        result[6] += 4.8000768012288194e-05;
      } else {
        result[0] += 0.0023501762632197414;
        result[1] += 0.0023501762632197414;
        result[2] += 0.010575793184488837;
        result[3] += 0.2702702702702703;
        result[4] += 0.7144535840188014;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        result[0] += 0.7972915007047;
        result[1] += 0.0008578957043936516;
        result[2] += 0.0026349653777805013;
        result[3] += 0.1985415773025308;
        result[4] += 0;
        result[5] += 0.00012255652919909309;
        result[6] += 0.0005515043813959188;
      } else {
        result[0] += 0.15920398009950248;
        result[1] += 0;
        result[2] += 0.014096185737976783;
        result[3] += 0.7101990049751243;
        result[4] += 0.11442786069651742;
        result[5] += 0.0020729684908789387;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.14857142857142858;
        result[1] += 0.019591836734693877;
        result[2] += 0;
        result[3] += 0.8318367346938775;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)16) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.2514792899408284;
        result[1] += 0;
        result[2] += 0.023668639053254437;
        result[3] += 0.7248520710059172;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
        result[0] += 0;
        result[1] += 0.011283497884344146;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9887165021156559;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0011756407241946861;
        result[1] += 0;
        result[2] += 0.003291794027745121;
        result[3] += 0.7542910886433106;
        result[4] += 0.2400658358805549;
        result[5] += 0.0011756407241946861;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
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
        result[2] += 0.02021563342318059;
        result[3] += 0;
        result[4] += 0.9797843665768194;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)4.5) ) ) {
        result[0] += 0.9990942028985508;
        result[1] += 0;
        result[2] += 0.0007459505541346973;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00015984654731457802;
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
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.9113680154142582;
        result[1] += 0.00260682307605123;
        result[2] += 0.0070270882919641845;
        result[3] += 0.07797801201405417;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0010200612036722204;
      } else {
        result[0] += 0;
        result[1] += 0.0007002801120448179;
        result[2] += 0.003851540616246499;
        result[3] += 0.9954481792717087;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9994700382329561;
        result[1] += 0;
        result[2] += 0.0004921073551122383;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.785441193171064e-05;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        result[0] += 0.01576327433628319;
        result[1] += 0.0041482300884955765;
        result[2] += 0.015486725663716816;
        result[3] += 0.7115597345132745;
        result[4] += 0.2508296460176992;
        result[5] += 0.002212389380530974;
        result[6] += 0;
      } else {
        result[0] += 0.7340405198776758;
        result[1] += 0;
        result[2] += 0.003918195718654434;
        result[3] += 0.26146788990825687;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005733944954128441;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.17774762550881953;
        result[1] += 0.009497964721845319;
        result[2] += 0.004070556309362279;
        result[3] += 0.8086838534599728;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
        result[0] += 0.005504587155963303;
        result[1] += 0.003669724770642202;
        result[2] += 0;
        result[3] += 0.1889908256880734;
        result[4] += 0.8018348623853211;
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
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.00029308323563892143;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9328839390386869;
        result[4] += 0.06594372801875732;
        result[5] += 0.0008792497069167644;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9995427526291724;
        result[5] += 0.0004572473708276177;
        result[6] += 0;
      } else {
        result[0] += 0.672;
        result[1] += 0.064;
        result[2] += 0.248;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.016;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        result[0] += 0;
        result[1] += 0.029508196721311476;
        result[2] += 0;
        result[3] += 0.9704918032786886;
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
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.8779969650986341;
        result[1] += 0.0004931714719271622;
        result[2] += 0.0026555386949924124;
        result[3] += 0.11858877086494686;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00026555386949924124;
      } else {
        result[0] += 0.9868511431655382;
        result[1] += 0;
        result[2] += 0.0026493965263467765;
        result[3] += 0.009910705524482387;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005887547836326171;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)15) ) ) {
        result[0] += 0.05;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9375;
        result[5] += 0.0125;
        result[6] += 0;
      } else {
        result[0] += 0.05407407407407407;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9451851851851852;
        result[4] += 0;
        result[5] += 0.0007407407407407407;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
        result[0] += 0.7321428571428571;
        result[1] += 0;
        result[2] += 0.19642857142857142;
        result[3] += 0.017857142857142856;
        result[4] += 0.017857142857142856;
        result[5] += 0.03571428571428571;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.005954912803062527;
        result[2] += 0.004253509145044662;
        result[3] += 0;
        result[4] += 0.9880901743938749;
        result[5] += 0.0017014036580178648;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0011614401858304297;
        result[2] += 0.004645760743321719;
        result[3] += 0.9941927990708479;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
        result[0] += 0.930944512089059;
        result[1] += 0.0014350321795094801;
        result[2] += 0.0028700643590189603;
        result[3] += 0.06440250478344062;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0003478865889719952;
      } else {
        result[0] += 0.8652719044439499;
        result[1] += 0;
        result[2] += 0.0005935158394539654;
        result[3] += 0.13413457971659618;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)22.5) ) ) {
        result[0] += 0.2857142857142857;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7142857142857143;
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
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0047562425683709865;
        result[2] += 0.009116131589377725;
        result[3] += 0.9841458581054301;
        result[4] += 0;
        result[5] += 0.0019817677368212444;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
        result[0] += 0.9964788732394366;
        result[1] += 0.0002589063794531897;
        result[2] += 0.0006731565865782933;
        result[3] += 0.0024337199668599836;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00015534382767191384;
      } else {
        result[0] += 0.9622950819672131;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.03770491803278689;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.4912904808635918;
        result[1] += 0.0034347399411187437;
        result[2] += 0.004416094210009814;
        result[3] += 0.5003680078508341;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004906771344455348;
      } else {
        result[0] += 0.9842297650130548;
        result[1] += 0;
        result[2] += 0.0029242819843342035;
        result[3] += 0.012219321148825065;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006266318537859008;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
        result[0] += 0.9991619777325512;
        result[1] += 0;
        result[2] += 0.0007183048006704178;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00011971746677840296;
      } else {
        result[0] += 0.9999438139116754;
        result[1] += 0;
        result[2] += 5.618608832453085e-05;
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
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        result[0] += 0.77152;
        result[1] += 0.00384;
        result[2] += 0.0016;
        result[3] += 0.2192;
        result[4] += 0.0016;
        result[5] += 0.00064;
        result[6] += 0.0016;
      } else {
        result[0] += 0.47073446327683616;
        result[1] += 0.0022598870056497176;
        result[2] += 0.0024858757062146894;
        result[3] += 0.5032768361581921;
        result[4] += 0.021242937853107345;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
        result[0] += 0.4331226295828066;
        result[1] += 0;
        result[2] += 0.009734513274336285;
        result[3] += 0.47585335018963343;
        result[4] += 0.08027812895069533;
        result[5] += 0.0006321112515802783;
        result[6] += 0.00037926675094816694;
      } else {
        result[0] += 0;
        result[1] += 0.007953340402969246;
        result[2] += 0;
        result[3] += 0.10498409331919406;
        result[4] += 0.8870625662778366;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)252) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9993449424095202;
        result[1] += 0;
        result[2] += 0.0004912931928598722;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0001637643976199574;
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
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        result[0] += 0.018028643639427126;
        result[1] += 0.005054759898904802;
        result[2] += 0.007750631844987363;
        result[3] += 0.6776748104465038;
        result[4] += 0.28879528222409434;
        result[5] += 0.002695871946082561;
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
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        result[0] += 0.5396014307613695;
        result[1] += 0;
        result[2] += 0.00170328734457503;
        result[3] += 0.4583546244251405;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00034065746891500596;
      } else {
        result[0] += 0.9718867138692212;
        result[1] += 0;
        result[2] += 0.006663890045814244;
        result[3] += 0.020616409829237816;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0008329862557267805;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)4715.5) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.9966634890371783;
        result[1] += 0;
        result[2] += 0.003336510962821735;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9998750156230471;
        result[1] += 0;
        result[2] += 0.00012498437695288088;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
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
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.024093264248704664;
        result[1] += 0.008808290155440414;
        result[2] += 0.005440414507772021;
        result[3] += 0.8948186528497409;
        result[4] += 0.06450777202072538;
        result[5] += 0.00233160621761658;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.014084507042253521;
        result[3] += 0.21018418201516792;
        result[4] += 0.7750090285301553;
        result[5] += 0.0007222824124232575;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        result[0] += 0.5483542585680353;
        result[1] += 0;
        result[2] += 0.001526976586359009;
        result[3] += 0.4492704445198507;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0008483203257550051;
      } else {
        result[0] += 0.9718916700861715;
        result[1] += 0.0002051702913418137;
        result[2] += 0.007591300779647107;
        result[3] += 0.019901518260155928;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004103405826836274;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.3064814814814815;
        result[1] += 0.0037037037037037043;
        result[2] += 0;
        result[3] += 0.6277777777777779;
        result[4] += 0.06203703703703704;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.09904761904761905;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.17142857142857143;
        result[4] += 0.7295238095238096;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.2810931399888455;
        result[1] += 0.007250418293363078;
        result[2] += 0.008923591745677636;
        result[3] += 0.5973229224762967;
        result[4] += 0.10540992749581707;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.04257028112449799;
        result[1] += 0;
        result[2] += 0.00642570281124498;
        result[3] += 0.12931726907630522;
        result[4] += 0.8216867469879519;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
        result[0] += 0.6607382550335571;
        result[1] += 0;
        result[2] += 0.011073825503355705;
        result[3] += 0.2842281879194631;
        result[4] += 0.04395973154362416;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8892957506599677;
        result[1] += 0.00042578557438473983;
        result[2] += 0.0020153850520877687;
        result[3] += 0.10755343608958529;
        result[4] += 0.00031224275454880924;
        result[5] += 0.0001986999347128786;
        result[6] += 0.0001986999347128786;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
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
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)29) ) ) {
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
        result[3] += 0.9307692307692308;
        result[4] += 0.0678062678062678;
        result[5] += 0.0014245014245014246;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
        result[0] += 0.8715596330275229;
        result[1] += 0;
        result[2] += 0.11009174311926606;
        result[3] += 0;
        result[4] += 0.01834862385321101;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0022075055187637973;
        result[2] += 0.0035320088300220755;
        result[3] += 0;
        result[4] += 0.9938189845474614;
        result[5] += 0.00044150110375275944;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        result[0] += 0;
        result[1] += 0.031578947368421054;
        result[2] += 0;
        result[3] += 0.968421052631579;
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
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.9952585892479393;
        result[1] += 0.0005106134656065359;
        result[2] += 0.002407177766430812;
        result[3] += 0.0014588956160186738;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00036472390400466844;
      } else {
        result[0] += 0.6395269501933136;
        result[1] += 0;
        result[2] += 0.003297702979304071;
        result[3] += 0.35660677734819196;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005685694791903571;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)73) ) ) {
        result[0] += 0.06498809118747874;
        result[1] += 0;
        result[2] += 0.006464783940115686;
        result[3] += 0.7288193263014631;
        result[4] += 0.19802653963933312;
        result[5] += 0.001701258931609391;
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
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.9853900066250567;
        result[1] += 0.0006276369468949406;
        result[2] += 0.0021269918755884095;
        result[3] += 0.011715889675372224;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00013947487708776456;
      } else {
        result[0] += 0.6400655277322724;
        result[1] += 0;
        result[2] += 0.0035104142288790077;
        result[3] += 0.35548794757781416;
        result[4] += 0;
        result[5] += 0.00035104142288790077;
        result[6] += 0.0005850690381465013;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        result[0] += 0.5517241379310345;
        result[1] += 0;
        result[2] += 0.02231237322515213;
        result[3] += 0.4259634888438134;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0026761819803746653;
        result[1] += 0.024977698483496878;
        result[2] += 0;
        result[3] += 0.9723461195361285;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)5624.5) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.9895833333333334;
        result[1] += 0;
        result[2] += 0.010416666666666666;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9996517432186666;
        result[1] += 0;
        result[2] += 0.00030956158340749915;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.8695197925937394e-05;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)-272) ) ) {
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
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.015981137018600995;
        result[1] += 0.006811632171862719;
        result[2] += 0.002357872674875557;
        result[3] += 0.9072570081215614;
        result[4] += 0.06654440660204348;
        result[5] += 0.001047943411055803;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.015272727272727273;
        result[3] += 0.2149090909090909;
        result[4] += 0.7694545454545455;
        result[5] += 0.0003636363636363636;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.5911437959630731;
        result[1] += 0.00015647003598810827;
        result[2] += 0.0029729306837740573;
        result[3] += 0.40510092317321234;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006258801439524331;
      } else {
        result[0] += 0.9656453110492108;
        result[1] += 0;
        result[2] += 0.00766016713091922;
        result[3] += 0.024837511606313836;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0018570102135561746;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
        result[0] += 0.9994257713804456;
        result[1] += 0;
        result[2] += 0.0005359467115841054;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.828190797029324e-05;
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
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        result[0] += 0.5326330981398332;
        result[1] += 0.0014432328415651058;
        result[2] += 0.003527902501603592;
        result[3] += 0.4389031430404105;
        result[4] += 0.022771007055805002;
        result[5] += 0.00032071840923669016;
        result[6] += 0.00040089801154586275;
      } else {
        result[0] += 0.5907292255511589;
        result[1] += 0;
        result[2] += 0.028264556246466933;
        result[3] += 0.0005652911249293387;
        result[4] += 0.37648388920293957;
        result[5] += 0.0005652911249293387;
        result[6] += 0.003391746749576032;
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
        result[0] += 0;
        result[1] += 0.009425878320479864;
        result[2] += 0;
        result[3] += 0.9905741216795202;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9705882352941176;
        result[1] += 0;
        result[2] += 0.029411764705882353;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.009900990099009901;
        result[1] += 0.054455445544554455;
        result[2] += 0;
        result[3] += 0.9356435643564357;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        result[0] += 0.9712755598831548;
        result[1] += 0.0004868549172346641;
        result[2] += 0.0006955070246209487;
        result[3] += 0.027055223257754904;
        result[4] += 0;
        result[5] += 0.0002086521073862846;
        result[6] += 0.00027820280984837946;
      } else {
        result[0] += 0.16393442622950818;
        result[1] += 0;
        result[2] += 0.012510785159620362;
        result[3] += 0.6984469370146679;
        result[4] += 0.12510785159620363;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        result[0] += 0.6402877697841727;
        result[1] += 0;
        result[2] += 0.00568577396147598;
        result[3] += 0.3517057321884428;
        result[4] += 0.0008122534230679972;
        result[5] += 0.00023207240659085636;
        result[6] += 0.0012763982362497099;
      } else {
        result[0] += 0.002890173410404624;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9971098265895953;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
        result[0] += 0;
        result[1] += 0.017293233082706767;
        result[2] += 0;
        result[3] += 0.9827067669172932;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9562289562289562;
        result[1] += 0;
        result[2] += 0.04377104377104377;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.9938608458390177;
        result[1] += 0;
        result[2] += 0.005457025920873124;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006821282401091405;
      } else {
        result[0] += 0.9997618338791306;
        result[1] += 0;
        result[2] += 0.00023816612086930634;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.7313000675610462;
        result[1] += 0.0013512209246211754;
        result[2] += 0.005018820577164365;
        result[3] += 0.2326030305955023;
        result[4] += 0.027217450053083674;
        result[5] += 0.0009651578033008395;
        result[6] += 0.001544252485281343;
      } else {
        result[0] += 0;
        result[1] += 0.0013430029546065002;
        result[2] += 0.008595218909481601;
        result[3] += 0.8055331721729788;
        result[4] += 0.1845286059629331;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        result[0] += 0.21227080394922426;
        result[1] += 0.004936530324400564;
        result[2] += 0.006346967559943582;
        result[3] += 0.7764456981664316;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0006020469596628537;
        result[1] += 0.006020469596628537;
        result[2] += 0;
        result[3] += 0.11077664057796509;
        result[4] += 0.8826008428657435;
        result[5] += 0;
        result[6] += 0;
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
    

    FILE* file = fopen("./codegen_small/dataset_148/split_0/test_data.csv", "r");
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
