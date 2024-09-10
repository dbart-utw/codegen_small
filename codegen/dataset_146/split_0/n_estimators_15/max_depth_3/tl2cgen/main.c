
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
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62) ) ) {
        result[0] += 0;
        result[1] += 0.02092050209205021;
        result[2] += 0;
        result[3] += 0.016736401673640166;
        result[4] += 0.9539748953974896;
        result[5] += 0.008368200836820083;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.060606060606060615;
        result[4] += 0.5454545454545455;
        result[5] += 0.393939393939394;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
        result[0] += 0.047866805411030174;
        result[1] += 0.004162330905306972;
        result[2] += 0;
        result[3] += 0.030176899063475548;
        result[4] += 0.07804370447450572;
        result[5] += 0.8397502601456815;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.009584664536741214;
        result[3] += 0.5559105431309904;
        result[4] += 0.003194888178913738;
        result[5] += 0.43130990415335463;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
        result[0] += 0.011342155009451797;
        result[1] += 0.8431001890359168;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.14366729678638943;
        result[5] += 0.001890359168241966;
      } else {
        result[0] += 0.7393075356415479;
        result[1] += 0.04344874405974203;
        result[2] += 0.016972165648336732;
        result[3] += 0.05974202308214529;
        result[4] += 0.10319076714188732;
        result[5] += 0.037338764426340806;
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)82) ) ) {
        result[0] += 0.008902077151335314;
        result[1] += 0;
        result[2] += 0.43916913946587544;
        result[3] += 0.3442136498516321;
        result[4] += 0.0029673590504451044;
        result[5] += 0.20474777448071219;
      } else {
        result[0] += 0.02763018065887354;
        result[1] += 0;
        result[2] += 0.8809776833156217;
        result[3] += 0.06907545164718384;
        result[4] += 0.007438894792773645;
        result[5] += 0.01487778958554729;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0.007547169811320755;
        result[2] += 0;
        result[3] += 0.01509433962264151;
        result[4] += 0.9245283018867925;
        result[5] += 0.052830188679245285;
      } else {
        result[0] += 0;
        result[1] += 0.5833333333333334;
        result[2] += 0;
        result[3] += 0.16666666666666666;
        result[4] += 0;
        result[5] += 0.25;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
        result[0] += 0.05635148042024833;
        result[1] += 0.004775549188156638;
        result[2] += 0.0028653295128939827;
        result[3] += 0.05157593123209169;
        result[4] += 0.05635148042024833;
        result[5] += 0.828080229226361;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.013513513513513514;
        result[3] += 0.6261261261261262;
        result[4] += 0.036036036036036036;
        result[5] += 0.32432432432432434;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)53.5) ) ) {
        result[0] += 0.0041841004184100415;
        result[1] += 0.9393305439330544;
        result[2] += 0;
        result[3] += 0.006276150627615063;
        result[4] += 0.04184100418410042;
        result[5] += 0.008368200836820083;
      } else {
        result[0] += 0.7007019783024889;
        result[1] += 0.05232929164007659;
        result[2] += 0.012125079770261648;
        result[3] += 0.05360561582641992;
        result[4] += 0.13911933631142312;
        result[5] += 0.04211869814932993;
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.4377358490566038;
        result[3] += 0.3283018867924528;
        result[4] += 0.007547169811320755;
        result[5] += 0.22641509433962265;
      } else {
        result[0] += 0.031958762886597936;
        result[1] += 0;
        result[2] += 0.8639175257731959;
        result[3] += 0.07835051546391752;
        result[4] += 0.004123711340206186;
        result[5] += 0.021649484536082474;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.04460966542750929;
        result[2] += 0;
        result[3] += 0.02973977695167286;
        result[4] += 0.8773234200743495;
        result[5] += 0.048327137546468404;
      } else {
        result[0] += 0.06543494996150885;
        result[1] += 0.007698229407236336;
        result[2] += 0.0007698229407236335;
        result[3] += 0.15242494226327943;
        result[4] += 0.057736720554272515;
        result[5] += 0.7159353348729792;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        result[0] += 0;
        result[1] += 0.8412698412698413;
        result[2] += 0;
        result[3] += 0.001763668430335097;
        result[4] += 0.15696649029982362;
        result[5] += 0;
      } else {
        result[0] += 0.752865329512894;
        result[1] += 0.01504297994269341;
        result[2] += 0.044412607449856735;
        result[3] += 0.06948424068767908;
        result[4] += 0.0659025787965616;
        result[5] += 0.052292263610315186;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)83.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.16666666666666666;
        result[3] += 0.5333333333333333;
        result[4] += 0.016666666666666666;
        result[5] += 0.2833333333333333;
      } else {
        result[0] += 0.008928571428571428;
        result[1] += 0;
        result[2] += 0.6785714285714286;
        result[3] += 0.23214285714285715;
        result[4] += 0;
        result[5] += 0.08035714285714286;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)88.5) ) ) {
        result[0] += 0.09473684210526316;
        result[1] += 0.10526315789473684;
        result[2] += 0.3368421052631579;
        result[3] += 0.1368421052631579;
        result[4] += 0.031578947368421054;
        result[5] += 0.29473684210526313;
      } else {
        result[0] += 0.006607929515418502;
        result[1] += 0;
        result[2] += 0.9074889867841409;
        result[3] += 0.0671806167400881;
        result[4] += 0.009911894273127754;
        result[5] += 0.00881057268722467;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        result[0] += 0.008438818565400843;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.012658227848101266;
        result[4] += 0.890295358649789;
        result[5] += 0.08860759493670886;
      } else {
        result[0] += 0.03590127150336574;
        result[1] += 0.008227374719521317;
        result[2] += 0.002243829468960359;
        result[3] += 0.14510097232610322;
        result[4] += 0.06282722513089005;
        result[5] += 0.7456993268511594;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)55.5) ) ) {
        result[0] += 0;
        result[1] += 0.9139072847682119;
        result[2] += 0;
        result[3] += 0.008830022075055188;
        result[4] += 0.0728476821192053;
        result[5] += 0.004415011037527594;
      } else {
        result[0] += 0.660757946210269;
        result[1] += 0.03484107579462103;
        result[2] += 0.04706601466992665;
        result[3] += 0.07334963325183375;
        result[4] += 0.12897310513447433;
        result[5] += 0.0550122249388753;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)92.5) ) ) {
        result[0] += 0;
        result[1] += 0.029411764705882353;
        result[2] += 0.14705882352941177;
        result[3] += 0.16176470588235295;
        result[4] += 0.029411764705882353;
        result[5] += 0.6323529411764706;
      } else {
        result[0] += 0.04374999999999999;
        result[1] += 0.031249999999999993;
        result[2] += 0.27499999999999997;
        result[3] += 0.5187499999999999;
        result[4] += 0;
        result[5] += 0.13124999999999998;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
        result[0] += 0.05303030303030303;
        result[1] += 0;
        result[2] += 0.75;
        result[3] += 0.17424242424242425;
        result[4] += 0;
        result[5] += 0.022727272727272728;
      } else {
        result[0] += 0.019374068554396422;
        result[1] += 0;
        result[2] += 0.9344262295081968;
        result[3] += 0.041728763040238454;
        result[4] += 0;
        result[5] += 0.004470938897168405;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        result[0] += 0.014652014652014652;
        result[1] += 0.03663003663003663;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8974358974358975;
        result[5] += 0.05128205128205128;
      } else {
        result[0] += 0.041968162083936326;
        result[1] += 0.009406657018813314;
        result[2] += 0.002170767004341534;
        result[3] += 0.16642547033285093;
        result[4] += 0.06295224312590449;
        result[5] += 0.7170767004341534;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0.9534883720930233;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.04439746300211417;
        result[5] += 0.0021141649048625794;
      } else {
        result[0] += 0.6263408820023838;
        result[1] += 0.030393325387365912;
        result[2] += 0.056615017878426696;
        result[3] += 0.09475566150178784;
        result[4] += 0.12693682955899882;
        result[5] += 0.06495828367103695;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.2537313432835821;
        result[3] += 0.6119402985074627;
        result[4] += 0.014925373134328358;
        result[5] += 0.11940298507462686;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7246376811594203;
        result[3] += 0.17391304347826086;
        result[4] += 0;
        result[5] += 0.10144927536231885;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.3541666666666667;
        result[3] += 0.3958333333333333;
        result[4] += 0;
        result[5] += 0.25;
      } else {
        result[0] += 0.028708133971291867;
        result[1] += 0;
        result[2] += 0.9078947368421053;
        result[3] += 0.05861244019138756;
        result[4] += 0;
        result[5] += 0.004784688995215311;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0.004366812227074236;
        result[1] += 0.05240174672489083;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9344978165938864;
        result[5] += 0.008733624454148471;
      } else {
        result[0] += 0.03785488958990536;
        result[1] += 0.012618296529968454;
        result[2] += 0.008675078864353312;
        result[3] += 0.16561514195583596;
        result[4] += 0.051261829652996846;
        result[5] += 0.7239747634069401;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)104.5) ) ) {
        result[0] += 0.5981953290870489;
        result[1] += 0.04777070063694268;
        result[2] += 0.06210191082802548;
        result[3] += 0.07961783439490445;
        result[4] += 0.1316348195329087;
        result[5] += 0.08067940552016985;
      } else {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.13793103448275862;
        result[3] += 0.7068965517241379;
        result[4] += 0;
        result[5] += 0.15517241379310345;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6730769230769231;
        result[3] += 0.11538461538461539;
        result[4] += 0;
        result[5] += 0.21153846153846154;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.11764705882352941;
        result[3] += 0.29411764705882354;
        result[4] += 0.058823529411764705;
        result[5] += 0.5294117647058824;
      } else {
        result[0] += 0.0033149171270718237;
        result[1] += 0.0033149171270718237;
        result[2] += 0.9027624309392266;
        result[3] += 0.07403314917127073;
        result[4] += 0.004419889502762432;
        result[5] += 0.012154696132596687;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)102) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9194139194139194;
        result[5] += 0.08058608058608059;
      } else {
        result[0] += 0;
        result[1] += 0.6818181818181819;
        result[2] += 0;
        result[3] += 0.27272727272727276;
        result[4] += 0.04545454545454546;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)86) ) ) {
        result[0] += 0.0802732707087959;
        result[1] += 0.006831767719897523;
        result[2] += 0.004269854824935952;
        result[3] += 0.07258753202391119;
        result[4] += 0.07429547395388557;
        result[5] += 0.7617421007685738;
      } else {
        result[0] += 0.007246376811594203;
        result[1] += 0.021739130434782608;
        result[2] += 0.018115942028985508;
        result[3] += 0.6123188405797102;
        result[4] += 0.021739130434782608;
        result[5] += 0.3188405797101449;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        result[0] += 0.004024144869215292;
        result[1] += 0.8108651911468813;
        result[2] += 0.002012072434607646;
        result[3] += 0.01609657947686117;
        result[4] += 0.158953722334004;
        result[5] += 0.008048289738430584;
      } else {
        result[0] += 0.7804878048780488;
        result[1] += 0.03621581670362158;
        result[2] += 0.023651145602365115;
        result[3] += 0.04656319290465632;
        result[4] += 0.06873614190687362;
        result[5] += 0.04434589800443459;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
        result[0] += 0.006097560975609756;
        result[1] += 0;
        result[2] += 0.2926829268292683;
        result[3] += 0.3780487804878049;
        result[4] += 0.04878048780487805;
        result[5] += 0.27439024390243905;
      } else {
        result[0] += 0.028037383177570093;
        result[1] += 0.003738317757009346;
        result[2] += 0.8345794392523365;
        result[3] += 0.09252336448598131;
        result[4] += 0.016822429906542057;
        result[5] += 0.024299065420560748;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.030567685589519653;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9388646288209608;
        result[5] += 0.030567685589519653;
      } else {
        result[0] += 0.03736799350121852;
        result[1] += 0.015434606011372868;
        result[2] += 0.00487408610885459;
        result[3] += 0.16734362307067424;
        result[4] += 0.039805036555645816;
        result[5] += 0.735174654752234;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        result[0] += 0.006872852233676976;
        result[1] += 0.8109965635738832;
        result[2] += 0;
        result[3] += 0.012027491408934709;
        result[4] += 0.15292096219931273;
        result[5] += 0.01718213058419244;
      } else {
        result[0] += 0.7038216560509555;
        result[1] += 0.017197452229299366;
        result[2] += 0.042675159235668794;
        result[3] += 0.0694267515923567;
        result[4] += 0.0942675159235669;
        result[5] += 0.07261146496815288;
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
        result[0] += 0;
        result[1] += 0.04504504504504504;
        result[2] += 0.04504504504504504;
        result[3] += 0.5495495495495496;
        result[4] += 0.02702702702702703;
        result[5] += 0.3333333333333333;
      } else {
        result[0] += 0.0784313725490196;
        result[1] += 0.0196078431372549;
        result[2] += 0.5196078431372549;
        result[3] += 0.14705882352941177;
        result[4] += 0.0196078431372549;
        result[5] += 0.21568627450980393;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.525;
        result[3] += 0.4125;
        result[4] += 0;
        result[5] += 0.0625;
      } else {
        result[0] += 0.019543973941368076;
        result[1] += 0;
        result[2] += 0.9315960912052117;
        result[3] += 0.04668838219326819;
        result[4] += 0;
        result[5] += 0.002171552660152009;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
        result[0] += 0.01509433962264151;
        result[1] += 0.052830188679245285;
        result[2] += 0.011320754716981131;
        result[3] += 0.01509433962264151;
        result[4] += 0.8566037735849057;
        result[5] += 0.04905660377358491;
      } else {
        result[0] += 0.04378980891719745;
        result[1] += 0.007165605095541401;
        result[2] += 0.009554140127388535;
        result[3] += 0.14410828025477707;
        result[4] += 0.06767515923566879;
        result[5] += 0.7277070063694268;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9795918367346939;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.02040816326530612;
        result[5] += 0;
      } else {
        result[0] += 0.6326647564469915;
        result[1] += 0.022922636103151865;
        result[2] += 0.06590257879656161;
        result[3] += 0.09283667621776506;
        result[4] += 0.10888252148997137;
        result[5] += 0.07679083094555875;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)77) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0891089108910891;
        result[3] += 0.21782178217821782;
        result[4] += 0.1188118811881188;
        result[5] += 0.5742574257425742;
      } else {
        result[0] += 0.006329113924050633;
        result[1] += 0;
        result[2] += 0.569620253164557;
        result[3] += 0.3291139240506329;
        result[4] += 0;
        result[5] += 0.0949367088607595;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
        result[0] += 0.6333333333333333;
        result[1] += 0.05;
        result[2] += 0.25;
        result[3] += 0.05;
        result[4] += 0;
        result[5] += 0.016666666666666666;
      } else {
        result[0] += 0.0035335689045936395;
        result[1] += 0.002355712603062426;
        result[2] += 0.9199057714958775;
        result[3] += 0.07420494699646643;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        result[0] += 0.011406844106463879;
        result[1] += 0.011406844106463879;
        result[2] += 0;
        result[3] += 0.015209125475285171;
        result[4] += 0.9011406844106464;
        result[5] += 0.060836501901140684;
      } else {
        result[0] += 0.03577512776831346;
        result[1] += 0;
        result[2] += 0.0068143100511073255;
        result[3] += 0.13713798977853492;
        result[4] += 0.07666098807495741;
        result[5] += 0.7436115843270868;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9755011135857461;
        result[2] += 0;
        result[3] += 0.004454342984409799;
        result[4] += 0.0200445434298441;
        result[5] += 0;
      } else {
        result[0] += 0.6891223733003708;
        result[1] += 0.034610630407911;
        result[2] += 0.0377008652657602;
        result[3] += 0.06736711990111248;
        result[4] += 0.11433868974042027;
        result[5] += 0.05686032138442522;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)101.5) ) ) {
        result[0] += 0.006493506493506495;
        result[1] += 0.05194805194805196;
        result[2] += 0.10389610389610392;
        result[3] += 0.5454545454545455;
        result[4] += 0.006493506493506495;
        result[5] += 0.28571428571428575;
      } else {
        result[0] += 0.027472527472527472;
        result[1] += 0.005494505494505495;
        result[2] += 0.44505494505494503;
        result[3] += 0.08241758241758242;
        result[4] += 0.11538461538461539;
        result[5] += 0.3241758241758242;
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
        result[0] += 0.011235955056179775;
        result[1] += 0;
        result[2] += 0.7528089887640449;
        result[3] += 0.1947565543071161;
        result[4] += 0;
        result[5] += 0.04119850187265917;
      } else {
        result[0] += 0.013908205841446454;
        result[1] += 0;
        result[2] += 0.9318497913769124;
        result[3] += 0.05146036161335188;
        result[4] += 0.0027816411682892906;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
        result[0] += 0.01293103448275862;
        result[1] += 0;
        result[2] += 0.01293103448275862;
        result[3] += 0;
        result[4] += 0.9741379310344828;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.020202020202020204;
        result[3] += 0.1414141414141414;
        result[4] += 0.47474747474747475;
        result[5] += 0.36363636363636365;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
        result[0] += 0.05537098560354374;
        result[1] += 0.008859357696566999;
        result[2] += 0;
        result[3] += 0.035437430786267994;
        result[4] += 0.05758582502768549;
        result[5] += 0.8427464008859358;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.037463976945244955;
        result[3] += 0.484149855907781;
        result[4] += 0.020172910662824207;
        result[5] += 0.45821325648414984;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
        result[0] += 0.017035775127768313;
        result[1] += 0.7938671209540034;
        result[2] += 0;
        result[3] += 0.0017035775127768314;
        result[4] += 0.18739352640545145;
        result[5] += 0;
      } else {
        result[0] += 0.7731277533039648;
        result[1] += 0.016152716593245228;
        result[2] += 0.02569750367107195;
        result[3] += 0.07562408223201175;
        result[4] += 0.05947136563876652;
        result[5] += 0.049926578560939794;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)101.5) ) ) {
        result[0] += 0.016025641025641024;
        result[1] += 0.003205128205128205;
        result[2] += 0.3525641025641026;
        result[3] += 0.34294871794871795;
        result[4] += 0.016025641025641024;
        result[5] += 0.2692307692307692;
      } else {
        result[0] += 0.027439024390243903;
        result[1] += 0.003048780487804878;
        result[2] += 0.8628048780487805;
        result[3] += 0.07926829268292683;
        result[4] += 0.01016260162601626;
        result[5] += 0.017276422764227643;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.008368200836820083;
        result[2] += 0.0041841004184100415;
        result[3] += 0.0041841004184100415;
        result[4] += 0.9539748953974896;
        result[5] += 0.029288702928870293;
      } else {
        result[0] += 0.04301948051948052;
        result[1] += 0.021915584415584416;
        result[2] += 0.008928571428571428;
        result[3] += 0.13636363636363635;
        result[4] += 0.049512987012987016;
        result[5] += 0.7402597402597403;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9318181818181818;
        result[2] += 0;
        result[3] += 0.024793388429752067;
        result[4] += 0.04338842975206612;
        result[5] += 0;
      } else {
        result[0] += 0.638888888888889;
        result[1] += 0.034567901234567905;
        result[2] += 0.051234567901234575;
        result[3] += 0.06851851851851853;
        result[4] += 0.14197530864197533;
        result[5] += 0.06481481481481483;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
        result[0] += 0;
        result[1] += 0.05405405405405406;
        result[2] += 0;
        result[3] += 0.05405405405405406;
        result[4] += 0.2972972972972973;
        result[5] += 0.5945945945945946;
      } else {
        result[0] += 0.02252252252252252;
        result[1] += 0;
        result[2] += 0.2927927927927928;
        result[3] += 0.4774774774774775;
        result[4] += 0.013513513513513514;
        result[5] += 0.19369369369369369;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)83.5) ) ) {
        result[0] += 0.10256410256410256;
        result[1] += 0;
        result[2] += 0.676923076923077;
        result[3] += 0.18461538461538463;
        result[4] += 0;
        result[5] += 0.035897435897435895;
      } else {
        result[0] += 0.0013157894736842107;
        result[1] += 0;
        result[2] += 0.9328947368421053;
        result[3] += 0.05657894736842106;
        result[4] += 0;
        result[5] += 0.009210526315789475;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0.009584664536741214;
        result[1] += 0.009584664536741214;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9616613418530351;
        result[5] += 0.019169329073482427;
      } else {
        result[0] += 0.07370336669699727;
        result[1] += 0.004549590536851683;
        result[2] += 0.003639672429481347;
        result[3] += 0.06642402183803457;
        result[4] += 0.08280254777070063;
        result[5] += 0.7688808007279345;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)57.5) ) ) {
        result[0] += 0;
        result[1] += 0.9544513457556936;
        result[2] += 0;
        result[3] += 0.008281573498964804;
        result[4] += 0.037267080745341616;
        result[5] += 0;
      } else {
        result[0] += 0.5727272727272728;
        result[1] += 0.03529411764705882;
        result[2] += 0.06470588235294118;
        result[3] += 0.14224598930481283;
        result[4] += 0.0855614973262032;
        result[5] += 0.09946524064171124;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0.023255813953488372;
        result[2] += 0;
        result[3] += 0.20930232558139536;
        result[4] += 0.06976744186046512;
        result[5] += 0.6976744186046512;
      } else {
        result[0] += 0.07352941176470588;
        result[1] += 0.014705882352941176;
        result[2] += 0.5882352941176471;
        result[3] += 0.07352941176470588;
        result[4] += 0.10294117647058823;
        result[5] += 0.14705882352941177;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.4936708860759494;
        result[3] += 0.3670886075949367;
        result[4] += 0;
        result[5] += 0.13924050632911392;
      } else {
        result[0] += 0.003444316877152698;
        result[1] += 0;
        result[2] += 0.912743972445465;
        result[3] += 0.07921928817451206;
        result[4] += 0;
        result[5] += 0.004592422502870264;
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)48.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77.5) ) ) {
        result[0] += 0;
        result[1] += 0.0967741935483871;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9032258064516129;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.9936170212765958;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.006382978723404255;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)69.5) ) ) {
        result[0] += 0.004468275245755138;
        result[1] += 0.006255585344057194;
        result[2] += 0.009830205540661306;
        result[3] += 0.08042895442359249;
        result[4] += 0.1867739052725648;
        result[5] += 0.7122430741733691;
      } else {
        result[0] += 0.34989354151880764;
        result[1] += 0.0511000709723208;
        result[2] += 0.034066713981547196;
        result[3] += 0.1980127750177431;
        result[4] += 0.19659332860184528;
        result[5] += 0.170333569907736;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)88.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6666666666666666;
        result[3] += 0.3333333333333333;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.9736024844720497;
        result[1] += 0;
        result[2] += 0.010869565217391304;
        result[3] += 0.006211180124223602;
        result[4] += 0.009316770186335404;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
        result[0] += 0.29670329670329676;
        result[1] += 0;
        result[2] += 0.4285714285714286;
        result[3] += 0.1318681318681319;
        result[4] += 0.010989010989010992;
        result[5] += 0.1318681318681319;
      } else {
        result[0] += 0.015194681861348529;
        result[1] += 0;
        result[2] += 0.8964862298195632;
        result[3] += 0.07597340930674264;
        result[4] += 0;
        result[5] += 0.012345679012345678;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)70.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.05069124423963134;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9124423963133641;
        result[5] += 0.03686635944700461;
      } else {
        result[0] += 0.012466607301869992;
        result[1] += 0.008904719501335707;
        result[2] += 0.026714158504007122;
        result[3] += 0.1219946571682992;
        result[4] += 0.04630454140694568;
        result[5] += 0.7836153161175423;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        result[0] += 0.5731769505354412;
        result[1] += 0.03773584905660377;
        result[2] += 0.037225905150433454;
        result[3] += 0.10300866904640489;
        result[4] += 0.14278429372768994;
        result[5] += 0.10606833248342683;
      } else {
        result[0] += 0.0024271844660194173;
        result[1] += 0.9975728155339806;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)97.5) ) ) {
        result[0] += 0;
        result[1] += 0.011494252873563218;
        result[2] += 0.13793103448275862;
        result[3] += 0.3620689655172414;
        result[4] += 0.10919540229885058;
        result[5] += 0.3793103448275862;
      } else {
        result[0] += 0.017391304347826087;
        result[1] += 0;
        result[2] += 0.6260869565217392;
        result[3] += 0.30434782608695654;
        result[4] += 0.008695652173913044;
        result[5] += 0.043478260869565216;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)74.5) ) ) {
        result[0] += 0.22727272727272727;
        result[1] += 0.022727272727272728;
        result[2] += 0.4318181818181818;
        result[3] += 0;
        result[4] += 0.13636363636363635;
        result[5] += 0.18181818181818182;
      } else {
        result[0] += 0.0038461538461538464;
        result[1] += 0.001282051282051282;
        result[2] += 0.9346153846153846;
        result[3] += 0.047435897435897434;
        result[4] += 0;
        result[5] += 0.01282051282051282;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_0/test_data.csv", "r");
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
