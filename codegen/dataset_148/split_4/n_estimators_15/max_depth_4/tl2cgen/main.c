
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
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
          result[1] += 0.004451038575667656;
          result[2] += 0.009643916913946587;
          result[3] += 0.9829376854599406;
          result[4] += 0;
          result[5] += 0.002967359050445104;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
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
          result[1] += 0.0026954177897574125;
          result[2] += 0.004851752021563342;
          result[3] += 0.9908355795148248;
          result[4] += 0;
          result[5] += 0.0016172506738544475;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.007547169811320755;
          result[2] += 0.007547169811320755;
          result[3] += 0.9849056603773585;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-26.5) ) ) {
          result[0] += 0.9786096256684492;
          result[1] += 0;
          result[2] += 0.0066844919786096255;
          result[3] += 0.014705882352941176;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9939452833009419;
          result[1] += 0.0007848706832112424;
          result[2] += 0.0025041112273882496;
          result[3] += 0.0023919868440723576;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003737479443863059;
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
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)9) ) ) {
          result[0] += 0.4061085972850679;
          result[1] += 0;
          result[2] += 0.00641025641025641;
          result[3] += 0.5865384615384616;
          result[4] += 0;
          result[5] += 0.0001885369532428356;
          result[6] += 0.0007541478129713424;
        } else {
          result[0] += 0.8372093023255814;
          result[1] += 0;
          result[2] += 0.09302325581395349;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.06976744186046512;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)926.5) ) ) {
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9435714285714286;
          result[4] += 0.056428571428571425;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0049261083743842365;
          result[2] += 0.021346469622331693;
          result[3] += 0;
          result[4] += 0.9671592775041051;
          result[5] += 0.006568144499178982;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0;
          result[1] += 0.0004906771344455349;
          result[2] += 0;
          result[3] += 0.9229636898920511;
          result[4] += 0.07409224730127577;
          result[5] += 0.0024533856722276748;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0012406947890818859;
          result[2] += 0.009925558312655087;
          result[3] += 0;
          result[4] += 0.9869727047146402;
          result[5] += 0.0018610421836228288;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
          result[0] += 0.9984302645004317;
          result[1] += 0.0004709206498704968;
          result[2] += 0.0007848677497841614;
          result[3] += 0.00015697354995683227;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00015697354995683227;
        } else {
          result[0] += 0.987797437461867;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.012202562538133009;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4.5) ) ) {
          result[0] += 0.5098733233979136;
          result[1] += 0.0033532041728763042;
          result[2] += 0.010245901639344262;
          result[3] += 0.4759687034277198;
          result[4] += 0;
          result[5] += 0.00018628912071535022;
          result[6] += 0.00037257824143070045;
        } else {
          result[0] += 0.6075886170743884;
          result[1] += 0;
          result[2] += 0.0014977533699450823;
          result[3] += 0.3909136295556665;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
          result[0] += 0.9703703703703703;
          result[1] += 0;
          result[2] += 0.02962962962962963;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9992418498862775;
          result[1] += 0;
          result[2] += 0.0006065200909780137;
          result[3] += 0.00015163002274450342;
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
          result[0] += 0.9111277072442121;
          result[1] += 0;
          result[2] += 0.018670649738610903;
          result[3] += 0.06796116504854369;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0022404779686333084;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)3.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0.9998636301650075;
          result[1] += 0;
          result[2] += 0.00013636983499249966;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.996831264853446;
          result[1] += 0;
          result[2] += 0.0031687351465540005;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
          result[0] += 0.4399704469892871;
          result[1] += 0.001970200714197759;
          result[2] += 0.0041866765176702386;
          result[3] += 0.4739564093091984;
          result[4] += 0.07880802856791037;
          result[5] += 0.0006156877231867998;
          result[6] += 0.0004925501785494398;
        } else {
          result[0] += 0.9342076016892644;
          result[1] += 0;
          result[2] += 0.008224049788841966;
          result[3] += 0.05534563236274728;
          result[4] += 0;
          result[5] += 0.0006668148477439432;
          result[6] += 0.0015559013114025341;
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
          result[0] += 0.012479201331114808;
          result[1] += 0;
          result[2] += 0.025790349417637273;
          result[3] += 0.959234608985025;
          result[4] += 0;
          result[5] += 0.0024958402662229617;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
          result[0] += 0;
          result[1] += 0.011607142857142858;
          result[2] += 0.0035714285714285713;
          result[3] += 0.9848214285714286;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9633699633699634;
          result[1] += 0;
          result[2] += 0.03663003663003663;
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
          result[0] += 0.0213903743315508;
          result[1] += 0.053475935828877004;
          result[2] += 0;
          result[3] += 0.9251336898395722;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)6) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          result[0] += 0;
          result[1] += 0.005678884873515746;
          result[2] += 0.00980898296334538;
          result[3] += 0.7258647392875581;
          result[4] += 0.25709860609189467;
          result[5] += 0.0015487867836861124;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)107) ) ) {
          result[0] += 0.9990038738240178;
          result[1] += 0;
          result[2] += 0.0008854454897620366;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00011068068622025457;
        } else {
          result[0] += 0.23529411764705882;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7647058823529411;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 0.105890603085554;
          result[1] += 0;
          result[2] += 0.004207573632538569;
          result[3] += 0.8884992987377279;
          result[4] += 0;
          result[5] += 0.001402524544179523;
          result[6] += 0;
        } else {
          result[0] += 0.9814241486068112;
          result[1] += 0;
          result[2] += 0.009287925696594427;
          result[3] += 0.006811145510835914;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002476780185758514;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
          result[0] += 0.038348082595870206;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9373156342182891;
          result[4] += 0.022861356932153392;
          result[5] += 0.0014749262536873156;
          result[6] += 0;
        } else {
          result[0] += 0.24723247232472326;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6974169741697417;
          result[4] += 0.055350553505535055;
          result[5] += 0;
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
          result[0] += 0.746268656716418;
          result[1] += 0.014925373134328358;
          result[2] += 0.1791044776119403;
          result[3] += 0.029850746268656716;
          result[4] += 0;
          result[5] += 0.029850746268656716;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.9986390659694864;
          result[1] += 0.0002865124274765418;
          result[2] += 0.0005730248549530836;
          result[3] += 0.00021488432060740636;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002865124274765418;
        } else {
          result[0] += 0.8998357963875205;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.10016420361247948;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          result[0] += 0.7222287252721526;
          result[1] += 0.0021069881774552265;
          result[2] += 0.005267470443638066;
          result[3] += 0.26992859651176404;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004682195949900503;
        } else {
          result[0] += 0.9945332211942809;
          result[1] += 0;
          result[2] += 0.00336417157275021;
          result[3] += 0.0021026072329688814;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)183) ) ) {
          result[0] += 0;
          result[1] += 0.0449438202247191;
          result[2] += 0;
          result[3] += 0.9550561797752809;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
          result[0] += 0.9794871794871794;
          result[1] += 0;
          result[2] += 0.020512820512820513;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.08235294117647059;
          result[1] += 0.0058823529411764705;
          result[2] += 0.0032085561497326204;
          result[3] += 0.9074866310160428;
          result[4] += 0.0010695187165775401;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-23) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6553030303030303;
          result[4] += 0.3446969696969697;
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)22.5) ) ) {
          result[0] += 0.3333333333333333;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6666666666666666;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9987129987129987;
          result[5] += 0.001287001287001287;
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
          result[0] += 0.0024242424242424242;
          result[1] += 0.0006060606060606061;
          result[2] += 0.015151515151515152;
          result[3] += 0.9781818181818182;
          result[4] += 0;
          result[5] += 0.0036363636363636364;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
          result[0] += 0.9974805564683975;
          result[1] += 0.00029210939496841575;
          result[2] += 0.0007302734874210393;
          result[3] += 0.0009858692080184032;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005111914411947275;
        } else {
          result[0] += 0.288;
          result[1] += 0;
          result[2] += 0.128;
          result[3] += 0.584;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.17139707908514742;
          result[1] += 0;
          result[2] += 0.004133370074400662;
          result[3] += 0.8241939928354919;
          result[4] += 0;
          result[5] += 0.0002755580049600441;
          result[6] += 0;
        } else {
          result[0] += 0.9943425673039407;
          result[1] += 0;
          result[2] += 0.004877097151775264;
          result[3] += 0.00019508388607101054;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005852516582130316;
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-3.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9967486283275757;
          result[1] += 0;
          result[2] += 0.002641739483844747;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000609632188579557;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0.02236951118475559;
          result[1] += 0.009942004971002486;
          result[2] += 0.0024855012427506215;
          result[3] += 0.8900856117094725;
          result[4] += 0.07484120408726871;
          result[5] += 0.00027616680475006904;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.013116474291710388;
          result[3] += 0.16841552990556138;
          result[4] += 0.8184679958027282;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          result[0] += 0.9841574038584388;
          result[1] += 0;
          result[2] += 0.004982752012265236;
          result[3] += 0.008560112431327456;
          result[4] += 0;
          result[5] += 0.00012776287210936502;
          result[6] += 0.0021719688258592055;
        } else {
          result[0] += 0.8674698795180723;
          result[1] += 0;
          result[2] += 0.018072289156626505;
          result[3] += 0.1144578313253012;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.005638474295190713;
          result[3] += 0.9943615257048093;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.2;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-5.5) ) ) {
          result[0] += 0.8235294117647058;
          result[1] += 0;
          result[2] += 0.17647058823529413;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9848275862068966;
          result[1] += 0;
          result[2] += 0.015172413793103448;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)115.5) ) ) {
          result[0] += 0.09178228388473852;
          result[1] += 0.004268943436499467;
          result[2] += 0.0005336179295624333;
          result[3] += 0.9028815368196371;
          result[4] += 0.0005336179295624333;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.006006006006006006;
          result[1] += 0.021021021021021023;
          result[2] += 0;
          result[3] += 0.1921921921921922;
          result[4] += 0.7807807807807807;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)84) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)73) ) ) {
          result[0] += 0.11764705882352941;
          result[1] += 0;
          result[2] += 0.03529411764705882;
          result[3] += 0.8470588235294118;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.024322446143154968;
          result[4] += 0.9756775538568451;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
          result[0] += 0.5780141843971631;
          result[1] += 0;
          result[2] += 0.015957446808510637;
          result[3] += 0.2429078014184397;
          result[4] += 0.16312056737588654;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.685355648535565;
          result[1] += 0;
          result[2] += 0.007531380753138076;
          result[3] += 0.29246861924686196;
          result[4] += 0.014644351464435148;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.9643214034568267;
          result[1] += 0.0009622857988822681;
          result[2] += 0.0008882638143528628;
          result[3] += 0.03334690403049706;
          result[4] += 0.0002220659535882157;
          result[5] += 7.402198452940523e-05;
          result[6] += 0.0001850549613235131;
        } else {
          result[0] += 0.6297522688251165;
          result[1] += 0;
          result[2] += 0.00564140299239637;
          result[3] += 0.3623988226637233;
          result[4] += 0.0012263919548687761;
          result[5] += 0.0002452783909737552;
          result[6] += 0.0007358351729212656;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-141) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-327) ) ) {
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
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          result[0] += 0.9707146601432816;
          result[1] += 0.0005940940066398743;
          result[2] += 0.0012580814258256162;
          result[3] += 0.02718853748034248;
          result[4] += 0;
          result[5] += 6.989341254586756e-05;
          result[6] += 0.0001747335313646689;
        } else {
          result[0] += 0.16592292089249494;
          result[1] += 0;
          result[2] += 0.017038539553752535;
          result[3] += 0.6997971602434077;
          result[4] += 0.11724137931034483;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
          result[0] += 0.42980004300150504;
          result[1] += 0;
          result[2] += 0.0070952483336916795;
          result[3] += 0.5631047086648032;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9097375521216581;
          result[1] += 0;
          result[2] += 0.0049055678194751045;
          result[3] += 0.07848908511160167;
          result[4] += 0.0024527839097375523;
          result[5] += 0.0014716703458425313;
          result[6] += 0.0029433406916850625;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)204) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
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
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
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
          result[0] += 0.2857142857142857;
          result[1] += 0.7142857142857143;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9398907103825137;
          result[1] += 0.060109289617486336;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
          result[0] += 0.265993265993266;
          result[1] += 0;
          result[2] += 0.030303030303030304;
          result[3] += 0.7037037037037037;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03178484107579462;
          result[4] += 0.9682151589242054;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4979) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9937402190923318;
          result[1] += 0;
          result[2] += 0.005738132498695879;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005216484089723526;
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
          result[0] += 0.996415770609319;
          result[1] += 0;
          result[2] += 0.0035842293906810036;
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          result[0] += 0.032987398072646404;
          result[1] += 0.003335804299481097;
          result[2] += 0.010748702742772424;
          result[3] += 0.8372868791697554;
          result[4] += 0.11489992587101557;
          result[5] += 0.0007412898443291327;
          result[6] += 0;
        } else {
          result[0] += 0.9851861230691316;
          result[1] += 0;
          result[2] += 0.005697644973410991;
          result[3] += 0.008356545961002788;
          result[4] += 0;
          result[5] += 0.00012661433274246646;
          result[6] += 0.0006330716637123323;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
          result[0] += 0.12727272727272726;
          result[1] += 0.005454545454545455;
          result[2] += 0.005909090909090909;
          result[3] += 0.5518181818181818;
          result[4] += 0.30954545454545457;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0031678986272439284;
          result[1] += 0.005279831045406547;
          result[2] += 0;
          result[3] += 0.1003167898627244;
          result[4] += 0.8912354804646251;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
          result[0] += 0;
          result[1] += 0.0015349194167306216;
          result[2] += 0.00422102839600921;
          result[3] += 0.9942440521872602;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.032119914346895075;
          result[3] += 0;
          result[4] += 0.9593147751605996;
          result[5] += 0.008565310492505354;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)24) ) ) {
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.986469864698647;
          result[1] += 0;
          result[2] += 0.012300123001230012;
          result[3] += 0.0012300123001230013;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.004873294346978557;
          result[3] += 0.9951267056530214;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.1362153344208809;
          result[1] += 0.024469820554649267;
          result[2] += 0;
          result[3] += 0.8393148450244698;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
          result[0] += 0.4951923076923077;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.47836538461538464;
          result[4] += 0.021634615384615384;
          result[5] += 0.004807692307692308;
          result[6] += 0;
        } else {
          result[0] += 0.9950092964086507;
          result[1] += 9.785693316371467e-05;
          result[2] += 0.0008317839318915747;
          result[3] += 0.004012134259712302;
          result[4] += 0;
          result[5] += 0;
          result[6] += 4.8928466581857334e-05;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          result[0] += 0.631578947368421;
          result[1] += 0;
          result[2] += 0.3684210526315789;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.001379310344827586;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9986206896551724;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)50.5) ) ) {
          result[0] += 0.9643951898137233;
          result[1] += 0.0023579344494223066;
          result[2] += 0.002593727894364537;
          result[3] += 0.02970997406272106;
          result[4] += 0;
          result[5] += 0.000707380334826692;
          result[6] += 0.00023579344494223064;
        } else {
          result[0] += 0.7286749482401657;
          result[1] += 0;
          result[2] += 0.006004140786749482;
          result[3] += 0.24906832298136647;
          result[4] += 0.014699792960662527;
          result[5] += 0.0007246376811594203;
          result[6] += 0.0008281573498964803;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)52.5) ) ) {
          result[0] += 0.32520644907589463;
          result[1] += 0;
          result[2] += 0.009437672040896579;
          result[3] += 0.6653558788832088;
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
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)27) ) ) {
          result[0] += 0.781973203410475;
          result[1] += 0;
          result[2] += 0.006699147381242387;
          result[3] += 0.20401948842874543;
          result[4] += 0.001218026796589525;
          result[5] += 0.00243605359317905;
          result[6] += 0.0036540803897685747;
        } else {
          result[0] += 0.9710737869652598;
          result[1] += 0.0012919896640826874;
          result[2] += 0.0008613264427217916;
          result[3] += 0.026198679299454495;
          result[4] += 0.0002871088142405972;
          result[5] += 0.0001435544071202986;
          result[6] += 0.0001435544071202986;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          result[0] += 0;
          result[1] += 0.005978080371969445;
          result[2] += 0.005978080371969445;
          result[3] += 0.906343407505812;
          result[4] += 0.08170043175024909;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9979699553390174;
          result[1] += 0.0008120178643930166;
          result[2] += 0.001218026796589525;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9998182974470792;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 9.085127646043427e-05;
          result[5] += 9.085127646043427e-05;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)86.5) ) ) {
          result[0] += 0.4315352697095436;
          result[1] += 0;
          result[2] += 0.058091286307053944;
          result[3] += 0;
          result[4] += 0.5103734439834025;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.012857142857142857;
          result[1] += 0;
          result[2] += 0.002142857142857143;
          result[3] += 0.06714285714285714;
          result[4] += 0.9178571428571428;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
          result[0] += 0.003915984336062656;
          result[1] += 0;
          result[2] += 0.008187967248131008;
          result[3] += 0.9878960484158064;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8506769825918762;
          result[1] += 0;
          result[2] += 0.0065764023210831725;
          result[3] += 0.13694390715667312;
          result[4] += 0.0019342359767891683;
          result[5] += 0.0007736943907156673;
          result[6] += 0.003094777562862669;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)880) ) ) {
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)83) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          result[0] += 0.9949238578680204;
          result[1] += 0;
          result[2] += 0.004060913705583757;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0010152284263959394;
        } else {
          result[0] += 0.9996696671896936;
          result[1] += 0;
          result[2] += 0.0003303328103063837;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)204) ) ) {
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
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
          result[0] += 0;
          result[1] += 0.022727272727272728;
          result[2] += 0;
          result[3] += 0.09090909090909091;
          result[4] += 0.8863636363636364;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.02318259874069834;
          result[1] += 0.007727532913566113;
          result[2] += 0.004293073840870063;
          result[3] += 0.9627933600457927;
          result[4] += 0.0011448196908986834;
          result[5] += 0.0008586147681740126;
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06397306397306397;
          result[3] += 0.9276094276094277;
          result[4] += 0;
          result[5] += 0.008417508417508417;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0.7579908675799086;
          result[1] += 0;
          result[2] += 0.0045662100456621;
          result[3] += 0.23059360730593606;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00684931506849315;
        } else {
          result[0] += 0.9927710843373494;
          result[1] += 0;
          result[2] += 0.004302925989672977;
          result[3] += 0.002237521514629948;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006884681583476765;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)50.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0003824091778202677;
          result[3] += 0.9996175908221797;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9836065573770492;
          result[1] += 0;
          result[2] += 0.014754098360655738;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001639344262295082;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0;
          result[1] += 0.053763440860215055;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.946236559139785;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.003656307129798903;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9963436928702011;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
          result[0] += 0.005429864253393666;
          result[1] += 0;
          result[2] += 0.0081447963800905;
          result[3] += 0;
          result[4] += 0.9800904977375566;
          result[5] += 0.006334841628959277;
          result[6] += 0;
        } else {
          result[0] += 0.001537042729787888;
          result[1] += 0;
          result[2] += 0.0012296341838303104;
          result[3] += 0.9960036889025515;
          result[4] += 0;
          result[5] += 0.0012296341838303104;
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9995894066926709;
          result[1] += 0;
          result[2] += 0.0003421610894409088;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 6.843221788818175e-05;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          result[0] += 0.9534883720930233;
          result[1] += 0;
          result[2] += 0.046511627906976744;
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)15.5) ) ) {
          result[0] += 0.8940277237984195;
          result[1] += 0.0023319082782743885;
          result[2] += 0.008679880813576889;
          result[3] += 0.09405363389040032;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009068532193289287;
        } else {
          result[0] += 0.9593280282935456;
          result[1] += 0;
          result[2] += 0.0017683465959328027;
          result[3] += 0.03801945181255526;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008841732979664014;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
          result[0] += 0;
          result[1] += 0.0003589375448671931;
          result[2] += 0;
          result[3] += 0.9996410624551328;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 0.009812667261373774;
          result[1] += 0.010704727921498661;
          result[2] += 0.015165031222123104;
          result[3] += 0.9643175735950045;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.012409513960703205;
          result[2] += 0;
          result[3] += 0.9875904860392968;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)47.5) ) ) {
          result[0] += 0.9944933920704846;
          result[1] += 0;
          result[2] += 0.005506607929515419;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6666666666666666;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
          result[0] += 0.9410931747380346;
          result[1] += 0.001274426508071368;
          result[2] += 0.0008496176720475786;
          result[3] += 0.055791560464457664;
          result[4] += 0.0005664117813650524;
          result[5] += 0;
          result[6] += 0.0004248088360237893;
        } else {
          result[0] += 0.9969313387034906;
          result[1] += 0.0001643925694558606;
          result[2] += 0.00021919009260781412;
          result[3] += 0.002356293495534002;
          result[4] += 0.0001643925694558606;
          result[5] += 0.0001643925694558606;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 0.5832737669764118;
          result[1] += 0;
          result[2] += 0.0025017869907076485;
          result[3] += 0.4124374553252323;
          result[4] += 0;
          result[5] += 0.0014295925661186562;
          result[6] += 0.00035739814152966406;
        } else {
          result[0] += 0.8671378091872791;
          result[1] += 0;
          result[2] += 0.018374558303886925;
          result[3] += 0.03745583038869258;
          result[4] += 0.07703180212014134;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9952510176390773;
          result[4] += 0.0033921302578018998;
          result[5] += 0.0013568521031207597;
          result[6] += 0;
        } else {
          result[0] += 0.5131782945736434;
          result[1] += 0;
          result[2] += 0.01627906976744186;
          result[3] += 0;
          result[4] += 0.47054263565891474;
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
          result[0] += 0.985977212971078;
          result[1] += 0;
          result[2] += 0.009640666082383873;
          result[3] += 0.0013146362839614374;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.003067484662576687;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-292) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-518) ) ) {
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 0.9998528762689421;
          result[1] += 0;
          result[2] += 0.00014712373105781962;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.2624;
          result[1] += 0;
          result[2] += 0.0384;
          result[3] += 0.4352;
          result[4] += 0.2624;
          result[5] += 0.0016;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          result[0] += 0.005285920230658338;
          result[1] += 0.003844305622296973;
          result[2] += 0.0028832292167227298;
          result[3] += 0.754444978375781;
          result[4] += 0.23258049014896687;
          result[5] += 0.0009610764055742433;
          result[6] += 0;
        } else {
          result[0] += 0.8140722526952904;
          result[1] += 0;
          result[2] += 0.006430868167202572;
          result[3] += 0.17741630414223566;
          result[4] += 0;
          result[5] += 0.0003782863627766219;
          result[6] += 0.0017022886324947987;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
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
          result[0] += 0.9994443209602134;
          result[1] += 0;
          result[2] += 0.0003889753278506335;
          result[3] += 0;
          result[4] += 0.00011113580795732385;
          result[5] += 0;
          result[6] += 5.5567903978661923e-05;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.7548566142460685;
          result[1] += 0.00200431699044095;
          result[2] += 0.007863089731729882;
          result[3] += 0.20706136293555352;
          result[4] += 0.027135368485969785;
          result[5] += 0.0007708911501695962;
          result[6] += 0.00030835646006783845;
        } else {
          result[0] += 0;
          result[1] += 0.001310615989515072;
          result[2] += 0.0008737439930100481;
          result[3] += 0.783748361730013;
          result[4] += 0.21319353429445173;
          result[5] += 0.0008737439930100481;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)104) ) ) {
          result[0] += 0.1371610845295056;
          result[1] += 0.019138755980861243;
          result[2] += 0;
          result[3] += 0.8437001594896332;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.004672897196261682;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9953271028037384;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
          result[0] += 0.10179640718562874;
          result[1] += 0;
          result[2] += 0.059880239520958084;
          result[3] += 0.8383233532934131;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0064794816414686825;
          result[4] += 0.9935205183585313;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 15;
  result[1] /= 15;
  result[2] /= 15;
  result[3] /= 15;
  result[4] /= 15;
  result[5] /= 15;
  result[6] /= 15;
  
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
    

    FILE* file = fopen("./codegen/dataset_148/split_4/test_data.csv", "r");
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
