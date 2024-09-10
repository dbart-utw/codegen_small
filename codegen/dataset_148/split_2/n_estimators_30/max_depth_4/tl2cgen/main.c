
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
          result[0] += 0.335676625659051;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.664323374340949;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5752461322081576;
          result[1] += 0;
          result[2] += 0.028832630098452883;
          result[3] += 0.3959212376933896;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 0.020140105078809107;
          result[2] += 0;
          result[3] += 0.9798598949211909;
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-5) ) ) {
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9991490266992873;
          result[1] += 0;
          result[2] += 0.000797787469418147;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 5.318583129454313e-05;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.9034935340667826;
          result[1] += 0.0025091681142636563;
          result[2] += 0.002702181046130091;
          result[3] += 0.09110210384095736;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00019301293186643506;
        } else {
          result[0] += 0.4154521860650829;
          result[1] += 0;
          result[2] += 0.010181672988620485;
          result[3] += 0.5548013575563986;
          result[4] += 0.018366939508884014;
          result[5] += 0.0005989219405070873;
          result[6] += 0.0005989219405070873;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0136986301369863;
          result[3] += 0.9460112812248187;
          result[4] += 0.0394842868654311;
          result[5] += 0.0008058017727639;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.995049504950495;
          result[5] += 0.0049504950495049506;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)1416) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4.5) ) ) {
          result[0] += 0.9990681914443033;
          result[1] += 0;
          result[2] += 0.0008470986869970351;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 8.470986869970351e-05;
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
          result[0] += 0.999031007751938;
          result[1] += 0;
          result[2] += 0.0009689922480620155;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15) ) ) {
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          result[0] += 0.027673896783844427;
          result[1] += 0.008601346297681375;
          result[2] += 0.010845175766641735;
          result[3] += 0.844053851907255;
          result[4] += 0.10770381451009724;
          result[5] += 0.0011219147344801795;
          result[6] += 0;
        } else {
          result[0] += 0.986199846664963;
          result[1] += 0;
          result[2] += 0.004600051111679018;
          result[3] += 0.007922310247891643;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001277791975466394;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
          result[0] += 0.21385542168674698;
          result[1] += 0.006024096385542169;
          result[2] += 0.006024096385542169;
          result[3] += 0.7740963855421686;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0011500862564692352;
          result[1] += 0.007475560667050029;
          result[2] += 0;
          result[3] += 0.10868315123634273;
          result[4] += 0.882691201840138;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)21.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.368421052631579;
          result[3] += 0;
          result[4] += 0.5263157894736843;
          result[5] += 0.10526315789473685;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0014992503748125937;
          result[3] += 0;
          result[4] += 0.9985007496251874;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)103.5) ) ) {
          result[0] += 0;
          result[1] += 0.000333889816360601;
          result[2] += 0;
          result[3] += 0.9996661101836394;
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)16.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-178) ) ) {
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)35) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9939879759519038;
          result[5] += 0.006012024048096192;
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
          result[0] += 0;
          result[1] += 0.0009369144284821987;
          result[2] += 0;
          result[3] += 0.9981261711430356;
          result[4] += 0;
          result[5] += 0.0009369144284821987;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.20512820512820515;
          result[2] += 0.6923076923076924;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.10256410256410257;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
          result[0] += 0.9982750509644033;
          result[1] += 0;
          result[2] += 0.0011761016151795515;
          result[3] += 0.0004704406460718206;
          result[4] += 0;
          result[5] += 0;
          result[6] += 7.840677434530344e-05;
        } else {
          result[0] += 0.9876156371232467;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.012384362876753208;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          result[0] += 0.5637977946441358;
          result[1] += 0.002148073893741945;
          result[2] += 0.006873836459974224;
          result[3] += 0.4268938851496492;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000286409852498926;
        } else {
          result[0] += 0;
          result[1] += 0.02564102564102564;
          result[2] += 0;
          result[3] += 0.9743589743589743;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          result[0] += 0.9953239812959251;
          result[1] += 0;
          result[2] += 0.004230683589401024;
          result[3] += 0.00044533511467379205;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          result[0] += 0.38666666666666666;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6133333333333333;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9912581954417733;
          result[1] += 0;
          result[2] += 0.004058694973462379;
          result[3] += 0.0015610365282547611;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0031220730565095223;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0.006030507272082299;
          result[2] += 0.008158921603405462;
          result[3] += 0.9010287335934729;
          result[4] += 0.08478183753103938;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.012883435582822086;
          result[3] += 0.06932515337423313;
          result[4] += 0.9177914110429448;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          result[0] += 0.9939367691641403;
          result[1] += 0;
          result[2] += 0.00563014291901256;
          result[3] += 0.00043308791684711995;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
          result[0] += 0.9956709956709957;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004329004329004329;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9962825278810409;
          result[4] += 0.0012391573729863693;
          result[5] += 0.0024783147459727386;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)58.5) ) ) {
          result[0] += 0.9972553324968633;
          result[1] += 0.00047051442910915934;
          result[2] += 0.0010586574654956086;
          result[3] += 0.0010586574654956086;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00015683814303638644;
        } else {
          result[0] += 0.8738229755178908;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.12617702448210924;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
          result[0] += 0.5294117647058824;
          result[1] += 0;
          result[2] += 0.43137254901960786;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.0392156862745098;
          result[6] += 0;
        } else {
          result[0] += 0.1722462203023758;
          result[1] += 0;
          result[2] += 0.0018898488120950325;
          result[3] += 0.8258639308855291;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
          result[0] += 0.9315315315315316;
          result[1] += 0;
          result[2] += 0.03963963963963964;
          result[3] += 0.010810810810810811;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.018018018018018018;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)14) ) ) {
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
          result[4] += 0.989247311827957;
          result[5] += 0.010752688172043012;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-25) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.004693366708385483;
          result[2] += 0.005006257822277848;
          result[3] += 0.9884230287859825;
          result[4] += 0;
          result[5] += 0.001877346683354193;
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
          result[0] += 0.9911504424778761;
          result[1] += 0;
          result[2] += 0.008849557522123894;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0.9993963539780273;
          result[1] += 0;
          result[2] += 0.0006036460219727152;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
          result[0] += 0.4254710231337944;
          result[1] += 0.0011924636298592892;
          result[2] += 0.0004769854519437157;
          result[3] += 0.5726210350584308;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00023849272597185786;
        } else {
          result[0] += 0.6651465798045604;
          result[1] += 0.004560260586319219;
          result[2] += 0.01465798045602606;
          result[3] += 0.3143322475570033;
          result[4] += 0;
          result[5] += 0.00032573289902280137;
          result[6] += 0.0009771986970684042;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.8880179171332587;
          result[1] += 0;
          result[2] += 0.0022396416573348264;
          result[3] += 0.10974244120940649;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9885159010600707;
          result[1] += 0;
          result[2] += 0.006183745583038869;
          result[3] += 0.0032391048292108363;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002061248527679623;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)34.5) ) ) {
          result[0] += 0.9575757575757575;
          result[1] += 0;
          result[2] += 0.04242424242424243;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9969635627530364;
          result[1] += 0;
          result[2] += 0.0020242914979757085;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0010121457489878543;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)37.5) ) ) {
          result[0] += 0.9996211403674938;
          result[1] += 0;
          result[2] += 0.00037885963250615644;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9999269219526454;
          result[1] += 0;
          result[2] += 7.307804735457468e-05;
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
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9920634920634921;
          result[5] += 0.007936507936507936;
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
          result[0] += 0.018177411536597188;
          result[1] += 0.009209888511875909;
          result[2] += 0.0075133301017935045;
          result[3] += 0.9638875424139602;
          result[4] += 0;
          result[5] += 0.0012118274357731458;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)42) ) ) {
          result[0] += 0.982827158530768;
          result[1] += 0;
          result[2] += 0.005088249324216886;
          result[3] += 0.010812529813960884;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0012720623310542216;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)50.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.00038789759503491083;
          result[3] += 0.9992242048099302;
          result[4] += 0;
          result[5] += 0.00038789759503491083;
          result[6] += 0;
        } else {
          result[0] += 0.9871345029239766;
          result[1] += 0;
          result[2] += 0.011111111111111112;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0017543859649122807;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
          result[0] += 0;
          result[1] += 0.004761904761904762;
          result[2] += 0.00582010582010582;
          result[3] += 0.9888888888888889;
          result[4] += 0.0005291005291005291;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.046263345195729534;
          result[2] += 0;
          result[3] += 0.010676156583629894;
          result[4] += 0.9430604982206405;
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
          result[0] += 0.5;
          result[1] += 0.5;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)49) ) ) {
          result[0] += 0.9169811320754717;
          result[1] += 0;
          result[2] += 0.0830188679245283;
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)27) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
          result[0] += 0.9552147239263804;
          result[1] += 0;
          result[2] += 0.001226993865030675;
          result[3] += 0.04233128834355828;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001226993865030675;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.01619047619047619;
          result[3] += 0.9523809523809523;
          result[4] += 0.03142857142857143;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)5624.5) ) ) {
          result[0] += 0.9844790262631214;
          result[1] += 0.0006535146836580486;
          result[2] += 0.0007760486868439326;
          result[3] += 0.013968876363190786;
          result[4] += 8.168933545725607e-05;
          result[5] += 0;
          result[6] += 4.0844667728628036e-05;
        } else {
          result[0] += 0.5;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.17184035476718407;
          result[1] += 0;
          result[2] += 0.0077605321507760545;
          result[3] += 0.8190133037694014;
          result[4] += 0;
          result[5] += 0.0013858093126385813;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
          result[0] += 0.9973142345568488;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0026857654431512983;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9873853211009175;
          result[1] += 0;
          result[2] += 0.009174311926605505;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0034403669724770644;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)40) ) ) {
          result[0] += 0.0005589714924538849;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9994410285075461;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0.000637551801083838;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9993624481989162;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.5172413793103449;
          result[2] += 0.41379310344827586;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.06896551724137931;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)62) ) ) {
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
          result[2] += 0.01875;
          result[3] += 0;
          result[4] += 0.98125;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)63) ) ) {
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
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)77.5) ) ) {
          result[0] += 0.9985555555555556;
          result[1] += 0.0003703703703703704;
          result[2] += 0.0009259259259259261;
          result[3] += 0.00014814814814814817;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9556451612903226;
          result[1] += 0;
          result[2] += 0.043010752688172046;
          result[3] += 0.0013440860215053765;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)104) ) ) {
          result[0] += 0.5473684210526316;
          result[1] += 0.028070175438596492;
          result[2] += 0;
          result[3] += 0.4245614035087719;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.021897810218978103;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9781021897810219;
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
          result[0] += 0.017002081887578072;
          result[1] += 0;
          result[2] += 0.006245662734212352;
          result[3] += 0.9767522553782095;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8408276959808993;
          result[1] += 0;
          result[2] += 0.01193792280143255;
          result[3] += 0.1424592120970951;
          result[4] += 0;
          result[5] += 0.001193792280143255;
          result[6] += 0.003581376840429765;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0.0009124087591240876;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9984793187347932;
          result[4] += 0;
          result[5] += 0.0006082725060827251;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.4166666666666667;
          result[2] += 0.4583333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.125;
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
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          result[0] += 0.9948674080410608;
          result[1] += 0;
          result[2] += 0.003421727972626176;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001710863986313088;
        } else {
          result[0] += 0.9995014402836251;
          result[1] += 5.5395524041657433e-05;
          result[2] += 0.00027697762020828715;
          result[3] += 0.00016618657212497231;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
          result[0] += 0.9450381679389313;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0549618320610687;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.3220338983050847;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6779661016949152;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
          result[0] += 0.9235949837436136;
          result[1] += 0.0041802136553646075;
          result[2] += 0.007895959126799815;
          result[3] += 0.06316767301439852;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011611704598235022;
        } else {
          result[0] += 0.003985386914646297;
          result[1] += 0;
          result[2] += 0.005313849219528396;
          result[3] += 0.9900365327133842;
          result[4] += 0;
          result[5] += 0.0006642311524410495;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
          result[0] += 0.9933636475359469;
          result[1] += 0;
          result[2] += 0.0031952808160255622;
          result[3] += 0.002949489984023596;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004915816640039326;
        } else {
          result[0] += 0.9527458492975734;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04725415070242656;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
          result[0] += 0.004842615012106538;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9951573849878934;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)11) ) ) {
          result[0] += 0.9863945578231292;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.013605442176870748;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09210526315789473;
          result[3] += 0.16447368421052633;
          result[4] += 0.7368421052631579;
          result[5] += 0.006578947368421052;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
          result[0] += 0.996756589785832;
          result[1] += 0.00025741350906095556;
          result[2] += 0.00046334431630972;
          result[3] += 0.0024711696869851732;
          result[4] += 0;
          result[5] += 0;
          result[6] += 5.148270181219111e-05;
        } else {
          result[0] += 0.955237242614145;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.044762757385854966;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 0.5582925594735954;
          result[1] += 0.002024633035262358;
          result[2] += 0.0045554243293403065;
          result[3] += 0.43445250548338105;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006748776784207861;
        } else {
          result[0] += 0.9868704261730521;
          result[1] += 0;
          result[2] += 0.0016142918639690056;
          result[3] += 0.011300043047783039;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00021523891519586742;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)57) ) ) {
          result[0] += 0.0046641791044776115;
          result[1] += 0.0037313432835820895;
          result[2] += 0.008706467661691543;
          result[3] += 0.9623756218905473;
          result[4] += 0.01990049751243781;
          result[5] += 0.0006218905472636816;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)12) ) ) {
          result[0] += 0.9872881355932204;
          result[1] += 0;
          result[2] += 0.012711864406779662;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.10227272727272728;
          result[4] += 0.8977272727272727;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.4111969111969112;
          result[4] += 0.5888030888030888;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.15;
          result[4] += 0.85;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.017937219730941704;
          result[2] += 0;
          result[3] += 0.006726457399103139;
          result[4] += 0.9753363228699552;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
          result[0] += 0.9878048780487805;
          result[1] += 0;
          result[2] += 0.012195121951219513;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.125;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.375;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 0.006111111111111111;
          result[2] += 0.0005555555555555556;
          result[3] += 0.9933333333333333;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-23) ) ) {
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
          result[1] += 0.045627376425855515;
          result[2] += 0;
          result[3] += 0.9543726235741445;
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)14) ) ) {
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
          result[4] += 0.9987995198079231;
          result[5] += 0.0012004801920768306;
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
          result[0] += 0.11443661971830986;
          result[1] += 0;
          result[2] += 0.0029342723004694834;
          result[3] += 0.8820422535211268;
          result[4] += 0;
          result[5] += 0.0005868544600938967;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
          result[0] += 0.6290909090909091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3709090909090909;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9963181685622631;
          result[1] += 0.0006561679790026247;
          result[2] += 0.0017862350539515895;
          result[3] += 0.000984251968503937;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002551764362787985;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          result[0] += 0.43182242119007647;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5681775788099235;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9874656068480587;
          result[1] += 0;
          result[2] += 0.007337205747477835;
          result[3] += 0.0018343014368694588;
          result[4] += 0;
          result[5] += 0.0009171507184347294;
          result[6] += 0.0024457352491592784;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
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
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)46) ) ) {
          result[0] += 0;
          result[1] += 0.41935483870967744;
          result[2] += 0.45161290322580644;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.12903225806451613;
          result[6] += 0;
        } else {
          result[0] += 0.9074074074074074;
          result[1] += 0;
          result[2] += 0.09259259259259259;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          result[0] += 0.9971225091720021;
          result[1] += 0.0007913099776994461;
          result[2] += 0.0014747140493489676;
          result[3] += 0.00014387454139989928;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004675922595496727;
        } else {
          result[0] += 0.48484848484848486;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0.18181818181818182;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)104) ) ) {
          result[0] += 0.46984126984126984;
          result[1] += 0.03492063492063492;
          result[2] += 0;
          result[3] += 0.49523809523809526;
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
          result[0] += 0.012720848056537103;
          result[1] += 0;
          result[2] += 0.0038869257950530037;
          result[3] += 0.9833922261484099;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8583128583128583;
          result[1] += 0;
          result[2] += 0.005323505323505323;
          result[3] += 0.1339066339066339;
          result[4] += 0;
          result[5] += 0.000819000819000819;
          result[6] += 0.001638001638001638;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)99) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9984529702970297;
          result[4] += 0.0012376237623762376;
          result[5] += 0.0003094059405940594;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9393939393939394;
          result[5] += 0.06060606060606061;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)12) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.37142857142857144;
          result[2] += 0.6;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.02857142857142857;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)27.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
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
          result[0] += 0.9108910891089109;
          result[1] += 0.0891089108910891;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 0.9991915108640728;
          result[1] += 0;
          result[2] += 0.000808489135927236;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6491228070175439;
          result[1] += 0.017543859649122806;
          result[2] += 0;
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 0.9992967651195499;
          result[1] += 0;
          result[2] += 0.0007032348804500703;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7060119320789353;
          result[1] += 0.0006424965580541532;
          result[2] += 0.00770995869664984;
          result[3] += 0.2846259752179899;
          result[4] += 0;
          result[5] += 9.178522257916475e-05;
          result[6] += 0.0009178522257916476;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)57) ) ) {
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
          result[1] += 0.00586940572267058;
          result[2] += 0.010271460014673514;
          result[3] += 0.9838591342626559;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)86) ) ) {
          result[0] += 0.24034707158351412;
          result[1] += 0.00043383947939262476;
          result[2] += 0;
          result[3] += 0.756182212581345;
          result[4] += 0.001735357917570499;
          result[5] += 0.0013015184381778744;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0225140712945591;
          result[3] += 0;
          result[4] += 0.9718574108818011;
          result[5] += 0.005628517823639775;
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
          result[1] += 0.009900990099009901;
          result[2] += 0;
          result[3] += 0.9900990099009901;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          result[0] += 0.844574780058651;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.15542521994134897;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.006329113924050633;
          result[1] += 0.0189873417721519;
          result[2] += 0;
          result[3] += 0.9746835443037974;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.9960294445683694;
          result[1] += 0.0007138077180459514;
          result[2] += 0.002007584207004238;
          result[3] += 0.0009368726299353112;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00031229087664510374;
        } else {
          result[0] += 0.16666666666666666;
          result[1] += 0;
          result[2] += 0.004244482173174873;
          result[3] += 0.8285229202037352;
          result[4] += 0;
          result[5] += 0.0005659309564233164;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
          result[0] += 0.9838187702265372;
          result[1] += 0;
          result[2] += 0.016181229773462782;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.999398043641836;
          result[1] += 0;
          result[2] += 0.00045146726862302486;
          result[3] += 0.0001504890895410083;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
          result[0] += 0.3142857142857143;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6857142857142857;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9908284928156527;
          result[1] += 0;
          result[2] += 0.005808621216753286;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.003362885967594008;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-178) ) ) {
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)32.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9987960268887328;
          result[1] += 0;
          result[2] += 0.0012039731112671818;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.9998139188686267;
          result[1] += 0;
          result[2] += 0.00018608113137327876;
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
          result[0] += 0;
          result[1] += 0.05442176870748299;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.935374149659864;
          result[5] += 0.01020408163265306;
          result[6] += 0;
        } else {
          result[0] += 0.023339816615726594;
          result[1] += 0.008057793831619897;
          result[2] += 0.006946373992775772;
          result[3] += 0.9613781606001668;
          result[4] += 0;
          result[5] += 0.0002778549597110309;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.009876543209876543;
          result[3] += 0.028395061728395062;
          result[4] += 0.9617283950617284;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.017842660178426603;
          result[3] += 0.40551500405515006;
          result[4] += 0.5750202757502028;
          result[5] += 0.0016220600162206002;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
          result[0] += 0.8810949529512404;
          result[1] += 0;
          result[2] += 0.00427715996578272;
          result[3] += 0.1146278870829769;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.45715577662220214;
          result[1] += 0;
          result[2] += 0.00022609088853719196;
          result[3] += 0.5423920416007235;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00022609088853719196;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          result[0] += 0.9869109947643979;
          result[1] += 0;
          result[2] += 0.004283674440742504;
          result[3] += 0.007139457401237506;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0016658733936220848;
        } else {
          result[0] += 0.8839941262848752;
          result[1] += 0.002936857562408223;
          result[2] += 0.032305433186490456;
          result[3] += 0.08076358296622614;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
          result[0] += 0.6666666666666666;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3333333333333333;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9975340876124166;
          result[1] += 0;
          result[2] += 0.0005318634561454405;
          result[3] += 0.0019340489314379654;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)57) ) ) {
          result[0] += 0.02867383512544803;
          result[1] += 0.0035842293906810036;
          result[2] += 0;
          result[3] += 0.967741935483871;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1326530612244898;
          result[3] += 0;
          result[4] += 0.8673469387755102;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.9602327837051406;
          result[1] += 0.002909796314258002;
          result[2] += 0.0019398642095053346;
          result[3] += 0.033785968315551244;
          result[4] += 0;
          result[5] += 0.00032331070158422246;
          result[6] += 0.0008082767539605561;
        } else {
          result[0] += 0.3933239962651727;
          result[1] += 0;
          result[2] += 0.003734827264239029;
          result[3] += 0.6029411764705882;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)25) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9439252336448598;
          result[1] += 0;
          result[2] += 0.008126777732629013;
          result[3] += 0.04591629418935392;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0020316944331572532;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)35) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)92) ) ) {
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.17777777777777778;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8222222222222222;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          result[0] += 0.5623342175066313;
          result[1] += 0;
          result[2] += 0.010079575596816976;
          result[3] += 0.42758620689655175;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.07815126050420168;
          result[1] += 0.008403361344537815;
          result[2] += 0.010084033613445379;
          result[3] += 0.9025210084033614;
          result[4] += 0;
          result[5] += 0.0008403361344537816;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)14) ) ) {
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)54) ) ) {
          result[0] += 0;
          result[1] += 0.00411522633744856;
          result[2] += 0.004431782209559987;
          result[3] += 0.9905033238366572;
          result[4] += 0;
          result[5] += 0.000949667616334283;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.9989817246369045;
          result[1] += 0.00010718688032584812;
          result[2] += 0.0006431212819550887;
          result[3] += 0.00021437376065169624;
          result[4] += 0;
          result[5] += 0;
          result[6] += 5.359344016292406e-05;
        } else {
          result[0] += 0.8683812405446294;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.13161875945537066;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
          result[0] += 0.46018708647045403;
          result[1] += 0.0013689253935660506;
          result[2] += 0.0022815423226100846;
          result[3] += 0.5357061373488479;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004563084645220169;
        } else {
          result[0] += 0.6829109811565952;
          result[1] += 0.005523066926575698;
          result[2] += 0.011695906432748537;
          result[3] += 0.29922027290448344;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000649772579597141;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          result[0] += 0.9936582501467998;
          result[1] += 0;
          result[2] += 0.0021139166177334117;
          result[3] += 0.0035231943628890195;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007046388725778039;
        } else {
          result[0] += 0.8877551020408163;
          result[1] += 0;
          result[2] += 0.11224489795918367;
          result[3] += 0;
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
          result[0] += 0.9956756756756757;
          result[1] += 0;
          result[2] += 0.004324324324324324;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
          result[0] += 0;
          result[1] += 0.013368983957219251;
          result[2] += 0;
          result[3] += 0.09224598930481283;
          result[4] += 0.8943850267379679;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.018554476806903995;
          result[1] += 0.00453074433656958;
          result[2] += 0.006688241639697951;
          result[3] += 0.7374325782092773;
          result[4] += 0.23193096008629993;
          result[5] += 0.0008629989212513486;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          result[0] += 0.9861506601087238;
          result[1] += 0;
          result[2] += 0.005047890240745535;
          result[3] += 0.007765984985762361;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0010354646647683149;
        } else {
          result[0] += 0.8552631578947368;
          result[1] += 0;
          result[2] += 0.049342105263157895;
          result[3] += 0.09539473684210527;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)21.5) ) ) {
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
          result[2] += 0.002828854314002829;
          result[3] += 0;
          result[4] += 0.9929278642149929;
          result[5] += 0.004243281471004243;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)103.5) ) ) {
          result[0] += 0;
          result[1] += 0.0006587615283267457;
          result[2] += 0;
          result[3] += 0.9993412384716732;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03065134099616858;
          result[3] += 0.9655172413793104;
          result[4] += 0.0038314176245210726;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
          result[0] += 0;
          result[1] += 0.009404388714733543;
          result[2] += 0;
          result[3] += 0.9905956112852664;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9471153846153846;
          result[1] += 0;
          result[2] += 0.052884615384615384;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
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
          result[1] += 0.01026694045174538;
          result[2] += 0;
          result[3] += 0.004106776180698152;
          result[4] += 0.9856262833675564;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82) ) ) {
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
          result[1] += 0.0013937282229965157;
          result[2] += 0;
          result[3] += 0.9958188153310105;
          result[4] += 0.0020905923344947735;
          result[5] += 0.0006968641114982578;
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
          result[2] += 0.14814814814814814;
          result[3] += 0;
          result[4] += 0.845679012345679;
          result[5] += 0.006172839506172839;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          result[0] += 0.9969088098918083;
          result[1] += 0;
          result[2] += 0.0030911901081916537;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9995030232750766;
          result[1] += 0;
          result[2] += 0.0004969767249233827;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
          result[0] += 0.5278774046299316;
          result[1] += 0.002282360612976851;
          result[2] += 0.003586566677535051;
          result[3] += 0.4659276165634171;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003260515161395501;
        } else {
          result[0] += 0.9307564619397676;
          result[1] += 0;
          result[2] += 0.007114062129475931;
          result[3] += 0.05928385107896609;
          result[4] += 0;
          result[5] += 0.00047427080863172874;
          result[6] += 0.0023713540431586438;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0.12524850894632208;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8323392975480451;
          result[4] += 0.04241219350563288;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0743801652892562;
          result[1] += 0.03512396694214876;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.890495867768595;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
          result[0] += 0.21939855993223212;
          result[1] += 0.0008470986869970351;
          result[2] += 0.0033883947479881405;
          result[3] += 0.7530707327403643;
          result[4] += 0.02244811520542143;
          result[5] += 0.0008470986869970351;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.001440922190201729;
          result[2] += 0;
          result[3] += 0.0893371757925072;
          result[4] += 0.909221902017291;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
          result[0] += 0.9970002529907116;
          result[1] += 0.0006505475441830207;
          result[2] += 0.001843218041851892;
          result[3] += 0.00039755683255629043;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00010842459069717012;
        } else {
          result[0] += 0.833976833976834;
          result[1] += 0;
          result[2] += 0.023166023166023165;
          result[3] += 0.14285714285714285;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-101) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0036101083032490976;
          result[1] += 0.032490974729241874;
          result[2] += 0;
          result[3] += 0.9638989169675091;
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
          result[2] += 0.04398826979472141;
          result[3] += 0;
          result[4] += 0.9560117302052786;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.956140350877193;
          result[1] += 0;
          result[2] += 0.03508771929824561;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.008771929824561403;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9946478873239437;
          result[1] += 0;
          result[2] += 0.004788732394366197;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005633802816901409;
        } else {
          result[0] += 0.9102479701558043;
          result[1] += 0.0021944261575597983;
          result[2] += 0.0013166556945358788;
          result[3] += 0.08602150537634409;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00021944261575597982;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)1753.5) ) ) {
          result[0] += 0.9976774714732909;
          result[1] += 0.0001514692517418964;
          result[2] += 0.0003029385034837928;
          result[3] += 0.001868120771483389;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.3684210526315789;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.631578947368421;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9167389418907199;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.08326105810928014;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.33011349915479354;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6698865008452065;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)71) ) ) {
          result[0] += 0.9866545344252352;
          result[1] += 0;
          result[2] += 0.011525629360024266;
          result[3] += 0.0009099181073703368;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009099181073703368;
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
          result[4] += 0.5;
          result[5] += 0.5;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          result[0] += 0.6240437158469946;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.37595628415300547;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.4385201305767138;
          result[1] += 0;
          result[2] += 0.022850924918389554;
          result[3] += 0.5364526659412405;
          result[4] += 0;
          result[5] += 0.002176278563656148;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.026016260162601626;
          result[3] += 0.9699186991869919;
          result[4] += 0;
          result[5] += 0.0040650406504065045;
          result[6] += 0;
        } else {
          result[0] += 0.11498973305954825;
          result[1] += 0.014373716632443531;
          result[2] += 0.004106776180698152;
          result[3] += 0.86652977412731;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)84.5) ) ) {
          result[0] += 0.0003401360544217687;
          result[1] += 0.0003401360544217687;
          result[2] += 0;
          result[3] += 0.9982993197278912;
          result[4] += 0;
          result[5] += 0.0010204081632653062;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6666666666666666;
          result[3] += 0;
          result[4] += 0.2222222222222222;
          result[5] += 0.1111111111111111;
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
          result[1] += 0.08677685950413223;
          result[2] += 0;
          result[3] += 0.9132231404958677;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
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
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          result[0] += 0.9950396825396826;
          result[1] += 0;
          result[2] += 0.002976190476190476;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001984126984126984;
        } else {
          result[0] += 0.9994686503719448;
          result[1] += 0;
          result[2] += 0.0005313496280552603;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)38) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0125;
          result[2] += 0;
          result[3] += 0.9875;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)6.5) ) ) {
          result[0] += 0.5268189060010622;
          result[1] += 0.004248539564524694;
          result[2] += 0.012214551248008496;
          result[3] += 0.4560099132589839;
          result[4] += 0;
          result[5] += 0.0001770224818551956;
          result[6] += 0.0005310674455655868;
        } else {
          result[0] += 0.6131301289566237;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.38686987104337633;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)29) ) ) {
          result[0] += 0.9854666251427385;
          result[1] += 0;
          result[2] += 0.002699055330634278;
          result[3] += 0.011626699885809198;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00020761964081802137;
        } else {
          result[0] += 0.7857142857142857;
          result[1] += 0;
          result[2] += 0.03571428571428571;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.17857142857142858;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)1.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.9812118365429779;
          result[1] += 0;
          result[2] += 0.0001565680288085173;
          result[3] += 0.01863159542821356;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.2903225806451613;
          result[1] += 0;
          result[2] += 0.03456221198156682;
          result[3] += 0.3847926267281106;
          result[4] += 0.2903225806451613;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          result[0] += 0.525068212824011;
          result[1] += 0.0017053206002728514;
          result[2] += 0.001364256480218281;
          result[3] += 0.3990450204638472;
          result[4] += 0.07281718963165075;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9709844559585492;
          result[1] += 0;
          result[2] += 0.015544041450777202;
          result[3] += 0;
          result[4] += 0.007253886010362694;
          result[5] += 0.002072538860103627;
          result[6] += 0.004145077720207254;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.4602803738317757;
          result[1] += 0;
          result[2] += 0.007009345794392523;
          result[3] += 0.40186915887850466;
          result[4] += 0.12383177570093458;
          result[5] += 0;
          result[6] += 0.007009345794392523;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-23.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6;
          result[4] += 0.4;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.031746031746031744;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.30158730158730157;
          result[4] += 0.6666666666666666;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-305.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9861465746726789;
          result[1] += 0.0007062530559026457;
          result[2] += 0.0014125061118052914;
          result[3] += 0.011300048894442331;
          result[4] += 5.432715814635736e-05;
          result[5] += 0.0001629814744390721;
          result[6] += 0.00021730863258542945;
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
          result[0] += 0.4542172628815228;
          result[1] += 0;
          result[2] += 0.002625533311453889;
          result[3] += 0.5306859205776173;
          result[4] += 0.011158516573679028;
          result[5] += 0;
          result[6] += 0.0013127666557269445;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
          result[0] += 0;
          result[1] += 0.025380710659898477;
          result[2] += 0;
          result[3] += 0.050761421319796954;
          result[4] += 0.9238578680203046;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.2675653594771242;
          result[1] += 0.004493464052287581;
          result[2] += 0.00980392156862745;
          result[3] += 0.7160947712418301;
          result[4] += 0.0016339869281045752;
          result[5] += 0.0004084967320261438;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)97.5) ) ) {
          result[0] += 0.13659605551497445;
          result[1] += 0;
          result[2] += 0.018991964937910884;
          result[3] += 0.1329437545653762;
          result[4] += 0.7114682249817385;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.037037037037037035;
          result[4] += 0.9629629629629629;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)1.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9975567190226876;
          result[1] += 0;
          result[2] += 0.002443280977312391;
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
          result[0] += 0.9995813271927988;
          result[1] += 0;
          result[2] += 0.0004186728072011723;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0.2803577571379429;
          result[1] += 0.007223942208462332;
          result[2] += 0.005159958720330237;
          result[3] += 0.6191950464396285;
          result[4] += 0.08806329549363605;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.06524249422632794;
          result[1] += 0;
          result[2] += 0.005773672055427252;
          result[3] += 0.11720554272517321;
          result[4] += 0.8117782909930716;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
          result[0] += 0.6585782638414218;
          result[1] += 0;
          result[2] += 0.006493506493506495;
          result[3] += 0.29084073820915934;
          result[4] += 0.044087491455912516;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8600337268128163;
          result[1] += 0.002192242833052277;
          result[2] += 0.004384485666104554;
          result[3] += 0.1306913996627319;
          result[4] += 0.0005059021922428331;
          result[5] += 0.0006745362563237775;
          result[6] += 0.0015177065767284993;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)103.5) ) ) {
          result[0] += 0;
          result[1] += 0.0013637913399249914;
          result[2] += 0;
          result[3] += 0.998636208660075;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.997037037037037;
          result[5] += 0.002962962962962963;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9090909090909091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.09090909090909091;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)86) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
          result[0] += 0.9986772486772487;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0013227513227513227;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.000314663310258024;
          result[2] += 0;
          result[3] += 0.998741346758968;
          result[4] += 0;
          result[5] += 0.0009439899307740719;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.001447178002894356;
          result[3] += 0;
          result[4] += 0.9985528219971056;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1111111111111111;
          result[3] += 0;
          result[4] += 0.8833333333333333;
          result[5] += 0.005555555555555556;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-35) ) ) {
          result[0] += 0;
          result[1] += 0.8461538461538461;
          result[2] += 0;
          result[3] += 0.15384615384615385;
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
          result[0] += 0.9977864063577312;
          result[1] += 0.0005806147258409841;
          result[2] += 0.0013789599738723373;
          result[3] += 0.00010886526109518453;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00014515368146024603;
        } else {
          result[0] += 0.6446280991735537;
          result[1] += 0;
          result[2] += 0.2809917355371901;
          result[3] += 0.0743801652892562;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)65) ) ) {
          result[0] += 0.7978142076502732;
          result[1] += 0.0273224043715847;
          result[2] += 0;
          result[3] += 0.17486338797814208;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.043137254901960784;
          result[2] += 0;
          result[3] += 0.9568627450980393;
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
          result[0] += 0.38387252535007244;
          result[1] += 0;
          result[2] += 0.013520038628681796;
          result[3] += 0.5992274263640753;
          result[4] += 0;
          result[5] += 0.0009657170449058426;
          result[6] += 0.0024142926122646064;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          result[0] += 0.4868989346386409;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.513101065361359;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9940222032450897;
          result[1] += 0;
          result[2] += 0.0034158838599487617;
          result[3] += 0.002134927412467976;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004269854824935952;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)58.5) ) ) {
          result[0] += 0.9721603142824765;
          result[1] += 0.0007177123862048125;
          result[2] += 0.0007177123862048125;
          result[3] += 0.02598874324783742;
          result[4] += 0.0001888716805802138;
          result[5] += 7.554867223208552e-05;
          result[6] += 0.00015109734446417105;
        } else {
          result[0] += 0.5645607317592002;
          result[1] += 0;
          result[2] += 0.008083386513507764;
          result[3] += 0.36821952776005107;
          result[4] += 0.05913635396724101;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.16871416871416872;
          result[1] += 0;
          result[2] += 0.00819000819000819;
          result[3] += 0.8184548184548185;
          result[4] += 0.003003003003003003;
          result[5] += 0.001638001638001638;
          result[6] += 0;
        } else {
          result[0] += 0.9965725806451613;
          result[1] += 0;
          result[2] += 0.0018145161290322581;
          result[3] += 0.001411290322580645;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00020161290322580645;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)217) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)36.5) ) ) {
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
          result[2] += 0.015748031496062992;
          result[3] += 0;
          result[4] += 0.984251968503937;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
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
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)11) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          result[0] += 0.2752;
          result[1] += 0.0144;
          result[2] += 0;
          result[3] += 0.7104;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.027950310559006212;
          result[1] += 0;
          result[2] += 0.023291925465838508;
          result[3] += 0.9487577639751553;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
          result[0] += 0.010344827586206896;
          result[1] += 0.05517241379310345;
          result[2] += 0;
          result[3] += 0.09310344827586207;
          result[4] += 0.8413793103448276;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-26) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03954802259887006;
          result[4] += 0.96045197740113;
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
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)39) ) ) {
          result[0] += 0.9994366197183099;
          result[1] += 0;
          result[2] += 0.0005633802816901409;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5224646983311939;
          result[1] += 0;
          result[2] += 0.02695763799743261;
          result[3] += 0.4505776636713736;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
          result[0] += 0.0836873406966865;
          result[1] += 0.003823279524214104;
          result[2] += 0.01316907391673747;
          result[3] += 0.8759558198810536;
          result[4] += 0.023364485981308414;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.008491508491508492;
          result[2] += 0;
          result[3] += 0.14185814185814186;
          result[4] += 0.8496503496503497;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)25) ) ) {
          result[0] += 0.7319474835886215;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2658643326039387;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002188183807439825;
        } else {
          result[0] += 0.9758690717954844;
          result[1] += 0;
          result[2] += 0.0007167602436984828;
          result[3] += 0.023414167960817106;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
          result[0] += 0.9131724683544306;
          result[1] += 0.0027689873417721523;
          result[2] += 0.001186708860759494;
          result[3] += 0.08148734177215192;
          result[4] += 0.00039556962025316466;
          result[5] += 0.00039556962025316466;
          result[6] += 0.000593354430379747;
        } else {
          result[0] += 0.9941792782305006;
          result[1] += 0.0003104384943733023;
          result[2] += 0.00046565774155995343;
          result[3] += 0.004501358168412883;
          result[4] += 0.00023282887077997672;
          result[5] += 0.0003104384943733023;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)101) ) ) {
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
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          result[0] += 0.5769230769230769;
          result[1] += 0;
          result[2] += 0.2980769230769231;
          result[3] += 0;
          result[4] += 0.11538461538461539;
          result[5] += 0.009615384615384616;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0015455950540958269;
          result[3] += 0;
          result[4] += 0.9984544049459042;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)74) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-190.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9969684721099434;
          result[1] += 0;
          result[2] += 0.001818916734033953;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0012126111560226355;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)130.5) ) ) {
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)83) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          result[0] += 0.9973347547974414;
          result[1] += 0;
          result[2] += 0.0026652452025586353;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9997991665411458;
          result[1] += 0;
          result[2] += 0.0002008334588542451;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)3.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.989247311827957;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.010752688172043012;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4319) ) ) {
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9994232987312572;
          result[5] += 0.0005767012687427913;
          result[6] += 0;
        } else {
          result[0] += 0.021604938271604937;
          result[1] += 0.0073599240265906935;
          result[2] += 0.012345679012345678;
          result[3] += 0.9575023741690408;
          result[4] += 0;
          result[5] += 0.0011870845204178537;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)36.5) ) ) {
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
          result[2] += 0.010309278350515464;
          result[3] += 0;
          result[4] += 0.9896907216494846;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 0.4338729763387298;
          result[1] += 0;
          result[2] += 0.00199252801992528;
          result[3] += 0.564134495641345;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9515477792732167;
          result[1] += 0;
          result[2] += 0.007178106774338268;
          result[3] += 0.038582323912068194;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0026917900403768506;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
          result[0] += 0.9932452276064611;
          result[1] += 0;
          result[2] += 0.006754772393538913;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7112932604735883;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2887067395264117;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          result[0] += 0.9696569920844327;
          result[1] += 0;
          result[2] += 0.030343007915567283;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
          result[0] += 0.0779467680608365;
          result[1] += 0.004752851711026616;
          result[2] += 0.0042775665399239545;
          result[3] += 0.8987642585551331;
          result[4] += 0.014258555133079848;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.18508026440037773;
          result[4] += 0.8149197355996223;
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)26.5) ) ) {
          result[0] += 0.020618556701030927;
          result[1] += 0.07216494845360824;
          result[2] += 0;
          result[3] += 0.9072164948453608;
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)5624.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-7.5) ) ) {
          result[0] += 0.9682539682539683;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.031746031746031744;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9994669915480089;
          result[1] += 0;
          result[2] += 0.0005330084519911673;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 0.0011547344110854503;
          result[2] += 0;
          result[3] += 0.24480369515011546;
          result[4] += 0.754041570438799;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.41457389872375466;
          result[1] += 0.0006861534239055854;
          result[2] += 0.007273226293399205;
          result[3] += 0.5717030327981337;
          result[4] += 0.004803073967339098;
          result[5] += 0.0005489227391244683;
          result[6] += 0.00041169205434335123;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)36) ) ) {
          result[0] += 0.9930722088995471;
          result[1] += 0;
          result[2] += 0.004796163069544364;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0021316280309086064;
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
          result[0] += 0.0028169014084507044;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9943661971830986;
          result[5] += 0.0028169014084507044;
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
          result[0] += 0.0003115264797507789;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9993769470404985;
          result[4] += 0;
          result[5] += 0.0003115264797507789;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.6538461538461539;
          result[2] += 0.2692307692307692;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.07692307692307693;
          result[6] += 0;
        }
      }
    } else {
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
          result[2] += 0.0056657223796034;
          result[3] += 0;
          result[4] += 0.9943342776203966;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
          result[0] += 0.9990139563106796;
          result[1] += 0;
          result[2] += 0.0009860436893203883;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.25;
          result[2] += 0;
          result[3] += 0.75;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
          result[0] += 0.46794871794871795;
          result[1] += 0.0011446886446886447;
          result[2] += 0.0022893772893772895;
          result[3] += 0.5286172161172161;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6854040242733951;
          result[1] += 0.0047908016608112424;
          result[2] += 0.012775471095496647;
          result[3] += 0.29543276908335997;
          result[4] += 0;
          result[5] += 0.00031938677738741617;
          result[6] += 0.0012775471095496647;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
          result[0] += 0.9972813049736127;
          result[1] += 0;
          result[2] += 0.002718695026387334;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9619771863117871;
          result[1] += 0;
          result[2] += 0.0058496636443404505;
          result[3] += 0.03012576776835332;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0020473822755191578;
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
