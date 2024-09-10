
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        result[0] += 0.00900473933649289;
        result[1] += 0.0071090047393364926;
        result[2] += 0.00995260663507109;
        result[3] += 0.9739336492890995;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9935965848452508;
        result[1] += 0;
        result[2] += 0.0064034151547491995;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.9932982288176161;
        result[1] += 0;
        result[2] += 0.006701771182383916;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9998333472210649;
        result[1] += 0;
        result[2] += 0.00016665277893508876;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.7279141555196237;
        result[1] += 0.0027928854916948404;
        result[2] += 0.003380861384683228;
        result[3] += 0.24371600764368662;
        result[4] += 0.02072615022784066;
        result[5] += 0.0008819638394825813;
        result[6] += 0.0005879758929883875;
      } else {
        result[0] += 0.36220605650482157;
        result[1] += 0;
        result[2] += 0.007105396717983422;
        result[3] += 0.5164946709524616;
        result[4] += 0.11165623413973948;
        result[5] += 0.0006767044493317545;
        result[6] += 0.0018609372356623247;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)35) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9981060606060606;
        result[5] += 0.001893939393939394;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        result[0] += 0.0009068923821039903;
        result[1] += 0.003929866989117291;
        result[2] += 0.0036275695284159614;
        result[3] += 0.9909310761789601;
        result[4] += 0;
        result[5] += 0.0006045949214026602;
        result[6] += 0;
      } else {
        result[0] += 0.975;
        result[1] += 0;
        result[2] += 0.025;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
        result[0] += 0.9986052072263549;
        result[1] += 0;
        result[2] += 0.0012619553666312433;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00013283740701381508;
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
        result[0] += 0.9093906321055025;
        result[1] += 0.0029558890404729424;
        result[2] += 0.007730786721236926;
        result[3] += 0.0790131878126421;
        result[4] += 0;
        result[5] += 0.00011368804001819008;
        result[6] += 0.0007958162801273306;
      } else {
        result[0] += 0;
        result[1] += 0.0010578279266572638;
        result[2] += 0.0028208744710860366;
        result[3] += 0.9961212976022567;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2263) ) ) {
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0009227929867733005;
        result[1] += 0.003383574284835435;
        result[2] += 0.007689941556444171;
        result[3] += 0.9864657028606583;
        result[4] += 0;
        result[5] += 0.0015379883112888342;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9991906520309576;
        result[1] += 0;
        result[2] += 0.0007081794729121352;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00010116849613030503;
      } else {
        result[0] += 0.725752508361204;
        result[1] += 0.0033444816053511705;
        result[2] += 0;
        result[3] += 0.2709030100334448;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        result[0] += 0.9584538826524708;
        result[1] += 0.0034718203911584308;
        result[2] += 0.005786367318597384;
        result[3] += 0.03194074759865756;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0003471820391158431;
      } else {
        result[0] += 0.6215825605202939;
        result[1] += 0;
        result[2] += 0.006383234975310129;
        result[3] += 0.37167288931711434;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00036131518728170546;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)25) ) ) {
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
        result[0] += 0.9720670391061452;
        result[1] += 0;
        result[2] += 0.027932960893854747;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.07903494176372712;
        result[1] += 0.009983361064891847;
        result[2] += 0.0037437603993344427;
        result[3] += 0.9072379367720466;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
        result[0] += 0.7358903020667725;
        result[1] += 0.002186009538950715;
        result[2] += 0.0063593004769475344;
        result[3] += 0.24622416534181235;
        result[4] += 0.00834658187599364;
        result[5] += 0.0005961844197138313;
        result[6] += 0.0003974562798092209;
      } else {
        result[0] += 0.9876543209876544;
        result[1] += 8.341675008341677e-05;
        result[2] += 0.0007507507507507509;
        result[3] += 0.010969302635969305;
        result[4] += 0.00033366700033366707;
        result[5] += 4.1708375041708384e-05;
        result[6] += 0.00016683350016683353;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        result[0] += 0.6457175925925925;
        result[1] += 0;
        result[2] += 0.005092592592592593;
        result[3] += 0.34664351851851855;
        result[4] += 0.0015046296296296296;
        result[5] += 0.0006944444444444445;
        result[6] += 0.00034722222222222224;
      } else {
        result[0] += 0.0029850746268656717;
        result[1] += 0;
        result[2] += 0.0014925373134328358;
        result[3] += 0;
        result[4] += 0.9955223880597015;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)6504) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9991012851622181;
        result[1] += 0;
        result[2] += 0.0008987148377819717;
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
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        result[0] += 0.0004286326618088298;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9995713673381912;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.016635426429240863;
        result[1] += 0.009606373008434864;
        result[2] += 0.019915651358950327;
        result[3] += 0.9529053420805998;
        result[4] += 0;
        result[5] += 0.0009372071227741331;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.981906060230512;
        result[1] += 0.0001239310943115628;
        result[2] += 0.005576899244020325;
        result[3] += 0.011525591770975339;
        result[4] += 0;
        result[5] += 0.0001239310943115628;
        result[6] += 0.0007435865658693767;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0007567158531971245;
        result[3] += 0.9992432841468029;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)1) ) ) {
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9995893223819302;
        result[5] += 0.0004106776180698152;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.003992628992628993;
        result[2] += 0.009520884520884522;
        result[3] += 0.9834152334152334;
        result[4] += 0;
        result[5] += 0.003071253071253071;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9988158368944036;
        result[1] += 0;
        result[2] += 0.0008752509910930341;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0003089121145034238;
      } else {
        result[0] += 0.5340457596931086;
        result[1] += 0.0035621317988765583;
        result[2] += 0.008768324428003836;
        result[3] += 0.4530757638032607;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005480202767502398;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
        result[0] += 0.9979408736578909;
        result[1] += 0;
        result[2] += 0.0020591263421091337;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9617780294450736;
        result[1] += 0;
        result[2] += 0.003963759909399773;
        result[3] += 0.032559456398640996;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0016987542468856172;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
        result[0] += 0;
        result[1] += 0.015957446808510637;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9840425531914894;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0004046944556859571;
        result[2] += 0.006272764063132335;
        result[3] += 0.6386078510724403;
        result[4] += 0.3535006070416835;
        result[5] += 0.0012140833670578712;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.9945759368836292;
        result[1] += 0;
        result[2] += 0.005424063116370809;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9998285469352765;
        result[1] += 0;
        result[2] += 0.00017145306472353194;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        result[0] += 0.9434595112601821;
        result[1] += 0.003992972368631209;
        result[2] += 0.006229036895064686;
        result[3] += 0.045679603897141034;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006388755789809935;
      } else {
        result[0] += 0.41152716593245225;
        result[1] += 0;
        result[2] += 0.0078928046989721;
        result[3] += 0.5798458149779736;
        result[4] += 0;
        result[5] += 0.00018355359765051394;
        result[6] += 0.0005506607929515419;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.13949962092494314;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8567096285064443;
        result[4] += 0.003032600454890068;
        result[5] += 0.000758150113722517;
        result[6] += 0;
      } else {
        result[0] += 0.0020512820512820513;
        result[1] += 0;
        result[2] += 0.027692307692307693;
        result[3] += 0;
        result[4] += 0.9661538461538461;
        result[5] += 0.0041025641025641026;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.9903367912462698;
        result[1] += 0.0003907915304817394;
        result[2] += 0.0027000142106011087;
        result[3] += 0.006217137984936763;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0003552650277106722;
      } else {
        result[0] += 0.6432937377465114;
        result[1] += 0;
        result[2] += 0.0028831737977165267;
        result[3] += 0.3531311267443202;
        result[4] += 0;
        result[5] += 0.00023065390381732213;
        result[6] += 0.00046130780763464427;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        result[0] += 0;
        result[1] += 0.011194029850746268;
        result[2] += 0;
        result[3] += 0.9888059701492538;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9771863117870723;
        result[1] += 0;
        result[2] += 0.022813688212927757;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)3.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-102.5) ) ) {
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.9872448979591837;
        result[1] += 0;
        result[2] += 0.012755102040816327;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9994181310368906;
        result[1] += 0;
        result[2] += 0.0005430776989022074;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.879126420730052e-05;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.022703549060542793;
        result[1] += 0.009133611691022963;
        result[2] += 0.00521920668058455;
        result[3] += 0.8856993736951981;
        result[4] += 0.07593945720250521;
        result[5] += 0.0013048016701461375;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.01651705565529623;
        result[3] += 0.1867145421903052;
        result[4] += 0.7960502692998205;
        result[5] += 0.000718132854578097;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.9818248802652585;
        result[1] += 0.00024560972614515533;
        result[2] += 0.0054034139751934175;
        result[3] += 0.0115436571288223;
        result[4] += 0;
        result[5] += 0.00012280486307257767;
        result[6] += 0.0008596340415080437;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0003901677721420211;
        result[3] += 0.9996098322278579;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
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
        result[0] += 0.00974184120798831;
        result[1] += 0.007793472966390648;
        result[2] += 0.010228933268387726;
        result[3] += 0.9722357525572333;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9879253567508233;
        result[1] += 0;
        result[2] += 0.012074643249176729;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)27) ) ) {
        result[0] += 0.6879242954124665;
        result[1] += 0;
        result[2] += 0.008434478502365766;
        result[3] += 0.27689775766303226;
        result[4] += 0.025303435507097297;
        result[5] += 0.000617156963587739;
        result[6] += 0.0008228759514503186;
      } else {
        result[0] += 0.9844429099476014;
        result[1] += 0.0005686664771111743;
        result[2] += 0.00044680937487306553;
        result[3] += 0.014135423859620619;
        result[4] += 0.00016247613631747838;
        result[5] += 0.00012185710223810878;
        result[6] += 0.00012185710223810878;
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
        result[0] += 0.3673014239149082;
        result[1] += 0;
        result[2] += 0.010464916795333677;
        result[3] += 0.5043746783324755;
        result[4] += 0.1164865328529765;
        result[5] += 0.0008577800651912849;
        result[6] += 0.000514668039114771;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)118.5) ) ) {
        result[0] += 0.30841472577009765;
        result[1] += 0.003756574004507889;
        result[2] += 0.006386175807663411;
        result[3] += 0.6788129226145755;
        result[4] += 0.002629601803155522;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.01644736842105263;
        result[1] += 0.03618421052631579;
        result[2] += 0;
        result[3] += 0.12171052631578948;
        result[4] += 0.8256578947368421;
        result[5] += 0;
        result[6] += 0;
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
        result[0] += 0.3431952662721893;
        result[1] += 0;
        result[2] += 0.011834319526627219;
        result[3] += 0.6449704142011834;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        result[0] += 0.0024140012070006035;
        result[1] += 0.0012070006035003018;
        result[2] += 0.00724200362100181;
        result[3] += 0.9082679541339771;
        result[4] += 0.07724803862401931;
        result[5] += 0.003621001810500905;
        result[6] += 0;
      } else {
        result[0] += 0.22577092511013216;
        result[1] += 0;
        result[2] += 0.024229074889867842;
        result[3] += 0;
        result[4] += 0.75;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += 0.8842747326203209;
        result[1] += 0;
        result[2] += 0.002339572192513369;
        result[3] += 0.1126336898395722;
        result[4] += 0;
        result[5] += 0.0005848930481283422;
        result[6] += 0.00016711229946524063;
      } else {
        result[0] += 0.9223943141202087;
        result[1] += 0.0011092395546608604;
        result[2] += 0.00164331785875683;
        result[3] += 0.07456554784109116;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00028758062528244524;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.9833597464342314;
        result[1] += 0;
        result[2] += 0.01664025356576862;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9996268424653274;
        result[1] += 0;
        result[2] += 0.00037315753467255427;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9958762886597938;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.004123711340206186;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
        result[0] += 0.6095673039708955;
        result[1] += 0.0010062698351265577;
        result[2] += 0.0051087545475656014;
        result[3] += 0.32850839848285474;
        result[4] += 0.05457078721263256;
        result[5] += 0.00023221611579843642;
        result[6] += 0.0010062698351265577;
      } else {
        result[0] += 0.06985871271585557;
        result[1] += 0.0043171114599686025;
        result[2] += 0.014521193092621664;
        result[3] += 0.8869701726844584;
        result[4] += 0.02315541601255887;
        result[5] += 0.0011773940345368916;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.0034071550255536627;
        result[1] += 0.015332197614991482;
        result[2] += 0;
        result[3] += 0.5315161839863713;
        result[4] += 0.4497444633730835;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.026595744680851064;
        result[4] += 0.973404255319149;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)50) ) ) {
        result[0] += 0.00039231071008238524;
        result[1] += 0;
        result[2] += 0.0051000392310710085;
        result[3] += 0.8854452726559435;
        result[4] += 0.10553158101216163;
        result[5] += 0.003530796390741467;
        result[6] += 0;
      } else {
        result[0] += 0.37698783910196443;
        result[1] += 0;
        result[2] += 0.019644527595884004;
        result[3] += 0;
        result[4] += 0.6033676333021516;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        result[0] += 0.9943420154131305;
        result[1] += 0.00029265437518290904;
        result[2] += 0.0005365330211686666;
        result[3] += 0.004780021461320848;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4.8775729197151507e-05;
      } else {
        result[0] += 0.8101491071976438;
        result[1] += 0.0010431367736393202;
        result[2] += 0.004233908081241946;
        result[3] += 0.18414432104068235;
        result[4] += 0;
        result[5] += 0.00012272197336933178;
        result[6] += 0.00030680493342332945;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)11) ) ) {
        result[0] += 0.09523809523809523;
        result[1] += 0.005400098183603338;
        result[2] += 0.004418262150220913;
        result[3] += 0.5851742758959254;
        result[4] += 0.30976926853215514;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
        result[0] += 0.005084745762711864;
        result[1] += 0.01864406779661017;
        result[2] += 0;
        result[3] += 0.18305084745762712;
        result[4] += 0.7932203389830509;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
        result[0] += 0.9987990645344795;
        result[1] += 0;
        result[2] += 0.0011377283357562732;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6.320712976423741e-05;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        result[0] += 0.012929442186922793;
        result[1] += 0.0057258958256372365;
        result[2] += 0.006464721093461396;
        result[3] += 0.6608792020687108;
        result[4] += 0.31326191355744365;
        result[5] += 0.0007388252678241596;
        result[6] += 0;
      } else {
        result[0] += 0.9835944245713582;
        result[1] += 0.00024670038238559273;
        result[2] += 0.0038238559269766874;
        result[3] += 0.011101517207351672;
        result[4] += 0;
        result[5] += 0.00012335019119279637;
        result[6] += 0.0011101517207351673;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)101) ) ) {
        result[0] += 0;
        result[1] += 0.0016507098052162433;
        result[2] += 0;
        result[3] += 0.9966985803895676;
        result[4] += 0.0013205678441729947;
        result[5] += 0.00033014196104324867;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.04269972451790634;
        result[3] += 0;
        result[4] += 0.9559228650137741;
        result[5] += 0.0013774104683195593;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
        result[0] += 0.9977540707467715;
        result[1] += 0;
        result[2] += 0.0022459292532285235;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9841772151898734;
        result[1] += 0;
        result[2] += 0.00949367088607595;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.006329113924050633;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)5858.5) ) ) {
        result[0] += 0.9997082725567826;
        result[1] += 0;
        result[2] += 0.00029172744321733694;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.5;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        result[0] += 0.8340654952076677;
        result[1] += 0.0029952076677316293;
        result[2] += 0.0013977635782747603;
        result[3] += 0.159944089456869;
        result[4] += 0;
        result[5] += 0.000998402555910543;
        result[6] += 0.0005990415335463259;
      } else {
        result[0] += 0.175485344499429;
        result[1] += 0.0034259611724400457;
        result[2] += 0.008755234107346783;
        result[3] += 0.7807384849638371;
        result[4] += 0.03121431290445375;
        result[5] += 0.00038066235249333843;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += 0.00319642000958926;
        result[1] += 0.000799105002397315;
        result[2] += 0.007831229023493686;
        result[3] += 0.6101965798305897;
        result[4] += 0.37749720313249163;
        result[5] += 0.000479463001438389;
        result[6] += 0;
      } else {
        result[0] += 0.9894646924829158;
        result[1] += 0;
        result[2] += 0.007118451025056948;
        result[3] += 0.0025626423690205016;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0008542141230068338;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
        result[0] += 0.34963503649635036;
        result[1] += 0.0025547445255474453;
        result[2] += 0.009124087591240875;
        result[3] += 0.6375912408759125;
        result[4] += 0.0010948905109489052;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0041025641025641026;
        result[1] += 0;
        result[2] += 0.0041025641025641026;
        result[3] += 0.17846153846153845;
        result[4] += 0.8133333333333334;
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
        result[0] += 0.031496062992125984;
        result[1] += 0.12598425196850394;
        result[2] += 0;
        result[3] += 0.84251968503937;
        result[4] += 0;
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
        result[0] += 0.9988100264865072;
        result[1] += 0;
        result[2] += 0.0010748147863805613;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00011515872711220299;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.7252665876777251;
        result[1] += 0.0035545023696682463;
        result[2] += 0.006220379146919431;
        result[3] += 0.24348341232227488;
        result[4] += 0.019549763033175356;
        result[5] += 0.0013329383886255925;
        result[6] += 0.0005924170616113745;
      } else {
        result[0] += 0.3644309968061859;
        result[1] += 0;
        result[2] += 0.009413346780971592;
        result[3] += 0.5059673894772231;
        result[4] += 0.11884350310976635;
        result[5] += 0.0006723819129265423;
        result[6] += 0.0006723819129265423;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        result[0] += 0.06112295664534471;
        result[1] += 0;
        result[2] += 0.013503909026297086;
        result[3] += 0.7981520966595593;
        result[4] += 0.1257995735607676;
        result[5] += 0.0014214641080312722;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.014678899082568808;
        result[2] += 0;
        result[3] += 0.13944954128440368;
        result[4] += 0.8458715596330275;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
        result[0] += 0.11609071274298056;
        result[1] += 0.0005399568034557236;
        result[2] += 0;
        result[3] += 0.8547516198704104;
        result[4] += 0.026457883369330453;
        result[5] += 0.0021598272138228943;
        result[6] += 0;
      } else {
        result[0] += 0.03595132743362832;
        result[1] += 0.0005530973451327434;
        result[2] += 0.006084070796460177;
        result[3] += 0;
        result[4] += 0.956858407079646;
        result[5] += 0.0005530973451327434;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.9687564023765621;
        result[1] += 0;
        result[2] += 0.0011268182749436591;
        result[3] += 0.03011677934849416;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.555103424889793;
        result[1] += 0;
        result[2] += 0.008477449983045098;
        result[3] += 0.434045439131909;
        result[4] += 0;
        result[5] += 0.000339097999321804;
        result[6] += 0.0020345879959308235;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
        result[0] += 0.60913140311804;
        result[1] += 0.0033407572383073497;
        result[2] += 0;
        result[3] += 0.38752783964365256;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9164298364842045;
        result[1] += 0.0011944478767659293;
        result[2] += 0.0028007743317270068;
        result[3] += 0.07949256559166358;
        result[4] += 0;
        result[5] += 0;
        result[6] += 8.237571563902961e-05;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)76.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
        result[0] += 0.9848412901340541;
        result[1] += 0.000620959199327903;
        result[2] += 0.0012784454103809768;
        result[3] += 0.013186251232786645;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.305402345034153e-05;
      } else {
        result[0] += 0.22407307898979045;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.76947877485223;
        result[4] += 0.003761418592154756;
        result[5] += 0.0026867275658248257;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.2541497602360753;
        result[1] += 0.005901881224640354;
        result[2] += 0.008483954260420508;
        result[3] += 0.6359277019549981;
        result[4] += 0.09553670232386573;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.1420150053590568;
        result[1] += 0;
        result[2] += 0.018756698821007504;
        result[3] += 0.04715969989281887;
        result[4] += 0.7920685959271169;
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
        result[3] += 0.9965495608531995;
        result[4] += 0.002509410288582183;
        result[5] += 0.0009410288582183187;
        result[6] += 0;
      } else {
        result[0] += 0.50036469730124;
        result[1] += 0;
        result[2] += 0.024799416484318017;
        result[3] += 0;
        result[4] += 0.474835886214442;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-195.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9955113192818112;
        result[1] += 0;
        result[2] += 0.0029274004683840756;
        result[3] += 0.0005854800936768151;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009758001561280251;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-12) ) ) {
        result[0] += 0.08333333333333333;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9166666666666666;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9991659716430359;
        result[5] += 0.0008340283569641367;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        result[0] += 0.06498068141903758;
        result[1] += 0.005268703898840885;
        result[2] += 0.009483667017913594;
        result[3] += 0.9195644538110291;
        result[4] += 0;
        result[5] += 0.0007024938531787847;
        result[6] += 0;
      } else {
        result[0] += 0.4589160839160839;
        result[1] += 0;
        result[2] += 0.0034965034965034965;
        result[3] += 0.5332167832167832;
        result[4] += 0;
        result[5] += 0.004370629370629371;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9990854587948379;
        result[1] += 0;
        result[2] += 0.0008637333604308505;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5.08078447312265e-05;
      } else {
        result[0] += 0.5262865090403339;
        result[1] += 0.002781641168289291;
        result[2] += 0.00764951321279555;
        result[3] += 0.46272600834492356;
        result[4] += 0;
        result[5] += 0.00027816411682892914;
        result[6] += 0.00027816411682892914;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += 0.998755832037325;
        result[1] += 0;
        result[2] += 0.0009331259720062209;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00031104199066874026;
      } else {
        result[0] += 0.9702396628917567;
        result[1] += 0;
        result[2] += 0.0039504872267579665;
        result[3] += 0.025809849881485384;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
        result[0] += 0.9829047340736411;
        result[1] += 0;
        result[2] += 0.0007305669199298656;
        result[3] += 0.016072472238457043;
        result[4] += 0;
        result[5] += 0.0002922267679719462;
        result[6] += 0;
      } else {
        result[0] += 0.2781316348195329;
        result[1] += 0;
        result[2] += 0.040339702760084924;
        result[3] += 0.34182590233545646;
        result[4] += 0.33970276008492567;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
        result[0] += 0.5460526315789473;
        result[1] += 0;
        result[2] += 0.004934210526315789;
        result[3] += 0.37417763157894735;
        result[4] += 0.06907894736842106;
        result[5] += 0.004111842105263158;
        result[6] += 0.001644736842105263;
      } else {
        result[0] += 0.5988181221273802;
        result[1] += 0.002298095863427446;
        result[2] += 0.0027905449770190415;
        result[3] += 0.3345370978332239;
        result[4] += 0.06073539067629678;
        result[5] += 0;
        result[6] += 0.0008207485226526593;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9993978871312059;
        result[1] += 0;
        result[2] += 0.0004926378017406536;
        result[3] += 0;
        result[4] += 5.473753352673928e-05;
        result[5] += 0;
        result[6] += 5.473753352673928e-05;
      } else {
        result[0] += 0.5488462863046724;
        result[1] += 0.0018367581219148207;
        result[2] += 0.0049362874526460805;
        result[3] += 0.3693031798874986;
        result[4] += 0.07427390655493056;
        result[5] += 0.0006887842957180577;
        result[6] += 0.00011479738261967629;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)10.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.14857881136950904;
        result[1] += 0.0103359173126615;
        result[2] += 0.0103359173126615;
        result[3] += 0.8307493540051679;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
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
