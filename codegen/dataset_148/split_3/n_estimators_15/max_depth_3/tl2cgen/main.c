
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
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0.0005885815185403178;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9994114184814596;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.37247924080664296;
        result[1] += 0.005338078291814947;
        result[2] += 0.012158956109134046;
        result[3] += 0.6100237247924081;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        result[0] += 0.13040828762949422;
        result[1] += 0.001218769043266301;
        result[2] += 0.003656307129798903;
        result[3] += 0.8403412553321146;
        result[4] += 0.02254722730042657;
        result[5] += 0.0018281535648994515;
        result[6] += 0;
      } else {
        result[0] += 0.9940198848002348;
        result[1] += 0.00029350258649154344;
        result[2] += 0.0017977033422607036;
        result[3] += 0.003778845801078622;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0001100634699343288;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        result[0] += 0.00229951135383731;
        result[1] += 0;
        result[2] += 0.009485484334578903;
        result[3] += 0.8074159241161254;
        result[4] += 0.18079908019545848;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8535825545171339;
        result[1] += 0;
        result[2] += 0.003115264797507788;
        result[3] += 0.1366822429906542;
        result[4] += 0.002336448598130841;
        result[5] += 0.003115264797507788;
        result[6] += 0.0011682242990654205;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
        result[0] += 0.9346595256312166;
        result[1] += 0.0013771996939556236;
        result[2] += 0.0017597551644988523;
        result[3] += 0.06151491966335119;
        result[4] += 0;
        result[5] += 0.00022953328232593726;
        result[6] += 0.0004590665646518745;
      } else {
        result[0] += 0.9994866529774127;
        result[1] += 0;
        result[2] += 0.00038501026694045176;
        result[3] += 0;
        result[4] += 6.416837782340863e-05;
        result[5] += 6.416837782340863e-05;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.1515318796577422;
        result[1] += 0.006348330113165885;
        result[2] += 0.005796301407673199;
        result[3] += 0.7565553408777257;
        result[4] += 0.07894010488545404;
        result[5] += 0.0008280430582390284;
        result[6] += 0;
      } else {
        result[0] += 0.032724984266834484;
        result[1] += 0;
        result[2] += 0.016991818753933293;
        result[3] += 0.05601006922592826;
        result[4] += 0.8942731277533039;
        result[5] += 0;
        result[6] += 0;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.8591828639428798;
        result[1] += 0;
        result[2] += 0.005156683855612852;
        result[3] += 0.1309004363347878;
        result[4] += 0.0015866719555731853;
        result[5] += 0.001190003966679889;
        result[6] += 0.0019833399444664813;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.011126564673157162;
        result[3] += 0.796383866481224;
        result[4] += 0.19221140472878998;
        result[5] += 0.0002781641168289291;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
        result[0] += 0;
        result[1] += 0.01366120218579235;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9863387978142076;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0009369875849144999;
        result[1] += 0.0009369875849144999;
        result[2] += 0.0025767158585148745;
        result[3] += 0.743968142422113;
        result[4] += 0.24970719137971423;
        result[5] += 0.0018739751698289998;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
        result[0] += 0.9959016393442623;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.004098360655737705;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.016417910447761194;
        result[3] += 0;
        result[4] += 0.9835820895522388;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.9898843930635839;
        result[1] += 0;
        result[2] += 0.007707129094412332;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.002408477842003854;
      } else {
        result[0] += 0.9997018739352641;
        result[1] += 0;
        result[2] += 0.0002981260647359455;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.9087036610637808;
        result[1] += 0.0025328114206769514;
        result[2] += 0.008174073221275616;
        result[3] += 0.07920792079207921;
        result[4] += 0;
        result[5] += 0.000345383375546857;
        result[6] += 0.001036150126640571;
      } else {
        result[0] += 0;
        result[1] += 0.0024518388791593695;
        result[2] += 0.004553415061295972;
        result[3] += 0.9929947460595446;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
        result[0] += 0.1877648305084746;
        result[1] += 0.00026483050847457627;
        result[2] += 0.00847457627118644;
        result[3] += 0.6784957627118644;
        result[4] += 0.12341101694915255;
        result[5] += 0.0015889830508474577;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.007046764894298526;
        result[2] += 0;
        result[3] += 0.1031390134529148;
        result[4] += 0.8898142216527867;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
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
        result[2] += 0.003972194637537239;
        result[3] += 0.4160873882820258;
        result[4] += 0.579940417080437;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += 0.9986970369655439;
        result[1] += 0;
        result[2] += 0.0012064472541260497;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9.651578033008396e-05;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        result[0] += 0.9397471679527172;
        result[1] += 0.0036118863897553768;
        result[2] += 0.009522245936627812;
        result[3] += 0.04679034641274011;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0003283533081595797;
      } else {
        result[0] += 0.4120317820658343;
        result[1] += 0;
        result[2] += 0.004540295119182747;
        result[3] += 0.5832387438516837;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00018917896329928113;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        result[0] += 0.9683698296836983;
        result[1] += 0;
        result[2] += 0.030413625304136254;
        result[3] += 0.0012165450121654502;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.07124148768989;
        result[1] += 0.003666841278156103;
        result[2] += 0.0026191723415400735;
        result[3] += 0.9219486642221059;
        result[4] += 0.0005238344683080147;
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
        result[0] += 0.006993006993006993;
        result[1] += 0.04195804195804196;
        result[2] += 0;
        result[3] += 0.951048951048951;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
        result[0] += 0.9981669932368371;
        result[1] += 0;
        result[2] += 0.0015169711143416978;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00031603564882118704;
      } else {
        result[0] += 0.999903437620703;
        result[1] += 0;
        result[2] += 9.656237929702588e-05;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
        result[0] += 0.6417165668662674;
        result[1] += 0.001270186898929414;
        result[2] += 0.005806568680820178;
        result[3] += 0.3228996552349846;
        result[4] += 0.027944111776447105;
        result[5] += 0.00018145527127563056;
        result[6] += 0.00018145527127563056;
      } else {
        result[0] += 0.020371479928100657;
        result[1] += 0;
        result[2] += 0.011983223487118031;
        result[3] += 0.6680647094068304;
        result[4] += 0.29658478130617133;
        result[5] += 0.0029958058717795078;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        result[0] += 0.2469055374592834;
        result[1] += 0.005863192182410423;
        result[2] += 0;
        result[3] += 0.7472312703583062;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5120865139949109;
        result[1] += 0;
        result[2] += 0.02608142493638677;
        result[3] += 0.44529262086513993;
        result[4] += 0.01653944020356234;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.00558659217877095;
        result[1] += 0.01675977653631285;
        result[2] += 0;
        result[3] += 0.48417132216014896;
        result[4] += 0.4934823091247672;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.031205673758865248;
        result[4] += 0.9687943262411347;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
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
        result[0] += 0.9993537350313628;
        result[1] += 0;
        result[2] += 0.0005702337958563011;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.603117278084015e-05;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.362227602905569;
        result[1] += 0.002421307506053269;
        result[2] += 0.006295399515738499;
        result[3] += 0.539225181598063;
        result[4] += 0.08886198547215496;
        result[5] += 0.000847457627118644;
        result[6] += 0.00012106537530266344;
      } else {
        result[0] += 0.9698453608247423;
        result[1] += 0;
        result[2] += 0.004381443298969072;
        result[3] += 0.024742268041237112;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0010309278350515464;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
        result[0] += 0.9987437185929648;
        result[1] += 0;
        result[2] += 0.0009422110552763819;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.000314070351758794;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0.004592422502870264;
        result[1] += 0.0057405281285878304;
        result[2] += 0.001148105625717566;
        result[3] += 0.23076923076923078;
        result[4] += 0.7554535017221584;
        result[5] += 0.002296211251435132;
        result[6] += 0;
      } else {
        result[0] += 0.5832264876687533;
        result[1] += 0.0011313070367297685;
        result[2] += 0.00897503582472283;
        result[3] += 0.38373934685873745;
        result[4] += 0.02187193604344219;
        result[5] += 0.0006787842220378611;
        result[6] += 0.00037710234557658946;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
        result[0] += 0;
        result[1] += 0.016496465043205028;
        result[2] += 0;
        result[3] += 0.983503534956795;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9591836734693877;
        result[1] += 0;
        result[2] += 0.04081632653061224;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        result[0] += 0.006688963210702341;
        result[1] += 0.006688963210702341;
        result[2] += 0.01282051282051282;
        result[3] += 0.9738015607580826;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.986228813559322;
        result[1] += 0;
        result[2] += 0.013771186440677966;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.38223938223938225;
        result[4] += 0.6177606177606177;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0034891835310537334;
        result[1] += 0.004884856943475227;
        result[2] += 0;
        result[3] += 0.04675505931612003;
        result[4] += 0.944870900209351;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)6504) ) ) {
        result[0] += 0.9991572172847074;
        result[1] += 0;
        result[2] += 0.0008044744100520994;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.830830524057616e-05;
      } else {
        result[0] += 0.5;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.5;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.8005396896784349;
        result[1] += 0.0019114009444569373;
        result[2] += 0.0055093321340229364;
        result[3] += 0.1760737575893861;
        result[4] += 0.014166854058916123;
        result[5] += 0.0005621767483696875;
        result[6] += 0.0012367888464133124;
      } else {
        result[0] += 0;
        result[1] += 0.0018377526909950114;
        result[2] += 0.008926227356261484;
        result[3] += 0.80677343134681;
        result[4] += 0.18193751640850614;
        result[5] += 0.0005250721974271462;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        result[0] += 0.9823291259823768;
        result[1] += 0.0001428911645629912;
        result[2] += 0.0009049773755656109;
        result[3] += 0.016194331983805668;
        result[4] += 0.00038104310550130985;
        result[5] += 0;
        result[6] += 4.763038818766373e-05;
      } else {
        result[0] += 0.03524229074889868;
        result[1] += 0;
        result[2] += 0.01908957415565345;
        result[3] += 0;
        result[4] += 0.9456681350954479;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)80.5) ) ) {
        result[0] += 0.7176477562392555;
        result[1] += 0.0010670460608216254;
        result[2] += 0.002845456162191001;
        result[3] += 0.2767206117730749;
        result[4] += 0.0008299247139723754;
        result[5] += 0.0002371213468492501;
        result[6] += 0.0006520837038354378;
      } else {
        result[0] += 0.5959493670886077;
        result[1] += 0;
        result[2] += 0.013670886075949368;
        result[3] += 0.26227848101265827;
        result[4] += 0.12810126582278483;
        result[5] += 0;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
        result[0] += 0;
        result[1] += 0.017684887459807074;
        result[2] += 0;
        result[3] += 0.9823151125401929;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9671532846715328;
        result[1] += 0;
        result[2] += 0.032846715328467155;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)48) ) ) {
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
        result[0] += 0.9821109123434705;
        result[1] += 0;
        result[2] += 0.017889087656529516;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.08269152817186867;
        result[1] += 0.008917713822456425;
        result[2] += 0.007296311309282529;
        result[3] += 0.9010944466963924;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += 0.9961579612878124;
        result[1] += 0;
        result[2] += 0.0007781344227215252;
        result[3] += 0.0029180040852057193;
        result[4] += 9.726680284019065e-05;
        result[5] += 0;
        result[6] += 4.8633401420095325e-05;
      } else {
        result[0] += 0.02173913043478261;
        result[1] += 0.0009881422924901187;
        result[2] += 0.01778656126482214;
        result[3] += 0.28359683794466406;
        result[4] += 0.6749011857707511;
        result[5] += 0.0009881422924901187;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.4326052210974961;
        result[1] += 0.0019978689397975495;
        result[2] += 0.005194459243473629;
        result[3] += 0.5522109749600427;
        result[4] += 0.00586041555673948;
        result[5] += 0.0017314864144912098;
        result[6] += 0.00039957378795950994;
      } else {
        result[0] += 0.98573606271777;
        result[1] += 0;
        result[2] += 0.00195993031358885;
        result[3] += 0.011868466898954703;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00043554006968641115;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)86) ) ) {
        result[0] += 0.18846769887880405;
        result[1] += 0.0005339028296849973;
        result[2] += 0;
        result[3] += 0.8088627869727709;
        result[4] += 0.0010678056593699946;
        result[5] += 0.0010678056593699946;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.04993252361673414;
        result[3] += 0;
        result[4] += 0.9487179487179487;
        result[5] += 0.001349527665317139;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
        result[0] += 0;
        result[1] += 0.008704061895551257;
        result[2] += 0;
        result[3] += 0.1895551257253385;
        result[4] += 0.8017408123791102;
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.99162148841794;
        result[1] += 0;
        result[2] += 0.007885657959586005;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004928536224741253;
      } else {
        result[0] += 0.9995271867612293;
        result[1] += 0;
        result[2] += 0.00047281323877068556;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
        result[0] += 0.7171735402941972;
        result[1] += 0.001804891255301868;
        result[2] += 0.005324429203140511;
        result[3] += 0.27452395993141415;
        result[4] += 0;
        result[5] += 0.00018048912553018682;
        result[6] += 0.0009926901904160274;
      } else {
        result[0] += 0.24897959183673468;
        result[1] += 0.010884353741496598;
        result[2] += 0.017687074829931974;
        result[3] += 0.7224489795918367;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
        result[0] += 0.9652406417112299;
        result[1] += 0;
        result[2] += 0.029411764705882353;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0053475935828877;
      } else {
        result[0] += 0.9993990384615384;
        result[1] += 0;
        result[2] += 0.0006009615384615385;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
        result[0] += 0.9987244897959183;
        result[1] += 0;
        result[2] += 0.0012755102040816326;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9998091967181836;
        result[1] += 0;
        result[2] += 0.00019080328181644724;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
        result[0] += 0.20743301642178047;
        result[1] += 0.004105445116681072;
        result[2] += 0.007130509939498704;
        result[3] += 0.44857389801210024;
        result[4] += 0.3327571305099395;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.7919139881285698;
        result[1] += 0.0005599731212901781;
        result[2] += 0.006159704334191959;
        result[3] += 0.18669503863814538;
        result[4] += 0.013663344159480345;
        result[5] += 0.0005599731212901781;
        result[6] += 0.00044797849703214247;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0;
        result[1] += 0.0034562211981566822;
        result[2] += 0.001152073732718894;
        result[3] += 0.2534562211981567;
        result[4] += 0.7419354838709677;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.013619339462036091;
        result[3] += 0.9836567926455567;
        result[4] += 0.002723867892407218;
        result[5] += 0;
        result[6] += 0;
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
        result[0] += 0.9980283204875425;
        result[1] += 0;
        result[2] += 0.0017028141243950528;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002688653880623768;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        result[0] += 0.9154877598720631;
        result[1] += 0.0007380981670562185;
        result[2] += 0.003198425390576947;
        result[3] += 0.07922253659736746;
        result[4] += 0;
        result[5] += 0.00036904908352810927;
        result[6] += 0.0009841308894082915;
      } else {
        result[0] += 0.11137440758293839;
        result[1] += 0.004374772147283996;
        result[2] += 0.00929639081297849;
        result[3] += 0.5461173897192855;
        result[4] += 0.3279256288734962;
        result[5] += 0.0009114108640174991;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
        result[0] += 0;
        result[1] += 0.0019342359767891683;
        result[2] += 0;
        result[3] += 0.9929078014184397;
        result[4] += 0.0051579626047711154;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.04403409090909091;
        result[3] += 0;
        result[4] += 0.9559659090909091;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        result[0] += 0.12031746031746032;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8596825396825397;
        result[4] += 0.02;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.28817204301075267;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.5333333333333333;
        result[4] += 0.17849462365591398;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.37142857142857144;
        result[1] += 0.12857142857142856;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.5;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.028817204301075268;
        result[1] += 0;
        result[2] += 0.016774193548387096;
        result[3] += 0;
        result[4] += 0.9531182795698925;
        result[5] += 0.0012903225806451613;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
        result[0] += 0.9973972454180675;
        result[1] += 0.0007591367530636592;
        result[2] += 0.0014098253985467956;
        result[3] += 0.00043379243032209096;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9905927481961823;
        result[1] += 0;
        result[2] += 0.0009133254178463787;
        result[3] += 0.008493926385971321;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.5377978635990139;
        result[1] += 0.004245412215831279;
        result[2] += 0.008627773212818405;
        result[3] += 0.44891810462886883;
        result[4] += 0;
        result[5] += 0.0001369487811558477;
        result[6] += 0.0002738975623116954;
      } else {
        result[0] += 0.9855542761436198;
        result[1] += 0;
        result[2] += 0.002512299801109599;
        result[3] += 0.011619386580131896;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0003140374751386999;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
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
        result[1] += 0.0035750766087844746;
        result[2] += 0.010725229826353424;
        result[3] += 0.6552604698672115;
        result[4] += 0.32992849846782435;
        result[5] += 0.0005107252298263535;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
        result[0] += 0.9960552268244576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.0039447731755424065;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0005349023803155924;
        result[2] += 0.0032094142818935543;
        result[3] += 0.5145760898635999;
        result[4] += 0.48087723990371756;
        result[5] += 0.0008023535704733886;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
        result[0] += 0.9985751863217887;
        result[1] += 0.00021920210434020167;
        result[2] += 0.0007672073651907058;
        result[3] += 0.00043840420868040335;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9909976116112438;
        result[1] += 0;
        result[2] += 0.0006430277420540144;
        result[3] += 0.008175638434686754;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00018372221201543268;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
        result[0] += 0.8855109460818442;
        result[1] += 0.002166009128181326;
        result[2] += 0.005647095227044171;
        result[3] += 0.10536087259224879;
        result[4] += 0;
        result[5] += 7.735746886361879e-05;
        result[6] += 0.0012377195018179006;
      } else {
        result[0] += 0.49987948903350204;
        result[1] += 0;
        result[2] += 0.001928175463967221;
        result[3] += 0.4981923355025307;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
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
    

    FILE* file = fopen("./codegen/dataset_148/split_3/test_data.csv", "r");
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
