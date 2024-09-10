
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.04143999889492988586) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8057949841022491455) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8646399974822998047) ) ) {
          result[0] += 0.03664921465968586;
          result[1] += 0.9633507853403142;
        } else {
          result[0] += 0.5;
          result[1] += 0.5;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2630599960684776306) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.9987249970436096191) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.5783599913120269775) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.6790899932384490967) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.05421686746987952;
          result[1] += 0.9457831325301205;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4638149850070476532) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5665400028228759766) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.2222222222222222;
          result[1] += 0.7777777777777778;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.2099249958992004395) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.09160500019788742065) ) ) {
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.05151499994099140167) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7944949865341186523) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
          result[0] += 0.8;
          result[1] += 0.2;
        } else {
          result[0] += 0.0847457627118644;
          result[1] += 0.9152542372881356;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2207050025463104248) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.04143999889492988586) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.2208949998021125793) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.6808699965476989746) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.964094996452331543) ) ) {
          result[0] += 0.42857142857142855;
          result[1] += 0.5714285714285714;
        } else {
          result[0] += 0.035211267605633804;
          result[1] += 0.9647887323943662;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.04545500129461288452) ) ) {
          result[0] += 0.25;
          result[1] += 0.75;
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2816650047898292542) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.1304000020027160645) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.1700599938631057739) ) ) {
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
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.7035500109195709229) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.9741150140762329102) ) ) {
          result[0] += 0.8333333333333334;
          result[1] += 0.16666666666666666;
        } else {
          result[0] += 0.04519774011299435;
          result[1] += 0.9548022598870056;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.05284999962896108627) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.4918949902057647705) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-5.999999848427250981e-05) ) ) {
          result[0] += 0.2;
          result[1] += 0.8;
        } else {
          result[0] += 0.9545454545454546;
          result[1] += 0.045454545454545456;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.1295600049197673798) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2522249966859817505) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.02118500065989792347) ) ) {
          result[0] += 0.75;
          result[1] += 0.25;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.08860759493670886;
          result[1] += 0.9113924050632911;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.9754950106143951416) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8057949841022491455) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5397500097751617432) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.9772599935531616211) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.5;
          result[1] += 0.5;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9026100039482116699) ) ) {
          result[0] += 0.8333333333333334;
          result[1] += 0.16666666666666666;
        } else {
          result[0] += 0.1641025641025641;
          result[1] += 0.8358974358974359;
        }
      }
    }
  } else {
    result[0] += 1;
    result[1] += 0;
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9361749887466430664) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.500845000147819519) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.06213000044226646423) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8927049934864044189) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.6581600010395050049) ) ) {
          result[0] += 0.5384615384615384;
          result[1] += 0.46153846153846156;
        } else {
          result[0] += 0.09937888198757763;
          result[1] += 0.9006211180124224;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.2623949944972991943) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.7;
          result[1] += 0.3;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5490350127220153809) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.6283050179481506348) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.07166500110179185867) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1480049975216388702) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.09497206703910614;
          result[1] += 0.9050279329608939;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5176050066947937012) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.05176999978721141815) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.2186749950051307678) ) ) {
          result[0] += 0.7222222222222222;
          result[1] += 0.2777777777777778;
        } else {
          result[0] += 0.03333333333333333;
          result[1] += 0.9666666666666667;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.002469999948516488075) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.04716981132075472;
          result[1] += 0.9528301886792453;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.2994900047779083252) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.7887899875640869141) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.5082300007343292236) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.5;
          result[1] += 0.5;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7696200013160705566) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.1304000020027160645) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2021749988198280334) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.5;
          result[1] += 0.5;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9622650146484375) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7820699810981750488) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.096045197740113;
          result[1] += 0.903954802259887;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1199500039219856262) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.4853899925947189331) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.180895000696182251) ) ) {
          result[0] += 0.125;
          result[1] += 0.875;
        } else {
          result[0] += 0.8928571428571429;
          result[1] += 0.10714285714285714;
        }
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.1071449965238571167) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.5189850032329559326) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.08333333333333333;
          result[1] += 0.9166666666666666;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.6746350228786468506) ) ) {
          result[0] += 0.045871559633027525;
          result[1] += 0.9541284403669725;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.6929800212383270264) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3636350035667419434) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.34615384615384615;
          result[1] += 0.6538461538461539;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1408099979162216187) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.04756499826908111572) ) ) {
          result[0] += 0.9230769230769231;
          result[1] += 0.07692307692307693;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.9970000088214874268) ) ) {
          result[0] += 0.04081632653061224;
          result[1] += 0.9591836734693877;
        } else {
          result[0] += 0.26666666666666666;
          result[1] += 0.7333333333333333;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.4737699851393699646) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.2732999995350837708) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9533349871635437012) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.3;
          result[1] += 0.7;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9361749887466430664) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.6164399981498718262) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.5439000129699707031) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.2893099933862686157) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.03717499971389770508) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2011200040578842163) ) ) {
          result[0] += 0.9615384615384616;
          result[1] += 0.038461538461538464;
        } else {
          result[0] += 0.5714285714285714;
          result[1] += 0.42857142857142855;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9273549914360046387) ) ) {
          result[0] += 0.13725490196078433;
          result[1] += 0.8627450980392157;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.9285149872303009033) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.7088900059461593628) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7272749990224838257) ) ) {
          result[0] += 0.03278688524590164;
          result[1] += 0.9672131147540983;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.5130700003355741501) ) ) {
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
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.739674985408782959) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.3668549954891204834) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.02448499202728271484) ) ) {
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
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.8071799874305725098) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.06282722513089005;
          result[1] += 0.93717277486911;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9664799869060516357) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9533349871635437012) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.03717499971389770508) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.5669200047850608826) ) ) {
          result[0] += 0.7619047619047619;
          result[1] += 0.23809523809523808;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.8071799874305725098) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.05660377358490566;
          result[1] += 0.9433962264150944;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.8369050025939941406) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7106900215148925781) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.75;
          result[1] += 0.25;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.42105263157894735;
          result[1] += 0.5789473684210527;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.1558800041675567627) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.03078999929130077362) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.1706349998712539673) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.8333349823951721191) ) ) {
          result[0] += 0.75;
          result[1] += 0.25;
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
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6255199909210205078) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.09523999691009521484) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3222250044345855713) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.6618850231170654297) ) ) {
          result[0] += 0.4666666666666667;
          result[1] += 0.5333333333333333;
        } else {
          result[0] += 0.0979020979020979;
          result[1] += 0.9020979020979021;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1930849999189376831) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5176050066947937012) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.6317949891090393066) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.4752050042152404785) ) ) {
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
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.4780500084161758423) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.1810999959707260132) ) ) {
          result[0] += 0.6;
          result[1] += 0.4;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2207050025463104248) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.07471264367816093;
          result[1] += 0.9252873563218391;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.1205449998378753662) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1863349974155426025) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9605999886989593506) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9125599861145019531) ) ) {
          result[0] += 0.8;
          result[1] += 0.2;
        } else {
          result[0] += 0.0784313725490196;
          result[1] += 0.9215686274509803;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.5259950160980224609) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.297530011972412467) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.7955000102519989014) ) ) {
          result[0] += 0.05223880597014925;
          result[1] += 0.9477611940298507;
        } else {
          result[0] += 0.75;
          result[1] += 0.25;
        }
      }
    }
  }
  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.8100599944591522217) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.0004799999878741800785) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.356030002236366272) ) ) {
          result[0] += 0.20689655172413793;
          result[1] += 0.7931034482758621;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.8474049866199493408) ) ) {
          result[0] += 0.9090909090909091;
          result[1] += 0.09090909090909091;
        } else {
          result[0] += 0.1038961038961039;
          result[1] += 0.8961038961038961;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.4642849862575531006) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1933500021696090698) ) ) {
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
  
  // Average tree outputs
  result[0] /= 20;
  result[1] /= 20;
  
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
