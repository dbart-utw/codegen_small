
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
  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2399695739150047302) ) ) {
        result[0] += 0.9658924461184348;
        result[1] += 0.03410755388156518;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7666589617729187012) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4500495195388793945) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.720558464527130127) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9624031228630043;
        result[1] += 0.037596877136995666;
      }
    }
  }
  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04389595240354537964) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9994466795006283;
        result[1] += 0.0005533204993717507;
      }
    } else {
      if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.05921705067157745361) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.8739023236962983;
        result[1] += 0.1260976763037017;
      }
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001759482314810156822) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9512044471896233;
        result[1] += 0.04879555281037678;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1539440527558326721) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8247438371181488037) ) ) {
        result[0] += 0.9998483328277761;
        result[1] += 0.00015166717222390741;
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
    if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.7562301158905029297) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9652998827274251;
        result[1] += 0.03470011727257497;
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
      result[0] += 0;
      result[1] += 1;
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
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2039853483438491821) ) ) {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.963671087230722;
        result[1] += 0.03632891276927791;
      }
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  }
  if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8832333683967590332) ) ) {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7768823504447937012) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2370446100831031799) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7464606761932373047) ) ) {
      if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3919859081506729126) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
        result[0] += 0.08549023627697197;
        result[1] += 0.9145097637230281;
      } else {
        result[0] += 0.9568182302506801;
        result[1] += 0.043181769749319844;
      }
    }
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2889022082090377808) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7676883339881896973) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9426530001496334;
        result[1] += 0.0573469998503666;
      }
    }
  } else {
    if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3468081206083297729) ) ) {
        result[0] += 0.998231381006173;
        result[1] += 0.0017686189938269491;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
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
      if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.7436822652816772461) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9644537562747594;
        result[1] += 0.03554624372524062;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8154961466789245605) ) ) {
      if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.05582973221316933632) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7422067224979400635) ) ) {
        result[0] += 0.3492063492063492;
        result[1] += 0.6507936507936508;
      } else {
        result[0] += 0.004444955358853508;
        result[1] += 0.9955550446411465;
      }
    }
  } else {
    if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001762012368999421597) ) ) {
      if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001774667529389262199) ) ) {
        result[0] += 0.002767208578346593;
        result[1] += 0.9972327914216534;
      } else {
        result[0] += 0.5046728971962616;
        result[1] += 0.4953271028037383;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9647363983250682;
        result[1] += 0.03526360167493176;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001762012368999421597) ) ) {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2437759265303611755) ) ) {
        result[0] += 0.0015964240102171138;
        result[1] += 0.9984035759897829;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
        result[0] += 0.7138949231635691;
        result[1] += 0.28610507683643094;
      } else {
        result[0] += 0.9827378868372582;
        result[1] += 0.017262113162741843;
      }
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1371966376900672913) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9595024372845083;
        result[1] += 0.04049756271549162;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
        result[0] += 0.966796570537802;
        result[1] += 0.033203429462197974;
      } else {
        result[0] += 0.2119973632168754;
        result[1] += 0.7880026367831245;
      }
    }
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
      if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.7236895561218261719) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9746492540330732;
        result[1] += 0.02535074596692678;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
        result[0] += 0.015133317319240933;
        result[1] += 0.984866682680759;
      } else {
        result[0] += 0.9606914242137129;
        result[1] += 0.03930857578628706;
      }
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9624397285095666;
        result[1] += 0.03756027149043334;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3600607514381408691) ) ) {
        result[0] += 0.012267290223941001;
        result[1] += 0.987732709776059;
      } else {
        result[0] += 0.9358466218084616;
        result[1] += 0.0641533781915384;
      }
    }
  } else {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8247438371181488037) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.287395089864730835) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9998840243548854;
        result[1] += 0.00011597564511452595;
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
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.3009759485721588135) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.7436822652816772461) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9639807726544418;
        result[1] += 0.036019227345558125;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04389595240354537964) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2024775072932243347) ) ) {
        result[0] += 0.9859042492530165;
        result[1] += 0.014095750746983556;
      } else {
        result[0] += 0.42857142857142855;
        result[1] += 0.5714285714285714;
      }
    } else {
      if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.05921705067157745361) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.8086915814933292;
        result[1] += 0.19130841850667082;
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
        result[0] += 0.6069237879169818;
        result[1] += 0.39307621208301824;
      } else {
        result[0] += 0.9912410091087422;
        result[1] += 0.008758990891257736;
      }
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7138063609600067139) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
        result[0] += 2.4482800832415227e-05;
        result[1] += 0.9999755171991676;
      } else {
        result[0] += 0.9298865472364753;
        result[1] += 0.07011345276352467;
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.4014873206615447998) ) ) {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3217779546976089478) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9985702329474124;
        result[1] += 0.0014297670525875296;
      }
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2836239337921142578) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3803411275148391724) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9630533087973068;
        result[1] += 0.036946691202693255;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3713338524103164673) ) ) {
        result[0] += 0.25;
        result[1] += 0.75;
      } else {
        result[0] += 0;
        result[1] += 1;
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
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
        result[0] += 0.5926607038368302;
        result[1] += 0.4073392961631698;
      } else {
        result[0] += 0.9911251736379071;
        result[1] += 0.008874826362092915;
      }
    }
  }
  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3834608942270278931) ) ) {
        result[0] += 0.9943118813914329;
        result[1] += 0.005688118608567087;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
        result[0] += 0.03540837661023808;
        result[1] += 0.9645916233897619;
      } else {
        result[0] += 0.9541920176654373;
        result[1] += 0.04580798233456271;
      }
    }
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7666589617729187012) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4500495195388793945) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001774667529389262199) ) ) {
      if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7655960023403167725) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.15;
        result[1] += 0.85;
      }
    } else {
      if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7815771698951721191) ) ) {
        result[0] += 0.6255506607929515;
        result[1] += 0.3744493392070485;
      } else {
        result[0] += 0.9569587189824541;
        result[1] += 0.043041281017545854;
      }
    }
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2768351733684539795) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3444691747426986694) ) ) {
        result[0] += 0.37364472534813215;
        result[1] += 0.6263552746518678;
      } else {
        result[0] += 0.25216530561742145;
        result[1] += 0.7478346943825785;
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
        result[0] += 0.3508005822416303;
        result[1] += 0.6491994177583698;
      } else {
        result[0] += 0.9899219550911075;
        result[1] += 0.01007804490889249;
      }
    }
  }
  if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7138063609600067139) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
      if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4483384788036346436) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7655960023403167725) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9563803098379942;
        result[1] += 0.04361969016200587;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7411437630653381348) ) ) {
      if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001820213044993579388) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.3136094674556213;
        result[1] += 0.6863905325443787;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
        result[0] += 0.988956242677398;
        result[1] += 0.011043757322602007;
      } else {
        result[0] += 0.5780191283495525;
        result[1] += 0.4219808716504475;
      }
    }
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2768351733684539795) ) ) {
      if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4158186167478561401) ) ) {
        result[0] += 0.8155494873512288;
        result[1] += 0.1844505126487712;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.7191888689994812012) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.966816497121678;
        result[1] += 0.0331835028783219;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2399695739150047302) ) ) {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
      if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4483384788036346436) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1493559554219245911) ) ) {
        result[0] += 0.8926020184291356;
        result[1] += 0.10739798157086441;
      } else {
        result[0] += 0.9978230777421531;
        result[1] += 0.0021769222578469764;
      }
    }
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7406133711338043213) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1516199931502342224) ) ) {
        result[0] += 0.6815403341224937;
        result[1] += 0.31845966587750624;
      } else {
        result[0] += 0.9252658109882662;
        result[1] += 0.0747341890117338;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001762012368999421597) ) ) {
      if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001759482314810156822) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.3333333333333333;
        result[1] += 0.6666666666666666;
      }
    } else {
      if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1042889803647994995) ) ) {
        result[0] += 0.9652245306911955;
        result[1] += 0.0347754693088045;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1516199931502342224) ) ) {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.0017905102954341987;
        result[1] += 0.9982094897045658;
      }
    } else {
      if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001762012368999421597) ) ) {
        result[0] += 0.025510204081632654;
        result[1] += 0.9744897959183674;
      } else {
        result[0] += 0.9475060374412144;
        result[1] += 0.05249396255878561;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.287395089864730835) ) ) {
      if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.05921705067157745361) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.5843071786310517;
        result[1] += 0.41569282136894825;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9986182669789228;
        result[1] += 0.0013817330210772834;
      }
    }
  }
  if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7411437630653381348) ) ) {
    if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2370446100831031799) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8191741108894348145) ) ) {
        result[0] += 0.9907719113329103;
        result[1] += 0.00922808866708971;
      } else {
        result[0] += 0.6027237505345133;
        result[1] += 0.3972762494654866;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3803411275148391724) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
        result[0] += 0.7038597028641446;
        result[1] += 0.29614029713585543;
      } else {
        result[0] += 0.9818451814339565;
        result[1] += 0.018154818566043483;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.406010851263999939) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3499511033296585083) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.4889874579382074;
        result[1] += 0.5110125420617926;
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2039853483438491821) ) ) {
        result[0] += 0.965235582655633;
        result[1] += 0.03476441734436694;
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
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.3002223819494247437) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7119740843772888184) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9580297268781113;
        result[1] += 0.041970273121888696;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3179538697004318237) ) ) {
        result[0] += 0.9567303205092308;
        result[1] += 0.04326967949076926;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1501128673553466797) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7686076164245605469) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.8035294117647059;
        result[1] += 0.19647058823529412;
      }
    } else {
      if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.8161026239395141602) ) ) {
        result[0] += 0.9972050586129237;
        result[1] += 0.0027949413870762834;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1531271114945411682) ) ) {
      result[0] += 0;
      result[1] += 1;
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
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.419579729437828064) ) ) {
        result[0] += 0.02496798975672215;
        result[1] += 0.9750320102432779;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
        result[0] += 0.6701332466688332;
        result[1] += 0.3298667533311667;
      } else {
        result[0] += 0.9790709700970401;
        result[1] += 0.020929029902959875;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001801235310267657042) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9655369995108658;
        result[1] += 0.034463000489134234;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.3017295151948928833) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329454064369202) ) ) {
        result[0] += 0.7953402171035213;
        result[1] += 0.20465978289647868;
      } else {
        result[0] += 0.008115244233905413;
        result[1] += 0.9918847557660946;
      }
    } else {
      if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.7579253911972045898) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9649279355810484;
        result[1] += 0.03507206441895162;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.3017295151948928833) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2039853483438491821) ) ) {
        result[0] += 0.9890668871879688;
        result[1] += 0.010933112812031232;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.770910799503326416) ) ) {
        result[0] += 0.2758547655068079;
        result[1] += 0.7241452344931921;
      } else {
        result[0] += 0.8017870898166692;
        result[1] += 0.19821291018333076;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2768351733684539795) ) ) {
      if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001779727521352469921) ) ) {
        result[0] += 0.6025685525859077;
        result[1] += 0.3974314474140923;
      } else {
        result[0] += 0.23989693996399958;
        result[1] += 0.7601030600360005;
      }
    } else {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2240921184420585632) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9658834888960411;
        result[1] += 0.0341165111039588;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2039853483438491821) ) ) {
        result[0] += 0.9622713448425682;
        result[1] += 0.03772865515743179;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7464606761932373047) ) ) {
        result[0] += 0.1816313736416829;
        result[1] += 0.8183686263583171;
      } else {
        result[0] += 0.8191660521552591;
        result[1] += 0.1808339478447409;
      }
    }
  }
  if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001774667529389262199) ) ) {
    if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7464606761932373047) ) ) {
      if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7666589617729187012) ) ) {
        result[0] += 6.825938566552901e-05;
        result[1] += 0.9999317406143344;
      } else {
        result[0] += 0.011111111111111112;
        result[1] += 0.9888888888888889;
      }
    } else {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2405151352286338806) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1380424797534942627) ) ) {
        result[0] += 0.9446471325960552;
        result[1] += 0.055352867403944815;
      } else {
        result[0] += 0.31253327837034744;
        result[1] += 0.6874667216296525;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9953608188667632;
        result[1] += 0.004639181133236826;
      }
    }
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1423501297831535339) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9584468508894435;
        result[1] += 0.04155314911055656;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3819010108709335327) ) ) {
        result[0] += 0.43353301474052636;
        result[1] += 0.5664669852594737;
      } else {
        result[0] += 0.05571847507331378;
        result[1] += 0.9442815249266863;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.758422166109085083) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9652834452884675;
        result[1] += 0.03471655471153243;
      }
    }
  }
  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.383395761251449585) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9659024966615629;
        result[1] += 0.03409750333843712;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2738175839185714722) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3772213906049728394) ) ) {
        result[0] += 0.15064102564102563;
        result[1] += 0.8493589743589743;
      } else {
        result[0] += 0.00024832381425378696;
        result[1] += 0.9997516761857462;
      }
    } else {
      if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.7116364240646362305) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7411437630653381348) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3948851674795150757) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3761523216962814331) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
        result[0] += 0.975409983134173;
        result[1] += 0.024590016865826965;
      } else {
        result[0] += 0.5081184663028042;
        result[1] += 0.4918815336971957;
      }
    }
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2889022082090377808) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8099800944328308105) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9437524583715746;
        result[1] += 0.05624754162842533;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9962023307486509;
        result[1] += 0.003797669251349023;
      }
    }
  }
  if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7666589617729187012) ) ) {
    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3919859081506729126) ) ) {
      if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001822743099182844162) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.011725293132328308;
        result[1] += 0.9882747068676717;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3217779546976089478) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8210126757621765137) ) ) {
        result[0] += 0.7369420844800766;
        result[1] += 0.2630579155199234;
      } else {
        result[0] += 0.10114179910507638;
        result[1] += 0.8988582008949236;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8191741108894348145) ) ) {
        result[0] += 0.9946018192907102;
        result[1] += 0.005398180709289802;
      } else {
        result[0] += 0.9243341986347466;
        result[1] += 0.07566580136525335;
      }
    }
  }
  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
      if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001801235310267657042) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9968269012836627;
        result[1] += 0.0031730987163373376;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
        result[0] += 0.013365401133825804;
        result[1] += 0.9866345988661742;
      } else {
        result[0] += 0.9597233903373517;
        result[1] += 0.04027660966264835;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1531271114945411682) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2768351733684539795) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3725434988737106323) ) ) {
        result[0] += 0.5859060402684564;
        result[1] += 0.4140939597315436;
      } else {
        result[0] += 0.3457539425899209;
        result[1] += 0.6542460574100791;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1436370685696601868) ) ) {
        result[0] += 0.9809303529259534;
        result[1] += 0.019069647074046518;
      } else {
        result[0] += 0.28527435610302354;
        result[1] += 0.7147256438969765;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8176798820495605469) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2843774855136871338) ) ) {
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
        result[0] += 0.16393442622950818;
        result[1] += 0.8360655737704918;
      }
    }
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
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
        result[0] += 0.5992782813024505;
        result[1] += 0.4007217186975495;
      } else {
        result[0] += 0.9911877899008046;
        result[1] += 0.008812210099195441;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8868957757949829102) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1546342372894287109) ) ) {
        result[0] += 0.00015895092390224517;
        result[1] += 0.9998410490760977;
      } else {
        result[0] += 0.5072711719418306;
        result[1] += 0.49272882805816937;
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
    if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2370446100831031799) ) ) {
      if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001762012368999421597) ) ) {
        result[0] += 0.0006846970215679561;
        result[1] += 0.9993153029784321;
      } else {
        result[0] += 0.7413007456503728;
        result[1] += 0.25869925434962715;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
        result[0] += 0.6714130434782609;
        result[1] += 0.32858695652173914;
      } else {
        result[0] += 0.9859229100512465;
        result[1] += 0.014077089948753419;
      }
    }
  }
  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
        result[0] += 0.7024198822759974;
        result[1] += 0.2975801177240026;
      } else {
        result[0] += 0.0022309408416032;
        result[1] += 0.9977690591583968;
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3460290580987930298) ) ) {
        result[0] += 0.9661696098915252;
        result[1] += 0.03383039010847477;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    result[0] += 0;
    result[1] += 1;
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
      if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4500495195388793945) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001774667529389262199) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.0010131712259371835;
        result[1] += 0.9989868287740629;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2929984480142593384) ) ) {
        result[0] += 0.9632613367590737;
        result[1] += 0.03673866324092639;
      } else {
        result[0] += 0.9449243314214636;
        result[1] += 0.05507566857853638;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7183859944343566895) ) ) {
      if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7165536880493164062) ) ) {
        result[0] += 0.0003064396095083833;
        result[1] += 0.9996935603904916;
      } else {
        result[0] += 0.014460511679644048;
        result[1] += 0.985539488320356;
      }
    } else {
      if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001825273095164448023) ) ) {
        result[0] += 0.0034129692832764505;
        result[1] += 0.9965870307167235;
      } else {
        result[0] += 0.24561403508771928;
        result[1] += 0.7543859649122807;
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3499511033296585083) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.4899318697956094;
        result[1] += 0.5100681302043906;
      }
    } else {
      if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001801235310267657042) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9661018161529603;
        result[1] += 0.03389818384703972;
      }
    }
  }
  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3241925090551376343) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8154961466789245605) ) ) {
        result[0] += 0.9966649285186634;
        result[1] += 0.0033350714813366357;
      } else {
        result[0] += 0.6031167151632719;
        result[1] += 0.3968832848367281;
      }
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8832333683967590332) ) ) {
    if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7138063609600067139) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8154961466789245605) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9953703703703703;
        result[1] += 0.004629629629629629;
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7411437630653381348) ) ) {
        result[0] += 0.057272727272727274;
        result[1] += 0.9427272727272727;
      } else {
        result[0] += 0.960592639973302;
        result[1] += 0.039407360026698;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.7579253911972045898) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9656999091480886;
        result[1] += 0.03430009085191139;
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
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
        result[0] += 0.6056314280896982;
        result[1] += 0.3943685719103018;
      } else {
        result[0] += 0.988289221445798;
        result[1] += 0.011710778554201967;
      }
    }
  }
  if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7666589617729187012) ) ) {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7787209153175354004) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1380424797534942627) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.0010033235091239732;
        result[1] += 0.998996676490876;
      }
    } else {
      if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7411459088325500488) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8173351287841796875) ) ) {
        result[0] += 0.7354657950035022;
        result[1] += 0.26453420499649777;
      } else {
        result[0] += 0.1344546779986487;
        result[1] += 0.8655453220013513;
      }
    } else {
      if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001822743099182844162) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9934607073808711;
        result[1] += 0.006539292619128853;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001762012368999421597) ) ) {
        result[0] += 0.021334367726920093;
        result[1] += 0.9786656322730799;
      } else {
        result[0] += 0.9514317590182224;
        result[1] += 0.04856824098177761;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9990854948044674;
        result[1] += 0.0009145051955326421;
      }
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1546342372894287109) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.40061778135911896;
        result[1] += 0.599382218640881;
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1486023962497711182) ) ) {
        result[0] += 0.8957825942214357;
        result[1] += 0.1042174057785643;
      } else {
        result[0] += 0.9978008985575786;
        result[1] += 0.002199101442421376;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2024775072932243347) ) ) {
    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2617471963167190552) ) ) {
        result[0] += 0.4294636296840558;
        result[1] += 0.5705363703159442;
      } else {
        result[0] += 0.9171602019108894;
        result[1] += 0.0828397980891106;
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3502274602651596069) ) ) {
      if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7870718538761138916) ) ) {
        result[0] += 0.9052631578947369;
        result[1] += 0.09473684210526316;
      } else {
        result[0] += 0.07745779543197617;
        result[1] += 0.9225422045680238;
      }
    } else {
      if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001774667529389262199) ) ) {
        result[0] += 0.0004776689754000478;
        result[1] += 0.9995223310246;
      } else {
        result[0] += 0.20512820512820512;
        result[1] += 0.7948717948717948;
      }
    }
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2889022082090377808) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001772137475199997425) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9573303124704994;
        result[1] += 0.042669687529500615;
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3234125673770904541) ) ) {
        result[0] += 0.9995331731699819;
        result[1] += 0.0004668268300181038;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2039853483438491821) ) ) {
        result[0] += 0.946334548400162;
        result[1] += 0.05366545159983799;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.351395338773727417) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9989018531228552;
        result[1] += 0.001098146877144818;
      }
    }
  }
  if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7411437630653381348) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3571722805500030518) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3460290580987930298) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9557648562780817;
        result[1] += 0.0442351437219183;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2738175839185714722) ) ) {
        result[0] += 0.5577066269545793;
        result[1] += 0.4422933730454207;
      } else {
        result[0] += 0.9995143441912097;
        result[1] += 0.00048565580879037016;
      }
    }
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3226326256990432739) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1516199931502342224) ) ) {
        result[0] += 0.691135847714903;
        result[1] += 0.30886415228509695;
      } else {
        result[0] += 0.9287854015559677;
        result[1] += 0.07121459844403234;
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3607806414365768433) ) ) {
        result[0] += 0.5919245747079319;
        result[1] += 0.40807542529206803;
      } else {
        result[0] += 0.1111111111111111;
        result[1] += 0.8888888888888888;
      }
    }
  }
  if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7464606761932373047) ) ) {
    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.09138808771967887878) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2768351733684539795) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
        result[0] += 0.904838806148693;
        result[1] += 0.09516119385130689;
      } else {
        result[0] += 0.029254719109573588;
        result[1] += 0.9707452808904264;
      }
    } else {
      if ( ( !(data[62].missing != -1) || (data[62].fvalue <= (float)0.9933518767356872559) ) ) {
        result[0] += 0.8965449030726625;
        result[1] += 0.10345509692733747;
      } else {
        result[0] += 0;
        result[1] += 1;
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
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
      if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.7401399314403533936) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9888082564240034;
        result[1] += 0.01119174357599663;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
        result[0] += 0.034808839479392624;
        result[1] += 0.9651911605206074;
      } else {
        result[0] += 0.9500688414959678;
        result[1] += 0.049931158504032146;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7156386375427246094) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.6964821964821964;
        result[1] += 0.3035178035178035;
      }
    }
  } else {
    if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.7317222356796264648) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9636151828531815;
        result[1] += 0.036384817146818564;
      }
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
        result[0] += 0.9202908179730063;
        result[1] += 0.07970918202699367;
      } else {
        result[0] += 0.12496937775600196;
        result[1] += 0.8750306222439981;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3253962397575378418) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9998369191701515;
        result[1] += 0.0001630808298484513;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.3017295151948928833) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1371966376900672913) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1516199931502342224) ) ) {
        result[0] += 0.7211968022572302;
        result[1] += 0.2788031977427698;
      } else {
        result[0] += 0.9908977866202437;
        result[1] += 0.00910221337975628;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
        result[0] += 0.9834170854271357;
        result[1] += 0.016582914572864323;
      } else {
        result[0] += 0.2314033983637508;
        result[1] += 0.7685966016362492;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7621722519397735596) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9537225595516114;
        result[1] += 0.0462774404483886;
      }
    }
  } else {
    if ( ( !(data[62].missing != -1) || (data[62].fvalue <= (float)0.9927334785461425781) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7138063609600067139) ) ) {
        result[0] += 0.2945205479452055;
        result[1] += 0.7054794520547946;
      } else {
        result[0] += 0.9930496907169433;
        result[1] += 0.006950309283056766;
      }
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8191741108894348145) ) ) {
      if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.7549577951431274414) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9866627976958129;
        result[1] += 0.013337202304187086;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
        result[0] += 0.020431910743009686;
        result[1] += 0.9795680892569903;
      } else {
        result[0] += 0.9599018853805059;
        result[1] += 0.040098114619494044;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
      if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.00177719752537086606) ) ) {
        result[0] += 0.01538555096083678;
        result[1] += 0.9846144490391632;
      } else {
        result[0] += 0.3019954333366425;
        result[1] += 0.6980045666633575;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2843774855136871338) ) ) {
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
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.7256083786487579346) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9627599594627385;
        result[1] += 0.03724004053726145;
      }
    }
  }
  if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7464606761932373047) ) ) {
    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3948851674795150757) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3725434988737106323) ) ) {
        result[0] += 0.21988761299780113;
        result[1] += 0.7801123870021989;
      } else {
        result[0] += 0.059908225696804894;
        result[1] += 0.9400917743031951;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.964333399619329;
        result[1] += 0.035666600380671;
      }
    }
  }
  if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001822743099182844162) ) ) {
    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.09636001661419868469) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.00177719752537086606) ) ) {
        result[0] += 0.00012444001991040318;
        result[1] += 0.9998755599800896;
      } else {
        result[0] += 0.008733624454148471;
        result[1] += 0.9912663755458515;
      }
    }
  } else {
    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04389595240354537964) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)3.175809979438781738e-06) ) ) {
        result[0] += 0.9855204651693079;
        result[1] += 0.014479534830692054;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
        result[0] += 2.6090586516384887e-05;
        result[1] += 0.9999739094134836;
      } else {
        result[0] += 0.9476390404498123;
        result[1] += 0.05236095955018773;
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
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
        result[0] += 0.6082474226804123;
        result[1] += 0.3917525773195876;
      } else {
        result[0] += 0.9891655837287316;
        result[1] += 0.010834416271268398;
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
    if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7464606761932373047) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.215015023946762085) ) ) {
        result[0] += 0.0423728813559322;
        result[1] += 0.9576271186440678;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9692036797470174;
        result[1] += 0.03079632025298261;
      }
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3292691260576248169) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9499270943796394;
        result[1] += 0.05007290562036055;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
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
    

    FILE* file = fopen("./codegen/esa_3_months_global/split_1/test_data.csv", "r");
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
