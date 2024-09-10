
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
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        result[0] += 0.011952191235059762;
        result[1] += 0;
        result[2] += 0.007968127490039842;
        result[3] += 0.003984063745019921;
        result[4] += 0.9362549800796813;
        result[5] += 0.03984063745019921;
      } else {
        result[0] += 0.05236728837876614;
        result[1] += 0.007890961262553802;
        result[2] += 0.003586800573888092;
        result[3] += 0.19225251076040173;
        result[4] += 0.05954088952654232;
        result[5] += 0.6843615494978479;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
        result[0] += 0.013157894736842105;
        result[1] += 0.8486842105263158;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.13815789473684212;
        result[5] += 0;
      } else {
        result[0] += 0.6828135368281354;
        result[1] += 0.015925680159256803;
        result[2] += 0.11280690112806901;
        result[3] += 0.08759124087591241;
        result[4] += 0.046449900464499004;
        result[5] += 0.054412740544127404;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
        result[0] += 0;
        result[1] += 0.06349206349206349;
        result[2] += 0;
        result[3] += 0.09523809523809523;
        result[4] += 0.23809523809523808;
        result[5] += 0.6031746031746031;
      } else {
        result[0] += 0.014705882352941176;
        result[1] += 0;
        result[2] += 0.45588235294117646;
        result[3] += 0.22058823529411764;
        result[4] += 0.014705882352941176;
        result[5] += 0.29411764705882354;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
        result[0] += 0.017921146953405017;
        result[1] += 0.010752688172043012;
        result[2] += 0.7311827956989247;
        result[3] += 0.18996415770609318;
        result[4] += 0;
        result[5] += 0.05017921146953405;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9512195121951219;
        result[3] += 0.04878048780487805;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        result[0] += 0.2010178117048346;
        result[1] += 0.03307888040712468;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.6717557251908397;
        result[5] += 0.09414758269720101;
      } else {
        result[0] += 0.00228310502283105;
        result[1] += 0.0060882800608828;
        result[2] += 0.00228310502283105;
        result[3] += 0.19710806697108066;
        result[4] += 0.0502283105022831;
        result[5] += 0.7420091324200914;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)53.5) ) ) {
        result[0] += 0.004464285714285714;
        result[1] += 0.9575892857142857;
        result[2] += 0;
        result[3] += 0.002232142857142857;
        result[4] += 0.03571428571428571;
        result[5] += 0;
      } else {
        result[0] += 0.6355666875391359;
        result[1] += 0.039448966812773954;
        result[2] += 0.07326236693800876;
        result[3] += 0.09329993738259236;
        result[4] += 0.09956167814652474;
        result[5] += 0.058860363180964305;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)88) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.03225806451612903;
        result[3] += 0.03225806451612903;
        result[4] += 0.03225806451612903;
        result[5] += 0.9032258064516129;
      } else {
        result[0] += 0.008130081300813009;
        result[1] += 0.056910569105691054;
        result[2] += 0.36585365853658536;
        result[3] += 0.3170731707317073;
        result[4] += 0;
        result[5] += 0.25203252032520324;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)98.5) ) ) {
        result[0] += 0.006726457399103139;
        result[1] += 0;
        result[2] += 0.9159192825112108;
        result[3] += 0.06726457399103139;
        result[4] += 0;
        result[5] += 0.010089686098654708;
      } else {
        result[0] += 0.4642857142857143;
        result[1] += 0;
        result[2] += 0.5357142857142857;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        result[0] += 0.16056338028169018;
        result[1] += 0.01126760563380282;
        result[2] += 0;
        result[3] += 0.019718309859154935;
        result[4] += 0.6985915492957747;
        result[5] += 0.10985915492957748;
      } else {
        result[0] += 0;
        result[1] += 0.0031746031746031746;
        result[2] += 0.003968253968253968;
        result[3] += 0.17539682539682538;
        result[4] += 0.08095238095238096;
        result[5] += 0.7365079365079366;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6213364595545134;
        result[1] += 0.053927315357561546;
        result[2] += 0.050996483001172335;
        result[3] += 0.08440797186400938;
        result[4] += 0.12368112543962485;
        result[5] += 0.06565064478311841;
      } else {
        result[0] += 0.0049504950495049506;
        result[1] += 0.995049504950495;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)97.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.2967032967032967;
        result[3] += 0.5054945054945055;
        result[4] += 0.01098901098901099;
        result[5] += 0.18681318681318682;
      } else {
        result[0] += 0.01098901098901099;
        result[1] += 0;
        result[2] += 0.7472527472527473;
        result[3] += 0.2087912087912088;
        result[4] += 0;
        result[5] += 0.03296703296703297;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
        result[0] += 0.017699115044247787;
        result[1] += 0;
        result[2] += 0.8407079646017699;
        result[3] += 0.09734513274336283;
        result[4] += 0;
        result[5] += 0.04424778761061947;
      } else {
        result[0] += 0.004329004329004329;
        result[1] += 0;
        result[2] += 0.974025974025974;
        result[3] += 0.021645021645021644;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)45.5) ) ) {
        result[0] += 0;
        result[1] += 0.9734299516908212;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.026570048309178744;
        result[5] += 0;
      } else {
        result[0] += 0.4759036144578313;
        result[1] += 0.06385542168674699;
        result[2] += 0.0024096385542168677;
        result[3] += 0.0012048192771084338;
        result[4] += 0.41566265060240964;
        result[5] += 0.04096385542168675;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.006443298969072165;
        result[3] += 0.028350515463917526;
        result[4] += 0.045103092783505154;
        result[5] += 0.9201030927835051;
      } else {
        result[0] += 0.07486033519553073;
        result[1] += 0.060335195530726256;
        result[2] += 0.03240223463687151;
        result[3] += 0.28938547486033517;
        result[4] += 0.15195530726256984;
        result[5] += 0.39106145251396646;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75.5) ) ) {
        result[0] += 0.7307692307692307;
        result[1] += 0.057692307692307696;
        result[2] += 0.02564102564102564;
        result[3] += 0.07051282051282051;
        result[4] += 0.05128205128205128;
        result[5] += 0.0641025641025641;
      } else {
        result[0] += 0;
        result[1] += 0.0011001100110011;
        result[2] += 0.7623762376237624;
        result[3] += 0.17381738173817382;
        result[4] += 0.0033003300330033004;
        result[5] += 0.0594059405940594;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
        result[0] += 0.9516441005802708;
        result[1] += 0;
        result[2] += 0.02321083172147002;
        result[3] += 0;
        result[4] += 0.025145067698259187;
        result[5] += 0;
      } else {
        result[0] += 0.06990881458966565;
        result[1] += 0;
        result[2] += 0.9179331306990881;
        result[3] += 0.0121580547112462;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.026785714285714284;
        result[2] += 0.013392857142857142;
        result[3] += 0.008928571428571428;
        result[4] += 0.8883928571428571;
        result[5] += 0.0625;
      } else {
        result[0] += 0.04328358208955224;
        result[1] += 0.006716417910447761;
        result[2] += 0.008208955223880597;
        result[3] += 0.15895522388059702;
        result[4] += 0.10597014925373134;
        result[5] += 0.676865671641791;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6771099744245525;
        result[1] += 0.04539641943734015;
        result[2] += 0.01918158567774936;
        result[3] += 0.061381074168797956;
        result[4] += 0.10677749360613811;
        result[5] += 0.09015345268542199;
      } else {
        result[0] += 0.028384279475982533;
        result[1] += 0.9716157205240175;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.08163265306122448;
        result[3] += 0.5850340136054422;
        result[4] += 0.013605442176870748;
        result[5] += 0.3197278911564626;
      } else {
        result[0] += 0.035211267605633804;
        result[1] += 0.007042253521126761;
        result[2] += 0.5492957746478874;
        result[3] += 0.19014084507042253;
        result[4] += 0;
        result[5] += 0.21830985915492956;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)75.5) ) ) {
        result[0] += 0.125;
        result[1] += 0.225;
        result[2] += 0.375;
        result[3] += 0.1;
        result[4] += 0.175;
        result[5] += 0;
      } else {
        result[0] += 0.003293084522502744;
        result[1] += 0;
        result[2] += 0.9187705817782656;
        result[3] += 0.06695938529088913;
        result[4] += 0;
        result[5] += 0.010976948408342482;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)67.5) ) ) {
        result[0] += 0.011235955056179777;
        result[1] += 0.0037453183520599256;
        result[2] += 0.007490636704119851;
        result[3] += 0;
        result[4] += 0.9363295880149813;
        result[5] += 0.04119850187265918;
      } else {
        result[0] += 0;
        result[1] += 0.2857142857142857;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.7142857142857143;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
        result[0] += 0.06803355079217148;
        result[1] += 0.003727865796831314;
        result[2] += 0;
        result[3] += 0.045666356011183594;
        result[4] += 0.05778191985088537;
        result[5] += 0.8247903075489282;
      } else {
        result[0] += 0;
        result[1] += 0.005797101449275363;
        result[2] += 0.008695652173913045;
        result[3] += 0.5710144927536233;
        result[4] += 0.008695652173913045;
        result[5] += 0.40579710144927544;
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)104.5) ) ) {
        result[0] += 0.6762928139691069;
        result[1] += 0.07924781732706516;
        result[2] += 0.033579583613163204;
        result[3] += 0.06850235057085294;
        result[4] += 0.10946944257891203;
        result[5] += 0.03290799194089994;
      } else {
        result[0] += 0;
        result[1] += 0.9950980392156863;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.004901960784313725;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)96.5) ) ) {
        result[0] += 0.045774647887323945;
        result[1] += 0.04225352112676056;
        result[2] += 0.39436619718309857;
        result[3] += 0.24647887323943662;
        result[4] += 0.02112676056338028;
        result[5] += 0.25;
      } else {
        result[0] += 0.023084994753410283;
        result[1] += 0.002098635886673662;
        result[2] += 0.8950682056663168;
        result[3] += 0.07450157397691501;
        result[4] += 0;
        result[5] += 0.005246589716684155;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        result[0] += 0.13128491620111732;
        result[1] += 0.030726256983240222;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7206703910614525;
        result[5] += 0.11731843575418995;
      } else {
        result[0] += 0.0032520325203252032;
        result[1] += 0;
        result[2] += 0.0032520325203252032;
        result[3] += 0.15203252032520326;
        result[4] += 0.038211382113821135;
        result[5] += 0.8032520325203252;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.973741794310722;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.0262582056892779;
        result[5] += 0;
      } else {
        result[0] += 0.6241007194244604;
        result[1] += 0.03537170263788969;
        result[2] += 0.05935251798561151;
        result[3] += 0.08513189448441247;
        result[4] += 0.1223021582733813;
        result[5] += 0.0737410071942446;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.23893805309734514;
        result[3] += 0.6106194690265486;
        result[4] += 0;
        result[5] += 0.1504424778761062;
      } else {
        result[0] += 0.10526315789473684;
        result[1] += 0;
        result[2] += 0.868421052631579;
        result[3] += 0.02631578947368421;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.8142857142857143;
        result[3] += 0.15714285714285714;
        result[4] += 0;
        result[5] += 0.02857142857142857;
      } else {
        result[0] += 0.010638297872340427;
        result[1] += 0;
        result[2] += 0.9561170212765958;
        result[3] += 0.02393617021276596;
        result[4] += 0;
        result[5] += 0.009308510638297874;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
        result[0] += 0.21652421652421652;
        result[1] += 0.011396011396011397;
        result[2] += 0;
        result[3] += 0.019943019943019943;
        result[4] += 0.6552706552706553;
        result[5] += 0.09686609686609686;
      } else {
        result[0] += 0.001519756838905775;
        result[1] += 0.007598784194528876;
        result[2] += 0.0060790273556231;
        result[3] += 0.18541033434650456;
        result[4] += 0.08130699088145897;
        result[5] += 0.7180851063829787;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        result[0] += 0.0038167938931297713;
        result[1] += 0.8301526717557253;
        result[2] += 0.0038167938931297713;
        result[3] += 0.0038167938931297713;
        result[4] += 0.15267175572519087;
        result[5] += 0.005725190839694657;
      } else {
        result[0] += 0.6655495978552279;
        result[1] += 0.027479892761394103;
        result[2] += 0.06099195710455764;
        result[3] += 0.0871313672922252;
        result[4] += 0.07573726541554959;
        result[5] += 0.08310991957104558;
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0.05263157894736842;
        result[1] += 0.06140350877192982;
        result[2] += 0.10526315789473684;
        result[3] += 0.23684210526315788;
        result[4] += 0.02631578947368421;
        result[5] += 0.5175438596491229;
      } else {
        result[0] += 0.1694915254237288;
        result[1] += 0;
        result[2] += 0.5932203389830508;
        result[3] += 0.15254237288135594;
        result[4] += 0;
        result[5] += 0.0847457627118644;
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5789473684210527;
        result[3] += 0.3223684210526316;
        result[4] += 0;
        result[5] += 0.09868421052631579;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.960880195599022;
        result[3] += 0.03300733496332518;
        result[4] += 0.0012224938875305623;
        result[5] += 0.004889975550122249;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        result[0] += 0.008583690987124463;
        result[1] += 0.02145922746781116;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.944206008583691;
        result[5] += 0.02575107296137339;
      } else {
        result[0] += 0.5398230088495575;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.008849557522123894;
        result[4] += 0.1415929203539823;
        result[5] += 0.30973451327433627;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
        result[0] += 0.003061224489795918;
        result[1] += 0.006122448979591836;
        result[2] += 0.0020408163265306124;
        result[3] += 0.06938775510204082;
        result[4] += 0.05408163265306123;
        result[5] += 0.8653061224489796;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.021551724137931036;
        result[3] += 0.5775862068965517;
        result[4] += 0.0603448275862069;
        result[5] += 0.34051724137931033;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)102.5) ) ) {
        result[0] += 0.6469477658904972;
        result[1] += 0.0578980490874764;
        result[2] += 0.027061044682190057;
        result[3] += 0.06670862177470108;
        result[4] += 0.12586532410320955;
        result[5] += 0.07551919446192575;
      } else {
        result[0] += 0.022779043280182234;
        result[1] += 0.9772209567198178;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
        result[0] += 0;
        result[1] += 0.02843601895734597;
        result[2] += 0.4218009478672986;
        result[3] += 0.35071090047393366;
        result[4] += 0.023696682464454975;
        result[5] += 0.17535545023696683;
      } else {
        result[0] += 0.01652089407191448;
        result[1] += 0.004859086491739553;
        result[2] += 0.8872691933916423;
        result[3] += 0.061224489795918366;
        result[4] += 0.006802721088435374;
        result[5] += 0.023323615160349854;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        result[0] += 0.012096774193548387;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8991935483870968;
        result[5] += 0.08870967741935484;
      } else {
        result[0] += 0.02507598784194529;
        result[1] += 0.015197568389057751;
        result[2] += 0.022036474164133738;
        result[3] += 0.16337386018237082;
        result[4] += 0.04939209726443769;
        result[5] += 0.7249240121580547;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9635974304068522;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.03640256959314775;
        result[5] += 0;
      } else {
        result[0] += 0.6088686753837408;
        result[1] += 0.028993746446844798;
        result[2] += 0.06822057987492894;
        result[3] += 0.0869812393405344;
        result[4] += 0.12166003411028994;
        result[5] += 0.08527572484366117;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)87.5) ) ) {
        result[0] += 0;
        result[1] += 0.020833333333333332;
        result[2] += 0.10416666666666667;
        result[3] += 0.10416666666666667;
        result[4] += 0.08333333333333333;
        result[5] += 0.6875;
      } else {
        result[0] += 0.011560693641618497;
        result[1] += 0.005780346820809248;
        result[2] += 0.48554913294797686;
        result[3] += 0.3988439306358382;
        result[4] += 0;
        result[5] += 0.09826589595375723;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
        result[0] += 0.25000000000000006;
        result[1] += 0.16666666666666669;
        result[2] += 0.16666666666666669;
        result[3] += 0;
        result[4] += 0.33333333333333337;
        result[5] += 0.08333333333333334;
      } else {
        result[0] += 0.0049813200498132005;
        result[1] += 0;
        result[2] += 0.9452054794520548;
        result[3] += 0.043586550435865505;
        result[4] += 0;
        result[5] += 0.0062266500622665;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0.011194029850746268;
        result[1] += 0.011194029850746268;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9328358208955224;
        result[5] += 0.04477611940298507;
      } else {
        result[0] += 0.024830699774266364;
        result[1] += 0.004514672686230248;
        result[2] += 0.003762227238525207;
        result[3] += 0.1708051166290444;
        result[4] += 0.05342362678705794;
        result[5] += 0.7426636568848759;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.005524861878453039;
        result[1] += 0.7992633517495397;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.18600368324125233;
        result[5] += 0.009208103130755067;
      } else {
        result[0] += 0.645859872611465;
        result[1] += 0.024840764331210196;
        result[2] += 0.060509554140127396;
        result[3] += 0.0961783439490446;
        result[4] += 0.07324840764331211;
        result[5] += 0.09936305732484078;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.06451612903225808;
        result[3] += 0.7741935483870969;
        result[4] += 0;
        result[5] += 0.16129032258064518;
      } else {
        result[0] += 0.01183431952662722;
        result[1] += 0;
        result[2] += 0.668639053254438;
        result[3] += 0.21301775147928997;
        result[4] += 0.00591715976331361;
        result[5] += 0.10059171597633138;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)97.5) ) ) {
        result[0] += 0.064;
        result[1] += 0;
        result[2] += 0.72;
        result[3] += 0.136;
        result[4] += 0;
        result[5] += 0.08;
      } else {
        result[0] += 0.011378002528445006;
        result[1] += 0;
        result[2] += 0.9405815423514539;
        result[3] += 0.045512010113780026;
        result[4] += 0;
        result[5] += 0.0025284450063211127;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)83.5) ) ) {
        result[0] += 0;
        result[1] += 0.14285714285714285;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8571428571428571;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
        result[0] += 0.029900332225913623;
        result[1] += 0.014617940199335547;
        result[2] += 0.003986710963455149;
        result[3] += 0.12890365448504984;
        result[4] += 0.20930232558139536;
        result[5] += 0.6132890365448505;
      } else {
        result[0] += 0.5539160045402952;
        result[1] += 0.030646992054483544;
        result[2] += 0.059023836549375715;
        result[3] += 0.11180476730987515;
        result[4] += 0.13734392735527812;
        result[5] += 0.1072644721906924;
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0.12280701754385964;
        result[2] += 0.12280701754385964;
        result[3] += 0.3684210526315789;
        result[4] += 0.017543859649122806;
        result[5] += 0.3684210526315789;
      } else {
        result[0] += 0.039906103286384983;
        result[1] += 0.016431924882629113;
        result[2] += 0.6760563380281691;
        result[3] += 0.1971830985915493;
        result[4] += 0.011737089201877935;
        result[5] += 0.05868544600938968;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)92.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.16666666666666666;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.8333333333333334;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9723502304147466;
        result[3] += 0.027649769585253458;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)48.5) ) ) {
        result[0] += 0;
        result[1] += 0.6666666666666666;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.3333333333333333;
        result[5] += 0;
      } else {
        result[0] += 0.004132231404958678;
        result[1] += 0.008264462809917356;
        result[2] += 0;
        result[3] += 0.004132231404958678;
        result[4] += 0.9586776859504132;
        result[5] += 0.024793388429752067;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
        result[0] += 0.0013351134846461949;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.02403204272363151;
        result[4] += 0.04672897196261682;
        result[5] += 0.9279038718291055;
      } else {
        result[0] += 0.0782312925170068;
        result[1] += 0.023809523809523808;
        result[2] += 0.023809523809523808;
        result[3] += 0.3741496598639456;
        result[4] += 0.08843537414965986;
        result[5] += 0.41156462585034015;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)52.5) ) ) {
        result[0] += 0.002277904328018223;
        result[1] += 0.9772209567198178;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.02050113895216401;
        result[5] += 0;
      } else {
        result[0] += 0.6525047558655676;
        result[1] += 0.04438807863031072;
        result[2] += 0.02219403931515536;
        result[3] += 0.0735573874445149;
        result[4] += 0.12175015852885225;
        result[5] += 0.08560558021559923;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
        result[0] += 0.00796812749003984;
        result[1] += 0.0796812749003984;
        result[2] += 0.28286852589641437;
        result[3] += 0.3665338645418327;
        result[4] += 0.02390438247011952;
        result[5] += 0.23904382470119523;
      } else {
        result[0] += 0.03615702479338843;
        result[1] += 0.004132231404958678;
        result[2] += 0.875;
        result[3] += 0.06818181818181818;
        result[4] += 0.0030991735537190084;
        result[5] += 0.013429752066115703;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
        result[0] += 0;
        result[1] += 0.03260869565217391;
        result[2] += 0;
        result[3] += 0.014492753623188406;
        result[4] += 0.8623188405797102;
        result[5] += 0.09057971014492754;
      } else {
        result[0] += 0.0274442538593482;
        result[1] += 0.004288164665523156;
        result[2] += 0.002572898799313894;
        result[3] += 0.153516295025729;
        result[4] += 0.05317324185248713;
        result[5] += 0.7590051457975986;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9653679653679653;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.03463203463203463;
        result[5] += 0;
      } else {
        result[0] += 0.575;
        result[1] += 0.03563829787234043;
        result[2] += 0.08670212765957447;
        result[3] += 0.0898936170212766;
        result[4] += 0.13404255319148936;
        result[5] += 0.07872340425531915;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93.5) ) ) {
        result[0] += 0.019801980198019802;
        result[1] += 0.0297029702970297;
        result[2] += 0.0891089108910891;
        result[3] += 0.2376237623762376;
        result[4] += 0.0891089108910891;
        result[5] += 0.5346534653465347;
      } else {
        result[0] += 0;
        result[1] += 0.012987012987012988;
        result[2] += 0.4935064935064935;
        result[3] += 0.38961038961038963;
        result[4] += 0;
        result[5] += 0.1038961038961039;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)86.5) ) ) {
        result[0] += 0.020761245674740483;
        result[1] += 0;
        result[2] += 0.8235294117647058;
        result[3] += 0.1384083044982699;
        result[4] += 0;
        result[5] += 0.01730103806228374;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9808695652173913;
        result[3] += 0.019130434782608695;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        result[0] += 0.004048582995951417;
        result[1] += 0.008097165991902834;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.979757085020243;
        result[5] += 0.008097165991902834;
      } else {
        result[0] += 0.02913453299057412;
        result[1] += 0.006855184233076264;
        result[2] += 0.001713796058269066;
        result[3] += 0.14138817480719795;
        result[4] += 0.060839760068551844;
        result[5] += 0.7600685518423308;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        result[0] += 0.0017035775127768314;
        result[1] += 0.8449744463373083;
        result[2] += 0;
        result[3] += 0.008517887563884156;
        result[4] += 0.14480408858603067;
        result[5] += 0;
      } else {
        result[0] += 0.6348082595870207;
        result[1] += 0.030678466076696165;
        result[2] += 0.0808259587020649;
        result[3] += 0.09026548672566372;
        result[4] += 0.071976401179941;
        result[5] += 0.09144542772861357;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
        result[0] += 0.023255813953488372;
        result[1] += 0.13953488372093023;
        result[2] += 0;
        result[3] += 0.13953488372093023;
        result[4] += 0.09302325581395349;
        result[5] += 0.6046511627906976;
      } else {
        result[0] += 0.024193548387096774;
        result[1] += 0;
        result[2] += 0.4274193548387097;
        result[3] += 0.45161290322580644;
        result[4] += 0;
        result[5] += 0.0967741935483871;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.8256880733944955;
        result[3] += 0.16055045871559634;
        result[4] += 0;
        result[5] += 0.013761467889908258;
      } else {
        result[0] += 0.008053691275167788;
        result[1] += 0;
        result[2] += 0.953020134228188;
        result[3] += 0.030872483221476513;
        result[4] += 0;
        result[5] += 0.008053691275167788;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_1/test_data.csv", "r");
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
