
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
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2836239337921142578) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7406133711338043213) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9650166333050769;
        result[1] += 0.0349833666949231;
      }
    }
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
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
      if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.741320490837097168) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9619806553240625;
        result[1] += 0.038019344675937476;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.3002223819494247437) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7411437630653381348) ) ) {
      if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3919859081506729126) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7517754733562469482) ) ) {
        result[0] += 0.9452662458885234;
        result[1] += 0.054733754111476574;
      } else {
        result[0] += 0.9975720468700517;
        result[1] += 0.002427953129948274;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7464606761932373047) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2165748998522758484) ) ) {
        result[0] += 0.07079646017699115;
        result[1] += 0.9292035398230089;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9657789102586478;
        result[1] += 0.034221089741352226;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.351395338773727417) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3803411275148391724) ) ) {
        result[0] += 0.2363078375826251;
        result[1] += 0.7636921624173749;
      } else {
        result[0] += 0.05695728203847115;
        result[1] += 0.9430427179615288;
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
        result[0] += 0.665410779696494;
        result[1] += 0.334589220303506;
      } else {
        result[0] += 0.9788420908634919;
        result[1] += 0.021157909136508033;
      }
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
      if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.02741967001929879189) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
        result[0] += 0.6119453924914676;
        result[1] += 0.38805460750853243;
      } else {
        result[0] += 0.9889547664014365;
        result[1] += 0.011045233598563423;
      }
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
      if ( ( !(data[67].missing != -1) || (data[67].fvalue <= (float)0.7883813679218292236) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.0002602811035918792;
        result[1] += 0.9997397188964081;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7621722519397735596) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9496622913215241;
        result[1] += 0.050337708678475854;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
      if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.8094119429588317871) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.25;
        result[1] += 0.75;
      }
    } else {
      if ( ( !(data[55].missing != -1) || (data[55].fvalue <= (float)6.353482604026794434e-06) ) ) {
        result[0] += 0.999802037845706;
        result[1] += 0.00019796215429403202;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1380424797534942627) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9569783589862284;
        result[1] += 0.04302164101377155;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7768823504447937012) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.39285131052502653;
        result[1] += 0.6071486894749735;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2898804396390914917) ) ) {
        result[0] += 0.07142857142857142;
        result[1] += 0.9285714285714286;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8210126757621765137) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.9990772586192433;
        result[1] += 0.0009227413807566479;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1531271114945411682) ) ) {
      result[0] += 0;
      result[1] += 1;
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
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3460290580987930298) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9653587612482014;
        result[1] += 0.034641238751798635;
      }
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
      if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7432717978954315186) ) ) {
        result[0] += 0.9818141592920354;
        result[1] += 0.018185840707964602;
      } else {
        result[0] += 0.886328125;
        result[1] += 0.113671875;
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3637963384389877319) ) ) {
        result[0] += 0.28856461769528613;
        result[1] += 0.7114353823047139;
      } else {
        result[0] += 0.030171523041950817;
        result[1] += 0.9698284769580492;
      }
    }
  } else {
    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4284365326166152954) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1539440527558326721) ) ) {
        result[0] += 0.999849119671313;
        result[1] += 0.00015088032868699295;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.05494171613827347755) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.383395761251449585) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
        result[0] += 0.10233468474765832;
        result[1] += 0.8976653152523417;
      } else {
        result[0] += 0.9638865679742343;
        result[1] += 0.036113432025765724;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2979583591222763062) ) ) {
        result[0] += 0.04367816091954023;
        result[1] += 0.9563218390804598;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3217779546976089478) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3803411275148391724) ) ) {
        result[0] += 0.6037298456854197;
        result[1] += 0.3962701543145803;
      } else {
        result[0] += 0.0002637826431020839;
        result[1] += 0.9997362173568979;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3499511033296585083) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9993268806721909;
        result[1] += 0.0006731193278091127;
      }
    }
  }
  if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001822743099182844162) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2557153552770614624) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3054766058921813965) ) ) {
        result[0] += 0.12195121951219512;
        result[1] += 0.8780487804878049;
      } else {
        result[0] += 0.003424657534246575;
        result[1] += 0.9965753424657534;
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
        result[0] += 0.9715306003427454;
        result[1] += 0.02846939965725463;
      } else {
        result[0] += 0.5086892690088429;
        result[1] += 0.4913107309911571;
      }
    }
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9475613296559733;
        result[1] += 0.05243867034402671;
      }
    } else {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3217779546976089478) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9984086236336814;
        result[1] += 0.0015913763663185773;
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
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3132751137018203735) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9618386384675639;
        result[1] += 0.038161361532436086;
      }
    } else {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.2992379516363143921) ) ) {
        result[0] += 0.125;
        result[1] += 0.875;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.153880678117275238) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8154961466789245605) ) ) {
      if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001755689794663339853) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9925503421203873;
        result[1] += 0.0074496578796126615;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
        result[0] += 0.01825029960623181;
        result[1] += 0.9817497003937682;
      } else {
        result[0] += 0.9545313309166236;
        result[1] += 0.04546866908337649;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.720558464527130127) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1493559554219245911) ) ) {
        result[0] += 0.8962409204177934;
        result[1] += 0.10375907958220668;
      } else {
        result[0] += 0.9978828349412343;
        result[1] += 0.0021171650587656354;
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329454064369202) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.5526723470178156;
        result[1] += 0.44732765298218435;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7640108168125152588) ) ) {
        result[0] += 0.26109660574412535;
        result[1] += 0.7389033942558747;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
      if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7870718538761138916) ) ) {
        result[0] += 0.0009548058561425843;
        result[1] += 0.9990451941438574;
      } else {
        result[0] += 0.128099173553719;
        result[1] += 0.871900826446281;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2436483129858970642) ) ) {
        result[0] += 0.6198729058347776;
        result[1] += 0.3801270941652224;
      } else {
        result[0] += 0.989452197264867;
        result[1] += 0.010547802735132953;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001774667529389262199) ) ) {
      if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001820213044993579388) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.22093023255813954;
        result[1] += 0.7790697674418605;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
        result[0] += 0.6102616377845735;
        result[1] += 0.38973836221542646;
      } else {
        result[0] += 0.9910991356473562;
        result[1] += 0.008900864352643768;
      }
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
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.383395761251449585) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9671536236025289;
        result[1] += 0.03284637639747116;
      }
    } else {
      if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.7655695974826812744) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.49612403100775193;
        result[1] += 0.5038759689922481;
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
    if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7411437630653381348) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3179547637701034546) ) ) {
        result[0] += 0.15359477124183007;
        result[1] += 0.8464052287581699;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3877691775560379028) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9650993733213966;
        result[1] += 0.0349006266786034;
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.3009759485721588135) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001774667529389262199) ) ) {
      if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7400808334350585938) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.10204081632653061;
        result[1] += 0.8979591836734694;
      }
    } else {
      if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3877691775560379028) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.964072581219467;
        result[1] += 0.03592741878053297;
      }
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3803411275148391724) ) ) {
        result[0] += 0.9472957756710617;
        result[1] += 0.05270422432893829;
      } else {
        result[0] += 0.00045310376076121433;
        result[1] += 0.9995468962392388;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.331211090087890625) ) ) {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3217779546976089478) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9987088369063267;
        result[1] += 0.0012911630936733008;
      }
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  }
  if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001762012368999421597) ) ) {
    if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2437759265303611755) ) ) {
      if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7464606761932373047) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.0011210762331838565;
        result[1] += 0.9988789237668162;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2836239337921142578) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
        result[0] += 0.5988493287751189;
        result[1] += 0.4011506712248812;
      } else {
        result[0] += 0.989772260260695;
        result[1] += 0.010227739739305072;
      }
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.7562301158905029297) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9466178629024952;
        result[1] += 0.05338213709750485;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1539440527558326721) ) ) {
      if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.6566292643547058105) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9999065944330282;
        result[1] += 9.340556697179151e-05;
      }
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1531271114945411682) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.351395338773727417) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9996926859250154;
        result[1] += 0.00030731407498463427;
      }
    }
  } else {
    if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001820213044993579388) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
        result[0] += 0.6177223834727676;
        result[1] += 0.38227761652723236;
      } else {
        result[0] += 0.9882537377980971;
        result[1] += 0.011746262201902878;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4517663121223449707) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3217779546976089478) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9266355390973005;
        result[1] += 0.0733644609026995;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.287395089864730835) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9996176661414403;
        result[1] += 0.00038233385855964406;
      }
    }
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2889022082090377808) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.720558464527130127) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9455102885302638;
        result[1] += 0.054489711469736295;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.3017295151948928833) ) ) {
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
        result[0] += 0.9985904606011003;
        result[1] += 0.0014095393988996499;
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7629375457763671875) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9629399895906858;
        result[1] += 0.0370600104093142;
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
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2272647097706794739) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9656569756862305;
        result[1] += 0.034343024313769406;
      }
    }
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2768351733684539795) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
        result[0] += 0.9664052196848754;
        result[1] += 0.03359478031512459;
      } else {
        result[0] += 0.05005636184303227;
        result[1] += 0.9499436381569677;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9915027448317123;
        result[1] += 0.008497255168287693;
      }
    }
  }
  if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7411437630653381348) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7695273160934448242) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.679155886173248291) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
        result[0] += 0.987969219578492;
        result[1] += 0.01203078042150801;
      } else {
        result[0] += 0.5312819729709094;
        result[1] += 0.46871802702909066;
      }
    }
  }
  if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001822743099182844162) ) ) {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8154961466789245605) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3468081206083297729) ) ) {
        result[0] += 0.975;
        result[1] += 0.025;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3819010108709335327) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
        result[0] += 0.5685239447961169;
        result[1] += 0.43147605520388305;
      } else {
        result[0] += 0.9985992254540746;
        result[1] += 0.0014007745459253941;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2738175839185714722) ) ) {
        result[0] += 0.2682878995881545;
        result[1] += 0.7317121004118454;
      } else {
        result[0] += 0.9961587708066582;
        result[1] += 0.0038412291933418692;
      }
    }
  }
  if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8832333683967590332) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8118190765380859375) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.13719949871301651) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1320431455969810486) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.6161743687470224;
        result[1] += 0.3838256312529776;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.287395089864730835) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9996623234475611;
        result[1] += 0.0003376765524388398;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
        result[0] += 0.010948905109489052;
        result[1] += 0.9890510948905109;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.7317222356796264648) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9434716897670303;
        result[1] += 0.05652831023296963;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7584942877292633057) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4284365326166152954) ) ) {
        result[0] += 0.6858685868586859;
        result[1] += 0.31413141314131415;
      } else {
        result[0] += 0.9989237481339182;
        result[1] += 0.0010762518660818645;
      }
    }
  }
  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3499511033296585083) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.4667192429022082;
        result[1] += 0.5332807570977918;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3132751137018203735) ) ) {
        result[0] += 0.9639035047012544;
        result[1] += 0.03609649529874562;
      } else {
        result[0] += 0.0011295180722891566;
        result[1] += 0.9988704819277109;
      }
    }
  }
  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04389595240354537964) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.351395338773727417) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9993433482328004;
        result[1] += 0.0006566517671996682;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
        result[0] += 0.00013734848744978195;
        result[1] += 0.9998626515125503;
      } else {
        result[0] += 0.9240599479493853;
        result[1] += 0.07594005205061474;
      }
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7464606761932373047) ) ) {
        result[0] += 0.005282405526208858;
        result[1] += 0.9947175944737912;
      } else {
        result[0] += 0.9506201773995817;
        result[1] += 0.04937982260041826;
      }
    }
  } else {
    if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.6773600876331329346) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4284365326166152954) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9984852192353852;
        result[1] += 0.0015147807646147214;
      }
    }
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2889022082090377808) ) ) {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3741033822298049927) ) ) {
        result[0] += 0.00031643066213116053;
        result[1] += 0.9996835693378688;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7464606761932373047) ) ) {
        result[0] += 0.005235602094240838;
        result[1] += 0.9947643979057592;
      } else {
        result[0] += 0.9468465782018787;
        result[1] += 0.05315342179812137;
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.708412855863571167) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9968063507995529;
        result[1] += 0.003193649200447111;
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.3002223819494247437) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2039853483438491821) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
        result[0] += 0.0247074122236671;
        result[1] += 0.9752925877763329;
      } else {
        result[0] += 0.9628027928184668;
        result[1] += 0.0371972071815332;
      }
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7971462011337280273) ) ) {
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
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2768351733684539795) ) ) {
        result[0] += 0.3602085466902523;
        result[1] += 0.6397914533097477;
      } else {
        result[0] += 0.9655693929153768;
        result[1] += 0.0344306070846232;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329454064369202) ) ) {
      if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4451457560062408447) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3117152303457260132) ) ) {
        result[0] += 0.017875737591114195;
        result[1] += 0.9821242624088858;
      } else {
        result[0] += 0.002776559988309221;
        result[1] += 0.9972234400116908;
      }
    }
  } else {
    if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001820213044993579388) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
        result[0] += 0.6077047367973467;
        result[1] += 0.3922952632026533;
      } else {
        result[0] += 0.9880703109909214;
        result[1] += 0.011929689009078617;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
        result[0] += 0.9815934886499402;
        result[1] += 0.01840651135005974;
      } else {
        result[0] += 0.8139862603487757;
        result[1] += 0.18601373965122422;
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3571722805500030518) ) ) {
        result[0] += 0.011804354094579007;
        result[1] += 0.988195645905421;
      } else {
        result[0] += 0.9392843364197531;
        result[1] += 0.060715663580246916;
      }
    }
  } else {
    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3919859081506729126) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.266275256872177124) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.3367003367003367;
        result[1] += 0.6632996632996633;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3477833271026611328) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9997816117056125;
        result[1] += 0.00021838829438742082;
      }
    }
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
      if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.00176707742502912879) ) ) {
        result[0] += 0.7988078117509744;
        result[1] += 0.20119218824902563;
      } else {
        result[0] += 0.34743144599064985;
        result[1] += 0.6525685540093501;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3477833271026611328) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9989217215747453;
        result[1] += 0.0010782784252546572;
      }
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3819010108709335327) ) ) {
      if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7666589617729187012) ) ) {
        result[0] += 0.010860155819626977;
        result[1] += 0.989139844180373;
      } else {
        result[0] += 0.5706698934489597;
        result[1] += 0.4293301065510403;
      }
    } else {
      if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.8045600354671478271) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.2747168362449606;
        result[1] += 0.7252831637550393;
      }
    }
  } else {
    if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001610195613466203213) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.287395089864730835) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9998364696125498;
        result[1] += 0.00016353038745021083;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8868957757949829102) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1949382945895195007) ) ) {
        result[0] += 0.09134157944814462;
        result[1] += 0.9086584205518554;
      } else {
        result[0] += 0.010975401434916297;
        result[1] += 0.9890245985650837;
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
    if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7464606761932373047) ) ) {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2370446100831031799) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
        result[0] += 0.605033471739683;
        result[1] += 0.3949665282603169;
      } else {
        result[0] += 0.9885061910536764;
        result[1] += 0.011493808946323604;
      }
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
      if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4500495195388793945) ) ) {
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
        result[0] += 0.9632264957264958;
        result[1] += 0.03677350427350427;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.05494171613827347755) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  } else {
    if ( ( !(data[62].missing != -1) || (data[62].fvalue <= (float)0.9933518767356872559) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9582358048272269;
        result[1] += 0.04176419517277305;
      }
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  }
  if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7411437630653381348) ) ) {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3487196117639541626) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.759413987398147583) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2437759265303611755) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
        result[0] += 0.7767733497461148;
        result[1] += 0.22322665025388522;
      } else {
        result[0] += 0.25663782264625395;
        result[1] += 0.743362177353746;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2738175839185714722) ) ) {
        result[0] += 0.5518546555639667;
        result[1] += 0.4481453444360333;
      } else {
        result[0] += 0.9993770476673896;
        result[1] += 0.000622952332610401;
      }
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.813657611608505249) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9453430005577245;
        result[1] += 0.05465699944227551;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3268404752016067505) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3935983479022979736) ) ) {
        result[0] += 0.9998601822291613;
        result[1] += 0.0001398177708386736;
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
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.383395761251449585) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
        result[0] += 0.6192547758653301;
        result[1] += 0.38074522413466994;
      } else {
        result[0] += 0.9983017924232026;
        result[1] += 0.0016982075767973666;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3140443116426467896) ) ) {
        result[0] += 0.15047619047619049;
        result[1] += 0.8495238095238096;
      } else {
        result[0] += 0.017796610169491526;
        result[1] += 0.9822033898305085;
      }
    }
  }
  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2768351733684539795) ) ) {
      if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.05921705067157745361) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.8115507908981029;
        result[1] += 0.1884492091018971;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3834608942270278931) ) ) {
        result[0] += 0.9707412428666015;
        result[1] += 0.029258757133398493;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001774667529389262199) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1380424797534942627) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001764542423188686371) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.004048582995951417;
        result[1] += 0.9959514170040485;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
      if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.05921705067157745361) ) ) {
        result[0] += 0.021678750495978068;
        result[1] += 0.9783212495040219;
      } else {
        result[0] += 0.7655664638028815;
        result[1] += 0.23443353619711846;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3297289460897445679) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9998948978757692;
        result[1] += 0.00010510212423071084;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.05494171613827347755) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2768351733684539795) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
        result[0] += 0.962692674942027;
        result[1] += 0.03730732505797299;
      } else {
        result[0] += 0.048730678497236016;
        result[1] += 0.951269321502764;
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3460290580987930298) ) ) {
        result[0] += 0.9673233604387441;
        result[1] += 0.032676639561255855;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7138063609600067139) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
        result[0] += 0.049779205138498595;
        result[1] += 0.9502207948615013;
      } else {
        result[0] += 0.480946123521682;
        result[1] += 0.519053876478318;
      }
    }
  } else {
    if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001820213044993579388) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9656167210562772;
        result[1] += 0.03438327894372282;
      }
    }
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.7537131011486053467) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3110286146402359009) ) ) {
        result[0] += 0.8325542020646979;
        result[1] += 0.16744579793530215;
      } else {
        result[0] += 0.7419594464467494;
        result[1] += 0.2580405535532506;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3234125673770904541) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
        result[0] += 0.607691647351704;
        result[1] += 0.392308352648296;
      } else {
        result[0] += 0.9880642229627385;
        result[1] += 0.011935777037261435;
      }
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  }
  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8154961466789245605) ) ) {
      if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001743039640132337809) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9989610673665792;
        result[1] += 0.0010389326334208223;
      }
    } else {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3217779546976089478) ) ) {
        result[0] += 0.29937026816670204;
        result[1] += 0.7006297318332979;
      } else {
        result[0] += 0.9639767007860657;
        result[1] += 0.03602329921393429;
      }
    }
  }
  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3210727423429489136) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9658602965543013;
        result[1] += 0.034139703445698694;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3054766058921813965) ) ) {
        result[0] += 0.44565691837625493;
        result[1] += 0.5543430816237451;
      } else {
        result[0] += 0.023781212841854936;
        result[1] += 0.976218787158145;
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1546342372894287109) ) ) {
      if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.025720199104398489) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3721477985382080078) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2399695739150047302) ) ) {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9632238652730047;
        result[1] += 0.036776134726995306;
      }
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  }
  if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7464606761932373047) ) ) {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3557280451059341431) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1380424797534942627) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.003908794788273616;
        result[1] += 0.9960912052117263;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.1380926147103309631) ) ) {
      if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7138063609600067139) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.7682575138775443;
        result[1] += 0.2317424861224558;
      }
    } else {
      result[0] += 0;
      result[1] += 1;
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
        result[0] += 0.9445407925407926;
        result[1] += 0.05545920745920746;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2738175839185714722) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3571722805500030518) ) ) {
        result[0] += 0.023240371845949535;
        result[1] += 0.9767596281540505;
      } else {
        result[0] += 0.9306397306397306;
        result[1] += 0.06936026936026936;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1288257911801338196) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9999184956628049;
        result[1] += 8.150433719508645e-05;
      }
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
    if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.7436822652816772461) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2436483129858970642) ) ) {
        result[0] += 0.6219018715225089;
        result[1] += 0.37809812847749114;
      } else {
        result[0] += 0.9841941965832365;
        result[1] += 0.015805803416763544;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2924157828092575073) ) ) {
        result[0] += 0.8815865662999421;
        result[1] += 0.1184134337000579;
      } else {
        result[0] += 0.022724828846912074;
        result[1] += 0.9772751711530879;
      }
    } else {
      if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04389595240354537964) ) ) {
        result[0] += 0.9984091148361739;
        result[1] += 0.0015908851638260788;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1380424797534942627) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
        result[0] += 0.9799426934097422;
        result[1] += 0.02005730659025788;
      } else {
        result[0] += 0.78816;
        result[1] += 0.21184;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2647681385278701782) ) ) {
        result[0] += 0.03457338716232693;
        result[1] += 0.9654266128376731;
      } else {
        result[0] += 0.46026974325641856;
        result[1] += 0.5397302567435814;
      }
    }
  } else {
    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.09636001661419868469) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3470626324415206909) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9997250323659819;
        result[1] += 0.0002749676340180791;
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3571722805500030518) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.85;
        result[1] += 0.15;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.02741967001929879189) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  } else {
    if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001762012368999421597) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2898804396390914917) ) ) {
        result[0] += 0.24615384615384617;
        result[1] += 0.7538461538461538;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9656655431756868;
        result[1] += 0.0343344568243132;
      }
    }
  }
  if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001822743099182844162) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7695273160934448242) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7406133711338043213) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9745222929936306;
        result[1] += 0.025477707006369428;
      }
    }
  } else {
    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4284365326166152954) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9509942789867736;
        result[1] += 0.049005721013226394;
      }
    } else {
      if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04041793011128902435) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.8113237387316148;
        result[1] += 0.18867626126838527;
      }
    }
  }
  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.383395761251449585) ) ) {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2836239337921142578) ) ) {
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
        result[0] += 0.9642041399000714;
        result[1] += 0.03579586009992862;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2760816067457199097) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3772213906049728394) ) ) {
        result[0] += 0.152317880794702;
        result[1] += 0.847682119205298;
      } else {
        result[0] += 0.002717391304347826;
        result[1] += 0.9972826086956522;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
        result[0] += 0.7159342008347656;
        result[1] += 0.28406579916523444;
      } else {
        result[0] += 0.002378167641325536;
        result[1] += 0.9976218323586744;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
        result[0] += 0.5936463171864632;
        result[1] += 0.40635368281353684;
      } else {
        result[0] += 0.98924548418499;
        result[1] += 0.010754515815009967;
      }
    }
  }
  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8154961466789245605) ) ) {
        result[0] += 0.7019145146927872;
        result[1] += 0.29808548530721285;
      } else {
        result[0] += 0.004509539410291;
        result[1] += 0.995490460589709;
      }
    } else {
      if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7406133711338043213) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9649228216242507;
        result[1] += 0.03507717837574925;
      }
    }
  }
  if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001762012368999421597) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2134551405906677246) ) ) {
      if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001774667529389262199) ) ) {
        result[0] += 0.0037174721189591076;
        result[1] += 0.9962825278810409;
      } else {
        result[0] += 0.18688524590163935;
        result[1] += 0.8131147540983606;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7621722519397735596) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.02527075812274368;
        result[1] += 0.9747292418772563;
      }
    }
  } else {
    if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.00179490773007273674) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
        result[0] += 0.07936763129689174;
        result[1] += 0.9206323687031083;
      } else {
        result[0] += 0.9559847003336017;
        result[1] += 0.04401529966639825;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2738175839185714722) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9880434782608696;
        result[1] += 0.011956521739130435;
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.3009759485721588135) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2039853483438491821) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9679706636489951;
        result[1] += 0.032029336351004856;
      }
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.3009759485721588135) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.6964452564716339111) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9634379730926333;
        result[1] += 0.03656202690736668;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3803411275148391724) ) ) {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2836239337921142578) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9646806380087262;
        result[1] += 0.03531936199127387;
      }
    }
  } else {
    if ( ( !(data[71].missing != -1) || (data[71].fvalue <= (float)0.9933940470218658447) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.406010851263999939) ) ) {
        result[0] += 0.02;
        result[1] += 0.98;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[67].missing != -1) || (data[67].fvalue <= (float)0.7799553871154785156) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.05494171613827347755) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
      if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.7401399314403533936) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9776426821522548;
        result[1] += 0.022357317847745212;
      }
    } else {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3217779546976089478) ) ) {
        result[0] += 0.1105737316263632;
        result[1] += 0.8894262683736368;
      } else {
        result[0] += 0.9543550326035481;
        result[1] += 0.04564496739645186;
      }
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1384864374995231628) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1372889205813407898) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
        result[0] += 0.9086497099115396;
        result[1] += 0.09135029008846043;
      } else {
        result[0] += 0.26778122072494054;
        result[1] += 0.7322187792750594;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1539440527558326721) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1333329528570175171) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9998138170985722;
        result[1] += 0.00018618290142779012;
      }
    } else {
      result[0] += 0;
      result[1] += 1;
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
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
        result[0] += 0.6477343913134266;
        result[1] += 0.3522656086865734;
      } else {
        result[0] += 0.978093686230317;
        result[1] += 0.021906313769682943;
      }
    }
  }
  if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7815771698951721191) ) ) {
    if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7806620895862579346) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001764542423188686371) ) ) {
        result[0] += 0.004106776180698152;
        result[1] += 0.9958932238193019;
      } else {
        result[0] += 0.5598591549295775;
        result[1] += 0.44014084507042256;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
        result[0] += 2.4443303756935786e-05;
        result[1] += 0.999975556696243;
      } else {
        result[0] += 0.930022492770181;
        result[1] += 0.06997750722981899;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
        result[0] += 0.015748031496062992;
        result[1] += 0.984251968503937;
      } else {
        result[0] += 0.999720087239477;
        result[1] += 0.00027991276052297034;
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3499511033296585083) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2881519943475723267) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001762012368999421597) ) ) {
      if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001774667529389262199) ) ) {
        result[0] += 0.000667779632721202;
        result[1] += 0.9993322203672788;
      } else {
        result[0] += 0.4594594594594595;
        result[1] += 0.5405405405405406;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
        result[0] += 0.5993837954867183;
        result[1] += 0.4006162045132817;
      } else {
        result[0] += 0.9895344975400276;
        result[1] += 0.01046550245997235;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1516199931502342224) ) ) {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7768823504447937012) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4158186167478561401) ) ) {
        result[0] += 0.918862528553699;
        result[1] += 0.08113747144630105;
      } else {
        result[0] += 0.005214995572173571;
        result[1] += 0.9947850044278265;
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3499511033296585083) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1042889803647994995) ) ) {
        result[0] += 0.9976219196967085;
        result[1] += 0.002378080303291401;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.153880678117275238) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1423501297831535339) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
        result[0] += 0.9806816586089991;
        result[1] += 0.01931834139100082;
      } else {
        result[0] += 0.7137919384599392;
        result[1] += 0.2862080615400608;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3110286146402359009) ) ) {
        result[0] += 0.44182238085240394;
        result[1] += 0.558177619147596;
      } else {
        result[0] += 0.3006056370836245;
        result[1] += 0.6993943629163755;
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7138063609600067139) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1949382945895195007) ) ) {
        result[0] += 0.2610929472209248;
        result[1] += 0.7389070527790752;
      } else {
        result[0] += 0.06836207626520648;
        result[1] += 0.9316379237347935;
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2039853483438491821) ) ) {
        result[0] += 0.9619494081493285;
        result[1] += 0.03805059185067152;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3819010108709335327) ) ) {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3681567758321762085) ) ) {
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
        result[0] += 0.9652978431544231;
        result[1] += 0.03470215684557686;
      }
    }
  } else {
    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4284365326166152954) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3586165159940719604) ) ) {
        result[0] += 0.009860891001936961;
        result[1] += 0.990139108998063;
      } else {
        result[0] += 0.43784307394252503;
        result[1] += 0.562156926057475;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2685392946004867554) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1423501297831535339) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2677823752164840698) ) ) {
        result[0] += 0.433206209378525;
        result[1] += 0.566793790621475;
      } else {
        result[0] += 0.9666419447878039;
        result[1] += 0.033358055212196126;
      }
    } else {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3217779546976089478) ) ) {
        result[0] += 0.13389081579322468;
        result[1] += 0.8661091842067753;
      } else {
        result[0] += 0.8914488258750554;
        result[1] += 0.10855117412494461;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1516199931502342224) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1320431455969810486) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7432717978954315186) ) ) {
        result[0] += 0.769443886769725;
        result[1] += 0.23055611323027506;
      } else {
        result[0] += 0.41960823977613704;
        result[1] += 0.580391760223863;
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3499511033296585083) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1042889803647994995) ) ) {
        result[0] += 0.9979767324228629;
        result[1] += 0.0020232675771370764;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1546342372894287109) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.0009847365829640572;
        result[1] += 0.999015263417036;
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8210126757621765137) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.017489484170909897;
        result[1] += 0.9825105158290901;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3834608942270278931) ) ) {
      if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001774667529389262199) ) ) {
        result[0] += 0.03323262839879154;
        result[1] += 0.9667673716012085;
      } else {
        result[0] += 0.9569207239357634;
        result[1] += 0.04307927606423655;
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
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
      if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7432717978954315186) ) ) {
        result[0] += 0.8038577308188464;
        result[1] += 0.19614226918115363;
      } else {
        result[0] += 0.350393595730487;
        result[1] += 0.649606404269513;
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3268404752016067505) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9996733551096594;
        result[1] += 0.00032664489034064394;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3637963384389877319) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
        result[0] += 0.1066847844099029;
        result[1] += 0.8933152155900971;
      } else {
        result[0] += 0.9632510710364476;
        result[1] += 0.03674892896355247;
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1964461356401443481) ) ) {
        result[0] += 0.47015765765765766;
        result[1] += 0.5298423423423423;
      } else {
        result[0] += 0.005758157389635317;
        result[1] += 0.9942418426103646;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
        result[0] += 0.6122130792550888;
        result[1] += 0.3877869207449112;
      } else {
        result[0] += 0.9890843529820009;
        result[1] += 0.010915647017999125;
      }
    }
  }
  if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001822743099182844162) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3600607514381408691) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3234125673770904541) ) ) {
        result[0] += 0.9364161849710982;
        result[1] += 0.06358381502890173;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9518675610530839;
        result[1] += 0.048132438946916045;
      }
    } else {
      if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3877691775560379028) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9955965827647497;
        result[1] += 0.004403417235250272;
      }
    }
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
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
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3132751137018203735) ) ) {
        result[0] += 0.9654540246347751;
        result[1] += 0.034545975365224864;
      } else {
        result[0] += 0.0032751091703056767;
        result[1] += 0.9967248908296943;
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
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
        result[0] += 0.0019665683382497543;
        result[1] += 0.9980334316617503;
      } else {
        result[0] += 0.9641467326870772;
        result[1] += 0.0358532673129228;
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
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
    if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7112472653388977051) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1486023962497711182) ) ) {
        result[0] += 0.888748884338741;
        result[1] += 0.11125111566125899;
      } else {
        result[0] += 0.9979786278311031;
        result[1] += 0.0020213721688968744;
      }
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001759482314810156822) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9587439666721723;
        result[1] += 0.04125603332782764;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1546375900506973267) ) ) {
        result[0] += 0.08333333333333333;
        result[1] += 0.9166666666666666;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.315286591649055481) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9998951232302045;
        result[1] += 0.0001048767697954903;
      }
    }
  }
  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3725434988737106323) ) ) {
        result[0] += 0.3956356736242884;
        result[1] += 0.6043643263757116;
      } else {
        result[0] += 0.0763320407870171;
        result[1] += 0.923667959212983;
      }
    } else {
      if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7112472653388977051) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9636906206719306;
        result[1] += 0.03630937932806945;
      }
    }
  } else {
    result[0] += 0;
    result[1] += 1;
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
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2436483129858970642) ) ) {
        result[0] += 0.6294506612410987;
        result[1] += 0.37054933875890134;
      } else {
        result[0] += 0.9867155645304799;
        result[1] += 0.013284435469520073;
      }
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8191741108894348145) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2407495155930519104) ) ) {
        result[0] += 0.9864952184026881;
        result[1] += 0.013504781597311968;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1371966376900672913) ) ) {
        result[0] += 0.6914133701167545;
        result[1] += 0.3085866298832455;
      } else {
        result[0] += 0.25232395649796463;
        result[1] += 0.7476760435020353;
      }
    }
  }
  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1425671949982643127) ) ) {
        result[0] += 0.8227887889635903;
        result[1] += 0.1772112110364097;
      } else {
        result[0] += 0.1815282435720392;
        result[1] += 0.8184717564279608;
      }
    } else {
      if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4284365326166152954) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9987944051032949;
        result[1] += 0.0012055948967050975;
      }
    }
  }
  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3217779546976089478) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9209545777146912;
        result[1] += 0.07904542228530873;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3499511033296585083) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9992735658691265;
        result[1] += 0.0007264341308734505;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.025720199104398489) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.7575685903500473;
        result[1] += 0.2424314096499527;
      }
    } else {
      if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7650655806064605713) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 0.9660614724803431;
        result[1] += 0.0339385275196569;
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 100;
  result[1] /= 100;
  
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
