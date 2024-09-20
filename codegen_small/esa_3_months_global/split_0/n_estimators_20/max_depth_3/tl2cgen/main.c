
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
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
    if ( LIKELY( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4158186167478561401) ) ) {
      if ( UNLIKELY( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001822743099182844162) ) ) {
        result[0] += (float)0.009533832724571287;
        result[1] += (float)0.9904661672754287;
      } else {
        result[0] += (float)0.776753665510738;
        result[1] += (float)0.22324633448926204;
      }
    } else {
      if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2881486564874649048) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        result[0] += (float)0.14673913043478262;
        result[1] += (float)0.8532608695652174;
      }
    }
  } else {
    if ( UNLIKELY( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3217779546976089478) ) ) {
        result[0] += (float)0.6843575418994413;
        result[1] += (float)0.31564245810055863;
      } else {
        result[0] += (float)0.9990064006285093;
        result[1] += (float)0.00099359937149063;
      }
    }
  }
  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8154961466789245605) ) ) {
      if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        result[0] += (float)0.9865187897060407;
        result[1] += (float)0.013481210293959298;
      }
    } else {
      if ( LIKELY( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3217779546976089478) ) ) {
        result[0] += (float)0.2999286563614744;
        result[1] += (float)0.7000713436385255;
      } else {
        result[0] += (float)0.9673206293804711;
        result[1] += (float)0.03267937061952881;
      }
    }
  }
  if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8154961466789245605) ) ) {
      if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2039853483438491821) ) ) {
        result[0] += (float)0.9902295672164568;
        result[1] += (float)0.009770432783543165;
      } else {
        result[0] += (float)0;
        result[1] += (float)1;
      }
    } else {
      if ( LIKELY( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001832863199524581432) ) ) {
        result[0] += (float)0.41883757999666926;
        result[1] += (float)0.5811624200033307;
      } else {
        result[0] += (float)0.8182410423452768;
        result[1] += (float)0.18175895765472314;
      }
    }
  }
  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( LIKELY( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04389595240354537964) ) ) {
      if ( UNLIKELY( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4316533952951431274) ) ) {
        result[0] += (float)0.815959409594096;
        result[1] += (float)0.18404059040590406;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
        result[0] += (float)0.9426342879169217;
        result[1] += (float)0.05736571208307825;
      } else {
        result[0] += (float)0.26275935180978344;
        result[1] += (float)0.7372406481902166;
      }
    }
  }
  if ( UNLIKELY( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7666589617729187012) ) ) {
    if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7787209153175354004) ) ) {
      if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3429093062877655029) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        result[0] += (float)0.0052130145604889445;
        result[1] += (float)0.994786985439511;
      }
    } else {
      if ( LIKELY( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7352985739707946777) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2768351733684539795) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1346227526664733887) ) ) {
        result[0] += (float)0.6462368353454919;
        result[1] += (float)0.3537631646545081;
      } else {
        result[0] += (float)0.13182836463897984;
        result[1] += (float)0.8681716353610202;
      }
    } else {
      if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
        result[0] += (float)0.17373208870919793;
        result[1] += (float)0.826267911290802;
      } else {
        result[0] += (float)0.9916239726537606;
        result[1] += (float)0.008376027346239477;
      }
    }
  }
  if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( UNLIKELY( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7411437630653381348) ) ) {
      if ( UNLIKELY( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.09138808771967887878) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)1;
      }
    } else {
      if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2929984480142593384) ) ) {
        result[0] += (float)0.9692954710526932;
        result[1] += (float)0.030704528947306763;
      } else {
        result[0] += (float)0.9473719974178643;
        result[1] += (float)0.0526280025821357;
      }
    }
  }
  if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.7592073678970336914) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        result[0] += (float)0.9582016478196532;
        result[1] += (float)0.041798352180346734;
      }
    }
  } else {
    if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3297289460897445679) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.688378065824508667) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        result[0] += (float)0.999825642217831;
        result[1] += (float)0.0001743577821690108;
      }
    }
  }
  if ( UNLIKELY( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7666589617729187012) ) ) {
    if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1380424797534942627) ) ) {
      result[0] += (float)1;
      result[1] += (float)0;
    } else {
      if ( LIKELY( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7464606761932373047) ) ) {
        result[0] += (float)0.00019799366420274552;
        result[1] += (float)0.9998020063357973;
      } else {
        result[0] += (float)0.03682008368200837;
        result[1] += (float)0.9631799163179916;
      }
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2768351733684539795) ) ) {
      if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        result[0] += (float)0.8875148902376766;
        result[1] += (float)0.11248510976232344;
      }
    } else {
      if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
        result[0] += (float)0.19021577602092374;
        result[1] += (float)0.8097842239790762;
      } else {
        result[0] += (float)0.9899120000664777;
        result[1] += (float)0.01008799993352224;
      }
    }
  }
  if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2889022082090377808) ) ) {
    if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1380424797534942627) ) ) {
      if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        result[0] += (float)0.9590574374079529;
        result[1] += (float)0.04094256259204713;
      }
    } else {
      if ( UNLIKELY( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7666589617729187012) ) ) {
        result[0] += (float)0.0030254264563887995;
        result[1] += (float)0.9969745735436112;
      } else {
        result[0] += (float)0.30749193748449516;
        result[1] += (float)0.6925080625155048;
      }
    }
  } else {
    if ( LIKELY( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
      if ( UNLIKELY( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7411437928676605225) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        result[0] += (float)0.9978936934704498;
        result[1] += (float)0.0021063065295502414;
      }
    } else {
      result[0] += (float)0;
      result[1] += (float)1;
    }
  }
  if ( UNLIKELY( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.7317222356796264648) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( UNLIKELY( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
        result[0] += (float)0.994117164760382;
        result[1] += (float)0.005882835239617923;
      } else {
        result[0] += (float)0.5795720494817787;
        result[1] += (float)0.42042795051822135;
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2399695739150047302) ) ) {
    if ( LIKELY( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
      if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
        result[0] += (float)0.9804838418487092;
        result[1] += (float)0.019516158151290847;
      } else {
        result[0] += (float)0.5099825646986428;
        result[1] += (float)0.4900174353013572;
      }
    } else {
      result[0] += (float)0;
      result[1] += (float)1;
    }
  } else {
    result[0] += (float)0;
    result[1] += (float)1;
  }
  if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( UNLIKELY( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001762012368999421597) ) ) {
      if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
      } else {
        result[0] += (float)0.002242152466367713;
        result[1] += (float)0.9977578475336323;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2436483129858970642) ) ) {
        result[0] += (float)0.6232503562149023;
        result[1] += (float)0.3767496437850976;
      } else {
        result[0] += (float)0.989940170487637;
        result[1] += (float)0.010059829512363;
      }
    }
  }
  if ( UNLIKELY( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7411437630653381348) ) ) {
    if ( UNLIKELY( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.09636001661419868469) ) ) {
      result[0] += (float)1;
      result[1] += (float)0;
    } else {
      result[0] += (float)0;
      result[1] += (float)1;
    }
  } else {
    if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3819010108709335327) ) ) {
      if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        result[0] += (float)0.9617998825917518;
        result[1] += (float)0.03820011740824828;
      }
    } else {
      if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
        result[0] += (float)0.9693576900412493;
        result[1] += (float)0.030642309958750738;
      } else {
        result[0] += (float)0.133575647432985;
        result[1] += (float)0.866424352567015;
      }
    }
  }
  if ( LIKELY( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
    if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
      if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2984580099582672119) ) ) {
        result[0] += (float)0.9914325505450704;
        result[1] += (float)0.008567449454929646;
      } else {
        result[0] += (float)0;
        result[1] += (float)1;
      }
    } else {
      if ( LIKELY( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7464606761932373047) ) ) {
        result[0] += (float)0.26852728779448326;
        result[1] += (float)0.7314727122055168;
      } else {
        result[0] += (float)0.8228151461894871;
        result[1] += (float)0.17718485381051285;
      }
    }
  } else {
    result[0] += (float)0;
    result[1] += (float)1;
  }
  if ( UNLIKELY( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( LIKELY( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04389595240354537964) ) ) {
      if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3499511033296585083) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        result[0] += (float)0.99937499276612;
        result[1] += (float)0.0006250072338800218;
      }
    } else {
      if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1440776735544204712) ) ) {
        result[0] += (float)0.7763427825438269;
        result[1] += (float)0.22365721745617306;
      } else {
        result[0] += (float)0.09503660739754682;
        result[1] += (float)0.9049633926024532;
      }
    }
  }
  if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
      if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2852007895708084106) ) ) {
        result[0] += (float)8.130742336775348e-05;
        result[1] += (float)0.9999186925766322;
      } else {
        result[0] += (float)0;
        result[1] += (float)1;
      }
    } else {
      if ( UNLIKELY( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001774667529389262199) ) ) {
        result[0] += (float)0.0066718995290423865;
        result[1] += (float)0.9933281004709577;
      } else {
        result[0] += (float)0.9488206094423711;
        result[1] += (float)0.0511793905576289;
      }
    }
  } else {
    if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3268404752016067505) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3298741132020950317) ) ) {
        result[0] += (float)0.9998026949547939;
        result[1] += (float)0.0001973050452060677;
      } else {
        result[0] += (float)0;
        result[1] += (float)1;
      }
    }
  }
  if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    if ( LIKELY( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3681567758321762085) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      result[0] += (float)1;
      result[1] += (float)0;
    }
  } else {
    if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3273122608661651611) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
        result[0] += (float)0.608464686928503;
        result[1] += (float)0.39153531307149697;
      } else {
        result[0] += (float)0.9859928042067714;
        result[1] += (float)0.014007195793228575;
      }
    } else {
      result[0] += (float)0;
      result[1] += (float)1;
    }
  }
  if ( UNLIKELY( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001762012368999421597) ) ) {
    if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8118190765380859375) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.09138808771967887878) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
      } else {
        result[0] += (float)0.004878048780487805;
        result[1] += (float)0.9951219512195122;
      }
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2768351733684539795) ) ) {
      if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        result[0] += (float)0.8652124645892352;
        result[1] += (float)0.13478753541076488;
      }
    } else {
      if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        result[0] += (float)0.9930192674659216;
        result[1] += (float)0.006980732534078374;
      }
    }
  }
  if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2039853483438491821) ) ) {
      if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
        result[0] += (float)0.6992586812329301;
        result[1] += (float)0.30074131876706983;
      } else {
        result[0] += (float)0.9825974519870698;
        result[1] += (float)0.017402548012930216;
      }
    } else {
      result[0] += (float)0;
      result[1] += (float)1;
    }
  }
  if ( UNLIKELY( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7411437630653381348) ) ) {
    if ( LIKELY( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3919859081506729126) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      result[0] += (float)1;
      result[1] += (float)0;
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2768351733684539795) ) ) {
      if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1410631909966468811) ) ) {
        result[0] += (float)0.7305712684095195;
        result[1] += (float)0.2694287315904806;
      } else {
        result[0] += (float)0.059080213903743316;
        result[1] += (float)0.9409197860962567;
      }
    } else {
      if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
        result[0] += (float)0.18938737802413536;
        result[1] += (float)0.8106126219758647;
      } else {
        result[0] += (float)0.989973645486062;
        result[1] += (float)0.010026354513937963;
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 20;
  result[1] /= 20;
  
  // Apply base_scores
  result[0] += (float)0;
  result[1] += (float)0;
  
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
    

    FILE* file = fopen("./codegen_small/esa_3_months_global/split_0/test_data.csv", "r");
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
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        
    }
    

    return 0;
}
