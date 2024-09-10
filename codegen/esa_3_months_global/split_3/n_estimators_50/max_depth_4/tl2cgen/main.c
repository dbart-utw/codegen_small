
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
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
      if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.7502942681312561035) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.9785949506037321;
          result[1] += 0.021405049396267837;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
        if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3602202534675598145) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
          result[0] += 0.1383989145183175;
          result[1] += 0.8616010854816825;
        } else {
          result[0] += 0.9806003675719829;
          result[1] += 0.019399632428017153;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2024775072932243347) ) ) {
    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1516199931502342224) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
          result[0] += 0.9868251537470527;
          result[1] += 0.013174846252947325;
        } else {
          result[0] += 0.338082517067379;
          result[1] += 0.661917482932621;
        }
      } else {
        if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4284365326166152954) ) ) {
          result[0] += 0.12293605523866706;
          result[1] += 0.877063944761333;
        } else {
          result[0] += 0.9861694131251807;
          result[1] += 0.013830586874819311;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2738175839185714722) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3502274602651596069) ) ) {
        if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7677219212055206299) ) ) {
          result[0] += 0.9568965517241379;
          result[1] += 0.04310344827586207;
        } else {
          result[0] += 0.0367170626349892;
          result[1] += 0.9632829373650108;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3195137530565261841) ) ) {
          result[0] += 0.008968609865470852;
          result[1] += 0.9910313901345291;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001773399999365210533) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3070356100797653198) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.19047619047619047;
          result[1] += 0.8095238095238095;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
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
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.351395338773727417) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
          result[0] += 0.6020170674941815;
          result[1] += 0.39798293250581845;
        } else {
          result[0] += 0.9936886554717238;
          result[1] += 0.006311344528276186;
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7015351951122283936) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
          result[0] += 0.7455397517059936;
          result[1] += 0.25446024829400643;
        } else {
          result[0] += 0.9851973809578255;
          result[1] += 0.014802619042174506;
        }
      }
    }
  }
  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.351395338773727417) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1531271114945411682) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001755689794663339853) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.1380247548222541809) ) ) {
          result[0] += 0.9657546008758121;
          result[1] += 0.03424539912418787;
        } else {
          result[0] += 0.07547169811320754;
          result[1] += 0.9245283018867925;
        }
      }
    }
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1531271114945411682) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.7164503633975982666) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
          result[0] += 0.6036397812713602;
          result[1] += 0.3963602187286398;
        } else {
          result[0] += 0.9976702440514837;
          result[1] += 0.002329755948516213;
        }
      }
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
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3819010108709335327) ) ) {
          result[0] += 0.9669918120327519;
          result[1] += 0.03300818796724813;
        } else {
          result[0] += 0.8423076923076923;
          result[1] += 0.1576923076923077;
        }
      }
    }
  }
  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001801235310267657042) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1410567238926887512) ) ) {
          result[0] += 0.952700213659471;
          result[1] += 0.04729978634052899;
        } else {
          result[0] += 0.9979898631671141;
          result[1] += 0.0020101368328858385;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
          result[0] += 0.10791884202957451;
          result[1] += 0.8920811579704255;
        } else {
          result[0] += 0.9857105154017268;
          result[1] += 0.014289484598273196;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1994618251919746399) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3499511033296585083) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.5583075335397317;
          result[1] += 0.44169246646026833;
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
      if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.745397716760635376) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2436483129858970642) ) ) {
          result[0] += 0.6250844594594595;
          result[1] += 0.37491554054054055;
        } else {
          result[0] += 0.9965805026192726;
          result[1] += 0.003419497380727463;
        }
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
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2024775072932243347) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
        if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3681567758321762085) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4268460869789123535) ) ) {
          result[0] += 0.9176573488986469;
          result[1] += 0.08234265110135304;
        } else {
          result[0] += 0.9996878863906462;
          result[1] += 0.00031211360935380476;
        }
      }
    } else {
      if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.8079512417316436768) ) ) {
        if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.7771066427230834961) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.020202020202020204;
          result[1] += 0.9797979797979798;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
          result[0] += 0.9606299212598425;
          result[1] += 0.03937007874015748;
        } else {
          result[0] += 0.055299539170506916;
          result[1] += 0.9447004608294931;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
      if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7879869341850280762) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.813657611608505249) ) ) {
          result[0] += 0.004256828662646328;
          result[1] += 0.9957431713373537;
        } else {
          result[0] += 0.6111111111111112;
          result[1] += 0.3888888888888889;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2987119108438491821) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7406133711338043213) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
          result[0] += 0.6090947368421052;
          result[1] += 0.39090526315789476;
        } else {
          result[0] += 0.9975037215160883;
          result[1] += 0.0024962784839116;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7806620895862579346) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7464606761932373047) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3226326256990432739) ) ) {
          result[0] += 0.08955223880597014;
          result[1] += 0.9104477611940298;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.9655975330913973;
          result[1] += 0.034402466908602714;
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1516199931502342224) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7621722519397735596) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7432717978954315186) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
          result[0] += 0.9785781881792894;
          result[1] += 0.02142181182071062;
        } else {
          result[0] += 0.3721855502305814;
          result[1] += 0.6278144497694186;
        }
      } else {
        if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2924157828092575073) ) ) {
          result[0] += 0.8410089943869615;
          result[1] += 0.15899100561303847;
        } else {
          result[0] += 0.008373042886317223;
          result[1] += 0.9916269571136828;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1449268683791160583) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.03571428571428571;
          result[1] += 0.9642857142857143;
        }
      } else {
        if ( ( !(data[62].missing != -1) || (data[62].fvalue <= (float)0.9924242496490478516) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.9909985152190052;
          result[1] += 0.009001484780994804;
        }
      }
    } else {
      if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04041793011128902435) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.360781446099281311) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2436483129858970642) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
          result[0] += 0.9305031961973447;
          result[1] += 0.0694968038026553;
        } else {
          result[0] += 0.2797427652733119;
          result[1] += 0.7202572347266881;
        }
      } else {
        if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.741320490837097168) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.995088333840999;
          result[1] += 0.004911666159000913;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1546342372894287109) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[62].missing != -1) || (data[62].fvalue <= (float)0.993042677640914917) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4284365326166152954) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8118190765380859375) ) ) {
          result[0] += 0.056157764137390626;
          result[1] += 0.9438422358626094;
        } else {
          result[0] += 0.954359158012017;
          result[1] += 0.04564084198798297;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.7733551861390775;
          result[1] += 0.2266448138609225;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.351395338773727417) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)3.812834620475769043e-06) ) ) {
          result[0] += 0.9996635652799369;
          result[1] += 0.0003364347200631105;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
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
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.758422166109085083) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001832863199524581432) ) ) {
          result[0] += 0.9556046089000104;
          result[1] += 0.04439539109998954;
        } else {
          result[0] += 0.9904338024912575;
          result[1] += 0.009566197508742522;
        }
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
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3499511033296585083) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2272647097706794739) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.9679585948005379;
          result[1] += 0.03204140519946212;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.7580295801162719727) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
          result[0] += 0.6082395087001023;
          result[1] += 0.39176049129989765;
        } else {
          result[0] += 0.9967615099745493;
          result[1] += 0.0032384900254507215;
        }
      }
    }
  }
  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8210126757621765137) ) ) {
      if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001755689794663339853) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7193010449409484863) ) ) {
          result[0] += 0.9713597315243736;
          result[1] += 0.02864026847562637;
        } else {
          result[0] += 0.9100594440723375;
          result[1] += 0.08994055592766242;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7722851336002349854) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.0008009442711407132;
          result[1] += 0.9991990557288593;
        }
      } else {
        if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7156386375427246094) ) ) {
          result[0] += 0.7057739557739557;
          result[1] += 0.2942260442260442;
        } else {
          result[0] += 0.9881749481185638;
          result[1] += 0.011825051881436234;
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7138063609600067139) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.02653165394440293312) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7411437630653381348) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3494735211133956909) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.0022471910112359553;
          result[1] += 0.9977528089887641;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.1381837725639343262) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
          result[0] += 0.5976375351065587;
          result[1] += 0.4023624648934413;
        } else {
          result[0] += 0.9900476688757122;
          result[1] += 0.009952331124287873;
        }
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4284365326166152954) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.708412855863571167) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.9637047239697726;
          result[1] += 0.036295276030227454;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3499511033296585083) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2738175839185714722) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.9998151314877294;
          result[1] += 0.0001848685122706475;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
    if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001774667529389262199) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7621722519397735596) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7406133711338043213) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3586165159940719604) ) ) {
          result[0] += 0.0021940928270042194;
          result[1] += 0.9978059071729958;
        } else {
          result[0] += 0.9891177044700371;
          result[1] += 0.010882295529962912;
        }
      } else {
        if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001779727521352469921) ) ) {
          result[0] += 0.49229837313949465;
          result[1] += 0.5077016268605054;
        } else {
          result[0] += 0.15965032567706547;
          result[1] += 0.8403496743229345;
        }
      }
    }
  } else {
    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.782492220401763916) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7759626507759094238) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3217779546976089478) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
          result[0] += 0.7456896551724138;
          result[1] += 0.2543103448275862;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.287395089864730835) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.9998492998237967;
          result[1] += 0.00015070017620328295;
        }
      }
    }
  }
  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
    if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3292691260576248169) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1410631909966468811) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.928651217580275;
          result[1] += 0.071348782419725;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2813598960638046265) ) ) {
          result[0] += 0.08501658124811577;
          result[1] += 0.9149834187518843;
        } else {
          result[0] += 0.858525831496214;
          result[1] += 0.14147416850378605;
        }
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001774667529389262199) ) ) {
    if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7655960023403167725) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329454064369202) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3532431274652481079) ) ) {
        if ( ( !(data[44].missing != -1) || (data[44].fvalue <= (float)1.92727893590927124e-05) ) ) {
          result[0] += 0.9695974756950366;
          result[1] += 0.03040252430496333;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.1380247548222541809) ) ) {
          result[0] += 0.9517229149046462;
          result[1] += 0.04827708509535372;
        } else {
          result[0] += 0.02127659574468085;
          result[1] += 0.9787234042553191;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7666589617729187012) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3101553469896316528) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.351395338773727417) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.44857667584940314;
          result[1] += 0.5514233241505969;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.3017295151948928833) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3234125673770904541) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7658493518829345703) ) ) {
          result[0] += 0.9966626648015773;
          result[1] += 0.003337335198422751;
        } else {
          result[0] += 0.9013359281558515;
          result[1] += 0.09866407184414848;
        }
      }
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3681567758321762085) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.7409271895885467529) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
          result[0] += 0.6081653396578011;
          result[1] += 0.3918346603421989;
        } else {
          result[0] += 0.9969217101264047;
          result[1] += 0.0030782898735952865;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7658493518829345703) ) ) {
      if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8868957757949829102) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8099800944328308105) ) ) {
          result[0] += 0.00016103059581320451;
          result[1] += 0.9998389694041868;
        } else {
          result[0] += 0.6045016077170418;
          result[1] += 0.3954983922829582;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
          result[0] += 0.0002486325211337643;
          result[1] += 0.9997513674788663;
        } else {
          result[0] += 0.9141615356754799;
          result[1] += 0.0858384643245201;
        }
      }
    } else {
      if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.7909130454063415527) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1384864374995231628) ) ) {
          result[0] += 0.378698224852071;
          result[1] += 0.621301775147929;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3675650954246520996) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2436483129858970642) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
          result[0] += 0.9248796147672552;
          result[1] += 0.07512038523274478;
        } else {
          result[0] += 0.28415101221958783;
          result[1] += 0.7158489877804122;
        }
      } else {
        if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8823183178901672363) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.9867306278772873;
          result[1] += 0.013269372122712678;
        }
      }
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1531271114945411682) ) ) {
        result[0] += 0;
        result[1] += 1;
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
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2009696662425994873) ) ) {
          result[0] += 0.6663705019991115;
          result[1] += 0.3336294980008885;
        } else {
          result[0] += 0.13970588235294118;
          result[1] += 0.8602941176470589;
        }
      }
    }
  } else {
    if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001774667529389262199) ) ) {
      if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001820213044993579388) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7621722519397735596) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7517754733562469482) ) ) {
          result[0] += 0.9572704196446252;
          result[1] += 0.042729580355374726;
        } else {
          result[0] += 0.9978192050650722;
          result[1] += 0.002180794934927893;
        }
      }
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7768823504447937012) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.9668451772068115;
          result[1] += 0.03315482279318852;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.8086280924146392;
          result[1] += 0.19137190758536088;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.315286591649055481) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[75].missing != -1) || (data[75].fvalue <= (float)6.353389471769332886e-05) ) ) {
          result[0] += 0.999906950776961;
          result[1] += 9.304922303898763e-05;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3499511033296585083) ) ) {
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
    if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7112472653388977051) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1531271114945411682) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7658493518829345703) ) ) {
          result[0] += 0.9994692789933992;
          result[1] += 0.0005307210066008425;
        } else {
          result[0] += 0.9031793373506198;
          result[1] += 0.09682066264938016;
        }
      }
    }
  }
  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2768351733684539795) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
        if ( ( !(data[70].missing != -1) || (data[70].fvalue <= (float)0.9314345419406890869) ) ) {
          result[0] += 0.0019083969465648854;
          result[1] += 0.9980916030534351;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
          result[0] += 0.9622749356959132;
          result[1] += 0.03772506430408688;
        } else {
          result[0] += 0.5333880678708265;
          result[1] += 0.4666119321291735;
        }
      }
    } else {
      if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001743039640132337809) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3448948562145233154) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.9996488391274877;
          result[1] += 0.0003511608725122702;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8182544112205505371) ) ) {
      if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4303112775087356567) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329454064369202) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.287395089864730835) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1531271114945411682) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.0023963133640552995;
          result[1] += 0.9976036866359447;
        }
      }
    }
  } else {
    if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7655960023403167725) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1410567238926887512) ) ) {
          result[0] += 0.9020540299173923;
          result[1] += 0.09794597008260772;
        } else {
          result[0] += 0.9957044854881266;
          result[1] += 0.004295514511873351;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7879869341850280762) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2889055609703063965) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7432717978954315186) ) ) {
        if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4320280700922012329) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.153880678117275238) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2024775072932243347) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3819010108709335327) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
          result[0] += 0.9803354805557085;
          result[1] += 0.019664519444291508;
        } else {
          result[0] += 0.5457394306730968;
          result[1] += 0.45426056932690323;
        }
      } else {
        if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2852367013692855835) ) ) {
          result[0] += 0.9916540212443096;
          result[1] += 0.00834597875569044;
        } else {
          result[0] += 0.1890363280400261;
          result[1] += 0.8109636719599739;
        }
      }
    } else {
      if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04041793011128902435) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3547509759664535522) ) ) {
          result[0] += 0.18696397941680962;
          result[1] += 0.8130360205831904;
        } else {
          result[0] += 0.02724177071509648;
          result[1] += 0.9727582292849035;
        }
      }
    }
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04041793011128902435) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
        if ( ( !(data[62].missing != -1) || (data[62].fvalue <= (float)0.9933518767356872559) ) ) {
          result[0] += 0.2363233665559247;
          result[1] += 0.7636766334440753;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3273122608661651611) ) ) {
          result[0] += 0.9727809225581115;
          result[1] += 0.027219077441888475;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8896431326866149902) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.3017295151948928833) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
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
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
      if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001779727521352469921) ) ) {
        if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.02830687398090958595) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4483384788036346436) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.7576376795768737793) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
          result[0] += 0.6113473970738347;
          result[1] += 0.3886526029261654;
        } else {
          result[0] += 0.9981780220983243;
          result[1] += 0.0018219779016757506;
        }
      }
    }
  }
  if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7128912806510925293) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7621722519397735596) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7128891646862030029) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7732048332691192627) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
          result[0] += 0.011683130699088147;
          result[1] += 0.9883168693009119;
        } else {
          result[0] += 0.8424400115640358;
          result[1] += 0.15755998843596414;
        }
      } else {
        if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001825273095164448023) ) ) {
          result[0] += 0.22448979591836735;
          result[1] += 0.7755102040816326;
        } else {
          result[0] += 0.0024630541871921183;
          result[1] += 0.9975369458128078;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
          result[0] += 0.5835209740638813;
          result[1] += 0.41647902593611874;
        } else {
          result[0] += 0.9896821382717971;
          result[1] += 0.010317861728202933;
        }
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
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.6964452564716339111) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3180760592222213745) ) ) {
          result[0] += 0.9088924490766007;
          result[1] += 0.09110755092339924;
        } else {
          result[0] += 0.9993069330592931;
          result[1] += 0.0006930669407069283;
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001762012368999421597) ) ) {
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
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2399695739150047302) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
          result[0] += 0.9917340698362597;
          result[1] += 0.008265930163740384;
        } else {
          result[0] += 0.8849217529390672;
          result[1] += 0.11507824706093282;
        }
      }
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.00176707742502912879) ) ) {
      if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4320280700922012329) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06028983974829316139) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7070246040821075439) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
          result[0] += 0.9960903651743347;
          result[1] += 0.00390963482566536;
        } else {
          result[0] += 0.9009517629245078;
          result[1] += 0.09904823707549211;
        }
      }
    }
  }
  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3217779546976089478) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3819010108709335327) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
          result[0] += 0.9588705596599535;
          result[1] += 0.04112944034004656;
        } else {
          result[0] += 0.12117911856530894;
          result[1] += 0.8788208814346911;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1380424797534942627) ) ) {
          result[0] += 0.8944146901300689;
          result[1] += 0.10558530986993114;
        } else {
          result[0] += 0.02782279848730416;
          result[1] += 0.9721772015126958;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1288257911801338196) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.9993742032680496;
          result[1] += 0.0006257967319503998;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.720558464527130127) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8099800944328308105) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.9558055822543865;
          result[1] += 0.044194417745613536;
        }
      }
    }
  } else {
    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.782492220401763916) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2700464129447937012) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.04824561403508772;
          result[1] += 0.9517543859649122;
        }
      } else {
        if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3864005208015441895) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1346227526664733887) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2843808382749557495) ) ) {
          result[0] += 0.4789156626506024;
          result[1] += 0.5210843373493976;
        } else {
          result[0] += 0.9994794980047423;
          result[1] += 0.0005205019952576485;
        }
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
      if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.6840395033359527588) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7658493518829345703) ) ) {
          result[0] += 0.998408476730648;
          result[1] += 0.0015915232693519616;
        } else {
          result[0] += 0.9006219931963204;
          result[1] += 0.09937800680367963;
        }
      }
    }
  }
  if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001762012368999421597) ) ) {
    if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7400808334350585938) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118186295032501221) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3615049868822097778) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1516199931502342224) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.9733994589720469;
          result[1] += 0.02660054102795311;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
          result[0] += 0.8844056706652127;
          result[1] += 0.11559432933478735;
        } else {
          result[0] += 0.12292800967937084;
          result[1] += 0.8770719903206292;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[55].missing != -1) || (data[55].fvalue <= (float)3.812834620475769043e-06) ) ) {
          result[0] += 0.998495802238806;
          result[1] += 0.0015041977611940298;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1516199931502342224) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7621722519397735596) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.6770445704460144043) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.963106942688381;
          result[1] += 0.03689305731161895;
        }
      }
    }
  } else {
    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7815771698951721191) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7548167705535888672) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4284365326166152954) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8210126757621765137) ) ) {
          result[0] += 0.718013468013468;
          result[1] += 0.281986531986532;
        } else {
          result[0] += 0.00483005366726297;
          result[1] += 0.995169946332737;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.287395089864730835) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.9993762849684678;
          result[1] += 0.0006237150315322599;
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001822743099182844162) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8182544112205505371) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.153880678117275238) ) ) {
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
    }
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.7537131011486053467) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.24515543133020401) ) ) {
          result[0] += 0.632878909382518;
          result[1] += 0.36712109061748194;
        } else {
          result[0] += 0.9959114299812803;
          result[1] += 0.004088570018719698;
        }
      }
    }
  }
  if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001774667529389262199) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3600607514381408691) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3502274453639984131) ) ) {
        if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7156386375427246094) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1516199931502342224) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1384864374995231628) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1371966376900672913) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.015521064301552107;
          result[1] += 0.9844789356984479;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.9648752292558217;
          result[1] += 0.035124770744178295;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2858879715204238892) ) ) {
        if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4158186167478561401) ) ) {
          result[0] += 0.8149134487350199;
          result[1] += 0.18508655126498003;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7584942877292633057) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.998736664795059;
          result[1] += 0.0012633352049410444;
        }
      }
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
      if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.7562301158905029297) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3819010108709335327) ) ) {
          result[0] += 0.9662609655492942;
          result[1] += 0.03373903445070586;
        } else {
          result[0] += 0.8281658573029511;
          result[1] += 0.17183414269704894;
        }
      }
    }
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
      if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.7485989928245544434) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
          result[0] += 0.7298469042135212;
          result[1] += 0.2701530957864788;
        } else {
          result[0] += 0.9922733682319534;
          result[1] += 0.007726631768046515;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2738175839185714722) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
          result[0] += 0.9243594957299716;
          result[1] += 0.07564050427002847;
        } else {
          result[0] += 0.03940986942513142;
          result[1] += 0.9605901305748685;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.287395089864730835) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.99916476841306;
          result[1] += 0.0008352315869400152;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3499511033296585083) ) ) {
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
    if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.7436822652816772461) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
          result[0] += 0.6112764690875074;
          result[1] += 0.38872353091249257;
        } else {
          result[0] += 0.9952864790622903;
          result[1] += 0.004713520937709728;
        }
      }
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.05921705067157745361) ) ) {
      if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7517754733562469482) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3571722805500030518) ) ) {
          result[0] += 0.00047743055555555554;
          result[1] += 0.9995225694444444;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04389595240354537964) ) ) {
          result[0] += 0.5765158806544755;
          result[1] += 0.42348411934552455;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1384864374995231628) ) ) {
        if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7183859944343566895) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.013592233009708738;
          result[1] += 0.9864077669902913;
        }
      } else {
        if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7464606761932373047) ) ) {
          result[0] += 0.003080369644357323;
          result[1] += 0.9969196303556427;
        } else {
          result[0] += 0.9311084667532092;
          result[1] += 0.06889153324679072;
        }
      }
    }
  } else {
    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04389595240354537964) ) ) {
      if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.8161026239395141602) ) ) {
        if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3292691260576248169) ) ) {
          result[0] += 0.9767680921052632;
          result[1] += 0.023231907894736843;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  }
  
  // Average tree outputs
  result[0] /= 50;
  result[1] /= 50;
  
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
    

    FILE* file = fopen("./codegen/esa_3_months_global/split_3/test_data.csv", "r");
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
