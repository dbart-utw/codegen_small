
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9734513274336283;
          result[1] += 0;
          result[2] += 0.02654867256637168;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
          result[0] += 0.11472602739726027;
          result[1] += 0.005136986301369863;
          result[2] += 0.0008561643835616438;
          result[3] += 0.8424657534246576;
          result[4] += 0.036815068493150686;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.001001001001001001;
          result[1] += 0.007007007007007007;
          result[2] += 0.001001001001001001;
          result[3] += 0.7737737737737738;
          result[4] += 0.2172172172172172;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)40.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.009174311926605505;
          result[3] += 0.9908256880733946;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9349593495934959;
          result[1] += 0;
          result[2] += 0.06504065040650407;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)20.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.012285012285012284;
          result[3] += 0;
          result[4] += 0.984029484029484;
          result[5] += 0.0036855036855036856;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0032552083333333335;
          result[3] += 0.9967447916666666;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
          result[0] += 0.9722703639514731;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.02772963604852686;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9953841572364502;
          result[1] += 0;
          result[2] += 0.0006452253325392098;
          result[3] += 0.0039706174310105225;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 0.9998241294407316;
          result[1] += 0;
          result[2] += 0.00017587055926837847;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6900805889961198;
          result[1] += 0.0008954332902198786;
          result[2] += 0.006467018207143568;
          result[3] += 0.3012635558650881;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0012934036414287136;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5;
          result[5] += 0.5;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
          result[0] += 0.07772220084647942;
          result[1] += 0.00038476337052712584;
          result[2] += 0.010003847633705272;
          result[3] += 0.9091958445555983;
          result[4] += 0;
          result[5] += 0.0026933435936898806;
          result[6] += 0;
        } else {
          result[0] += 0.4612068965517242;
          result[1] += 0;
          result[2] += 0.0025862068965517245;
          result[3] += 0.5310344827586208;
          result[4] += 0;
          result[5] += 0.005172413793103449;
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
          result[0] += 0.9834538918005805;
          result[1] += 0.0009096028067743753;
          result[2] += 0.002252349807250834;
          result[3] += 0.013167583488543338;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00021657209685104173;
        } else {
          result[0] += 0.7238095238095238;
          result[1] += 0;
          result[2] += 0.004761904761904762;
          result[3] += 0.2714285714285714;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0.06520198440822111;
          result[1] += 0;
          result[2] += 0.012048192771084338;
          result[3] += 0.9227498228206945;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.21960958296362024;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7803904170363798;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)44) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
          result[0] += 0.9972598569036383;
          result[1] += 0;
          result[2] += 0.00243568275232151;
          result[3] += 0.00030446034404018875;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9674865705400056;
          result[1] += 0;
          result[2] += 0.004523607577042691;
          result[3] += 0.027424370935821316;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005654509471303364;
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
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)1753.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.989010989010989;
          result[1] += 0;
          result[2] += 0.009157509157509158;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0018315018315018315;
        } else {
          result[0] += 0.9980276134122288;
          result[1] += 0;
          result[2] += 0.0019723865877712033;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9974874371859297;
          result[1] += 0;
          result[2] += 0.002512562814070352;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9998679635579419;
          result[1] += 0;
          result[2] += 0.00013203644205800802;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)21.5) ) ) {
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
          result[0] += 0.02448453608247422;
          result[1] += 0.0036082474226804117;
          result[2] += 0.017525773195876285;
          result[3] += 0.935824742268041;
          result[4] += 0.01701030927835051;
          result[5] += 0.001546391752577319;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.005902606984751598;
          result[2] += 0;
          result[3] += 0.1411706837186424;
          result[4] += 0.852926709296606;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
          result[0] += 0.44660194174757284;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5533980582524272;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5941411451398136;
          result[1] += 0;
          result[2] += 0.0026631158455392816;
          result[3] += 0.4021304926764315;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0010652463382157125;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
          result[0] += 0.9715800636267232;
          result[1] += 0;
          result[2] += 0.010604453870625663;
          result[3] += 0.016967126193001062;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000848356309650053;
        } else {
          result[0] += 0.8248587570621468;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.1751412429378531;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9857142857142858;
          result[5] += 0.014285714285714285;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0004428697962798937;
          result[1] += 0.0004428697962798937;
          result[2] += 0.007971656333038087;
          result[3] += 0.9889282550930026;
          result[4] += 0;
          result[5] += 0.0022143489813994687;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.9954059829059829;
          result[1] += 0;
          result[2] += 0.0007478632478632479;
          result[3] += 0.0037393162393162395;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00010683760683760684;
        } else {
          result[0] += 0.5549588256355173;
          result[1] += 0;
          result[2] += 0.010741138560687433;
          result[3] += 0.43322592194772647;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0010741138560687433;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)32.5) ) ) {
          result[0] += 0.9197693775630355;
          result[1] += 0.0007308457509440091;
          result[2] += 0.002111332169393804;
          result[3] += 0.07710422672459295;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002842177920337813;
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)110) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1487) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.03571428571428571;
          result[2] += 0;
          result[3] += 0.9642857142857143;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)117) ) ) {
          result[0] += 0;
          result[1] += 0.07643312101910828;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9235668789808917;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0017094017094017094;
          result[4] += 0.9982905982905983;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0.20114285714285715;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5862857142857143;
          result[4] += 0.21257142857142858;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.07459016393442623;
          result[1] += 0.006557377049180328;
          result[2] += 0.007377049180327869;
          result[3] += 0.5524590163934426;
          result[4] += 0.3590163934426229;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-29) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.4864864864864865;
          result[4] += 0.5135135135135135;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0859375;
          result[4] += 0.9140625;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-7.5) ) ) {
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
          result[0] += 0.989051094890511;
          result[1] += 0;
          result[2] += 0.009124087591240877;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0018248175182481753;
        } else {
          result[0] += 0.9972991222147198;
          result[1] += 0;
          result[2] += 0.0027008777852802163;
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
          result[0] += 0.9987557030277893;
          result[1] += 0;
          result[2] += 0.001244296972210701;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9962264150943396;
          result[5] += 0.0037735849056603774;
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
          result[0] += 0.00026588673225206064;
          result[1] += 0.0061153948417973945;
          result[2] += 0.01675086413187982;
          result[3] += 0.9752725339005583;
          result[4] += 0;
          result[5] += 0.0015953203935123637;
          result[6] += 0;
        } else {
          result[0] += 0.22611464968152867;
          result[1] += 0.0031847133757961785;
          result[2] += 0.006369426751592357;
          result[3] += 0.7643312101910829;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
          result[0] += 0.9828660436137072;
          result[1] += 0;
          result[2] += 0.017133956386292833;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9966151893378464;
          result[1] += 0;
          result[2] += 0.0025386079966151893;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008462026655383964;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
          result[0] += 0.34598088813940414;
          result[1] += 0;
          result[2] += 0.006745362563237774;
          result[3] += 0.6461495222034851;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011242270938729624;
        } else {
          result[0] += 0.6774774774774774;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3225225225225225;
          result[4] += 0;
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
          result[4] += 0.9910714285714286;
          result[5] += 0.008928571428571428;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0006428801028608164;
          result[2] += 0;
          result[3] += 0.9990356798457087;
          result[4] += 0;
          result[5] += 0.0003214400514304082;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)33.5) ) ) {
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
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9986547085201793;
          result[5] += 0.0013452914798206279;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.43478260869565216;
          result[2] += 0.4782608695652174;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.08695652173913043;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.991864406779661;
          result[1] += 0;
          result[2] += 0.006779661016949152;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0013559322033898306;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 0.9996542185338866;
          result[1] += 0;
          result[2] += 0.00034578146611341634;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9989983305509182;
          result[1] += 0;
          result[2] += 0.001001669449081803;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
          result[0] += 0.4829001367989056;
          result[1] += 0.008207934336525308;
          result[2] += 0;
          result[3] += 0.5088919288645691;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9461866992068335;
          result[1] += 0.001098230628431971;
          result[2] += 0.008907870652837097;
          result[3] += 0.04209884075655888;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0017083587553386214;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)1574.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)33.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
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
          result[0] += 0.9982874879588998;
          result[1] += 0;
          result[2] += 0.001712512041100289;
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          result[0] += 0.014586709886547812;
          result[1] += 0.00547001620745543;
          result[2] += 0.011952998379254457;
          result[3] += 0.7844408427876823;
          result[4] += 0.18192868719611022;
          result[5] += 0.0016207455429497568;
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
          result[1] += 0.08035714285714286;
          result[2] += 0;
          result[3] += 0.9196428571428571;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 0.6075268817204301;
          result[1] += 0;
          result[2] += 0.00389321468298109;
          result[3] += 0.3878383388950686;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007415647015202076;
        } else {
          result[0] += 0.9776951672862454;
          result[1] += 0;
          result[2] += 0.0062911066628538745;
          result[3] += 0.016013726050900772;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9686174724342664;
          result[1] += 0;
          result[2] += 0.006785411365564038;
          result[3] += 0.023748939779474135;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008481764206955048;
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
          result[0] += 0.2693032015065913;
          result[1] += 0.003766478342749529;
          result[2] += 0;
          result[3] += 0.7269303201506592;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.07701283547257877;
          result[1] += 0.005834305717619603;
          result[2] += 0;
          result[3] += 0.9171528588098017;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5380577427821522;
          result[1] += 0;
          result[2] += 0.01968503937007874;
          result[3] += 0.442257217847769;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9872122762148338;
          result[1] += 0;
          result[2] += 0.01278772378516624;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9992259462806719;
          result[1] += 0;
          result[2] += 0.0007353510333617153;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 3.870268596640607e-05;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9514851485148514;
          result[1] += 0.0016973125884016972;
          result[2] += 0.0033946251768033945;
          result[3] += 0.041584158415841586;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0018387553041018388;
        } else {
          result[0] += 0;
          result[1] += 0.000634920634920635;
          result[2] += 0.012063492063492066;
          result[3] += 0.9482539682539683;
          result[4] += 0.03904761904761905;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)27) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.01437699680511182;
          result[3] += 0.9488817891373802;
          result[4] += 0.03514376996805112;
          result[5] += 0.001597444089456869;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9925788497217068;
          result[5] += 0.0074211502782931356;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
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
          result[1] += 0.0005993407252022775;
          result[2] += 0;
          result[3] += 0.9346718609529517;
          result[4] += 0.06442912795924483;
          result[5] += 0.00029967036260113877;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)26) ) ) {
          result[0] += 0;
          result[1] += 0.005855562784645413;
          result[2] += 0.008458035133376708;
          result[3] += 0;
          result[4] += 0.9856864020819779;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.945054945054945;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.02197802197802198;
          result[5] += 0.03296703296703297;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          result[0] += 0.9968635085442353;
          result[1] += 0.0003244646333549643;
          result[2] += 0.0023073040594130795;
          result[3] += 0.00028841300742663494;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00021630975556997622;
        } else {
          result[0] += 0.7720588235294118;
          result[1] += 0;
          result[2] += 0.03308823529411765;
          result[3] += 0.1948529411764706;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)27.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.14285714285714285;
          result[1] += 0.7142857142857143;
          result[2] += 0;
          result[3] += 0.14285714285714285;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9645254074784276;
          result[1] += 0;
          result[2] += 0.010067114093959731;
          result[3] += 0.022531160115052733;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0028763183125599234;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.009292351679771264;
          result[3] += 0.9907076483202287;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
          result[0] += 0.33189655172413796;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6681034482758621;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0031007751937984496;
          result[3] += 0;
          result[4] += 0.993798449612403;
          result[5] += 0.0031007751937984496;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 0.9990136851189743;
          result[1] += 0;
          result[2] += 0.0007397361607693256;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00024657872025644185;
        } else {
          result[0] += 0.9721115537848606;
          result[1] += 0;
          result[2] += 0.027888446215139442;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
          result[0] += 0.9997416020671834;
          result[1] += 0;
          result[2] += 0.00025839793281653745;
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
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
          result[0] += 0.3066132264529058;
          result[1] += 0.006012024048096192;
          result[2] += 0.006680026720106881;
          result[3] += 0.6806947227788911;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          result[0] += 0.047933884297520664;
          result[1] += 0.0049586776859504135;
          result[2] += 0.008264462809917356;
          result[3] += 0.8523415977961433;
          result[4] += 0.08099173553719008;
          result[5] += 0.005509641873278237;
          result[6] += 0;
        } else {
          result[0] += 0.9823769913999718;
          result[1] += 0;
          result[2] += 0.005639362752009023;
          result[3] += 0.010432821091216692;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0015508247568024813;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)103.5) ) ) {
          result[0] += 0;
          result[1] += 0.00032690421706440013;
          result[2] += 0;
          result[3] += 0.9996730957829356;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6190476190476191;
          result[3] += 0;
          result[4] += 0.3333333333333333;
          result[5] += 0.047619047619047616;
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
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
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)110) ) ) {
          result[0] += 0.06852925672113865;
          result[1] += 0.0031628887717448603;
          result[2] += 0.0015814443858724301;
          result[3] += 0.9251449657353716;
          result[4] += 0.0015814443858724301;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.007518796992481203;
          result[1] += 0.022556390977443608;
          result[2] += 0;
          result[3] += 0.011278195488721804;
          result[4] += 0.9586466165413534;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.10508474576271186;
          result[4] += 0.8949152542372881;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.01813110181311018;
          result[4] += 0.9818688981868898;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)72) ) ) {
          result[0] += 0.3298611111111111;
          result[1] += 0;
          result[2] += 0.04513888888888889;
          result[3] += 0.625;
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
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
          result[0] += 0.9568345323741008;
          result[1] += 0;
          result[2] += 0.04316546762589928;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
          result[0] += 0.9992579308638921;
          result[1] += 0;
          result[2] += 0.0007420691361078474;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9929922915206727;
          result[1] += 0;
          result[2] += 0.00350385423966363;
          result[3] += 0;
          result[4] += 0.001401541695865452;
          result[5] += 0.002102312543798178;
          result[6] += 0;
        } else {
          result[0] += 0.6614843605404405;
          result[1] += 0.0018508236165093468;
          result[2] += 0.00518230612622617;
          result[3] += 0.3011290024060707;
          result[4] += 0.029243013140847676;
          result[5] += 0.0007403294466037387;
          result[6] += 0.00037016472330186933;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          result[0] += 0.015469613259668509;
          result[1] += 0;
          result[2] += 0.004419889502762431;
          result[3] += 0.7933701657458564;
          result[4] += 0.1867403314917127;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9111969111969112;
          result[1] += 0;
          result[2] += 0.005577005577005577;
          result[3] += 0.07550407550407551;
          result[4] += 0.003861003861003861;
          result[5] += 0.001287001287001287;
          result[6] += 0.002574002574002574;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
          result[0] += 0;
          result[1] += 0.0032590983161325366;
          result[2] += 0.009234111895708854;
          result[3] += 0.9842476914720261;
          result[4] += 0.0032590983161325366;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)71) ) ) {
          result[0] += 0.2755102040816326;
          result[1] += 0;
          result[2] += 0.05782312925170068;
          result[3] += 0.6666666666666666;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)110) ) ) {
          result[0] += 0.029411764705882353;
          result[1] += 0.10294117647058823;
          result[2] += 0;
          result[3] += 0.8676470588235294;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.010830324909747292;
          result[1] += 0.021660649819494584;
          result[2] += 0;
          result[3] += 0.007220216606498195;
          result[4] += 0.9602888086642599;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)95) ) ) {
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0.9966492146596858;
          result[1] += 0;
          result[2] += 0.0031413612565445027;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002094240837696335;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
          result[0] += 0.0006317119393556538;
          result[1] += 0.01010739102969046;
          result[2] += 0.006948831332912192;
          result[3] += 0.9513581806696146;
          result[4] += 0.029058749210360075;
          result[5] += 0.0018951358180669614;
          result[6] += 0;
        } else {
          result[0] += 0.9969683845820702;
          result[1] += 0;
          result[2] += 0.0023819835426591596;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00064963187527068;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
          result[0] += 0.4028942953020135;
          result[1] += 0;
          result[2] += 0.007760067114093961;
          result[3] += 0.5874580536912752;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00188758389261745;
        } else {
          result[0] += 0.14534288638689866;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.1586489252814739;
          result[4] += 0.6929375639713409;
          result[5] += 0.0030706243602865915;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)55) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.25;
          result[5] += 0.75;
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
          result[1] += 0.005307524196066188;
          result[2] += 0.0031220730565095223;
          result[3] += 0.9906337808304714;
          result[4] += 0;
          result[5] += 0.0009366219169528567;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
          result[0] += 0.9971423403870501;
          result[1] += 0.0005064206909025141;
          result[2] += 0.0020980285765961294;
          result[3] += 3.617290649303671e-05;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002170374389582203;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0625;
          result[3] += 0.9375;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-13) ) ) {
          result[0] += 0.4137055837563452;
          result[1] += 0.015228426395939087;
          result[2] += 0;
          result[3] += 0.5710659898477157;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)30) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8461538461538461;
          result[5] += 0.15384615384615385;
          result[6] += 0;
        } else {
          result[0] += 0.00032071840923669016;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9996792815907634;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)26) ) ) {
          result[0] += 0.9585406301824212;
          result[1] += 0;
          result[2] += 0.04145936981757877;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0014641288433382138;
          result[3] += 0;
          result[4] += 0.9985358711566618;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)74) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9877479579929989;
          result[1] += 0;
          result[2] += 0.010501750291715286;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001750291715285881;
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)35) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
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
          result[0] += 0.00039984006397441024;
          result[1] += 0.004798080767692923;
          result[2] += 0.0059976009596161535;
          result[3] += 0.9872051179528188;
          result[4] += 0;
          result[5] += 0.001599360255897641;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)47) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.00291970802919708;
          result[3] += 0.9941605839416059;
          result[4] += 0;
          result[5] += 0.00291970802919708;
          result[6] += 0;
        } else {
          result[0] += 0.99812734082397;
          result[1] += 0;
          result[2] += 0.0018726591760299626;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)41.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          result[0] += 0.9968505439969461;
          result[1] += 0.00019087612139721323;
          result[2] += 0.0005726283641916398;
          result[3] += 0.0023859515174651656;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9998559907834101;
          result[1] += 0;
          result[2] += 0.00014400921658986175;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
          result[0] += 0.9897354915120411;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.010264508487958943;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.40425531914893614;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5957446808510638;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
          result[0] += 0.9583776752985693;
          result[1] += 0.0028378857750975526;
          result[2] += 0.006266997753340429;
          result[3] += 0.03168972448858934;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008277166844034529;
        } else {
          result[0] += 0.7663361874718343;
          result[1] += 0;
          result[2] += 0.004957187922487608;
          result[3] += 0.22690401081568276;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0018026137899954937;
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
          result[2] += 0.009152215799614644;
          result[3] += 0.9908477842003853;
          result[4] += 0;
          result[5] += 0;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9882671480144405;
          result[1] += 0;
          result[2] += 0.010830324909747292;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009025270758122744;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          result[0] += 0.9992798631740031;
          result[1] += 0;
          result[2] += 0.0007201368259969394;
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
          result[0] += 0.032598571872089414;
          result[1] += 0.0034150884818379386;
          result[2] += 0.009934802856255821;
          result[3] += 0.8714684880471903;
          result[4] += 0.08134119838559453;
          result[5] += 0.0012418503570319776;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03708609271523179;
          result[3] += 0;
          result[4] += 0.9602649006622517;
          result[5] += 0.0026490066225165563;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)94.5) ) ) {
          result[0] += 0.9833414200226427;
          result[1] += 0;
          result[2] += 0.0042050784408863015;
          result[3] += 0.011968300177907164;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00048520135856380397;
        } else {
          result[0] += 0.4013816102906146;
          result[1] += 0;
          result[2] += 0.005955216769890424;
          result[3] += 0.5909957122439257;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0016674606955693187;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
          result[0] += 0.10919540229885058;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.4827586206896552;
          result[4] += 0.40804597701149425;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.1452471482889734;
          result[1] += 0.0076045627376425855;
          result[2] += 0;
          result[3] += 0.6935361216730038;
          result[4] += 0.15361216730038021;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
          result[0] += 0.015343562374916611;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.13609072715143428;
          result[4] += 0.8485657104736491;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5982142857142857;
          result[1] += 0;
          result[2] += 0.09821428571428571;
          result[3] += 0.30357142857142855;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)54) ) ) {
          result[0] += 0.004524886877828055;
          result[1] += 0.0022624434389140274;
          result[2] += 0;
          result[3] += 0.9909502262443439;
          result[4] += 0;
          result[5] += 0.0022624434389140274;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.20149253731343283;
          result[3] += 0;
          result[4] += 0.7985074626865671;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9915492957746479;
          result[1] += 0;
          result[2] += 0.008450704225352112;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9994148396660685;
          result[1] += 0;
          result[2] += 0.0005071389560739642;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 7.802137785753296e-05;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.9872251308900524;
          result[1] += 0.0031413612565445027;
          result[2] += 0.0035602094240837698;
          result[3] += 0.004397905759162304;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001675392670157068;
        } else {
          result[0] += 0.43879173290937995;
          result[1] += 0;
          result[2] += 0.006756756756756757;
          result[3] += 0.5538553259141494;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005961844197138314;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0.2423873325213155;
          result[1] += 0.0018270401948842876;
          result[2] += 0;
          result[3] += 0.7210718635809988;
          result[4] += 0.03471376370280147;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.12317666126418152;
          result[1] += 0;
          result[2] += 0.019448946515397084;
          result[3] += 0.23500810372771475;
          result[4] += 0.6223662884927067;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
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
          result[4] += 0.9931506849315068;
          result[5] += 0.00684931506849315;
          result[6] += 0;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          result[0] += 0.5652565256525652;
          result[1] += 0;
          result[2] += 0.012601260126012601;
          result[3] += 0.41764176417641763;
          result[4] += 0;
          result[5] += 0.004500450045004501;
          result[6] += 0;
        } else {
          result[0] += 0.061780738946093275;
          result[1] += 0.004239854633555421;
          result[2] += 0.02483343428225318;
          result[3] += 0.9091459721380981;
          result[4] += 0;
          result[5] += 0;
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
          result[0] += 0.006363191385217817;
          result[1] += 0.0034263338228095936;
          result[2] += 0.008321096426823299;
          result[3] += 0.9818893783651493;
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
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
          result[0] += 0.12383177570093458;
          result[1] += 0;
          result[2] += 0.017523364485981307;
          result[3] += 0.8557242990654206;
          result[4] += 0;
          result[5] += 0.0029205607476635513;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
          result[0] += 0.9605556508317613;
          result[1] += 0.0010289830217801406;
          result[2] += 0.0020579660435602813;
          result[3] += 0.036128737209169384;
          result[4] += 0;
          result[5] += 5.7165723432230034e-05;
          result[6] += 0.0001714971702966901;
        } else {
          result[0] += 0.8701271073764825;
          result[1] += 0;
          result[2] += 0.0019677711003563262;
          result[3] += 0.12732010849332553;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005850130298356645;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4516) ) ) {
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9939839572192514;
          result[1] += 0;
          result[2] += 0.004679144385026738;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001336898395721925;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          result[0] += 0.9996742140413748;
          result[1] += 0;
          result[2] += 0.00032578595862518323;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
          result[0] += 0.6585718714477627;
          result[1] += 0.001860080603492818;
          result[2] += 0.006716957734835176;
          result[3] += 0.3276841996486514;
          result[4] += 0.004236850263511419;
          result[5] += 0.0004133512452206262;
          result[6] += 0.0005166890565257828;
        } else {
          result[0] += 0.434052757793765;
          result[1] += 0;
          result[2] += 0.0051387461459403904;
          result[3] += 0.34772182254196643;
          result[4] += 0.2120589242891401;
          result[5] += 0.0010277492291880781;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0015936254980079682;
          result[1] += 0;
          result[2] += 0.018326693227091632;
          result[3] += 0.9792828685258964;
          result[4] += 0;
          result[5] += 0.0007968127490039841;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
          result[0] += 0.3717105263157895;
          result[1] += 0;
          result[2] += 0.029605263157894735;
          result[3] += 0.5986842105263158;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.13366336633663367;
          result[1] += 0.006930693069306931;
          result[2] += 0;
          result[3] += 0.8594059405940594;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-26) ) ) {
          result[0] += 0;
          result[1] += 0.006128702757916241;
          result[2] += 0;
          result[3] += 0.1675178753830439;
          result[4] += 0.8263534218590398;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)33.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)35.5) ) ) {
          result[0] += 0.9971741434122219;
          result[1] += 0;
          result[2] += 0.00282585658777817;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9993529792365154;
          result[1] += 0;
          result[2] += 0.000588200694076819;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 5.88200694076819e-05;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
          result[0] += 0;
          result[1] += 0.041811846689895474;
          result[2] += 0;
          result[3] += 0.09407665505226481;
          result[4] += 0.8641114982578397;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.028328611898016998;
          result[1] += 0.004815864022662889;
          result[2] += 0.0056657223796034;
          result[3] += 0.9586402266288951;
          result[4] += 0.00141643059490085;
          result[5] += 0.0011331444759206798;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.016027197668771247;
          result[3] += 0.2569208353569694;
          result[4] += 0.725594949004371;
          result[5] += 0.0014570179698882952;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)41) ) ) {
          result[0] += 0.9968135953266065;
          result[1] += 0;
          result[2] += 0.002301292264117543;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008851124092759781;
        } else {
          result[0] += 0.9604221635883905;
          result[1] += 0;
          result[2] += 0.0395778364116095;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
          result[0] += 0.004322200392927309;
          result[1] += 0;
          result[2] += 0.0015717092337917485;
          result[3] += 0.9941060903732809;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9337877312560857;
          result[1] += 0;
          result[2] += 0.010710808179162609;
          result[3] += 0.053554040895813046;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0019474196689386564;
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
          result[0] += 0.007433102081268583;
          result[1] += 0.003964321110009911;
          result[2] += 0.006442021803766105;
          result[3] += 0.9821605550049554;
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
          result[0] += 0.07692307692307693;
          result[1] += 0;
          result[2] += 0.9230769230769231;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
          result[0] += 0.9973032842145816;
          result[1] += 0;
          result[2] += 0.000385245112202639;
          result[3] += 0.0022151593951651744;
          result[4] += 0;
          result[5] += 0;
          result[6] += 9.631127805065975e-05;
        } else {
          result[0] += 0.046762589928057555;
          result[1] += 0.0035971223021582736;
          result[2] += 0.039568345323741004;
          result[3] += 0.9064748201438849;
          result[4] += 0.0035971223021582736;
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
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
          result[0] += 0.8989820565907523;
          result[1] += 0.0010351966873706005;
          result[2] += 0.002933057280883368;
          result[3] += 0.09635955831608005;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006901311249137336;
        } else {
          result[0] += 0.509469696969697;
          result[1] += 0;
          result[2] += 0.003787878787878788;
          result[3] += 0.48674242424242425;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)20.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05442176870748299;
          result[3] += 0;
          result[4] += 0.9047619047619048;
          result[5] += 0.04081632653061224;
          result[6] += 0;
        } else {
          result[0] += 0.028156996587030716;
          result[1] += 0;
          result[2] += 0.014505119453924915;
          result[3] += 0.9539249146757679;
          result[4] += 0;
          result[5] += 0.0034129692832764505;
          result[6] += 0;
        }
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 20;
  result[1] /= 20;
  result[2] /= 20;
  result[3] /= 20;
  result[4] /= 20;
  result[5] /= 20;
  result[6] /= 20;
  
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
