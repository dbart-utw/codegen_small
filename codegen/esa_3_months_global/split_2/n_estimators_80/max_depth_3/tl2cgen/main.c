
#include "header.h"


static const int32_t num_class[] = {  2, };

int32_t get_num_target(void) {
  return N_TARGET;
}
void get_num_class(int32_t* out) {
  for (int i = 0; i < N_TARGET; ++i) {
    out[i] = num_class[i];
  }
}
int32_t get_num_feature(void) {
  return 87;
}
const char* get_threshold_type(void) {
  return "float32";
}
const char* get_leaf_output_type(void) {
  return "float32";
}


void predict(union Entry* data, int pred_margin, float* result) {
  unsigned int tmp;
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2881519943475723267) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
      if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7406133711338043213) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9799840885256572;
        result[1] += 0.020015911474342746;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
        result[0] += 0.009779168592866542;
        result[1] += 0.9902208314071335;
      } else {
        result[0] += 0.9683165092803647;
        result[1] += 0.0316834907196353;
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8182544112205505371) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1531271114945411682) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7704465687274932861) ) ) {
        result[0] += 0.3898305084745763;
        result[1] += 0.6101694915254238;
      } else {
        result[0] += 0.00023384519448125342;
        result[1] += 0.9997661548055188;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3819010108709335327) ) ) {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9645621501199588;
        result[1] += 0.03543784988004113;
      }
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  }
  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
      if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.7579253911972045898) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9797542359118714;
        result[1] += 0.020245764088128622;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
        result[0] += 0.008738003151410973;
        result[1] += 0.9912619968485891;
      } else {
        result[0] += 0.9669082680135122;
        result[1] += 0.033091731986487814;
      }
    }
  }
  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9250127320302759;
        result[1] += 0.07498726796972412;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3297289460897445679) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9997778842894051;
        result[1] += 0.00022211571059491938;
      }
    }
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
      if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.05921705067157745361) ) ) {
        result[0] += 0.021963776436164303;
        result[1] += 0.9780362235638357;
      } else {
        result[0] += 0.8840973575359792;
        result[1] += 0.11590264246402078;
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.7237868607044219971) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.998231397889237;
        result[1] += 0.001768602110763042;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001820213044993579388) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1042889803647994995) ) ) {
        result[0] += 0.965865586139444;
        result[1] += 0.0341344138605561;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1371966376900672913) ) ) {
      if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001801235310267657042) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.8746384849371559;
        result[1] += 0.12536151506284407;
      }
    } else {
      if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4316533952951431274) ) ) {
        result[0] += 0.26584234930448225;
        result[1] += 0.7341576506955177;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4284365326166152954) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
        result[0] += 3.52013517319065e-05;
        result[1] += 0.999964798648268;
      } else {
        result[0] += 0.9386370588976265;
        result[1] += 0.06136294110237354;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.287395089864730835) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9995018420259969;
        result[1] += 0.0004981579740031048;
      }
    }
  }
  if ( ( !(data[62].missing != -1) || (data[62].fvalue <= (float)0.9927334785461425781) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2024775072932243347) ) ) {
      if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.8247439285565147;
        result[1] += 0.17525607144348532;
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.022734449005367856;
        result[1] += 0.9772655509946322;
      }
    }
  }
  if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8832333683967590332) ) ) {
    if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001764542423188686371) ) ) {
      if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7806620895862579346) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.005384615384615384;
        result[1] += 0.9946153846153846;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2647681385278701782) ) ) {
        result[0] += 0.046875;
        result[1] += 0.953125;
      } else {
        result[0] += 0.5974842767295597;
        result[1] += 0.4025157232704403;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2024775072932243347) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
        result[0] += 0.013151563753007217;
        result[1] += 0.9868484362469928;
      } else {
        result[0] += 0.8209246409841836;
        result[1] += 0.1790753590158164;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.419579729437828064) ) ) {
        result[0] += 0.12703101920236337;
        result[1] += 0.8729689807976366;
      } else {
        result[0] += 0.0028544243577545195;
        result[1] += 0.9971455756422455;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3499511033296585083) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.375662386417388916) ) ) {
        result[0] += 0.28803564408334426;
        result[1] += 0.7119643559166557;
      } else {
        result[0] += 0.12814188395583745;
        result[1] += 0.8718581160441625;
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2436483129858970642) ) ) {
        result[0] += 0.6201309893140297;
        result[1] += 0.37986901068597034;
      } else {
        result[0] += 0.9895483331526872;
        result[1] += 0.01045166684731276;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2956943213939666748) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3217779546976089478) ) ) {
      if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.05921705067157745361) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.8222845486996431;
        result[1] += 0.17771545130035696;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3499511033296585083) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9995503026808878;
        result[1] += 0.00044969731911213606;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2836239337921142578) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2881519943475723267) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.7576376795768737793) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.965767032210404;
        result[1] += 0.03423296778959599;
      }
    }
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2889022082090377808) ) ) {
    if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2924157828092575073) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9114596647555052;
        result[1] += 0.08854033524449476;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.24516129032258063;
        result[1] += 0.7548387096774194;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2240921184420585632) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9969434192949487;
        result[1] += 0.0030565807050512827;
      }
    }
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8191741108894348145) ) ) {
      if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1070554032921791077) ) ) {
        result[0] += 0.9896048553719008;
        result[1] += 0.010395144628099174;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3217779546976089478) ) ) {
        result[0] += 0.27749428974097295;
        result[1] += 0.7225057102590271;
      } else {
        result[0] += 0.9661631252766711;
        result[1] += 0.03383687472332891;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2843774855136871338) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
      if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.7164503633975982666) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9909062916966027;
        result[1] += 0.009093708303397311;
      }
    } else {
      if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7517754733562469482) ) ) {
        result[0] += 0.37450980392156863;
        result[1] += 0.6254901960784314;
      } else {
        result[0] += 0.8556428734470277;
        result[1] += 0.14435712655297225;
      }
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.299465477466583252) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7015351951122283936) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9641599543802124;
        result[1] += 0.03584004561978758;
      }
    }
  }
  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001743039640132337809) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9658882640297145;
        result[1] += 0.03411173597028551;
      }
    }
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7406133711338043213) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9662989470163139;
        result[1] += 0.03370105298368607;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001755689794663339853) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9659828344149047;
        result[1] += 0.034017165585095245;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.09636001661419868469) ) ) {
      if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4268460869789123535) ) ) {
        result[0] += 0.9120419442761962;
        result[1] += 0.08795805572380376;
      } else {
        result[0] += 0.9993435297369512;
        result[1] += 0.0006564702630487861;
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3460290580987930298) ) ) {
        result[0] += 0.7336933045356372;
        result[1] += 0.26630669546436286;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7411437630653381348) ) ) {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3487196117639541626) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.759413987398147583) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9482758620689655;
        result[1] += 0.05172413793103448;
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1380424797534942627) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.3039902001619338989) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9653692343125144;
        result[1] += 0.034630765687485604;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7907342910766601562) ) ) {
      if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001779727521352469921) ) ) {
        result[0] += 0.0006400136536246106;
        result[1] += 0.9993599863463754;
      } else {
        result[0] += 0.04650324441240086;
        result[1] += 0.9534967555875992;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.2921822816133499146) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1371966376900672913) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
        result[0] += 0.17463546965072907;
        result[1] += 0.8253645303492709;
      } else {
        result[0] += 0.9599745967618523;
        result[1] += 0.040025403238147704;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.952289691345572;
        result[1] += 0.04771030865442808;
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4500495195388793945) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7112472653388977051) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9635116303998285;
        result[1] += 0.03648836960017151;
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3721477985382080078) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3653041869401931763) ) ) {
      if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9646581236286709;
        result[1] += 0.03534187637132913;
      }
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  }
  if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7464606761932373047) ) ) {
    if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.745397716760635376) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3179547637701034546) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.03666666666666667;
        result[1] += 0.9633333333333334;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7658493518829345703) ) ) {
        result[0] += 0.2094053744997141;
        result[1] += 0.7905946255002859;
      } else {
        result[0] += 0.004006223259432127;
        result[1] += 0.9959937767405679;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9688719296110423;
        result[1] += 0.031128070388957697;
      }
    }
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2889022082090377808) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001759482314810156822) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.957929107998943;
        result[1] += 0.042070892001056966;
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.7385654151439666748) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9994419642857143;
        result[1] += 0.0005580357142857143;
      }
    }
  }
  if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7666589617729187012) ) ) {
    if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2370446100831031799) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2858879715204238892) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.0012024048096192384;
        result[1] += 0.9987975951903808;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
        result[0] += 0.7855019922921157;
        result[1] += 0.21449800770788424;
      } else {
        result[0] += 0.12033851867636762;
        result[1] += 0.8796614813236324;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
        result[0] += 0.03787878787878788;
        result[1] += 0.9621212121212122;
      } else {
        result[0] += 0.9997092854235712;
        result[1] += 0.00029071457642886213;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7870718538761138916) ) ) {
        result[0] += 0.022310756972111555;
        result[1] += 0.9776892430278884;
      } else {
        result[0] += 0.5789473684210527;
        result[1] += 0.42105263157894735;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1371966376900672913) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1516199931502342224) ) ) {
        result[0] += 0.7186065670236554;
        result[1] += 0.2813934329763446;
      } else {
        result[0] += 0.9916577433573225;
        result[1] += 0.00834225664267749;
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
        result[0] += 0.002765208647561589;
        result[1] += 0.9972347913524384;
      } else {
        result[0] += 0.9507310234328059;
        result[1] += 0.04926897656719407;
      }
    }
  }
  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1516199931502342224) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
        result[0] += 8.670770831526923e-05;
        result[1] += 0.9999132922916847;
      } else {
        result[0] += 0.9213450714388801;
        result[1] += 0.07865492856111993;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2738175839185714722) ) ) {
        result[0] += 0.12192803801765105;
        result[1] += 0.8780719619823489;
      } else {
        result[0] += 0.9939641521125467;
        result[1] += 0.00603584788745324;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8182544112205505371) ) ) {
        result[0] += 0.5998295333475389;
        result[1] += 0.4001704666524611;
      } else {
        result[0] += 0.005261106780982073;
        result[1] += 0.9947388932190179;
      }
    } else {
      if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001755689794663339853) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9634708703425182;
        result[1] += 0.036529129657481764;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1546342372894287109) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1531271114945411682) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.0037688442211055275;
        result[1] += 0.9962311557788944;
      }
    } else {
      if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.02741967001929879189) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.24515543133020401) ) ) {
        result[0] += 0.6267171177099613;
        result[1] += 0.37328288229003864;
      } else {
        result[0] += 0.9875008723026464;
        result[1] += 0.012499127697353628;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.153880678117275238) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
        result[0] += 0.5987872662961091;
        result[1] += 0.4012127337038909;
      } else {
        result[0] += 0.9908132404550932;
        result[1] += 0.00918675954490673;
      }
    }
  }
  if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7138063609600067139) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04389595240354537964) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9992987054792946;
        result[1] += 0.0007012945207054333;
      }
    } else {
      if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4158186167478561401) ) ) {
        result[0] += 0.7430305820075376;
        result[1] += 0.25696941799246237;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4500495195388793945) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001820213044993579388) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
        result[0] += 0.5948420698924731;
        result[1] += 0.4051579301075269;
      } else {
        result[0] += 0.9892221108626937;
        result[1] += 0.010777889137306299;
      }
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7815771698951721191) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7621722519397735596) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.8888888888888888;
        result[1] += 0.1111111111111111;
      }
    } else {
      if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001779727521352469921) ) ) {
        result[0] += 0.6763275081390563;
        result[1] += 0.32367249186094377;
      } else {
        result[0] += 0.3657389349058119;
        result[1] += 0.6342610650941881;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1410631909966468811) ) ) {
        result[0] += 0.3076923076923077;
        result[1] += 0.6923076923076923;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1333329528570175171) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9998829026101008;
        result[1] += 0.00011709738989917915;
      }
    }
  }
  if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001762012368999421597) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1380424797534942627) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.09138808771967887878) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 6.317917614354308e-05;
        result[1] += 0.9999368208238565;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8210126757621765137) ) ) {
        result[0] += 0.731407845643869;
        result[1] += 0.268592154356131;
      } else {
        result[0] += 0.12037138175860186;
        result[1] += 0.8796286182413982;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1539440527558326721) ) ) {
        result[0] += 0.9999067631667891;
        result[1] += 9.323683321095998e-05;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2768351733684539795) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
        result[0] += 0.8913330400351958;
        result[1] += 0.10866695996480423;
      } else {
        result[0] += 0.2599832915622389;
        result[1] += 0.740016708437761;
      }
    } else {
      if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3864005208015441895) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9654985122561753;
        result[1] += 0.03450148774382468;
      }
    }
  }
  if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7128912806510925293) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8118190765380859375) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2273945361375808716) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2924157828092575073) ) ) {
        result[0] += 0.7506004447739066;
        result[1] += 0.2493995552260934;
      } else {
        result[0] += 0.022671213000580382;
        result[1] += 0.9773287869994196;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4256102591753005981) ) ) {
        result[0] += 0.9983238544412077;
        result[1] += 0.0016761455587922505;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.7592073678970336914) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
        result[0] += 0.09960474308300395;
        result[1] += 0.9003952569169961;
      } else {
        result[0] += 0.9648942492571229;
        result[1] += 0.03510575074287712;
      }
    }
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1516199931502342224) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1380424797534942627) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
        result[0] += 0.981424802110818;
        result[1] += 0.01857519788918206;
      } else {
        result[0] += 0.7898257622899814;
        result[1] += 0.21017423771001867;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7676883339881896973) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.4543578797580932;
        result[1] += 0.5456421202419068;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
      if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.05921705067157745361) ) ) {
        result[0] += 0.0005772838793476692;
        result[1] += 0.9994227161206524;
      } else {
        result[0] += 0.5647403072421361;
        result[1] += 0.4352596927578639;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2738175839185714722) ) ) {
        result[0] += 0.20476190476190476;
        result[1] += 0.7952380952380952;
      } else {
        result[0] += 0.999589471708736;
        result[1] += 0.00041052829126395795;
      }
    }
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.299465477466583252) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4225954264402389526) ) ) {
        result[0] += 0.9636103335541357;
        result[1] += 0.03638966644586423;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
      if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.02653165394440293312) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4225954264402389526) ) ) {
        result[0] += 0.9602857773128678;
        result[1] += 0.03971422268713219;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.299465477466583252) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.7579253911972045898) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.24515543133020401) ) ) {
        result[0] += 0.6310528471937731;
        result[1] += 0.368947152806227;
      } else {
        result[0] += 0.985530135872721;
        result[1] += 0.014469864127279061;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2881519943475723267) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8191741108894348145) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3850207775831222534) ) ) {
        result[0] += 0.9924135173397599;
        result[1] += 0.00758648266024013;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1516199931502342224) ) ) {
        result[0] += 0.3379162069648363;
        result[1] += 0.6620837930351636;
      } else {
        result[0] += 0.8254851632403387;
        result[1] += 0.17451483675966128;
      }
    }
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2889022082090377808) ) ) {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
        result[0] += 0.011111111111111112;
        result[1] += 0.9888888888888889;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.813657611608505249) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9473989520958084;
        result[1] += 0.052601047904191615;
      }
    }
  } else {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1501128673553466797) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.813657611608505249) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.8893617021276595;
        result[1] += 0.11063829787234042;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2677823752164840698) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9996997863864673;
        result[1] += 0.00030021361353270594;
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.351395338773727417) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1531271114945411682) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3460290580987930298) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
        result[0] += 0.019329896907216496;
        result[1] += 0.9806701030927835;
      } else {
        result[0] += 0.9637846375962205;
        result[1] += 0.03621536240377949;
      }
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1384864374995231628) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.7558309037900874;
        result[1] += 0.24416909620991253;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2836239337921142578) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001762012368999421597) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3054766058921813965) ) ) {
        result[0] += 0.21794871794871795;
        result[1] += 0.782051282051282;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9653352241392894;
        result[1] += 0.03466477586071063;
      }
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.3009759485721588135) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.7118854820728302002) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9629568864667447;
        result[1] += 0.037043113533255345;
      }
    }
  }
  if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001762012368999421597) ) ) {
    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.09138808771967887878) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8154961466789245605) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.003937007874015748;
        result[1] += 0.9960629921259843;
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.6796075975787935;
        result[1] += 0.3203924024212064;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9638885114113448;
        result[1] += 0.03611148858865517;
      }
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7676883339881896973) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7432717978954315186) ) ) {
        result[0] += 0.8210590768970905;
        result[1] += 0.17894092310290952;
      } else {
        result[0] += 0.36304955113775056;
        result[1] += 0.6369504488622495;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4256102591753005981) ) ) {
      if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4284365326166152954) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9985105367885777;
        result[1] += 0.001489463211422321;
      }
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2889022082090377808) ) ) {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7768823504447937012) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2924157828092575073) ) ) {
        result[0] += 0.9196486004668174;
        result[1] += 0.08035139953318263;
      } else {
        result[0] += 0.0046224391687005395;
        result[1] += 0.9953775608312995;
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.424856334924697876) ) ) {
        result[0] += 0.9964489119829366;
        result[1] += 0.003551088017063375;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4483384788036346436) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7464606761932373047) ) ) {
      if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001774667529389262199) ) ) {
        result[0] += 0.0027387880862718246;
        result[1] += 0.9972612119137282;
      } else {
        result[0] += 0.48484848484848486;
        result[1] += 0.5151515151515151;
      }
    } else {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2272647097706794739) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9661600332030971;
        result[1] += 0.03383996679690295;
      }
    }
  }
  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8154961466789245605) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3234125673770904541) ) ) {
        result[0] += 0.9960067644972996;
        result[1] += 0.0039932355027003435;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
        result[0] += 0.00828071628195839;
        result[1] += 0.9917192837180416;
      } else {
        result[0] += 0.9627774686205404;
        result[1] += 0.03722253137945959;
      }
    }
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
      if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1070554032921791077) ) ) {
        result[0] += 0.9851884496733028;
        result[1] += 0.014811550326697197;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
        result[0] += 0.01192504258943782;
        result[1] += 0.9880749574105622;
      } else {
        result[0] += 0.960887832384322;
        result[1] += 0.03911216761567804;
      }
    }
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2889022082090377808) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
      if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7687848806381225586) ) ) {
        result[0] += 0.9676371650620578;
        result[1] += 0.03236283493794223;
      } else {
        result[0] += 0.8946963873943121;
        result[1] += 0.10530361260568794;
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1380424797534942627) ) ) {
        result[0] += 0.8676284484940522;
        result[1] += 0.13237155150594787;
      } else {
        result[0] += 0.22659443556485948;
        result[1] += 0.7734055644351405;
      }
    }
  } else {
    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
      if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7411437928676605225) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9980479832943686;
        result[1] += 0.0019520167056313411;
      }
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7464606761932373047) ) ) {
      if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.8003587722778320312) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.06756756756756757;
        result[1] += 0.9324324324324325;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9654767971962551;
        result[1] += 0.034523202803744844;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.3009759485721588135) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
        result[0] += 0.6185140493018445;
        result[1] += 0.3814859506981555;
      } else {
        result[0] += 0.9884259616720972;
        result[1] += 0.011574038327902774;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2929984480142593384) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1531271114945411682) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.4619595997734567;
        result[1] += 0.5380404002265433;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.3009759485721588135) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3179538697004318237) ) ) {
      if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7138063609600067139) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9569325205436827;
        result[1] += 0.04306747945631727;
      }
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4284365326166152954) ) ) {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2924157828092575073) ) ) {
        result[0] += 0.8806678082191781;
        result[1] += 0.11933219178082191;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.351395338773727417) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9994928889196228;
        result[1] += 0.0005071110803771062;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7676883339881896973) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
        result[0] += 0.9587110633727175;
        result[1] += 0.041288936627282495;
      } else {
        result[0] += 0.1754526606772633;
        result[1] += 0.8245473393227367;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7584942877292633057) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9995860546407874;
        result[1] += 0.0004139453592125839;
      }
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7768823504447937012) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1440776735544204712) ) ) {
        result[0] += 0.8089129407162301;
        result[1] += 0.1910870592837699;
      } else {
        result[0] += 0.11723495765530084;
        result[1] += 0.8827650423446991;
      }
    }
  } else {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.335110783576965332) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
        result[0] += 0.025210084033613446;
        result[1] += 0.9747899159663865;
      } else {
        result[0] += 0.9997432755703367;
        result[1] += 0.00025672442966334093;
      }
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04389595240354537964) ) ) {
      if ( ( !(data[55].missing != -1) || (data[55].fvalue <= (float)3.812834620475769043e-06) ) ) {
        result[0] += 0.9866431738092531;
        result[1] += 0.013356826190746846;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8210126757621765137) ) ) {
        result[0] += 0.8431335389280361;
        result[1] += 0.1568664610719639;
      } else {
        result[0] += 0.10209464701318852;
        result[1] += 0.8979053529868115;
      }
    }
  }
  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2984580099582672119) ) ) {
        result[0] += 0.9939588543435528;
        result[1] += 0.006041145656447148;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2738175839185714722) ) ) {
        result[0] += 0.2561263251980038;
        result[1] += 0.7438736748019962;
      } else {
        result[0] += 0.9845787362086259;
        result[1] += 0.015421263791374122;
      }
    }
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2889022082090377808) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7658493518829345703) ) ) {
        result[0] += 0.9998569248378482;
        result[1] += 0.00014307516215185043;
      } else {
        result[0] += 0.8633324418293662;
        result[1] += 0.13666755817063386;
      }
    } else {
      if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4127316027879714966) ) ) {
        result[0] += 0.4210468222256562;
        result[1] += 0.5789531777743439;
      } else {
        result[0] += 0.01369676783468715;
        result[1] += 0.9863032321653129;
      }
    }
  } else {
    if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.7562294304370880127) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9979256874702456;
        result[1] += 0.002074312529754483;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1531271114945411682) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.3002223819494247437) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.6964452564716339111) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9631202838438858;
        result[1] += 0.036879716156114135;
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4500495195388793945) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7411437630653381348) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8154961466789245605) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.17261904761904762;
        result[1] += 0.8273809523809523;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9689113604950119;
        result[1] += 0.031088639504988077;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001774667529389262199) ) ) {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2437759265303611755) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2436483129858970642) ) ) {
        result[0] += 0.6239570917759237;
        result[1] += 0.37604290822407627;
      } else {
        result[0] += 0.9899376299376299;
        result[1] += 0.010062370062370062;
      }
    }
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4316533952951431274) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1359096989035606384) ) ) {
        result[0] += 0.753318448739907;
        result[1] += 0.24668155126009297;
      } else {
        result[0] += 0.3204503444799193;
        result[1] += 0.6795496555200806;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4158186167478561401) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9148799313893653;
        result[1] += 0.08512006861063465;
      }
    } else {
      if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04389595240354537964) ) ) {
        result[0] += 0.024612579762989972;
        result[1] += 0.97538742023701;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7584942877292633057) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04389595240354537964) ) ) {
        result[0] += 0.9989256752073562;
        result[1] += 0.001074324792643763;
      } else {
        result[0] += 0.6935014548981572;
        result[1] += 0.3064985451018429;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8182544112205505371) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.7543510691198408;
        result[1] += 0.24564893088015913;
      }
    } else {
      if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001764542423188686371) ) ) {
        result[0] += 0.3382352941176471;
        result[1] += 0.6617647058823529;
      } else {
        result[0] += 0.004314129729316993;
        result[1] += 0.995685870270683;
      }
    }
  } else {
    if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.7579253911972045898) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9689683651118532;
        result[1] += 0.03103163488814679;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7112472653388977051) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9473051233185931;
        result[1] += 0.052694876681406926;
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3499511033296585083) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7649300694465637207) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9989590006406149;
        result[1] += 0.0010409993593850095;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7621722519397735596) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.05921705067157745361) ) ) {
        result[0] += 0.0011589651562733663;
        result[1] += 0.9988410348437267;
      } else {
        result[0] += 0.9224730834323575;
        result[1] += 0.0775269165676425;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7584942877292633057) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2738175839185714722) ) ) {
        result[0] += 0.6343692870201096;
        result[1] += 0.3656307129798903;
      } else {
        result[0] += 0.9993055234038613;
        result[1] += 0.0006944765961387101;
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.02653165394440293312) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  } else {
    if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001820213044993579388) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
        result[0] += 0.5920121334681496;
        result[1] += 0.4079878665318504;
      } else {
        result[0] += 0.9884862096017475;
        result[1] += 0.01151379039825255;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.34345794392523366;
        result[1] += 0.6565420560747663;
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3132751137018203735) ) ) {
      if ( ( !(data[62].missing != -1) || (data[62].fvalue <= (float)0.9933518767356872559) ) ) {
        result[0] += 0.8291127447149975;
        result[1] += 0.17088725528500243;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4316769391298294067) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7352985739707946777) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9646934047838344;
        result[1] += 0.03530659521616568;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3681567758321762085) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7104027271270751953) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9654899161163663;
        result[1] += 0.03451008388363377;
      }
    }
  }
  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8154961466789245605) ) ) {
      if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.7579253911972045898) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9962252246372082;
        result[1] += 0.0037747753627918107;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
        result[0] += 0.007004403758798849;
        result[1] += 0.9929955962412012;
      } else {
        result[0] += 0.9623836661063507;
        result[1] += 0.037616333893649295;
      }
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7768823504447937012) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3460290580987930298) ) ) {
        result[0] += 0.6291806120729094;
        result[1] += 0.3708193879270906;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.4014873206615447998) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8243512511253356934) ) ) {
        result[0] += 0.9986371737079358;
        result[1] += 0.0013628262920641577;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7655960023403167725) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2436483129858970642) ) ) {
        result[0] += 0.6209821049953355;
        result[1] += 0.3790178950046646;
      } else {
        result[0] += 0.9895523065059949;
        result[1] += 0.01044769349400505;
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 80;
  result[1] /= 80;
  
  // Apply base_scores
  result[0] += 0;
  result[1] += 0;
  
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
    

    FILE* file = fopen("./codegen/esa_3_months_global/split_2/test_data.csv", "r");
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
