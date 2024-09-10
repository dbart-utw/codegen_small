
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
          result[0] += 0.969239602985809;
          result[1] += 0.0010663604298252808;
          result[2] += 0.0029529981133623157;
          result[3] += 0.02641292756951849;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003281109014847018;
        } else {
          result[0] += 0.6378233719892953;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3621766280107047;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-178) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.999615137908916;
          result[1] += 0;
          result[2] += 0.0003848620910840282;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          result[0] += 0.48127128263337116;
          result[1] += 0;
          result[2] += 0.018161180476730987;
          result[3] += 0.49943246311010214;
          result[4] += 0;
          result[5] += 0.0011350737797956867;
          result[6] += 0;
        } else {
          result[0] += 0.075230972283326;
          result[1] += 0.003959524857017158;
          result[2] += 0.01627804663440387;
          result[3] += 0.8737351517817862;
          result[4] += 0.030796304443466784;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
          result[0] += 0.0008904719501335708;
          result[1] += 0.016918967052537846;
          result[2] += 0;
          result[3] += 0.25467497773820125;
          result[4] += 0.7275155832591274;
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.14130729590452942;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8586927040954706;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)40) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5681818181818182;
          result[3] += 0;
          result[4] += 0.4090909090909091;
          result[5] += 0.022727272727272728;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
          result[0] += 0.9981642955484167;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0018357044515832951;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9834558823529411;
          result[1] += 0;
          result[2] += 0.01011029411764706;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.006433823529411764;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)29.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9809523809523809;
          result[4] += 0.01904761904761905;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)86.5) ) ) {
          result[0] += 0.5634458672875436;
          result[1] += 0;
          result[2] += 0.01338766006984866;
          result[3] += 0.40570430733410945;
          result[4] += 0.017462165308498253;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.2213359920239282;
          result[1] += 0.01296111665004985;
          result[2] += 0.00897308075772682;
          result[3] += 0.7567298105682951;
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
          result[1] += 0.08088235294117647;
          result[2] += 0;
          result[3] += 0.9191176470588235;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-5) ) ) {
          result[0] += 0.8;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9996197429462317;
          result[1] += 0;
          result[2] += 0.00034223134839151266;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 3.802570537683474e-05;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          result[0] += 0.05306380290587493;
          result[1] += 0.00947567909033481;
          result[2] += 0.008212255211623502;
          result[3] += 0.8945041061276059;
          result[4] += 0.03348073278584966;
          result[5] += 0.0012634238787113078;
          result[6] += 0;
        } else {
          result[0] += 0.9838380896913221;
          result[1] += 0;
          result[2] += 0.005678509027373327;
          result[3] += 0.009027373325567852;
          result[4] += 0;
          result[5] += 0.0002912055911473501;
          result[6] += 0.0011648223645894004;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)101) ) ) {
          result[0] += 0;
          result[1] += 0.0006702412868632709;
          result[2] += 0;
          result[3] += 0.997319034852547;
          result[4] += 0.0010053619302949064;
          result[5] += 0.0010053619302949064;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0350140056022409;
          result[3] += 0;
          result[4] += 0.9635854341736695;
          result[5] += 0.0014005602240896359;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9596774193548387;
          result[1] += 0;
          result[2] += 0.04032258064516129;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          result[0] += 0.9968091895341417;
          result[1] += 0;
          result[2] += 0.003190810465858328;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9995863666446062;
          result[1] += 0;
          result[2] += 0.00041363335539377897;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          result[0] += 0.8832668486248163;
          result[1] += 0.0018895653999580096;
          result[2] += 0.0014696619777451185;
          result[3] += 0.11232416544194836;
          result[4] += 0;
          result[5] += 0.000419903422212891;
          result[6] += 0.0006298551333193366;
        } else {
          result[0] += 0.9601253204215323;
          result[1] += 0;
          result[2] += 0.006550840216462546;
          result[3] += 0.031045286243235545;
          result[4] += 0;
          result[5] += 0.0002848191398461977;
          result[6] += 0.0019937339789233835;
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
          result[0] += 0.16295491580662685;
          result[1] += 0.007332971211298209;
          result[2] += 0.01575230852797393;
          result[3] += 0.8136882129277567;
          result[4] += 0;
          result[5] += 0.0002715915263443781;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)21) ) ) {
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
          result[2] += 0.012364760432766615;
          result[3] += 0;
          result[4] += 0.9829984544049459;
          result[5] += 0.00463678516228748;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
          result[0] += 0;
          result[1] += 0.0006648936170212766;
          result[2] += 0;
          result[3] += 0.9993351063829787;
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)16.5) ) ) {
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
          result[4] += 0.9923076923076923;
          result[5] += 0.007692307692307693;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0;
          result[1] += 0.0009457755359394704;
          result[2] += 0;
          result[3] += 0.9977931904161412;
          result[4] += 0;
          result[5] += 0.0012610340479192938;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.4375;
          result[2] += 0.53125;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.03125;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9967462039045554;
          result[1] += 0;
          result[2] += 0.002711496746203905;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000542299349240781;
        } else {
          result[0] += 0.9997372109320253;
          result[1] += 0;
          result[2] += 0.0002627890679747723;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
          result[0] += 0.5420223243598162;
          result[1] += 0.0013131976362442549;
          result[2] += 0.004432042022324361;
          result[3] += 0.45206828627708473;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00016414970453053186;
        } else {
          result[0] += 0.9175179720015134;
          result[1] += 0;
          result[2] += 0.011350737797956867;
          result[3] += 0.07037457434733257;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007567158531971245;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
          result[0] += 0.058823529411764705;
          result[1] += 0.9411764705882353;
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)125.5) ) ) {
          result[0] += 0;
          result[1] += 0.0038910505836575876;
          result[2] += 0;
          result[3] += 0.058365758754863814;
          result[4] += 0.9377431906614786;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.05263157894736842;
          result[1] += 0.2631578947368421;
          result[2] += 0;
          result[3] += 0.15789473684210525;
          result[4] += 0.5263157894736842;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
          result[0] += 0.9869358669833729;
          result[1] += 0;
          result[2] += 0.013064133016627079;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.08534780463739516;
          result[1] += 0.003453379378391712;
          result[2] += 0.00246669955599408;
          result[3] += 0.9077454366058214;
          result[4] += 0.000986679822397632;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)16) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7309941520467836;
          result[1] += 0;
          result[2] += 0.06432748538011696;
          result[3] += 0.2046783625730994;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.16974169741697417;
          result[1] += 0;
          result[2] += 0.01845018450184502;
          result[3] += 0.8118081180811808;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-10) ) ) {
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9943582510578279;
          result[1] += 0;
          result[2] += 0.005641748942172073;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9995428666417321;
          result[1] += 0;
          result[2] += 0.00045713335826788013;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.6687265504303685;
          result[1] += 0.0022070183182520413;
          result[2] += 0.0048554403001544915;
          result[3] += 0.3125137938644891;
          result[4] += 0.010814389759435003;
          result[5] += 0.0004414036636504083;
          result[6] += 0.0004414036636504083;
        } else {
          result[0] += 0;
          result[1] += 0.0013539128080151638;
          result[2] += 0.008123476848090982;
          result[3] += 0.8058489033306255;
          result[4] += 0.18386135932845923;
          result[5] += 0.0008123476848090983;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)36) ) ) {
          result[0] += 0.9920886075949367;
          result[1] += 0;
          result[2] += 0.005537974683544304;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0023734177215189874;
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)6504) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-305.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9995426306361246;
          result[1] += 0;
          result[2] += 0.0004573693638754431;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)6) ) ) {
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.8682368625708254;
          result[1] += 0.0017775802688590157;
          result[2] += 0.005999333407399178;
          result[3] += 0.12287523608487946;
          result[4] += 0;
          result[5] += 0.00022219753360737697;
          result[6] += 0.0008887901344295079;
        } else {
          result[0] += 0;
          result[1] += 0.0005446623093681918;
          result[2] += 0.00789760348583878;
          result[3] += 0.8036492374727668;
          result[4] += 0.18763616557734206;
          result[5] += 0.0002723311546840959;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)73) ) ) {
          result[0] += 0.0038550501156515036;
          result[1] += 0;
          result[2] += 0.026214340786430222;
          result[3] += 0.9699306090979183;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          result[0] += 0;
          result[1] += 0.004897159647404506;
          result[2] += 0;
          result[3] += 0.9951028403525954;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.11363636363636363;
          result[2] += 0.06818181818181818;
          result[3] += 0.8181818181818182;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8735632183908046;
          result[1] += 0;
          result[2] += 0.12643678160919541;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.008547008547008548;
          result[1] += 0.11965811965811966;
          result[2] += 0;
          result[3] += 0.8717948717948718;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)1753.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
          result[0] += 0.9968421052631579;
          result[1] += 0;
          result[2] += 0.003157894736842105;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9814814814814815;
          result[1] += 0;
          result[2] += 0.009259259259259259;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.009259259259259259;
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
          result[0] += 0.9989211455472734;
          result[1] += 0;
          result[2] += 0.0010788544527265593;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-305.5) ) ) {
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          result[0] += 0.9132267261683401;
          result[1] += 0.0013635800173546547;
          result[2] += 0.0049584727903805624;
          result[3] += 0.07983141192512706;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006198090987975703;
        } else {
          result[0] += 0.15966735966735968;
          result[1] += 0;
          result[2] += 0.014137214137214138;
          result[3] += 0.7118503118503119;
          result[4] += 0.11351351351351352;
          result[5] += 0.0008316008316008316;
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
          result[0] += 0.17413905133203378;
          result[1] += 0.018193632228719947;
          result[2] += 0.004548408057179987;
          result[3] += 0.8031189083820662;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)101) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0006738544474393531;
          result[2] += 0;
          result[3] += 0.9993261455525606;
          result[4] += 0;
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 0.006963788300835654;
          result[2] += 0;
          result[3] += 0.9930362116991643;
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
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)8.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-29) ) ) {
          result[0] += 0;
          result[1] += 0.008532423208191127;
          result[2] += 0;
          result[3] += 0.04948805460750853;
          result[4] += 0.9419795221843004;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.2320396366639141;
          result[1] += 0.00495458298926507;
          result[2] += 0.011147811725846408;
          result[3] += 0.48554913294797686;
          result[4] += 0.2663088356729975;
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)19.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.04938271604938271;
          result[3] += 0;
          result[4] += 0.9259259259259259;
          result[5] += 0.024691358024691357;
          result[6] += 0;
        } else {
          result[0] += 0.001364256480218281;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9972714870395635;
          result[4] += 0;
          result[5] += 0.001364256480218281;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          result[0] += 0.9436619718309859;
          result[1] += 0;
          result[2] += 0.056338028169014086;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.002857142857142857;
          result[3] += 0;
          result[4] += 0.9971428571428571;
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
          result[0] += 0.6751124792801326;
          result[1] += 0;
          result[2] += 0.007814349988160076;
          result[3] += 0.31446838740232064;
          result[4] += 0;
          result[5] += 0.00023679848448969926;
          result[6] += 0.0023679848448969927;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.9946559057694406;
          result[1] += 0.0009270367542807287;
          result[2] += 0.0015268840658741413;
          result[3] += 0.0025629839677173086;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00032718944268731603;
        } else {
          result[0] += 0.7085271317829458;
          result[1] += 0;
          result[2] += 0.0013781223083548667;
          result[3] += 0.2897502153316107;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00034453057708871667;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
          result[0] += 0.001364256480218281;
          result[1] += 0.001364256480218281;
          result[2] += 0;
          result[3] += 0.9949977262391997;
          result[4] += 0.0018190086402910413;
          result[5] += 0.00045475216007276033;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7272727272727273;
          result[3] += 0;
          result[4] += 0.2727272727272727;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0243161094224924;
          result[3] += 0;
          result[4] += 0.9746707193515705;
          result[5] += 0.0010131712259371835;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9904076738609112;
          result[1] += 0;
          result[2] += 0.009592326139088728;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9993397289004544;
          result[1] += 0;
          result[2] += 0.0006214316231017206;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 3.883947644385754e-05;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.9591243372669745;
          result[1] += 0.0030785017957927143;
          result[2] += 0.005643919958953309;
          result[3] += 0.03112707371301522;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001026167265264238;
        } else {
          result[0] += 0.4156807700020052;
          result[1] += 0;
          result[2] += 0.0060156406657309;
          result[3] += 0.5762983757770203;
          result[4] += 0;
          result[5] += 0.00060156406657309;
          result[6] += 0.0014036494886705434;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)4.5) ) ) {
          result[0] += 0.3541666666666667;
          result[1] += 0;
          result[2] += 0.03125;
          result[3] += 0.6145833333333334;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)124.5) ) ) {
          result[0] += 0.13644067796610168;
          result[1] += 0.00847457627118644;
          result[2] += 0;
          result[3] += 0.8550847457627119;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.5714285714285714;
          result[2] += 0;
          result[3] += 0.42857142857142855;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)67) ) ) {
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          result[0] += 0.9994568169473113;
          result[1] += 0;
          result[2] += 0.0005431830526887561;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
          result[0] += 0.9714372531145549;
          result[1] += 0.002127013065937405;
          result[2] += 0.003950167122455181;
          result[3] += 0.020966271649954422;
          result[4] += 0;
          result[5] += 0.00015192950470981463;
          result[6] += 0.0013673655423883319;
        } else {
          result[0] += 0.7394179894179894;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2605820105820106;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0.0010369858278603526;
          result[2] += 0;
          result[3] += 0.9989630141721396;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1984126984126984;
          result[3] += 0;
          result[4] += 0.8015873015873016;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)27) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          result[0] += 0.5579058699101005;
          result[1] += 0;
          result[2] += 0.010576414595452142;
          result[3] += 0.4315177154944474;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.07914262159934048;
          result[1] += 0.003709810387469085;
          result[2] += 0.016488046166529265;
          result[3] += 0.8779884583676835;
          result[4] += 0.02267106347897774;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3592233009708738;
          result[4] += 0.6407766990291263;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0006844626967830253;
          result[1] += 0.01026694045174538;
          result[2] += 0;
          result[3] += 0.053388090349075976;
          result[4] += 0.9356605065023956;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)57) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)40) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8888888888888888;
          result[5] += 0.1111111111111111;
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)16.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)67) ) ) {
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
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
          result[1] += 0.008641382621219395;
          result[2] += 0.011521843494959194;
          result[3] += 0.9788766202592415;
          result[4] += 0;
          result[5] += 0.0009601536245799327;
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
          result[1] += 0.0018315018315018315;
          result[2] += 0;
          result[3] += 0.9981684981684982;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)64) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)28) ) ) {
          result[0] += 0;
          result[1] += 0.011111111111111112;
          result[2] += 0;
          result[3] += 0.9888888888888889;
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
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 0.9996471418489767;
          result[1] += 0;
          result[2] += 0.0002520415364452062;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00010081661457808247;
        } else {
          result[0] += 0.7022900763358779;
          result[1] += 0.0038167938931297713;
          result[2] += 0;
          result[3] += 0.2938931297709924;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 0.5470097967539115;
          result[1] += 0.0017546424915923383;
          result[2] += 0.009504313496125166;
          result[3] += 0.44143880684310577;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002924404152653897;
        } else {
          result[0] += 0.9873546808076689;
          result[1] += 0;
          result[2] += 0.0029573730369161742;
          result[3] += 0.009076075871915156;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006118702834998982;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)9.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
          result[0] += 0.08873720136518772;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.909556313993174;
          result[4] += 0;
          result[5] += 0.0017064846416382253;
          result[6] += 0;
        } else {
          result[0] += 0.3134863701578192;
          result[1] += 0.0014347202295552368;
          result[2] += 0;
          result[3] += 0.6843615494978479;
          result[4] += 0;
          result[5] += 0.0007173601147776184;
          result[6] += 0;
        }
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0.3111111111111111;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6888888888888889;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.011981566820276499;
          result[3] += 0;
          result[4] += 0.9875576036866359;
          result[5] += 0.0004608294930875576;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
          result[0] += 0.988950276243094;
          result[1] += 0;
          result[2] += 0.0027624309392265192;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.008287292817679558;
        } else {
          result[0] += 0.9987445072190835;
          result[1] += 0;
          result[2] += 0.0012554927809165098;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)35.5) ) ) {
          result[0] += 0.9990683591475487;
          result[1] += 0;
          result[2] += 0.00093164085245138;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
          result[0] += 0.9609620497945371;
          result[1] += 0.0007251631617113851;
          result[2] += 0.007735073724921441;
          result[3] += 0.029489968576262994;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0010877447425670776;
        } else {
          result[0] += 0.2517482517482518;
          result[1] += 0.02097902097902098;
          result[2] += 0;
          result[3] += 0.7272727272727273;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8571428571428571;
          result[3] += 0.14285714285714285;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0011049723756906078;
          result[3] += 0.9988950276243094;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
          result[0] += 0;
          result[1] += 0.0024286581663630845;
          result[2] += 0.007893139040680024;
          result[3] += 0.9854280510018215;
          result[4] += 0.004250151791135397;
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
          result[0] += 0.005050505050505051;
          result[1] += 0;
          result[2] += 0.05555555555555555;
          result[3] += 0.9393939393939394;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
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
          result[0] += 0.08;
          result[1] += 0.8;
          result[2] += 0;
          result[3] += 0.12;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-5) ) ) {
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
          result[0] += 0.9769452449567724;
          result[1] += 0;
          result[2] += 0.023054755043227664;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9996923668525284;
          result[1] += 0;
          result[2] += 0.00030763314747164007;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.8801532287486319;
          result[1] += 0.003101058008026268;
          result[2] += 0.0012769062385990515;
          result[3] += 0.11510397665085735;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00036483035388544326;
        } else {
          result[0] += 0.4158324063774565;
          result[1] += 0;
          result[2] += 0.010011123470522805;
          result[3] += 0.5220615498702262;
          result[4] += 0.05153874675565444;
          result[5] += 0;
          result[6] += 0.0005561735261401558;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.996415770609319;
          result[5] += 0.0035842293906810036;
          result[6] += 0;
        } else {
          result[0] += 0.02063628546861565;
          result[1] += 0;
          result[2] += 0.015477214101461736;
          result[3] += 0.9621668099742047;
          result[4] += 0;
          result[5] += 0.0017196904557179708;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
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
          result[0] += 0.061224489795918366;
          result[1] += 0.24489795918367346;
          result[2] += 0;
          result[3] += 0.6938775510204082;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
          result[0] += 0.9787234042553191;
          result[1] += 0;
          result[2] += 0.02127659574468085;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.07515657620041753;
          result[1] += 0.005741127348643006;
          result[2] += 0.0005219206680584551;
          result[3] += 0.9180584551148225;
          result[4] += 0.0005219206680584551;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)48) ) ) {
          result[0] += 0.9217391304347826;
          result[1] += 0;
          result[2] += 0.0782608695652174;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.008849557522123894;
          result[3] += 0.9911504424778761;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)52) ) ) {
          result[0] += 0.0034916201117318434;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.99231843575419;
          result[4] += 0;
          result[5] += 0.004189944134078212;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08484848484848485;
          result[3] += 0;
          result[4] += 0.9030303030303031;
          result[5] += 0.012121212121212121;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82) ) ) {
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
          result[2] += 0.010014306151645207;
          result[3] += 0;
          result[4] += 0.9899856938483548;
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
          result[0] += 0.9984294161123429;
          result[1] += 0;
          result[2] += 0.0015705838876570585;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.9661873299650214;
          result[1] += 0.0017489312087057912;
          result[2] += 0.005052467936261174;
          result[3] += 0.02584531675087447;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011659541391371942;
        } else {
          result[0] += 0.41132580830304194;
          result[1] += 0;
          result[2] += 0.007269944518844463;
          result[3] += 0.579491103883681;
          result[4] += 0;
          result[5] += 0.00038262865888655066;
          result[6] += 0.0015305146355462027;
        }
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0.9986277559235203;
          result[1] += 0;
          result[2] += 0.001280761138047754;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 9.148293843198243e-05;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)9.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.008595988538681949;
          result[2] += 0.008595988538681949;
          result[3] += 0.9820916905444126;
          result[4] += 0;
          result[5] += 0.0007163323782234957;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)27) ) ) {
          result[0] += 0.9959040374488005;
          result[1] += 0.0002925687536571094;
          result[2] += 0.003510825043885313;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002925687536571094;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0015037593984962407;
          result[3] += 0;
          result[4] += 0.9969924812030075;
          result[5] += 0.0015037593984962407;
          result[6] += 0;
        } else {
          result[0] += 0.15560844986611128;
          result[1] += 0;
          result[2] += 0.008925914906277893;
          result[3] += 0.8354656352276109;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          result[0] += 0.8227482678983834;
          result[1] += 0;
          result[2] += 0.010392609699769052;
          result[3] += 0.08342956120092379;
          result[4] += 0.08169745958429561;
          result[5] += 0.0005773672055427252;
          result[6] += 0.0011547344110854503;
        } else {
          result[0] += 0.04200542005420054;
          result[1] += 0.005871725383920506;
          result[2] += 0.005420054200542005;
          result[3] += 0.2999096657633243;
          result[4] += 0.6467931345980127;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
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
          result[0] += 0.05555555555555555;
          result[1] += 0.2222222222222222;
          result[2] += 0;
          result[3] += 0.7222222222222222;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
          result[0] += 0.984149855907781;
          result[1] += 0;
          result[2] += 0.01585014409221902;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.07696307852314092;
          result[1] += 0.004160166406656267;
          result[2] += 0.0010400416016640667;
          result[3] += 0.9167966718668746;
          result[4] += 0.0010400416016640667;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)16) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7814569536423841;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2185430463576159;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)89.5) ) ) {
          result[0] += 0.13043478260869565;
          result[1] += 0;
          result[2] += 0.2608695652173913;
          result[3] += 0.6086956521739131;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9899244332493703;
          result[1] += 0;
          result[2] += 0.010075566750629723;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9994218093512701;
          result[1] += 0;
          result[2] += 0.0005781906487299079;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
          result[0] += 0.9328850210970464;
          result[1] += 0.0017141350210970465;
          result[2] += 0.004219409282700422;
          result[3] += 0.05893987341772152;
          result[4] += 0;
          result[5] += 0.0005274261603375527;
          result[6] += 0.0017141350210970465;
        } else {
          result[0] += 0.02023346303501946;
          result[1] += 0;
          result[2] += 0.021011673151750978;
          result[3] += 0.8505836575875487;
          result[4] += 0.10739299610894942;
          result[5] += 0.0007782101167315177;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
          result[0] += 0;
          result[1] += 0.0009963467286615742;
          result[2] += 0.010959814015277316;
          result[3] += 0.8359349053470608;
          result[4] += 0.15111258718033876;
          result[5] += 0.0009963467286615742;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6978102189781021;
          result[4] += 0.3021897810218978;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          result[0] += 0.9749276759884281;
          result[1] += 0;
          result[2] += 0.02507232401157184;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8333333333333334;
          result[1] += 0;
          result[2] += 0.16666666666666666;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-11) ) ) {
          result[0] += 0.16270218839200762;
          result[1] += 0.02664129400570885;
          result[2] += 0;
          result[3] += 0.8106565176022835;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.006891271056661562;
          result[3] += 0.9931087289433385;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)57) ) ) {
          result[0] += 0.03571428571428571;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9285714285714286;
          result[5] += 0.03571428571428571;
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
          result[2] += 0.011045655375552283;
          result[3] += 0.9860088365243005;
          result[4] += 0;
          result[5] += 0.0029455081001472753;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)1.5) ) ) {
          result[0] += 0.8962674397535786;
          result[1] += 0;
          result[2] += 0.0014495379597753216;
          result[3] += 0.10219242616416017;
          result[4] += 0;
          result[5] += 9.05961224859576e-05;
          result[6] += 0;
        } else {
          result[0] += 0.8571428571428571;
          result[1] += 0;
          result[2] += 0.00117096018735363;
          result[3] += 0.14168618266978922;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 0.9988427839312283;
          result[1] += 0;
          result[2] += 0.0010470050146029646;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00011021105416873313;
        } else {
          result[0] += 0.6963927855711424;
          result[1] += 0.0015030060120240483;
          result[2] += 0.004008016032064129;
          result[3] += 0.2979291917167669;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00016700066800267205;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.983132530120482;
          result[1] += 0;
          result[2] += 0.016867469879518072;
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
          result[0] += 0.11122994652406418;
          result[1] += 0.0074866310160427805;
          result[2] += 0.0032085561497326204;
          result[3] += 0.8780748663101604;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
          result[0] += 0.12109862671660425;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8751560549313359;
          result[4] += 0;
          result[5] += 0.003745318352059925;
          result[6] += 0;
        } else {
          result[0] += 0.9985550739135267;
          result[1] += 0;
          result[2] += 0.0002222963209958875;
          result[3] += 0.0011114816049794375;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00011114816049794375;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44) ) ) {
          result[0] += 0.07482561826252378;
          result[1] += 0;
          result[2] += 0.019023462270133164;
          result[3] += 0.7970830691185796;
          result[4] += 0.10843373493975904;
          result[5] += 0.0006341154090044388;
          result[6] += 0;
        } else {
          result[0] += 0.9877049180327869;
          result[1] += 0;
          result[2] += 0.007513661202185792;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0047814207650273225;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-29) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)106) ) ) {
          result[0] += 0;
          result[1] += 0.038461538461538464;
          result[2] += 0;
          result[3] += 0.9615384615384616;
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
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)8.5) ) ) {
          result[0] += 0.21924029727497935;
          result[1] += 0.0033030553261767133;
          result[2] += 0.01486374896779521;
          result[3] += 0.4913294797687861;
          result[4] += 0.2712634186622626;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
          result[0] += 0.9854710095958913;
          result[1] += 0;
          result[2] += 0.0005406135964319503;
          result[3] += 0.01392080010812272;
          result[4] += 6.757669955399378e-05;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7585453854918344;
          result[1] += 0.001044436004557539;
          result[2] += 0.0027535131029244207;
          result[3] += 0.2278769464489176;
          result[4] += 0.0093049753133308;
          result[5] += 0.00047474363843524496;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-158) ) ) {
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
          result[2] += 0.0020491803278688526;
          result[3] += 0;
          result[4] += 0.9979508196721312;
          result[5] += 0;
          result[6] += 0;
        }
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)112) ) ) {
          result[0] += 0;
          result[1] += 0.0006359300476947536;
          result[2] += 0;
          result[3] += 0.9977742448330683;
          result[4] += 0.0009538950715421304;
          result[5] += 0.0006359300476947536;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.008733624454148471;
          result[4] += 0.9912663755458515;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
          result[0] += 0.008368200836820083;
          result[1] += 0;
          result[2] += 0.012552301255230125;
          result[3] += 0;
          result[4] += 0.9707112970711297;
          result[5] += 0.008368200836820083;
          result[6] += 0;
        } else {
          result[0] += 0.06313131313131314;
          result[1] += 0.010942760942760943;
          result[2] += 0.02356902356902357;
          result[3] += 0;
          result[4] += 0.9023569023569024;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)84.5) ) ) {
          result[0] += 0.07094594594594594;
          result[1] += 0.010135135135135136;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.918918918918919;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9983633387888707;
          result[5] += 0.0016366612111292963;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8865979381443299;
          result[1] += 0.1134020618556701;
          result[2] += 0;
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
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          result[0] += 0.997933584686775;
          result[1] += 0.0004350348027842227;
          result[2] += 0.001486368909512761;
          result[3] += 0.00010875870069605568;
          result[4] += 0;
          result[5] += 0;
          result[6] += 3.625290023201856e-05;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8928571428571429;
          result[3] += 0.10714285714285714;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          result[0] += 0.45021872265966756;
          result[1] += 0;
          result[2] += 0.0006999125109361329;
          result[3] += 0.5490813648293963;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9850657108721624;
          result[1] += 0;
          result[2] += 0.010752688172043012;
          result[3] += 0.0011947431302270011;
          result[4] += 0;
          result[5] += 0.0002986857825567503;
          result[6] += 0.002688172043010753;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9983443708609272;
          result[4] += 0.0006622516556291391;
          result[5] += 0.0009933774834437086;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.035422343324250684;
          result[3] += 0;
          result[4] += 0.9618528610354223;
          result[5] += 0.0027247956403269754;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7819905213270142;
          result[4] += 0.21800947867298578;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0103866128101558;
          result[2] += 0;
          result[3] += 0.013848817080207732;
          result[4] += 0.9757645701096365;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
          result[0] += 0.9974511469838573;
          result[1] += 0;
          result[2] += 0.0001699235344095157;
          result[3] += 0.0023789294817332203;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.2;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
          result[0] += 0.7970033832769454;
          result[1] += 0;
          result[2] += 0.005155469631061705;
          result[3] += 0.19751893024005154;
          result[4] += 0;
          result[5] += 0.00016110842597067828;
          result[6] += 0.00016110842597067828;
        } else {
          result[0] += 0.2777777777777778;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7222222222222222;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          result[0] += 0.9981751824817519;
          result[1] += 0;
          result[2] += 0.0018248175182481751;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)13) ) ) {
          result[0] += 0.608595988538682;
          result[1] += 0.0011461318051575933;
          result[2] += 0.00343839541547278;
          result[3] += 0.38681948424068774;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8117338003502627;
          result[1] += 0.007589025102159953;
          result[2] += 0.013718622300058377;
          result[3] += 0.16695855224751896;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)65) ) ) {
          result[0] += 0.7984913793103449;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.20150862068965517;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)50) ) ) {
          result[0] += 0;
          result[1] += 0.000333000333000333;
          result[2] += 0.003663003663003663;
          result[3] += 0.9493839493839494;
          result[4] += 0.04528804528804529;
          result[5] += 0.001332001332001332;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9523809523809523;
          result[3] += 0;
          result[4] += 0.047619047619047616;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)18) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.008695652173913044;
          result[2] += 0;
          result[3] += 0.991304347826087;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)41.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.9991781626063986;
          result[1] += 5.870267097152921e-05;
          result[2] += 0.0006457293806868212;
          result[3] += 0.00011740534194305841;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.961038961038961;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03896103896103896;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8461538461538461;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.15384615384615385;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          result[0] += 0.9910225020403405;
          result[1] += 0.0012824997085227935;
          result[2] += 0.006529089425206949;
          result[3] += 0.0003497726477789437;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008161361781508686;
        } else {
          result[0] += 0.0035211267605633804;
          result[1] += 0.02464788732394366;
          result[2] += 0;
          result[3] += 0.971830985915493;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
          result[0] += 0.3541561712846348;
          result[1] += 0;
          result[2] += 0.003022670025188917;
          result[3] += 0.6428211586901763;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8625235404896422;
          result[1] += 0;
          result[2] += 0.009180790960451978;
          result[3] += 0.1271186440677966;
          result[4] += 0;
          result[5] += 0.00023540489642184556;
          result[6] += 0.0009416195856873823;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
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
          result[0] += 0.9970506592643997;
          result[1] += 0;
          result[2] += 0.0029493407356002777;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9998045729919874;
          result[1] += 0;
          result[2] += 0.00019542700801250732;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
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
          result[1] += 0.008301625735039779;
          result[2] += 0.006572120373573158;
          result[3] += 0.9809754410238671;
          result[4] += 0.0017295053614666206;
          result[5] += 0.002421307506053269;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)40.5) ) ) {
          result[0] += 0.9939365671641791;
          result[1] += 0;
          result[2] += 0.0046641791044776115;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0013992537313432835;
        } else {
          result[0] += 0.999599679743795;
          result[1] += 0;
          result[2] += 0.00040032025620496394;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
          result[0] += 0.001977848101265823;
          result[1] += 0.005142405063291139;
          result[2] += 0.010680379746835443;
          result[3] += 0.32318037974683544;
          result[4] += 0.6590189873417721;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.00645682001614205;
          result[1] += 0;
          result[2] += 0.010223298358891578;
          result[3] += 0.8011837503362927;
          result[4] += 0.1802528921172989;
          result[5] += 0.0018832391713747645;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)68.5) ) ) {
          result[0] += 0.9944948186528497;
          result[1] += 0;
          result[2] += 0.0019430051813471502;
          result[3] += 0.003562176165803109;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9476309226932669;
          result[1] += 0;
          result[2] += 0.03740648379052369;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.014962593516209476;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)3.5) ) ) {
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)37.5) ) ) {
          result[0] += 0.9972725018596579;
          result[1] += 0;
          result[2] += 0.002727498140342177;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9994246260069045;
          result[1] += 0;
          result[2] += 0.0005753739930955121;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
          result[0] += 0.868920521945433;
          result[1] += 0.004744958481613286;
          result[2] += 0.003262158956109134;
          result[3] += 0.12158956109134045;
          result[4] += 0;
          result[5] += 0.0002965599051008304;
          result[6] += 0.0011862396204033216;
        } else {
          result[0] += 0.6719723183391003;
          result[1] += 0;
          result[2] += 0.007889273356401385;
          result[3] += 0.28;
          result[4] += 0.03903114186851211;
          result[5] += 0.0006920415224913495;
          result[6] += 0.0004152249134948097;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)21.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0226928895612708;
          result[3] += 0;
          result[4] += 0.9742813918305597;
          result[5] += 0.0030257186081694403;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.00033090668431502316;
          result[2] += 0.005625413633355393;
          result[3] += 0.9940436796823295;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0.19189511323003575;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5947556615017878;
          result[4] += 0.2133492252681764;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.06786271450858035;
          result[1] += 0.01014040561622465;
          result[2] += 0.0078003120124804995;
          result[3] += 0.5124804992199687;
          result[4] += 0.4017160686427457;
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
          result[1] += 0.1282051282051282;
          result[2] += 0;
          result[3] += 0.8717948717948718;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
          result[0] += 0.8;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.12790697674418605;
          result[2] += 0;
          result[3] += 0.872093023255814;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0.20071258907363423;
          result[1] += 0.007719714964370547;
          result[2] += 0;
          result[3] += 0.7897862232779098;
          result[4] += 0.001781472684085511;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.028925619834710745;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.14738292011019283;
          result[4] += 0.8236914600550964;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
          result[0] += 0.9953917050691244;
          result[1] += 0;
          result[2] += 0.004608294930875576;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.020446096654275093;
          result[3] += 0.6059479553903345;
          result[4] += 0.3736059479553903;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
          result[0] += 0.9822323959014606;
          result[1] += 0;
          result[2] += 0.0003270111183780249;
          result[3] += 0.016786570743405275;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006540222367560497;
        } else {
          result[0] += 0.07504363001745201;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9214659685863874;
          result[4] += 0;
          result[5] += 0.0034904013961605585;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
          result[0] += 0.15991692627206647;
          result[1] += 0.0020768431983385254;
          result[2] += 0.009345794392523364;
          result[3] += 0.7933541017653167;
          result[4] += 0.03426791277258567;
          result[5] += 0.0010384215991692627;
          result[6] += 0;
        } else {
          result[0] += 0.9948489941983408;
          result[1] += 0.0009217589329284824;
          result[2] += 0.0017350756384536137;
          result[3] += 0.0024399501165753945;
          result[4] += 0;
          result[5] += 0;
          result[6] += 5.422111370167543e-05;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
          result[0] += 0.25254813137032844;
          result[1] += 0;
          result[2] += 0.015855039637599093;
          result[3] += 0.6268403171007928;
          result[4] += 0.10475651189127973;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8732276897414514;
          result[1] += 0;
          result[2] += 0.007506255212677232;
          result[3] += 0.11175979983319434;
          result[4] += 0.005004170141784821;
          result[5] += 0.0008340283569641369;
          result[6] += 0.0016680567139282737;
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
          result[0] += 0.3885070112730272;
          result[1] += 0;
          result[2] += 0.0021996150673632116;
          result[3] += 0.4652185867473192;
          result[4] += 0.14297497937860873;
          result[5] += 0.0008248556502612042;
          result[6] += 0.00027495188342040145;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9965800273597811;
          result[4] += 0.003419972640218878;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0005589714924538849;
          result[1] += 0.0005589714924538849;
          result[2] += 0.006148686416992733;
          result[3] += 0.9139183901621017;
          result[4] += 0.07546115148127445;
          result[5] += 0.003353828954723309;
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
          result[2] += 0.017467248908296942;
          result[3] += 0;
          result[4] += 0.982532751091703;
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
          result[1] += 0.9411764705882353;
          result[2] += 0;
          result[3] += 0.058823529411764705;
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
          result[0] += 0.9839142091152815;
          result[1] += 0;
          result[2] += 0.010723860589812333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.005361930294906166;
        } else {
          result[0] += 0.99812734082397;
          result[1] += 0;
          result[2] += 0.0018726591760299626;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
          result[0] += 0.9993044083123207;
          result[1] += 0;
          result[2] += 0.0006955916876793323;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)1.5) ) ) {
          result[0] += 0.4897739504843919;
          result[1] += 0.004574811625403661;
          result[2] += 0.00403659849300323;
          result[3] += 0.5008073196986007;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000807319698600646;
        } else {
          result[0] += 0.5879682179341658;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.4120317820658343;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          result[0] += 0.9336232980332829;
          result[1] += 0;
          result[2] += 0.009266263237518911;
          result[3] += 0.05446293494704992;
          result[4] += 0;
          result[5] += 0.00018910741301059002;
          result[6] += 0.0024583963691376704;
        } else {
          result[0] += 0.26720647773279355;
          result[1] += 0.017543859649122806;
          result[2] += 0.017543859649122806;
          result[3] += 0.6977058029689609;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0.01293103448275862;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.017241379310344827;
          result[4] += 0.9698275862068966;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.23333333333333334;
          result[2] += 0;
          result[3] += 0.4166666666666667;
          result[4] += 0.35;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0010422094841063055;
          result[3] += 0.9973944762897343;
          result[4] += 0.0015633142261594582;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9681592039800995;
          result[1] += 0.011940298507462687;
          result[2] += 0.01990049751243781;
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
          result[0] += 0.9700854700854701;
          result[1] += 0;
          result[2] += 0.029914529914529916;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.08865248226950355;
          result[1] += 0;
          result[2] += 0.03900709219858156;
          result[3] += 0.8723404255319149;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
          result[0] += 0.9862557715022012;
          result[1] += 0;
          result[2] += 0.00021475357027810586;
          result[3] += 0.013099967786964458;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004295071405562117;
        } else {
          result[0] += 0.06602254428341385;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9339774557165862;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
          result[0] += 0.1391213389121339;
          result[1] += 0.002092050209205021;
          result[2] += 0.007322175732217574;
          result[3] += 0.8043933054393306;
          result[4] += 0.04288702928870294;
          result[5] += 0.004184100418410042;
          result[6] += 0;
        } else {
          result[0] += 0.9952205680382354;
          result[1] += 0.000604295995165632;
          result[2] += 0.001538207987694336;
          result[3] += 0.002417183980662528;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00021974399824204802;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
          result[0] += 0.29647724350732835;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7035227564926716;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6321967579653438;
          result[1] += 0;
          result[2] += 0.012297372833985467;
          result[3] += 0;
          result[4] += 0.3555058692006708;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)48.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9230769230769231;
          result[4] += 0.07264957264957266;
          result[5] += 0.004273504273504274;
          result[6] += 0;
        } else {
          result[0] += 0.9951397326852977;
          result[1] += 0;
          result[2] += 0.003037667071688943;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0018226002430133657;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)112) ) ) {
          result[0] += 0.0024547407180116605;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9957042037434797;
          result[4] += 0.0012273703590058303;
          result[5] += 0.0006136851795029151;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0043859649122807015;
          result[4] += 0.9956140350877193;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)35) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.998165137614679;
          result[5] += 0.001834862385321101;
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
          result[1] += 0.3469387755102041;
          result[2] += 0.6122448979591837;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.04081632653061224;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9988794947539982;
          result[1] += 0;
          result[2] += 0.0011205052460018336;
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
          result[0] += 0.989100817438692;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.010899182561307902;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          result[0] += 0.09843081312410841;
          result[1] += 0.019971469329529243;
          result[2] += 0.037089871611982884;
          result[3] += 0.8445078459343794;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9816446402349487;
          result[1] += 0;
          result[2] += 0.003793441018110622;
          result[3] += 0.013460597161037691;
          result[4] += 0;
          result[5] += 0.00012236906510034267;
          result[6] += 0.0009789525208027414;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-3.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.013856812933025405;
          result[3] += 0.9861431870669746;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0005370569280343716;
          result[2] += 0.0005370569280343716;
          result[3] += 0.9989258861439313;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)112) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9990524320909665;
          result[4] += 0.0006317119393556538;
          result[5] += 0.0003158559696778269;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)11) ) ) {
          result[0] += 0.9759036144578314;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.024096385542168676;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0.16326530612244897;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8163265306122449;
          result[5] += 0.02040816326530612;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0073059360730593605;
          result[3] += 0;
          result[4] += 0.9917808219178083;
          result[5] += 0.0009132420091324201;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9745762711864406;
          result[1] += 0;
          result[2] += 0.025423728813559324;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)37.5) ) ) {
          result[0] += 0.9988698600365122;
          result[1] += 0;
          result[2] += 0.0011301399634877857;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9999268952408802;
          result[1] += 0;
          result[2] += 7.31047591198187e-05;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          result[0] += 0.13812154696132597;
          result[1] += 0.026243093922651933;
          result[2] += 0.03729281767955801;
          result[3] += 0.7983425414364641;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9786494538232373;
          result[1] += 0.0003723932472691162;
          result[2] += 0.006082423038728898;
          result[3] += 0.013157894736842105;
          result[4] += 0;
          result[5] += 0.00024826216484607745;
          result[6] += 0.0014895729890764648;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
          result[0] += 0;
          result[1] += 0.001076426264800861;
          result[2] += 0;
          result[3] += 0.9989235737351991;
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
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
          result[1] += 0.00597609561752988;
          result[2] += 0.006772908366533864;
          result[3] += 0.9864541832669322;
          result[4] += 0;
          result[5] += 0.0007968127490039841;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
          result[0] += 0.25925925925925924;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7345679012345679;
          result[4] += 0;
          result[5] += 0.006172839506172839;
          result[6] += 0;
        } else {
          result[0] += 0.5004748338081672;
          result[1] += 0;
          result[2] += 0.001899335232668566;
          result[3] += 0.4976258309591643;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)93.5) ) ) {
          result[0] += 0.9974721360450419;
          result[1] += 0;
          result[2] += 0.001723543605653223;
          result[3] += 0.0008043203493048374;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.3081081081081081;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6918918918918919;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)62) ) ) {
          result[0] += 0.9970351545955104;
          result[1] += 0.0004764930114358323;
          result[2] += 0.001958915713680644;
          result[3] += 5.2943667937314695e-05;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004764930114358323;
        } else {
          result[0] += 0;
          result[1] += 0.0873015873015873;
          result[2] += 0;
          result[3] += 0.9126984126984127;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          result[0] += 0.3489531405782652;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6510468594217348;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9727891156462585;
          result[1] += 0;
          result[2] += 0.025267249757045675;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.0009718172983479105;
          result[6] += 0.0009718172983479105;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
          result[0] += 0.24687987519500781;
          result[1] += 0;
          result[2] += 0.00078003120124805;
          result[3] += 0.7523400936037441;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9955703211517165;
          result[1] += 0;
          result[2] += 0.004429678848283499;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)109) ) ) {
          result[0] += 0.08571428571428572;
          result[1] += 0.14285714285714285;
          result[2] += 0;
          result[3] += 0.7714285714285715;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.003816793893129771;
          result[1] += 0.019083969465648856;
          result[2] += 0;
          result[3] += 0.015267175572519083;
          result[4] += 0.9618320610687023;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 0.3735632183908046;
          result[1] += 0.00632183908045977;
          result[2] += 0.013793103448275862;
          result[3] += 0.6040229885057471;
          result[4] += 0.0022988505747126436;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.16825775656324582;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8317422434367542;
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
          result[3] += 0.0010090817356205853;
          result[4] += 0.9989909182643795;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)92.5) ) ) {
          result[0] += 0.15833333333333333;
          result[1] += 0;
          result[2] += 0.018333333333333333;
          result[3] += 0.10166666666666667;
          result[4] += 0.7216666666666667;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9965803615046409;
          result[1] += 0;
          result[2] += 0.0029311187103077674;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004885197850512946;
        } else {
          result[0] += 0.9996282527881041;
          result[1] += 0;
          result[2] += 0.0003717472118959108;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 0.7135044173327724;
          result[1] += 0.002524190155658393;
          result[2] += 0.0033655868742111907;
          result[3] += 0.279554059739167;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001051745898190997;
        } else {
          result[0] += 0.8914898805169471;
          result[1] += 0;
          result[2] += 0.008046817849305048;
          result[3] += 0.0692514020970495;
          result[4] += 0.028773469885393806;
          result[5] += 0;
          result[6] += 0.00243842965130456;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)101) ) ) {
          result[0] += 0;
          result[1] += 0.0006583278472679394;
          result[2] += 0;
          result[3] += 0.999012508229098;
          result[4] += 0;
          result[5] += 0.0003291639236339697;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05;
          result[3] += 0;
          result[4] += 0.9472222222222222;
          result[5] += 0.002777777777777778;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
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
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.987602085998229;
          result[1] += 0.0001475942143067992;
          result[2] += 0.0004919807143559974;
          result[3] += 0.011659942930237137;
          result[4] += 0;
          result[5] += 0;
          result[6] += 9.839614287119946e-05;
        } else {
          result[0] += 0.8831360946745562;
          result[1] += 0;
          result[2] += 0.011834319526627219;
          result[3] += 0.10502958579881656;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 0.44970559371933266;
          result[1] += 0.0006133464180569186;
          result[2] += 0.0034347399411187437;
          result[3] += 0.5441609421000981;
          result[4] += 0.0014720314033366045;
          result[5] += 0.0004906771344455348;
          result[6] += 0.0001226692836113837;
        } else {
          result[0] += 0.9866804455161328;
          result[1] += 0;
          result[2] += 0.001607532437708118;
          result[3] += 0.011023079572855667;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006889424733034792;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
          result[0] += 0.3486238532110092;
          result[1] += 0;
          result[2] += 0.02110091743119266;
          result[3] += 0.3568807339449541;
          result[4] += 0.27339449541284405;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.926052332195677;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.07394766780432309;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.002257336343115124;
          result[3] += 0.9977426636568849;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.04245283018867924;
          result[2] += 0;
          result[3] += 0.9575471698113207;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
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
          result[0] += 0.9252336448598131;
          result[1] += 0;
          result[2] += 0.07476635514018691;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
          result[0] += 0.0035587188612099642;
          result[1] += 0.0498220640569395;
          result[2] += 0;
          result[3] += 0.099644128113879;
          result[4] += 0.8469750889679716;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.11864406779661017;
          result[4] += 0.8813559322033898;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0018298261665141812;
          result[4] += 0.9981701738334858;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)9) ) ) {
          result[0] += 0.9989407642793123;
          result[1] += 8.147967082212988e-05;
          result[2] += 0.00032591868328851953;
          result[3] += 0.0004888780249327792;
          result[4] += 0.0001222195062331948;
          result[5] += 0;
          result[6] += 4.073983541106494e-05;
        } else {
          result[0] += 0.8969341161121983;
          result[1] += 0.0029354207436399216;
          result[2] += 0.004892367906066536;
          result[3] += 0.0949119373776908;
          result[4] += 0;
          result[5] += 0.00032615786040443573;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)64) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9928909952606635;
          result[4] += 0;
          result[5] += 0.0071090047393364926;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.1886143259305599;
          result[1] += 0.004379105411323116;
          result[2] += 0.01595245542696278;
          result[3] += 0.7910541132311542;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0.012121212121212121;
          result[1] += 0.05757575757575758;
          result[2] += 0;
          result[3] += 0.20606060606060606;
          result[4] += 0.7242424242424242;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03880070546737213;
          result[4] += 0.9611992945326279;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)34.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.02937062937062937;
          result[3] += 0;
          result[4] += 0.9664335664335665;
          result[5] += 0.004195804195804196;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.002237851662404092;
          result[3] += 0.9971227621483376;
          result[4] += 0;
          result[5] += 0.0006393861892583121;
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
          result[0] += 0.96;
          result[1] += 0;
          result[2] += 0.03238095238095238;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.007619047619047619;
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
          result[0] += 0.9881081081081081;
          result[1] += 0;
          result[2] += 0.008648648648648649;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.003243243243243243;
        } else {
          result[0] += 0.9994079336885732;
          result[1] += 0;
          result[2] += 0.0005920663114268798;
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
          result[0] += 0.9672360248447205;
          result[1] += 0.0034161490683229812;
          result[2] += 0.0034161490683229812;
          result[3] += 0.02515527950310559;
          result[4] += 0;
          result[5] += 0.00015527950310559007;
          result[6] += 0.0006211180124223603;
        } else {
          result[0] += 0.6837180286961947;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3150343106674985;
          result[4] += 0;
          result[5] += 0.0012476606363069247;
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
          result[0] += 0.15494114426498767;
          result[1] += 0.0046537092800438;
          result[2] += 0.01642485628250753;
          result[3] += 0.8234327949630441;
          result[4] += 0;
          result[5] += 0.0005474952094169176;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)103.5) ) ) {
          result[0] += 0;
          result[1] += 0.0009933774834437086;
          result[2] += 0;
          result[3] += 0.9990066225165563;
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-327) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9987984051559342;
          result[1] += 0;
          result[2] += 0.0010923589491506909;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00010923589491506909;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9972527472527473;
          result[5] += 0.0027472527472527475;
          result[6] += 0;
        } else {
          result[0] += 0.013142174432497015;
          result[1] += 0.007168458781362008;
          result[2] += 0.011947431302270014;
          result[3] += 0.9659498207885305;
          result[4] += 0;
          result[5] += 0.001792114695340502;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
          result[0] += 0.9954507857733664;
          result[1] += 0;
          result[2] += 0.0041356492969396195;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00041356492969396195;
        } else {
          result[0] += 0.4136568848758465;
          result[1] += 0;
          result[2] += 0.006772009029345372;
          result[3] += 0.5756207674943566;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0039503386004514675;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          result[0] += 0.7501164777139308;
          result[1] += 0.0018636434228917534;
          result[2] += 0.0072992700729927005;
          result[3] += 0.2063985090852617;
          result[4] += 0.03370088523062587;
          result[5] += 0;
          result[6] += 0.0006212144742972511;
        } else {
          result[0] += 0.05401234567901234;
          result[1] += 0.0102880658436214;
          result[2] += 0.00360082304526749;
          result[3] += 0.3626543209876543;
          result[4] += 0.5694444444444444;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)13.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0011370096645821489;
          result[2] += 0;
          result[3] += 0.9988629903354178;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
          result[0] += 0.9789343246592317;
          result[1] += 0;
          result[2] += 0.021065675340768277;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.07001044932079414;
          result[1] += 0.005747126436781609;
          result[2] += 0.002612330198537095;
          result[3] += 0.91901776384535;
          result[4] += 0.002612330198537095;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.005263157894736842;
          result[1] += 0;
          result[2] += 0.03684210526315789;
          result[3] += 0.9578947368421052;
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
          result[0] += 0.012658227848101266;
          result[1] += 0.13924050632911392;
          result[2] += 0;
          result[3] += 0.8481012658227848;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)13.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.08108108108108109;
          result[2] += 0;
          result[3] += 0.918918918918919;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)68.5) ) ) {
          result[0] += 0.5392953929539296;
          result[1] += 0;
          result[2] += 0.0018066847335140017;
          result[3] += 0.45889792231255644;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7216846898121798;
          result[1] += 0;
          result[2] += 0.014797951052931132;
          result[3] += 0.18838929994308481;
          result[4] += 0.07512805919180421;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
          result[0] += 0.8751487855879041;
          result[1] += 0.0006433971368827409;
          result[2] += 0.0012224545600772077;
          result[3] += 0.12240630529194145;
          result[4] += 0.00019301914106482226;
          result[5] += 0.00012867942737654817;
          result[6] += 0.00025735885475309633;
        } else {
          result[0] += 0.9952187425292852;
          result[1] += 0;
          result[2] += 0.0047812574707147976;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-114.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-5.5) ) ) {
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
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-305.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-16) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-158) ) ) {
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
          result[0] += 0.9934944237918216;
          result[1] += 0;
          result[2] += 0.005111524163568774;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0013940520446096656;
        } else {
          result[0] += 0.9997515836542045;
          result[1] += 0;
          result[2] += 0.0002484163457955533;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
          result[0] += 0.02364672364672365;
          result[1] += 0.007122507122507123;
          result[2] += 0.004558404558404558;
          result[3] += 0.9638176638176639;
          result[4] += 0.0002849002849002849;
          result[5] += 0.0005698005698005698;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.06792452830188679;
          result[2] += 0;
          result[3] += 0.0037735849056603774;
          result[4] += 0.9283018867924528;
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
          result[1] += 0;
          result[2] += 0.08378870673952642;
          result[3] += 0.912568306010929;
          result[4] += 0;
          result[5] += 0.0036429872495446266;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          result[0] += 0.9678756476683938;
          result[1] += 0.0002590673575129534;
          result[2] += 0.005958549222797928;
          result[3] += 0.025647668393782387;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002590673575129534;
        } else {
          result[0] += 0.9944729569680221;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.005527043031977891;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          result[0] += 0.005283018867924529;
          result[1] += 0;
          result[2] += 0.0011320754716981133;
          result[3] += 0.9935849056603774;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9924286546301689;
          result[1] += 0;
          result[2] += 0.0029120559114735;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.004659289458357601;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-9.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-165) ) ) {
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
          result[0] += 0.9922879177377892;
          result[1] += 0;
          result[2] += 0.007712082262210797;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9998081350729087;
          result[1] += 0;
          result[2] += 0.0001918649270913277;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.99836867862969;
          result[5] += 0.0016313213703099511;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.01015228426395939;
          result[3] += 0.9898477157360406;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          result[0] += 0.6616792065663476;
          result[1] += 0.0014534883720930235;
          result[2] += 0.006925444596443229;
          result[3] += 0.3288303693570452;
          result[4] += 8.549931600547197e-05;
          result[5] += 8.549931600547197e-05;
          result[6] += 0.0009404924760601916;
        } else {
          result[0] += 0.007761966364812419;
          result[1] += 0;
          result[2] += 0.02069857697283312;
          result[3] += 0.7878395860284605;
          result[4] += 0.18240620957309184;
          result[5] += 0.00129366106080207;
          result[6] += 0;
        }
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          result[0] += 0.5602836879432624;
          result[1] += 0;
          result[2] += 0.026004728132387706;
          result[3] += 0.41371158392434987;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.00816326530612245;
          result[2] += 0;
          result[3] += 0.9918367346938776;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.020833333333333332;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9791666666666666;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)76.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-7.5) ) ) {
          result[0] += 0.24444444444444444;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6888888888888889;
          result[4] += 0.06666666666666667;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8707682291666666;
          result[1] += 0.000732421875;
          result[2] += 0.0017903645833333333;
          result[3] += 0.12589518229166666;
          result[4] += 0.0003255208333333333;
          result[5] += 8.138020833333333e-05;
          result[6] += 0.0004069010416666667;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
          result[0] += 0.9987676779531718;
          result[1] += 0.00011736400445983217;
          result[2] += 0.0004107740156094126;
          result[3] += 0.0003520920133794965;
          result[4] += 0.0002934100111495804;
          result[5] += 5.8682002229916086e-05;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 0.32863274064990805;
          result[1] += 0.004904966278356836;
          result[2] += 0.011036174126302882;
          result[3] += 0.6137339055793991;
          result[4] += 0.041692213366033105;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.14064015518913675;
          result[1] += 0.01066925315227934;
          result[2] += 0;
          result[3] += 0.6799224054316197;
          result[4] += 0.1687681862269641;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)85.5) ) ) {
          result[0] += 0.5348837209302325;
          result[1] += 0;
          result[2] += 0.08139534883720931;
          result[3] += 0;
          result[4] += 0.38372093023255816;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.04737516005121639;
          result[1] += 0;
          result[2] += 0.0019206145966709346;
          result[3] += 0.056338028169014086;
          result[4] += 0.8943661971830986;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
          result[0] += 0.9162790697674419;
          result[1] += 0;
          result[2] += 0.017054263565891473;
          result[3] += 0.06666666666666667;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0030911901081916537;
          result[3] += 0;
          result[4] += 0.9969088098918083;
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
          result[2] += 0.005884275907159202;
          result[3] += 0.9911735861392612;
          result[4] += 0.002942137953579601;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)48) ) ) {
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9913675601999091;
          result[1] += 0;
          result[2] += 0.007269422989550204;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0013630168105406633;
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.008465011286681716;
          result[1] += 0.0056433408577878106;
          result[2] += 0.009029345372460496;
          result[3] += 0.9768623024830699;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)39) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9912891986062717;
          result[1] += 0;
          result[2] += 0.008710801393728223;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)115.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.009230769230769232;
          result[1] += 0.055384615384615386;
          result[2] += 0;
          result[3] += 0.20307692307692307;
          result[4] += 0.7323076923076923;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.17525773195876287;
          result[4] += 0.8247422680412371;
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
          result[0] += 0.9856459330143541;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.014354066985645933;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.004944375772558714;
          result[3] += 0.9196538936959209;
          result[4] += 0.07416563658838071;
          result[5] += 0.0012360939431396785;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)25) ) ) {
          result[0] += 0.9487091222030981;
          result[1] += 0;
          result[2] += 0.008261617900172116;
          result[3] += 0.04165232358003442;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001376936316695353;
        } else {
          result[0] += 0.9983017952450267;
          result[1] += 0.0004043344654698367;
          result[2] += 0.0005660682516577713;
          result[3] += 0.0006873685912987223;
          result[4] += 0;
          result[5] += 0;
          result[6] += 4.0433446546983666e-05;
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
          result[2] += 0.008398807911135195;
          result[3] += 0.8141425088052019;
          result[4] += 0.17664589542129505;
          result[5] += 0.000812787862367922;
          result[6] += 0;
        } else {
          result[0] += 0.9906367041198502;
          result[1] += 0;
          result[2] += 0.00749063670411985;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0018726591760299626;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.92;
          result[4] += 0.08;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.3516609392898053;
          result[1] += 0.004963726613211149;
          result[2] += 0.004200076365024819;
          result[3] += 0.6391752577319587;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
          result[0] += 0.009404388714733543;
          result[1] += 0;
          result[2] += 0.02821316614420063;
          result[3] += 0.03761755485893417;
          result[4] += 0.9247648902821317;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2846497764530551;
          result[4] += 0.7153502235469449;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
          result[0] += 0.03773584905660377;
          result[1] += 0.12264150943396226;
          result[2] += 0;
          result[3] += 0.330188679245283;
          result[4] += 0.5094339622641509;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.009900990099009901;
          result[2] += 0;
          result[3] += 0.10396039603960396;
          result[4] += 0.8861386138613861;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-34) ) ) {
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
          result[3] += 0.11055276381909548;
          result[4] += 0.8894472361809045;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)14) ) ) {
          result[0] += 0.6;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9988165680473373;
          result[5] += 0.001183431952662722;
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
          result[2] += 0.016560509554140127;
          result[3] += 0.9815286624203822;
          result[4] += 0;
          result[5] += 0.001910828025477707;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.9986292328781033;
          result[1] += 0.00010153830532568413;
          result[2] += 0.00045692237396557857;
          result[3] += 0.000812306442605473;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8777472527472527;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.12225274725274725;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.98066262730437;
          result[1] += 0.001160242361737785;
          result[2] += 0.0029650638133298947;
          result[3] += 0.01469640324867861;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005156632718834599;
        } else {
          result[0] += 0.6290895723563289;
          result[1] += 0;
          result[2] += 0.0036760200955765223;
          result[3] += 0.36600906751623574;
          result[4] += 0;
          result[5] += 0.0008577380223011886;
          result[6] += 0.00036760200955765227;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9984218832193582;
          result[1] += 0;
          result[2] += 0.0015781167806417674;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9998504784688995;
          result[1] += 0;
          result[2] += 0.00014952153110047846;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9981378026070764;
          result[1] += 0;
          result[2] += 0.0009310986964618251;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009310986964618251;
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
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          result[0] += 0.02965946539729037;
          result[1] += 0.004027828634199927;
          result[2] += 0.011717319663127059;
          result[3] += 0.85463200292933;
          result[4] += 0.09923105089710729;
          result[5] += 0.0007323324789454412;
          result[6] += 0;
        } else {
          result[0] += 0.9851209729589856;
          result[1] += 0;
          result[2] += 0.004010868158882132;
          result[3] += 0.009444947599948246;
          result[4] += 0;
          result[5] += 0.00038814853150472245;
          result[6] += 0.0010350627506792599;
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
          result[1] += 0.0009852216748768472;
          result[2] += 0.008210180623973728;
          result[3] += 0.9904761904761905;
          result[4] += 0;
          result[5] += 0.0003284072249589491;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          result[0] += 0.6069868995633187;
          result[1] += 0;
          result[2] += 0.021834061135371178;
          result[3] += 0.37117903930131;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0022753128555176336;
          result[1] += 0.0011376564277588168;
          result[2] += 0;
          result[3] += 0.9965870307167235;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0.0025252525252525255;
          result[1] += 0.06565656565656566;
          result[2] += 0;
          result[3] += 0.3787878787878788;
          result[4] += 0.553030303030303;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.022970903522205207;
          result[4] += 0.9770290964777948;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 0.2526416906820365;
          result[1] += 0.009606147934678195;
          result[2] += 0;
          result[3] += 0.7377521613832853;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.09259259259259259;
          result[1] += 0.01455026455026455;
          result[2] += 0;
          result[3] += 0.8928571428571429;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)49) ) ) {
          result[0] += 0.963677639046538;
          result[1] += 0;
          result[2] += 0.036322360953461974;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0029282576866764276;
          result[3] += 0.9970717423133236;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)5624.5) ) ) {
          result[0] += 0.9825914855804184;
          result[1] += 0.0005654737862509088;
          result[2] += 0.0007674287099119477;
          result[3] += 0.01599482995395428;
          result[4] += 4.039098473220777e-05;
          result[5] += 4.039098473220777e-05;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.012798634812286689;
          result[3] += 0.9556313993174061;
          result[4] += 0.030716723549488054;
          result[5] += 0.0008532423208191126;
          result[6] += 0;
        } else {
          result[0] += 0.995736306985897;
          result[1] += 0;
          result[2] += 0.004263693014102984;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0.33169398907103825;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6683060109289618;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5068056762235738;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.4931943237764263;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          result[0] += 0.9814378314672952;
          result[1] += 0;
          result[2] += 0.012374779021803181;
          result[3] += 0.0002946375957572186;
          result[4] += 0.0035356511490866236;
          result[5] += 0.0005892751915144372;
          result[6] += 0.0017678255745433118;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.002886002886002886;
          result[3] += 0;
          result[4] += 0.9971139971139971;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
          result[0] += 0.0016891891891891893;
          result[1] += 0.00033783783783783786;
          result[2] += 0.0033783783783783786;
          result[3] += 0.9932432432432432;
          result[4] += 0.0006756756756756757;
          result[5] += 0.0006756756756756757;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.472;
          result[4] += 0.528;
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
          result[0] += 0.987012987012987;
          result[1] += 0;
          result[2] += 0.012987012987012988;
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
          result[0] += 0;
          result[1] += 0.18181818181818182;
          result[2] += 0;
          result[3] += 0.8181818181818182;
          result[4] += 0;
          result[5] += 0;
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
          result[1] += 0.028846153846153848;
          result[2] += 0;
          result[3] += 0.9711538461538461;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
          result[0] += 0.9310872894333844;
          result[1] += 0;
          result[2] += 0.03522205206738132;
          result[3] += 0.033690658499234305;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.997896555609811;
          result[1] += 0.0004507380836119145;
          result[2] += 0.001314652743868084;
          result[3] += 0.00015024602787063818;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001878075348382977;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.007067137809187279;
          result[1] += 0.04240282685512368;
          result[2] += 0;
          result[3] += 0.950530035335689;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
          result[0] += 0.15388843088760648;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8461115691123935;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9674344718030182;
          result[1] += 0;
          result[2] += 0.02779984114376489;
          result[3] += 0.0015885623510722795;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.003177124702144559;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)1574.5) ) ) {
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
          result[0] += 0.9998629385964912;
          result[1] += 0;
          result[2] += 0.00013706140350877192;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9960275423728814;
          result[1] += 0;
          result[2] += 0.003972457627118644;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-305.5) ) ) {
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 0.0024067388688327317;
          result[2] += 0;
          result[3] += 0.22984356197352587;
          result[4] += 0.7677496991576414;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0215541690300624;
          result[1] += 0.006522972206466251;
          result[2] += 0.018718094157685765;
          result[3] += 0.950368689733409;
          result[4] += 0.0017016449234259787;
          result[5] += 0.0011344299489506526;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
          result[0] += 0.6273471352912855;
          result[1] += 0;
          result[2] += 0.0035307334296260633;
          result[3] += 0.36848017974642916;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006419515326592842;
        } else {
          result[0] += 0.9112439132359451;
          result[1] += 0;
          result[2] += 0.005533421868083223;
          result[3] += 0.08322266489597167;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)115.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9738562091503268;
          result[4] += 0.026143790849673203;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.005865102639296188;
          result[1] += 0.03812316715542522;
          result[2] += 0;
          result[3] += 0.20527859237536658;
          result[4] += 0.750733137829912;
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
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)33.5) ) ) {
          result[0] += 0.9981412639405205;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0018587360594795538;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9806535947712418;
          result[1] += 0;
          result[2] += 0.000392156862745098;
          result[3] += 0.01895424836601307;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          result[0] += 0.35545803620405925;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6445419637959408;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9552380952380953;
          result[1] += 0;
          result[2] += 0.03714285714285715;
          result[3] += 0;
          result[4] += 0.00380952380952381;
          result[5] += 0.001904761904761905;
          result[6] += 0.001904761904761905;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)22.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)50) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.38011695906432746;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6198830409356725;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.9943107221006565;
          result[1] += 0.0007658643326039389;
          result[2] += 0.0006564551422319476;
          result[3] += 0.004212253829321664;
          result[4] += 0;
          result[5] += 0;
          result[6] += 5.470459518599563e-05;
        } else {
          result[0] += 0.7044179523141655;
          result[1] += 0;
          result[2] += 0.0015778401122019635;
          result[3] += 0.29400420757363255;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15) ) ) {
          result[0] += 0;
          result[1] += 0.022058823529411766;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9742647058823529;
          result[5] += 0.003676470588235294;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.004696410600469641;
          result[2] += 0.005031868500503187;
          result[3] += 0.9902717208990272;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
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
          result[0] += 0.9982608695652174;
          result[1] += 0.0017391304347826088;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)68.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.14387464387464388;
          result[1] += 0;
          result[2] += 0.008547008547008548;
          result[3] += 0.25071225071225073;
          result[4] += 0.594017094017094;
          result[5] += 0.002849002849002849;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.033156498673740056;
          result[4] += 0.96684350132626;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.11619718309859155;
          result[1] += 0;
          result[2] += 0.02464788732394366;
          result[3] += 0.14084507042253522;
          result[4] += 0.7183098591549296;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)83) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9923469387755102;
          result[1] += 0;
          result[2] += 0.007653061224489796;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9996127633209417;
          result[1] += 0;
          result[2] += 0.00034851301115241634;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 3.872366790582404e-05;
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
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
          result[0] += 0.3276668083297918;
          result[1] += 0.003399915002124947;
          result[2] += 0.0055248618784530384;
          result[3] += 0.6634084147896303;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8058636213901395;
          result[1] += 0.001756890304161634;
          result[2] += 0.00834522894476776;
          result[3] += 0.1826067859887998;
          result[4] += 0.00021961128802020424;
          result[5] += 0.0005490282200505106;
          result[6] += 0.0006588338640606127;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
          result[0] += 0;
          result[1] += 0.0013214403700033035;
          result[2] += 0;
          result[3] += 0.9983481995374959;
          result[4] += 0;
          result[5] += 0.0003303600925008259;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.04387291981845688;
          result[3] += 0;
          result[4] += 0.9561270801815431;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0.0017391304347826088;
          result[1] += 0.022608695652173914;
          result[2] += 0;
          result[3] += 0.5547826086956522;
          result[4] += 0.42086956521739133;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04560260586319218;
          result[4] += 0.9543973941368078;
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
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)29) ) ) {
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0;
          result[1] += 0.0002943773918163086;
          result[2] += 0;
          result[3] += 0.9284662937886371;
          result[4] += 0.07065057403591406;
          result[5] += 0.0005887547836326172;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0061312078479460455;
          result[2] += 0.00797057020232986;
          result[3] += 0;
          result[4] += 0.9858982219497241;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
          result[0] += 0.9538043478260869;
          result[1] += 0;
          result[2] += 0.02355072463768116;
          result[3] += 0.022644927536231884;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9980096139402133;
          result[1] += 0.0004130989935406339;
          result[2] += 0.0014270692504130989;
          result[3] += 3.755445395823945e-05;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00011266336187471834;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
          result[0] += 0.9419354838709677;
          result[1] += 0.05806451612903226;
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9156829679595279;
          result[1] += 0;
          result[2] += 0.016863406408094434;
          result[3] += 0.06745362563237774;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.23333333333333336;
          result[3] += 0;
          result[4] += 0.6000000000000001;
          result[5] += 0.16666666666666669;
          result[6] += 0;
        } else {
          result[0] += 0.02431222008957134;
          result[1] += 0;
          result[2] += 0.001599488163787588;
          result[3] += 0.972808701215611;
          result[4] += 0;
          result[5] += 0.0012795905310300703;
          result[6] += 0;
        }
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9575892857142857;
          result[1] += 0;
          result[2] += 0.033482142857142856;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.008928571428571428;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
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
          result[0] += 0.9993904065226502;
          result[1] += 0;
          result[2] += 0.0005714938850154304;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 3.809959233436202e-05;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)25) ) ) {
          result[0] += 0.9970493562231759;
          result[1] += 0;
          result[2] += 0.0024141630901287556;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000536480686695279;
        } else {
          result[0] += 0.9049956684955243;
          result[1] += 0.005486572336124748;
          result[2] += 0.005197805371065551;
          result[3] += 0.08085475021657523;
          result[4] += 0;
          result[5] += 0.0008663008951775917;
          result[6] += 0.0025989026855327757;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)101) ) ) {
          result[0] += 0;
          result[1] += 0.0006745362563237774;
          result[2] += 0;
          result[3] += 0.9993254637436763;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.18439716312056736;
          result[3] += 0;
          result[4] += 0.8156028368794326;
          result[5] += 0;
          result[6] += 0;
        }
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
          result[0] += 0;
          result[1] += 0.4782608695652174;
          result[2] += 0.391304347826087;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.13043478260869565;
          result[6] += 0;
        } else {
          result[0] += 0.0032708890871245913;
          result[1] += 0.003865596193874517;
          result[2] += 0.008920606601248885;
          result[3] += 0.983942908117752;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)93) ) ) {
          result[0] += 0.988860325621251;
          result[1] += 0;
          result[2] += 0.011139674378748929;
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)41) ) ) {
          result[0] += 0.9987730061349693;
          result[1] += 0;
          result[2] += 0.001226993865030675;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8686440677966102;
          result[1] += 0;
          result[2] += 0.13135593220338984;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 0.009485094850948509;
          result[2] += 0.005420054200542005;
          result[3] += 0.9850948509485095;
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)51.5) ) ) {
          result[0] += 0.9825428328405363;
          result[1] += 0.0006480618899104866;
          result[2] += 0.0007290696261492974;
          result[3] += 0.015877516302806923;
          result[4] += 4.050386811940541e-05;
          result[5] += 4.050386811940541e-05;
          result[6] += 0.00012151160435821622;
        } else {
          result[0] += 0.7094465648854962;
          result[1] += 0;
          result[2] += 0.004532442748091603;
          result[3] += 0.27576335877862596;
          result[4] += 0.009303435114503817;
          result[5] += 0.00047709923664122136;
          result[6] += 0.00047709923664122136;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
          result[0] += 0.45463433711380524;
          result[1] += 0;
          result[2] += 0.005475166210402816;
          result[3] += 0.5398904966757919;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9301683687551753;
          result[1] += 0;
          result[2] += 0.005796301407673199;
          result[3] += 0.059619100193210046;
          result[4] += 0.002760143527463428;
          result[5] += 0.0002760143527463428;
          result[6] += 0.001380071763731714;
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
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.999231613611416;
          result[1] += 0;
          result[2] += 0.0006586169045005489;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001097694840834248;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)40) ) ) {
          result[0] += 0;
          result[1] += 0.013761467889908258;
          result[2] += 0;
          result[3] += 0.9862385321100917;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9476132686084142;
          result[1] += 0.0022249190938511327;
          result[2] += 0.0018203883495145632;
          result[3] += 0.04733009708737864;
          result[4] += 0;
          result[5] += 0.0002022653721682848;
          result[6] += 0.0008090614886731392;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          result[0] += 0.27936175778184674;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7206382422181533;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8695970695970696;
          result[1] += 0;
          result[2] += 0.03736263736263736;
          result[3] += 0.0029304029304029304;
          result[4] += 0.08571428571428572;
          result[5] += 0;
          result[6] += 0.004395604395604396;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0.0026478375992939106;
          result[2] += 0.008826125330979701;
          result[3] += 0.9549867608120036;
          result[4] += 0.0326566637246249;
          result[5] += 0.0008826125330979701;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.015102481121898598;
          result[2] += 0;
          result[3] += 0.7702265372168284;
          result[4] += 0.21359223300970873;
          result[5] += 0.0010787486515641855;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
          result[0] += 0.971830985915493;
          result[1] += 0.028169014084507043;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.044399596367305755;
          result[4] += 0.9556004036326943;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)84) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.05815508021390375;
          result[1] += 0;
          result[2] += 0.02606951871657754;
          result[3] += 0.19852941176470587;
          result[4] += 0.7159090909090909;
          result[5] += 0.001336898395721925;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)99) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9993650793650795;
          result[4] += 0.0003174603174603175;
          result[5] += 0.0003174603174603175;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.009259259259259259;
          result[4] += 0.9907407407407407;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8888888888888888;
          result[3] += 0;
          result[4] += 0.1111111111111111;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9753086419753086;
          result[1] += 0;
          result[2] += 0.024691358024691357;
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
          result[1] += 0.33333333333333337;
          result[2] += 0.5925925925925927;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.07407407407407408;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 0.9988513548791312;
          result[1] += 0;
          result[2] += 0.0010442228371534486;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00010442228371534485;
        } else {
          result[0] += 0.6507352941176471;
          result[1] += 0.011029411764705883;
          result[2] += 0;
          result[3] += 0.3382352941176471;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
          result[0] += 0.9237523105360443;
          result[1] += 0.006007393715341959;
          result[2] += 0.00878003696857671;
          result[3] += 0.06146025878003697;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.004452054794520548;
          result[1] += 0;
          result[2] += 0.004794520547945206;
          result[3] += 0.9904109589041096;
          result[4] += 0;
          result[5] += 0.00034246575342465754;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 0.999504377994383;
          result[1] += 0;
          result[2] += 0.0004956220056170494;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9736303705387588;
          result[1] += 0;
          result[2] += 0.004773812230052284;
          result[3] += 0.0206865196635599;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009092975676290066;
        }
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)40) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9919642857142857;
          result[1] += 0;
          result[2] += 0.008035714285714285;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9878542510121457;
          result[1] += 0;
          result[2] += 0.012145748987854251;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9998738965952081;
          result[1] += 0;
          result[2] += 0.00012610340479192938;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.02472746609944164;
          result[1] += 0.008774262164318;
          result[2] += 0.00824248869981388;
          result[3] += 0.9569263493751662;
          result[4] += 0;
          result[5] += 0.0013294336612603031;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)32) ) ) {
          result[0] += 0.9835135135135135;
          result[1] += 0.0004054054054054054;
          result[2] += 0.00527027027027027;
          result[3] += 0.010405405405405405;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004054054054054054;
        } else {
          result[0] += 0.9475806451612904;
          result[1] += 0;
          result[2] += 0.012096774193548387;
          result[3] += 0.036290322580645164;
          result[4] += 0;
          result[5] += 0.0013440860215053765;
          result[6] += 0.002688172043010753;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)103.5) ) ) {
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
          result[2] += 0.9285714285714286;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.07142857142857142;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)252) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
          result[0] += 0.9976610010915329;
          result[1] += 0;
          result[2] += 0.0020271323873382197;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003118665211289569;
        } else {
          result[0] += 0.9995721925133689;
          result[1] += 0;
          result[2] += 0.000427807486631016;
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)81.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          result[0] += 0.8404661442636127;
          result[1] += 0.00341571227647177;
          result[2] += 0.0026120152702431183;
          result[3] += 0.1525015069318867;
          result[4] += 0;
          result[5] += 0.0006027727546714888;
          result[6] += 0.0004018485031143259;
        } else {
          result[0] += 0.09609826589595376;
          result[1] += 0;
          result[2] += 0.01878612716763006;
          result[3] += 0.8807803468208093;
          result[4] += 0.002890173410404624;
          result[5] += 0.001445086705202312;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)112) ) ) {
          result[0] += 0.26717557251908397;
          result[1] += 0.004240882103477523;
          result[2] += 0;
          result[3] += 0.7285835453774385;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.010526315789473684;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.021052631578947368;
          result[4] += 0.968421052631579;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          result[0] += 0.38864256480218284;
          result[1] += 0;
          result[2] += 0.00528649386084584;
          result[3] += 0.6053888130968623;
          result[4] += 0.0003410641200545703;
          result[5] += 0.0003410641200545703;
          result[6] += 0;
        } else {
          result[0] += 0.6193152784874809;
          result[1] += 0;
          result[2] += 0.023505365355135414;
          result[3] += 0.002554931016862545;
          result[4] += 0.3515585079202862;
          result[5] += 0.0010219724067450182;
          result[6] += 0.0020439448134900364;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0.04081632653061224;
          result[2] += 0;
          result[3] += 0.42517006802721086;
          result[4] += 0.5340136054421769;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.02847682119205298;
          result[4] += 0.971523178807947;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-8.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)49) ) ) {
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)69) ) ) {
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          result[0] += 0.8512176560121766;
          result[1] += 0;
          result[2] += 0.01293759512937595;
          result[3] += 0.1358447488584475;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.049680624556423;
          result[1] += 0.0056777856635912;
          result[2] += 0.008989827300686065;
          result[3] += 0.5282706411166311;
          result[4] += 0.4073811213626686;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0.9562798976526866;
          result[1] += 0;
          result[2] += 0.0003337412392924686;
          result[3] += 0.04327511402825676;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00011124707976415619;
        } else {
          result[0] += 0.971538375849393;
          result[1] += 0.0003898852623370837;
          result[2] += 0.0010582599977720843;
          result[3] += 0.02645649994430211;
          result[4] += 0.00027848947309791694;
          result[5] += 0.00011139578923916678;
          result[6] += 0.00016709368385875017;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0.3058350100603622;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6941649899396378;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5002780867630701;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.49972191323692994;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)23) ) ) {
          result[0] += 0.9877245508982037;
          result[1] += 0;
          result[2] += 0.009281437125748505;
          result[3] += 0.0014970059880239524;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0014970059880239524;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3181818181818182;
          result[3] += 0;
          result[4] += 0.5;
          result[5] += 0.18181818181818182;
          result[6] += 0;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)112) ) ) {
          result[0] += 0;
          result[1] += 0.0006317119393556538;
          result[2] += 0;
          result[3] += 0.9965255843335439;
          result[4] += 0.002526847757422615;
          result[5] += 0.0003158559696778269;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)33.5) ) ) {
          result[0] += 0.9560439560439561;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.04395604395604396;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0.3181818181818182;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6590909090909091;
          result[5] += 0.022727272727272728;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.005957446808510639;
          result[3] += 0;
          result[4] += 0.9931914893617021;
          result[5] += 0.000851063829787234;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
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
          result[0] += 0.9991403395658714;
          result[1] += 0;
          result[2] += 0.0007880220646178094;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 7.163836951070993e-05;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          result[0] += 0;
          result[1] += 0.03773584905660377;
          result[2] += 0;
          result[3] += 0.9622641509433962;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8660287081339713;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.1339712918660287;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
          result[0] += 0.9214805131138165;
          result[1] += 0.0012255903260070266;
          result[2] += 0.006536481738704142;
          result[3] += 0.06994035460413432;
          result[4] += 0;
          result[5] += 8.170602173380178e-05;
          result[6] += 0.000735354195604216;
        } else {
          result[0] += 0.25162337662337664;
          result[1] += 0.012987012987012988;
          result[2] += 0;
          result[3] += 0.7353896103896104;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          result[0] += 0.2750352609308886;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7249647390691114;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9835831548893648;
          result[1] += 0;
          result[2] += 0.015703069236259814;
          result[3] += 0.0007137758743754461;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)5624.5) ) ) {
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
          result[0] += 0.9947619047619047;
          result[1] += 0;
          result[2] += 0.004761904761904762;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004761904761904762;
        } else {
          result[0] += 0.9996290189612531;
          result[1] += 0;
          result[2] += 0.0003709810387469085;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
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
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
          result[0] += 0.0204135737009544;
          result[1] += 0.006892895015906681;
          result[2] += 0.015906680805938492;
          result[3] += 0.954931071049841;
          result[4] += 0.0002651113467656416;
          result[5] += 0.0015906680805938495;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.00803023145961266;
          result[2] += 0;
          result[3] += 0.1757203589985829;
          result[4] += 0.8162494095418045;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)71) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.007371007371007371;
          result[3] += 0;
          result[4] += 0.9926289926289926;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0.8546255506607929;
          result[1] += 0.0022026431718061676;
          result[2] += 0.006607929515418502;
          result[3] += 0.1343612334801762;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0022026431718061676;
        } else {
          result[0] += 0.9868421052631579;
          result[1] += 0;
          result[2] += 0.005131578947368421;
          result[3] += 0.005789473684210527;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0022368421052631577;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)103.5) ) ) {
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
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85) ) ) {
          result[0] += 0.086;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.91;
          result[4] += 0.001;
          result[5] += 0.003;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05970149253731343;
          result[3] += 0;
          result[4] += 0.9328358208955224;
          result[5] += 0.007462686567164179;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.9941538782753941;
          result[1] += 0;
          result[2] += 0.0010439503079653408;
          result[3] += 0.004802171416640568;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5585781646717447;
          result[1] += 0;
          result[2] += 0.01088139281828074;
          result[3] += 0.42908959013420384;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0014508523757707653;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
          result[0] += 0.9988991027687566;
          result[1] += 0;
          result[2] += 0.0010458523696812905;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 5.504486156217318e-05;
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
          result[0] += 0.6215760093470076;
          result[1] += 0.0016876541607166039;
          result[2] += 0.0016876541607166039;
          result[3] += 0.30871089186031414;
          result[4] += 0.06594833181877191;
          result[5] += 0.0002596391016487083;
          result[6] += 0.00012981955082435416;
        } else {
          result[0] += 0.012282497441146366;
          result[1] += 0;
          result[2] += 0.0255885363357216;
          result[3] += 0.7717502558853634;
          result[4] += 0.18833162743091095;
          result[5] += 0.0020470829068577278;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 0.00818926296633303;
          result[2] += 0.0018198362147406734;
          result[3] += 0.9899909008189263;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9658536585365853;
          result[1] += 0;
          result[2] += 0.03414634146341464;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)115.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0029940119760479044;
          result[1] += 0.059880239520958084;
          result[2] += 0;
          result[3] += 0.1437125748502994;
          result[4] += 0.7934131736526946;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-26) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.041353383458646614;
          result[4] += 0.9586466165413534;
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)57.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)39) ) ) {
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
          result[0] += 0.0012121212121212121;
          result[1] += 0.007272727272727273;
          result[2] += 0.00202020202020202;
          result[3] += 0.9886868686868687;
          result[4] += 0;
          result[5] += 0.0008080808080808081;
          result[6] += 0;
        } else {
          result[0] += 0.9707112970711297;
          result[1] += 0;
          result[2] += 0.029288702928870293;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
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
          result[1] += 0;
          result[2] += 0.0016155088852988692;
          result[3] += 0.9983844911147012;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          result[0] += 0;
          result[1] += 1;
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
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)40.5) ) ) {
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
          result[0] += 0.9989749324387289;
          result[1] += 0;
          result[2] += 0.0008386916410399776;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00018637592023110615;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 0.5332826747720365;
          result[1] += 0.00364741641337386;
          result[2] += 0.007750759878419453;
          result[3] += 0.4547112462006079;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006079027355623101;
        } else {
          result[0] += 0.9704074664238561;
          result[1] += 0;
          result[2] += 0.005463236967903483;
          result[3] += 0.0232187571135898;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009105394946505805;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-7.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)71) ) ) {
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
          result[0] += 0.3579283433841788;
          result[1] += 0.0017736786094359701;
          result[2] += 0.004966300106420717;
          result[3] += 0.6353316778999645;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.07960199004975124;
          result[1] += 0;
          result[2] += 0.011608623548922056;
          result[3] += 0.1824212271973466;
          result[4] += 0.7263681592039801;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)107) ) ) {
          result[0] += 0.03571428571428571;
          result[1] += 0.03571428571428571;
          result[2] += 0;
          result[3] += 0.9285714285714286;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.001610305958132045;
          result[1] += 0.01610305958132045;
          result[2] += 0;
          result[3] += 0.004830917874396135;
          result[4] += 0.9774557165861514;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
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
          result[3] += 0.11148648648648649;
          result[4] += 0.8885135135135135;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)5624.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9985457189601891;
          result[1] += 0;
          result[2] += 0.0013633884748227596;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 9.089256498818396e-05;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.2;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.6580133018665523;
          result[1] += 0.003003647285990131;
          result[2] += 0.0055782021025531005;
          result[3] += 0.32267753700922547;
          result[4] += 0.010083673031538296;
          result[5] += 0.0006436387041407423;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0010949904188338353;
          result[2] += 0.006296194908294553;
          result[3] += 0.8163153572406242;
          result[4] += 0.17574596222283057;
          result[5] += 0.0005474952094169177;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)36) ) ) {
          result[0] += 0.9946181445412609;
          result[1] += 0;
          result[2] += 0.0035879036391594054;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0017939518195797027;
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
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-305.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)6504) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9923469387755102;
          result[1] += 0;
          result[2] += 0.007653061224489796;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9995375900736002;
          result[1] += 0;
          result[2] += 0.0004624099263997534;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)10623) ) ) {
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          result[0] += 0.026890224612464413;
          result[1] += 0.005061689338816831;
          result[2] += 0.01297057893071813;
          result[3] += 0.9531793736159444;
          result[4] += 0.0003163555836760519;
          result[5] += 0.0015817779183802596;
          result[6] += 0;
        } else {
          result[0] += 0.9779975278121137;
          result[1] += 0;
          result[2] += 0.005067985166872682;
          result[3] += 0.014833127317676144;
          result[4] += 0;
          result[5] += 0.00012360939431396787;
          result[6] += 0.001977750309023486;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
          result[0] += 0;
          result[1] += 0.0006642311524410495;
          result[2] += 0.003985386914646297;
          result[3] += 0.9953503819329127;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.020804438280166437;
          result[3] += 0;
          result[4] += 0.9750346740638003;
          result[5] += 0.004160887656033287;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)94.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0033222591362126247;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9966777408637874;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)97) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.140625;
          result[4] += 0.859375;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.011033099297893681;
          result[2] += 0;
          result[3] += 0.009027081243731194;
          result[4] += 0.9799398194583752;
          result[5] += 0;
          result[6] += 0;
        }
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9959677419354839;
          result[5] += 0.004032258064516129;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0003105590062111802;
          result[2] += 0;
          result[3] += 0.9993788819875777;
          result[4] += 0;
          result[5] += 0.0003105590062111802;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
          result[0] += 0.956989247311828;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.043010752688172046;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.029792746113989636;
          result[3] += 0;
          result[4] += 0.9637305699481865;
          result[5] += 0.006476683937823834;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
          result[0] += 0.999328962989728;
          result[1] += 5.161823155938678e-05;
          result[2] += 0.0005678005471532545;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 5.161823155938678e-05;
        } else {
          result[0] += 0;
          result[1] += 0.3333333333333333;
          result[2] += 0;
          result[3] += 0.6666666666666666;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
          result[0] += 0.642570281124498;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.357429718875502;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 0.9998257536156124;
          result[1] += 0;
          result[2] += 0.00017424638438752395;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.723320895522388;
          result[1] += 0.0016791044776119399;
          result[2] += 0.008488805970149251;
          result[3] += 0.26567164179104474;
          result[4] += 0;
          result[5] += 9.328358208955221e-05;
          result[6] += 0.0007462686567164177;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          result[0] += 0.47038327526132406;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5296167247386759;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0033003300330033004;
          result[1] += 0.019801980198019802;
          result[2] += 0;
          result[3] += 0.976897689768977;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
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
          result[2] += 0.005438259756877799;
          result[3] += 0.9939219449776072;
          result[4] += 0;
          result[5] += 0.0006397952655150352;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3130252100840336;
          result[4] += 0.6869747899159664;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.007423904974016332;
          result[2] += 0;
          result[3] += 0.0014847809948032665;
          result[4] += 0.9910913140311804;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          result[0] += 0.9942655491839435;
          result[1] += 0.0007940008822232025;
          result[2] += 0.0021614468460520514;
          result[3] += 0.0026025584472871635;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000176444640494045;
        } else {
          result[0] += 0;
          result[1] += 0.03731343283582089;
          result[2] += 0;
          result[3] += 0.9626865671641791;
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
          result[2] += 0.005859375;
          result[3] += 0.994140625;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
          result[0] += 0.9928841960289223;
          result[1] += 0;
          result[2] += 0.002984046826580971;
          result[3] += 0.0036726730173304257;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004590841271663032;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)51) ) ) {
          result[0] += 0.9300184162062615;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.06998158379373849;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.9992512868507253;
          result[1] += 0;
          result[2] += 0.0007019185774450163;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 4.679457182966776e-05;
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
          result[0] += 0.02972091337441102;
          result[1] += 0.006886553098948895;
          result[2] += 0.010148604566872057;
          result[3] += 0.8510329829648424;
          result[4] += 0.10076114534251542;
          result[5] += 0.0014498006524102938;
          result[6] += 0;
        } else {
          result[0] += 0.98667363470081;
          result[1] += 0;
          result[2] += 0.0037888685654559706;
          result[3] += 0.009014894172981448;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005226025607525476;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)20.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.015151515151515152;
          result[3] += 0;
          result[4] += 0.9818181818181818;
          result[5] += 0.0030303030303030303;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0006706908115358819;
          result[2] += 0.00670690811535882;
          result[3] += 0.9926224010731053;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
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
          result[0] += 0.02197802197802198;
          result[1] += 0.16483516483516483;
          result[2] += 0;
          result[3] += 0.8131868131868132;
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
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-8.5) ) ) {
          result[0] += 0.3225806451612903;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6774193548387096;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.1663306451612903;
          result[1] += 0.008064516129032258;
          result[2] += 0.011088709677419355;
          result[3] += 0.8145161290322581;
          result[4] += 0;
          result[5] += 0;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)74) ) ) {
          result[0] += 0.0018091361374943465;
          result[1] += 0.0013568521031207597;
          result[2] += 0.006331976481230212;
          result[3] += 0.9886928991406604;
          result[4] += 0;
          result[5] += 0.0018091361374943465;
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
          result[0] += 0.961139896373057;
          result[1] += 0;
          result[2] += 0.038860103626943004;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0014534883720930232;
          result[3] += 0;
          result[4] += 0.998546511627907;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
          result[0] += 0.5785123966942148;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.4214876033057851;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9948192082320995;
          result[1] += 0.00021437759039588395;
          result[2] += 0.0012862655423753037;
          result[3] += 0.0036086894383307133;
          result[4] += 0;
          result[5] += 0;
          result[6] += 7.145919679862798e-05;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          result[0] += 0.4301354611245129;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5698645388754872;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.984540769930282;
          result[1] += 0;
          result[2] += 0.012124886329190664;
          result[3] += 0.001515610791148833;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0018187329493785996;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
          result[0] += 0;
          result[1] += 0.04583333333333333;
          result[2] += 0;
          result[3] += 0.9541666666666667;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0011723329425556857;
          result[3] += 0.9988276670574443;
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
          result[0] += 0.9253731343283582;
          result[1] += 0;
          result[2] += 0.07462686567164178;
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
          result[0] += 0.015267175572519083;
          result[1] += 0.19083969465648856;
          result[2] += 0;
          result[3] += 0.7938931297709924;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)97) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.13716814159292035;
          result[4] += 0.8628318584070797;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.005547850208044383;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9944521497919556;
          result[5] += 0;
          result[6] += 0;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          result[0] += 0.9928400954653939;
          result[1] += 0;
          result[2] += 0.005966587112171838;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011933174224343678;
        } else {
          result[0] += 0.9979704262104958;
          result[1] += 0;
          result[2] += 0.002029573789504204;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9848484848484849;
          result[1] += 0;
          result[2] += 0.015151515151515152;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9999092064644998;
          result[1] += 0;
          result[2] += 9.079353550027238e-05;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.996031746031746;
          result[5] += 0.003968253968253968;
          result[6] += 0;
        } else {
          result[0] += 0.021239453011347106;
          result[1] += 0.012801862089031132;
          result[2] += 0.004655222577829503;
          result[3] += 0.961012510910678;
          result[4] += 0;
          result[5] += 0.0002909514111143439;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.02564102564102564;
          result[3] += 0.28717948717948716;
          result[4] += 0.6871794871794872;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.011528822055137845;
          result[3] += 0.15037593984962405;
          result[4] += 0.8380952380952381;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)51.5) ) ) {
          result[0] += 0.4720828105395232;
          result[1] += 0;
          result[2] += 0.0040777917189460475;
          result[3] += 0.5238393977415308;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6456228956228957;
          result[1] += 0;
          result[2] += 0.0021043771043771043;
          result[3] += 0.35058922558922556;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0016835016835016834;
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
          result[0] += 0.969908330011957;
          result[1] += 0.0005978477481068154;
          result[2] += 0.008369868473495417;
          result[3] += 0.020326823435631726;
          result[4] += 0;
          result[5] += 0.00039856516540454366;
          result[6] += 0.00039856516540454366;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9652173913043478;
          result[1] += 0;
          result[2] += 0.034782608695652174;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
          result[0] += 0.9990479817212491;
          result[1] += 0;
          result[2] += 0.000952018278750952;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)97.5) ) ) {
          result[0] += 0.027856916745805635;
          result[1] += 0.003798670465337132;
          result[2] += 0.00949667616334283;
          result[3] += 0.8771763216207661;
          result[4] += 0.08072174738841406;
          result[5] += 0.000949667616334283;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.024817518248175185;
          result[3] += 0;
          result[4] += 0.9693430656934308;
          result[5] += 0.005839416058394161;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9858539094650206;
          result[1] += 0;
          result[2] += 0.00411522633744856;
          result[3] += 0.009002057613168725;
          result[4] += 0;
          result[5] += 0.000257201646090535;
          result[6] += 0.0007716049382716049;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0011389521640091116;
          result[3] += 0.9988610478359908;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
          result[0] += 0.007017543859649123;
          result[1] += 0.028070175438596492;
          result[2] += 0;
          result[3] += 0.10526315789473684;
          result[4] += 0.8596491228070176;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.13472803347280335;
          result[1] += 0.009205020920502092;
          result[2] += 0;
          result[3] += 0.8560669456066946;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0.1554192229038855;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.21881390593047034;
          result[4] += 0.6257668711656442;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.01004566210045662;
          result[1] += 0;
          result[2] += 0.01004566210045662;
          result[3] += 0.108675799086758;
          result[4] += 0.8712328767123287;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          result[0] += 0.25084175084175087;
          result[1] += 0;
          result[2] += 0.015151515151515152;
          result[3] += 0.7289562289562289;
          result[4] += 0.005050505050505051;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6121794871794872;
          result[1] += 0;
          result[2] += 0.01282051282051282;
          result[3] += 0.375;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-23) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.1399662731871838;
          result[1] += 0.010961214165261383;
          result[2] += 0.006745362563237774;
          result[3] += 0.842327150084317;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)99) ) ) {
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)106.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.001984126984126984;
          result[1] += 0.017857142857142856;
          result[2] += 0;
          result[3] += 0.10714285714285714;
          result[4] += 0.873015873015873;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)14) ) ) {
          result[0] += 0.2;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9963855421686747;
          result[5] += 0.0036144578313253013;
          result[6] += 0;
        }
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
          result[2] += 0.015832805573147563;
          result[3] += 0.980367321089297;
          result[4] += 0;
          result[5] += 0.0037998733375554147;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          result[0] += 0.9957150508837708;
          result[1] += 0;
          result[2] += 0.004284949116229245;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9997506234413965;
          result[1] += 0;
          result[2] += 0.00024937655860349125;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.9685131195335278;
          result[1] += 0.002915451895043732;
          result[2] += 0.004470359572400389;
          result[3] += 0.023712342079689024;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003887269193391643;
        } else {
          result[0] += 0.4161113288906312;
          result[1] += 0;
          result[2] += 0.007448059584476677;
          result[3] += 0.5748725989807919;
          result[4] += 0;
          result[5] += 0.00039200313602508825;
          result[6] += 0.0011760094080752648;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)83) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9951338199513382;
          result[1] += 0;
          result[2] += 0.00291970802919708;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0019464720194647203;
        } else {
          result[0] += 0.9997932944726942;
          result[1] += 0;
          result[2] += 0.00020670552730580016;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)5624.5) ) ) {
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
          result[2] += 0.0031645569620253164;
          result[3] += 0;
          result[4] += 0.9968354430379747;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          result[0] += 0.028095393662201894;
          result[1] += 0.00555374060764456;
          result[2] += 0.021234890558640966;
          result[3] += 0.8379614505063705;
          result[4] += 0.10584776216922574;
          result[5] += 0.0013067624959163672;
          result[6] += 0;
        } else {
          result[0] += 0.7448900136266303;
          result[1] += 0;
          result[2] += 0.003698656803581857;
          result[3] += 0.24995133346311077;
          result[4] += 0;
          result[5] += 9.733307377846993e-05;
          result[6] += 0.001362663032898579;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1486.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.04024767801857585;
          result[2] += 0;
          result[3] += 0.09287925696594428;
          result[4] += 0.8668730650154799;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          result[0] += 0.2521865889212828;
          result[1] += 0.01020408163265306;
          result[2] += 0;
          result[3] += 0.7376093294460642;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)99.5) ) ) {
          result[0] += 0.024427480916030534;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.233587786259542;
          result[4] += 0.7419847328244275;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05569007263922518;
          result[4] += 0.9443099273607748;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)11) ) ) {
          result[0] += 0.017857142857142856;
          result[1] += 0;
          result[2] += 0.16071428571428573;
          result[3] += 0.8214285714285714;
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
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          result[0] += 0.11552203255260024;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8836840015879317;
          result[4] += 0.0007939658594680428;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.17948717948717952;
          result[1] += 0;
          result[2] += 0.07692307692307694;
          result[3] += 0;
          result[4] += 0.7307692307692308;
          result[5] += 0.012820512820512822;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.9912246696035242;
          result[1] += 0.0005638766519823788;
          result[2] += 0.0015859030837004405;
          result[3] += 0.0063788546255506605;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00024669603524229077;
        } else {
          result[0] += 0.646304143126177;
          result[1] += 0;
          result[2] += 0.00423728813559322;
          result[3] += 0.3486346516007533;
          result[4] += 0;
          result[5] += 0.00011770244821092278;
          result[6] += 0.0007062146892655367;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)109) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-26) ) ) {
          result[0] += 0.0072992700729927005;
          result[1] += 0.014598540145985401;
          result[2] += 0;
          result[3] += 0.9781021897810219;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.18190298507462688;
          result[1] += 0.009328358208955223;
          result[2] += 0;
          result[3] += 0.808768656716418;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-5241) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.035856573705179286;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9641434262948207;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
          result[0] += 0.09137055837563451;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9086294416243654;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.01578531965272297;
          result[4] += 0.984214680347277;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)11) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.10204081632653061;
          result[3] += 0.8979591836734694;
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
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
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
          result[1] += 0.00044169611307420494;
          result[2] += 0.011925795053003533;
          result[3] += 0.9867491166077739;
          result[4] += 0;
          result[5] += 0.0008833922261484099;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
          result[0] += 0.6882882882882883;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3117117117117117;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9975453035881886;
          result[1] += 0.0005414771496642842;
          result[2] += 0.001768825355569995;
          result[3] += 0.00010829542993285683;
          result[4] += 0;
          result[5] += 0;
          result[6] += 3.609847664428561e-05;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.17985012489592006;
          result[1] += 0;
          result[2] += 0.0030530113794060504;
          result[3] += 0.8170968637246738;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9946960424316607;
          result[1] += 0;
          result[2] += 0.002651978784169727;
          result[3] += 0.0014279885760913914;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0012239902080783355;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
          result[0] += 0;
          result[1] += 0.012578616352201259;
          result[2] += 0.0023584905660377358;
          result[3] += 0.985062893081761;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8767123287671232;
          result[1] += 0;
          result[2] += 0.1232876712328767;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-8.5) ) ) {
          result[0] += 0.5;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5;
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
          result[1] += 0.0009664948453608248;
          result[2] += 0.00547680412371134;
          result[3] += 0.9690721649484536;
          result[4] += 0.02222938144329897;
          result[5] += 0.0022551546391752575;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0029069767441860465;
          result[3] += 0;
          result[4] += 0.997093023255814;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95) ) ) {
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
          result[1] += 0.8888888888888888;
          result[2] += 0;
          result[3] += 0.1111111111111111;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)46) ) ) {
          result[0] += 0;
          result[1] += 0.02092050209205021;
          result[2] += 0;
          result[3] += 0.9790794979079498;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)105.5) ) ) {
          result[0] += 0.9949072389959985;
          result[1] += 0.000982175336485995;
          result[2] += 0.0025100036376864312;
          result[3] += 0.0013823208439432521;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00021826118588577664;
        } else {
          result[0] += 0.041666666666666664;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9583333333333334;
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
          result[2] += 0.0035783994795055302;
          result[3] += 0.9964216005204944;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
          result[0] += 0.6451612903225806;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3548387096774194;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.995478671122469;
          result[1] += 0;
          result[2] += 0.003145272262630234;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0013760566149007274;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-7.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-163) ) ) {
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)83) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9874371859296482;
          result[1] += 0;
          result[2] += 0.01256281407035176;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9994559515019625;
          result[1] += 0;
          result[2] += 0.000505187891034858;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 3.8860607002681386e-05;
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
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)112) ) ) {
          result[0] += 0;
          result[1] += 0.010084033613445379;
          result[2] += 0.008067226890756302;
          result[3] += 0.9801680672268908;
          result[4] += 0.0010084033613445378;
          result[5] += 0.0006722689075630252;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0125;
          result[4] += 0.9875;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
          result[0] += 0.9862700228832952;
          result[1] += 0;
          result[2] += 0.006864988558352402;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.006864988558352402;
        } else {
          result[0] += 0.9982893450635386;
          result[1] += 0;
          result[2] += 0.001710654936461388;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0.000888494002665482;
          result[1] += 0.0053309640159928924;
          result[2] += 0.011994669035984007;
          result[3] += 0.7081297201243891;
          result[4] += 0.2732119058196357;
          result[5] += 0.000444247001332741;
          result[6] += 0;
        } else {
          result[0] += 0.003740648379052369;
          result[1] += 0.0007481296758104738;
          result[2] += 0.0059850374064837905;
          result[3] += 0.5693266832917706;
          result[4] += 0.4199501246882793;
          result[5] += 0.00024937655860349125;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)42) ) ) {
          result[0] += 0.9898609501738123;
          result[1] += 0;
          result[2] += 0.008980301274623407;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011587485515643105;
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
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.996078431372549;
          result[5] += 0.00392156862745098;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)97) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.00985691573926868;
          result[3] += 0.9888712241653418;
          result[4] += 0;
          result[5] += 0.0012718600953895071;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.8125;
          result[2] += 0;
          result[3] += 0.1875;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 0.9990540753586631;
          result[1] += 0;
          result[2] += 0.0007882705344474224;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00015765410688948448;
        } else {
          result[0] += 0.689419795221843;
          result[1] += 0.0034129692832764505;
          result[2] += 0;
          result[3] += 0.30716723549488056;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.8256965231406863;
          result[1] += 0.005526134008749713;
          result[2] += 0.011973290352291045;
          result[3] += 0.15588303016348148;
          result[4] += 0;
          result[5] += 0.0004605111673958094;
          result[6] += 0.0004605111673958094;
        } else {
          result[0] += 0.12566666666666668;
          result[1] += 0;
          result[2] += 0.005333333333333333;
          result[3] += 0.869;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)29) ) ) {
          result[0] += 0.987733588883565;
          result[1] += 0;
          result[2] += 0.0021082894106372787;
          result[3] += 0.009774796358409202;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00038332534738859614;
        } else {
          result[0] += 0.7368421052631579;
          result[1] += 0;
          result[2] += 0.05263157894736842;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.21052631578947367;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85.5) ) ) {
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
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-5.5) ) ) {
          result[0] += 0.004228329809725159;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9957716701902748;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9629629629629629;
          result[5] += 0.037037037037037035;
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
          result[0] += 0;
          result[1] += 0.004457179242279528;
          result[2] += 0.0019102196752626551;
          result[3] += 0.9920407513530722;
          result[4] += 0;
          result[5] += 0.001591849729385546;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          result[0] += 0.9912925987089026;
          result[1] += 0.0021017865185407603;
          result[2] += 0.005554721513286294;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0010508932592703801;
        } else {
          result[0] += 0.997877458610443;
          result[1] += 9.43351728692043e-05;
          result[2] += 0.0016980331116456773;
          result[3] += 0.00033017310504221506;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1487) ) ) {
          result[0] += 0.625;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.375;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.04529616724738676;
          result[2] += 0;
          result[3] += 0.9547038327526133;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.26011695906432747;
          result[1] += 0;
          result[2] += 0.0016374269005847953;
          result[3] += 0.7382456140350877;
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
          result[0] += 0.9569798068481123;
          result[1] += 0;
          result[2] += 0.03511852502194908;
          result[3] += 0.001755926251097454;
          result[4] += 0;
          result[5] += 0.000877963125548727;
          result[6] += 0.0052677787532923615;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-16) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-3.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9987098161488012;
          result[1] += 0;
          result[2] += 0.0011826685302655628;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00010751532093323298;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          result[0] += 0.03219904866447128;
          result[1] += 0.005488474204171241;
          result[2] += 0.013172338090010977;
          result[3] += 0.8543724844493231;
          result[4] += 0.09403585803146725;
          result[5] += 0.0007317965605561653;
          result[6] += 0;
        } else {
          result[0] += 0.9821843532145623;
          result[1] += 0;
          result[2] += 0.005809450038729667;
          result[3] += 0.011360702297960238;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006454944487477407;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
          result[0] += 0;
          result[1] += 0.0006640106241699867;
          result[2] += 0.009296148738379814;
          result[3] += 0.8343293492695883;
          result[4] += 0.15405046480743692;
          result[5] += 0.0016600265604249668;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6732117812061711;
          result[4] += 0.3267882187938289;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-6.5) ) ) {
          result[0] += 0.2830188679245283;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7169811320754716;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.14270152505446623;
          result[1] += 0.015250544662309368;
          result[2] += 0.010893246187363835;
          result[3] += 0.8311546840958606;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3663003663003663;
          result[4] += 0.6336996336996337;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0006807351940095302;
          result[1] += 0.009530292716133424;
          result[2] += 0;
          result[3] += 0.04901293396868618;
          result[4] += 0.9407760381211708;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)5.5) ) ) {
          result[0] += 0.2369060006937218;
          result[1] += 0;
          result[2] += 0.002428026361429067;
          result[3] += 0.7592785293097468;
          result[4] += 0;
          result[5] += 0.001387443635102324;
          result[6] += 0;
        } else {
          result[0] += 0.11266094420600858;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.880901287553648;
          result[4] += 0.006437768240343348;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)85) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.39344262295081966;
          result[4] += 0.6065573770491803;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.011724137931034483;
          result[2] += 0;
          result[3] += 0.009655172413793104;
          result[4] += 0.9786206896551725;
          result[5] += 0;
          result[6] += 0;
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
          result[0] += 0.01509433962264151;
          result[1] += 0.04150943396226415;
          result[2] += 0;
          result[3] += 0.9433962264150944;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          result[0] += 0.9972594836290206;
          result[1] += 0.00043271311120726956;
          result[2] += 0.0020553872782345306;
          result[3] += 0.00014423770373575654;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00010817827780181739;
        } else {
          result[0] += 0.1744186046511628;
          result[1] += 0;
          result[2] += 0.12790697674418605;
          result[3] += 0.6976744186046512;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.023529411764705882;
          result[3] += 0;
          result[4] += 0.9764705882352941;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0019411193788417987;
          result[3] += 0.9977353607246846;
          result[4] += 0;
          result[5] += 0.00032351989647363315;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)74) ) ) {
          result[0] += 0.9908697741470447;
          result[1] += 0;
          result[2] += 0.006727534839019702;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002402691013935608;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          result[0] += 0.5471698113207547;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.4528301886792453;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.1763869132290185;
          result[1] += 0.01422475106685633;
          result[2] += 0;
          result[3] += 0.8093883357041252;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.06808510638297872;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9319148936170213;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.33129957291031115;
          result[1] += 0.009762050030506406;
          result[2] += 0.017693715680292862;
          result[3] += 0.6412446613788896;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.75;
          result[5] += 0.25;
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
          result[0] += 0.0006265664160401002;
          result[1] += 0;
          result[2] += 0.008771929824561403;
          result[3] += 0.9887218045112782;
          result[4] += 0;
          result[5] += 0.0018796992481203006;
          result[6] += 0;
        } else {
          result[0] += 0.9238095238095239;
          result[1] += 0;
          result[2] += 0.0761904761904762;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
          result[0] += 0.6254826254826255;
          result[1] += 0;
          result[2] += 0.003861003861003861;
          result[3] += 0.37065637065637064;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9977707122757008;
          result[1] += 0.0002192742023900888;
          result[2] += 0.0009136425099587034;
          result[3] += 0.000804005408763659;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002923656031867851;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          result[0] += 0.4343107387661843;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5656892612338157;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9849804746170021;
          result[1] += 0;
          result[2] += 0.012015620306398318;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.0006007810153199159;
          result[6] += 0.0024031240612796636;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)112) ) ) {
          result[0] += 0.0011976047904191617;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.998003992015968;
          result[4] += 0.0003992015968063872;
          result[5] += 0.0003992015968063872;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.014285714285714285;
          result[4] += 0.9857142857142858;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82) ) ) {
          result[0] += 0.9347826086956522;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.021739130434782608;
          result[4] += 0;
          result[5] += 0.043478260869565216;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8181818181818182;
          result[3] += 0;
          result[4] += 0.18181818181818182;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-41) ) ) {
          result[0] += 0;
          result[1] += 0.06746031746031746;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9325396825396826;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.001823985408116735;
          result[2] += 0.00729594163246694;
          result[3] += 0;
          result[4] += 0.9895120839033288;
          result[5] += 0.0013679890560875513;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)55) ) ) {
          result[0] += 0.988442327796492;
          result[1] += 0.0008711813218724591;
          result[2] += 0.0033104890231153445;
          result[3] += 0.007143686839354164;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00023231501916598908;
        } else {
          result[0] += 0.12514898688915377;
          result[1] += 0.015494636471990465;
          result[2] += 0;
          result[3] += 0.8593563766388558;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
          result[0] += 0.9990090982794343;
          result[1] += 0;
          result[2] += 0.0009909017205657147;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.22;
          result[3] += 0.78;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
          result[0] += 0.19205128205128205;
          result[1] += 0;
          result[2] += 0.0005128205128205128;
          result[3] += 0.8074358974358974;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9961873638344226;
          result[1] += 0;
          result[2] += 0.003812636165577342;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47.5) ) ) {
          result[0] += 0.8412698412698413;
          result[1] += 0;
          result[2] += 0.15873015873015872;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9900373599003736;
          result[1] += 0;
          result[2] += 0.0062266500622665;
          result[3] += 0.0009339975093399751;
          result[4] += 0;
          result[5] += 0.0009339975093399751;
          result[6] += 0.0018679950186799503;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)41) ) ) {
          result[0] += 0.9974747474747475;
          result[1] += 0;
          result[2] += 0.0025252525252525255;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8820960698689956;
          result[1] += 0;
          result[2] += 0.11790393013100436;
          result[3] += 0;
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
          result[0] += 0.07321350284962735;
          result[1] += 0.004822446295484437;
          result[2] += 0.00394563787812363;
          result[3] += 0.9180184129767646;
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
          result[0] += 0.01020408163265306;
          result[1] += 0.23469387755102042;
          result[2] += 0;
          result[3] += 0.7551020408163265;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0064794816414686825;
          result[4] += 0.9935205183585313;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.15428571428571428;
          result[4] += 0.8457142857142858;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
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
          result[0] += 0.999086248032895;
          result[1] += 0;
          result[2] += 0.0009137519671049292;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)1.5) ) ) {
          result[0] += 0.569955038349643;
          result[1] += 0.0013224014810896587;
          result[2] += 0.008198889182755884;
          result[3] += 0.41417614387728113;
          result[4] += 0.0058185665167944985;
          result[5] += 0.0001322401481089659;
          result[6] += 0.00039672044432689763;
        } else {
          result[0] += 0.6496945010183299;
          result[1] += 0;
          result[2] += 0.0005091649694501018;
          result[3] += 0.344959266802444;
          result[4] += 0.004073319755600814;
          result[5] += 0;
          result[6] += 0.0007637474541751527;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)2060.5) ) ) {
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
          result[2] += 0.01098901098901099;
          result[3] += 0;
          result[4] += 0.989010989010989;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)6504) ) ) {
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
          result[0] += 0.01694915254237288;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9830508474576272;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.054474708171206226;
          result[2] += 0;
          result[3] += 0.007782101167315175;
          result[4] += 0.9377431906614786;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0.00904977375565611;
          result[1] += 0.004524886877828055;
          result[2] += 0.014705882352941176;
          result[3] += 0.9711538461538461;
          result[4] += 0.0005656108597285068;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0007710100231303007;
          result[3] += 0.18118735543562067;
          result[4] += 0.818041634541249;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)86) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.826530612244898;
          result[1] += 0;
          result[2] += 0.17346938775510204;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)2.5) ) ) {
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
          result[4] += 0.9512195121951219;
          result[5] += 0.04878048780487805;
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.018571428571428572;
          result[3] += 0.9807142857142858;
          result[4] += 0;
          result[5] += 0.0007142857142857143;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)55.5) ) ) {
          result[0] += 0.9980659167160055;
          result[1] += 0.0005920663114268798;
          result[2] += 0.0004341819617130452;
          result[3] += 0.0007894217485691731;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00011841326228537596;
        } else {
          result[0] += 0.9549632352941176;
          result[1] += 0;
          result[2] += 0.0055147058823529415;
          result[3] += 0.0390625;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00045955882352941176;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.17695700110253584;
          result[1] += 0;
          result[2] += 0.003858875413450937;
          result[3] += 0.8183572216097024;
          result[4] += 0;
          result[5] += 0.0008269018743109151;
          result[6] += 0;
        } else {
          result[0] += 0.9937285049565042;
          result[1] += 0;
          result[2] += 0.004248432126239127;
          result[3] += 0.0010115314586283636;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0010115314586283636;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.008366141732283465;
          result[1] += 0.0073818897637795275;
          result[2] += 0.01033464566929134;
          result[3] += 0.9739173228346457;
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
          result[0] += 0.2;
          result[1] += 0;
          result[2] += 0.8;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
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
          result[2] += 0.027692307692307693;
          result[3] += 0.841025641025641;
          result[4] += 0.13128205128205128;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
          result[0] += 0.9841751160807352;
          result[1] += 4.737989197384629e-05;
          result[2] += 0.0009475978394769258;
          result[3] += 0.014735146403866195;
          result[4] += 9.475978394769257e-05;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7585311051818566;
          result[1] += 0.000772363432102233;
          result[2] += 0.0025979497261620563;
          result[3] += 0.23683471422553015;
          result[4] += 0.0007021485746383936;
          result[5] += 0.00014042971492767874;
          result[6] += 0.00042128914478303613;
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-16) ) ) {
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
          result[0] += 0.9979693140794224;
          result[1] += 0;
          result[2] += 0.002030685920577617;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9994069681245367;
          result[1] += 0;
          result[2] += 0.0005930318754633062;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
          result[0] += 0.33541513592946365;
          result[1] += 0.002571638501102131;
          result[2] += 0.011388684790595151;
          result[3] += 0.6498897869213813;
          result[4] += 0.0007347538574577516;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0005385029617662897;
          result[1] += 0.009154550350026925;
          result[2] += 0;
          result[3] += 0.12762520193861066;
          result[4] += 0.8626817447495961;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          result[0] += 0.046750285062713795;
          result[1] += 0.00855188141391106;
          result[2] += 0.009692132269099202;
          result[3] += 0.863740022805017;
          result[4] += 0.06955530216647662;
          result[5] += 0.0017103762827822121;
          result[6] += 0;
        } else {
          result[0] += 0.9843468624463222;
          result[1] += 0;
          result[2] += 0.00415570023548968;
          result[3] += 0.01052777392990719;
          result[4] += 0;
          result[5] += 0.0002770466823659787;
          result[6] += 0.0006926167059149467;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)92) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.75;
          result[5] += 0.25;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0.0006718172657037286;
          result[2] += 0;
          result[3] += 0.9993281827342962;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9696969696969697;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.030303030303030304;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
          result[0] += 0.9834938101788171;
          result[1] += 0;
          result[2] += 0.016506189821182942;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.07692307692307693;
          result[1] += 0;
          result[2] += 0.8461538461538461;
          result[3] += 0.07692307692307693;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          result[0] += 0.1365600691443388;
          result[1] += 0.006914433880726016;
          result[2] += 0.000864304235090752;
          result[3] += 0.8556611927398444;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0009276437847866419;
          result[1] += 0.012059369202226345;
          result[2] += 0.0009276437847866419;
          result[3] += 0.9860853432282004;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)14) ) ) {
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
          result[4] += 0.9975460122699387;
          result[5] += 0.00245398773006135;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 0.10415375077495351;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8958462492250465;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6753246753246753;
          result[1] += 0;
          result[2] += 0.2857142857142857;
          result[3] += 0.012987012987012988;
          result[4] += 0;
          result[5] += 0.025974025974025976;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
          result[0] += 0.9949243731600853;
          result[1] += 5.0756268399147295e-05;
          result[2] += 0.0008121002943863567;
          result[3] += 0.004212770277129225;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5331310873383363;
          result[1] += 0.0030336899249560913;
          result[2] += 0.004949704614402044;
          result[3] += 0.45856618234073127;
          result[4] += 0;
          result[5] += 0.0003193357815743254;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.9547304170905392;
          result[1] += 0;
          result[2] += 0.001525940996948118;
          result[3] += 0.04374364191251272;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9966985025350784;
          result[1] += 0;
          result[2] += 0.0014149274849663955;
          result[3] += 0.0009432849899775969;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009432849899775969;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
          result[0] += 0.9994805194805195;
          result[1] += 0;
          result[2] += 0.0005194805194805195;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)2.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.339662447257384;
          result[1] += 0;
          result[2] += 0.04219409282700422;
          result[3] += 0.6160337552742616;
          result[4] += 0;
          result[5] += 0.002109704641350211;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)40) ) ) {
          result[0] += 0.8835509138381201;
          result[1] += 0;
          result[2] += 0.0028720626631853785;
          result[3] += 0.11174934725848563;
          result[4] += 0;
          result[5] += 0.000783289817232376;
          result[6] += 0.0010443864229765013;
        } else {
          result[0] += 0.41983122362869196;
          result[1] += 0;
          result[2] += 0.007032348804500703;
          result[3] += 0.5731364275668073;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0.13711414213926776;
          result[1] += 0.01148600143575018;
          result[2] += 0;
          result[3] += 0.7997128499641063;
          result[4] += 0.05168700646087581;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.06833333333333333;
          result[1] += 0;
          result[2] += 0.015;
          result[3] += 0.25333333333333335;
          result[4] += 0.66;
          result[5] += 0.0033333333333333335;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
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
          result[2] += 0;
          result[3] += 0.9690322580645162;
          result[4] += 0.030322580645161294;
          result[5] += 0.0006451612903225808;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)26) ) ) {
          result[0] += 0.7647058823529412;
          result[1] += 0.03921568627450981;
          result[2] += 0;
          result[3] += 0.03921568627450981;
          result[4] += 0.11764705882352942;
          result[5] += 0.03921568627450981;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.002346041055718475;
          result[2] += 0.008211143695014663;
          result[3] += 0;
          result[4] += 0.9882697947214076;
          result[5] += 0.0011730205278592375;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
          result[0] += 0.5661641541038526;
          result[1] += 0.0033500837520938024;
          result[2] += 0.0016750418760469012;
          result[3] += 0.4288107202680067;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.994908406663346;
          result[1] += 0.0017156455808290442;
          result[2] += 0.001881675798328629;
          result[3] += 0.0013835851458298743;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00011068681166638995;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          result[0] += 0.5062817428495054;
          result[1] += 0;
          result[2] += 0.002673082063619353;
          result[3] += 0.4910451750868752;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9951733216322949;
          result[1] += 0;
          result[2] += 0.0035103115401491883;
          result[3] += 0.0008775778850372971;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00043878894251864854;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.05309734513274336;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9469026548672567;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.01100715465052284;
          result[2] += 0.012107870115575124;
          result[3] += 0.976884975233902;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)86) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9069767441860465;
          result[1] += 0;
          result[2] += 0.09302325581395349;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 0.0028388928317956;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9957416607523066;
          result[4] += 0;
          result[5] += 0.0014194464158978;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.015625;
          result[2] += 0.125;
          result[3] += 0;
          result[4] += 0.8125;
          result[5] += 0.046875;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)27) ) ) {
          result[0] += 0.9868995633187773;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.013100436681222707;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.020588235294117647;
          result[3] += 0;
          result[4] += 0.9794117647058823;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          result[0] += 0.9969091773656682;
          result[1] += 0;
          result[2] += 0.002853067047075607;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00023775558725630056;
        } else {
          result[0] += 0.9997697550193406;
          result[1] += 0;
          result[2] += 0.00023024498065942161;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 0.5114184625281442;
          result[1] += 0.0022515278224509495;
          result[2] += 0.004181408813123191;
          result[3] += 0.48134448375683503;
          result[4] += 0;
          result[5] += 0.00016082341588935352;
          result[6] += 0.0006432936635574141;
        } else {
          result[0] += 0.9672897196261683;
          result[1] += 0;
          result[2] += 0.004153686396677051;
          result[3] += 0.027777777777777776;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000778816199376947;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)85.5) ) ) {
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
          result[2] += 0.009734513274336283;
          result[3] += 0.988495575221239;
          result[4] += 0;
          result[5] += 0.0017699115044247787;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
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
          result[0] += 0;
          result[1] += 0.11016949152542373;
          result[2] += 0;
          result[3] += 0.8898305084745762;
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
          result[0] += 0.9941133186166299;
          result[1] += 0;
          result[2] += 0.005886681383370125;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9992748368382887;
          result[1] += 0;
          result[2] += 0.0007251631617113851;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9718221665623044;
          result[1] += 0.0015028177833437697;
          result[2] += 0.006011271133375079;
          result[3] += 0.019411396368190358;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0012523481527864746;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.004243281471004243;
          result[3] += 0.9957567185289957;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-27.5) ) ) {
          result[0] += 0.40816326530612246;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5918367346938775;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.16566005176876616;
          result[1] += 0.006902502157031924;
          result[2] += 0.0181190681622088;
          result[3] += 0.8093183779119931;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-184) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
          result[0] += 0.9977233921457029;
          result[1] += 0;
          result[2] += 0.0022766078542970974;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9859943977591037;
          result[1] += 0;
          result[2] += 0.011204481792717087;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0028011204481792717;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0.9990987946378281;
          result[1] += 0;
          result[2] += 0.000901205362171905;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.8477209944751382;
          result[1] += 0.006906077348066298;
          result[2] += 0.0024171270718232043;
          result[3] += 0.14157458563535913;
          result[4] += 0.0006906077348066298;
          result[5] += 0;
          result[6] += 0.0006906077348066298;
        } else {
          result[0] += 0;
          result[1] += 0.008547008547008548;
          result[2] += 0;
          result[3] += 0.9871794871794872;
          result[4] += 0.004273504273504274;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)112) ) ) {
          result[0] += 0.496127562642369;
          result[1] += 0.002277904328018223;
          result[2] += 0.004555808656036446;
          result[3] += 0.4970387243735763;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.02040816326530612;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9795918367346939;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0;
          result[1] += 0.006775067750677507;
          result[2] += 0.01987353206865402;
          result[3] += 0.6960252935862692;
          result[4] += 0.2755194218608853;
          result[5] += 0.0018066847335140017;
          result[6] += 0;
        } else {
          result[0] += 0.9864061172472387;
          result[1] += 0;
          result[2] += 0.010195412064570943;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0033984706881903144;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.004233067729083665;
          result[1] += 0.00099601593625498;
          result[2] += 0.0047310756972111555;
          result[3] += 0.5552788844621513;
          result[4] += 0.4347609561752988;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9924478009773434;
          result[1] += 0;
          result[2] += 0.0053309640159928924;
          result[3] += 0.002221235006663705;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)85.5) ) ) {
          result[0] += 0.0226628895184136;
          result[1] += 0;
          result[2] += 0.029745042492917848;
          result[3] += 0.9277620396600567;
          result[4] += 0.019830028328611898;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.004556962025316456;
          result[2] += 0;
          result[3] += 0.6096202531645569;
          result[4] += 0.3858227848101266;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)47.5) ) ) {
          result[0] += 0.9847826086956522;
          result[1] += 0;
          result[2] += 0.015217391304347827;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.3333333333333333;
          result[1] += 0;
          result[2] += 0.6666666666666666;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
          result[0] += 0.009433962264150943;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9905660377358491;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0625;
          result[1] += 0.625;
          result[2] += 0;
          result[3] += 0.3125;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)27) ) ) {
          result[0] += 0.9901960784313726;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.00980392156862745;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0024125452352231603;
          result[3] += 0.218335343787696;
          result[4] += 0.7768395657418576;
          result[5] += 0.0024125452352231603;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)19.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1125;
          result[3] += 0;
          result[4] += 0.88125;
          result[5] += 0.00625;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0007716049382716049;
          result[2] += 0.0015432098765432098;
          result[3] += 0.9976851851851852;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.9981565442678493;
          result[1] += 0;
          result[2] += 0.0008469931742314784;
          result[3] += 0.0009466394300234169;
          result[4] += 0;
          result[5] += 0;
          result[6] += 4.9823127895969315e-05;
        } else {
          result[0] += 0.8824427480916031;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.11755725190839694;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
          result[0] += 0.7238270647537806;
          result[1] += 0.0010663047692904227;
          result[2] += 0.0032958511050794883;
          result[3] += 0.2715199689802249;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002908103916246607;
        } else {
          result[0] += 0.9413051403572729;
          result[1] += 0;
          result[2] += 0.0056507473569084934;
          result[3] += 0.05122129055778343;
          result[4] += 0;
          result[5] += 0.00036456434560699956;
          result[6] += 0.0014582573824279983;
        }
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)99) ) ) {
          result[0] += 0;
          result[1] += 0.0003211303789338471;
          result[2] += 0;
          result[3] += 0.9980732177263969;
          result[4] += 0.0006422607578676942;
          result[5] += 0.0009633911368015414;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0.4;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.013057181449797388;
          result[3] += 0;
          result[4] += 0.9855920756416029;
          result[5] += 0.0013507429085997298;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)35.5) ) ) {
          result[0] += 0.9973544973544973;
          result[1] += 0;
          result[2] += 0.0026455026455026454;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0.999634012443577;
          result[1] += 0;
          result[2] += 0.0003659875564230816;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
          result[0] += 0.35777777777777775;
          result[1] += 0.015555555555555555;
          result[2] += 0;
          result[3] += 0.6266666666666667;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9891627337877993;
          result[1] += 0.002971508477538892;
          result[2] += 0.005943016955077784;
          result[3] += 0.0013983569306065373;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005243838489774515;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.8302527348170502;
          result[1] += 0;
          result[2] += 0.01018483591097699;
          result[3] += 0.15616748396831384;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0033949453036589967;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0032397408207343412;
          result[3] += 0.9967602591792657;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
          result[0] += 0.9969451583183825;
          result[1] += 0;
          result[2] += 0.0004364059545168017;
          result[3] += 0.0025699461765989434;
          result[4] += 4.848955050186685e-05;
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
          result[4] += 0.9985119047619048;
          result[5] += 0.001488095238095238;
          result[6] += 0;
        } else {
          result[0] += 0.06206896551724138;
          result[1] += 0.013793103448275862;
          result[2] += 0.034482758620689655;
          result[3] += 0.8896551724137931;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)94.5) ) ) {
          result[0] += 0.7605762824783477;
          result[1] += 0.0008327781479013991;
          result[2] += 0.003997335109926716;
          result[3] += 0.2091105929380413;
          result[4] += 0.024983344437041973;
          result[5] += 0.0002498334443704197;
          result[6] += 0.0002498334443704197;
        } else {
          result[0] += 0.3119266055045872;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6880733944954128;
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
          result[0] += 0.9856619890176938;
          result[1] += 0;
          result[2] += 0.00762660158633313;
          result[3] += 0.0009151921903599756;
          result[4] += 0.003965832824893227;
          result[5] += 0.0006101281269066504;
          result[6] += 0.0012202562538133007;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)13) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.4126984126984127;
          result[1] += 0;
          result[2] += 0.031746031746031744;
          result[3] += 0.5555555555555556;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)85) ) ) {
          result[0] += 0.16191275167785235;
          result[1] += 0.00587248322147651;
          result[2] += 0;
          result[3] += 0.8322147651006712;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.041025641025641026;
          result[4] += 0.958974358974359;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
          result[0] += 0.03773584905660377;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9622641509433962;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.009900990099009901;
          result[1] += 0.06930693069306931;
          result[2] += 0;
          result[3] += 0.0049504950495049506;
          result[4] += 0.9158415841584159;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)123.5) ) ) {
          result[0] += 0;
          result[1] += 0.00273224043715847;
          result[2] += 0;
          result[3] += 0.08469945355191257;
          result[4] += 0.912568306010929;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-41) ) ) {
          result[0] += 0;
          result[1] += 0.056338028169014086;
          result[2] += 0;
          result[3] += 0.056338028169014086;
          result[4] += 0.8873239436619719;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.05638766519823789;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6651982378854625;
          result[4] += 0.27841409691629954;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-29) ) ) {
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
          result[1] += 0.13636363636363635;
          result[2] += 0;
          result[3] += 0.8636363636363636;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
          result[0] += 0.3190998268897865;
          result[1] += 0.005770340450086555;
          result[2] += 0.015579919215233698;
          result[3] += 0.6595499134448932;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.10795454545454546;
          result[4] += 0.8920454545454546;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85) ) ) {
          result[0] += 0.11895910780669144;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8798017348203222;
          result[4] += 0;
          result[5] += 0.0012391573729863693;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07207207207207207;
          result[3] += 0;
          result[4] += 0.9234234234234234;
          result[5] += 0.0045045045045045045;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
          result[0] += 0.9904183966783775;
          result[1] += 0;
          result[2] += 0.0031938677738741618;
          result[3] += 0.0063877355477483235;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.854014598540146;
          result[1] += 0;
          result[2] += 0.002470522178551376;
          result[3] += 0.14261650758001126;
          result[4] += 0;
          result[5] += 0.00033688938798427854;
          result[6] += 0.000561482313307131;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)83) ) ) {
          result[0] += 0.9989041095890411;
          result[1] += 0;
          result[2] += 0.0009315068493150685;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00016438356164383562;
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
          result[0] += 0.7133273703041145;
          result[1] += 0.0026833631484794273;
          result[2] += 0.00424865831842576;
          result[3] += 0.25760286225402507;
          result[4] += 0.022137745974955277;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.34574638844301764;
          result[1] += 0;
          result[2] += 0.0012841091492776886;
          result[3] += 0.48635634028892455;
          result[4] += 0.16468699839486356;
          result[5] += 0.0009630818619582664;
          result[6] += 0.0009630818619582664;
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9745669001105787;
          result[4] += 0.025433099889421305;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.001466275659824047;
          result[2] += 0;
          result[3] += 0.782991202346041;
          result[4] += 0.2155425219941349;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9977220956719818;
          result[5] += 0.002277904328018223;
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
          result[1] += 0.4166666666666667;
          result[2] += 0.5277777777777778;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.05555555555555555;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
          result[0] += 0.9951219512195122;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.004878048780487805;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9993639688344729;
          result[1] += 0;
          result[2] += 0.0005830285683998516;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 5.300259712725924e-05;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          result[0] += 0.9935177682602153;
          result[1] += 0.0010417872438939692;
          result[2] += 0.004977427943048964;
          result[3] += 0.0003472624146313231;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00011575413821044102;
        } else {
          result[0] += 0.0034602076124567475;
          result[1] += 0.031141868512110725;
          result[2] += 0;
          result[3] += 0.9653979238754326;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          result[0] += 0.36499183006535946;
          result[1] += 0;
          result[2] += 0.001838235294117647;
          result[3] += 0.6331699346405228;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9857057772483623;
          result[1] += 0;
          result[2] += 0.010422870756402622;
          result[3] += 0.0008933889219773676;
          result[4] += 0;
          result[5] += 0.00029779630732578924;
          result[6] += 0.002680166765932103;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
          result[0] += 0.9962765957446809;
          result[1] += 0;
          result[2] += 0.003723404255319149;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9752475247524752;
          result[1] += 0;
          result[2] += 0.01485148514851485;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.009900990099009901;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0.9993331851522561;
          result[1] += 0;
          result[2] += 0.0006668148477439431;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.8689433418339062;
          result[1] += 0.0007761392615589311;
          result[2] += 0.006098237055105887;
          result[3] += 0.12240824925158;
          result[4] += 0;
          result[5] += 0.00044350814946224635;
          result[6] += 0.001330524448386739;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.007652364033889041;
          result[3] += 0.7966657556709483;
          result[4] += 0.19540858157966656;
          result[5] += 0.00027329871549603714;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
          result[0] += 0;
          result[1] += 0.0046210720887245845;
          result[2] += 0.015249537892791128;
          result[3] += 0.977818853974122;
          result[4] += 0.0018484288354898336;
          result[5] += 0.0004621072088724584;
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
          result[0] += 0.0110803324099723;
          result[1] += 0.036011080332409975;
          result[2] += 0;
          result[3] += 0.9529085872576177;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.13584905660377358;
          result[4] += 0.8641509433962264;
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)57) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-5.5) ) ) {
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9981024667931688;
          result[5] += 0.0018975332068311196;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)50) ) ) {
          result[0] += 0.0011560693641618498;
          result[1] += 0.0038535645472061657;
          result[2] += 0.005009633911368015;
          result[3] += 0.9876685934489403;
          result[4] += 0;
          result[5] += 0.0023121387283236996;
          result[6] += 0;
        } else {
          result[0] += 0.95;
          result[1] += 0;
          result[2] += 0.05;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)47) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9983108108108109;
          result[1] += 0;
          result[2] += 0.0016891891891891893;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
          result[0] += 0.4288537549407115;
          result[1] += 0.011857707509881422;
          result[2] += 0;
          result[3] += 0.5592885375494071;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9938318171732861;
          result[1] += 0.0010206345684490793;
          result[2] += 0.0026181495451519862;
          result[3] += 0.002351897049034835;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00017750166407810077;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)40.5) ) ) {
          result[0] += 0.22847011144883486;
          result[1] += 0;
          result[2] += 0.0070921985815602835;
          result[3] += 0.7644376899696048;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.09015873015873016;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9085714285714286;
          result[4] += 0;
          result[5] += 0.0012698412698412698;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)48.5) ) ) {
          result[0] += 0.997072599531616;
          result[1] += 0;
          result[2] += 0.0020491803278688526;
          result[3] += 0.0008782201405152225;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9529272151898734;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04707278481012658;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          result[0] += 0.9926470588235294;
          result[1] += 0;
          result[2] += 0.007018716577540107;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00033422459893048126;
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
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
          result[0] += 0.991140642303433;
          result[1] += 0;
          result[2] += 0.008859357696566999;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9956521739130435;
          result[1] += 0;
          result[2] += 0.004347826086956522;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9997495721858174;
          result[1] += 0;
          result[2] += 0.00025042781418256187;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9958847736625515;
          result[5] += 0.00411522633744856;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          result[0] += 0;
          result[1] += 0.008695652173913045;
          result[2] += 0.015760869565217394;
          result[3] += 0.9728260869565218;
          result[4] += 0;
          result[5] += 0.0027173913043478264;
          result[6] += 0;
        } else {
          result[0] += 0.2627118644067797;
          result[1] += 0;
          result[2] += 0.011299435028248588;
          result[3] += 0.7259887005649718;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
          result[0] += 0.5677393722685738;
          result[1] += 0;
          result[2] += 0.006754072308303537;
          result[3] += 0.42471195868096945;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007945967421533573;
        } else {
          result[0] += 0.6599522926053538;
          result[1] += 0;
          result[2] += 0.0015902464882056719;
          result[3] += 0.33819241982507287;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00026504108136761196;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
          result[0] += 0.7042093287827076;
          result[1] += 0;
          result[2] += 0.011376564277588168;
          result[3] += 0.27986348122866894;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.004550625711035267;
        } else {
          result[0] += 0.9635696131036431;
          result[1] += 0;
          result[2] += 0.005930528099406947;
          result[3] += 0.030499858796950014;
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
          result[1] += 0.001519756838905775;
          result[2] += 0;
          result[3] += 0.9924012158054711;
          result[4] += 0;
          result[5] += 0.0060790273556231;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
          result[0] += 0.6790123456790124;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.32098765432098764;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9973573704025485;
          result[1] += 0.00047060527077903274;
          result[2] += 0.0009774109470026065;
          result[3] += 0.0010136113524471474;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001810020272227049;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-41) ) ) {
          result[0] += 0;
          result[1] += 0.10218978102189781;
          result[2] += 0;
          result[3] += 0.08759124087591241;
          result[4] += 0.8102189781021898;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.1334141904184354;
          result[1] += 0;
          result[2] += 0.004851425106124924;
          result[3] += 0.6701030927835051;
          result[4] += 0.19163129169193452;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-29) ) ) {
          result[0] += 0;
          result[1] += 0.005119453924914676;
          result[2] += 0;
          result[3] += 0.06143344709897611;
          result[4] += 0.9334470989761092;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.12423257493680029;
          result[1] += 0.00577825929938606;
          result[2] += 0.015529071867100036;
          result[3] += 0.5745756590827014;
          result[4] += 0.27916215240158904;
          result[5] += 0.0007222824124232575;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.998730561726436;
          result[4] += 0;
          result[5] += 0.0012694382735639479;
          result[6] += 0;
        } else {
          result[0] += 0.9508928571428571;
          result[1] += 0;
          result[2] += 0.049107142857142856;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)6.5) ) ) {
          result[0] += 0.9987737584304108;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.001226241569589209;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.984375;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.015625;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)68.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9394618834080718;
          result[1] += 0;
          result[2] += 0.03811659192825112;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.02242152466367713;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)5798) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
          result[0] += 0.9989885367498315;
          result[1] += 0;
          result[2] += 0.0010114632501685772;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9966329966329966;
          result[1] += 0;
          result[2] += 0.003367003367003367;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)6) ) ) {
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          result[0] += 0.8479929161747344;
          result[1] += 0.0025088547815820543;
          result[2] += 0.0011806375442739079;
          result[3] += 0.14772727272727273;
          result[4] += 0;
          result[5] += 0.00029515938606847696;
          result[6] += 0.00029515938606847696;
        } else {
          result[0] += 0.15397350993377484;
          result[1] += 0;
          result[2] += 0.01945364238410596;
          result[3] += 0.7173013245033113;
          result[4] += 0.10844370860927152;
          result[5] += 0.0008278145695364238;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          result[0] += 0.18231865284974094;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8176813471502591;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5862068965517241;
          result[1] += 0;
          result[2] += 0.026272577996715927;
          result[3] += 0.0005473453749315818;
          result[4] += 0.3798576902025178;
          result[5] += 0.0021893814997263274;
          result[6] += 0.0049261083743842365;
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
          result[0] += 0.13906810035842293;
          result[1] += 0.015053763440860216;
          result[2] += 0.007885304659498209;
          result[3] += 0.8379928315412186;
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)115.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
          result[0] += 0.9916765755053508;
          result[1] += 0;
          result[2] += 0.008323424494649227;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.08358061325420375;
          result[1] += 0.005440158259149357;
          result[2] += 0.003956478733926805;
          result[3] += 0.9060336300692384;
          result[4] += 0.0009891196834817012;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
          result[0] += 0.02564102564102564;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9743589743589743;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0033444816053511705;
          result[1] += 0.03678929765886288;
          result[2] += 0;
          result[3] += 0.006688963210702341;
          result[4] += 0.9531772575250836;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)8.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)16) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.484375;
          result[1] += 0;
          result[2] += 0.033482142857142856;
          result[3] += 0.48214285714285715;
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)33.5) ) ) {
          result[0] += 0.9993055555555556;
          result[1] += 0;
          result[2] += 0.0006944444444444445;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9997345367666578;
          result[1] += 0;
          result[2] += 0.00015927794000530925;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00010618529333687285;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
          result[0] += 0.47363018093160536;
          result[1] += 0.0014115231618118827;
          result[2] += 0.006031053509559862;
          result[3] += 0.5176440395226486;
          result[4] += 0;
          result[5] += 0.0005132811497497755;
          result[6] += 0.0007699217246246632;
        } else {
          result[0] += 0.8302180685358256;
          result[1] += 0;
          result[2] += 0.009345794392523364;
          result[3] += 0.14148494288681204;
          result[4] += 0.016095534787123573;
          result[5] += 0.0010384215991692627;
          result[6] += 0.0018172377985462098;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)2060.5) ) ) {
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
          result[0] += 0.0062006764374295375;
          result[1] += 0.007328072153325817;
          result[2] += 0.011837655016910935;
          result[3] += 0.9729425028184893;
          result[4] += 0.0016910935738444193;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.19790575916230366;
          result[4] += 0.8020942408376963;
          result[5] += 0;
          result[6] += 0;
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
          result[0] += 0.9840989399293286;
          result[1] += 0;
          result[2] += 0.015901060070671377;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)121.5) ) ) {
          result[0] += 0.00980392156862745;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.45098039215686275;
          result[4] += 0.5392156862745098;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.004464285714285714;
          result[1] += 0.08035714285714286;
          result[2] += 0;
          result[3] += 0.10714285714285714;
          result[4] += 0.8080357142857143;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
          result[0] += 0.9866149795201873;
          result[1] += 0.0004754242246928028;
          result[2] += 0.0009874195435927444;
          result[3] += 0.011556465769455822;
          result[4] += 0.00010971328262141603;
          result[5] += 0;
          result[6] += 0.00025599765944997075;
        } else {
          result[0] += 0.6681318681318681;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.33186813186813185;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)78) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9989528795811519;
          result[4] += 0.0010471204188481676;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.07228915662650602;
          result[1] += 0;
          result[2] += 0.12048192771084337;
          result[3] += 0;
          result[4] += 0.8072289156626506;
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
          result[2] += 0.008079719903043361;
          result[3] += 0.802854834365742;
          result[4] += 0.18879612173444654;
          result[5] += 0.00026932399676811203;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
          result[0] += 0.6571428571428571;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.34285714285714286;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9949069539666993;
          result[1] += 0;
          result[2] += 0.004113614103819784;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009794319294809011;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
          result[0] += 0;
          result[1] += 0.034482758620689655;
          result[2] += 0;
          result[3] += 0.06896551724137931;
          result[4] += 0.896551724137931;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.005534034311012729;
          result[2] += 0.007194244604316548;
          result[3] += 0.9867183176535695;
          result[4] += 0.0005534034311012729;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)16) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)40.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0045045045045045045;
          result[3] += 0.9954954954954955;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9099099099099099;
          result[1] += 0;
          result[2] += 0.09009009009009009;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0.06257521058965103;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8977135980746089;
          result[4] += 0.03850782190132371;
          result[5] += 0.0012033694344163659;
          result[6] += 0;
        } else {
          result[0] += 0.14159292035398227;
          result[1] += 0;
          result[2] += 0.01150442477876106;
          result[3] += 0.7584070796460175;
          result[4] += 0.08761061946902654;
          result[5] += 0.0008849557522123892;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
          result[0] += 0.9974082861836101;
          result[1] += 0.0006935572184705238;
          result[2] += 0.0008030662529658697;
          result[3] += 0.0009490782989596642;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001460120459937945;
        } else {
          result[0] += 0.2713178294573643;
          result[1] += 0;
          result[2] += 0.10077519379844961;
          result[3] += 0.627906976744186;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.002;
          result[1] += 0;
          result[2] += 0.012857142857142857;
          result[3] += 0.7877142857142857;
          result[4] += 0.19742857142857143;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
          result[0] += 0.8503401360544217;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.14965986394557823;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9444807315480078;
          result[1] += 0;
          result[2] += 0.007838014369693011;
          result[3] += 0.04212932723709994;
          result[4] += 0.0032658393207054214;
          result[5] += 0.0009797517962116264;
          result[6] += 0.0013063357282821686;
        }
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 100;
  result[1] /= 100;
  result[2] /= 100;
  result[3] /= 100;
  result[4] /= 100;
  result[5] /= 100;
  result[6] /= 100;
  
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
