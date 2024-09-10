
#include "header.h"


static const int32_t num_class[] = {  6, };

int32_t get_num_target(void) {
  return N_TARGET;
}
void get_num_class(int32_t* out) {
  for (int i = 0; i < N_TARGET; ++i) {
    out[i] = num_class[i];
  }
}
int32_t get_num_feature(void) {
  return 36;
}
const char* get_threshold_type(void) {
  return "float32";
}
const char* get_leaf_output_type(void) {
  return "float32";
}


void predict(union Entry* data, int pred_margin, float* result) {
  unsigned int tmp;
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
        result[0] += 0.15361445783132532;
        result[1] += 0.06325301204819278;
        result[2] += 0;
        result[3] += 0.003012048192771085;
        result[4] += 0.6385542168674699;
        result[5] += 0.141566265060241;
      } else {
        result[0] += 0.0034100596760443308;
        result[1] += 0.0076726342710997444;
        result[2] += 0.008525149190110827;
        result[3] += 0.15430520034100598;
        result[4] += 0.07246376811594203;
        result[5] += 0.7536231884057971;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9868421052631579;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.013157894736842105;
        result[5] += 0;
      } else {
        result[0] += 0.6223581757508343;
        result[1] += 0.020022246941045607;
        result[2] += 0.05228031145717464;
        result[3] += 0.08620689655172414;
        result[4] += 0.12903225806451613;
        result[5] += 0.09010011123470522;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.16;
        result[3] += 0.6133333333333333;
        result[4] += 0;
        result[5] += 0.22666666666666666;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.8181818181818182;
        result[3] += 0.18181818181818182;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)98.5) ) ) {
        result[0] += 0.003246753246753247;
        result[1] += 0;
        result[2] += 0.9090909090909091;
        result[3] += 0.08008658008658008;
        result[4] += 0;
        result[5] += 0.007575757575757576;
      } else {
        result[0] += 0.3142857142857143;
        result[1] += 0;
        result[2] += 0.6857142857142857;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)70.5) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)59.5) ) ) {
        result[0] += 0.03015075376884422;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8040201005025126;
        result[5] += 0.1658291457286432;
      } else {
        result[0] += 0;
        result[1] += 0.002697841726618705;
        result[2] += 0.0035971223021582736;
        result[3] += 0.13399280575539568;
        result[4] += 0.0710431654676259;
        result[5] += 0.7886690647482014;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
        result[0] += 0.005319148936170213;
        result[1] += 0.8351063829787234;
        result[2] += 0;
        result[3] += 0.0035460992907801418;
        result[4] += 0.15602836879432624;
        result[5] += 0;
      } else {
        result[0] += 0.6612632755729458;
        result[1] += 0.021240916713247626;
        result[2] += 0.050866405813303525;
        result[3] += 0.10340972610396872;
        result[4] += 0.08887646730016771;
        result[5] += 0.0743432084963667;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.08403361344537816;
        result[3] += 0.226890756302521;
        result[4] += 0.05042016806722689;
        result[5] += 0.6386554621848739;
      } else {
        result[0] += 0.07142857142857142;
        result[1] += 0.15873015873015872;
        result[2] += 0.4365079365079365;
        result[3] += 0.16666666666666666;
        result[4] += 0.023809523809523808;
        result[5] += 0.14285714285714285;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
        result[0] += 0.02262443438914027;
        result[1] += 0;
        result[2] += 0.7262443438914027;
        result[3] += 0.20361990950226244;
        result[4] += 0;
        result[5] += 0.04751131221719457;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9831578947368421;
        result[3] += 0.016842105263157894;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)75.5) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)66.5) ) ) {
        result[0] += 0.01056338028169014;
        result[1] += 0.13028169014084506;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8098591549295775;
        result[5] += 0.04929577464788732;
      } else {
        result[0] += 0.7028985507246377;
        result[1] += 0.014492753623188406;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.10869565217391304;
        result[5] += 0.17391304347826086;
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)88.5) ) ) {
        result[0] += 0.0021321961620469083;
        result[1] += 0.0010660980810234541;
        result[2] += 0;
        result[3] += 0.07249466950959488;
        result[4] += 0.05863539445628998;
        result[5] += 0.8656716417910447;
      } else {
        result[0] += 0.07611548556430446;
        result[1] += 0.010498687664041995;
        result[2] += 0.06036745406824147;
        result[3] += 0.44881889763779526;
        result[4] += 0.07086614173228346;
        result[5] += 0.3333333333333333;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
        result[0] += 0.001834862385321101;
        result[1] += 0.8311926605504587;
        result[2] += 0;
        result[3] += 0.007339449541284404;
        result[4] += 0.15412844036697249;
        result[5] += 0.005504587155963303;
      } else {
        result[0] += 0.7856060606060606;
        result[1] += 0.00909090909090909;
        result[2] += 0.02727272727272727;
        result[3] += 0.03939393939393939;
        result[4] += 0.06666666666666667;
        result[5] += 0.07196969696969698;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0.005050505050505051;
        result[1] += 0.05555555555555555;
        result[2] += 0.32323232323232326;
        result[3] += 0.30808080808080807;
        result[4] += 0.025252525252525252;
        result[5] += 0.2828282828282828;
      } else {
        result[0] += 0.021526418786692758;
        result[1] += 0;
        result[2] += 0.8845401174168297;
        result[3] += 0.08414872798434442;
        result[4] += 0.0009784735812133072;
        result[5] += 0.008806262230919765;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)90.5) ) ) {
        result[0] += 0.006191950464396285;
        result[1] += 0.08359133126934984;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8947368421052632;
        result[5] += 0.015479876160990712;
      } else {
        result[0] += 0;
        result[1] += 0.9794661190965093;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.02053388090349076;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
        result[0] += 0.039093041438623924;
        result[1] += 0.007036747458952306;
        result[2] += 0.022673964034401875;
        result[3] += 0.13291634089132134;
        result[4] += 0.05003909304143862;
        result[5] += 0.7482408131352619;
      } else {
        result[0] += 0.6423099587507366;
        result[1] += 0.022981732469063054;
        result[2] += 0.07837360047142015;
        result[3] += 0.09192692987625221;
        result[4] += 0.08014142604596347;
        result[5] += 0.08426635238656452;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)92) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.05128205128205128;
        result[3] += 0.02564102564102564;
        result[4] += 0.15384615384615385;
        result[5] += 0.7692307692307693;
      } else {
        result[0] += 0;
        result[1] += 0.03636363636363636;
        result[2] += 0.41818181818181815;
        result[3] += 0.33636363636363636;
        result[4] += 0;
        result[5] += 0.20909090909090908;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90.5) ) ) {
        result[0] += 0;
        result[1] += 0.7777777777777778;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.2222222222222222;
      } else {
        result[0] += 0.01020408163265306;
        result[1] += 0;
        result[2] += 0.9104308390022676;
        result[3] += 0.06235827664399093;
        result[4] += 0;
        result[5] += 0.017006802721088437;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.030837004405286344;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.947136563876652;
        result[5] += 0.022026431718061675;
      } else {
        result[0] += 0.033820138355111454;
        result[1] += 0.005380476556495004;
        result[2] += 0.0015372790161414297;
        result[3] += 0.15680245964642583;
        result[4] += 0.042275172943889314;
        result[5] += 0.760184473481937;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        result[0] += 0.004524886877828055;
        result[1] += 0.9728506787330317;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.02262443438914027;
        result[5] += 0;
      } else {
        result[0] += 0.5917560700169396;
        result[1] += 0.04404291360813101;
        result[2] += 0.07396950875211745;
        result[3] += 0.09090909090909093;
        result[4] += 0.12309429700734051;
        result[5] += 0.07622811970638059;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)86) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.15789473684210525;
        result[3] += 0.02631578947368421;
        result[4] += 0.05263157894736842;
        result[5] += 0.7631578947368421;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.4111111111111111;
        result[3] += 0.37777777777777777;
        result[4] += 0;
        result[5] += 0.2111111111111111;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)98.5) ) ) {
        result[0] += 0;
        result[1] += 0.03571428571428571;
        result[2] += 0.5892857142857143;
        result[3] += 0.3125;
        result[4] += 0.017857142857142856;
        result[5] += 0.044642857142857144;
      } else {
        result[0] += 0.0047337278106508885;
        result[1] += 0;
        result[2] += 0.9420118343195267;
        result[3] += 0.04852071005917161;
        result[4] += 0;
        result[5] += 0.0047337278106508885;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.14114114114114115;
        result[1] += 0.05105105105105105;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7027027027027027;
        result[5] += 0.10510510510510511;
      } else {
        result[0] += 0.0008605851979345956;
        result[1] += 0.01549053356282272;
        result[2] += 0.004302925989672977;
        result[3] += 0.17728055077452667;
        result[4] += 0.04044750430292599;
        result[5] += 0.7616179001721171;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9502369668246445;
        result[2] += 0;
        result[3] += 0.004739336492890996;
        result[4] += 0.04265402843601896;
        result[5] += 0.002369668246445498;
      } else {
        result[0] += 0.589524318546232;
        result[1] += 0.03580972741849278;
        result[2] += 0.05879208979155532;
        result[3] += 0.08551576696953501;
        result[4] += 0.13415285943345803;
        result[5] += 0.09620523784072689;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)100.5) ) ) {
        result[0] += 0.046511627906976744;
        result[1] += 0;
        result[2] += 0.06976744186046512;
        result[3] += 0.6976744186046512;
        result[4] += 0.023255813953488372;
        result[5] += 0.16279069767441862;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9230769230769231;
        result[3] += 0.07692307692307693;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5;
        result[3] += 0.3108108108108108;
        result[4] += 0;
        result[5] += 0.1891891891891892;
      } else {
        result[0] += 0.012114537444933918;
        result[1] += 0;
        result[2] += 0.9207048458149778;
        result[3] += 0.061674008810572674;
        result[4] += 0;
        result[5] += 0.005506607929515418;
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)99) ) ) {
        result[0] += 0;
        result[1] += 0.014388489208633094;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9424460431654677;
        result[5] += 0.04316546762589928;
      } else {
        result[0] += 0;
        result[1] += 0.7777777777777778;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.2222222222222222;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)58) ) ) {
        result[0] += 0.8;
        result[1] += 0.0125;
        result[2] += 0;
        result[3] += 0.0375;
        result[4] += 0.09375;
        result[5] += 0.05625;
      } else {
        result[0] += 0.029239766081871343;
        result[1] += 0.006683375104427736;
        result[2] += 0.002506265664160401;
        result[3] += 0.10275689223057644;
        result[4] += 0.07017543859649122;
        result[5] += 0.7886382623224728;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.917184265010352;
        result[2] += 0.012422360248447204;
        result[3] += 0;
        result[4] += 0.07039337474120083;
        result[5] += 0;
      } else {
        result[0] += 0.7292445774121167;
        result[1] += 0.03664921465968586;
        result[2] += 0.02617801047120419;
        result[3] += 0.087509349289454;
        result[4] += 0.06806282722513089;
        result[5] += 0.05235602094240838;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0.022988505747126436;
        result[1] += 0.04885057471264368;
        result[2] += 0.21264367816091953;
        result[3] += 0.3793103448275862;
        result[4] += 0.04310344827586207;
        result[5] += 0.29310344827586204;
      } else {
        result[0] += 0.0527363184079602;
        result[1] += 0;
        result[2] += 0.8417910447761194;
        result[3] += 0.10049751243781095;
        result[4] += 0;
        result[5] += 0.004975124378109453;
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)65) ) ) {
        result[0] += 0.01749271137026239;
        result[1] += 0.03206997084548105;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8775510204081632;
        result[5] += 0.0728862973760933;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.21739130434782608;
        result[5] += 0.782608695652174;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
        result[0] += 0.7449664429530202;
        result[1] += 0.013422818791946308;
        result[2] += 0;
        result[3] += 0.006711409395973154;
        result[4] += 0.18791946308724833;
        result[5] += 0.04697986577181208;
      } else {
        result[0] += 0.01784121320249777;
        result[1] += 0.001784121320249777;
        result[2] += 0.001784121320249777;
        result[3] += 0.14272970561998216;
        result[4] += 0.060660124888492414;
        result[5] += 0.775200713648528;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        result[0] += 0.006818181818181818;
        result[1] += 0.9522727272727273;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.04090909090909091;
        result[5] += 0;
      } else {
        result[0] += 0.7201963534361852;
        result[1] += 0.04628330995792426;
        result[2] += 0.014726507713884993;
        result[3] += 0.08274894810659186;
        result[4] += 0.08274894810659186;
        result[5] += 0.05329593267882188;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)98.5) ) ) {
        result[0] += 0.03234501347708895;
        result[1] += 0.0026954177897574125;
        result[2] += 0.38544474393531;
        result[3] += 0.38005390835579517;
        result[4] += 0.013477088948787063;
        result[5] += 0.18598382749326145;
      } else {
        result[0] += 0.024134312696747113;
        result[1] += 0;
        result[2] += 0.8709338929695698;
        result[3] += 0.08814270724029381;
        result[4] += 0.002098635886673662;
        result[5] += 0.014690451206715634;
      }
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
        result[0] += 0.010948905109489052;
        result[1] += 0.040145985401459854;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9233576642335767;
        result[5] += 0.025547445255474453;
      } else {
        result[0] += 0;
        result[1] += 0.2463768115942029;
        result[2] += 0.014492753623188406;
        result[3] += 0.2318840579710145;
        result[4] += 0.2608695652173913;
        result[5] += 0.2463768115942029;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
        result[0] += 0.03294367693942614;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.04144527098831031;
        result[4] += 0.07863974495217853;
        result[5] += 0.8469713071200851;
      } else {
        result[0] += 0.10762331838565023;
        result[1] += 0;
        result[2] += 0.033632286995515695;
        result[3] += 0.4349775784753363;
        result[4] += 0.053811659192825115;
        result[5] += 0.36995515695067266;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6805194805194805;
        result[1] += 0.06558441558441558;
        result[2] += 0.033766233766233764;
        result[3] += 0.04090909090909091;
        result[4] += 0.10519480519480519;
        result[5] += 0.07402597402597402;
      } else {
        result[0] += 0.007352941176470588;
        result[1] += 0.9877450980392157;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.004901960784313725;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
        result[0] += 0.05802047781569966;
        result[1] += 0.034129692832764506;
        result[2] += 0.40273037542662116;
        result[3] += 0.2627986348122867;
        result[4] += 0.03754266211604096;
        result[5] += 0.20477815699658702;
      } else {
        result[0] += 0.005847953216374269;
        result[1] += 0;
        result[2] += 0.8807017543859649;
        result[3] += 0.10058479532163743;
        result[4] += 0;
        result[5] += 0.012865497076023392;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0.15384615384615385;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.6923076923076923;
        result[5] += 0.15384615384615385;
      } else {
        result[0] += 0;
        result[1] += 0.9977924944812362;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.002207505518763797;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)88.5) ) ) {
        result[0] += 0.06695464362850972;
        result[1] += 0.0021598272138228943;
        result[2] += 0;
        result[3] += 0.05759539236861051;
        result[4] += 0.24910007199424047;
        result[5] += 0.6241900647948164;
      } else {
        result[0] += 0.54185927067283;
        result[1] += 0.04776579352850539;
        result[2] += 0.06882383153569595;
        result[3] += 0.14227015921931177;
        result[4] += 0.08885464817668208;
        result[5] += 0.11042629686697483;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.20930232558139536;
        result[3] += 0.13953488372093023;
        result[4] += 0;
        result[5] += 0.6511627906976745;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.375;
        result[3] += 0.48214285714285715;
        result[4] += 0;
        result[5] += 0.14285714285714285;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6397058823529412;
        result[3] += 0.3455882352941177;
        result[4] += 0;
        result[5] += 0.014705882352941178;
      } else {
        result[0] += 0.010139416983523449;
        result[1] += 0.002534854245880862;
        result[2] += 0.9429657794676807;
        result[3] += 0.03422053231939164;
        result[4] += 0.002534854245880862;
        result[5] += 0.007604562737642586;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        result[0] += 0.003875968992248062;
        result[1] += 0.03488372093023256;
        result[2] += 0;
        result[3] += 0.007751937984496124;
        result[4] += 0.8837209302325582;
        result[5] += 0.06976744186046512;
      } else {
        result[0] += 0.03949730700179533;
        result[1] += 0.003590664272890485;
        result[2] += 0.0008976660682226212;
        result[3] += 0.13375224416517056;
        result[4] += 0.03859964093357271;
        result[5] += 0.7836624775583483;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        result[0] += 0.0017035775127768314;
        result[1] += 0.8449744463373083;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.14821124361158433;
        result[5] += 0.005110732538330494;
      } else {
        result[0] += 0.6928306551297898;
        result[1] += 0.024103831891223726;
        result[2] += 0.0457354758961681;
        result[3] += 0.08281829419035845;
        result[4] += 0.08405438813349814;
        result[5] += 0.07045735475896167;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)86) ) ) {
        result[0] += 0;
        result[1] += 0.0196078431372549;
        result[2] += 0;
        result[3] += 0.11764705882352941;
        result[4] += 0.0784313725490196;
        result[5] += 0.7843137254901961;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.15625;
        result[3] += 0.5859375;
        result[4] += 0;
        result[5] += 0.2578125;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)93.5) ) ) {
        result[0] += 0.02631578947368421;
        result[1] += 0;
        result[2] += 0.3026315789473684;
        result[3] += 0.05263157894736842;
        result[4] += 0.19736842105263158;
        result[5] += 0.42105263157894735;
      } else {
        result[0] += 0.012072434607645875;
        result[1] += 0.004024144869215292;
        result[2] += 0.8631790744466801;
        result[3] += 0.09959758551307847;
        result[4] += 0.006036217303822937;
        result[5] += 0.015090543259557344;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        result[0] += 0.018050541516245487;
        result[1] += 0.007220216606498195;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.851985559566787;
        result[5] += 0.12274368231046931;
      } else {
        result[0] += 0.01954120645709431;
        result[1] += 0.0237892948173322;
        result[2] += 0.01954120645709431;
        result[3] += 0.15632965165675447;
        result[4] += 0.03058623619371283;
        result[5] += 0.7502124044180118;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)52.5) ) ) {
        result[0] += 0;
        result[1] += 0.9841986455981941;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.01580135440180587;
        result[5] += 0;
      } else {
        result[0] += 0.6123535676251332;
        result[1] += 0.04313099041533546;
        result[2] += 0.056975505857294995;
        result[3] += 0.08626198083067092;
        result[4] += 0.10915867944621938;
        result[5] += 0.09211927582534611;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.2786885245901639;
        result[3] += 0.5737704918032787;
        result[4] += 0;
        result[5] += 0.14754098360655737;
      } else {
        result[0] += 0.025179856115107917;
        result[1] += 0.01798561151079137;
        result[2] += 0.6870503597122303;
        result[3] += 0.15107913669064751;
        result[4] += 0.014388489208633096;
        result[5] += 0.10431654676258995;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
        result[0] += 0.02097902097902098;
        result[1] += 0;
        result[2] += 0.8391608391608392;
        result[3] += 0.1258741258741259;
        result[4] += 0;
        result[5] += 0.013986013986013986;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.968365553602812;
        result[3] += 0.02460456942003515;
        result[4] += 0;
        result[5] += 0.007029876977152899;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0.0033783783783783786;
        result[1] += 0.04054054054054054;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9290540540540541;
        result[5] += 0.02702702702702703;
      } else {
        result[0] += 0.08752904725019364;
        result[1] += 0.0023237800154918666;
        result[2] += 0.009295120061967466;
        result[3] += 0.10534469403563129;
        result[4] += 0.07591014717273431;
        result[5] += 0.7195972114639814;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)58.5) ) ) {
        result[0] += 0;
        result[1] += 0.9716157205240175;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.028384279475982533;
        result[5] += 0;
      } else {
        result[0] += 0.6042296072507553;
        result[1] += 0.027794561933534745;
        result[2] += 0.04471299093655589;
        result[3] += 0.12084592145015106;
        result[4] += 0.06767371601208459;
        result[5] += 0.13474320241691842;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)87.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.08695652173913043;
        result[3] += 0.06521739130434782;
        result[4] += 0.32608695652173914;
        result[5] += 0.5217391304347826;
      } else {
        result[0] += 0.006250000000000001;
        result[1] += 0.08750000000000001;
        result[2] += 0.25625000000000003;
        result[3] += 0.47500000000000003;
        result[4] += 0.012500000000000002;
        result[5] += 0.16250000000000003;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
        result[0] += 0.45454545454545453;
        result[1] += 0;
        result[2] += 0.5227272727272727;
        result[3] += 0.022727272727272728;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.003424657534246575;
        result[1] += 0;
        result[2] += 0.9178082191780822;
        result[3] += 0.07534246575342465;
        result[4] += 0;
        result[5] += 0.003424657534246575;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.07317073170731707;
        result[2] += 0.003048780487804878;
        result[3] += 0.024390243902439025;
        result[4] += 0.8323170731707317;
        result[5] += 0.06707317073170732;
      } else {
        result[0] += 0.0829805249788315;
        result[1] += 0.000846740050804403;
        result[2] += 0.01100762066045724;
        result[3] += 0.0855207451312447;
        result[4] += 0.10668924640135478;
        result[5] += 0.7129551227773073;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        result[0] += 0.00684931506849315;
        result[1] += 0.9634703196347032;
        result[2] += 0.00228310502283105;
        result[3] += 0;
        result[4] += 0.0273972602739726;
        result[5] += 0;
      } else {
        result[0] += 0.6811125485122898;
        result[1] += 0.0258732212160414;
        result[2] += 0.0278137128072445;
        result[3] += 0.11254851228978008;
        result[4] += 0.0666235446313066;
        result[5] += 0.08602846054333764;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)88.5) ) ) {
        result[0] += 0;
        result[1] += 0.10606060606060606;
        result[2] += 0.03787878787878788;
        result[3] += 0.17424242424242425;
        result[4] += 0.12121212121212122;
        result[5] += 0.5606060606060606;
      } else {
        result[0] += 0.022598870056497175;
        result[1] += 0;
        result[2] += 0.3220338983050847;
        result[3] += 0.4971751412429379;
        result[4] += 0.005649717514124294;
        result[5] += 0.15254237288135594;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
        result[0] += 0.072;
        result[1] += 0;
        result[2] += 0.736;
        result[3] += 0.16533333333333333;
        result[4] += 0.008;
        result[5] += 0.018666666666666668;
      } else {
        result[0] += 0.0015408320493066256;
        result[1] += 0;
        result[2] += 0.9614791987673343;
        result[3] += 0.03697996918335902;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
        result[0] += 0.008298755186721992;
        result[1] += 0.04979253112033195;
        result[2] += 0;
        result[3] += 0.004149377593360996;
        result[4] += 0.9087136929460581;
        result[5] += 0.029045643153526972;
      } else {
        result[0] += 0.030110935023771792;
        result[1] += 0.010301109350237718;
        result[2] += 0.015055467511885896;
        result[3] += 0.15055467511885895;
        result[4] += 0.07606973058637084;
        result[5] += 0.7179080824088748;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)65) ) ) {
        result[0] += 0.0032258064516129037;
        result[1] += 0.8290322580645162;
        result[2] += 0.009677419354838712;
        result[3] += 0.00806451612903226;
        result[4] += 0.13548387096774198;
        result[5] += 0.014516129032258067;
      } else {
        result[0] += 0.7223288547664747;
        result[1] += 0.017914267434420986;
        result[2] += 0.04926423544465771;
        result[3] += 0.07869481765834933;
        result[4] += 0.06653870761356366;
        result[5] += 0.06525911708253358;
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)97.5) ) ) {
        result[0] += 0.022058823529411766;
        result[1] += 0.08823529411764706;
        result[2] += 0.09558823529411764;
        result[3] += 0.18382352941176472;
        result[4] += 0.051470588235294115;
        result[5] += 0.5588235294117647;
      } else {
        result[0] += 0.03508771929824561;
        result[1] += 0;
        result[2] += 0.7017543859649122;
        result[3] += 0.24561403508771928;
        result[4] += 0;
        result[5] += 0.017543859649122806;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
        result[0] += 0.0196078431372549;
        result[1] += 0;
        result[2] += 0.7226890756302521;
        result[3] += 0.19607843137254902;
        result[4] += 0;
        result[5] += 0.06162464985994398;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.964406779661017;
        result[3] += 0.03389830508474576;
        result[4] += 0;
        result[5] += 0.001694915254237288;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)95.5) ) ) {
        result[0] += 0.00881057268722467;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.960352422907489;
        result[5] += 0.030837004405286344;
      } else {
        result[0] += 0;
        result[1] += 0.25;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.25;
        result[5] += 0.5;
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)88.5) ) ) {
        result[0] += 0.038702928870292884;
        result[1] += 0.012552301255230125;
        result[2] += 0.005230125523012552;
        result[3] += 0.07322175732217573;
        result[4] += 0.05439330543933055;
        result[5] += 0.8158995815899581;
      } else {
        result[0] += 0.056666666666666664;
        result[1] += 0.04;
        result[2] += 0.04666666666666667;
        result[3] += 0.49;
        result[4] += 0.02666666666666667;
        result[5] += 0.34;
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.0017123287671232878;
        result[1] += 0.7945205479452055;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.1986301369863014;
        result[5] += 0.005136986301369864;
      } else {
        result[0] += 0.7517433751743375;
        result[1] += 0.017433751743375175;
        result[2] += 0.03626220362622036;
        result[3] += 0.058577405857740586;
        result[4] += 0.0794979079497908;
        result[5] += 0.056485355648535567;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        result[0] += 0.006211180124223602;
        result[1] += 0;
        result[2] += 0.2919254658385093;
        result[3] += 0.38198757763975155;
        result[4] += 0.055900621118012424;
        result[5] += 0.2639751552795031;
      } else {
        result[0] += 0.03903903903903905;
        result[1] += 0.0020020020020020024;
        result[2] += 0.864864864864865;
        result[3] += 0.06506506506506508;
        result[4] += 0.007007007007007008;
        result[5] += 0.022022022022022025;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        result[0] += 0.0031746031746031746;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.012698412698412698;
        result[4] += 0.8444444444444444;
        result[5] += 0.13968253968253969;
      } else {
        result[0] += 0.03127792672028597;
        result[1] += 0.005361930294906166;
        result[2] += 0.008936550491510277;
        result[3] += 0.15370866845397677;
        result[4] += 0.05719392314566577;
        result[5] += 0.743521000893655;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
        result[0] += 0;
        result[1] += 0.900398406374502;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.099601593625498;
        result[5] += 0;
      } else {
        result[0] += 0.6808641975308642;
        result[1] += 0.025308641975308643;
        result[2] += 0.047530864197530866;
        result[3] += 0.07469135802469136;
        result[4] += 0.10864197530864197;
        result[5] += 0.06296296296296296;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0.019867549668874173;
        result[2] += 0.033112582781456956;
        result[3] += 0.25165562913907286;
        result[4] += 0.033112582781456956;
        result[5] += 0.6622516556291391;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.42063492063492064;
        result[3] += 0.46825396825396826;
        result[4] += 0;
        result[5] += 0.1111111111111111;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
        result[0] += 0.16831683168316833;
        result[1] += 0.10891089108910891;
        result[2] += 0.37623762376237624;
        result[3] += 0.1782178217821782;
        result[4] += 0.009900990099009901;
        result[5] += 0.15841584158415842;
      } else {
        result[0] += 0.01008968609865471;
        result[1] += 0;
        result[2] += 0.9080717488789238;
        result[3] += 0.07174887892376683;
        result[4] += 0;
        result[5] += 0.01008968609865471;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
        result[0] += 0.13618677042801555;
        result[1] += 0.0038910505836575876;
        result[2] += 0;
        result[3] += 0.027237354085603113;
        result[4] += 0.708171206225681;
        result[5] += 0.1245136186770428;
      } else {
        result[0] += 0.0008787346221441124;
        result[1] += 0.004393673110720563;
        result[2] += 0.0026362038664323375;
        result[3] += 0.14411247803163443;
        result[4] += 0.056239015817223195;
        result[5] += 0.7917398945518453;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)56.5) ) ) {
        result[0] += 0;
        result[1] += 0.9376299376299376;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.060291060291060294;
        result[5] += 0.002079002079002079;
      } else {
        result[0] += 0.6585220500595947;
        result[1] += 0.043504171632896306;
        result[2] += 0.050059594755661505;
        result[3] += 0.07091775923718713;
        result[4] += 0.11263408820023837;
        result[5] += 0.06436233611442194;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)71.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.013513513513513514;
        result[3] += 0.0945945945945946;
        result[4] += 0.3783783783783784;
        result[5] += 0.5135135135135135;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.2926829268292683;
        result[3] += 0.4292682926829268;
        result[4] += 0.004878048780487805;
        result[5] += 0.2731707317073171;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
        result[0] += 0.37037037037037035;
        result[1] += 0.2222222222222222;
        result[2] += 0.1111111111111111;
        result[3] += 0.037037037037037035;
        result[4] += 0.25925925925925924;
        result[5] += 0;
      } else {
        result[0] += 0.008281573498964804;
        result[1] += 0;
        result[2] += 0.8964803312629399;
        result[3] += 0.08178053830227744;
        result[4] += 0.0010351966873706005;
        result[5] += 0.012422360248447204;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        result[0] += 0.0034965034965034965;
        result[1] += 0.038461538461538464;
        result[2] += 0;
        result[3] += 0.0034965034965034965;
        result[4] += 0.9195804195804196;
        result[5] += 0.03496503496503497;
      } else {
        result[0] += 0.07901234567901234;
        result[1] += 0.005761316872427984;
        result[2] += 0.00411522633744856;
        result[3] += 0.10205761316872428;
        result[4] += 0.09382716049382717;
        result[5] += 0.7152263374485597;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
        result[0] += 0.003929273084479372;
        result[1] += 0.9292730844793714;
        result[2] += 0.003929273084479372;
        result[3] += 0;
        result[4] += 0.05697445972495089;
        result[5] += 0.005893909626719058;
      } else {
        result[0] += 0.6163915765509391;
        result[1] += 0.024473534433693798;
        result[2] += 0.05919180421172453;
        result[3] += 0.1400113830392715;
        result[4] += 0.04496300512236767;
        result[5] += 0.11496869664200342;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
        result[0] += 0.02272727272727273;
        result[1] += 0.011363636363636366;
        result[2] += 0.06818181818181819;
        result[3] += 0.46590909090909094;
        result[4] += 0.06818181818181819;
        result[5] += 0.3636363636363637;
      } else {
        result[0] += 0.07142857142857142;
        result[1] += 0;
        result[2] += 0.7380952380952381;
        result[3] += 0.09523809523809523;
        result[4] += 0.023809523809523808;
        result[5] += 0.07142857142857142;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
        result[0] += 0.05555555555555556;
        result[1] += 0.33333333333333337;
        result[2] += 0.11111111111111112;
        result[3] += 0.05555555555555556;
        result[4] += 0;
        result[5] += 0.4444444444444445;
      } else {
        result[0] += 0.013172338090010977;
        result[1] += 0;
        result[2] += 0.9012074643249177;
        result[3] += 0.08342480790340286;
        result[4] += 0;
        result[5] += 0.0021953896816684962;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)67.5) ) ) {
        result[0] += 0.0017683465959328027;
        result[1] += 0.002652519893899204;
        result[2] += 0.002652519893899204;
        result[3] += 0.05305039787798409;
        result[4] += 0.1945181255526083;
        result[5] += 0.7453580901856764;
      } else {
        result[0] += 0.13610586011342155;
        result[1] += 0.022684310018903593;
        result[2] += 0.013232514177693762;
        result[3] += 0.31379962192816635;
        result[4] += 0.18714555765595464;
        result[5] += 0.3270321361058601;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)54.5) ) ) {
        result[0] += 0.002207505518763797;
        result[1] += 0.9646799116997793;
        result[2] += 0;
        result[3] += 0.004415011037527594;
        result[4] += 0.02869757174392936;
        result[5] += 0;
      } else {
        result[0] += 0.6321275291232373;
        result[1] += 0.045370938074800735;
        result[2] += 0.07786633966891478;
        result[3] += 0.0674432863274065;
        result[4] += 0.10852237890864501;
        result[5] += 0.06866952789699571;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)88.5) ) ) {
        result[0] += 0.028985507246376812;
        result[1] += 0;
        result[2] += 0.07246376811594203;
        result[3] += 0.13043478260869565;
        result[4] += 0.13043478260869565;
        result[5] += 0.6376811594202898;
      } else {
        result[0] += 0.02564102564102564;
        result[1] += 0;
        result[2] += 0.20512820512820512;
        result[3] += 0.6923076923076923;
        result[4] += 0;
        result[5] += 0.07692307692307693;
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.2708333333333333;
        result[3] += 0.3333333333333333;
        result[4] += 0;
        result[5] += 0.3958333333333333;
      } else {
        result[0] += 0.0183585313174946;
        result[1] += 0.008639308855291577;
        result[2] += 0.8758099352051836;
        result[3] += 0.08963282937365011;
        result[4] += 0;
        result[5] += 0.00755939524838013;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.028;
        result[2] += 0;
        result[3] += 0.02;
        result[4] += 0.86;
        result[5] += 0.092;
      } else {
        result[0] += 0.03400309119010819;
        result[1] += 0.00463678516228748;
        result[2] += 0.0038639876352395673;
        result[3] += 0.16383307573415765;
        result[4] += 0.0517774343122102;
        result[5] += 0.7418856259659969;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        result[0] += 0.002277904328018223;
        result[1] += 0.9749430523917996;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.022779043280182234;
        result[5] += 0;
      } else {
        result[0] += 0.6134220743205768;
        result[1] += 0.04326123128119801;
        result[2] += 0.06544647809206877;
        result[3] += 0.09151414309484193;
        result[4] += 0.11869107043815863;
        result[5] += 0.06766500277315585;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0.008547008547008548;
        result[1] += 0.017094017094017096;
        result[2] += 0.23931623931623933;
        result[3] += 0.37606837606837606;
        result[4] += 0.017094017094017096;
        result[5] += 0.3418803418803419;
      } else {
        result[0] += 0.01626016260162602;
        result[1] += 0;
        result[2] += 0.7073170731707318;
        result[3] += 0.24390243902439027;
        result[4] += 0;
        result[5] += 0.03252032520325204;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)72.5) ) ) {
        result[0] += 0.7142857142857143;
        result[1] += 0;
        result[2] += 0.2857142857142857;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.005089058524173029;
        result[1] += 0.005089058524173029;
        result[2] += 0.9338422391857507;
        result[3] += 0.052162849872773545;
        result[4] += 0;
        result[5] += 0.0038167938931297713;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        result[0] += 0.24944320712694878;
        result[1] += 0.015590200445434299;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.643652561247216;
        result[5] += 0.09131403118040089;
      } else {
        result[0] += 0.00186219739292365;
        result[1] += 0.0186219739292365;
        result[2] += 0.008379888268156424;
        result[3] += 0.09217877094972067;
        result[4] += 0.0633147113594041;
        result[5] += 0.8156424581005587;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        result[0] += 0.5744920993227992;
        result[1] += 0.03047404063205418;
        result[2] += 0.06489841986455984;
        result[3] += 0.1405191873589165;
        result[4] += 0.09142212189616254;
        result[5] += 0.09819413092550791;
      } else {
        result[0] += 0.013824884792626729;
        result[1] += 0.9861751152073732;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        result[0] += 0;
        result[1] += 0.04081632653061224;
        result[2] += 0.061224489795918366;
        result[3] += 0.3673469387755102;
        result[4] += 0.12244897959183673;
        result[5] += 0.40816326530612246;
      } else {
        result[0] += 0.06521739130434782;
        result[1] += 0.10869565217391304;
        result[2] += 0.6739130434782609;
        result[3] += 0.13043478260869565;
        result[4] += 0.021739130434782608;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.595959595959596;
        result[3] += 0.2828282828282829;
        result[4] += 0;
        result[5] += 0.12121212121212123;
      } else {
        result[0] += 0.00819672131147541;
        result[1] += 0;
        result[2] += 0.9215456674473068;
        result[3] += 0.06557377049180328;
        result[4] += 0;
        result[5] += 0.00468384074941452;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
        result[0] += 0.20912547528517111;
        result[1] += 0.034220532319391636;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7262357414448669;
        result[5] += 0.030418250950570342;
      } else {
        result[0] += 0.002259036144578313;
        result[1] += 0.005271084337349397;
        result[2] += 0.0007530120481927711;
        result[3] += 0.15210843373493976;
        result[4] += 0.07003012048192771;
        result[5] += 0.7695783132530121;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        result[0] += 0;
        result[1] += 0.8569023569023569;
        result[2] += 0;
        result[3] += 0.0016835016835016834;
        result[4] += 0.13636363636363635;
        result[5] += 0.005050505050505051;
      } else {
        result[0] += 0.6510480887792848;
        result[1] += 0.028360049321824902;
        result[2] += 0.07891491985203451;
        result[3] += 0.08816276202219481;
        result[4] += 0.07768187422934647;
        result[5] += 0.07583230579531441;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)106.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.12698412698412698;
        result[3] += 0.25396825396825395;
        result[4] += 0.015873015873015872;
        result[5] += 0.6031746031746031;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.8518518518518519;
        result[3] += 0.037037037037037035;
        result[4] += 0;
        result[5] += 0.1111111111111111;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        result[0] += 0.011661807580174927;
        result[1] += 0.02040816326530612;
        result[2] += 0.7463556851311953;
        result[3] += 0.19825072886297376;
        result[4] += 0.0058309037900874635;
        result[5] += 0.01749271137026239;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9556313993174061;
        result[3] += 0.023890784982935155;
        result[4] += 0.0017064846416382253;
        result[5] += 0.01877133105802048;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        result[0] += 0.007547169811320755;
        result[1] += 0.09433962264150944;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8377358490566038;
        result[5] += 0.06037735849056604;
      } else {
        result[0] += 0.04135021097046414;
        result[1] += 0.01181434599156118;
        result[2] += 0.0016877637130801688;
        result[3] += 0.13924050632911392;
        result[4] += 0.06919831223628692;
        result[5] += 0.7367088607594937;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        result[0] += 0.004889975550122249;
        result[1] += 0.960880195599022;
        result[2] += 0.0024449877750611247;
        result[3] += 0;
        result[4] += 0.03178484107579462;
        result[5] += 0;
      } else {
        result[0] += 0.5974842767295597;
        result[1] += 0.046645702306079666;
        result[2] += 0.06761006289308176;
        result[3] += 0.09329140461215933;
        result[4] += 0.09748427672955975;
        result[5] += 0.09748427672955975;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)88.5) ) ) {
        result[0] += 0.02631578947368421;
        result[1] += 0.18421052631578946;
        result[2] += 0;
        result[3] += 0.02631578947368421;
        result[4] += 0.05263157894736842;
        result[5] += 0.7105263157894737;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.3486238532110092;
        result[3] += 0.4954128440366973;
        result[4] += 0;
        result[5] += 0.1559633027522936;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
        result[0] += 0.01730103806228374;
        result[1] += 0;
        result[2] += 0.7647058823529411;
        result[3] += 0.17301038062283736;
        result[4] += 0.010380622837370242;
        result[5] += 0.03460207612456748;
      } else {
        result[0] += 0.003210272873194222;
        result[1] += 0;
        result[2] += 0.9727126805778492;
        result[3] += 0.01926163723916533;
        result[4] += 0;
        result[5] += 0.004815409309791333;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.017391304347826087;
        result[3] += 0;
        result[4] += 0.9652173913043478;
        result[5] += 0.017391304347826087;
      } else {
        result[0] += 0.4387755102040816;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.15306122448979592;
        result[5] += 0.40816326530612246;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
        result[0] += 0;
        result[1] += 0.002224694104560623;
        result[2] += 0.0011123470522803114;
        result[3] += 0.058954393770856504;
        result[4] += 0.04449388209121246;
        result[5] += 0.8932146829810901;
      } else {
        result[0] += 0;
        result[1] += 0.01488095238095238;
        result[2] += 0.008928571428571428;
        result[3] += 0.47023809523809523;
        result[4] += 0.07142857142857142;
        result[5] += 0.43452380952380953;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        result[0] += 0;
        result[1] += 0.838160136286201;
        result[2] += 0.0017035775127768314;
        result[3] += 0.0017035775127768314;
        result[4] += 0.15502555366269166;
        result[5] += 0.0034071550255536627;
      } else {
        result[0] += 0.7878787878787878;
        result[1] += 0.023960535588442564;
        result[2] += 0.013389711064129669;
        result[3] += 0.05426356589147287;
        result[4] += 0.07822410147991543;
        result[5] += 0.042283298097251586;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)97.5) ) ) {
        result[0] += 0.013513513513513516;
        result[1] += 0.006756756756756758;
        result[2] += 0.35472972972972977;
        result[3] += 0.3445945945945946;
        result[4] += 0.010135135135135137;
        result[5] += 0.27027027027027034;
      } else {
        result[0] += 0.029136316337148804;
        result[1] += 0.001040582726326743;
        result[2] += 0.8626430801248699;
        result[3] += 0.08220603537981269;
        result[4] += 0.001040582726326743;
        result[5] += 0.023933402705515087;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)47) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)77.5) ) ) {
        result[0] += 0;
        result[1] += 0.09090909090909091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9090909090909091;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.9835680751173709;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.01643192488262911;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
        result[0] += 0.030160857908847184;
        result[1] += 0.010053619302949061;
        result[2] += 0.00804289544235925;
        result[3] += 0.13672922252010725;
        result[4] += 0.19369973190348524;
        result[5] += 0.621313672922252;
      } else {
        result[0] += 0.621978021978022;
        result[1] += 0.051648351648351645;
        result[2] += 0.04230769230769231;
        result[3] += 0.08131868131868132;
        result[4] += 0.1087912087912088;
        result[5] += 0.09395604395604396;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.5238095238095238;
        result[4] += 0.047619047619047616;
        result[5] += 0.42857142857142855;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5862068965517241;
        result[3] += 0.3333333333333333;
        result[4] += 0;
        result[5] += 0.08045977011494253;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
        result[0] += 0.005319148936170213;
        result[1] += 0;
        result[2] += 0.7819148936170213;
        result[3] += 0.18085106382978725;
        result[4] += 0;
        result[5] += 0.031914893617021274;
      } else {
        result[0] += 0.010526315789473684;
        result[1] += 0;
        result[2] += 0.9394736842105263;
        result[3] += 0.046052631578947366;
        result[4] += 0;
        result[5] += 0.003947368421052632;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)66.5) ) ) {
        result[0] += 0;
        result[1] += 0.01507537688442211;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9849246231155779;
        result[5] += 0;
      } else {
        result[0] += 0.02666666666666667;
        result[1] += 0;
        result[2] += 0.02666666666666667;
        result[3] += 0.05333333333333334;
        result[4] += 0.56;
        result[5] += 0.3333333333333333;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
        result[0] += 0.03632694248234107;
        result[1] += 0.029263370332996974;
        result[2] += 0;
        result[3] += 0.03834510595358224;
        result[4] += 0.05247225025227043;
        result[5] += 0.8435923309788093;
      } else {
        result[0] += 0.014084507042253521;
        result[1] += 0;
        result[2] += 0.04225352112676056;
        result[3] += 0.5;
        result[4] += 0.014084507042253521;
        result[5] += 0.4295774647887324;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)104.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
        result[0] += 0.6899022801302932;
        result[1] += 0.04755700325732899;
        result[2] += 0.01758957654723127;
        result[3] += 0.04364820846905537;
        result[4] += 0.14788273615635178;
        result[5] += 0.053420195439739415;
      } else {
        result[0] += 0.025095057034220533;
        result[1] += 0.003041825095057034;
        result[2] += 0.7376425855513308;
        result[3] += 0.14068441064638784;
        result[4] += 0.011406844106463879;
        result[5] += 0.08212927756653993;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)108.5) ) ) {
        result[0] += 0;
        result[1] += 0.9928909952606635;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.0071090047393364926;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        result[0] += 0.0035460992907801418;
        result[1] += 0.07446808510638298;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.851063829787234;
        result[5] += 0.07092198581560284;
      } else {
        result[0] += 0.031914893617021274;
        result[1] += 0.009819967266775777;
        result[2] += 0.011456628477905073;
        result[3] += 0.1497545008183306;
        result[4] += 0.060556464811783964;
        result[5] += 0.7364975450081833;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
        result[0] += 0;
        result[1] += 0.890625;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.109375;
        result[5] += 0;
      } else {
        result[0] += 0.6918641896220372;
        result[1] += 0.01857783472133248;
        result[2] += 0.03651505445227419;
        result[3] += 0.07238949391415761;
        result[4] += 0.10954516335682256;
        result[5] += 0.07110826393337605;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
        result[0] += 0.03409090909090909;
        result[1] += 0.045454545454545456;
        result[2] += 0.045454545454545456;
        result[3] += 0.022727272727272728;
        result[4] += 0.11363636363636363;
        result[5] += 0.7386363636363636;
      } else {
        result[0] += 0.014492753623188408;
        result[1] += 0.019323671497584544;
        result[2] += 0.3091787439613527;
        result[3] += 0.4734299516908213;
        result[4] += 0.014492753623188408;
        result[5] += 0.16908212560386476;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
        result[0] += 0.37209302325581395;
        result[1] += 0;
        result[2] += 0.3488372093023256;
        result[3] += 0.20930232558139536;
        result[4] += 0;
        result[5] += 0.06976744186046512;
      } else {
        result[0] += 0.0043907793633369925;
        result[1] += 0;
        result[2] += 0.9012074643249177;
        result[3] += 0.08232711306256861;
        result[4] += 0;
        result[5] += 0.012074643249176729;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)61.5) ) ) {
        result[0] += 0.21038961038961038;
        result[1] += 0.015584415584415584;
        result[2] += 0;
        result[3] += 0.0025974025974025974;
        result[4] += 0.638961038961039;
        result[5] += 0.13246753246753246;
      } else {
        result[0] += 0.002002002002002002;
        result[1] += 0.008008008008008008;
        result[2] += 0;
        result[3] += 0.06606606606606606;
        result[4] += 0.08308308308308308;
        result[5] += 0.8408408408408409;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
        result[0] += 0;
        result[1] += 0.9596602972399151;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.040339702760084924;
        result[5] += 0;
      } else {
        result[0] += 0.6007005253940455;
        result[1] += 0.02918855808523059;
        result[2] += 0.05837711617046118;
        result[3] += 0.138353765323993;
        result[4] += 0.08056042031523643;
        result[5] += 0.09281961471103327;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.04838709677419355;
        result[3] += 0.016129032258064516;
        result[4] += 0.24193548387096775;
        result[5] += 0.6935483870967742;
      } else {
        result[0] += 0.06962025316455696;
        result[1] += 0.028481012658227847;
        result[2] += 0.33860759493670883;
        result[3] += 0.38924050632911394;
        result[4] += 0.02531645569620253;
        result[5] += 0.14873417721518986;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        result[0] += 0.012048192771084338;
        result[1] += 0;
        result[2] += 0.5903614457831325;
        result[3] += 0.3614457831325301;
        result[4] += 0;
        result[5] += 0.03614457831325301;
      } else {
        result[0] += 0.0012547051442910917;
        result[1] += 0;
        result[2] += 0.9397741530740277;
        result[3] += 0.05771643663739022;
        result[4] += 0;
        result[5] += 0.0012547051442910917;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
        result[0] += 0.004132231404958678;
        result[1] += 0.08677685950413223;
        result[2] += 0;
        result[3] += 0.028925619834710745;
        result[4] += 0.8388429752066116;
        result[5] += 0.04132231404958678;
      } else {
        result[0] += 0.03394039735099338;
        result[1] += 0.004966887417218543;
        result[2] += 0.015728476821192054;
        result[3] += 0.14072847682119205;
        result[4] += 0.061258278145695365;
        result[5] += 0.7433774834437086;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)57.5) ) ) {
        result[0] += 0;
        result[1] += 0.9050387596899225;
        result[2] += 0.003875968992248062;
        result[3] += 0;
        result[4] += 0.09108527131782945;
        result[5] += 0;
      } else {
        result[0] += 0.6226725082146769;
        result[1] += 0.02792990142387733;
        result[2] += 0.06133625410733844;
        result[3] += 0.08543263964950712;
        result[4] += 0.10186199342825848;
        result[5] += 0.10076670317634173;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
        result[0] += 0.04918032786885246;
        result[1] += 0.13114754098360656;
        result[2] += 0.1557377049180328;
        result[3] += 0.27049180327868855;
        result[4] += 0.05737704918032787;
        result[5] += 0.3360655737704918;
      } else {
        result[0] += 0.01612903225806452;
        result[1] += 0;
        result[2] += 0.7620967741935485;
        result[3] += 0.19354838709677422;
        result[4] += 0;
        result[5] += 0.028225806451612906;
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.8977272727272727;
        result[3] += 0.10227272727272728;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.006147540983606557;
        result[1] += 0;
        result[2] += 0.9692622950819673;
        result[3] += 0.018442622950819672;
        result[4] += 0;
        result[5] += 0.006147540983606557;
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 30;
  result[1] /= 30;
  result[2] /= 30;
  result[3] /= 30;
  result[4] /= 30;
  result[5] /= 30;
  
  // Apply base_scores
  result[0] += 0;
  result[1] += 0;
  result[2] += 0;
  result[3] += 0;
  result[4] += 0;
  result[5] += 0;
  
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
    

    FILE* file = fopen("./codegen/dataset_146/split_3/test_data.csv", "r");
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
