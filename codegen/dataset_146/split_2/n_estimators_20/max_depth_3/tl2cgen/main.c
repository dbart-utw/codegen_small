
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
  if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        result[0] += 0;
        result[1] += 0.007407407407407408;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8925925925925926;
        result[5] += 0.1;
      } else {
        result[0] += 0.03013029315960912;
        result[1] += 0.0024429967426710096;
        result[2] += 0.004885993485342019;
        result[3] += 0.13925081433224756;
        result[4] += 0.05456026058631922;
        result[5] += 0.7687296416938111;
      }
    } else {
      if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6594694632942628;
        result[1] += 0.07464528069093153;
        result[2] += 0.0283775447254781;
        result[3] += 0.07217766810610735;
        result[4] += 0.11165946946329426;
        result[5] += 0.05367057371992597;
      } else {
        result[0] += 0.0075;
        result[1] += 0.9775;
        result[2] += 0.01;
        result[3] += 0;
        result[4] += 0.005;
        result[5] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)84.5) ) ) {
        result[0] += 0;
        result[1] += 0.02702702702702703;
        result[2] += 0.05405405405405406;
        result[3] += 0.13513513513513514;
        result[4] += 0.06756756756756757;
        result[5] += 0.7162162162162162;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.18487394957983194;
        result[3] += 0.5546218487394958;
        result[4] += 0.03361344537815126;
        result[5] += 0.226890756302521;
      }
    } else {
      if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        result[0] += 0.03591160220994476;
        result[1] += 0.00828729281767956;
        result[2] += 0.6629834254143647;
        result[3] += 0.1961325966850829;
        result[4] += 0.041436464088397795;
        result[5] += 0.05524861878453039;
      } else {
        result[0] += 0.005319148936170213;
        result[1] += 0;
        result[2] += 0.9454787234042553;
        result[3] += 0.04654255319148936;
        result[4] += 0;
        result[5] += 0.0026595744680851063;
      }
    }
  }
  if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
      if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.12777777777777777;
        result[1] += 0.06111111111111111;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.6805555555555556;
        result[5] += 0.13055555555555556;
      } else {
        result[0] += 0;
        result[1] += 0.0062836624775583485;
        result[2] += 0.013464991023339317;
        result[3] += 0.14631956912028726;
        result[4] += 0.04937163375224417;
        result[5] += 0.7845601436265709;
      }
    } else {
      if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        result[0] += 0.0021141649048625794;
        result[1] += 0.9154334038054969;
        result[2] += 0;
        result[3] += 0.019027484143763214;
        result[4] += 0.06342494714587738;
        result[5] += 0;
      } else {
        result[0] += 0.5966759002770083;
        result[1] += 0.0260387811634349;
        result[2] += 0.07202216066481995;
        result[3] += 0.09196675900277008;
        result[4] += 0.10526315789473684;
        result[5] += 0.10803324099722991;
      }
    }
  } else {
    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
      if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0.013605442176870748;
        result[1] += 0.08843537414965986;
        result[2] += 0.1360544217687075;
        result[3] += 0.2789115646258503;
        result[4] += 0.10884353741496598;
        result[5] += 0.3741496598639456;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.8142857142857143;
        result[3] += 0.15714285714285714;
        result[4] += 0;
        result[5] += 0.02857142857142857;
      }
    } else {
      if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6576576576576577;
        result[3] += 0.2972972972972973;
        result[4] += 0;
        result[5] += 0.04504504504504504;
      } else {
        result[0] += 0.004021447721179625;
        result[1] += 0;
        result[2] += 0.9571045576407506;
        result[3] += 0.036193029490616625;
        result[4] += 0;
        result[5] += 0.002680965147453083;
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.007575757575757577;
        result[2] += 0.015151515151515154;
        result[3] += 0.034090909090909095;
        result[4] += 0.8901515151515152;
        result[5] += 0.05303030303030304;
      } else {
        result[0] += 0.056433408577878104;
        result[1] += 0.002257336343115124;
        result[2] += 0.002257336343115124;
        result[3] += 0.15500376222723852;
        result[4] += 0.07373965387509406;
        result[5] += 0.710308502633559;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
        result[0] += 0.01038062283737024;
        result[1] += 0.8512110726643597;
        result[2] += 0;
        result[3] += 0.00519031141868512;
        result[4] += 0.12629757785467124;
        result[5] += 0.006920415224913493;
      } else {
        result[0] += 0.7463617463617463;
        result[1] += 0.02564102564102564;
        result[2] += 0.033264033264033266;
        result[3] += 0.07345807345807345;
        result[4] += 0.07068607068607069;
        result[5] += 0.05058905058905059;
      }
    }
  } else {
    if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
      if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
        result[0] += 0.0189873417721519;
        result[1] += 0;
        result[2] += 0.23417721518987342;
        result[3] += 0.5759493670886076;
        result[4] += 0;
        result[5] += 0.17088607594936708;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.68;
        result[3] += 0.17333333333333334;
        result[4] += 0;
        result[5] += 0.14666666666666667;
      }
    } else {
      if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)87.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.8326693227091634;
        result[3] += 0.1294820717131474;
        result[4] += 0;
        result[5] += 0.037848605577689244;
      } else {
        result[0] += 0.039832285115303984;
        result[1] += 0;
        result[2] += 0.9517819706498952;
        result[3] += 0.006289308176100629;
        result[4] += 0;
        result[5] += 0.0020964360587002098;
      }
    }
  }
  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
    if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
        result[0] += 0.14334470989761092;
        result[1] += 0.013651877133105802;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7815699658703071;
        result[5] += 0.06143344709897611;
      } else {
        result[0] += 0.005733005733005733;
        result[1] += 0.003276003276003276;
        result[2] += 0.000819000819000819;
        result[3] += 0.14086814086814087;
        result[4] += 0.062244062244062245;
        result[5] += 0.7870597870597871;
      }
    } else {
      if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)56.5) ) ) {
        result[0] += 0.01128668171557562;
        result[1] += 0.9097065462753948;
        result[2] += 0;
        result[3] += 0.004514672686230247;
        result[4] += 0.06546275395033858;
        result[5] += 0.009029345372460494;
      } else {
        result[0] += 0.6718555417185554;
        result[1] += 0.05790784557907846;
        result[2] += 0.039850560398505604;
        result[3] += 0.0684931506849315;
        result[4] += 0.1133250311332503;
        result[5] += 0.048567870485678705;
      }
    }
  } else {
    if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)82.5) ) ) {
      if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
        result[0] += 0;
        result[1] += 0.014492753623188406;
        result[2] += 0.07971014492753623;
        result[3] += 0.3333333333333333;
        result[4] += 0.021739130434782608;
        result[5] += 0.5507246376811594;
      } else {
        result[0] += 0.1102661596958175;
        result[1] += 0.04562737642585552;
        result[2] += 0.5779467680608366;
        result[3] += 0.16349809885931563;
        result[4] += 0.02661596958174905;
        result[5] += 0.07604562737642587;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
        result[0] += 0.02857142857142857;
        result[1] += 0;
        result[2] += 0.42857142857142855;
        result[3] += 0.4;
        result[4] += 0;
        result[5] += 0.14285714285714285;
      } else {
        result[0] += 0.0012091898428053204;
        result[1] += 0;
        result[2] += 0.9201934703748489;
        result[3] += 0.0761789600967352;
        result[4] += 0;
        result[5] += 0.0024183796856106408;
      }
    }
  }
  if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
    if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
      if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.005076142131979695;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9898477157360406;
        result[5] += 0.005076142131979695;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.045454545454545456;
        result[3] += 0.045454545454545456;
        result[4] += 0.5;
        result[5] += 0.4090909090909091;
      }
    } else {
      if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
        result[0] += 0.0013440860215053765;
        result[1] += 0;
        result[2] += 0.006720430107526882;
        result[3] += 0.033602150537634407;
        result[4] += 0.038978494623655914;
        result[5] += 0.9193548387096774;
      } else {
        result[0] += 0.05850091407678245;
        result[1] += 0.04936014625228519;
        result[2] += 0.027422303473491772;
        result[3] += 0.3016453382084095;
        result[4] += 0.08043875685557587;
        result[5] += 0.4826325411334552;
      }
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)52.5) ) ) {
      if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)90.5) ) ) {
        result[0] += 0;
        result[1] += 0.37037037037037035;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.6296296296296297;
        result[5] += 0;
      } else {
        result[0] += 0.002320185614849188;
        result[1] += 0.9930394431554525;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.004640371229698376;
        result[5] += 0;
      }
    } else {
      if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
        result[0] += 0.6511226252158894;
        result[1] += 0.02993667242371905;
        result[2] += 0.04778353483016694;
        result[3] += 0.07714450201496832;
        result[4] += 0.12089810017271155;
        result[5] += 0.07311456534254461;
      } else {
        result[0] += 0.014272970561998216;
        result[1] += 0.0008920606601248885;
        result[2] += 0.8153434433541481;
        result[3] += 0.10526315789473684;
        result[4] += 0.01694915254237288;
        result[5] += 0.04727921498661909;
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.07407407407407407;
        result[2] += 0;
        result[3] += 0.003703703703703704;
        result[4] += 0.8851851851851852;
        result[5] += 0.037037037037037035;
      } else {
        result[0] += 0.050911854103343465;
        result[1] += 0.013677811550151976;
        result[2] += 0.004559270516717325;
        result[3] += 0.1466565349544073;
        result[4] += 0.08054711246200608;
        result[5] += 0.7036474164133738;
      }
    } else {
      if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        result[0] += 0.008097165991902836;
        result[1] += 0.8461538461538463;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.1376518218623482;
        result[5] += 0.008097165991902836;
      } else {
        result[0] += 0.7523302263648467;
        result[1] += 0.04527296937416777;
        result[2] += 0.014647137150466042;
        result[3] += 0.05193075898801597;
        result[4] += 0.05992010652463381;
        result[5] += 0.07589880159786949;
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)95.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0743801652892562;
        result[3] += 0.6942148760330579;
        result[4] += 0.008264462809917356;
        result[5] += 0.2231404958677686;
      } else {
        result[0] += 0.012658227848101266;
        result[1] += 0;
        result[2] += 0.4430379746835443;
        result[3] += 0.3860759493670886;
        result[4] += 0;
        result[5] += 0.15822784810126583;
      }
    } else {
      if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)96.5) ) ) {
        result[0] += 0.02040816326530612;
        result[1] += 0;
        result[2] += 0.5102040816326531;
        result[3] += 0.16326530612244897;
        result[4] += 0;
        result[5] += 0.30612244897959184;
      } else {
        result[0] += 0.017467248908296942;
        result[1] += 0;
        result[2] += 0.925764192139738;
        result[3] += 0.05131004366812227;
        result[4] += 0.001091703056768559;
        result[5] += 0.004366812227074236;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)95) ) ) {
      if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.2892416225749559;
        result[1] += 0.0564373897707231;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.5731922398589065;
        result[5] += 0.08112874779541446;
      } else {
        result[0] += 0.016253869969040248;
        result[1] += 0.010835913312693499;
        result[2] += 0.02476780185758514;
        result[3] += 0.1563467492260062;
        result[4] += 0.08126934984520123;
        result[5] += 0.7105263157894737;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.9186991869918699;
        result[2] += 0;
        result[3] += 0.014227642276422764;
        result[4] += 0.0508130081300813;
        result[5] += 0.016260162601626018;
      } else {
        result[0] += 0.8070796460176992;
        result[1] += 0.023008849557522127;
        result[2] += 0.03716814159292036;
        result[3] += 0.04955752212389381;
        result[4] += 0.05309734513274337;
        result[5] += 0.030088495575221242;
      }
    }
  } else {
    if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
      if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0.007380073800738007;
        result[1] += 0.014760147601476014;
        result[2] += 0.12915129151291513;
        result[3] += 0.45387453874538747;
        result[4] += 0.04428044280442804;
        result[5] += 0.3505535055350554;
      } else {
        result[0] += 0.03225806451612903;
        result[1] += 0;
        result[2] += 0.7526881720430108;
        result[3] += 0.21505376344086022;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
        result[0] += 0.07142857142857144;
        result[1] += 0;
        result[2] += 0.28571428571428575;
        result[3] += 0.16666666666666669;
        result[4] += 0.07142857142857144;
        result[5] += 0.4047619047619048;
      } else {
        result[0] += 0.04046858359957402;
        result[1] += 0.002129925452609159;
        result[2] += 0.8871139510117146;
        result[3] += 0.0617678381256656;
        result[4] += 0;
        result[5] += 0.008519701810436636;
      }
    }
  }
  if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)82.5) ) ) {
    if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
        result[0] += 0;
        result[1] += 0.07120743034055728;
        result[2] += 0;
        result[3] += 0.015479876160990712;
        result[4] += 0.8390092879256966;
        result[5] += 0.07430340557275542;
      } else {
        result[0] += 0.04047619047619048;
        result[1] += 0;
        result[2] += 0.013492063492063493;
        result[3] += 0.1634920634920635;
        result[4] += 0.06111111111111111;
        result[5] += 0.7214285714285714;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        result[0] += 0.002386634844868735;
        result[1] += 0.9570405727923628;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.0405727923627685;
        result[5] += 0;
      } else {
        result[0] += 0.5759870200108167;
        result[1] += 0.03569497025419145;
        result[2] += 0.09356408869659276;
        result[3] += 0.08274743104380747;
        result[4] += 0.10059491617090319;
        result[5] += 0.11141157382368848;
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)92.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.1590909090909091;
        result[3] += 0;
        result[4] += 0.11363636363636363;
        result[5] += 0.7272727272727273;
      } else {
        result[0] += 0.019047619047619053;
        result[1] += 0.13333333333333336;
        result[2] += 0.380952380952381;
        result[3] += 0.36190476190476195;
        result[4] += 0;
        result[5] += 0.10476190476190478;
      }
    } else {
      if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
        result[0] += 0.04142011834319527;
        result[1] += 0;
        result[2] += 0.7751479289940828;
        result[3] += 0.17751479289940827;
        result[4] += 0;
        result[5] += 0.005917159763313609;
      } else {
        result[0] += 0.0015220700152207;
        result[1] += 0;
        result[2] += 0.954337899543379;
        result[3] += 0.0395738203957382;
        result[4] += 0;
        result[5] += 0.0045662100456621;
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        result[0] += 0.009174311926605505;
        result[1] += 0.022935779816513763;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.926605504587156;
        result[5] += 0.04128440366972477;
      } else {
        result[0] += 0.026006711409395974;
        result[1] += 0.012583892617449664;
        result[2] += 0.0041946308724832215;
        result[3] += 0.13842281879194632;
        result[4] += 0.06291946308724833;
        result[5] += 0.7558724832214765;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.0017699115044247787;
        result[1] += 0.7964601769911505;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.2;
        result[5] += 0.0017699115044247787;
      } else {
        result[0] += 0.7213541666666667;
        result[1] += 0.02799479166666667;
        result[2] += 0.014322916666666668;
        result[3] += 0.07421875000000001;
        result[4] += 0.07812500000000001;
        result[5] += 0.08398437500000001;
      }
    }
  } else {
    if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
      if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0.014925373134328358;
        result[2] += 0.05970149253731343;
        result[3] += 0.5522388059701493;
        result[4] += 0;
        result[5] += 0.373134328358209;
      } else {
        result[0] += 0.07692307692307693;
        result[1] += 0;
        result[2] += 0.6410256410256411;
        result[3] += 0.20512820512820512;
        result[4] += 0;
        result[5] += 0.07692307692307693;
      }
    } else {
      if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5443786982248521;
        result[3] += 0.33136094674556216;
        result[4] += 0;
        result[5] += 0.1242603550295858;
      } else {
        result[0] += 0.027837259100642397;
        result[1] += 0;
        result[2] += 0.8993576017130621;
        result[3] += 0.06638115631691649;
        result[4] += 0.0010706638115631692;
        result[5] += 0.0053533190578158455;
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
        result[0] += 0.00749063670411985;
        result[1] += 0.026217228464419477;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9438202247191011;
        result[5] += 0.02247191011235955;
      } else {
        result[0] += 0.06254653760238273;
        result[1] += 0.00967982129560685;
        result[2] += 0;
        result[3] += 0.1340282948622487;
        result[4] += 0.08041697691734921;
        result[5] += 0.7133283693224125;
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)104.5) ) ) {
        result[0] += 0.6831619537275064;
        result[1] += 0.056555269922879174;
        result[2] += 0.03984575835475578;
        result[3] += 0.04562982005141388;
        result[4] += 0.11246786632390746;
        result[5] += 0.062339331619537273;
      } else {
        result[0] += 0.002702702702702703;
        result[1] += 0.9918918918918919;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.005405405405405406;
        result[5] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
      if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.05921052631578947;
        result[3] += 0.4868421052631579;
        result[4] += 0.03289473684210526;
        result[5] += 0.42105263157894735;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5689655172413793;
        result[3] += 0.3017241379310345;
        result[4] += 0;
        result[5] += 0.12931034482758622;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0.04950495049504951;
        result[2] += 0.48514851485148514;
        result[3] += 0.37623762376237624;
        result[4] += 0.0297029702970297;
        result[5] += 0.0594059405940594;
      } else {
        result[0] += 0.009771986970684038;
        result[1] += 0.0010857763300760044;
        result[2] += 0.9163952225841476;
        result[3] += 0.06188925081433225;
        result[4] += 0;
        result[5] += 0.010857763300760043;
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
    if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.045283018867924525;
        result[2] += 0;
        result[3] += 0.04150943396226415;
        result[4] += 0.8679245283018868;
        result[5] += 0.045283018867924525;
      } else {
        result[0] += 0.03228621291448516;
        result[1] += 0.0017452006980802793;
        result[2] += 0;
        result[3] += 0.1082024432809773;
        result[4] += 0.0549738219895288;
        result[5] += 0.8027923211169284;
      }
    } else {
      if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)104.5) ) ) {
        result[0] += 0.6473429951690822;
        result[1] += 0.06582125603864736;
        result[2] += 0.022342995169082128;
        result[3] += 0.06582125603864736;
        result[4] += 0.1340579710144928;
        result[5] += 0.06461352657004832;
      } else {
        result[0] += 0.007263922518159807;
        result[1] += 0.9927360774818402;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
        result[0] += 0;
        result[1] += 0.05952380952380952;
        result[2] += 0.047619047619047616;
        result[3] += 0.16666666666666666;
        result[4] += 0.09523809523809523;
        result[5] += 0.6309523809523809;
      } else {
        result[0] += 0.011904761904761904;
        result[1] += 0;
        result[2] += 0.21428571428571427;
        result[3] += 0.5634920634920635;
        result[4] += 0.003968253968253968;
        result[5] += 0.20634920634920634;
      }
    } else {
      if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
        result[0] += 0.3170731707317073;
        result[1] += 0;
        result[2] += 0.2926829268292683;
        result[3] += 0.2682926829268293;
        result[4] += 0;
        result[5] += 0.12195121951219512;
      } else {
        result[0] += 0.007223942208462332;
        result[1] += 0;
        result[2] += 0.8926728586171311;
        result[3] += 0.09081527347781218;
        result[4] += 0;
        result[5] += 0.009287925696594427;
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)74.5) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        result[0] += 0.007017543859649123;
        result[1] += 0.06315789473684211;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9228070175438596;
        result[5] += 0.007017543859649123;
      } else {
        result[0] += 0.04510703363914373;
        result[1] += 0.0191131498470948;
        result[2] += 0.019877675840978593;
        result[3] += 0.14831804281345565;
        result[4] += 0.0581039755351682;
        result[5] += 0.709480122324159;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)52.5) ) ) {
        result[0] += 0.0021929824561403508;
        result[1] += 0.9627192982456141;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.03508771929824561;
        result[5] += 0;
      } else {
        result[0] += 0.6372147454651843;
        result[1] += 0.021064950263311878;
        result[2] += 0.06319485078993564;
        result[3] += 0.07899356348741954;
        result[4] += 0.12229373902867174;
        result[5] += 0.07723815096547688;
      }
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
      if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0.028985507246376812;
        result[2] += 0.2608695652173913;
        result[3] += 0.5797101449275363;
        result[4] += 0;
        result[5] += 0.13043478260869565;
      } else {
        result[0] += 0.015444015444015446;
        result[1] += 0.007722007722007723;
        result[2] += 0.698841698841699;
        result[3] += 0.17760617760617764;
        result[4] += 0.02316602316602317;
        result[5] += 0.07722007722007723;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
        result[0] += 0;
        result[1] += 0.15;
        result[2] += 0.4;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.45;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9513888888888888;
        result[3] += 0.04722222222222222;
        result[4] += 0;
        result[5] += 0.001388888888888889;
      }
    }
  }
  if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
      if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)89.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.01507537688442211;
        result[4] += 0.9748743718592965;
        result[5] += 0.010050251256281407;
      } else {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
        result[0] += 0.040082219938335044;
        result[1] += 0.0020554984583761563;
        result[2] += 0.0020554984583761563;
        result[3] += 0.045220966084275435;
        result[4] += 0.051387461459403906;
        result[5] += 0.8591983556012333;
      } else {
        result[0] += 0.03466666666666667;
        result[1] += 0.053333333333333344;
        result[2] += 0.024000000000000004;
        result[3] += 0.45333333333333337;
        result[4] += 0.03466666666666667;
        result[5] += 0.4000000000000001;
      }
    }
  } else {
    if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
      if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)104.5) ) ) {
        result[0] += 0.6679081315952824;
        result[1] += 0.05834885164494103;
        result[2] += 0.027312228429546864;
        result[3] += 0.051520794537554315;
        result[4] += 0.13904407200496585;
        result[5] += 0.055865921787709494;
      } else {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        result[0] += 0.011494252873563218;
        result[1] += 0.01532567049808429;
        result[2] += 0.3218390804597701;
        result[3] += 0.41762452107279696;
        result[4] += 0.05363984674329502;
        result[5] += 0.18007662835249041;
      } else {
        result[0] += 0.0326530612244898;
        result[1] += 0.00816326530612245;
        result[2] += 0.8836734693877552;
        result[3] += 0.06428571428571428;
        result[4] += 0;
        result[5] += 0.011224489795918367;
      }
    }
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.14285714285714285;
        result[1] += 0.036544850498338874;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7142857142857143;
        result[5] += 0.10631229235880399;
      } else {
        result[0] += 0.0008532423208191126;
        result[1] += 0.006825938566552901;
        result[2] += 0.008532423208191127;
        result[3] += 0.14590443686006827;
        result[4] += 0.05716723549488054;
        result[5] += 0.7807167235494881;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9537444933920705;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.046255506607929514;
        result[5] += 0;
      } else {
        result[0] += 0.6194882961350028;
        result[1] += 0.03157321720195972;
        result[2] += 0.05661404463799674;
        result[3] += 0.07838867719107241;
        result[4] += 0.12084921066956997;
        result[5] += 0.09308655416439848;
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)101.5) ) ) {
        result[0] += 0;
        result[1] += 0.01020408163265306;
        result[2] += 0.22448979591836735;
        result[3] += 0.6122448979591837;
        result[4] += 0.01020408163265306;
        result[5] += 0.14285714285714285;
      } else {
        result[0] += 0.10416666666666667;
        result[1] += 0.0625;
        result[2] += 0.5;
        result[3] += 0.10416666666666667;
        result[4] += 0;
        result[5] += 0.22916666666666666;
      }
    } else {
      if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
        result[0] += 0.01384083044982699;
        result[1] += 0;
        result[2] += 0.8408304498269896;
        result[3] += 0.1384083044982699;
        result[4] += 0;
        result[5] += 0.006920415224913495;
      } else {
        result[0] += 0.012759170653907496;
        result[1] += 0;
        result[2] += 0.9537480063795853;
        result[3] += 0.03189792663476874;
        result[4] += 0;
        result[5] += 0.001594896331738437;
      }
    }
  }
  if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.012232415902140673;
        result[1] += 0.021406727828746176;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8960244648318043;
        result[5] += 0.07033639143730887;
      } else {
        result[0] += 0.08517887563884156;
        result[1] += 0.004258943781942078;
        result[2] += 0.008517887563884156;
        result[3] += 0.09454855195911414;
        result[4] += 0.07155025553662692;
        result[5] += 0.7359454855195912;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
        result[0] += 0.004201680672268908;
        result[1] += 0.9495798319327732;
        result[2] += 0;
        result[3] += 0.002100840336134454;
        result[4] += 0.04411764705882354;
        result[5] += 0;
      } else {
        result[0] += 0.6538461538461539;
        result[1] += 0.038461538461538464;
        result[2] += 0.0469361147327249;
        result[3] += 0.10430247718383312;
        result[4] += 0.06779661016949153;
        result[5] += 0.08865710560625815;
      }
    }
  } else {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)86) ) ) {
        result[0] += 0.01639344262295082;
        result[1] += 0.08196721311475409;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.36065573770491804;
        result[5] += 0.5409836065573771;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.31802120141342755;
        result[3] += 0.47703180212014135;
        result[4] += 0;
        result[5] += 0.2049469964664311;
      }
    } else {
      if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
        result[0] += 0.40625;
        result[1] += 0;
        result[2] += 0.53125;
        result[3] += 0.0625;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.003194888178913738;
        result[1] += 0;
        result[2] += 0.9243876464323749;
        result[3] += 0.06496272630457935;
        result[4] += 0;
        result[5] += 0.007454739084132056;
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.052845528455284556;
        result[2] += 0;
        result[3] += 0.012195121951219513;
        result[4] += 0.8821138211382114;
        result[5] += 0.052845528455284556;
      } else {
        result[0] += 0.03246239113222486;
        result[1] += 0.00395882818685669;
        result[2] += 0.011084718923198733;
        result[3] += 0.1369754552652415;
        result[4] += 0.07600950118764846;
        result[5] += 0.7395091053048297;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        result[0] += 0.0017543859649122807;
        result[1] += 0.8298245614035088;
        result[2] += 0;
        result[3] += 0.005263157894736842;
        result[4] += 0.1631578947368421;
        result[5] += 0;
      } else {
        result[0] += 0.7297297297297297;
        result[1] += 0.03986486486486487;
        result[2] += 0.015540540540540541;
        result[3] += 0.05405405405405406;
        result[4] += 0.08378378378378379;
        result[5] += 0.07702702702702703;
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)85.5) ) ) {
        result[0] += 0.004975124378109453;
        result[1] += 0;
        result[2] += 0.1691542288557214;
        result[3] += 0.5920398009950248;
        result[4] += 0.014925373134328358;
        result[5] += 0.21890547263681592;
      } else {
        result[0] += 0.10344827586206896;
        result[1] += 0;
        result[2] += 0.6724137931034483;
        result[3] += 0.06896551724137931;
        result[4] += 0;
        result[5] += 0.15517241379310345;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
        result[0] += 0.19767441860465115;
        result[1] += 0;
        result[2] += 0.627906976744186;
        result[3] += 0.09302325581395349;
        result[4] += 0.011627906976744186;
        result[5] += 0.06976744186046512;
      } else {
        result[0] += 0.007592190889370932;
        result[1] += 0;
        result[2] += 0.9219088937093276;
        result[3] += 0.06290672451193059;
        result[4] += 0;
        result[5] += 0.007592190889370932;
      }
    }
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.03361344537815126;
        result[2] += 0;
        result[3] += 0.029411764705882353;
        result[4] += 0.8697478991596639;
        result[5] += 0.06722689075630252;
      } else {
        result[0] += 0.027472527472527472;
        result[1] += 0.022762951334379906;
        result[2] += 0.00706436420722135;
        result[3] += 0.15934065934065933;
        result[4] += 0.05729984301412873;
        result[5] += 0.7260596546310832;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)59) ) ) {
        result[0] += 0;
        result[1] += 0.8448598130841122;
        result[2] += 0;
        result[3] += 0.013084112149532711;
        result[4] += 0.14205607476635515;
        result[5] += 0;
      } else {
        result[0] += 0.6370588235294118;
        result[1] += 0.02176470588235294;
        result[2] += 0.07058823529411765;
        result[3] += 0.0811764705882353;
        result[4] += 0.09588235294117647;
        result[5] += 0.09352941176470589;
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
        result[0] += 0.023809523809523808;
        result[1] += 0.023809523809523808;
        result[2] += 0.14285714285714285;
        result[3] += 0.39285714285714285;
        result[4] += 0.023809523809523808;
        result[5] += 0.39285714285714285;
      } else {
        result[0] += 0.04;
        result[1] += 0;
        result[2] += 0.68;
        result[3] += 0.24;
        result[4] += 0;
        result[5] += 0.04;
      }
    } else {
      if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
        result[0] += 0.03717472118959108;
        result[1] += 0.0037174721189591076;
        result[2] += 0.7992565055762082;
        result[3] += 0.15613382899628253;
        result[4] += 0;
        result[5] += 0.0037174721189591076;
      } else {
        result[0] += 0.0031948881789137383;
        result[1] += 0.0015974440894568692;
        result[2] += 0.9664536741214058;
        result[3] += 0.027156549520766776;
        result[4] += 0;
        result[5] += 0.0015974440894568692;
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        result[0] += 0.006622516556291391;
        result[1] += 0.03642384105960265;
        result[2] += 0.009933774834437087;
        result[3] += 0.0033112582781456954;
        result[4] += 0.9172185430463576;
        result[5] += 0.026490066225165563;
      } else {
        result[0] += 0.07841552142279709;
        result[1] += 0.004042037186742118;
        result[2] += 0;
        result[3] += 0.09458367016976556;
        result[4] += 0.08326596604688763;
        result[5] += 0.7396928051738076;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)66.5) ) ) {
        result[0] += 0.011278195488721806;
        result[1] += 0.8815789473684211;
        result[2] += 0.0018796992481203009;
        result[3] += 0.005639097744360903;
        result[4] += 0.09398496240601505;
        result[5] += 0.005639097744360903;
      } else {
        result[0] += 0.6141592920353982;
        result[1] += 0.011799410029498525;
        result[2] += 0.08023598820058997;
        result[3] += 0.1752212389380531;
        result[4] += 0.04070796460176991;
        result[5] += 0.07787610619469026;
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
      if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0.09836065573770492;
        result[2] += 0.13114754098360656;
        result[3] += 0.18032786885245902;
        result[4] += 0.04918032786885246;
        result[5] += 0.5409836065573771;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5581395348837209;
        result[3] += 0.3643410852713178;
        result[4] += 0;
        result[5] += 0.07751937984496124;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
        result[0] += 0.02857142857142857;
        result[1] += 0.2571428571428571;
        result[2] += 0.2;
        result[3] += 0.05714285714285714;
        result[4] += 0;
        result[5] += 0.45714285714285713;
      } else {
        result[0] += 0.013173652694610778;
        result[1] += 0.0011976047904191617;
        result[2] += 0.9245508982035928;
        result[3] += 0.04910179640718563;
        result[4] += 0;
        result[5] += 0.011976047904191617;
      }
    }
  }
  if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.011583011583011582;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.972972972972973;
        result[5] += 0.015444015444015444;
      } else {
        result[0] += 0.03733121525019857;
        result[1] += 0.0015885623510722795;
        result[2] += 0.0023828435266084196;
        result[3] += 0.14138204924543288;
        result[4] += 0.05877680698967434;
        result[5] += 0.7585385226370135;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.001769911504424779;
        result[1] += 0.8176991150442479;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.18053097345132746;
        result[5] += 0;
      } else {
        result[0] += 0.6680722891566265;
        result[1] += 0.01746987951807229;
        result[2] += 0.0789156626506024;
        result[3] += 0.09216867469879518;
        result[4] += 0.0608433734939759;
        result[5] += 0.0825301204819277;
      }
    }
  } else {
    if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)99) ) ) {
        result[0] += 0.008403361344537815;
        result[1] += 0;
        result[2] += 0.25210084033613445;
        result[3] += 0.42016806722689076;
        result[4] += 0.08403361344537816;
        result[5] += 0.23529411764705882;
      } else {
        result[0] += 0.0975609756097561;
        result[1] += 0.04065040650406504;
        result[2] += 0.6178861788617886;
        result[3] += 0.12195121951219512;
        result[4] += 0.008130081300813009;
        result[5] += 0.11382113821138211;
      }
    } else {
      if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)97.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6946564885496184;
        result[3] += 0.2595419847328244;
        result[4] += 0;
        result[5] += 0.04580152671755725;
      } else {
        result[0] += 0.0014084507042253522;
        result[1] += 0;
        result[2] += 0.952112676056338;
        result[3] += 0.04507042253521127;
        result[4] += 0;
        result[5] += 0.0014084507042253522;
      }
    }
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.08085106382978724;
        result[2] += 0;
        result[3] += 0.00425531914893617;
        result[4] += 0.851063829787234;
        result[5] += 0.06382978723404255;
      } else {
        result[0] += 0.03288364249578415;
        result[1] += 0.008431703204047217;
        result[2] += 0.007588532883642495;
        result[3] += 0.13827993254637436;
        result[4] += 0.05902192242833052;
        result[5] += 0.7537942664418212;
      }
    } else {
      if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)48.5) ) ) {
        result[0] += 0.05367231638418079;
        result[1] += 0.9463276836158192;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.5575038679731821;
        result[1] += 0.060856111397627644;
        result[2] += 0.0629190304280557;
        result[3] += 0.07890665291387312;
        result[4] += 0.11913357400722022;
        result[5] += 0.12068076328004126;
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
        result[0] += 0;
        result[1] += 0.022222222222222223;
        result[2] += 0.1111111111111111;
        result[3] += 0.13333333333333333;
        result[4] += 0;
        result[5] += 0.7333333333333333;
      } else {
        result[0] += 0.03968253968253968;
        result[1] += 0.047619047619047616;
        result[2] += 0.38095238095238093;
        result[3] += 0.3492063492063492;
        result[4] += 0.007936507936507936;
        result[5] += 0.1746031746031746;
      }
    } else {
      if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        result[0] += 0.04081632653061224;
        result[1] += 0;
        result[2] += 0.7857142857142857;
        result[3] += 0.15816326530612246;
        result[4] += 0;
        result[5] += 0.015306122448979591;
      } else {
        result[0] += 0.006711409395973155;
        result[1] += 0;
        result[2] += 0.9704697986577182;
        result[3] += 0.020134228187919465;
        result[4] += 0;
        result[5] += 0.002684563758389262;
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
    

    FILE* file = fopen("./codegen_small/dataset_146/split_2/test_data.csv", "r");
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
