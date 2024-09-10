
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
  return 34;
}
const char* get_threshold_type(void) {
  return "float32";
}
const char* get_leaf_output_type(void) {
  return "float32";
}


void predict(union Entry* data, int pred_margin, float* result) {
  unsigned int tmp;
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.05869499966502189636) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.1295600049197673798) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.569690018892288208) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.4964399999007582664) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.05595500022172927856) ) ) {
          result[0] += 0.7272727272727273;
          result[1] += 0.2727272727272727;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.8957149982452392578) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.9763750135898590088) ) ) {
          result[0] += 0.07692307692307693;
          result[1] += 0.9230769230769231;
        } else {
          result[0] += 0.75;
          result[1] += 0.25;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4454549998044967651) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.5859850049018859863) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.111765000969171524) ) ) {
          result[0] += 0.5;
          result[1] += 0.5;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.02786999940872192383) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7472899854183197021) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.1305799968540668488) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.5;
          result[1] += 0.5;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1480599939823150635) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.05925925925925926;
          result[1] += 0.9407407407407408;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6457199752330780029) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7472899854183197021) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.04143999889492988586) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.09944751381215469;
          result[1] += 0.9005524861878453;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5911200046539306641) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.8773599863052368164) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.2170549953734735027) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.5006399999838322401) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1506249979138374329) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9872500002384185791) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.0591999981552362442) ) ) {
          result[0] += 0.40350877192982454;
          result[1] += 0.5964912280701754;
        } else {
          result[0] += 0.05303030303030303;
          result[1] += 0.946969696969697;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.186569996178150177) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.4131650030612945557) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.02071500010788440704) ) ) {
          result[0] += 0.9629629629629629;
          result[1] += 0.037037037037037035;
        } else {
          result[0] += 0.625;
          result[1] += 0.375;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1734700053930282593) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.7558549940586090088) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.00464499741792678833) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.05185185185185185;
          result[1] += 0.9481481481481482;
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.9387849867343902588) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.294335000216960907) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.6194450110197067261) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.2727272727272727;
          result[1] += 0.7272727272727273;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.186569996178150177) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.01812000013887882233) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.6278200149536132812) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1904850006103515625) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.875;
          result[1] += 0.125;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.07461000233888626099) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.9297600090503692627) ) ) {
          result[0] += 0.034482758620689655;
          result[1] += 0.9655172413793104;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.06219499930739402771) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.6118900179862976074) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.8594799935817718506) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7745099961757659912) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
          result[0] += 0.024;
          result[1] += 0.976;
        } else {
          result[0] += 0.55;
          result[1] += 0.45;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.0935849994421005249) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2639899998903274536) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.1107100024819374084) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.003234999952837824821) ) ) {
          result[0] += 0.8;
          result[1] += 0.2;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.08333499729633331299) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.9898999929428100586) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6642700135707855225) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.6958950012922286987) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2364600002765655518) ) ) {
          result[0] += 0.8333333333333334;
          result[1] += 0.16666666666666666;
        } else {
          result[0] += 0.03418803418803419;
          result[1] += 0.9658119658119658;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9848699867725372314) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.5868500024080276489) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.07053999975323677063) ) ) {
          result[0] += 0.4444444444444444;
          result[1] += 0.5555555555555556;
        } else {
          result[0] += 0.9615384615384616;
          result[1] += 0.038461538461538464;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.01920999959111213684) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.03277999907732009888) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.1111111111111111;
          result[1] += 0.8888888888888888;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03106500022113323212) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.9938099980354309082) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8250949978828430176) ) ) {
          result[0] += 0.06;
          result[1] += 0.94;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.2642100006341934204) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.24;
          result[1] += 0.76;
        }
      }
    }
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.9081700146198272705) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.719300001859664917) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6255199909210205078) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1897749975323677063) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.144710000604391098) ) ) {
          result[0] += 0.14285714285714285;
          result[1] += 0.8571428571428571;
        } else {
          result[0] += 0.9090909090909091;
          result[1] += 0.09090909090909091;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.6407299935817718506) ) ) {
          result[0] += 0.8333333333333334;
          result[1] += 0.16666666666666666;
        } else {
          result[0] += 0.05847953216374269;
          result[1] += 0.9415204678362573;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.00147999997716397047) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2284099943935871124) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.9906100034713745117) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7820699810981750488) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9088949859142303467) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.05844155844155844;
          result[1] += 0.9415584415584416;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.01240999996662139893) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.5316449999809265137) ) ) {
          result[0] += 0.7777777777777778;
          result[1] += 0.2222222222222222;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.7949300110340118408) ) ) {
          result[0] += 0.1;
          result[1] += 0.9;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3892399966716766357) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.2432349994778633118) ) ) {
          result[0] += 0.5;
          result[1] += 0.5;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.1254899986088275909) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3787900060415267944) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.1111111111111111;
          result[1] += 0.8888888888888888;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.9994949996471405029) ) ) {
          result[0] += 0.028368794326241134;
          result[1] += 0.9716312056737588;
        } else {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.6929800212383270264) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.481244996190071106) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7547650039196014404) ) ) {
          result[0] += 0.2631578947368421;
          result[1] += 0.7368421052631579;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1930849999189376831) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.983574986457824707) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9105649888515472412) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
          result[0] += 0.9166666666666666;
          result[1] += 0.08333333333333333;
        } else {
          result[0] += 0.0625;
          result[1] += 0.9375;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.001335000037215650082) ) ) {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
        } else {
          result[0] += 0.9473684210526315;
          result[1] += 0.05263157894736842;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.1579699963331222534) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2318000048398971558) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.2282350063323974609) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.08397000283002853394) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.9540899991989135742) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.8770299851894378662) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.0975609756097561;
          result[1] += 0.9024390243902439;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.4012749940156936646) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.03905000165104866028) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6351750046014785767) ) ) {
          result[0] += 0.7142857142857143;
          result[1] += 0.2857142857142857;
        } else {
          result[0] += 0.030534351145038167;
          result[1] += 0.9694656488549618;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.1598850004374980927) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.08145000040531158447) ) ) {
          result[0] += 0.8;
          result[1] += 0.2;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.1599700003862380981) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.2;
          result[1] += 0.8;
        }
      }
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5490350127220153809) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2175149992108345032) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.9985449910163879395) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.4558250010013580322) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.368479996919631958) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.1766200028359889984) ) ) {
          result[0] += 0.9615384615384616;
          result[1] += 0.038461538461538464;
        } else {
          result[0] += 0.5;
          result[1] += 0.5;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8053750097751617432) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.0718562874251497;
          result[1] += 0.9281437125748503;
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.02606499940156936646) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.1457449980080127716) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1369899995625019073) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.01479499958804808557) ) ) {
          result[0] += 0.75;
          result[1] += 0.25;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.01614999957382678986) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1976150050759315491) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.03225806451612903;
          result[1] += 0.967741935483871;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.8361499905586242676) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.8648650050163269043) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2175149992108345032) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.1840849965810775757) ) ) {
          result[0] += 0.6666666666666666;
          result[1] += 0.3333333333333333;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.13647499680519104) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.0625;
          result[1] += 0.9375;
        }
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9329150021076202393) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.3811150118708610535) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.333334997296333313) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8339450061321258545) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6128349900245666504) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.4539999961853027344) ) ) {
          result[0] += 0.3684210526315789;
          result[1] += 0.631578947368421;
        } else {
          result[0] += 0.050724637681159424;
          result[1] += 0.9492753623188406;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.3675100132822990417) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.1782099902629852295) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.4;
          result[1] += 0.6;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.8822450041770935059) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.5) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.6738300025463104248) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.5476349890232086182) ) ) {
          result[0] += 0.8;
          result[1] += 0.2;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9708600044250488281) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.16393442622950818;
          result[1] += 0.8360655737704918;
        }
      }
    }
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9236549735069274902) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.7095649987459182739) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.1801149938255548477) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.611110001802444458) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1071449965238571167) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.714935004711151123) ) ) {
          result[0] += 0.06358381502890173;
          result[1] += 0.9364161849710982;
        } else {
          result[0] += 0.75;
          result[1] += 0.25;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.877200007438659668) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.5916950106620788574) ) ) {
          result[0] += 0.8333333333333334;
          result[1] += 0.16666666666666666;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5490350127220153809) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.7282049953937530518) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.03996500000357627869) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.05730999913066625595) ) ) {
          result[0] += 0.875;
          result[1] += 0.125;
        } else {
          result[0] += 0.11363636363636363;
          result[1] += 0.8863636363636364;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2230500057339668274) ) ) {
          result[0] += 0.6666666666666666;
          result[1] += 0.3333333333333333;
        } else {
          result[0] += 0.03333333333333333;
          result[1] += 0.9666666666666667;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.06134499981999397278) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.1449100053869187832) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.3910350054502487183) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.7272749990224838257) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.655910000205039978) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.03717499971389770508) ) ) {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.1304000020027160645) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.1578249968588352203) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.01020500017330050468) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.4869400002062320709) ) ) {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8646399974822998047) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7472899854183197021) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03106500022113323212) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.07926829268292683;
          result[1] += 0.9207317073170732;
        }
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.185340002179145813) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2816650047898292542) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.3867100030183792114) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8004899919033050537) ) ) {
          result[0] += 0.16;
          result[1] += 0.84;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.995559990406036377) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.3928650021553039551) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.156714998185634613) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2166000008583068848) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.01680672268907563;
          result[1] += 0.9831932773109243;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.8253200054168701172) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.8726750016212463379) ) ) {
          result[0] += 0.6666666666666666;
          result[1] += 0.3333333333333333;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.2732999995350837708) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.16666666666666666;
          result[1] += 0.8333333333333334;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0002000000094994902611) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.1181800030171871185) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.0001199999969685450196) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-3.999999898951500654e-05) ) ) {
          result[0] += 0.2;
          result[1] += 0.8;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.9485099911689758301) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.1435800008475780487) ) ) {
          result[0] += 0.6666666666666666;
          result[1] += 0.3333333333333333;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.9818300008773803711) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.6733799874782562256) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.685859978199005127) ) ) {
          result[0] += 0.17391304347826086;
          result[1] += 0.8260869565217391;
        } else {
          result[0] += 0.7333333333333333;
          result[1] += 0.26666666666666666;
        }
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.591210000216960907) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.5594250112771987915) ) ) {
          result[0] += 0.05263157894736842;
          result[1] += 0.9473684210526315;
        } else {
          result[0] += 0.8888888888888888;
          result[1] += 0.1111111111111111;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1482700034976005554) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.2300699949264526367) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2175149992108345032) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.9905999898910522461) ) ) {
          result[0] += 0.5;
          result[1] += 0.5;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9352599978446960449) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.06779661016949153;
          result[1] += 0.9322033898305084;
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7903949916362762451) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1266599968075752258) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6475049853324890137) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3778600096702575684) ) ) {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
        } else {
          result[0] += 0.06837606837606838;
          result[1] += 0.9316239316239316;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.2623949944972991943) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9475100040435791016) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.1174199990928173065) ) ) {
          result[0] += 0.6666666666666666;
          result[1] += 0.3333333333333333;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8057949841022491455) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.983574986457824707) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
          result[0] += 0.7857142857142857;
          result[1] += 0.21428571428571427;
        } else {
          result[0] += 0.09090909090909091;
          result[1] += 0.9090909090909091;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8641549944877624512) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.777779996395111084) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.444444999098777771) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.4468450099229812622) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.2119949990883469582) ) ) {
          result[0] += 0.5;
          result[1] += 0.5;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8339450061321258545) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2175149992108345032) ) ) {
          result[0] += 0.8333333333333334;
          result[1] += 0.16666666666666666;
        } else {
          result[0] += 0.0718562874251497;
          result[1] += 0.9281437125748503;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.6044850051403045654) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.2857142857142857;
          result[1] += 0.7142857142857143;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9361749887466430664) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.9626800119876861572) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.9443449974060058594) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.1558800041675567627) ) ) {
          result[0] += 0.4634146341463415;
          result[1] += 0.5365853658536586;
        } else {
          result[0] += 0.09219858156028368;
          result[1] += 0.9078014184397163;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.4289449974894523621) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.375;
          result[1] += 0.625;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.6397249996662139893) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.2128300070762634277) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.199444994330406189) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2366849929094314575) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8057949841022491455) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.9988799989223480225) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.7493149936199188232) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.030864197530864196;
          result[1] += 0.9691358024691358;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5665400028228759766) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.375;
          result[1] += 0.625;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9361749887466430664) ) ) {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.1348499953746795654) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.3265700042247772217) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.9550499916076660156) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.9031099975109100342) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1408099979162216187) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.1321949958801269531) ) ) {
          result[0] += 0.5111111111111111;
          result[1] += 0.4888888888888889;
        } else {
          result[0] += 0.09375;
          result[1] += 0.90625;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.7872700095176696777) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.6468600034713745117) ) ) {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.7476750016212463379) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.06670500338077545166) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.1570950048044323921) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.1984750032424926758) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9622650146484375) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.9945150017738342285) ) ) {
          result[0] += 0.08670520231213873;
          result[1] += 0.9132947976878613;
        } else {
          result[0] += 0.7777777777777778;
          result[1] += 0.2222222222222222;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1930849999189376831) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7953100204467773438) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9708600044250488281) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.5729900002479553223) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.11891891891891893;
          result[1] += 0.8810810810810811;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0002000000094994902611) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.05564500018954277039) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.884020000696182251) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.2517250021919608116) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.9538150131702423096) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.5916050001978874207) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.075;
          result[1] += 0.925;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.07389500364661216736) ) ) {
          result[0] += 0.6;
          result[1] += 0.4;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.5400600135326385498) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9848699867725372314) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.89342498779296875) ) ) {
          result[0] += 0.06542056074766354;
          result[1] += 0.9345794392523364;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7183150053024291992) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.391304347826087;
          result[1] += 0.6086956521739131;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.006755000111297704279) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.001239998266100883484) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.9285149872303009033) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.666665002703666687) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.8744599819183349609) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.1515449956059455872) ) ) {
          result[0] += 0.21052631578947367;
          result[1] += 0.7894736842105263;
        } else {
          result[0] += 0.021897810218978103;
          result[1] += 0.9781021897810219;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.5071250000037252903) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.5833333333333334;
          result[1] += 0.4166666666666667;
        }
      }
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5490350127220153809) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1578199975192546844) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.8211749792098999023) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.9417299926280975342) ) ) {
          result[0] += 0.7;
          result[1] += 0.3;
        } else {
          result[0] += 0.10465116279069768;
          result[1] += 0.8953488372093024;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2874100059270858765) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.1264899969100952148) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.1547600030899047852) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.05153499916195869446) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1165399998426437378) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.9157100021839141846) ) ) {
          result[0] += 0.1794871794871795;
          result[1] += 0.8205128205128205;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.9297600090503692627) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6586450189352035522) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.046875;
          result[1] += 0.953125;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.1351349949836730957) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.25;
          result[1] += 0.75;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2276500016450881958) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3431649953126907349) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.3613050058484077454) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.3265450000762939453) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.152695000171661377) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.9538150131702423096) ) ) {
          result[0] += 0.014492753623188406;
          result[1] += 0.9855072463768116;
        } else {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7287800014019012451) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.09672499820590019226) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.5454550012946128845) ) ) {
          result[0] += 0.21052631578947367;
          result[1] += 0.7894736842105263;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9901649951934814453) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.1578249968588352203) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.1431300044059753418) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7555849850177764893) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
          result[0] += 0.9166666666666666;
          result[1] += 0.08333333333333333;
        } else {
          result[0] += 0.039735099337748346;
          result[1] += 0.9602649006622517;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.372714996337890625) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.2478550001978874207) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5176050066947937012) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.37037037037037035;
          result[1] += 0.6296296296296297;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.007985000032931566238) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.7946949899196624756) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.2008300051093101501) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.3500999957323074341) ) ) {
          result[0] += 0.8;
          result[1] += 0.2;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.001455000019632279873) ) ) {
          result[0] += 0.7692307692307693;
          result[1] += 0.23076923076923078;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.8246200084686279297) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1260650008916854858) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.3321350067853927612) ) ) {
          result[0] += 0.8888888888888888;
          result[1] += 0.1111111111111111;
        } else {
          result[0] += 0.2;
          result[1] += 0.8;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2166000008583068848) ) ) {
          result[0] += 0.8;
          result[1] += 0.2;
        } else {
          result[0] += 0.0547945205479452;
          result[1] += 0.9452054794520548;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.3322200104594230652) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.9482350051403045654) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2276500016450881958) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.2477700039744377136) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.7677499949932098389) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.999664992094039917) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.9285149872303009033) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9329150021076202393) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.06578947368421052;
          result[1] += 0.9342105263157895;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.01601999998092651367) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.2077750042080879211) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.875;
          result[1] += 0.125;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8646399974822998047) ) ) {
          result[0] += 0.2222222222222222;
          result[1] += 0.7777777777777778;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8339450061321258545) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.04143999889492988586) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.9483700096607208252) ) ) {
          result[0] += 0.75;
          result[1] += 0.25;
        } else {
          result[0] += 0.06172839506172839;
          result[1] += 0.9382716049382716;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.6984350085258483887) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.6734299957752227783) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.3888888888888889;
          result[1] += 0.6111111111111112;
        }
      }
    }
  } else {
    result[0] += 1;
    result[1] += 0;
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.969765007495880127) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8900200128555297852) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9361749887466430664) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.5977799966931343079) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.5;
          result[1] += 0.5;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
          result[0] += 0.75;
          result[1] += 0.25;
        } else {
          result[0] += 0.08791208791208792;
          result[1] += 0.9120879120879121;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.2623949944972991943) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4657850004732608795) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.08850499987602233887) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.4888650178909301758) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.0008299999753944575787) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.06071499921381473541) ) ) {
          result[0] += 0.4444444444444444;
          result[1] += 0.5555555555555556;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.5991899967193603516) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.045454545454545456;
          result[1] += 0.9545454545454546;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2591699957847595215) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.321135006844997406) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8057949841022491455) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.05714285714285714;
          result[1] += 0.9428571428571428;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.08693499863147735596) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.2044349908828735352) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2927449941635131836) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9811899960041046143) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.8795999884605407715) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.08850499987602233887) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.138994995504617691) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.6256049871444702148) ) ) {
          result[0] += 0.15789473684210525;
          result[1] += 0.8421052631578947;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9322450160980224609) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.821510016918182373) ) ) {
          result[0] += 0.5;
          result[1] += 0.5;
        } else {
          result[0] += 0.04929577464788732;
          result[1] += 0.9507042253521126;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02598000038415193558) ) ) {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.3202600032091140747) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.3384300023317337036) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.006680000107735395432) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2913199961185455322) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.983574986457824707) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.9987249970436096191) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-0.1376650054007768631) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.047337278106508875;
          result[1] += 0.9526627218934911;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.1428550034761428833) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.2608695652173913;
          result[1] += 0.7391304347826086;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.0698550008237361908) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.166665002703666687) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-0.2315250039100646973) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.0532249988173134625) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.9500699937343597412) ) ) {
          result[0] += 0.07692307692307693;
          result[1] += 0.9230769230769231;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.8071799874305725098) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2621800005435943604) ) ) {
          result[0] += 0.032520325203252036;
          result[1] += 0.967479674796748;
        } else {
          result[0] += 0.34782608695652173;
          result[1] += 0.6521739130434783;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4330900013446807861) ) ) {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.8489600121974945068) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.9504149854183197021) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.02830000035464763641) ) ) {
          result[0] += 0.5;
          result[1] += 0.5;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7664049863815307617) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1500599980354309082) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.2099249958992004395) ) ) {
          result[0] += 0.8;
          result[1] += 0.2;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.7599250078201293945) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.05521472392638037;
          result[1] += 0.9447852760736196;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6057699918746948242) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3303000032901763916) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.126440003514289856) ) ) {
          result[0] += 0.8484848484848485;
          result[1] += 0.15151515151515152;
        } else {
          result[0] += 0.1568627450980392;
          result[1] += 0.8431372549019608;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.7047049999237060547) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.047244094488188976;
          result[1] += 0.952755905511811;
        }
      }
    }
  }
  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.9217649996280670166) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4965550005435943604) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.05660500004887580872) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.96096000075340271) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2630599960684776306) ) ) {
          result[0] += 0.9473684210526315;
          result[1] += 0.05263157894736842;
        } else {
          result[0] += 0.075;
          result[1] += 0.925;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.07096999883651733398) ) ) {
          result[0] += 0.35;
          result[1] += 0.65;
        } else {
          result[0] += 0.9230769230769231;
          result[1] += 0.07692307692307693;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.6912750005722045898) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.8854849934577941895) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.2394700050354003906) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6475049853324890137) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.2920700013637542725) ) ) {
          result[0] += 0.24285714285714285;
          result[1] += 0.7571428571428571;
        } else {
          result[0] += 0.0392156862745098;
          result[1] += 0.9607843137254902;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.8259650170803070068) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.719300001859664917) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.04495000839233398438) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.6974750012159347534) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
          result[0] += 0.3076923076923077;
          result[1] += 0.6923076923076923;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.2099249958992004395) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.4912099838256835938) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.9285149872303009033) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.6253200173377990723) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9352599978446960449) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1071449965238571167) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.06097560975609756;
          result[1] += 0.9390243902439024;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.9955250024795532227) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.2445850074291229248) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.001399999950081110001) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2276500016450881958) ) ) {
          result[0] += 0.875;
          result[1] += 0.125;
        } else {
          result[0] += 0.045454545454545456;
          result[1] += 0.9545454545454546;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.5415849983692169189) ) ) {
          result[0] += 0.96875;
          result[1] += 0.03125;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9329150021076202393) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3129300028085708618) ) ) {
          result[0] += 0.8;
          result[1] += 0.2;
        } else {
          result[0] += 0.0743801652892562;
          result[1] += 0.9256198347107438;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2876650094985961914) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.6184649765491485596) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.2222222222222222;
          result[1] += 0.7777777777777778;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
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
    

    FILE* file = fopen("./codegen/dataset_52/split_3/test_data.csv", "r");
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
