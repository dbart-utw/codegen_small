
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
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.5411049872636795044) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7953100204467773438) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.03026499971747398376) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1049150004982948303) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.3707450032234191895) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.03259499929845333099) ) ) {
          result[0] += 0.625;
          result[1] += 0.375;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1734700053930282593) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.10714285714285714;
          result[1] += 0.8928571428571429;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.8048500120639801025) ) ) {
          result[0] += 0.05714285714285714;
          result[1] += 0.9428571428571428;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.144859999418258667) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2276500016450881958) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.1446250006556510925) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.1277549974620342255) ) ) {
          result[0] += 0.6666666666666666;
          result[1] += 0.3333333333333333;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.6005150079727172852) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.2018250003457069397) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.05970149253731343;
          result[1] += 0.9402985074626866;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2175149992108345032) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.8271999955177307129) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7876749932765960693) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.16666666666666666;
          result[1] += 0.8333333333333334;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.02106499951332807541) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.2644450068473815918) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.06976744186046512;
          result[1] += 0.9302325581395349;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.034782608695652174;
          result[1] += 0.9652173913043478;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.7890950143337249756) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.1875) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.8636363636363636;
          result[1] += 0.13636363636363635;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2276500016450881958) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.005030000116676092148) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.05899999942630529404) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.1082250028848648071) ) ) {
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
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.30750998854637146) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.8111749887466430664) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9811899960041046143) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9280749857425689697) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.7538200020790100098) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.060109289617486336;
          result[1] += 0.9398907103825137;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.3176150023937225342) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1319650039076805115) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.1702300012111663818) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.8777700066566467285) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.3904750049114227295) ) ) {
          result[0] += 0.9117647058823529;
          result[1] += 0.08823529411764706;
        } else {
          result[0] += 0.2;
          result[1] += 0.8;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2070500031113624573) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.450880005955696106) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.9166666666666666;
          result[1] += 0.08333333333333333;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
          result[0] += 0.07692307692307693;
          result[1] += 0.9230769230769231;
        } else {
          result[0] += 0.7142857142857143;
          result[1] += 0.2857142857142857;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.435760006308555603) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.03702500090003013611) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.4783550053834915161) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.9994949996471405029) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6475049853324890137) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9901649951934814453) ) ) {
          result[0] += 0.04487179487179487;
          result[1] += 0.9551282051282052;
        } else {
          result[0] += 0.6666666666666666;
          result[1] += 0.3333333333333333;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.1231449991464614868) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.8181799948215484619) ) ) {
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
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.186569996178150177) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.73983001708984375) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.4617750048637390137) ) ) {
          result[0] += 0.9615384615384616;
          result[1] += 0.038461538461538464;
        } else {
          result[0] += 0.14285714285714285;
          result[1] += 0.8571428571428571;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.1443899944424629211) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.707574993371963501) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2639150023460388184) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.1111111111111111;
          result[1] += 0.8888888888888888;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.7110999822616577148) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3636350035667419434) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.5553999990224838257) ) ) {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.05151499994099140167) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9322450160980224609) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7947549819946289062) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1071449965238571167) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.08743169398907104;
          result[1] += 0.912568306010929;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.2976800054311752319) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.210155002772808075) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02598000038415193558) ) ) {
          result[0] += 0.9047619047619048;
          result[1] += 0.09523809523809523;
        } else {
          result[0] += 0.2619047619047619;
          result[1] += 0.7380952380952381;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.4558800011873245239) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.999664992094039917) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.1967850029468536377) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.5082300007343292236) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.6329499930143356323) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.2995750010013580322) ) ) {
          result[0] += 0.9166666666666666;
          result[1] += 0.08333333333333333;
        } else {
          result[0] += 0.25;
          result[1] += 0.75;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2356900051236152649) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4330900013446807861) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7966699898242950439) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.969765007495880127) ) ) {
          result[0] += 0.8;
          result[1] += 0.2;
        } else {
          result[0] += 0.07100591715976332;
          result[1] += 0.9289940828402367;
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3778600096702575684) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2276500016450881958) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.01733000017702579498) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.00370500003919005394) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.5;
          result[1] += 0.5;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.5121950004249811172) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.027777777777777776;
          result[1] += 0.9722222222222222;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9622650146484375) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.03757499903440475464) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9872500002384185791) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.06349206349206349;
          result[1] += 0.9365079365079365;
        }
      }
    }
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9236549735069274902) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9361749887466430664) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3717949949204921722) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.4133149832487106323) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.01020500017330050468) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.04143999889492988586) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.14705882352941177;
          result[1] += 0.8529411764705882;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.7696700096130371094) ) ) {
          result[0] += 0.06976744186046512;
          result[1] += 0.9302325581395349;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.3176150023937225342) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9667899906635284424) ) ) {
          result[0] += 0.2;
          result[1] += 0.8;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9003050029277801514) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.166665002703666687) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.1666649878025054932) ) ) {
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4330900013446807861) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.9320099949836730957) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.75;
          result[1] += 0.25;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2193350046873092651) ) ) {
          result[0] += 0.7142857142857143;
          result[1] += 0.2857142857142857;
        } else {
          result[0] += 0.07878787878787878;
          result[1] += 0.9212121212121213;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.1321949958801269531) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.5200000107288360596) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.05564500018954277039) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.08936500176787376404) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.9047619047619048;
          result[1] += 0.09523809523809523;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.3967199996113777161) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.9143399894237518311) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.8275400102138519287) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.9534899890422821045) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.6666666666666666;
          result[1] += 0.3333333333333333;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2175149992108345032) ) ) {
          result[0] += 0.7142857142857143;
          result[1] += 0.2857142857142857;
        } else {
          result[0] += 0.06521739130434782;
          result[1] += 0.9347826086956522;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4572850018739700317) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.4589999914169311523) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.652225002646446228) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.5) ) ) {
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
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9664799869060516357) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.9269399940967559814) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.2137000039219856262) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.03030500002205371857) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.05830500088632106781) ) ) {
          result[0] += 0.5;
          result[1] += 0.5;
        } else {
          result[0] += 0.9545454545454546;
          result[1] += 0.045454545454545456;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1506249979138374329) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.125;
          result[1] += 0.875;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1506249979138374329) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.5487850010395050049) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.9578700065612792969) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.8888888888888888;
          result[1] += 0.1111111111111111;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.4707150012254714966) ) ) {
          result[0] += 0.5833333333333334;
          result[1] += 0.4166666666666667;
        } else {
          result[0] += 0.06802721088435375;
          result[1] += 0.9319727891156463;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3636350035667419434) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.6184649765491485596) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.5642800033092498779) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.125;
          result[1] += 0.875;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.6283050179481506348) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.9987249970436096191) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.9741150140762329102) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.061224489795918366;
          result[1] += 0.9387755102040817;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.8648650050163269043) ) ) {
          result[0] += 0.36363636363636365;
          result[1] += 0.6363636363636364;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.8433600068092346191) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.3333350121974945068) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.7876549959182739258) ) ) {
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
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3787900060415267944) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.1847000047564506531) ) ) {
          result[0] += 0.8571428571428571;
          result[1] += 0.14285714285714285;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.3359899967908859253) ) ) {
          result[0] += 0.8260869565217391;
          result[1] += 0.17391304347826086;
        } else {
          result[0] += 0.06451612903225806;
          result[1] += 0.9354838709677419;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.8071799874305725098) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3638900071382522583) ) ) {
          result[0] += 0.7142857142857143;
          result[1] += 0.2857142857142857;
        } else {
          result[0] += 0.02654867256637168;
          result[1] += 0.9734513274336283;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02598000038415193558) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.1801750054582953453) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2013400010764598846) ) ) {
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
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.7481950074434280396) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9352599978446960449) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.01215500012040138245) ) ) {
          result[0] += 0.3055555555555556;
          result[1] += 0.6944444444444444;
        } else {
          result[0] += 0.07894736842105263;
          result[1] += 0.9210526315789473;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9329150021076202393) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.7274450063705444336) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.0842399895191192627) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4454549998044967651) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.1000450029969215393) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.1230800040066242218) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.7857142857142857;
          result[1] += 0.21428571428571427;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.6911749839782714844) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.980390012264251709) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.08227848101265822;
          result[1] += 0.9177215189873418;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.359164997935295105) ) ) {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7555849850177764893) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.1527649983763694763) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.1446550041437149048) ) ) {
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
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.9970000088214874268) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
          result[0] += 0.05194805194805195;
          result[1] += 0.948051948051948;
        } else {
          result[0] += 0.75;
          result[1] += 0.25;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.7272749990224838257) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.37037037037037035;
          result[1] += 0.6296296296296297;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0) ) ) {
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2356900051236152649) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.2128300070762634277) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2013400010764598846) ) ) {
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
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8927049934864044189) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.125) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.969765007495880127) ) ) {
          result[0] += 0.875;
          result[1] += 0.125;
        } else {
          result[0] += 0.056179775280898875;
          result[1] += 0.9438202247191011;
        }
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9901649951934814453) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.186569996178150177) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.4804150164127349854) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.01504000020213425159) ) ) {
          result[0] += 0.6923076923076923;
          result[1] += 0.3076923076923077;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.5317899882793426514) ) ) {
          result[0] += 0.02564102564102564;
          result[1] += 0.9743589743589743;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.1566650066524744034) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.3928650021553039551) ) ) {
          result[0] += 0.14285714285714285;
          result[1] += 0.8571428571428571;
        } else {
          result[0] += 0.008547008547008548;
          result[1] += 0.9914529914529915;
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.169290006160736084) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.07319000363349914551) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.1996299996972084045) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
        }
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.4465750008821487427) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.93334999680519104) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.75;
          result[1] += 0.25;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.05153499916195869446) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3585000038146972656) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.1647649966180324554) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.8571428571428571;
          result[1] += 0.14285714285714285;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.05236999690532684326) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.9955250024795532227) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9946700036525726318) ) ) {
          result[0] += 0.016129032258064516;
          result[1] += 0.9838709677419355;
        } else {
          result[0] += 0.16666666666666666;
          result[1] += 0.8333333333333334;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.09296499937772750854) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.798739999532699585) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.04545500129461288452) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.9387849867343902588) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.2222222222222222;
          result[1] += 0.7777777777777778;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.06246500089764595032) ) ) {
          result[0] += 0.7777777777777778;
          result[1] += 0.2222222222222222;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1756750009953975677) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.3148950040340423584) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.7584249973297119141) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.75;
          result[1] += 0.25;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.9021950066089630127) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.969765007495880127) ) ) {
          result[0] += 0.8571428571428571;
          result[1] += 0.14285714285714285;
        } else {
          result[0] += 0.09714285714285714;
          result[1] += 0.9028571428571428;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.7297500073909759521) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.5714285714285714;
          result[1] += 0.42857142857142855;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2175149992108345032) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.2272749990224838257) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.1266250014305114746) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9622650146484375) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
          result[0] += 0.6875;
          result[1] += 0.3125;
        } else {
          result[0] += 0.0547945205479452;
          result[1] += 0.9452054794520548;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.04778499901294708252) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.01247000042349100113) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.8571450114250183105) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.8;
          result[1] += 0.2;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8641549944877624512) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.1660399958491325378) ) ) {
          result[0] += 0.8;
          result[1] += 0.2;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9605999886989593506) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2874100059270858765) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.1576399952173233032) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2207050025463104248) ) ) {
          result[0] += 0.8888888888888888;
          result[1] += 0.1111111111111111;
        } else {
          result[0] += 0.05357142857142857;
          result[1] += 0.9464285714285714;
        }
      }
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1644600033760070801) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1863349974155426025) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8004899919033050537) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4656949937343597412) ) ) {
          result[0] += 0.25;
          result[1] += 0.75;
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
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8057949841022491455) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9236549735069274902) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9322450160980224609) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.014388489208633094;
          result[1] += 0.9856115107913669;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.7955650091171264648) ) ) {
          result[0] += 0.8571428571428571;
          result[1] += 0.14285714285714285;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2356900051236152649) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.02491500135511159897) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.03230000101029872894) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.02219000086188316345) ) ) {
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
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9236549735069274902) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.08771929824561403;
          result[1] += 0.9122807017543859;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.9206700026988983154) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.5071250000037252903) ) ) {
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
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.05153499916195869446) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.06296000070869922638) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3204950094223022461) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.2278849929571151733) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.8177800178527832031) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.1022450029850006104) ) ) {
          result[0] += 0.25;
          result[1] += 0.75;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-5.999999848427250981e-05) ) ) {
          result[0] += 0.9285714285714286;
          result[1] += 0.07142857142857142;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8431349992752075195) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9069299995899200439) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.7406799942255020142) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1898349970579147339) ) ) {
          result[0] += 0.4666666666666667;
          result[1] += 0.5333333333333333;
        } else {
          result[0] += 0.031496062992125984;
          result[1] += 0.968503937007874;
        }
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 30;
  result[1] /= 30;
  
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
