
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
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.08;
        result[2] += 0;
        result[3] += 0.008;
        result[4] += 0.868;
        result[5] += 0.044;
      } else {
        result[0] += 0.03143712574850299;
        result[1] += 0.0037425149700598802;
        result[2] += 0.0187125748502994;
        result[3] += 0.1601796407185629;
        result[4] += 0.06811377245508982;
        result[5] += 0.717814371257485;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)52) ) ) {
        result[0] += 0;
        result[1] += 0.9874371859296482;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.01256281407035176;
        result[5] += 0;
      } else {
        result[0] += 0.5749333333333334;
        result[1] += 0.03146666666666667;
        result[2] += 0.08106666666666668;
        result[3] += 0.09973333333333334;
        result[4] += 0.10666666666666669;
        result[5] += 0.10613333333333334;
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)101) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.13157894736842105;
        result[3] += 0.42105263157894735;
        result[4] += 0;
        result[5] += 0.4473684210526316;
      } else {
        result[0] += 0.010101010101010102;
        result[1] += 0.005050505050505051;
        result[2] += 0.803030303030303;
        result[3] += 0.1414141414141414;
        result[4] += 0.005050505050505051;
        result[5] += 0.03535353535353535;
      }
    } else {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)89.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.25;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.75;
      } else {
        result[0] += 0.002751031636863824;
        result[1] += 0;
        result[2] += 0.9614855570839065;
        result[3] += 0.030261348005502064;
        result[4] += 0;
        result[5] += 0.005502063273727648;
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)76) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.3333333333333333;
        result[4] += 0.6666666666666666;
        result[5] += 0;
      } else {
        result[0] += 0.0046189376443418004;
        result[1] += 0.9653579676674363;
        result[2] += 0;
        result[3] += 0.0046189376443418004;
        result[4] += 0.0254041570438799;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        result[0] += 0.4628099173553718;
        result[1] += 0.056670602125147566;
        result[2] += 0;
        result[3] += 0.003541912632821723;
        result[4] += 0.44155844155844143;
        result[5] += 0.03541912632821723;
      } else {
        result[0] += 0.045670225385527875;
        result[1] += 0.03143534994068802;
        result[2] += 0.011862396204033215;
        result[3] += 0.22716488730723605;
        result[4] += 0.08659549228944247;
        result[5] += 0.5972716488730724;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)75.5) ) ) {
        result[0] += 0.9713831478537361;
        result[1] += 0;
        result[2] += 0.0047694753577106515;
        result[3] += 0.003179650238473768;
        result[4] += 0.019077901430842606;
        result[5] += 0.001589825119236884;
      } else {
        result[0] += 0.4895833333333333;
        result[1] += 0;
        result[2] += 0.3020833333333333;
        result[3] += 0.17708333333333334;
        result[4] += 0;
        result[5] += 0.03125;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.4491017964071856;
        result[3] += 0.46107784431137727;
        result[4] += 0;
        result[5] += 0.08982035928143713;
      } else {
        result[0] += 0.015544041450777202;
        result[1] += 0;
        result[2] += 0.9077720207253887;
        result[3] += 0.05699481865284974;
        result[4] += 0;
        result[5] += 0.019689119170984457;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0022123893805309734;
        result[3] += 0.024336283185840708;
        result[4] += 0.19358407079646017;
        result[5] += 0.7798672566371682;
      } else {
        result[0] += 0.0935672514619883;
        result[1] += 0.03070175438596491;
        result[2] += 0.01608187134502924;
        result[3] += 0.29678362573099415;
        result[4] += 0.20614035087719298;
        result[5] += 0.3567251461988304;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        result[0] += 0.005199306759098788;
        result[1] += 0.8353552859618718;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.15597920277296362;
        result[5] += 0.003466204506065858;
      } else {
        result[0] += 0.6592920353982301;
        result[1] += 0.03666245259165613;
        result[2] += 0.08027812895069532;
        result[3] += 0.06763590391908976;
        result[4] += 0.07901390644753477;
        result[5] += 0.07711757269279393;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)69.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.24;
        result[3] += 0.02;
        result[4] += 0.04;
        result[5] += 0.7;
      } else {
        result[0] += 0;
        result[1] += 0.01149425287356322;
        result[2] += 0.4770114942528736;
        result[3] += 0.4195402298850575;
        result[4] += 0.01724137931034483;
        result[5] += 0.07471264367816094;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)89) ) ) {
        result[0] += 0.13333333333333336;
        result[1] += 0.6666666666666667;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.06666666666666668;
        result[5] += 0.13333333333333336;
      } else {
        result[0] += 0.010714285714285714;
        result[1] += 0;
        result[2] += 0.925;
        result[3] += 0.058333333333333334;
        result[4] += 0.0011904761904761906;
        result[5] += 0.004761904761904762;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)91.5) ) ) {
        result[0] += 0.013192612137203167;
        result[1] += 0.07387862796833773;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8891820580474934;
        result[5] += 0.023746701846965697;
      } else {
        result[0] += 0;
        result[1] += 0.9779951100244498;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.022004889975550123;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
        result[0] += 0.04136833731105807;
        result[1] += 0.005568814638027049;
        result[2] += 0.0031821797931583136;
        result[3] += 0.1877486077963405;
        result[4] += 0.05409705648369133;
        result[5] += 0.7080350039777248;
      } else {
        result[0] += 0.6578483245149913;
        result[1] += 0.03292181069958849;
        result[2] += 0.04820693709582599;
        result[3] += 0.10052910052910054;
        result[4] += 0.05349794238683128;
        result[5] += 0.10699588477366256;
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)99.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
        result[0] += 0.023923444976076555;
        result[1] += 0;
        result[2] += 0.40669856459330145;
        result[3] += 0.4449760765550239;
        result[4] += 0.009569377990430622;
        result[5] += 0.11483253588516747;
      } else {
        result[0] += 0.047244094488188976;
        result[1] += 0;
        result[2] += 0.8503937007874016;
        result[3] += 0.05511811023622047;
        result[4] += 0;
        result[5] += 0.047244094488188976;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.3076923076923077;
        result[3] += 0.46153846153846156;
        result[4] += 0;
        result[5] += 0.23076923076923078;
      } else {
        result[0] += 0.016415868673050615;
        result[1] += 0;
        result[2] += 0.9274965800273598;
        result[3] += 0.049247606019151846;
        result[4] += 0;
        result[5] += 0.006839945280437756;
      }
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)86.5) ) ) {
        result[0] += 0;
        result[1] += 0.007352941176470589;
        result[2] += 0.0036764705882352945;
        result[3] += 0.0036764705882352945;
        result[4] += 0.9191176470588236;
        result[5] += 0.06617647058823531;
      } else {
        result[0] += 0;
        result[1] += 0.5;
        result[2] += 0;
        result[3] += 0.1875;
        result[4] += 0.2916666666666667;
        result[5] += 0.020833333333333332;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.021798365122615803;
        result[4] += 0.031335149863760216;
        result[5] += 0.946866485013624;
      } else {
        result[0] += 0.08752327746741155;
        result[1] += 0;
        result[2] += 0.035381750465549346;
        result[3] += 0.35940409683426444;
        result[4] += 0.12290502793296089;
        result[5] += 0.3947858472998138;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)52.5) ) ) {
        result[0] += 0;
        result[1] += 0.9435146443514645;
        result[2] += 0;
        result[3] += 0.0041841004184100415;
        result[4] += 0.027196652719665274;
        result[5] += 0.02510460251046025;
      } else {
        result[0] += 0.6602136181575434;
        result[1] += 0.037383177570093455;
        result[2] += 0.03337783711615487;
        result[3] += 0.06341789052069426;
        result[4] += 0.11214953271028037;
        result[5] += 0.09345794392523364;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        result[0] += 0.04912280701754386;
        result[1] += 0.05263157894736842;
        result[2] += 0.3192982456140351;
        result[3] += 0.3894736842105263;
        result[4] += 0.03508771929824561;
        result[5] += 0.1543859649122807;
      } else {
        result[0] += 0.03080082135523614;
        result[1] += 0;
        result[2] += 0.8860369609856263;
        result[3] += 0.06365503080082137;
        result[4] += 0;
        result[5] += 0.019507186858316226;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.025089605734767026;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9605734767025089;
        result[5] += 0.014336917562724014;
      } else {
        result[0] += 0.07933884297520662;
        result[1] += 0.004132231404958678;
        result[2] += 0.003305785123966942;
        result[3] += 0.09008264462809917;
        result[4] += 0.07272727272727272;
        result[5] += 0.7504132231404959;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)104.5) ) ) {
        result[0] += 0.5704735376044568;
        result[1] += 0.06128133704735376;
        result[2] += 0.06295264623955432;
        result[3] += 0.1275766016713092;
        result[4] += 0.08690807799442897;
        result[5] += 0.09080779944289694;
      } else {
        result[0] += 0;
        result[1] += 0.990909090909091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.00909090909090909;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        result[0] += 0.045;
        result[1] += 0.075;
        result[2] += 0.23;
        result[3] += 0.405;
        result[4] += 0.055;
        result[5] += 0.19;
      } else {
        result[0] += 0.014925373134328358;
        result[1] += 0;
        result[2] += 0.9104477611940298;
        result[3] += 0.029850746268656716;
        result[4] += 0;
        result[5] += 0.04477611940298507;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85.5) ) ) {
        result[0] += 0.010416666666666666;
        result[1] += 0;
        result[2] += 0.8177083333333334;
        result[3] += 0.125;
        result[4] += 0;
        result[5] += 0.046875;
      } else {
        result[0] += 0.0015552099533437016;
        result[1] += 0;
        result[2] += 0.9595645412130639;
        result[3] += 0.034214618973561435;
        result[4] += 0;
        result[5] += 0.0046656298600311055;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        result[0] += 0.0032679738562091504;
        result[1] += 0.016339869281045753;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9248366013071896;
        result[5] += 0.05555555555555555;
      } else {
        result[0] += 0.05227781926811053;
        result[1] += 0.005227781926811053;
        result[2] += 0.00597460791635549;
        result[3] += 0.1740104555638536;
        result[4] += 0.043315907393577296;
        result[5] += 0.719193427931292;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
        result[0] += 0.008665511265164644;
        result[1] += 0.8370883882149047;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.14211438474870017;
        result[5] += 0.012131715771230503;
      } else {
        result[0] += 0.6648464163822526;
        result[1] += 0.017747440273037544;
        result[2] += 0.089419795221843;
        result[3] += 0.08873720136518772;
        result[4] += 0.07508532423208192;
        result[5] += 0.06416382252559727;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)83.5) ) ) {
        result[0] += 0;
        result[1] += 0.2318840579710145;
        result[2] += 0.10144927536231885;
        result[3] += 0.043478260869565216;
        result[4] += 0.15942028985507245;
        result[5] += 0.463768115942029;
      } else {
        result[0] += 0.03468208092485549;
        result[1] += 0;
        result[2] += 0.42196531791907516;
        result[3] += 0.43352601156069365;
        result[4] += 0.023121387283236993;
        result[5] += 0.08670520231213873;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)64) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5333333333333333;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.4666666666666667;
      } else {
        result[0] += 0.005668934240362812;
        result[1] += 0;
        result[2] += 0.9297052154195011;
        result[3] += 0.060090702947845805;
        result[4] += 0.0022675736961451248;
        result[5] += 0.0022675736961451248;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0.007662835249042145;
        result[1] += 0.03065134099616858;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9425287356321839;
        result[5] += 0.019157088122605363;
      } else {
        result[0] += 0.03400174367916303;
        result[1] += 0.0034873583260680036;
        result[2] += 0;
        result[3] += 0.14210985178727115;
        result[4] += 0.04882301656495205;
        result[5] += 0.7715780296425457;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)58.5) ) ) {
        result[0] += 0.00196078431372549;
        result[1] += 0.884313725490196;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.10784313725490197;
        result[5] += 0.0058823529411764705;
      } else {
        result[0] += 0.6928306551297899;
        result[1] += 0.029666254635352288;
        result[2] += 0.051297898640296664;
        result[3] += 0.07601977750309023;
        result[4] += 0.08899876390605686;
        result[5] += 0.06118665018541409;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.02564102564102564;
        result[3] += 0;
        result[4] += 0.10256410256410256;
        result[5] += 0.8717948717948718;
      } else {
        result[0] += 0.004098360655737705;
        result[1] += 0;
        result[2] += 0.3114754098360656;
        result[3] += 0.5204918032786885;
        result[4] += 0.00819672131147541;
        result[5] += 0.1557377049180328;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
        result[0] += 0.012658227848101266;
        result[1] += 0;
        result[2] += 0.3924050632911392;
        result[3] += 0.10126582278481013;
        result[4] += 0.12658227848101267;
        result[5] += 0.3670886075949367;
      } else {
        result[0] += 0.008620689655172414;
        result[1] += 0;
        result[2] += 0.9170258620689655;
        result[3] += 0.0603448275862069;
        result[4] += 0.0010775862068965517;
        result[5] += 0.01293103448275862;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)71.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
        result[0] += 0.0045045045045045045;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.918918918918919;
        result[5] += 0.07657657657657657;
      } else {
        result[0] += 0.026845637583892617;
        result[1] += 0.0041946308724832215;
        result[2] += 0.0008389261744966443;
        result[3] += 0.11493288590604027;
        result[4] += 0.06459731543624161;
        result[5] += 0.7885906040268457;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.0017211703958691913;
        result[1] += 0.8055077452667815;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.19104991394148024;
        result[5] += 0.0017211703958691913;
      } else {
        result[0] += 0.6280846063454759;
        result[1] += 0.02702702702702703;
        result[2] += 0.06874265569917744;
        result[3] += 0.11104582843713279;
        result[4] += 0.07285546415981199;
        result[5] += 0.09224441833137485;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)99) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
        result[0] += 0.012345679012345678;
        result[1] += 0.037037037037037035;
        result[2] += 0.08641975308641975;
        result[3] += 0.09876543209876543;
        result[4] += 0.14814814814814814;
        result[5] += 0.6172839506172839;
      } else {
        result[0] += 0.013157894736842105;
        result[1] += 0;
        result[2] += 0.3684210526315789;
        result[3] += 0.4473684210526316;
        result[4] += 0;
        result[5] += 0.17105263157894737;
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
        result[0] += 0.04245283018867924;
        result[1] += 0.0047169811320754715;
        result[2] += 0.6745283018867925;
        result[3] += 0.24528301886792453;
        result[4] += 0;
        result[5] += 0.0330188679245283;
      } else {
        result[0] += 0.021052631578947368;
        result[1] += 0.003947368421052632;
        result[2] += 0.9328947368421052;
        result[3] += 0.039473684210526314;
        result[4] += 0;
        result[5] += 0.002631578947368421;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88.5) ) ) {
        result[0] += 0.00617283950617284;
        result[1] += 0.0154320987654321;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.962962962962963;
        result[5] += 0.0154320987654321;
      } else {
        result[0] += 0;
        result[1] += 0.9889867841409692;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.011013215859030838;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)88.5) ) ) {
        result[0] += 0.08130081300813008;
        result[1] += 0.008130081300813009;
        result[2] += 0;
        result[3] += 0.07046070460704607;
        result[4] += 0.057813911472448055;
        result[5] += 0.7822944896115628;
      } else {
        result[0] += 0.5440469834490121;
        result[1] += 0.020822210357714893;
        result[2] += 0.07047517351841963;
        result[3] += 0.15910304324612917;
        result[4] += 0.0763481046449546;
        result[5] += 0.12920448478376934;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)99) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.10416666666666667;
        result[3] += 0.16666666666666666;
        result[4] += 0.041666666666666664;
        result[5] += 0.6875;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.4090909090909091;
        result[3] += 0.3484848484848485;
        result[4] += 0;
        result[5] += 0.24242424242424243;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
        result[0] += 0.11764705882352941;
        result[1] += 0.5294117647058824;
        result[2] += 0.11764705882352941;
        result[3] += 0.17647058823529413;
        result[4] += 0;
        result[5] += 0.058823529411764705;
      } else {
        result[0] += 0.0096051227321238;
        result[1] += 0;
        result[2] += 0.9231590181430096;
        result[3] += 0.05976520811099253;
        result[4] += 0;
        result[5] += 0.007470651013874066;
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 10;
  result[1] /= 10;
  result[2] /= 10;
  result[3] /= 10;
  result[4] /= 10;
  result[5] /= 10;
  
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
