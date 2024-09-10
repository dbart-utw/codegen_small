
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
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
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.933806146572104;
        result[4] += 0.06471631205673758;
        result[5] += 0.0014775413711583924;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9986363636363637;
        result[5] += 0.0013636363636363637;
        result[6] += 0;
      } else {
        result[0] += 0.7116564417177915;
        result[1] += 0.06748466257668713;
        result[2] += 0.20245398773006137;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.018404907975460127;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-26) ) ) {
        result[0] += 0.031578947368421054;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.968421052631579;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5774877650897227;
        result[1] += 0.01631321370309951;
        result[2] += 0;
        result[3] += 0.4061990212071778;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.8804788495372141;
        result[1] += 0.0009561692037022871;
        result[2] += 0.002294806088885489;
        result[3] += 0.11604069456130957;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002294806088885489;
      } else {
        result[0] += 0.9859799435303281;
        result[1] += 0;
        result[2] += 0.004283906143510856;
        result[3] += 0.009444065816376204;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00029208450978483107;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
        result[0] += 0.07476231633535006;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8988764044943821;
        result[4] += 0.025929127052722562;
        result[5] += 0.00043215211754537604;
        result[6] += 0;
      } else {
        result[0] += 0.2614213197969543;
        result[1] += 0.0006345177664974619;
        result[2] += 0;
        result[3] += 0.6218274111675127;
        result[4] += 0.11611675126903553;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9991177767975298;
        result[5] += 0.000882223202470225;
        result[6] += 0;
      } else {
        result[0] += 0.752;
        result[1] += 0.08;
        result[2] += 0.144;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.024;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
        result[0] += 0.9965084907157594;
        result[1] += 0.00015870496746548166;
        result[2] += 0.0005819182140400995;
        result[3] += 0.0026979844469131884;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5.2901655821827224e-05;
      } else {
        result[0] += 0.9643153526970955;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.03568464730290456;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        result[0] += 0.9604296212549464;
        result[1] += 0.001356698699830413;
        result[2] += 0.005765969474279255;
        result[3] += 0.03222159412097231;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00022611644997173547;
      } else {
        result[0] += 0.6227465214761041;
        result[1] += 0;
        result[2] += 0.005202661826981246;
        result[3] += 0.37132486388384756;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0007259528130671506;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += 0.9941348973607038;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.005865102639296188;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.00031887755102040814;
        result[1] += 0.00031887755102040814;
        result[2] += 0.004464285714285714;
        result[3] += 0.689094387755102;
        result[4] += 0.3026147959183674;
        result[5] += 0.0031887755102040817;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9993830016967453;
        result[1] += 0;
        result[2] += 0.0006169983032546661;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.7126698896287512;
        result[1] += 0.0012770227127611056;
        result[2] += 0.007114840828240445;
        result[3] += 0.27784365593359484;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0010945908966523761;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        result[0] += 0;
        result[1] += 0.0034965034965034965;
        result[2] += 0.0008741258741258741;
        result[3] += 0.9956293706293706;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9694915254237289;
        result[1] += 0;
        result[2] += 0.030508474576271188;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)104) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0008880994671403197;
        result[1] += 0.010657193605683837;
        result[2] += 0;
        result[3] += 0.1341030195381883;
        result[4] += 0.8543516873889876;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        result[0] += 0.23223350253807107;
        result[1] += 0.0006345177664974619;
        result[2] += 0;
        result[3] += 0.7671319796954315;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5183823529411765;
        result[1] += 0;
        result[2] += 0.030330882352941176;
        result[3] += 0.45128676470588236;
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
        result[0] += 0.003663003663003663;
        result[1] += 0.05128205128205128;
        result[2] += 0;
        result[3] += 0.945054945054945;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        result[0] += 0.10048361096184848;
        result[1] += 0.0010746910263299304;
        result[2] += 0.009672219236969372;
        result[3] += 0.8108543793659324;
        result[4] += 0.07522837184309512;
        result[5] += 0.0026867275658248257;
        result[6] += 0;
      } else {
        result[0] += 0.9112318840579711;
        result[1] += 0.00041172595520421606;
        result[2] += 0.002113526570048309;
        result[3] += 0.0859409310496267;
        result[4] += 0;
        result[5] += 8.234519104084322e-05;
        result[6] += 0.00021958717610891525;
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
        result[0] += 0.75;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.25;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        result[0] += 0.9744525547445255;
        result[1] += 0;
        result[2] += 0.025547445255474453;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.05690765926986399;
        result[1] += 0.0010737294201861132;
        result[2] += 0.0010737294201861132;
        result[3] += 0.6675017895490336;
        result[4] += 0.2734430923407301;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
        result[0] += 0.0015552099533437014;
        result[1] += 0.007776049766718507;
        result[2] += 0;
        result[3] += 0.04354587869362364;
        result[4] += 0.9471228615863142;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.21700879765395895;
        result[4] += 0.782991202346041;
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
        result[4] += 0.9988331388564761;
        result[5] += 0.0011668611435239206;
        result[6] += 0;
      } else {
        result[0] += 0.11185006045949214;
        result[1] += 0.0006045949214026602;
        result[2] += 0.007255139056831923;
        result[3] += 0.879081015719468;
        result[4] += 0;
        result[5] += 0.0012091898428053204;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.992848371017843;
        result[1] += 0.0005417900744058369;
        result[2] += 0.001336415516867731;
        result[3] += 0.005092826699414867;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00018059669146861228;
      } else {
        result[0] += 0.6579340457313572;
        result[1] += 0;
        result[2] += 0.005285533724003218;
        result[3] += 0.33597610019533497;
        result[4] += 0;
        result[5] += 0.00011490290704354821;
        result[6] += 0.0006894174422612893;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.985;
        result[1] += 0;
        result[2] += 0.015;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9993793156955544;
        result[1] += 0;
        result[2] += 0.0005818915354177982;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.879276902785321e-05;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0;
        result[1] += 0.0023228803716608595;
        result[2] += 0;
        result[3] += 0.21951219512195122;
        result[4] += 0.775842044134727;
        result[5] += 0.0023228803716608595;
        result[6] += 0;
      } else {
        result[0] += 0.5530881332408051;
        result[1] += 0.0009715475364330328;
        result[2] += 0.0076335877862595426;
        result[3] += 0.4320610687022901;
        result[4] += 0.0052047189451769615;
        result[5] += 0.0004163775156141569;
        result[6] += 0.0006245662734212353;
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
        result[0] += 0.009554140127388535;
        result[1] += 0.012738853503184714;
        result[2] += 0;
        result[3] += 0.9777070063694268;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        result[0] += 0.18588362068965517;
        result[1] += 0.009159482758620689;
        result[2] += 0;
        result[3] += 0.8049568965517241;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.48698884758364314;
        result[1] += 0;
        result[2] += 0.031598513011152414;
        result[3] += 0.48141263940520446;
        result[4] += 0;
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
        result[0] += 0.9994295493439818;
        result[1] += 0;
        result[2] += 0.0005324206122837041;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.80300437345503e-05;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.3735645652683384;
        result[1] += 0.002226388563393485;
        result[2] += 0.006796344035622217;
        result[3] += 0.5193344269978908;
        result[4] += 0.09749238340754629;
        result[5] += 0.00046871338176704945;
        result[6] += 0.00011717834544176236;
      } else {
        result[0] += 0.9689530685920578;
        result[1] += 0;
        result[2] += 0.005776173285198556;
        result[3] += 0.02262334536702768;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.002647412755716005;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
        result[0] += 0.1253822629969419;
        result[1] += 0;
        result[2] += 0.0044172612979952435;
        result[3] += 0.7787971457696229;
        result[4] += 0.08868501529051989;
        result[5] += 0.00271831464492015;
        result[6] += 0;
      } else {
        result[0] += 0.9130729958722572;
        result[1] += 0.00043449923962633063;
        result[2] += 0.002987182272431023;
        result[3] += 0.08317944818596568;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.000325874429719748;
      }
    } else {
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
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
        result[0] += 0;
        result[1] += 0.0088339222614841;
        result[2] += 0.0017667844522968198;
        result[3] += 0.9893992932862191;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9528619528619529;
        result[1] += 0;
        result[2] += 0.04713804713804714;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.6722689075630253;
        result[4] += 0.3277310924369748;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0019749835418038184;
        result[1] += 0.007899934167215274;
        result[2] += 0;
        result[3] += 0.065174456879526;
        result[4] += 0.9249506254114549;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9994327850255247;
        result[5] += 0.0005672149744753262;
        result[6] += 0;
      } else {
        result[0] += 0.1919342793129201;
        result[1] += 0.003236245954692557;
        result[2] += 0.0019915359721184964;
        result[3] += 0.8020911127707244;
        result[4] += 0;
        result[5] += 0.0007468259895444362;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
        result[0] += 0.9962449451184286;
        result[1] += 0.0003971692663200462;
        result[2] += 0.002419121894858463;
        result[3] += 0.0007943385326400924;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00014442518775274407;
      } else {
        result[0] += 0.3246753246753247;
        result[1] += 0.010822510822510822;
        result[2] += 0;
        result[3] += 0.6645021645021645;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
        result[0] += 0.45678033306899285;
        result[1] += 0;
        result[2] += 0.007930214115781126;
        result[3] += 0.029341792228390166;
        result[4] += 0.5059476605868358;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.020948860135551448;
        result[1] += 0;
        result[2] += 0.005237215033887862;
        result[3] += 0.9719654959950709;
        result[4] += 0.0009242144177449168;
        result[5] += 0.0009242144177449168;
        result[6] += 0;
      }
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
        result[0] += 0.9864729458917836;
        result[1] += 0;
        result[2] += 0.011022044088176353;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00250501002004008;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)22.5) ) ) {
        result[0] += 0.03985507246376811;
        result[1] += 0;
        result[2] += 0.036231884057971016;
        result[3] += 0.31521739130434784;
        result[4] += 0.6086956521739131;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9682052712313485;
        result[1] += 0;
        result[2] += 0.0011156045181982988;
        result[3] += 0.030679124250453216;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        result[0] += 0.7530395136778115;
        result[1] += 0;
        result[2] += 0.004559270516717325;
        result[3] += 0.24069148936170212;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.001709726443768997;
      } else {
        result[0] += 0.122397155916709;
        result[1] += 0.0025393600812595226;
        result[2] += 0.0030472320975114273;
        result[3] += 0.6216353478923311;
        result[4] += 0.25038090401218893;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.34744094488188976;
        result[1] += 0.0054133858267716535;
        result[2] += 0.014271653543307087;
        result[3] += 0.6328740157480315;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9990634124841606;
        result[1] += 0;
        result[2] += 0.0007162139827006776;
        result[3] += 0;
        result[4] += 0.00016528014985400254;
        result[5] += 0;
        result[6] += 5.509338328466751e-05;
      } else {
        result[0] += 0.5665352725295637;
        result[1] += 0.0027184993883376377;
        result[2] += 0.006252548593176566;
        result[3] += 0.3474242218295501;
        result[4] += 0.07571020796520321;
        result[5] += 0.0005436998776675275;
        result[6] += 0.0008155498165012913;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
        result[0] += 0.9988150990238673;
        result[1] += 0;
        result[2] += 0.001184900976132709;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9997662732265981;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002337267734018932;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        result[0] += 0.021079691516709513;
        result[1] += 0.0033419023136246786;
        result[2] += 0.014652956298200515;
        result[3] += 0.7097686375321337;
        result[4] += 0.24910025706940875;
        result[5] += 0.002056555269922879;
        result[6] += 0;
      } else {
        result[0] += 0.7451113921587703;
        result[1] += 0;
        result[2] += 0.0036968576709796672;
        result[3] += 0.25021889288841326;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009728572818367545;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
        result[0] += 0.1955403087478559;
        result[1] += 0.00686106346483705;
        result[2] += 0;
        result[3] += 0.7958833619210978;
        result[4] += 0.0017152658662092624;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.09267241379310345;
        result[1] += 0;
        result[2] += 0.015086206896551725;
        result[3] += 0.23599137931034483;
        result[4] += 0.65625;
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
        result[0] += 0.026785714285714284;
        result[1] += 0.0625;
        result[2] += 0;
        result[3] += 0.9107142857142857;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.41254125412541254;
        result[1] += 0.003094059405940594;
        result[2] += 0.0028877887788778876;
        result[3] += 0.5290841584158416;
        result[4] += 0.052392739273927395;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.16180517336268574;
        result[1] += 0;
        result[2] += 0.01651073197578426;
        result[3] += 0.026967528893780957;
        result[4] += 0.7947165657677491;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)51.5) ) ) {
        result[0] += 0.9835579733679767;
        result[1] += 0.0006495615459564795;
        result[2] += 0.0008931471256901593;
        result[3] += 0.014655732380643067;
        result[4] += 4.0597596622279966e-05;
        result[5] += 0.00012179278986683989;
        result[6] += 8.119519324455993e-05;
      } else {
        result[0] += 0.7738947368421053;
        result[1] += 0;
        result[2] += 0.0029473684210526317;
        result[3] += 0.22147368421052632;
        result[4] += 0;
        result[5] += 0.0004210526315789474;
        result[6] += 0.0012631578947368421;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)49.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.012201321809862735;
        result[3] += 0.813421453990849;
        result[4] += 0.1741230299949161;
        result[5] += 0.0002541942043721403;
        result[6] += 0;
      } else {
        result[0] += 0.9883198562443846;
        result[1] += 0;
        result[2] += 0.008086253369272238;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0035938903863432167;
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
        result[0] += 0.9978419206905854;
        result[1] += 0;
        result[2] += 0.0018883193957377933;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002697599136768276;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.7427826590711597;
        result[1] += 0.0015448488944675102;
        result[2] += 0.007338032248720673;
        result[3] += 0.22255479385922566;
        result[4] += 0.023848604808342187;
        result[5] += 0.00038621222361687755;
        result[6] += 0.0015448488944675102;
      } else {
        result[0] += 0;
        result[1] += 0.0005296610169491525;
        result[2] += 0.007415254237288136;
        result[3] += 0.8196504237288136;
        result[4] += 0.17134533898305085;
        result[5] += 0.001059322033898305;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        result[0] += 0.12626262626262627;
        result[1] += 0.0018365472910927456;
        result[2] += 0.005509641873278237;
        result[3] += 0.549127640036731;
        result[4] += 0.3172635445362718;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.004439511653718091;
        result[1] += 0.009988901220865706;
        result[2] += 0;
        result[3] += 0.11320754716981132;
        result[4] += 0.8723640399556049;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.9847560975609756;
        result[1] += 0;
        result[2] += 0.01524390243902439;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9995708768416536;
        result[1] += 0;
        result[2] += 0.00042912315834644544;
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        result[0] += 0.8406005758946935;
        result[1] += 0.003290826820238585;
        result[2] += 0.002879473467708762;
        result[3] += 0.15220074043603454;
        result[4] += 0;
        result[5] += 0.00020567667626491157;
        result[6] += 0.0008227067050596463;
      } else {
        result[0] += 0.16908797417271992;
        result[1] += 0.0008071025020177562;
        result[2] += 0.004842615012106538;
        result[3] += 0.7933817594834544;
        result[4] += 0.031073446327683617;
        result[5] += 0.0008071025020177562;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += 0.0023715415019762848;
        result[1] += 0.0023715415019762848;
        result[2] += 0.010276679841897233;
        result[3] += 0.614703557312253;
        result[4] += 0.369802371541502;
        result[5] += 0.0004743083003952569;
        result[6] += 0;
      } else {
        result[0] += 0.9883951316161902;
        result[1] += 0;
        result[2] += 0.008208321539767903;
        result[3] += 0.0019813189923577695;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.001415227851684121;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.05392156862745098;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8333333333333334;
        result[4] += 0.11274509803921569;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.32135565536953864;
        result[1] += 0.004083299305839119;
        result[2] += 0.008983258472846062;
        result[3] += 0.5786035116374031;
        result[4] += 0.08697427521437323;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)73) ) ) {
        result[0] += 0.3434343434343434;
        result[1] += 0;
        result[2] += 0.037037037037037035;
        result[3] += 0.6195286195286195;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.03289924605894448;
        result[4] += 0.9671007539410555;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0.18624641833810887;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.1728748806112703;
        result[4] += 0.6408787010506208;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0006788866259334691;
        result[2] += 0.014256619144602852;
        result[3] += 0.8723693143245078;
        result[4] += 0.11065852002715547;
        result[5] += 0.002036659877800407;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.9919674375045026;
        result[1] += 0.0006483682731791658;
        result[2] += 0.0019451048195374973;
        result[3] += 0.005222966645054391;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002161227577263886;
      } else {
        result[0] += 0.6482277745496804;
        result[1] += 0;
        result[2] += 0.004299825682742592;
        result[3] += 0.3467751307379431;
        result[4] += 0;
        result[5] += 0.00023242300987797793;
        result[6] += 0.00046484601975595586;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.16336913510457884;
        result[1] += 0.00395703787450537;
        result[2] += 0;
        result[3] += 0.789711701526286;
        result[4] += 0.0423968343697004;
        result[5] += 0.0005652911249293386;
        result[6] += 0;
      } else {
        result[0] += 0.059748427672955975;
        result[1] += 0;
        result[2] += 0.0220125786163522;
        result[3] += 0;
        result[4] += 0.9150943396226415;
        result[5] += 0.0031446540880503146;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        result[0] += 0.9960556590336365;
        result[1] += 0;
        result[2] += 0.0021913005368686313;
        result[3] += 0.0017530404294949053;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5576540755467196;
        result[1] += 0;
        result[2] += 0.006958250497017893;
        result[3] += 0.4330682571239231;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0023194168323392977;
      }
    }
  } else {
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
        result[0] += 0.36367902393242607;
        result[1] += 0.004692632566870014;
        result[2] += 0.011731581417175035;
        result[3] += 0.6198967620835288;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        result[0] += 0.09213180901143242;
        result[1] += 0.0006724949562878278;
        result[2] += 0.008069939475453935;
        result[3] += 0.4949562878278413;
        result[4] += 0.4034969737726967;
        result[5] += 0.0006724949562878278;
        result[6] += 0;
      } else {
        result[0] += 0.9238606121091151;
        result[1] += 0.000914836992681304;
        result[2] += 0.001580172987358616;
        result[3] += 0.07343646041250831;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00020791749833666;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
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
        result[0] += 0.9985569985569985;
        result[1] += 0;
        result[2] += 0.0011724386724386725;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00027056277056277056;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.7437262357414449;
        result[1] += 0.0009505703422053232;
        result[2] += 0.006844106463878327;
        result[3] += 0.22195817490494296;
        result[4] += 0.025570342205323195;
        result[5] += 0.0005703422053231939;
        result[6] += 0.00038022813688212925;
      } else {
        result[0] += 0;
        result[1] += 0.0010834236186348862;
        result[2] += 0.005958829902491874;
        result[3] += 0.8120260021668473;
        result[4] += 0.17984832069339113;
        result[5] += 0.0010834236186348862;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)115.5) ) ) {
        result[0] += 0.15798462852263023;
        result[1] += 0.005123825789923143;
        result[2] += 0;
        result[3] += 0.8368915456874466;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.003048780487804878;
        result[1] += 0.01524390243902439;
        result[2] += 0;
        result[3] += 0.17682926829268292;
        result[4] += 0.8048780487804879;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.05711610486891386;
        result[4] += 0.9428838951310862;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.15306122448979592;
        result[1] += 0;
        result[2] += 0.017006802721088437;
        result[3] += 0.3826530612244898;
        result[4] += 0.44727891156462585;
        result[5] += 0;
        result[6] += 0;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)33.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9992943192701245;
        result[1] += 0;
        result[2] += 0.0007056807298754978;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        result[0] += 0.748193815624699;
        result[1] += 0.0011559580001926596;
        result[2] += 0.005394470667565745;
        result[3] += 0.21645313553607554;
        result[4] += 0.026683363837780562;
        result[5] += 0.0008669685001444948;
        result[6] += 0.001252287833542048;
      } else {
        result[0] += 0.08944139489828867;
        result[1] += 0.003551824346141427;
        result[2] += 0.004197610590894414;
        result[3] += 0.4045850823377462;
        result[4] += 0.4982240878269293;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.998533724340176;
        result[5] += 0.001466275659824047;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0009950248756218905;
        result[2] += 0.007960199004975124;
        result[3] += 0.991044776119403;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.16208431526577638;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8373919874312648;
        result[4] += 0;
        result[5] += 0.0005236973029588898;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9995652173913043;
        result[5] += 0.0004347826086956522;
        result[6] += 0;
      } else {
        result[0] += 0.7185185185185186;
        result[1] += 0.05925925925925926;
        result[2] += 0.2;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.022222222222222223;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
        result[0] += 0.9980132450331126;
        result[1] += 0;
        result[2] += 0.001986754966887417;
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
        result[0] += 0.5275722462655311;
        result[1] += 0.002931732514309646;
        result[2] += 0.007957559681697611;
        result[3] += 0.4605612173670249;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009772441714365487;
      } else {
        result[0] += 0.9665497076023393;
        result[1] += 0;
        result[2] += 0.006783625730994153;
        result[3] += 0.025497076023391817;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.001169590643274854;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
        result[0] += 0.1203141735094609;
        result[1] += 0;
        result[2] += 0.002856122813280971;
        result[3] += 0.7879328811138879;
        result[4] += 0.0885398072117101;
        result[5] += 0.0003570153516601214;
        result[6] += 0;
      } else {
        result[0] += 0.9913071133255592;
        result[1] += 0.0006714018163185979;
        result[2] += 0.0018021838227499204;
        result[3] += 0.0062193010353722745;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        result[0] += 0.392054947094858;
        result[1] += 0;
        result[2] += 0.005383330239465379;
        result[3] += 0.48932615555968073;
        result[4] += 0.11323556710599592;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9018715225088518;
        result[1] += 0;
        result[2] += 0.0048052604957005566;
        result[3] += 0.08801213960546282;
        result[4] += 0.002276176024279211;
        result[5] += 0.0005058168942842691;
        result[6] += 0.0025290844714213456;
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
        result[0] += 0;
        result[1] += 0.016908212560386472;
        result[2] += 0.0008051529790660225;
        result[3] += 0.9822866344605475;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9717868338557993;
        result[1] += 0;
        result[2] += 0.02821316614420063;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        result[0] += 0.9838694328130948;
        result[1] += 9.516558812333461e-05;
        result[2] += 0.000951655881233346;
        result[3] += 0.014845831747240197;
        result[4] += 0.0001427483821850019;
        result[5] += 4.7582794061667303e-05;
        result[6] += 4.7582794061667303e-05;
      } else {
        result[0] += 0.0015220700152207;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9984779299847792;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        result[0] += 0.7891440501043843;
        result[1] += 0.0006140243153628885;
        result[2] += 0.0033157313029595977;
        result[3] += 0.20594375537271278;
        result[4] += 0;
        result[5] += 6.140243153628885e-05;
        result[6] += 0.0009210364730443326;
      } else {
        result[0] += 0.1599839615076183;
        result[1] += 0;
        result[2] += 0.020850040096230954;
        result[3] += 0.7032878909382518;
        result[4] += 0.11507618283881316;
        result[5] += 0.0008019246190858059;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
        result[0] += 0.14551724137931035;
        result[1] += 0.008275862068965517;
        result[2] += 0.00896551724137931;
        result[3] += 0.8372413793103448;
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
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.990909090909091;
        result[1] += 0;
        result[2] += 0.00909090909090909;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9995360884524684;
        result[1] += 0;
        result[2] += 0.0004252522519039703;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.8659295627633664e-05;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.7334789213824534;
        result[1] += 0.0012343334599316366;
        result[2] += 0.007216103304215722;
        result[3] += 0.22873148499810098;
        result[4] += 0.027914925939992397;
        result[5] += 0.00018989745537409793;
        result[6] += 0.0012343334599316366;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.007736943907156673;
        result[3] += 0.8098922354241503;
        result[4] += 0.1820945012434374;
        result[5] += 0.00027631942525559546;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += 0.19831730769230768;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.5697115384615384;
        result[4] += 0.23197115384615385;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.09473684210526316;
        result[1] += 0.006477732793522267;
        result[2] += 0.012145748987854251;
        result[3] += 0.5117408906882591;
        result[4] += 0.3748987854251012;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
        result[0] += 0.007352941176470588;
        result[1] += 0.01911764705882353;
        result[2] += 0;
        result[3] += 0.030882352941176472;
        result[4] += 0.9426470588235294;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.2271186440677966;
        result[4] += 0.7728813559322034;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9963031423290203;
        result[5] += 0.0036968576709796672;
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
        result[1] += 0.0029895366218236174;
        result[2] += 0.010762331838565023;
        result[3] += 0.9847533632286996;
        result[4] += 0;
        result[5] += 0.0014947683109118087;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += 0.9974429681624467;
        result[1] += 0;
        result[2] += 0.000501378791677112;
        result[3] += 0.0020556530458761594;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.29411764705882354;
        result[1] += 0.0392156862745098;
        result[2] += 0;
        result[3] += 0.6666666666666666;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.552764505119454;
        result[1] += 0.0017747440273037543;
        result[2] += 0.006416382252559727;
        result[3] += 0.4383617747440273;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006825938566552901;
      } else {
        result[0] += 0.985724630185166;
        result[1] += 0;
        result[2] += 0.0031033412640943414;
        result[3] += 0.010861694424330196;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00031033412640943414;
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
        result[0] += 0.9962616822429906;
        result[1] += 0;
        result[2] += 0.003738317757009346;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9997520866044128;
        result[1] += 0;
        result[2] += 0.00024791339558714154;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        result[0] += 0.01294777729823047;
        result[1] += 0.0021579628830384117;
        result[2] += 0.011652999568407424;
        result[3] += 0.6961588260681916;
        result[4] += 0.2762192490289167;
        result[5] += 0.0008631851532153647;
        result[6] += 0;
      } else {
        result[0] += 0.7386018237082067;
        result[1] += 0;
        result[2] += 0.005143792377834931;
        result[3] += 0.2550853401917232;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0011690437222352116;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
        result[0] += 0.5974614687216682;
        result[1] += 0.005439709882139619;
        result[2] += 0.003626473254759746;
        result[3] += 0.3798730734360834;
        result[4] += 0.012919310970081596;
        result[5] += 0.00045330915684496827;
        result[6] += 0.00022665457842248413;
      } else {
        result[0] += 0.3574564969913807;
        result[1] += 0.0006505122784192552;
        result[2] += 0.004553585948934786;
        result[3] += 0.34981297771995445;
        result[4] += 0.28703854285249636;
        result[5] += 0.0001626280696048138;
        result[6] += 0.0003252561392096276;
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
        result[0] += 0.9967120713950212;
        result[1] += 0;
        result[2] += 0.0032879286049788633;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9997108393919365;
        result[1] += 0;
        result[2] += 0.0002891606080634501;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        result[0] += 0.022246696035242295;
        result[1] += 0.0039647577092511025;
        result[2] += 0.011674008810572688;
        result[3] += 0.7997797356828195;
        result[4] += 0.16123348017621147;
        result[5] += 0.001101321585903084;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.006458022851465474;
        result[2] += 0;
        result[3] += 0.1425732737208147;
        result[4] += 0.8509687034277198;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.5943635212159595;
        result[1] += 0;
        result[2] += 0.0037998733375554147;
        result[3] += 0.4012032932235592;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006333122229259025;
      } else {
        result[0] += 0.9678546470999302;
        result[1] += 0;
        result[2] += 0.006755182855811787;
        result[3] += 0.023992546005124626;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0013976240391334732;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
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
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9371479395197154;
        result[4] += 0.06166617254669434;
        result[5] += 0.0011858879335902757;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
        result[0] += 0;
        result[1] += 0.0033579583613163196;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9966420416386836;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.13114754098360656;
        result[1] += 0;
        result[2] += 0.01873536299765808;
        result[3] += 0;
        result[4] += 0.84192037470726;
        result[5] += 0.00819672131147541;
        result[6] += 0;
      }
    }
  } else {
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
        result[0] += 0.999214013024927;
        result[1] += 0;
        result[2] += 0.0007298450482820571;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5.614192679092747e-05;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        result[0] += 0.94026226323458;
        result[1] += 0.004694835680751175;
        result[2] += 0.006799417192812045;
        result[3] += 0.04727213857859803;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009713453132588636;
      } else {
        result[0] += 0.4133161195130948;
        result[1] += 0;
        result[2] += 0.00866838804869052;
        result[3] += 0.5772777572851346;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0007377351530800443;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
        result[0] += 0.3292035398230089;
        result[1] += 0.0017699115044247787;
        result[2] += 0.007787610619469027;
        result[3] += 0.6598230088495575;
        result[4] += 0.001415929203539823;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.011752136752136752;
        result[3] += 0.19337606837606838;
        result[4] += 0.7948717948717948;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
        result[0] += 0.002844950213371266;
        result[1] += 0.01422475106685633;
        result[2] += 0;
        result[3] += 0.034139402560455195;
        result[4] += 0.9487908961593172;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.24528301886792453;
        result[4] += 0.7547169811320755;
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
        result[0] += 0.999582130375323;
        result[1] += 0;
        result[2] += 0.00041786962467710076;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
        result[0] += 0.6419372900335947;
        result[1] += 0.0011198208286674132;
        result[2] += 0.003826054497946995;
        result[3] += 0.3248413587159388;
        result[4] += 0.02734229189996267;
        result[5] += 9.33184023889511e-05;
        result[6] += 0.0008398656215005599;
      } else {
        result[0] += 0.014311270125223614;
        result[1] += 0;
        result[2] += 0.01967799642218247;
        result[3] += 0.6505664877757901;
        result[4] += 0.3076923076923077;
        result[5] += 0.007751937984496124;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)88.5) ) ) {
        result[0] += 0.4456647398843931;
        result[1] += 0;
        result[2] += 0.016184971098265895;
        result[3] += 0.5381502890173411;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.12527798369162343;
        result[1] += 0.014825796886582653;
        result[2] += 0;
        result[3] += 0.859896219421794;
        result[4] += 0;
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
        result[4] += 0.99875;
        result[5] += 0.00125;
        result[6] += 0;
      } else {
        result[0] += 0.11233885819521179;
        result[1] += 0;
        result[2] += 0.014732965009208104;
        result[3] += 0.8710865561694291;
        result[4] += 0;
        result[5] += 0.001841620626151013;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.9931221719457014;
        result[1] += 0.00047058823529411766;
        result[2] += 0.0017737556561085973;
        result[3] += 0.004597285067873303;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.6199095022624436e-05;
      } else {
        result[0] += 0.6590831142105865;
        result[1] += 0;
        result[2] += 0.0053732708357151025;
        result[3] += 0.33394306619412367;
        result[4] += 0;
        result[5] += 0.0005716245569909683;
        result[6] += 0.001028924202583743;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        result[0] += 0.4653198653198653;
        result[1] += 0;
        result[2] += 0.009427609427609427;
        result[3] += 0.5245791245791246;
        result[4] += 0.0006734006734006734;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.16179952644041043;
        result[1] += 0.0023677979479084454;
        result[2] += 0.003946329913180742;
        result[3] += 0.8318863456985004;
        result[4] += 0;
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
        result[0] += 0.0033222591362126247;
        result[1] += 0.009966777408637873;
        result[2] += 0;
        result[3] += 0.21428571428571427;
        result[4] += 0.7724252491694352;
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
        result[0] += 0.12313209802749552;
        result[1] += 0.001195457262402869;
        result[2] += 0.010759115361625823;
        result[3] += 0.8625224148236701;
        result[4] += 0;
        result[5] += 0.002390914524805738;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.9928947558248575;
        result[1] += 0.0007213445863088798;
        result[2] += 0.0016590925485104235;
        result[3] += 0.004508403664430499;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00021640337589266391;
      } else {
        result[0] += 0.6635016211208893;
        result[1] += 0;
        result[2] += 0.0033580361278369615;
        result[3] += 0.3324455766558592;
        result[4] += 0;
        result[5] += 0.0001157943492357573;
        result[6] += 0.0005789717461787865;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        result[0] += 0;
        result[1] += 0.0029988004798080768;
        result[2] += 0.004598160735705718;
        result[3] += 0.647141143542583;
        result[4] += 0.3442622950819672;
        result[5] += 0.0009996001599360256;
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
        result[0] += 0.9983308605341247;
        result[1] += 0;
        result[2] += 0.0015764094955489614;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9.27299703264095e-05;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        result[0] += 0.9451379763469121;
        result[1] += 0.00328515111695138;
        result[2] += 0.006241787122207622;
        result[3] += 0.044842312746386344;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.000492772667542707;
      } else {
        result[0] += 0.41312453392990306;
        result[1] += 0;
        result[2] += 0.009134973900074572;
        result[3] += 0.5766219239373602;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0011185682326621924;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
        result[0] += 0.9748660898228266;
        result[1] += 0.0013538171758196481;
        result[2] += 0.0017069868738595563;
        result[3] += 0.02189652127847431;
        result[4] += 0;
        result[5] += 5.88616163399847e-05;
        result[6] += 0.0001177232326799694;
      } else {
        result[0] += 0.2562132851333032;
        result[1] += 0.0024853140533212833;
        result[2] += 0.0024853140533212833;
        result[3] += 0.6782647989154993;
        result[4] += 0.06009941256213285;
        result[5] += 0.00045187528242205153;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
        result[0] += 0.8679614958684726;
        result[1] += 0;
        result[2] += 0.0017037226339551921;
        result[3] += 0.0034074452679103842;
        result[4] += 0.12692733622966182;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9385665529010239;
        result[1] += 0;
        result[2] += 0.010238907849829351;
        result[3] += 0.051194539249146756;
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
        result[3] += 0.9971181556195966;
        result[4] += 0.0022414345180915792;
        result[5] += 0.0006404098623118797;
        result[6] += 0;
      } else {
        result[0] += 0.45073700543056633;
        result[1] += 0;
        result[2] += 0.021722265321955005;
        result[3] += 0;
        result[4] += 0.5275407292474786;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-61) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9946534653465346;
        result[1] += 0;
        result[2] += 0.002376237623762376;
        result[3] += 0.0015841584158415843;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.001386138613861386;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        result[0] += 0.09632034632034632;
        result[1] += 0.0016233766233766235;
        result[2] += 0;
        result[3] += 0.8955627705627706;
        result[4] += 0.003246753246753247;
        result[5] += 0.003246753246753247;
        result[6] += 0;
      } else {
        result[0] += 0.9935349472020689;
        result[1] += 0.0003232526398965592;
        result[2] += 0.000933840959701171;
        result[3] += 0.005064291358379428;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00014366783995402633;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        result[0] += 0.3556034482758621;
        result[1] += 0.0025862068965517245;
        result[2] += 0.0228448275862069;
        result[3] += 0.5935344827586208;
        result[4] += 0.025431034482758623;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.004522613065326633;
        result[2] += 0;
        result[3] += 0.1492462311557789;
        result[4] += 0.8462311557788945;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        result[0] += 0.4229094076655052;
        result[1] += 0;
        result[2] += 0.006533101045296167;
        result[3] += 0.5705574912891986;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8691235530356721;
        result[1] += 0;
        result[2] += 0.003543586109142452;
        result[3] += 0.12426175289392866;
        result[4] += 0.001653673517599811;
        result[5] += 0.0007087172218284905;
        result[6] += 0.0007087172218284905;
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
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)5624.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-305.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9992759422278115;
        result[1] += 0;
        result[2] += 0.000685949468389162;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.810830379939789e-05;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)373) ) ) {
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
        result[0] += 0.7428325688073395;
        result[1] += 0.00095565749235474;
        result[2] += 0.006594036697247707;
        result[3] += 0.2198012232415902;
        result[4] += 0.02819189602446483;
        result[5] += 0.00019113149847094801;
        result[6] += 0.0014334862385321102;
      } else {
        result[0] += 0;
        result[1] += 0.0005412719891745603;
        result[2] += 0.008660351826792964;
        result[3] += 0.8035182679296347;
        result[4] += 0.186468200270636;
        result[5] += 0.0008119079837618403;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.14314247669773636;
        result[1] += 0.009320905459387484;
        result[2] += 0;
        result[3] += 0.6717709720372836;
        result[4] += 0.17576564580559254;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.06348208673790069;
        result[1] += 0;
        result[2] += 0.0069138906348208675;
        result[3] += 0.16656191074795726;
        result[4] += 0.7630421118793211;
        result[5] += 0;
        result[6] += 0;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)107) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0036055143160127253;
        result[3] += 0.6757158006362672;
        result[4] += 0.3189819724284199;
        result[5] += 0.001696712619300106;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.005605381165919282;
        result[2] += 0;
        result[3] += 0.014573991031390135;
        result[4] += 0.9798206278026906;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        result[0] += 0.9945743972974357;
        result[1] += 0.00010236986231253519;
        result[2] += 0.00040947944925014075;
        result[3] += 0.0048625684598454216;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5.1184931156267594e-05;
      } else {
        result[0] += 0.5485300040273862;
        result[1] += 0.0026849241508927367;
        result[2] += 0.0057725869244193845;
        result[3] += 0.4420727614444891;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009397234528124578;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
        result[0] += 0.9979026217228465;
        result[1] += 0;
        result[2] += 0.002097378277153558;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9675583380762665;
        result[1] += 0;
        result[2] += 0.004837791690381333;
        result[3] += 0.026180990324416623;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.001422879908935686;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        result[0] += 0.0012957563977972141;
        result[1] += 0;
        result[2] += 0.003239390994493035;
        result[3] += 0.971169420149012;
        result[4] += 0.022999676060900552;
        result[5] += 0.0012957563977972141;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.006914893617021276;
        result[2] += 0;
        result[3] += 0.0925531914893617;
        result[4] += 0.9005319148936171;
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
        result[1] += 0;
        result[2] += 0.02384500745156483;
        result[3] += 0;
        result[4] += 0.9761549925484352;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        result[0] += 0.9967281055731269;
        result[1] += 0.0005816701203330061;
        result[2] += 0.002435743628894463;
        result[3] += 0.00010906314756243865;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00014541753008325152;
      } else {
        result[0] += 0.010380622837370242;
        result[1] += 0.02422145328719723;
        result[2] += 0;
        result[3] += 0.9653979238754326;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        result[0] += 0.4484713156990725;
        result[1] += 0;
        result[2] += 0.0015458605290278255;
        result[3] += 0.5499828237718997;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9834851936218679;
        result[1] += 0;
        result[2] += 0.013097949886104784;
        result[3] += 0.0014236902050113896;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0019931662870159455;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
        result[0] += 0.333950046253469;
        result[1] += 0.0009250693802035153;
        result[2] += 0;
        result[3] += 0.6604995374653099;
        result[4] += 0.0018501387604070306;
        result[5] += 0.0027752081406105457;
        result[6] += 0;
      } else {
        result[0] += 0.9975482242653687;
        result[1] += 0.00043266630611141156;
        result[2] += 0.0009013881377321074;
        result[3] += 0.0009734991887506761;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00014422210203713718;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
        result[0] += 0.00375;
        result[1] += 0.01375;
        result[2] += 0;
        result[3] += 0.06875;
        result[4] += 0.91375;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.12962542565266744;
        result[1] += 0.000681044267877412;
        result[2] += 0.01452894438138479;
        result[3] += 0.6188422247446084;
        result[4] += 0.23564131668558455;
        result[5] += 0.000681044267877412;
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
        result[2] += 0.008826583592938734;
        result[3] += 0.8276220145379024;
        result[4] += 0.16251298026998962;
        result[5] += 0.0010384215991692627;
        result[6] += 0;
      } else {
        result[0] += 0.9880073800738007;
        result[1] += 0;
        result[2] += 0.009686346863468635;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0023062730627306273;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.91302959675617;
        result[1] += 0.0004789119121356279;
        result[2] += 0.0025861243255323905;
        result[3] += 0.07598735672551962;
        result[4] += 0.007662590594170046;
        result[5] += 0.00015963730404520927;
        result[6] += 9.578238242712557e-05;
      } else {
        result[0] += 0.6489550123981579;
        result[1] += 0;
        result[2] += 0.0051954185854292114;
        result[3] += 0.34443263667493207;
        result[4] += 0.000708466170740347;
        result[5] += 0;
        result[6] += 0.000708466170740347;
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
        result[0] += 0.549889135254989;
        result[1] += 0;
        result[2] += 0.03547671840354767;
        result[3] += 0.4146341463414634;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.001841620626151013;
        result[1] += 0.01289134438305709;
        result[2] += 0;
        result[3] += 0.9852670349907919;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
        result[0] += 0.1257861635220126;
        result[1] += 0.0006988120195667366;
        result[2] += 0.007686932215234103;
        result[3] += 0.7662473794549267;
        result[4] += 0.09713487071977639;
        result[5] += 0.0024458420684835783;
        result[6] += 0;
      } else {
        result[0] += 0.9137837544734845;
        result[1] += 0.00046090445721722154;
        result[2] += 0.0025756425550374144;
        result[3] += 0.08301702635289014;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00016267216137078408;
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
        result[0] += 0.13712910986367283;
        result[1] += 0.012830793905372895;
        result[2] += 0;
        result[3] += 0.8500400962309543;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
        result[0] += 0.01700404858299595;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.03076923076923077;
        result[4] += 0.9522267206477733;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.23278688524590163;
        result[1] += 0;
        result[2] += 0.03278688524590164;
        result[3] += 0.7344262295081967;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        result[0] += 0.1828540423223006;
        result[1] += 0.010309278350515464;
        result[2] += 0;
        result[3] += 0.806836679327184;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5275952693823917;
        result[1] += 0;
        result[2] += 0.017739816031537455;
        result[3] += 0.454664914586071;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
        result[0] += 0.08552631578947369;
        result[1] += 0;
        result[2] += 0.019736842105263157;
        result[3] += 0.7127192982456141;
        result[4] += 0.18092105263157895;
        result[5] += 0.0010964912280701754;
        result[6] += 0;
      } else {
        result[0] += 0.8904293756827157;
        result[1] += 0;
        result[2] += 0.0025207965717166624;
        result[3] += 0.10679774808839593;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00025207965717166626;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        result[0] += 0.09219858156028368;
        result[1] += 0;
        result[2] += 0.005802707930367505;
        result[3] += 0.5203094777562862;
        result[4] += 0.3784655061250806;
        result[5] += 0.003223726627981947;
        result[6] += 0;
      } else {
        result[0] += 0.9219113251411492;
        result[1] += 0.0006642311524410495;
        result[2] += 0.0016605778811026237;
        result[3] += 0.07555629359016938;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00020757223513782796;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
        result[0] += 0.2167129728574482;
        result[1] += 0.002564650566360334;
        result[2] += 0.0004274417610600556;
        result[3] += 0.722376576191494;
        result[4] += 0.05749091686257748;
        result[5] += 0.0004274417610600556;
        result[6] += 0;
      } else {
        result[0] += 0.9955504780229693;
        result[1] += 0.0014430882087667612;
        result[2] += 0.0025855330407071136;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00042090072755697196;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
        result[0] += 0.8661430622413647;
        result[1] += 0;
        result[2] += 0.002195760493201588;
        result[3] += 0.003209188413140782;
        result[4] += 0.1281986318723081;
        result[5] += 0.0002533569799847986;
        result[6] += 0;
      } else {
        result[0] += 0.9252873563218391;
        result[1] += 0;
        result[2] += 0.004597701149425287;
        result[3] += 0.07011494252873564;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)49) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.006591088847877669;
        result[3] += 0.8257316108621144;
        result[4] += 0.1671500131821777;
        result[5] += 0.0005272871078302136;
        result[6] += 0;
      } else {
        result[0] += 0.9891205802357208;
        result[1] += 0;
        result[2] += 0.009519492293744334;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0013599274705349048;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)70) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.999468610035679;
        result[1] += 0;
        result[2] += 0.0004554771122751082;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.591285204585137e-05;
      } else {
        result[0] += 0.6784688013136289;
        result[1] += 0.0016420361247947454;
        result[2] += 0.005747126436781609;
        result[3] += 0.31270525451559933;
        result[4] += 0;
        result[5] += 0.00010262725779967159;
        result[6] += 0.0013341543513957308;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)10751.5) ) ) {
        result[0] += 0.02040816326530612;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9795918367346939;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.998422712933754;
        result[5] += 0.0015772870662460567;
        result[6] += 0;
      } else {
        result[0] += 0.25455820476858343;
        result[1] += 0.0012272089761570827;
        result[2] += 0.010694249649368864;
        result[3] += 0.5755610098176718;
        result[4] += 0.1567321178120617;
        result[5] += 0.0012272089761570827;
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
        result[0] += 0.018867924528301886;
        result[1] += 0.1320754716981132;
        result[2] += 0;
        result[3] += 0.8490566037735849;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        result[0] += 0.9835281866805508;
        result[1] += 0.00014199839068490555;
        result[2] += 0.0013253183130591184;
        result[3] += 0.01495716381881005;
        result[4] += 4.733279689496851e-05;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.005979073243647235;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9940209267563528;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)41.5) ) ) {
        result[0] += 0.3471538040503558;
        result[1] += 0.0016420361247947454;
        result[2] += 0.010125889436234263;
        result[3] += 0.6011220580186097;
        result[4] += 0.03872468527640941;
        result[5] += 0.0005473453749315818;
        result[6] += 0.0006841817186644773;
      } else {
        result[0] += 0.9403353927625773;
        result[1] += 0;
        result[2] += 0.003706972639011474;
        result[3] += 0.055251544571932924;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.000706090026478376;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
        result[0] += 0.16921898928024504;
        result[1] += 0.005359877488514548;
        result[2] += 0.013016845329249618;
        result[3] += 0.8124042879019908;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
        result[0] += 0.017391304347826087;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.6173913043478261;
        result[4] += 0.3652173913043478;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0062932662051604785;
        result[2] += 0;
        result[3] += 0.0578980490874764;
        result[4] += 0.9358086847073631;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
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
        result[1] += 0.0005175983436853002;
        result[2] += 0.007505175983436853;
        result[3] += 0.802536231884058;
        result[4] += 0.18840579710144928;
        result[5] += 0.0010351966873706005;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.7004405286343612;
        result[4] += 0.29955947136563876;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0023823704586063135;
        result[2] += 0;
        result[3] += 0.009529481834425254;
        result[4] += 0.9880881477069684;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.9939814814814815;
        result[1] += 0;
        result[2] += 0.0060185185185185185;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9997001884529724;
        result[1] += 0;
        result[2] += 0.00029981154702758266;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        result[0] += 0.9412436755345194;
        result[1] += 0.002937816223274033;
        result[2] += 0.00832381263260976;
        result[3] += 0.04651542353517219;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009792720744246776;
      } else {
        result[0] += 0.40791674409960976;
        result[1] += 0;
        result[2] += 0.008548596915071548;
        result[3] += 0.5831629808585764;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00037167812674224123;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        result[0] += 0.008287292817679558;
        result[1] += 0.0027624309392265192;
        result[2] += 0.016574585635359115;
        result[3] += 0.9723756906077348;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9892241379310345;
        result[1] += 0;
        result[2] += 0.010775862068965518;
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
        result[0] += 0;
        result[1] += 0.02734375;
        result[2] += 0;
        result[3] += 0.97265625;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9970760233918129;
        result[5] += 0.0029239766081871343;
        result[6] += 0;
      } else {
        result[0] += 0.9846438219820844;
        result[1] += 4.739561116640599e-05;
        result[2] += 0.0011374946679937438;
        result[3] += 0.014123892127588985;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4.739561116640599e-05;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
        result[0] += 0.7927654461519004;
        result[1] += 0.0007588692847656991;
        result[2] += 0.0035413899955732625;
        result[3] += 0.20192246885473977;
        result[4] += 0;
        result[5] += 0.0001264782141276165;
        result[6] += 0.0008853474988933156;
      } else {
        result[0] += 0.014683153013910356;
        result[1] += 0;
        result[2] += 0.017774343122102014;
        result[3] += 0.8415765069551778;
        result[4] += 0.12210200927357034;
        result[5] += 0.0038639876352395677;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
        result[0] += 0;
        result[1] += 0.03296703296703297;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.967032967032967;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0017699115044247787;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9982300884955753;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.11371127224785761;
        result[1] += 0.0003295978905735003;
        result[2] += 0;
        result[3] += 0.8833223467369808;
        result[4] += 0.001977587343441002;
        result[5] += 0.0006591957811470006;
        result[6] += 0;
      } else {
        result[0] += 0.0005807200929152149;
        result[1] += 0;
        result[2] += 0.012775842044134728;
        result[3] += 0;
        result[4] += 0.9854819976771196;
        result[5] += 0.0011614401858304297;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        result[0] += 0.969825840421223;
        result[1] += 0;
        result[2] += 0.0010125556905629808;
        result[3] += 0.029060348319157547;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00010125556905629807;
      } else {
        result[0] += 0.5320230430362589;
        result[1] += 0;
        result[2] += 0.009827177228058285;
        result[3] += 0.4571331751948492;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0010166045408336157;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9991091810032849;
        result[1] += 0;
        result[2] += 0.0007794666221257169;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00011135237458938811;
      } else {
        result[0] += 0.6795672076570954;
        result[1] += 0.0034678873630184497;
        result[2] += 0.007074490220557637;
        result[3] += 0.30905812179220427;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.000832292967124428;
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
        result[0] += 0.9993110311567022;
        result[1] += 0;
        result[2] += 0.0006506927964479829;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.8276046849881346e-05;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        result[0] += 0.022187004754358162;
        result[1] += 0.003169572107765452;
        result[2] += 0.016904384574749076;
        result[3] += 0.6986265187533016;
        result[4] += 0.25726360274696247;
        result[5] += 0.0018489170628631802;
        result[6] += 0;
      } else {
        result[0] += 0.7351537139583731;
        result[1] += 0;
        result[2] += 0.005060148940232958;
        result[3] += 0.2594042390681688;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0003818980332251289;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
        result[0] += 0.1895238095238095;
        result[1] += 0.007619047619047619;
        result[2] += 0;
        result[3] += 0.5152380952380953;
        result[4] += 0.2876190476190476;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.07407407407407407;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.32592592592592595;
        result[4] += 0.6;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        result[0] += 0.1355263157894737;
        result[1] += 0.003947368421052632;
        result[2] += 0.014473684210526316;
        result[3] += 0.8460526315789474;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0008583690987124463;
        result[2] += 0;
        result[3] += 0.04978540772532189;
        result[4] += 0.9493562231759657;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        result[0] += 0.9829789240416804;
        result[1] += 9.429958979678438e-05;
        result[2] += 0.0010844452826630204;
        result[3] += 0.015606582111367815;
        result[4] += 9.429958979678438e-05;
        result[5] += 9.429958979678438e-05;
        result[6] += 4.714979489839219e-05;
      } else {
        result[0] += 0.0014705882352941176;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9985294117647059;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        result[0] += 0.6483602801597173;
        result[1] += 0.0011782418014007986;
        result[2] += 0.0038620147934803955;
        result[3] += 0.3286640047129672;
        result[4] += 0.01728087975387838;
        result[5] += 0.00045820514498919946;
        result[6] += 0.00019637363356679976;
      } else {
        result[0] += 0.980816077953715;
        result[1] += 0;
        result[2] += 0.011875761266747869;
        result[3] += 0.0015225334957369061;
        result[4] += 0.0033495736906211937;
        result[5] += 0.0003045066991473812;
        result[6] += 0.002131546894031669;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.2024373730534868;
        result[1] += 0.006770480704129994;
        result[2] += 0.006093432633716994;
        result[3] += 0.7846987136086662;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += 0.0038022813688212928;
        result[1] += 0.045627376425855515;
        result[2] += 0;
        result[3] += 0.20152091254752852;
        result[4] += 0.7490494296577946;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.004373177842565598;
        result[2] += 0;
        result[3] += 0.03644314868804665;
        result[4] += 0.9591836734693877;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9984447900466563;
        result[5] += 0.0015552099533437014;
        result[6] += 0;
      } else {
        result[0] += 0.1395498392282958;
        result[1] += 0.0038585209003215433;
        result[2] += 0.0077170418006430866;
        result[3] += 0.8488745980707395;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        result[0] += 0.0006381620931716656;
        result[1] += 0.0025526483726866626;
        result[2] += 0.004467134652201659;
        result[3] += 0.5909380982769623;
        result[4] += 0.400765794511806;
        result[5] += 0.0006381620931716656;
        result[6] += 0;
      } else {
        result[0] += 0.5336179295624333;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.4663820704375667;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        result[0] += 0.4688;
        result[1] += 0.0128;
        result[2] += 0;
        result[3] += 0.5184;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8830694275274056;
        result[1] += 0.00038063337393422653;
        result[2] += 0.003311510353227771;
        result[3] += 0.11293392204628502;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0003045066991473812;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += 0.9483903934593766;
        result[1] += 0;
        result[2] += 0.0025549310168625446;
        result[3] += 0.04905467552376086;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.995105646412797;
        result[1] += 0;
        result[2] += 0.003461859854363137;
        result[3] += 0.0005968723886832995;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0008356213441566194;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.9946341463414634;
        result[1] += 0;
        result[2] += 0.004390243902439025;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.000975609756097561;
      } else {
        result[0] += 0.9995051342323394;
        result[1] += 0;
        result[2] += 0.0004948657676605221;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
        result[0] += 0.6148521082441787;
        result[1] += 0;
        result[2] += 0.0009439899307740718;
        result[3] += 0.37193203272498426;
        result[4] += 0.011642542479546885;
        result[5] += 0;
        result[6] += 0.0006293266205160479;
      } else {
        result[0] += 0.3453652902107999;
        result[1] += 0.0008663008951775917;
        result[2] += 0.01472711521801906;
        result[3] += 0.45856194051400523;
        result[4] += 0.17788045047646553;
        result[5] += 0.0008663008951775917;
        result[6] += 0.0017326017903551835;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
        result[0] += 0.5277992704764011;
        result[1] += 0.001989609815408423;
        result[2] += 0.007074168232563281;
        result[3] += 0.40930695258096605;
        result[4] += 0.052724660108323204;
        result[5] += 0.0003316016359014038;
        result[6] += 0.0007737371504366088;
      } else {
        result[0] += 0;
        result[1] += 0.0013245033112582781;
        result[2] += 0;
        result[3] += 0.1403973509933775;
        result[4] += 0.8582781456953642;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)1574.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.9967547519703291;
        result[1] += 0;
        result[2] += 0.0027816411682892906;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004636068613815484;
      } else {
        result[0] += 0.9998334027488547;
        result[1] += 0;
        result[2] += 0.0001665972511453561;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        result[0] += 0.013928038467915769;
        result[1] += 0.005969159343392472;
        result[2] += 0.013596418504393965;
        result[3] += 0.6604211573536727;
        result[4] += 0.3040955065494943;
        result[5] += 0.001989719781130824;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        result[0] += 0.5579811386657353;
        result[1] += 0;
        result[2] += 0.00209570380719525;
        result[3] += 0.43904994760740484;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0008732099196646874;
      } else {
        result[0] += 0.9652493867538839;
        result[1] += 0;
        result[2] += 0.011038430089942763;
        result[3] += 0.022281275551921505;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0014309076042518397;
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
        result[0] += 0.9952403617325083;
        result[1] += 0;
        result[2] += 0.0038077106139933364;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009519276534983341;
      } else {
        result[0] += 0.9997107677051483;
        result[1] += 0;
        result[2] += 0.00028923229485166516;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.7048574445617739;
        result[1] += 0.001759943681802182;
        result[2] += 0.008095740936290037;
        result[3] += 0.28379091869060186;
        result[4] += 8.79971840901091e-05;
        result[5] += 0.0004399859204505455;
        result[6] += 0.0009679690249912;
      } else {
        result[0] += 0;
        result[1] += 0.0005424464334147003;
        result[2] += 0.005153241117439653;
        result[3] += 0.811771087605099;
        result[4] += 0.18199077841063194;
        result[5] += 0.0005424464334147003;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        result[0] += 0.0012804097311139564;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.4494238156209987;
        result[4] += 0.5492957746478874;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0007336757153338225;
        result[1] += 0.008070432868672046;
        result[2] += 0;
        result[3] += 0.06236243580337491;
        result[4] += 0.9288334556126192;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9961240310077519;
        result[5] += 0.003875968992248062;
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
        result[0] += 0.0009107468123861566;
        result[1] += 0.0036429872495446266;
        result[2] += 0.0030358227079538553;
        result[3] += 0.9896782027929569;
        result[4] += 0;
        result[5] += 0.00273224043715847;
        result[6] += 0;
      } else {
        result[0] += 0.9874529485570891;
        result[1] += 0;
        result[2] += 0.012547051442910916;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91) ) ) {
        result[0] += 0.9964024855554344;
        result[1] += 0.0005450779461462989;
        result[2] += 0.002689051200988408;
        result[3] += 0.00014535411897234637;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00021803117845851957;
      } else {
        result[0] += 0.3605769230769231;
        result[1] += 0.009615384615384616;
        result[2] += 0;
        result[3] += 0.6298076923076923;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += 0.19573593629591574;
        result[1] += 0;
        result[2] += 0.0030824556896994607;
        result[3] += 0.8011816080143848;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9917750573833206;
        result[1] += 0;
        result[2] += 0.005547054322876817;
        result[3] += 0.0013389441469013007;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0013389441469013007;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
        result[0] += 0;
        result[1] += 0.005563282336578582;
        result[2] += 0.006026889197960131;
        result[3] += 0.8632359758924433;
        result[4] += 0.1251738525730181;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9990530303030303;
        result[1] += 0.000946969696969697;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)71) ) ) {
        result[0] += 0.47161572052401746;
        result[1] += 0;
        result[2] += 0.04585152838427948;
        result[3] += 0.48253275109170307;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.027188328912466843;
        result[4] += 0.9728116710875332;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        result[0] += 0.12597480503899222;
        result[1] += 0.001199760047990402;
        result[2] += 0.005998800239952011;
        result[3] += 0.8272345530893822;
        result[4] += 0.03599280143971206;
        result[5] += 0.0035992801439712063;
        result[6] += 0;
      } else {
        result[0] += 0.9931456638076387;
        result[1] += 0.00047650465508393815;
        result[2] += 0.0015028223737262663;
        result[3] += 0.004655083938127703;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00021992522542335605;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        result[0] += 0.4395331037122082;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.5604668962877918;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8210323203087314;
        result[1] += 0;
        result[2] += 0.007235890014471781;
        result[3] += 0.0012059816690786302;
        result[4] += 0.16931982633863968;
        result[5] += 0.00024119633381572604;
        result[6] += 0.0009647853352629041;
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
        result[0] += 0.20824053452115812;
        result[1] += 0.0066815144766146995;
        result[2] += 0;
        result[3] += 0.7850779510022272;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.506108202443281;
        result[1] += 0;
        result[2] += 0.02181500872600349;
        result[3] += 0.4720767888307155;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.10365488316357101;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8909526662672259;
        result[4] += 0.0029958058717795086;
        result[5] += 0.002396644697423607;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.030376670716889428;
        result[3] += 0;
        result[4] += 0.968408262454435;
        result[5] += 0.001215066828675577;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9992329817833173;
        result[1] += 0;
        result[2] += 0.0006903163950143816;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.670182166826462e-05;
      } else {
        result[0] += 0.6833543139343469;
        result[1] += 0.001646170233368839;
        result[2] += 0.005810012588360608;
        result[3] += 0.3081243342693909;
        result[4] += 0;
        result[5] += 9.683354313934346e-05;
        result[6] += 0.0009683354313934347;
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
        result[0] += 0.9923273657289002;
        result[1] += 0;
        result[2] += 0.0076726342710997444;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.999498785518757;
        result[1] += 0;
        result[2] += 0.000501214481243012;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        result[0] += 0.9163822525597269;
        result[1] += 0.0017064846416382253;
        result[2] += 0.0035348610433934666;
        result[3] += 0.07654802535348611;
        result[4] += 0;
        result[5] += 0.0003656752803510483;
        result[6] += 0.0014627011214041932;
      } else {
        result[0] += 0.10925787106446777;
        result[1] += 0.0020614692653673165;
        result[2] += 0.010494752623688156;
        result[3] += 0.5509745127436282;
        result[4] += 0.3266491754122939;
        result[5] += 0.0005622188905547226;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
        result[0] += 0;
        result[1] += 0.0006666666666666666;
        result[2] += 0.006333333333333333;
        result[3] += 0.993;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.009523809523809525;
        result[3] += 0;
        result[4] += 0.9873015873015873;
        result[5] += 0.0031746031746031746;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        result[0] += 0.9850956791574593;
        result[1] += 4.7016784992242234e-05;
        result[2] += 0.0007992853448681181;
        result[3] += 0.013775918002726975;
        result[4] += 0.00018806713996896894;
        result[5] += 4.7016784992242234e-05;
        result[6] += 4.7016784992242234e-05;
      } else {
        result[0] += 0.0014814814814814814;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9985185185185185;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
        result[0] += 0.7661981728742094;
        result[1] += 0.0006324666198172874;
        result[2] += 0.005270555165144062;
        result[3] += 0.20878425860857344;
        result[4] += 0.018271257905832748;
        result[5] += 7.02740688685875e-05;
        result[6] += 0.0007730147575544624;
      } else {
        result[0] += 0.5172735760971056;
        result[1] += 0;
        result[2] += 0.0056022408963585435;
        result[3] += 0.47689075630252103;
        result[4] += 0;
        result[5] += 0.00023342670401493932;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)11) ) ) {
        result[0] += 0.14109483423284502;
        result[1] += 0.004626060138781804;
        result[2] += 0.007710100231303007;
        result[3] += 0.8465690053970701;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.5765765765765766;
        result[4] += 0.42342342342342343;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.004521963824289405;
        result[2] += 0;
        result[3] += 0.05878552971576227;
        result[4] += 0.9366925064599483;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
        result[0] += 0;
        result[1] += 0.005667181865018032;
        result[2] += 0.0077279752704791345;
        result[3] += 0.8562596599690881;
        result[4] += 0.13034518289541475;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9976553341148886;
        result[1] += 0.0023446658851113715;
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
        result[3] += 0.04549950544015826;
        result[4] += 0.9545004945598418;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.16129032258064518;
        result[1] += 0;
        result[2] += 0.011730205278592377;
        result[3] += 0.2668621700879766;
        result[4] += 0.560117302052786;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        result[0] += 0.9848047337278106;
        result[1] += 0;
        result[2] += 0.0004260355029585799;
        result[3] += 0.014485207100591715;
        result[4] += 0.00028402366863905325;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.04043126684636118;
        result[1] += 0;
        result[2] += 0.016172506738544475;
        result[3] += 0;
        result[4] += 0.9433962264150944;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += 0.7154386489314004;
        result[1] += 0;
        result[2] += 0.008817814975340009;
        result[3] += 0.26931699297563894;
        result[4] += 0.005529816170975938;
        result[5] += 0.00014945449110745777;
        result[6] += 0.0007472724555372889;
      } else {
        result[0] += 0.7547584887613583;
        result[1] += 0.0008608321377331421;
        result[2] += 0.0032520325203252037;
        result[3] += 0.22821616451458634;
        result[4] += 0.011382113821138214;
        result[5] += 0.0008608321377331421;
        result[6] += 0.0006695361071257772;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9987577639751553;
        result[5] += 0.0012422360248447205;
        result[6] += 0;
      } else {
        result[0] += 0.184599429608504;
        result[1] += 0.0005185377236193933;
        result[2] += 0.008815141301529687;
        result[3] += 0.8050298159191082;
        result[4] += 0;
        result[5] += 0.0010370754472387865;
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
        result[1] += 0.12418300653594772;
        result[2] += 0;
        result[3] += 0.8758169934640523;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
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
        result[0] += 0.9991414466623739;
        result[1] += 0;
        result[2] += 0.0008048937540244687;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5.365958360163125e-05;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.9139568666890155;
        result[1] += 0.0023466309084813944;
        result[2] += 0.007151637054419489;
        result[3] += 0.07475695608447872;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0017879092636048722;
      } else {
        result[0] += 0;
        result[1] += 0.00035561877667140827;
        result[2] += 0.004267425320056899;
        result[3] += 0.9953769559032717;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
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
        result[0] += 0.42627737226277373;
        result[1] += 0;
        result[2] += 0.008759124087591242;
        result[3] += 0.564963503649635;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.12290909090909091;
        result[1] += 0.016727272727272726;
        result[2] += 0;
        result[3] += 0.8603636363636363;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        result[0] += 0.11197285506543868;
        result[1] += 0.0004847309743092584;
        result[2] += 0.013087736306349976;
        result[3] += 0.7634512845370819;
        result[4] += 0.10857973824527388;
        result[5] += 0.0024236548715462916;
        result[6] += 0;
      } else {
        result[0] += 0.9119524422650194;
        result[1] += 0.000493110155329699;
        result[2] += 0.002492945785277923;
        result[3] += 0.08456839163904338;
        result[4] += 0;
        result[5] += 0.00010958003451771089;
        result[6] += 0.0003835301208119881;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)9643) ) ) {
        result[0] += 0.0015313935681470138;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.998468606431853;
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0.29559748427672955;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.1501572327044025;
        result[4] += 0.5542452830188679;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0008628127696289905;
        result[2] += 0.010785159620362382;
        result[3] += 0.8615185504745471;
        result[4] += 0.12424503882657463;
        result[5] += 0.0025884383088869713;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.9910913140311804;
        result[1] += 0.00038887121292466504;
        result[2] += 0.0022978753491002934;
        result[3] += 0.006080531693003853;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0001414077137907873;
      } else {
        result[0] += 0.6621558562762483;
        result[1] += 0;
        result[2] += 0.005132991133924405;
        result[3] += 0.3317778814745684;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009332711152589828;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.15766164747564215;
        result[1] += 0.0070859167404783;
        result[2] += 0;
        result[3] += 0.8352524357838795;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.09404388714733543;
        result[1] += 0;
        result[2] += 0.009404388714733543;
        result[3] += 0.2330198537095089;
        result[4] += 0.6635318704284221;
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
        result[0] += 0.02912621359223301;
        result[1] += 0.10679611650485436;
        result[2] += 0;
        result[3] += 0.8640776699029126;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
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
        result[0] += 0.999392535783439;
        result[1] += 0;
        result[2] += 0.0006074642165609933;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.7367307692307692;
        result[1] += 0.001153846153846154;
        result[2] += 0.00798076923076923;
        result[3] += 0.2275;
        result[4] += 0.025288461538461537;
        result[5] += 0.000673076923076923;
        result[6] += 0.000673076923076923;
      } else {
        result[0] += 0;
        result[1] += 0.0005439216752787598;
        result[2] += 0.009246668479738918;
        result[3] += 0.801740549360892;
        result[4] += 0.18792493880881153;
        result[5] += 0.0005439216752787598;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
        result[0] += 0.15440689198144467;
        result[1] += 0.00728959575878065;
        result[2] += 0.005301524188204109;
        result[3] += 0.8330019880715706;
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
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9989637305699481;
        result[5] += 0.0010362694300518134;
        result[6] += 0;
      } else {
        result[0] += 0.1371473354231975;
        result[1] += 0.0011755485893416929;
        result[2] += 0.01018808777429467;
        result[3] += 0.8491379310344828;
        result[4] += 0;
        result[5] += 0.0023510971786833857;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        result[0] += 0.9947964791129699;
        result[1] += 0.00019452414530953655;
        result[2] += 0.00048631036327384134;
        result[3] += 0.004522686378446725;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8064100202615584;
        result[1] += 0.0008595812611285075;
        result[2] += 0.005587278197335299;
        result[3] += 0.18646773500337696;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006753852766009702;
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
        result[0] += 0.5436893203883495;
        result[1] += 0;
        result[2] += 0.009708737864077669;
        result[3] += 0.44660194174757284;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.00273224043715847;
        result[1] += 0.012750455373406194;
        result[2] += 0;
        result[3] += 0.9845173041894353;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)9.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.15676392572944298;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8424403183023873;
        result[4] += 0;
        result[5] += 0.0007957559681697613;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.39473684210526316;
        result[1] += 0.09210526315789473;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.5131578947368421;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.028916702632714716;
        result[1] += 0;
        result[2] += 0.008631851532153647;
        result[3] += 0;
        result[4] += 0.9615882606819163;
        result[5] += 0.0008631851532153647;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.9801235794840774;
        result[1] += 0.0005617249276239037;
        result[2] += 0.0025061573693989547;
        result[3] += 0.016549280559996545;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00025925765890334013;
      } else {
        result[0] += 0.1626886145404664;
        result[1] += 0;
        result[2] += 0.005212620027434842;
        result[3] += 0.8320987654320988;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += 0.9411764705882354;
        result[1] += 0;
        result[2] += 0.005070993914807303;
        result[3] += 0.05375253549695741;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9952158832675517;
        result[1] += 0;
        result[2] += 0.0032292787944025836;
        result[3] += 0.0007176175098672408;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0008372204281784475;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        result[0] += 0.9561593280733012;
        result[1] += 0.0008271824891829983;
        result[2] += 0.0015907355561211507;
        result[3] += 0.040341053703232384;
        result[4] += 0.00038177653346907616;
        result[5] += 0.00019088826673453808;
        result[6] += 0.0005090353779587683;
      } else {
        result[0] += 0.44279238440616503;
        result[1] += 0.004351767905711695;
        result[2] += 0.004170444242973708;
        result[3] += 0.5037171350861287;
        result[4] += 0.04496826835902085;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
        result[0] += 0.9985654084102932;
        result[1] += 0;
        result[2] += 0.0011656056666367793;
        result[3] += 0;
        result[4] += 0.00017932394871335067;
        result[5] += 8.966197435667533e-05;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.01694915254237288;
        result[3] += 0.05712492153170119;
        result[4] += 0.9259259259259259;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += 0.15606641123882503;
        result[1] += 0;
        result[2] += 0.00842911877394636;
        result[3] += 0.6618135376756067;
        result[4] += 0.17369093231162197;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9964362081254454;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.003563791874554526;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)48.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9859719438877755;
        result[4] += 0.012024048096192385;
        result[5] += 0.002004008016032064;
        result[6] += 0;
      } else {
        result[0] += 0.9951430113329736;
        result[1] += 0;
        result[2] += 0.0037776578521316784;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0010793308148947653;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        result[0] += 0.19703552261691795;
        result[1] += 0.0005111167901865576;
        result[2] += 0.0035778175313059034;
        result[3] += 0.7786864298492205;
        result[4] += 0.018400204446716074;
        result[5] += 0.0017889087656529517;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.003789929615592853;
        result[2] += 0;
        result[3] += 0.09095831077422847;
        result[4] += 0.9052517596101787;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        result[0] += 0.9950839672742932;
        result[1] += 0.0005382517582890772;
        result[2] += 0.0024041911870245447;
        result[3] += 0.0018659394287354673;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00010765035165781543;
      } else {
        result[0] += 0;
        result[1] += 0.01509433962264151;
        result[2] += 0;
        result[3] += 0.9849056603773585;
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
        result[0] += 0.24669391680692473;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.7533060831930752;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.620616365568544;
        result[1] += 0;
        result[2] += 0.023379383634431455;
        result[3] += 0.001594048884165781;
        result[4] += 0.34962805526036134;
        result[5] += 0;
        result[6] += 0.004782146652497344;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
        result[0] += 0.018867924528301886;
        result[1] += 0.025157232704402517;
        result[2] += 0;
        result[3] += 0.08490566037735849;
        result[4] += 0.8710691823899371;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.33356234970800414;
        result[1] += 0.0037787701820680177;
        result[2] += 0.005839917554105119;
        result[3] += 0.6568189625558227;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
        result[0] += 0.08839446782922429;
        result[1] += 0;
        result[2] += 0.003006614552014432;
        result[3] += 0.027660853878532773;
        result[4] += 0.8809380637402285;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.3221884498480243;
        result[1] += 0;
        result[2] += 0.0425531914893617;
        result[3] += 0.6352583586626139;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
        result[0] += 0.09140369967355821;
        result[1] += 0;
        result[2] += 0.022850924918389554;
        result[3] += 0.6605005440696409;
        result[4] += 0.2219804134929271;
        result[5] += 0.003264417845484222;
        result[6] += 0;
      } else {
        result[0] += 0.896484375;
        result[1] += 0;
        result[2] += 0.002972146739130435;
        result[3] += 0.10011888586956522;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004245923913043478;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9987931980252331;
        result[1] += 0;
        result[2] += 0.000877674163466813;
        result[3] += 0;
        result[4] += 0.00032912781130005483;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5756051128637477;
        result[1] += 0.0019037258634756597;
        result[2] += 0.00557519717160729;
        result[3] += 0.34321457710089753;
        result[4] += 0.07288550448735384;
        result[5] += 0.00067990209409845;
        result[6] += 0.00013598041881968998;
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
        result[0] += 0.47979139504563234;
        result[1] += 0;
        result[2] += 0.00847457627118644;
        result[3] += 0.5117340286831812;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.1409028727770178;
        result[1] += 0.011627906976744186;
        result[2] += 0.009575923392612859;
        result[3] += 0.8378932968536251;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)1753.5) ) ) {
        result[0] += 0.9995815103671295;
        result[1] += 0;
        result[2] += 0.00041848963287045843;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.5;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0.002366863905325444;
        result[1] += 0.002366863905325444;
        result[2] += 0;
        result[3] += 0.2272189349112426;
        result[4] += 0.7644970414201183;
        result[5] += 0.0035502958579881655;
        result[6] += 0;
      } else {
        result[0] += 0.6004914421284527;
        result[1] += 0.0011015082189459412;
        result[2] += 0.007456363328249447;
        result[3] += 0.3760379596678528;
        result[4] += 0.012879173021521773;
        result[5] += 0.0007625826131164207;
        result[6] += 0.0012709710218607013;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        result[0] += 0.9744572158365262;
        result[1] += 0;
        result[2] += 0.02554278416347382;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.047787610619469026;
        result[1] += 0.00247787610619469;
        result[2] += 0.0017699115044247787;
        result[3] += 0.6828318584070796;
        result[4] += 0.2651327433628319;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
        result[0] += 0.0033500837520938024;
        result[1] += 0.01340033500837521;
        result[2] += 0;
        result[3] += 0.16080402010050251;
        result[4] += 0.8224455611390284;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9997488068324542;
        result[1] += 0;
        result[2] += 0.00025119316754584274;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5581938497469833;
        result[1] += 0;
        result[2] += 0.012066952121448035;
        result[3] += 0.38419618528610355;
        result[4] += 0.043791358505254965;
        result[5] += 0.0005838847800700662;
        result[6] += 0.0011677695601401323;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.999015263417036;
        result[1] += 0;
        result[2] += 0.0008206138191367143;
        result[3] += 0;
        result[4] += 0.00010941517588489524;
        result[5] += 0;
        result[6] += 5.470758794244762e-05;
      } else {
        result[0] += 0.5670513330680461;
        result[1] += 0.001193792280143255;
        result[2] += 0.004244594773842684;
        result[3] += 0.34566918689481363;
        result[4] += 0.0807799442896936;
        result[5] += 0.0003979307600477517;
        result[6] += 0.0006632179334129195;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9998752183678562;
        result[1] += 0;
        result[2] += 0.00012478163214374845;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5327068361894233;
        result[1] += 0;
        result[2] += 0.009397457158651189;
        result[3] += 0.410171365395246;
        result[4] += 0.0455131748664087;
        result[5] += 0.00018426386585590566;
        result[6] += 0.002026902524414962;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9990128331688055;
        result[1] += 0;
        result[2] += 0.0008226390259953932;
        result[3] += 0;
        result[4] += 0.00016452780519907864;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5494003426613363;
        result[1] += 0.0014848657909765843;
        result[2] += 0.005139920045688177;
        result[3] += 0.36539120502569955;
        result[4] += 0.07721302113078239;
        result[5] += 0.0007995431182181608;
        result[6] += 0.0005711022272986864;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)11) ) ) {
        result[0] += 0.09507557289127255;
        result[1] += 0.0029254022428083864;
        result[2] += 0.0048756704046806435;
        result[3] += 0.6001950268161872;
        result[4] += 0.29692832764505117;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)121.5) ) ) {
        result[0] += 0.0031446540880503146;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.22327044025157233;
        result[4] += 0.7735849056603774;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.008090614886731391;
        result[1] += 0.012944983818770227;
        result[2] += 0;
        result[3] += 0.038834951456310676;
        result[4] += 0.9401294498381877;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0.30775646371976645;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.1409507923269391;
        result[4] += 0.5504587155963303;
        result[5] += 0.0008340283569641367;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0111635895234006;
        result[3] += 0.8664662945470158;
        result[4] += 0.11936453413482181;
        result[5] += 0.0030055817947617003;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9992303251876082;
        result[1] += 0;
        result[2] += 0.0006927073311525881;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.696748123917645e-05;
      } else {
        result[0] += 0.7076500229042602;
        result[1] += 0.0009161704076958314;
        result[2] += 0.007512597343105817;
        result[3] += 0.28318827301878147;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0007329363261566652;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.011904761904761904;
        result[1] += 0.023809523809523808;
        result[2] += 0;
        result[3] += 0.20238095238095238;
        result[4] += 0.7619047619047619;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        result[0] += 0.21574344023323616;
        result[1] += 0.002186588921282799;
        result[2] += 0.0029154518950437317;
        result[3] += 0.7791545189504373;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.12471655328798185;
        result[4] += 0.8752834467120182;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9987714987714987;
        result[5] += 0.0012285012285012285;
        result[6] += 0;
      } else {
        result[0] += 0.19376979936642028;
        result[1] += 0;
        result[2] += 0.007391763463569166;
        result[3] += 0.7961985216473073;
        result[4] += 0;
        result[5] += 0.0026399155227032735;
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
        result[1] += 0.07633587786259542;
        result[2] += 0;
        result[3] += 0.9236641221374046;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        result[0] += 0.9969747899159664;
        result[1] += 0;
        result[2] += 0.0001680672268907563;
        result[3] += 0.002857142857142857;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.7699429100447462;
        result[1] += 0;
        result[2] += 0.006017589878105231;
        result[3] += 0.2229594198426169;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0010800802345317083;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += 0.888941874635723;
        result[1] += 0.0010597149366820327;
        result[2] += 0.0030201875695437933;
        result[3] += 0.106872251364383;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00010597149366820327;
      } else {
        result[0] += 0.996015246015246;
        result[1] += 0;
        result[2] += 0.002079002079002079;
        result[3] += 0.001386001386001386;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005197505197505198;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)33.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.998730259503214;
        result[1] += 0;
        result[2] += 0.0012697404967859695;
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
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
        result[0] += 0.6087869362363919;
        result[1] += 0.0015552099533437014;
        result[2] += 0.0052099533437014;
        result[3] += 0.33149300155520994;
        result[4] += 0.05194401244167963;
        result[5] += 0.00031104199066874026;
        result[6] += 0.0006998444790046656;
      } else {
        result[0] += 0.0034083162917518746;
        result[1] += 0;
        result[2] += 0.019768234492160874;
        result[3] += 0.7948193592365371;
        result[4] += 0.18064076346284935;
        result[5] += 0.0013633265167007499;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        result[0] += 0.13089509143407121;
        result[1] += 0.006737247353224254;
        result[2] += 0.0052935514918190565;
        result[3] += 0.5606352261790183;
        result[4] += 0.2964388835418672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.002224694104560623;
        result[1] += 0.00778642936596218;
        result[2] += 0;
        result[3] += 0.08565072302558398;
        result[4] += 0.9043381535038932;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9985141158989599;
        result[5] += 0.0014858841010401188;
        result[6] += 0;
      } else {
        result[0] += 0.19391837823419578;
        result[1] += 0.00026673779674579886;
        result[2] += 0.00480128034142438;
        result[3] += 0.7999466524406509;
        result[4] += 0;
        result[5] += 0.0010669511869831954;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.7039106145251397;
        result[4] += 0.29608938547486036;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0074211502782931356;
        result[2] += 0;
        result[3] += 0.016697588126159554;
        result[4] += 0.9758812615955473;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4.5) ) ) {
        result[0] += 0.998837823560486;
        result[1] += 0;
        result[2] += 0.0010565240359218173;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00010565240359218173;
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
        result[0] += 0.9085269569140537;
        result[1] += 0.0025941800135348522;
        result[2] += 0.010376720054139409;
        result[3] += 0.07748702909993233;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0010151139183397248;
      } else {
        result[0] += 0;
        result[1] += 0.001053370786516854;
        result[2] += 0.0052668539325842695;
        result[3] += 0.9936797752808989;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
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
        result[1] += 0.0036815462494247586;
        result[2] += 0.007363092498849517;
        result[3] += 0.6930510814542108;
        result[4] += 0.2936033133916245;
        result[5] += 0.002300966405890474;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        result[0] += 0.9964084145715751;
        result[1] += 0;
        result[2] += 0.0001710278775440397;
        result[3] += 0.0034205575508807935;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.7882861257801249;
        result[1] += 0;
        result[2] += 0.005760921747479598;
        result[3] += 0.205312850056009;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006401024163866219;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)22.5) ) ) {
        result[0] += 0.23255813953488372;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.5775193798449613;
        result[4] += 0.18992248062015504;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9256260434056762;
        result[1] += 0.0005843071786310518;
        result[2] += 0.000959933222036728;
        result[3] += 0.07245409015025044;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0003756260434056762;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.2617246596066566;
        result[1] += 0.0022692889561270802;
        result[2] += 0.0071860816944024205;
        result[3] += 0.6569591527987897;
        result[4] += 0.07072617246596066;
        result[5] += 0.0011346444780635401;
        result[6] += 0;
      } else {
        result[0] += 0.10262766484878533;
        result[1] += 0;
        result[2] += 0.013882002974714923;
        result[3] += 0.10213187902825979;
        result[4] += 0.7808626673277145;
        result[5] += 0.0004957858205255329;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)248) ) ) {
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
        result[0] += 0;
        result[1] += 0.011204481792717087;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.988795518207283;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.00020370747606437156;
        result[2] += 0.006111224281931147;
        result[3] += 0.6551232430230189;
        result[4] += 0.3383581177429212;
        result[5] += 0.00020370747606437156;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
        result[0] += 0.9989467447830953;
        result[1] += 0;
        result[2] += 0.0010532552169047462;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9999030067895247;
        result[1] += 0;
        result[2] += 9.699321047526673e-05;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.5321629406117131;
        result[1] += 0.0034288849266218627;
        result[2] += 0.007406391441503223;
        result[3] += 0.45645316143190234;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.000548621588259498;
      } else {
        result[0] += 0.9680259499536608;
        result[1] += 0;
        result[2] += 0.009267840593141797;
        result[3] += 0.021779425393883226;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009267840593141798;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
        result[0] += 0.3968253968253968;
        result[1] += 0.0008818342151675485;
        result[2] += 0.006172839506172839;
        result[3] += 0.5546737213403881;
        result[4] += 0.04144620811287478;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.10495283018867925;
        result[1] += 0.01179245283018868;
        result[2] += 0;
        result[3] += 0.6969339622641509;
        result[4] += 0.18632075471698112;
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
        result[0] += 0.44881889763779526;
        result[1] += 0;
        result[2] += 0.045275590551181105;
        result[3] += 0.5059055118110236;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)27) ) ) {
        result[0] += 0.7064516129032258;
        result[1] += 0;
        result[2] += 0.008064516129032258;
        result[3] += 0.27235023041474654;
        result[4] += 0.012442396313364055;
        result[5] += 0;
        result[6] += 0.0006912442396313364;
      } else {
        result[0] += 0.9842592967264193;
        result[1] += 0.0006069679925545259;
        result[2] += 0.0007283615910654312;
        result[3] += 0.014000728361591065;
        result[4] += 0.0001618581313478736;
        result[5] += 0.0001618581313478736;
        result[6] += 8.09290656739368e-05;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += 0.13547321217842814;
        result[1] += 0;
        result[2] += 0.006844465423648808;
        result[3] += 0.7012036818503659;
        result[4] += 0.1557705924002832;
        result[5] += 0.0007080481472740147;
        result[6] += 0;
      } else {
        result[0] += 0.9948899371069183;
        result[1] += 0;
        result[2] += 0.003734276729559749;
        result[3] += 0.001179245283018868;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0001965408805031447;
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
        result[0] += 0.9969135802469136;
        result[1] += 0;
        result[2] += 0.00257201646090535;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00051440329218107;
      } else {
        result[0] += 0.9997940607109024;
        result[1] += 0;
        result[2] += 0.00020593928909757404;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.02309344790547798;
        result[1] += 0.007787325456498389;
        result[2] += 0.0037593984962406013;
        result[3] += 0.8933941997851772;
        result[4] += 0.07062298603651987;
        result[5] += 0.0013426423200859291;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.015586255756287639;
        result[3] += 0.2001416932341481;
        result[4] += 0.7832093517534539;
        result[5] += 0.0010626992561105209;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)94.5) ) ) {
        result[0] += 0.9794251609863358;
        result[1] += 0;
        result[2] += 0.005182974713365793;
        result[3] += 0.015077744620700486;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00031411967959792684;
      } else {
        result[0] += 0.4071100917431193;
        result[1] += 0;
        result[2] += 0.006192660550458717;
        result[3] += 0.5853211009174313;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.001376146788990826;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.99488609948861;
        result[1] += 0;
        result[2] += 0.0041841004184100415;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009298000929800093;
      } else {
        result[0] += 0.9997104326962852;
        result[1] += 0;
        result[2] += 0.00028956730371473485;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
        result[0] += 0.59518555667001;
        result[1] += 0;
        result[2] += 0.009227683049147442;
        result[3] += 0.35707121364092276;
        result[4] += 0.037111334002006016;
        result[5] += 0.00020060180541624874;
        result[6] += 0.0012036108324974925;
      } else {
        result[0] += 0.06365372374283895;
        result[1] += 0.004455760661998727;
        result[2] += 0;
        result[3] += 0.6276257161043921;
        result[4] += 0.30426479949077023;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5511331604464992;
        result[1] += 0.0018040365317397678;
        result[2] += 0.006426880144322924;
        result[3] += 0.4397339046115684;
        result[4] += 0;
        result[5] += 0.00022550456646747098;
        result[6] += 0.000676513699402413;
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
        result[0] += 0.9966216216216216;
        result[1] += 0;
        result[2] += 0.0028957528957528956;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00048262548262548264;
      } else {
        result[0] += 0.9996701302985321;
        result[1] += 0;
        result[2] += 0.00032986970146792015;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9995954692556634;
        result[5] += 0.0004045307443365696;
        result[6] += 0;
      } else {
        result[0] += 0.01785283474065139;
        result[1] += 0.007478890229191798;
        result[2] += 0.014234016887816647;
        result[3] += 0.9587454764776839;
        result[4] += 0;
        result[5] += 0.0016887816646562123;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        result[0] += 0.5439483780955703;
        result[1] += 0;
        result[2] += 0.0017439832577607255;
        result[3] += 0.45343564701778866;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0008719916288803627;
      } else {
        result[0] += 0.9686721991701245;
        result[1] += 0;
        result[2] += 0.008713692946058092;
        result[3] += 0.021576763485477178;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.001037344398340249;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.02631578947368421;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9736842105263158;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.3782623059134457;
        result[1] += 0.005285761480013214;
        result[2] += 0.014205483977535514;
        result[3] += 0.6022464486290057;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        result[0] += 0.9824627926817708;
        result[1] += 0.00018959143046734286;
        result[2] += 0.000853161437103043;
        result[3] += 0.016115271589724145;
        result[4] += 0.0002369892880841786;
        result[5] += 4.7397857616835716e-05;
        result[6] += 9.479571523367143e-05;
      } else {
        result[0] += 0.038461538461538464;
        result[1] += 0;
        result[2] += 0.008547008547008548;
        result[3] += 0;
        result[4] += 0.9529914529914529;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += 0.7085989737210387;
        result[1] += 0;
        result[2] += 0.005753382055667859;
        result[3] += 0.2837816824755093;
        result[4] += 0.0004664904369460426;
        result[5] += 0.00031099362463069506;
        result[6] += 0.0010884776862074327;
      } else {
        result[0] += 0.7541711916279988;
        result[1] += 0.0011847171487807287;
        result[2] += 0.0036528778754072464;
        result[3] += 0.23605489189456016;
        result[4] += 0.004541415736992793;
        result[5] += 0.00029617928719518217;
        result[6] += 9.872642906506072e-05;
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
