
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
        result[0] += 0.01892744479495268;
        result[1] += 0.025236593059936908;
        result[2] += 0;
        result[3] += 0.07886435331230283;
        result[4] += 0.8769716088328076;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.3162962962962963;
        result[1] += 0.002962962962962963;
        result[2] += 0.008148148148148147;
        result[3] += 0.6725925925925926;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)73) ) ) {
        result[0] += 0.37333333333333335;
        result[1] += 0;
        result[2] += 0.023333333333333334;
        result[3] += 0.6033333333333334;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.022268615170494086;
        result[4] += 0.977731384829506;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)3.5) ) ) {
        result[0] += 0.8571428571428571;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.14285714285714285;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9993149120803837;
        result[1] += 0;
        result[2] += 0.0006470274796376647;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.806043997868615e-05;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0.005733944954128441;
        result[1] += 0.005733944954128441;
        result[2] += 0.0022935779816513763;
        result[3] += 0.22247706422018348;
        result[4] += 0.7637614678899083;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.604243940308807;
        result[1] += 0.0005175536961959803;
        result[2] += 0.0063831622530837575;
        result[3] += 0.37557146553954973;
        result[4] += 0.011644958164409558;
        result[5] += 0.0008625894936599673;
        result[6] += 0.0007763305442939705;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
        result[0] += 0.9964358452138493;
        result[1] += 0;
        result[2] += 0.003564154786150713;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9747899159663865;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.025210084033613446;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)32.5) ) ) {
        result[0] += 0.9997997997997998;
        result[1] += 0;
        result[2] += 0.0002002002002002002;
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        result[0] += 0.01822420004238186;
        result[1] += 0.004026276753549481;
        result[2] += 0.015257469802924348;
        result[3] += 0.8022886204704387;
        result[4] += 0.15766052129688493;
        result[5] += 0.0025429116338207248;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0033112582781456954;
        result[2] += 0;
        result[3] += 0.15941343424787133;
        result[4] += 0.8372753074739829;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
        result[0] += 0.9946799667497923;
        result[1] += 0;
        result[2] += 0.004655029093931838;
        result[3] += 0.0003325020781379884;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0003325020781379884;
      } else {
        result[0] += 0.422550052687039;
        result[1] += 0;
        result[2] += 0.002107481559536354;
        result[3] += 0.5751317175974711;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00021074815595363542;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        result[0] += 0.9642408317148407;
        result[1] += 0;
        result[2] += 0.0005712327202102136;
        result[3] += 0.035073689020907114;
        result[4] += 0.00011424654404204273;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.43498233215547705;
        result[1] += 0.0028268551236749115;
        result[2] += 0.0031802120141342758;
        result[3] += 0.4120141342756184;
        result[4] += 0.1469964664310954;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.06957047791893528;
        result[1] += 0;
        result[2] += 0.012704174228675138;
        result[3] += 0.8136721113127647;
        result[4] += 0.10284331518451302;
        result[5] += 0.001209921355111918;
        result[6] += 0;
      } else {
        result[0] += 0.9884510869565217;
        result[1] += 0;
        result[2] += 0.004076086956521739;
        result[3] += 0.004076086956521739;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0033967391304347825;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        result[0] += 0.9517676435799711;
        result[1] += 0.0001314233144959916;
        result[2] += 0.0017085030884478906;
        result[3] += 0.0140622946510711;
        result[4] += 0.03219871205151794;
        result[5] += 0;
        result[6] += 0.0001314233144959916;
      } else {
        result[0] += 0.7203032130243775;
        result[1] += 0.001119820828667413;
        result[2] += 0.004737703505900593;
        result[3] += 0.2566973899560685;
        result[4] += 0.016280472047549312;
        result[5] += 0.0005168403824618829;
        result[6] += 0.00034456025497458864;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.09389140271493214;
        result[1] += 0.014705882352941178;
        result[2] += 0;
        result[3] += 0.6674208144796381;
        result[4] += 0.22398190045248872;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.012950971322849213;
        result[1] += 0;
        result[2] += 0.0037002775208140612;
        result[3] += 0.1267345050878816;
        result[4] += 0.8566142460684552;
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)1.5) ) ) {
        result[0] += 0.9991193306913254;
        result[1] += 0;
        result[2] += 0.0008806693086745927;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9998746238716149;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00012537612838515547;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.697650576676634;
        result[1] += 0.0026484408372490394;
        result[2] += 0.006578385305425033;
        result[3] += 0.2876548483554037;
        result[4] += 0.0041862451943613845;
        result[5] += 0.0006834686031610424;
        result[6] += 0.0005980350277659121;
      } else {
        result[0] += 0;
        result[1] += 0.0013694878115584773;
        result[2] += 0.00794302930703917;
        result[3] += 0.8099150917556834;
        result[4] += 0.180772391125719;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.36894824707846413;
        result[4] += 0.6310517529215359;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0007142857142857143;
        result[1] += 0.005714285714285714;
        result[2] += 0;
        result[3] += 0.06428571428571428;
        result[4] += 0.9292857142857143;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
        result[0] += 0.9370007535795026;
        result[1] += 0.0015825169555388093;
        result[2] += 0.001808590806330068;
        result[3] += 0.0586284853051997;
        result[4] += 0;
        result[5] += 7.535795026375282e-05;
        result[6] += 0.000904295403165034;
      } else {
        result[0] += 0.9998718605843158;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.00012813941568426448;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        result[0] += 0.19728769777203747;
        result[1] += 0.003228931223764934;
        result[2] += 0.01679044236357766;
        result[3] += 0.7639651275427835;
        result[4] += 0.018082014853083632;
        result[5] += 0.0006457862447529868;
        result[6] += 0;
      } else {
        result[0] += 0.00048520135856380397;
        result[1] += 0.0048520135856380394;
        result[2] += 0;
        result[3] += 0.14798641436196022;
        result[4] += 0.8466763706938379;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        result[0] += 0.324822695035461;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.675177304964539;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.7823439878234398;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.2176560121765601;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        result[0] += 0.9805056350898569;
        result[1] += 0;
        result[2] += 0.012488577520560463;
        result[3] += 0.0003045994517209869;
        result[4] += 0.0027413950654888823;
        result[5] += 0.0024367956137678953;
        result[6] += 0.0015229972586049345;
      } else {
        result[0] += 0.004709576138147566;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9952904238618524;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
        result[0] += 0.5669465311533363;
        result[1] += 0;
        result[2] += 0.011931064958020326;
        result[3] += 0.35815289438798054;
        result[4] += 0.06296950950066284;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8854208160245833;
        result[1] += 0.00048369657998065225;
        result[2] += 0.0020770500199169184;
        result[3] += 0.11102259147555912;
        result[4] += 0.0003414328799863427;
        result[5] += 0.0002276219199908952;
        result[6] += 0.00042679109998292844;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        result[0] += 0.5816993464052288;
        result[1] += 0;
        result[2] += 0.015250544662309368;
        result[3] += 0.40305010893246185;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0037002775208140612;
        result[1] += 0.016651248843663275;
        result[2] += 0;
        result[3] += 0.9796484736355227;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        result[0] += 0.9607594936708861;
        result[1] += 0;
        result[2] += 0.039240506329113925;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.06712962962962964;
        result[1] += 0.008333333333333333;
        result[2] += 0.000925925925925926;
        result[3] += 0.9236111111111112;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.9368574134199135;
        result[1] += 0.0004396645021645022;
        result[2] += 0.001893939393939394;
        result[3] += 0.055735930735930736;
        result[4] += 0.004565746753246753;
        result[5] += 0.00027056277056277056;
        result[6] += 0.00023674242424242425;
      } else {
        result[0] += 0.63963133640553;
        result[1] += 0;
        result[2] += 0.005069124423963135;
        result[3] += 0.3527649769585254;
        result[4] += 0.0017281105990783416;
        result[5] += 0.0006912442396313365;
        result[6] += 0.00011520737327188943;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)204) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.00145985401459854;
        result[3] += 0;
        result[4] += 0.9985401459854014;
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
        result[0] += 0.00045310376076121433;
        result[1] += 0.0040779338468509285;
        result[2] += 0.0095151789759855;
        result[3] += 0.877208880833711;
        result[4] += 0.10874490258269144;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
        result[0] += 0.08690404345202173;
        result[1] += 0;
        result[2] += 0.006638503319251659;
        result[3] += 0.019915509957754977;
        result[4] += 0.8865419432709717;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.3356643356643357;
        result[1] += 0;
        result[2] += 0.027972027972027972;
        result[3] += 0.6363636363636364;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        result[0] += 0.12041284403669726;
        result[1] += 0.0011467889908256884;
        result[2] += 0.004013761467889909;
        result[3] += 0.8463302752293579;
        result[4] += 0.026949541284403675;
        result[5] += 0.0011467889908256884;
        result[6] += 0;
      } else {
        result[0] += 0.9934273334802086;
        result[1] += 0.0007343761474627305;
        result[2] += 0.0012851582580597784;
        result[3] += 0.004296100462656974;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002570316516119557;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
        result[0] += 0.3990969086488364;
        result[1] += 0;
        result[2] += 0.0046891281695033;
        result[3] += 0.48159083014935744;
        result[4] += 0.11462313303230288;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9242805252863928;
        result[1] += 0;
        result[2] += 0.0044705224923162895;
        result[3] += 0.06677842972897458;
        result[4] += 0.002514668901927913;
        result[5] += 0.0008382229673093043;
        result[6] += 0.0011176306230790724;
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
        result[4] += 0.9982078853046595;
        result[5] += 0.0017921146953405018;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
        result[0] += 0.07314936487078405;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9259745948313622;
        result[4] += 0;
        result[5] += 0.0008760402978537013;
        result[6] += 0;
      } else {
        result[0] += 0.35539215686274506;
        result[1] += 0.007965686274509802;
        result[2] += 0.023897058823529403;
        result[3] += 0.6102941176470588;
        result[4] += 0;
        result[5] += 0.0024509803921568623;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.9951737451737451;
        result[1] += 0;
        result[2] += 0.0033783783783783786;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0014478764478764478;
      } else {
        result[0] += 0.999786880354631;
        result[1] += 0;
        result[2] += 0.00021311964536891012;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.9136280765724704;
        result[1] += 0.002051048313582498;
        result[2] += 0.007748404740200547;
        result[3] += 0.07554694621695533;
        result[4] += 0;
        result[5] += 0.00011394712853236098;
        result[6] += 0.0009115770282588879;
      } else {
        result[0] += 0;
        result[1] += 0.001772421127259837;
        result[2] += 0.006026231832683446;
        result[3] += 0.9922013470400567;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
        result[0] += 0.07489711934156379;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9032921810699589;
        result[4] += 0.021810699588477367;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.2897310513447433;
        result[1] += 0.0012224938875305626;
        result[2] += 0;
        result[3] += 0.5916870415647922;
        result[4] += 0.11674816625916871;
        result[5] += 0.0006112469437652813;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.42857142857142855;
        result[1] += 0.08333333333333333;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.4642857142857143;
        result[5] += 0.023809523809523808;
        result[6] += 0;
      } else {
        result[0] += 0.02922217447357112;
        result[1] += 0;
        result[2] += 0.010743446497636441;
        result[3] += 0;
        result[4] += 0.9587451654490761;
        result[5] += 0.001289213579716373;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        result[0] += 0.9936702293244786;
        result[1] += 0.0003113001971567915;
        result[2] += 0.0007263671266991802;
        result[3] += 0.00513645325308706;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00015565009857839576;
      } else {
        result[0] += 0.5461836652853898;
        result[1] += 0.002272423472797755;
        result[2] += 0.009357037829167225;
        result[3] += 0.4419195294746692;
        result[4] += 0;
        result[5] += 0.00013367196898810322;
        result[6] += 0.00013367196898810322;
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
        result[0] += 0.9881137957911146;
        result[1] += 0;
        result[2] += 0.0018511301636788776;
        result[3] += 0.009547934528448947;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00048713951675759937;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        result[0] += 0.9619047619047619;
        result[1] += 0;
        result[2] += 0.036904761904761905;
        result[3] += 0.0011904761904761906;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.052832811956899546;
        result[1] += 0.0031282586027111575;
        result[2] += 0.0010427528675703858;
        result[3] += 0.6722280152937087;
        result[4] += 0.2707681612791102;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)102) ) ) {
        result[0] += 0.008547008547008548;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9914529914529915;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.012415349887133182;
        result[2] += 0;
        result[3] += 0.002257336343115124;
        result[4] += 0.9853273137697517;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9991551134836207;
        result[1] += 0;
        result[2] += 0.0007296747186911939;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00011521179768808326;
      } else {
        result[0] += 0.5931710559109412;
        result[1] += 0.0009138489656891252;
        result[2] += 0.006313865581124865;
        result[3] += 0.3853950319847138;
        result[4] += 0.012876962698346765;
        result[5] += 0.000664617429592091;
        result[6] += 0.000664617429592091;
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
        result[0] += 0.75;
        result[1] += 0;
        result[2] += 0.25;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
        result[0] += 0.998970310622962;
        result[1] += 0;
        result[2] += 0.0010296893770379268;
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
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.672421893352126;
        result[1] += 0.002701432933991074;
        result[2] += 0.007164669955367631;
        result[3] += 0.28564716936809964;
        result[4] += 0.0314775663612873;
        result[5] += 0.00011745360582569887;
        result[6] += 0.00046981442330279547;
      } else {
        result[0] += 0.3500262651024339;
        result[1] += 0;
        result[2] += 0.008579933461740501;
        result[3] += 0.5232008404832779;
        result[4] += 0.11661705480651374;
        result[5] += 0.0007004027315706532;
        result[6] += 0.0008755034144633164;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
        result[0] += 0.11635423400129283;
        result[1] += 0.00904977375565611;
        result[2] += 0.005817711700064641;
        result[3] += 0.8687782805429864;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        result[0] += 0.5022537025112686;
        result[1] += 0;
        result[2] += 0.016097875080489377;
        result[3] += 0.4816484224082421;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.13383152173913043;
        result[1] += 0.012228260869565218;
        result[2] += 0.006114130434782609;
        result[3] += 0.8478260869565217;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        result[0] += 0.11607601438109914;
        result[1] += 0.0010272213662044173;
        result[2] += 0.00719054956343092;
        result[3] += 0.8063687724704675;
        result[4] += 0.06676938880328712;
        result[5] += 0.002568053415511043;
        result[6] += 0;
      } else {
        result[0] += 0.9937661769530822;
        result[1] += 0.0004010061609128358;
        result[2] += 0.0013488389048886297;
        result[3] += 0.004411067770041194;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.291021107506107e-05;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        result[0] += 0.43875318993802404;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.561246810061976;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8073394495412844;
        result[1] += 0;
        result[2] += 0.008926357550210762;
        result[3] += 0.0004959087527894868;
        result[4] += 0.1795189685097942;
        result[5] += 0.0014877262583684603;
        result[6] += 0.0022315893875526904;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
        result[0] += 0.010380622837370242;
        result[1] += 0.020761245674740483;
        result[2] += 0;
        result[3] += 0.07612456747404844;
        result[4] += 0.8927335640138409;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.3302277432712215;
        result[1] += 0.0027605244996549345;
        result[2] += 0.008281573498964804;
        result[3] += 0.6587301587301587;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)71) ) ) {
        result[0] += 0.5202558635394456;
        result[1] += 0;
        result[2] += 0.04904051172707889;
        result[3] += 0.43070362473347545;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.022757697456492636;
        result[4] += 0.9772423025435074;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        result[0] += 0.12908878504672897;
        result[1] += 0.0011682242990654205;
        result[2] += 0.004672897196261682;
        result[3] += 0.8399532710280374;
        result[4] += 0.0227803738317757;
        result[5] += 0.002336448598130841;
        result[6] += 0;
      } else {
        result[0] += 0.9942345121369028;
        result[1] += 0.0005141199368366935;
        result[2] += 0.0012852998420917337;
        result[3] += 0.003745730968381624;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00022033711578715433;
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
        result[0] += 0.36808981119237966;
        result[1] += 0;
        result[2] += 0.008504847763225038;
        result[3] += 0.5068889266882123;
        result[4] += 0.11515563871406702;
        result[5] += 0.0010205817315870045;
        result[6] += 0.0003401939105290015;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-15) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)6504) ) ) {
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        result[0] += 0.9937952430196484;
        result[1] += 0;
        result[2] += 0.004653567735263702;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0015511892450879006;
      } else {
        result[0] += 0.9995884773662551;
        result[1] += 0;
        result[2] += 0.00041152263374485596;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        result[0] += 0.7397604327666152;
        result[1] += 0.0012557959814528594;
        result[2] += 0.0061823802163833074;
        result[3] += 0.22440108191653788;
        result[4] += 0.026854714064914992;
        result[5] += 0.0002897990726429675;
        result[6] += 0.0012557959814528594;
      } else {
        result[0] += 0.09268292682926829;
        result[1] += 0.0045528455284552845;
        result[2] += 0.0013008130081300813;
        result[3] += 0.4;
        result[4] += 0.5014634146341463;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
        result[0] += 0;
        result[1] += 0.0019398642095053346;
        result[2] += 0;
        result[3] += 0.9938570966698997;
        result[4] += 0.0025864856126737797;
        result[5] += 0.0016165535079211122;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.04845222072678331;
        result[3] += 0;
        result[4] += 0.9515477792732167;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        result[0] += 0.982210501078878;
        result[1] += 0.00028770079117717575;
        result[2] += 0.0013905538240230162;
        result[3] += 0.015967393910333253;
        result[4] += 0;
        result[5] += 4.795013186286262e-05;
        result[6] += 9.590026372572525e-05;
      } else {
        result[0] += 0.0070028011204481795;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9929971988795518;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        result[0] += 0.6528430678086161;
        result[1] += 0.0010303303496683625;
        result[2] += 0.003863738811256359;
        result[3] += 0.325455599201494;
        result[4] += 0.01629209865413098;
        result[5] += 0.00032197823427136327;
        result[6] += 0.00019318694056281795;
      } else {
        result[0] += 0.9843701156611441;
        result[1] += 0;
        result[2] += 0.008127539856205065;
        result[3] += 0.0009377930603313535;
        result[4] += 0.00437636761487965;
        result[5] += 0.0015629884338855893;
        result[6] += 0.0006251953735542357;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-34) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)118.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.4482758620689655;
        result[4] += 0.5517241379310345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0027063599458728013;
        result[1] += 0.010825439783491205;
        result[2] += 0;
        result[3] += 0.06495263870094722;
        result[4] += 0.9215155615696887;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        result[0] += 0.13455520786767994;
        result[1] += 0.0049172999552972736;
        result[2] += 0.005364327223960662;
        result[3] += 0.5543138131426018;
        result[4] += 0.30084935181046046;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.2727272727272727;
        result[4] += 0.7272727272727273;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
        result[0] += 0.9029399919452276;
        result[1] += 0.001409585179218687;
        result[2] += 0.0016109544905356424;
        result[3] += 0.09343536045106726;
        result[4] += 0;
        result[5] += 0.0002013693113169553;
        result[6] += 0.0004027386226339106;
      } else {
        result[0] += 0.9870441256888066;
        result[1] += 0.00037858074285954655;
        result[2] += 0.0009674841206410633;
        result[3] += 0.011357422285786397;
        result[4] += 8.412905396878812e-05;
        result[5] += 4.206452698439406e-05;
        result[6] += 0.00012619358095318218;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        result[0] += 0.1432637571157495;
        result[1] += 0.0018975332068311196;
        result[2] += 0.013045540796963948;
        result[3] += 0.6242884250474383;
        result[4] += 0.21726755218216318;
        result[5] += 0.00023719165085388995;
        result[6] += 0;
      } else {
        result[0] += 0.007028112449799197;
        result[1] += 0.01706827309236948;
        result[2] += 0;
        result[3] += 0.11244979919678715;
        result[4] += 0.8634538152610441;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        result[0] += 0.31874405328258804;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.681255946717412;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.7507225433526011;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.24927745664739884;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)40) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.05198776758409786;
        result[3] += 0;
        result[4] += 0.9418960244648318;
        result[5] += 0.0061162079510703364;
        result[6] += 0;
      } else {
        result[0] += 0.9930450559419414;
        result[1] += 0;
        result[2] += 0.005140610825521621;
        result[3] += 0.0006047777441790142;
        result[4] += 0;
        result[5] += 0.0003023888720895071;
        result[6] += 0.0009071666162685213;
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
        result[0] += 0.006619385342789598;
        result[1] += 0.008983451536643027;
        result[2] += 0.013238770685579196;
        result[3] += 0.9711583924349881;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.989648033126294;
        result[1] += 0;
        result[2] += 0.010351966873706004;
        result[3] += 0;
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
        result[0] += 0.9991195835247282;
        result[1] += 0;
        result[2] += 0.000765579543714592;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00011483693155718879;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0.0023391812865497076;
        result[1] += 0.005847953216374269;
        result[2] += 0;
        result[3] += 0.22105263157894736;
        result[4] += 0.7707602339181286;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.6039789151504845;
        result[1] += 0.0011052542084679475;
        result[2] += 0.006716544805305219;
        result[3] += 0.375616391770107;
        result[4] += 0.011562659411664681;
        result[5] += 0.00042509777248767207;
        result[6] += 0.0005951368814827409;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        result[0] += 0.19894179894179895;
        result[1] += 0.007407407407407408;
        result[2] += 0;
        result[3] += 0.7936507936507936;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5255474452554745;
        result[1] += 0;
        result[2] += 0.03102189781021898;
        result[3] += 0.44343065693430656;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        result[0] += 0.9823837181394902;
        result[1] += 0.00033600537608601737;
        result[2] += 0.0008640138242211876;
        result[3] += 0.016080257284116547;
        result[4] += 0.00024000384006144098;
        result[5] += 9.600153602457639e-05;
        result[6] += 0;
      } else {
        result[0] += 0.033766233766233764;
        result[1] += 0;
        result[2] += 0.023376623376623377;
        result[3] += 0;
        result[4] += 0.9428571428571428;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
        result[0] += 0.8029816677366431;
        result[1] += 0.0008559811684142949;
        result[2] += 0.0035665882017262285;
        result[3] += 0.18253798416434838;
        result[4] += 0.008845138740281047;
        result[5] += 0.0007846494043797703;
        result[6] += 0.00042799058420714745;
      } else {
        result[0] += 0.46609389383246397;
        result[1] += 0;
        result[2] += 0.005523166615526235;
        result[3] += 0.5283829395520098;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        result[0] += 0.2109289617486339;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.785792349726776;
        result[4] += 0;
        result[5] += 0.0032786885245901644;
        result[6] += 0;
      } else {
        result[0] += 0.9948472182185069;
        result[1] += 0.0006846353415970022;
        result[2] += 0.0009008359757855291;
        result[3] += 0.003351109829922168;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00021620063418852697;
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
        result[0] += 0.1722124927028605;
        result[1] += 0.0043782837127845885;
        result[2] += 0.018096906012842966;
        result[3] += 0.8050204319906596;
        result[4] += 0;
        result[5] += 0.0002918855808523059;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.17578125;
        result[1] += 0;
        result[2] += 0.009375;
        result[3] += 0.8138020833333334;
        result[4] += 0;
        result[5] += 0.0010416666666666667;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
        result[0] += 0.9973166368515206;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.0026833631484794273;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9891117478510029;
        result[1] += 0;
        result[2] += 0.008595988538681949;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.002292263610315186;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0008655510675129833;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9272937103289094;
        result[4] += 0.07155222158107329;
        result[5] += 0.00028851702250432774;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.998254037538193;
        result[5] += 0.001745962461807071;
        result[6] += 0;
      } else {
        result[0] += 0.6766917293233082;
        result[1] += 0.08270676691729323;
        result[2] += 0.22556390977443608;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.015037593984962405;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.9988442950199622;
        result[1] += 0.0002101281781886951;
        result[2] += 0.0007879806682076066;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00015759613364152133;
      } else {
        result[0] += 0.8681318681318682;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.13186813186813187;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.999826659733056;
        result[1] += 0;
        result[2] += 0.0001733402669440111;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.6968075776179619;
        result[1] += 0.0017540782318891425;
        result[2] += 0.0068409051043676556;
        result[3] += 0.2939835116646203;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006139273811611999;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        result[0] += 0.9633251833740831;
        result[1] += 0;
        result[2] += 0.03667481662591687;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.07861153649821337;
        result[1] += 0.005615109749872384;
        result[2] += 0.0010209290454313426;
        result[3] += 0.9137314956610516;
        result[4] += 0.0010209290454313426;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)101.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0008340283569641367;
        result[1] += 0.011676396997497914;
        result[2] += 0;
        result[3] += 0.20600500417014178;
        result[4] += 0.7814845704753962;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += 0.8380418709627209;
        result[1] += 0;
        result[2] += 0.0029574285936648766;
        result[3] += 0.15573196357693206;
        result[4] += 0.002646120320647521;
        result[5] += 0.00023348120476301658;
        result[6] += 0.0003891353412716943;
      } else {
        result[0] += 0.89135490992234;
        result[1] += 0.0005124768399889621;
        result[2] += 0.0014585879291993534;
        result[3] += 0.10269247447471123;
        result[4] += 0.0037450230614577995;
        result[5] += 0.00015768518153506524;
        result[6] += 7.884259076753262e-05;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-136) ) ) {
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
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        result[0] += 0.006437768240343348;
        result[1] += 0.00536480686695279;
        result[2] += 0.012875536480686695;
        result[3] += 0.9753218884120172;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9895724713242962;
        result[1] += 0;
        result[2] += 0.010427528675703858;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)101) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0008333333333333334;
        result[1] += 0.006666666666666667;
        result[2] += 0;
        result[3] += 0.21416666666666667;
        result[4] += 0.7783333333333333;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-16) ) ) {
        result[0] += 0.8333333333333334;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.16666666666666666;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9990014594054842;
        result[1] += 0;
        result[2] += 0.0008833243720715876;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00011521622244412013;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
        result[0] += 0.6377034358047016;
        result[1] += 0.001175406871609403;
        result[2] += 0.005696202531645569;
        result[3] += 0.3264918625678119;
        result[4] += 0.02820976491862567;
        result[5] += 0.00027124773960216994;
        result[6] += 0.0004520795660036165;
      } else {
        result[0] += 0.01594802126402835;
        result[1] += 0;
        result[2] += 0.01772002362669817;
        result[3] += 0.6792675723567632;
        result[4] += 0.2835203780271707;
        result[5] += 0.0035440047253396337;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)25) ) ) {
        result[0] += 0.6172502134927413;
        result[1] += 0;
        result[2] += 0.007344150298889839;
        result[3] += 0.33082835183603765;
        result[4] += 0.04355251921434672;
        result[5] += 0.0006831767719897525;
        result[6] += 0.00034158838599487624;
      } else {
        result[0] += 0.9792189179505554;
        result[1] += 0.0006767785341773159;
        result[2] += 0.0008360205422190374;
        result[3] += 0.018830367450933555;
        result[4] += 0.00019905251005215176;
        result[5] += 7.96210040208607e-05;
        result[6] += 0.0001592420080417214;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        result[0] += 0.4352078239608802;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.5647921760391198;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.808029197080292;
        result[1] += 0;
        result[2] += 0.013868613138686132;
        result[3] += 0.00048661800486618007;
        result[4] += 0.17518248175182483;
        result[5] += 0.0012165450121654502;
        result[6] += 0.0012165450121654502;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-6.5) ) ) {
        result[0] += 0.29292929292929293;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.7070707070707071;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.1517509727626459;
        result[1] += 0.009727626459143969;
        result[2] += 0.009727626459143969;
        result[3] += 0.8287937743190662;
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
        result[0] += 0.005405405405405406;
        result[1] += 0.05405405405405406;
        result[2] += 0;
        result[3] += 0.9405405405405406;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0013123359580052493;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9973753280839895;
        result[5] += 0.0013123359580052493;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
        result[0] += 0.07416173570019724;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9246548323471401;
        result[4] += 0;
        result[5] += 0.001183431952662722;
        result[6] += 0;
      } else {
        result[0] += 0.3425272610647851;
        result[1] += 0.007055805003207184;
        result[2] += 0.023091725465041693;
        result[3] += 0.6254008980115459;
        result[4] += 0;
        result[5] += 0.001924310455420141;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.999612152553329;
        result[1] += 0;
        result[2] += 0.00038784744667097606;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.6758943781942078;
        result[1] += 0;
        result[2] += 0.0048977853492333905;
        result[3] += 0.31793015332197616;
        result[4] += 0;
        result[5] += 0.00021294718909710392;
        result[6] += 0.0010647359454855196;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
        result[0] += 0.40444444444444444;
        result[1] += 0.06222222222222222;
        result[2] += 0;
        result[3] += 0.5333333333333333;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9166700908082345;
        result[1] += 0.0006985248798126311;
        result[2] += 0.003163906808563094;
        result[3] += 0.07917984961170237;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00028762789168755397;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        result[0] += 0.0015533980582524273;
        result[1] += 0.0003883495145631068;
        result[2] += 0.004660194174757282;
        result[3] += 0.8745631067961165;
        result[4] += 0.11766990291262136;
        result[5] += 0.0011650485436893205;
        result[6] += 0;
      } else {
        result[0] += 0.350844277673546;
        result[1] += 0;
        result[2] += 0.014071294559099437;
        result[3] += 0;
        result[4] += 0.6350844277673546;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.9907217225015937;
        result[1] += 0.0006020256392095759;
        result[2] += 0.00226644946525958;
        result[3] += 0.0060910829378851205;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0003187194560521284;
      } else {
        result[0] += 0.6429483459082995;
        result[1] += 0;
        result[2] += 0.0030179918746372604;
        result[3] += 0.3538015089959373;
        result[4] += 0;
        result[5] += 0.00011607661056297156;
        result[6] += 0.00011607661056297156;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)109) ) ) {
        result[0] += 0.015873015873015872;
        result[1] += 0.015873015873015872;
        result[2] += 0;
        result[3] += 0.9682539682539683;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.004054054054054054;
        result[1] += 0.00945945945945946;
        result[2] += 0;
        result[3] += 0.002702702702702703;
        result[4] += 0.9837837837837838;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)85) ) ) {
        result[0] += 0.17796610169491525;
        result[1] += 0.009778357235984355;
        result[2] += 0.0045632333767926985;
        result[3] += 0.7653194263363755;
        result[4] += 0.0423728813559322;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.05082212257100149;
        result[4] += 0.9491778774289985;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4064.5) ) ) {
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)107) ) ) {
        result[0] += 0;
        result[1] += 0.0002081165452653486;
        result[2] += 0.0060353798126951096;
        result[3] += 0.6672216441207076;
        result[4] += 0.3259105098855359;
        result[5] += 0.0006243496357960458;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.018518518518518517;
        result[2] += 0;
        result[3] += 0.013888888888888888;
        result[4] += 0.9675925925925926;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9976050110537952;
        result[1] += 0;
        result[2] += 0.002210759027266028;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00018422991893883567;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.9099751187514137;
        result[1] += 0.002035738520696675;
        result[2] += 0.008708437005202442;
        result[3] += 0.07860212621578828;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006785795068988917;
      } else {
        result[0] += 0;
        result[1] += 0.002883922134102379;
        result[2] += 0.005407354001441961;
        result[3] += 0.9917087238644556;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
        result[0] += 0;
        result[1] += 0.005017103762827822;
        result[2] += 0.009806157354618017;
        result[3] += 0.6068415051311289;
        result[4] += 0.3783352337514253;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9908827186075425;
        result[1] += 0.0004144218814753419;
        result[2] += 0.00870285951098218;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
        result[0] += 0.9202057067020571;
        result[1] += 0.0014930325149303254;
        result[2] += 0.0021566025215660257;
        result[3] += 0.07556403450564037;
        result[4] += 8.294625082946252e-05;
        result[5] += 0.00016589250165892504;
        result[6] += 0.0003317850033178501;
      } else {
        result[0] += 0.9994015161590637;
        result[1] += 0;
        result[2] += 0.0002659928181939088;
        result[3] += 0;
        result[4] += 6.64982045484772e-05;
        result[5] += 0.0002659928181939088;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)100.5) ) ) {
        result[0] += 0.15300691857370943;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8469930814262906;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.07475317348377997;
        result[1] += 0;
        result[2] += 0.06770098730606489;
        result[3] += 0;
        result[4] += 0.8504936530324401;
        result[5] += 0.007052186177715092;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
        result[0] += 0.8148148148148148;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.18518518518518517;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.997066875244427;
        result[1] += 0;
        result[2] += 0.0023464998044583495;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005866249511145874;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0008875739644970414;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9340236686390533;
        result[4] += 0.06360946745562131;
        result[5] += 0.0014792899408284023;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
        result[0] += 0;
        result[1] += 0.004043126684636119;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9959568733153639;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.10740740740740741;
        result[1] += 0;
        result[2] += 0.0345679012345679;
        result[3] += 0;
        result[4] += 0.8530864197530864;
        result[5] += 0.0049382716049382715;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        result[0] += 0.9965762064367317;
        result[1] += 0.0007207986448985475;
        result[2] += 0.0020903160702057874;
        result[3] += 0.0002522795257144916;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00036039932244927373;
      } else {
        result[0] += 0.010135135135135136;
        result[1] += 0.04054054054054054;
        result[2] += 0;
        result[3] += 0.9493243243243243;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += 0.19295634920634921;
        result[1] += 0;
        result[2] += 0.00496031746031746;
        result[3] += 0.8020833333333334;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.993758533255315;
        result[1] += 0;
        result[2] += 0.0039009167154281255;
        result[3] += 0.0011702750146284377;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0011702750146284377;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)55) ) ) {
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
        result[0] += 0.9733587059942912;
        result[1] += 0;
        result[2] += 0.02664129400570885;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.06719203649937786;
        result[1] += 0.005806719203649938;
        result[2] += 0.004977187888842804;
        result[3] += 0.9220240564081295;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0.1853932584269663;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.16760299625468164;
        result[4] += 0.6460674157303371;
        result[5] += 0.0009363295880149813;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.02318623784592371;
        result[3] += 0.9304412864622289;
        result[4] += 0.04338070306656694;
        result[5] += 0.0029917726252804786;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9994596680818217;
        result[1] += 0;
        result[2] += 0.0005403319181783095;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.6794306335204491;
        result[1] += 0.0018043303929430633;
        result[2] += 0.0048115477145148355;
        result[3] += 0.3129510825982358;
        result[4] += 0;
        result[5] += 0.00020048115477145148;
        result[6] += 0.0008019246190858059;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4064.5) ) ) {
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.009398018796037593;
        result[3] += 0.7868935737871475;
        result[4] += 0.2019304038608077;
        result[5] += 0.001778003556007112;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.005187319884726225;
        result[2] += 0;
        result[3] += 0.06628242074927954;
        result[4] += 0.9285302593659942;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += 0.842174055113822;
        result[1] += 0;
        result[2] += 0.002723014922121773;
        result[3] += 0.15499400936717134;
        result[4] += 0;
        result[5] += 0.00010892059688487092;
        result[6] += 0;
      } else {
        result[0] += 0.8857807535179301;
        result[1] += 0.0013617793917385383;
        result[2] += 0.002610077167498865;
        result[3] += 0.11002042669087608;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00022696323195642307;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
        result[0] += 0.99822695035461;
        result[1] += 0;
        result[2] += 0.0017730496453900709;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9602857142857143;
        result[1] += 0;
        result[2] += 0.004857142857142857;
        result[3] += 0.03428571428571429;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005714285714285715;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0.0028368794326241137;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9957446808510638;
        result[5] += 0.0014184397163120568;
        result[6] += 0;
      } else {
        result[0] += 0.9825487398953876;
        result[1] += 0.0002853067047075607;
        result[2] += 0.001283880171184023;
        result[3] += 0.01583452211126962;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4.755111745126011e-05;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)41.5) ) ) {
        result[0] += 0.35349279695569447;
        result[1] += 0.0025822234302799673;
        result[2] += 0.01060070671378092;
        result[3] += 0.5925523240010873;
        result[4] += 0.03927697743952161;
        result[5] += 0.0002718129926610492;
        result[6] += 0.0012231584669747215;
      } else {
        result[0] += 0.9411661397962768;
        result[1] += 0;
        result[2] += 0.002019669827889006;
        result[3] += 0.056726378644186864;
        result[4] += 0;
        result[5] += 8.781173164734808e-05;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        result[0] += 0.5581395348837209;
        result[1] += 0;
        result[2] += 0.020930232558139535;
        result[3] += 0.42093023255813955;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.014115092290988056;
        result[2] += 0;
        result[3] += 0.9858849077090119;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.012531328320802004;
        result[1] += 0.03759398496240601;
        result[2] += 0;
        result[3] += 0.3458646616541353;
        result[4] += 0.6040100250626567;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.02442868400315209;
        result[4] += 0.9755713159968479;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
        result[0] += 0.0024183796856106408;
        result[1] += 0.009673518742442563;
        result[2] += 0;
        result[3] += 0.094316807738815;
        result[4] += 0.8935912938331319;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.28967606618503844;
        result[1] += 0.002796550920531345;
        result[2] += 0.009554882311815428;
        result[3] += 0.46469354462829177;
        result[4] += 0.233278955954323;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        result[0] += 0.12825166364186327;
        result[1] += 0;
        result[2] += 0.006049606775559589;
        result[3] += 0.8427102238354507;
        result[4] += 0.019963702359346643;
        result[5] += 0.0030248033877797943;
        result[6] += 0;
      } else {
        result[0] += 0.9933374821539701;
        result[1] += 0.0006955375773327965;
        result[2] += 0.001391075154665593;
        result[3] += 0.0042464399458212836;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00032946516821027197;
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
        result[0] += 0.3971830985915493;
        result[1] += 0;
        result[2] += 0.007887323943661971;
        result[3] += 0.592112676056338;
        result[4] += 0.0015023474178403756;
        result[5] += 0.0007511737089201878;
        result[6] += 0.0005633802816901409;
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9888535031847133;
        result[1] += 0;
        result[2] += 0.009554140127388535;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0015923566878980893;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)37.5) ) ) {
        result[0] += 0.9991688138974316;
        result[1] += 0;
        result[2] += 0.0008311861025683651;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        result[0] += 0.7347581337658621;
        result[1] += 0.0015265718919950386;
        result[2] += 0.006106287567980154;
        result[3] += 0.22936742677225455;
        result[4] += 0.026619597366663486;
        result[5] += 0.00047705371624844956;
        result[6] += 0.001144928918996279;
      } else {
        result[0] += 0.09056364787840405;
        result[1] += 0.004749841671944269;
        result[2] += 0.004116529449018366;
        result[3] += 0.4084863837872071;
        result[4] += 0.4920835972134262;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
        result[0] += 0;
        result[1] += 0.0009603072983354673;
        result[2] += 0.002880921895006402;
        result[3] += 0.9961587708066582;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.024079320113314446;
        result[3] += 0;
        result[4] += 0.9759206798866855;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)3.5) ) ) {
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
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        result[0] += 0.9938493080471553;
        result[1] += 0;
        result[2] += 0.005125576627370579;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0010251153254741158;
      } else {
        result[0] += 0.9994681503907049;
        result[1] += 0;
        result[2] += 0.0005318496092950947;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.018822393822393823;
        result[1] += 0.006998069498069498;
        result[2] += 0.013754826254826255;
        result[3] += 0.9592181467181468;
        result[4] += 0;
        result[5] += 0.0012065637065637065;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.5943845177664975;
        result[1] += 0;
        result[2] += 0.002696700507614213;
        result[3] += 0.40196700507614214;
        result[4] += 0;
        result[5] += 0.00015862944162436547;
        result[6] += 0.0007931472081218274;
      } else {
        result[0] += 0.9692632566870014;
        result[1] += 0;
        result[2] += 0.004927264195213514;
        result[3] += 0.025105584232754576;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0007038948850305022;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)3.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9984756097560976;
        result[1] += 0;
        result[2] += 0.001371951219512195;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0001524390243902439;
      }
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        result[0] += 0.0004012841091492777;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9991974317817014;
        result[5] += 0.0004012841091492777;
        result[6] += 0;
      } else {
        result[0] += 0.022388059701492536;
        result[1] += 0.005777563793933558;
        result[2] += 0.016851227732306212;
        result[3] += 0.9537794896485315;
        result[4] += 0;
        result[5] += 0.001203659123736158;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)94.5) ) ) {
        result[0] += 0.9767840448737924;
        result[1] += 0;
        result[2] += 0.004518541601745092;
        result[3] += 0.01838578996572141;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0003116235587410408;
      } else {
        result[0] += 0.39046941678520625;
        result[1] += 0;
        result[2] += 0.0040303461356092935;
        result[3] += 0.6038406827880513;
        result[4] += 0;
        result[5] += 0.0002370791844476055;
        result[6] += 0.001422475106685633;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
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
        result[4] += 0.9995864350703061;
        result[5] += 0.00041356492969396195;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        result[0] += 0.00037023324694557573;
        result[1] += 0.0037023324694557573;
        result[2] += 0.0033320992225101815;
        result[3] += 0.9892632358385783;
        result[4] += 0;
        result[5] += 0.0033320992225101815;
        result[6] += 0;
      } else {
        result[0] += 0.9116279069767442;
        result[1] += 0;
        result[2] += 0.08837209302325581;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)32.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.001141552511415525;
        result[2] += 0.00228310502283105;
        result[3] += 0.9942922374429224;
        result[4] += 0;
        result[5] += 0.00228310502283105;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        result[0] += 0.9940539941647893;
        result[1] += 0.0009971562580788124;
        result[2] += 0.002880673634449902;
        result[3] += 0.0019204490896332681;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00014772685304871293;
      } else {
        result[0] += 0.6452173913043479;
        result[1] += 0;
        result[2] += 0.004673913043478261;
        result[3] += 0.3492391304347826;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0008695652173913044;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9890909090909091;
        result[5] += 0.01090909090909091;
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
        result[0] += 0.00030627871362940275;
        result[1] += 0.003675344563552833;
        result[2] += 0.007350689127105666;
        result[3] += 0.9843797856049005;
        result[4] += 0;
        result[5] += 0.004287901990811639;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
        result[0] += 0.9954772245952834;
        result[1] += 0.0007896909436806777;
        result[2] += 0.003015183603144406;
        result[3] += 0.0005025306005240676;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00021537025736745755;
      } else {
        result[0] += 0.31388329979879276;
        result[1] += 0.022132796780684104;
        result[2] += 0;
        result[3] += 0.6639839034205232;
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
        result[0] += 0.4074420344053852;
        result[1] += 0;
        result[2] += 0.006918474195961107;
        result[3] += 0.5850785340314136;
        result[4] += 0;
        result[5] += 0.00018698578908002991;
        result[6] += 0.00037397157816005983;
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
        result[0] += 0.003297220913801225;
        result[1] += 0.0051813471502590676;
        result[2] += 0.011775788977861516;
        result[3] += 0.9797456429580782;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9948293691830403;
        result[1] += 0;
        result[2] += 0.005170630816959669;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85) ) ) {
        result[0] += 0.11831153388822829;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8769322235434007;
        result[4] += 0.0017835909631391202;
        result[5] += 0.002972651605231867;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.03125;
        result[3] += 0;
        result[4] += 0.96875;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9991544640455052;
        result[1] += 0;
        result[2] += 0.0006918021445866483;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00015373380990814405;
      } else {
        result[0] += 0.6887295280550442;
        result[1] += 0.0008721775365830023;
        result[2] += 0.005426882449849793;
        result[3] += 0.30438996026746784;
        result[4] += 0;
        result[5] += 9.690861517588915e-05;
        result[6] += 0.0004845430758794457;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        result[0] += 0.9918215613382899;
        result[1] += 0;
        result[2] += 0.007434944237918215;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0007434944237918215;
      } else {
        result[0] += 0.9992912110166059;
        result[1] += 0;
        result[2] += 0.0007087889833940867;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.7383888995952976;
        result[1] += 0.00048178839853536316;
        result[2] += 0.006455964540373866;
        result[3] += 0.2252842551551358;
        result[4] += 0.02784736943534399;
        result[5] += 0.0005781460782424358;
        result[6] += 0.0009635767970707263;
      } else {
        result[0] += 0;
        result[1] += 0.0008014961261020571;
        result[2] += 0.009885118888592039;
        result[3] += 0.8161902217472615;
        result[4] += 0.17205450173657494;
        result[5] += 0.0010686615014694097;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.1207115628970775;
        result[1] += 0.011435832274459974;
        result[2] += 0;
        result[3] += 0.6969504447268107;
        result[4] += 0.17090216010165185;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.057655349135169766;
        result[1] += 0;
        result[2] += 0.0019218449711723255;
        result[3] += 0.15374759769378604;
        result[4] += 0.7866752081998719;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        result[0] += 0.0012422360248447205;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9975155279503105;
        result[5] += 0.0012422360248447205;
        result[6] += 0;
      } else {
        result[0] += 0.19175952319253692;
        result[1] += 0.0005182689816014512;
        result[2] += 0.009587976159626846;
        result[3] += 0.7965794247214304;
        result[4] += 0;
        result[5] += 0.0015548069448043534;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.32225063938618925;
        result[4] += 0.6777493606138107;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.009737827715355805;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9902621722846442;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9980359147025814;
        result[1] += 0;
        result[2] += 0.0018705574261129816;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9.352787130564908e-05;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        result[0] += 0.9390341729504252;
        result[1] += 0.004652655222204397;
        result[2] += 0.006738328252847747;
        result[3] += 0.04909353441360501;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004813091609176962;
      } else {
        result[0] += 0.40458715596330275;
        result[1] += 0;
        result[2] += 0.007339449541284404;
        result[3] += 0.5877064220183487;
        result[4] += 0;
        result[5] += 0.0001834862385321101;
        result[6] += 0.0001834862385321101;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)3.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        result[0] += 0.9949924887330996;
        result[1] += 0;
        result[2] += 0.0030045067601402104;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00200300450676014;
      } else {
        result[0] += 0.9992564134341306;
        result[1] += 0;
        result[2] += 0.0007435865658693766;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        result[0] += 0.8375451263537906;
        result[1] += 0.003208985158443642;
        result[2] += 0.0018050541516245488;
        result[3] += 0.15503409546730845;
        result[4] += 0;
        result[5] += 0.00040112314480545525;
        result[6] += 0.0020056157240272766;
      } else {
        result[0] += 0.17664897649734648;
        result[1] += 0.005686125852918878;
        result[2] += 0.008339651250947688;
        result[3] += 0.77710386656558;
        result[4] += 0.03184230477634572;
        result[5] += 0.0003790750568612585;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += 0.0030249960197420798;
        result[1] += 0.0007960515841426525;
        result[2] += 0.00955261900971183;
        result[3] += 0.6056360452157301;
        result[4] += 0.3798758159528738;
        result[5] += 0.0011144722177997136;
        result[6] += 0;
      } else {
        result[0] += 0.9914454277286137;
        result[1] += 0;
        result[2] += 0.005309734513274337;
        result[3] += 0.0020648967551622423;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0011799410029498527;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.9919545669663985;
        result[1] += 0;
        result[2] += 0.00709891150023663;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.000946521533364884;
      } else {
        result[0] += 0.9997514807604688;
        result[1] += 0;
        result[2] += 0.000248519239531127;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0;
        result[1] += 0.0060851926977687635;
        result[2] += 0.0010141987829614606;
        result[3] += 0.23529411764705885;
        result[4] += 0.7555780933062881;
        result[5] += 0.0020283975659229213;
        result[6] += 0;
      } else {
        result[0] += 0.5800911854103343;
        result[1] += 0.000911854103343465;
        result[2] += 0.007066869300911854;
        result[3] += 0.3883738601823708;
        result[4] += 0.022264437689969604;
        result[5] += 0.0004559270516717325;
        result[6] += 0.0008358662613981763;
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
        result[0] += 0.16580976863753213;
        result[1] += 0.014781491002570694;
        result[2] += 0.005141388174807198;
        result[3] += 0.8142673521850899;
        result[4] += 0;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.9923736892278361;
        result[1] += 0;
        result[2] += 0.00667302192564347;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009532888465204957;
      } else {
        result[0] += 0.9997074557004346;
        result[1] += 0;
        result[2] += 0.00029254429956536275;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
        result[0] += 0;
        result[1] += 0.006743088334457181;
        result[2] += 0.0064059339177343225;
        result[3] += 0.9504383007417397;
        result[4] += 0.03573836817262306;
        result[5] += 0.0006743088334457181;
        result[6] += 0;
      } else {
        result[0] += 0.9963729464476211;
        result[1] += 0.0006400682739492212;
        result[2] += 0.002773629187113292;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002133560913164071;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += 0.0026595744680851063;
        result[1] += 0.002972465581977472;
        result[2] += 0.008135168961201502;
        result[3] += 0.6218710888610763;
        result[4] += 0.3631101376720901;
        result[5] += 0.0012515644555694619;
        result[6] += 0;
      } else {
        result[0] += 0.9892065344224038;
        result[1] += 0;
        result[2] += 0.007001166861143525;
        result[3] += 0.002625437572928822;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0011668611435239208;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2066.5) ) ) {
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
        result[0] += 0.0003028467595396729;
        result[1] += 0.004239854633555421;
        result[2] += 0.011205330102967898;
        result[3] += 0.9830405814657783;
        result[4] += 0;
        result[5] += 0.0012113870381586917;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        result[0] += 0.9860092317601173;
        result[1] += 0.0006798583032168032;
        result[2] += 0.0022900490213618634;
        result[3] += 0.010663040755716178;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0003578201595877912;
      } else {
        result[0] += 0.8129496402877698;
        result[1] += 0;
        result[2] += 0.03237410071942446;
        result[3] += 0.15467625899280577;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        result[0] += 0.41729392326051035;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.5827060767394896;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9880382775119617;
        result[1] += 0;
        result[2] += 0.010466507177033494;
        result[3] += 0.0008971291866028708;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005980861244019139;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
        result[0] += 0.3630069238377844;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.6369930761622157;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.00625;
        result[1] += 0.021875;
        result[2] += 0;
        result[3] += 0.2296875;
        result[4] += 0.7421875;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
        result[0] += 0.34367816091954023;
        result[1] += 0.007471264367816092;
        result[2] += 0.013793103448275862;
        result[3] += 0.6344827586206897;
        result[4] += 0.0005747126436781609;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.001607717041800643;
        result[2] += 0;
        result[3] += 0.07556270096463022;
        result[4] += 0.9228295819935691;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        result[0] += 0.11041666666666666;
        result[1] += 0.0010416666666666667;
        result[2] += 0.0020833333333333333;
        result[3] += 0.8171875;
        result[4] += 0.065625;
        result[5] += 0.0036458333333333334;
        result[6] += 0;
      } else {
        result[0] += 0.9924754634678299;
        result[1] += 0.0004725554343874955;
        result[2] += 0.0018175209014903672;
        result[3] += 0.004980007270083606;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002544529262086514;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
        result[0] += 0.1588447653429603;
        result[1] += 0;
        result[2] += 0.007671480144404332;
        result[3] += 0.674187725631769;
        result[4] += 0.15816787003610108;
        result[5] += 0.001128158844765343;
        result[6] += 0;
      } else {
        result[0] += 0.9972016789926045;
        result[1] += 0;
        result[2] += 0.001798920647611433;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009994003597841295;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0002858776443682104;
        result[1] += 0.0002858776443682104;
        result[2] += 0;
        result[3] += 0.9331046312178388;
        result[4] += 0.06546598056032019;
        result[5] += 0.0008576329331046312;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
        result[0] += 0.8613861386138614;
        result[1] += 0;
        result[2] += 0.12871287128712872;
        result[3] += 0;
        result[4] += 0.009900990099009901;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.00411522633744856;
        result[2] += 0.010059442158207591;
        result[3] += 0;
        result[4] += 0.9835390946502057;
        result[5] += 0.002286236854138089;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
        result[0] += 0.6088957055214724;
        result[1] += 0.007668711656441718;
        result[2] += 0;
        result[3] += 0.3834355828220859;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9953327698357282;
        result[1] += 0.0008452464077027673;
        result[2] += 0.0022417404726029913;
        result[3] += 0.0011759950020212415;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004042482819448017;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += 0.20845845845845848;
        result[1] += 0;
        result[2] += 0.006006006006006007;
        result[3] += 0.7847847847847849;
        result[4] += 0;
        result[5] += 0.0007507507507507509;
        result[6] += 0;
      } else {
        result[0] += 0.9924971142747211;
        result[1] += 0;
        result[2] += 0.0036552520200076955;
        result[3] += 0.0026933435936898806;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0011542901115813775;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
        result[0] += 0.9869513641755635;
        result[1] += 0;
        result[2] += 0.013048635824436536;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.06663957740755791;
        result[1] += 0.009345794392523364;
        result[2] += 0.0077204388459975615;
        result[3] += 0.8134904510361641;
        result[4] += 0.102803738317757;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)71) ) ) {
        result[0] += 0.5240506329113924;
        result[1] += 0;
        result[2] += 0.04050632911392405;
        result[3] += 0.43544303797468353;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.027925531914893616;
        result[4] += 0.9720744680851063;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        result[0] += 0.12578977599080987;
        result[1] += 0;
        result[2] += 0.0068925904652498565;
        result[3] += 0.8420448018380241;
        result[4] += 0.021826536473291212;
        result[5] += 0.0034462952326249283;
        result[6] += 0;
      } else {
        result[0] += 0.9938037103972265;
        result[1] += 0.0005532401431047838;
        result[2] += 0.0013277763434514811;
        result[3] += 0.0040939770589754005;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002212960572419135;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += 0.151742993848257;
        result[1] += 0;
        result[2] += 0.007518796992481203;
        result[3] += 0.6785144679881522;
        result[4] += 0.16108452950558214;
        result[5] += 0.001139211665527455;
        result[6] += 0;
      } else {
        result[0] += 0.9948555599525128;
        result[1] += 0;
        result[2] += 0.002770083102493075;
        result[3] += 0.001780767708745548;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.000593589236248516;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        result[0] += 0.521783700666325;
        result[1] += 0;
        result[2] += 0.01230138390568939;
        result[3] += 0.46591491542798563;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.14072632944228275;
        result[1] += 0.014915693904020753;
        result[2] += 0.009079118028534372;
        result[3] += 0.8352788586251622;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)3.5) ) ) {
        result[0] += 0.6666666666666666;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.3333333333333333;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.999083164610154;
        result[1] += 0;
        result[2] += 0.0007640294915383734;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00015280589830767466;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.7470532016565785;
        result[1] += 0.003026441541892322;
        result[2] += 0.00414144632048423;
        result[3] += 0.23956674100031858;
        result[4] += 0.005256451099076139;
        result[5] += 0.0006371455877668047;
        result[6] += 0.00031857279388340236;
      } else {
        result[0] += 0.3642795513373598;
        result[1] += 0;
        result[2] += 0.005867126833477136;
        result[3] += 0.5126833477135462;
        result[4] += 0.11527178602243313;
        result[5] += 0.0003451251078515962;
        result[6] += 0.0015530629853321828;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
        result[0] += 0.999;
        result[1] += 0;
        result[2] += 0.001;
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
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        result[0] += 0.009357200976403583;
        result[1] += 0.005695687550854354;
        result[2] += 0.013425549227013835;
        result[3] += 0.7026037428803906;
        result[4] += 0.26769731489015464;
        result[5] += 0.001220504475183076;
        result[6] += 0;
      } else {
        result[0] += 0.7393629388514299;
        result[1] += 0;
        result[2] += 0.006045105789351314;
        result[3] += 0.25389444315275517;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006975122064636131;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        result[0] += 0.8674229532993004;
        result[1] += 0.0006806579693703913;
        result[2] += 0.002760446209113254;
        result[3] += 0.12217810550198525;
        result[4] += 0.00665532236717716;
        result[5] += 0.00015125732652675365;
        result[6] += 0.00015125732652675365;
      } else {
        result[0] += 0.005870841487279843;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9941291585127201;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.12677725118483413;
        result[1] += 0.01066350710900474;
        result[2] += 0.011848341232227487;
        result[3] += 0.8507109004739336;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9962393162393163;
        result[1] += 0;
        result[2] += 0.003418803418803419;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0003418803418803419;
      }
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
        result[0] += 0.19533090597558364;
        result[1] += 0.004711929749411009;
        result[2] += 0.007282073249089741;
        result[3] += 0.43606768044549155;
        result[4] += 0.35660741058042406;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8003633885986827;
        result[1] += 0.0012491483079718373;
        result[2] += 0.0053372700431523964;
        result[3] += 0.1727231433113786;
        result[4] += 0.01896434249375426;
        result[5] += 0.00034067681126504656;
        result[6] += 0.0010220304337951397;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0;
        result[1] += 0.008225616921269096;
        result[2] += 0;
        result[3] += 0.23971797884841364;
        result[4] += 0.7508813160987075;
        result[5] += 0.0011750881316098707;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.010312944523470839;
        result[3] += 0.9868421052631579;
        result[4] += 0.002844950213371266;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.000587026709715292;
        result[1] += 0.000293513354857646;
        result[2] += 0;
        result[3] += 0.9371881420604637;
        result[4] += 0.06046375110067508;
        result[5] += 0.0014675667742882301;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
        result[0] += 0.979381443298969;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.020618556701030927;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.005644811115935737;
        result[2] += 0.014329135909683023;
        result[3] += 0;
        result[4] += 0.9787234042553192;
        result[5] += 0.001302648719062093;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
        result[0] += 0.6325925925925926;
        result[1] += 0.002962962962962963;
        result[2] += 0.002962962962962963;
        result[3] += 0.36148148148148146;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.995469279504936;
        result[1] += 0.0007735376454987477;
        result[2] += 0.002357448062472374;
        result[3] += 0.001215559157212318;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00018417562988065422;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        result[0] += 0.4483770718232044;
        result[1] += 0;
        result[2] += 0.0013812154696132596;
        result[3] += 0.5502417127071824;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9914856136230182;
        result[1] += 0;
        result[2] += 0.007046388725778039;
        result[3] += 0.0011743981209630064;
        result[4] += 0;
        result[5] += 0.0002935995302407516;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        result[0] += 0.008522727272727274;
        result[1] += 0.004058441558441559;
        result[2] += 0.007711038961038962;
        result[3] += 0.7215909090909092;
        result[4] += 0.2568993506493507;
        result[5] += 0.0012175324675324677;
        result[6] += 0;
      } else {
        result[0] += 0.753112520554381;
        result[1] += 0;
        result[2] += 0.004463237021376556;
        result[3] += 0.24148461357763684;
        result[4] += 0;
        result[5] += 0.0002349072116513977;
        result[6] += 0.0007047216349541931;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        result[0] += 0.06463414634146342;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9079268292682927;
        result[4] += 0.026829268292682926;
        result[5] += 0.0006097560975609756;
        result[6] += 0;
      } else {
        result[0] += 0.015041782729805013;
        result[1] += 0;
        result[2] += 0.010027855153203343;
        result[3] += 0.0005571030640668524;
        result[4] += 0.973816155988858;
        result[5] += 0.0005571030640668524;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        result[0] += 0.9678291149108674;
        result[1] += 0.0013512811184449873;
        result[2] += 0.002858479289018242;
        result[3] += 0.027649290577412815;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0003118341042565355;
      } else {
        result[0] += 0.6948148148148148;
        result[1] += 0;
        result[2] += 0.0023045267489711935;
        result[3] += 0.302880658436214;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)1.5) ) ) {
        result[0] += 0.9988367584335014;
        result[1] += 0;
        result[2] += 0.0011632415664986429;
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
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        result[0] += 0.019361590790162222;
        result[1] += 0.0018315018315018317;
        result[2] += 0.017791732077446366;
        result[3] += 0.7006802721088436;
        result[4] += 0.25876504447933024;
        result[5] += 0.0015698587127158559;
        result[6] += 0;
      } else {
        result[0] += 0.7352316602316602;
        result[1] += 0;
        result[2] += 0.0033783783783783786;
        result[3] += 0.26013513513513514;
        result[4] += 0;
        result[5] += 9.652509652509652e-05;
        result[6] += 0.0011583011583011582;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.1555004135649297;
        result[1] += 0.009098428453267164;
        result[2] += 0;
        result[3] += 0.8354011579818031;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.11328976034858387;
        result[1] += 0;
        result[2] += 0.0054466230936819175;
        result[3] += 0.2113289760348584;
        result[4] += 0.6699346405228758;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)102) ) ) {
        result[0] += 0.022388059701492536;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9776119402985075;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.002304147465437788;
        result[1] += 0.012672811059907835;
        result[2] += 0;
        result[3] += 0.00576036866359447;
        result[4] += 0.9792626728110599;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        result[0] += 0.9647326507394767;
        result[1] += 0;
        result[2] += 0.034129692832764506;
        result[3] += 0.0011376564277588168;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.062301045929968164;
        result[1] += 0.008185538881309686;
        result[2] += 0.002273760800363802;
        result[3] += 0.9272396543883583;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)53.5) ) ) {
        result[0] += 0.9797222222222224;
        result[1] += 0.0007936507936507938;
        result[2] += 0.0007142857142857144;
        result[3] += 0.018531746031746035;
        result[4] += 0.00011904761904761906;
        result[5] += 0;
        result[6] += 0.00011904761904761906;
      } else {
        result[0] += 0.6791380535164576;
        result[1] += 0;
        result[2] += 0.007814349988160078;
        result[3] += 0.2789486147288658;
        result[4] += 0.03267819085957851;
        result[5] += 0.0007103954534690979;
        result[6] += 0.0007103954534690979;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        result[0] += 0.3866326716445092;
        result[1] += 0;
        result[2] += 0.005645601894008377;
        result[3] += 0.4893462028774358;
        result[4] += 0.11837552358404663;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8983397190293742;
        result[1] += 0;
        result[2] += 0.0038314176245210726;
        result[3] += 0.09323116219667944;
        result[4] += 0.0022988505747126436;
        result[5] += 0.0005108556832694764;
        result[6] += 0.0017879948914431673;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)5858.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
        result[0] += 0.9986448844387563;
        result[1] += 0;
        result[2] += 0.001355115561243695;
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
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)84) ) ) {
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
        result[0] += 0.1974536037980147;
        result[1] += 0.003884333189469141;
        result[2] += 0.0062580923608113945;
        result[3] += 0.44561933534743203;
        result[4] += 0.3467846353042728;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.7919788453063024;
        result[1] += 0.0022036139268400176;
        result[2] += 0.006390480387836051;
        result[3] += 0.18356104010577348;
        result[4] += 0.014323490524460115;
        result[5] += 0.0005509034817100044;
        result[6] += 0.000991626267078008;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)101) ) ) {
        result[0] += 0;
        result[1] += 0.0013266998341625207;
        result[2] += 0;
        result[3] += 0.9966832504145937;
        result[4] += 0.001658374792703151;
        result[5] += 0.0003316749585406302;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.028925619834710745;
        result[3] += 0;
        result[4] += 0.9696969696969697;
        result[5] += 0.0013774104683195593;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        result[0] += 0.4905537459283388;
        result[1] += 0;
        result[2] += 0.019543973941368076;
        result[3] += 0.48990228013029313;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.1314209472981988;
        result[1] += 0.018679119412941963;
        result[2] += 0.00733822548365577;
        result[3] += 0.8425617078052035;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.11678004535147393;
        result[1] += 0.0011337868480725626;
        result[2] += 0;
        result[3] += 0.8747165532879819;
        result[4] += 0.002267573696145125;
        result[5] += 0.005102040816326531;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.027611044417767107;
        result[3] += 0;
        result[4] += 0.9723889555822329;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        result[0] += 0.9940693208886296;
        result[1] += 0.00024306061931845803;
        result[2] += 0.0006319576102279909;
        result[3] += 0.004958436634096544;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9.72242477273832e-05;
      } else {
        result[0] += 0.7976790154944845;
        result[1] += 0.0007651597270930307;
        result[2] += 0.004463431741376012;
        result[3] += 0.19588089013581586;
        result[4] += 0;
        result[5] += 0.00031881655295542947;
        result[6] += 0.0008926863482752025;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.9922630560928434;
        result[1] += 0;
        result[2] += 0.006769825918762089;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009671179883945841;
      } else {
        result[0] += 0.9997519943785392;
        result[1] += 0;
        result[2] += 0.0002480056214607531;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
        result[0] += 0.5948049884820081;
        result[1] += 0.0010326475494479308;
        result[2] += 0.005480975454762094;
        result[3] += 0.34482484708872824;
        result[4] += 0.052426721741202637;
        result[5] += 0.00039717213440305027;
        result[6] += 0.0010326475494479308;
      } else {
        result[0] += 0.002554278416347382;
        result[1] += 0;
        result[2] += 0.02362707535121328;
        result[3] += 0.7969348659003831;
        result[4] += 0.17496807151979565;
        result[5] += 0.0019157088122605363;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        result[0] += 0.6326530612244898;
        result[1] += 0;
        result[2] += 0.018140589569160998;
        result[3] += 0.3492063492063492;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0035460992907801418;
        result[1] += 0.014184397163120567;
        result[2] += 0;
        result[3] += 0.9822695035460993;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
        result[0] += 0.9962049335863378;
        result[1] += 0;
        result[2] += 0.003795066413662239;
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
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)89.5) ) ) {
        result[0] += 0.5347998557518933;
        result[1] += 0;
        result[2] += 0.008835196538045438;
        result[3] += 0.4010097367472052;
        result[4] += 0.05355210962856113;
        result[5] += 0.0009015506671474937;
        result[6] += 0.0009015506671474937;
      } else {
        result[0] += 0.09235352532274081;
        result[1] += 0.00893743793445879;
        result[2] += 0;
        result[3] += 0.5104270109235353;
        result[4] += 0.38828202581926513;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.08652037617554859;
        result[1] += 0.0006269592476489029;
        result[2] += 0.008150470219435737;
        result[3] += 0.9028213166144201;
        result[4] += 0;
        result[5] += 0.0018808777429467085;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        result[0] += 0.9692850472138632;
        result[1] += 0.0015046176195911592;
        result[2] += 0.0031130019715679153;
        result[3] += 0.025837916364013697;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002594168309639929;
      } else {
        result[0] += 0.6864173547029302;
        result[1] += 0;
        result[2] += 0.002266472397604015;
        result[3] += 0.3113161728994658;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
        result[0] += 0.4153940134392181;
        result[1] += 0.003054367745876604;
        result[2] += 0.004886988393402567;
        result[3] += 0.5231113826104664;
        result[4] += 0.05355324781103646;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9442549761269918;
        result[1] += 0.0007440937558132322;
        result[2] += 0.0016122031375953366;
        result[3] += 0.052954672288708364;
        result[4] += 6.200781298443603e-05;
        result[5] += 0.00018602343895330806;
        result[6] += 0.00018602343895330806;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9900911262496682;
        result[1] += 0;
        result[2] += 0.0030080509599221448;
        result[3] += 0.006900822790409626;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0.11969111969111969;
        result[1] += 0;
        result[2] += 0.001287001287001287;
        result[3] += 0;
        result[4] += 0.879021879021879;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.4260230849947534;
        result[1] += 0;
        result[2] += 0.007345225603357817;
        result[3] += 0.5664218258132214;
        result[4] += 0.0002098635886673662;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
        result[0] += 0.9314463775642691;
        result[1] += 0;
        result[2] += 0.005712801869644248;
        result[3] += 0.06102311088029083;
        result[4] += 0;
        result[5] += 0.0007790184367696703;
        result[6] += 0.001038691249026227;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9672131147540983;
        result[4] += 0.02459016393442623;
        result[5] += 0.00819672131147541;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.1483495145631068;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8481553398058252;
        result[4] += 0.001941747572815534;
        result[5] += 0.0015533980582524273;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.02253218884120172;
        result[3] += 0;
        result[4] += 0.9731759656652361;
        result[5] += 0.004291845493562233;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.999380541252081;
        result[1] += 0;
        result[2] += 0.0004645940609392543;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00015486468697975143;
      } else {
        result[0] += 0.704175704989154;
        result[1] += 0.0017172812725958061;
        result[2] += 0.007140274765003615;
        result[3] += 0.28642443962400577;
        result[4] += 0;
        result[5] += 9.038322487346348e-05;
        result[6] += 0.0004519161243673174;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
        result[0] += 0;
        result[1] += 0.008181818181818182;
        result[2] += 0;
        result[3] += 0.9918181818181818;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9867986798679867;
        result[1] += 0;
        result[2] += 0.013201320132013201;
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
        result[3] += 0.44921875;
        result[4] += 0.55078125;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0013879250520471894;
        result[1] += 0.009021512838306732;
        result[2] += 0;
        result[3] += 0.06384455239417071;
        result[4] += 0.9257460097154754;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)6.5) ) ) {
        result[0] += 0.2961947206033596;
        result[1] += 0.00994172094617758;
        result[2] += 0.005485087418580734;
        result[3] += 0.6040452519712033;
        result[4] += 0.08433321906067878;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.07920792079207921;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8514851485148515;
        result[4] += 0.06930693069306931;
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
        result[0] += 0.32285714285714284;
        result[1] += 0;
        result[2] += 0.025714285714285714;
        result[3] += 0.6514285714285715;
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
        result[0] += 0.9986983652999503;
        result[1] += 0;
        result[2] += 0.0011102178323953906;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0001914168676543777;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.36628379162315816;
        result[1] += 0.001160227404571296;
        result[2] += 0.0063812507251421275;
        result[3] += 0.5298758556677109;
        result[4] += 0.09467455621301775;
        result[5] += 0.0008121591831999072;
        result[6] += 0.0008121591831999072;
      } else {
        result[0] += 0.9667333666833416;
        result[1] += 0;
        result[2] += 0.004752376188094047;
        result[3] += 0.027263631815907952;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0012506253126563281;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.027777777777777776;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9722222222222222;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.390480202190396;
        result[1] += 0.003369839932603201;
        result[2] += 0.009688289806234204;
        result[3] += 0.5964616680707666;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += 0.0016025641025641025;
        result[1] += 0.00641025641025641;
        result[2] += 0;
        result[3] += 0.2467948717948718;
        result[4] += 0.7451923076923077;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0007633587786259542;
        result[2] += 0;
        result[3] += 0.0648854961832061;
        result[4] += 0.934351145038168;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        result[0] += 0.9837614548217084;
        result[1] += 9.49622525046294e-05;
        result[2] += 0.0015668771663263853;
        result[3] += 0.014386781254451355;
        result[4] += 4.74811262523147e-05;
        result[5] += 0.00014244337875694412;
        result[6] += 0;
      } else {
        result[0] += 0.00583941605839416;
        result[1] += 0;
        result[2] += 0.00291970802919708;
        result[3] += 0;
        result[4] += 0.9912408759124087;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
        result[0] += 0.7969363210532979;
        result[1] += 0.000569692366122294;
        result[2] += 0.0025319660716546398;
        result[3] += 0.19907583238384605;
        result[4] += 0;
        result[5] += 0.000126598303582732;
        result[6] += 0.0007595898214963919;
      } else {
        result[0] += 0.0188821752265861;
        result[1] += 0;
        result[2] += 0.017371601208459216;
        result[3] += 0.8716012084592145;
        result[4] += 0.0891238670694864;
        result[5] += 0.0030211480362537764;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
        result[0] += 0.9945444104134763;
        result[1] += 0;
        result[2] += 0.0007656967840735069;
        result[3] += 0.0044506125574272585;
        result[4] += 9.571209800918837e-05;
        result[5] += 0;
        result[6] += 0.00014356814701378255;
      } else {
        result[0] += 0.005274261603375527;
        result[1] += 0.006329113924050633;
        result[2] += 0.012658227848101266;
        result[3] += 0.2668776371308017;
        result[4] += 0.7067510548523207;
        result[5] += 0.002109704641350211;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)41.5) ) ) {
        result[0] += 0.3388235294117647;
        result[1] += 0.0022145328719723185;
        result[2] += 0.008719723183391004;
        result[3] += 0.6120415224913495;
        result[4] += 0.03778546712802768;
        result[5] += 0.0002768166089965398;
        result[6] += 0.0001384083044982699;
      } else {
        result[0] += 0.9400157853196527;
        result[1] += 0;
        result[2] += 0.00228010172761554;
        result[3] += 0.05752872051214593;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00017539244058581075;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
        result[0] += 0.15557275541795665;
        result[1] += 0.005417956656346749;
        result[2] += 0.006191950464396285;
        result[3] += 0.8328173374613003;
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
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.427536231884058;
        result[4] += 0.572463768115942;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.001445086705202312;
        result[1] += 0.006502890173410405;
        result[2] += 0;
        result[3] += 0.059248554913294796;
        result[4] += 0.9328034682080925;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
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
        result[0] += 0.005225653206650831;
        result[1] += 0.009976247030878859;
        result[2] += 0.005700712589073635;
        result[3] += 0.9790973871733967;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9925611052072264;
        result[1] += 0;
        result[2] += 0.007438894792773645;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        result[0] += 0.9812750142938823;
        result[1] += 0.00014293882218410523;
        result[2] += 0.0013340956737183155;
        result[3] += 0.01715265866209263;
        result[4] += 0;
        result[5] += 9.529254812273681e-05;
        result[6] += 0;
      } else {
        result[0] += 0.7339599509603597;
        result[1] += 0.0008757078638566175;
        result[2] += 0.00513748613462549;
        result[3] += 0.25202872321793457;
        result[4] += 0.00729756553213848;
        result[5] += 0.0002919026212855392;
        result[6] += 0.00040866366979975486;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)217) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0015174506828528073;
        result[3] += 0;
        result[4] += 0.9984825493171472;
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-29) ) ) {
        result[0] += 0;
        result[1] += 0.012244897959183673;
        result[2] += 0;
        result[3] += 0.0163265306122449;
        result[4] += 0.9714285714285714;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0009555661729574773;
        result[1] += 0;
        result[2] += 0.0023889154323936935;
        result[3] += 0.7539417104634496;
        result[4] += 0.24199713330148112;
        result[5] += 0.000716674629718108;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)11) ) ) {
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
        result[2] += 0.013782542113323124;
        result[3] += 0;
        result[4] += 0.9862174578866769;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
        result[0] += 0.42992874109263657;
        result[1] += 0.0166270783847981;
        result[2] += 0;
        result[3] += 0.5534441805225653;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.18181818181818182;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8181818181818182;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += 0.8904640237369158;
        result[1] += 0;
        result[2] += 0.0037088931014588314;
        result[3] += 0.10500288469463447;
        result[4] += 0;
        result[5] += 8.241984669908514e-05;
        result[6] += 0.0007417786202917662;
      } else {
        result[0] += 0.9207570207570207;
        result[1] += 0.0007326007326007326;
        result[2] += 0.0031746031746031746;
        result[3] += 0.07513227513227513;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002035002035002035;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)9.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.17191097467382963;
        result[1] += 0.0010232796111537478;
        result[2] += 0;
        result[3] += 0.8262982860066513;
        result[4] += 0;
        result[5] += 0.0007674597083653108;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
        result[0] += 0.8823529411764706;
        result[1] += 0;
        result[2] += 0.11764705882352941;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0034662045060658577;
        result[2] += 0.008665511265164644;
        result[3] += 0;
        result[4] += 0.987001733102253;
        result[5] += 0.0008665511265164644;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.9813214021979931;
        result[1] += 0.0011728421875678728;
        result[2] += 0.002302245775596195;
        result[3] += 0.015073194040224143;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00013031579861865253;
      } else {
        result[0] += 0.16233062330623307;
        result[1] += 0;
        result[2] += 0.002981029810298103;
        result[3] += 0.8346883468834688;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += 0.9513784461152882;
        result[1] += 0;
        result[2] += 0.0010025062656641604;
        result[3] += 0.047619047619047616;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9961150904455506;
        result[1] += 0;
        result[2] += 0.002306665047954352;
        result[3] += 0.0007284205414592692;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.000849823965035814;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)3.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)22.5) ) ) {
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9989834679792413;
        result[1] += 0;
        result[2] += 0.0009095286501524798;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00010700337060617409;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
        result[0] += 0.6139516757599376;
        result[1] += 0.0007794232268121588;
        result[2] += 0.004053000779423226;
        result[3] += 0.3265783320342946;
        result[4] += 0.05362431800467653;
        result[5] += 0.0003897116134060794;
        result[6] += 0.0006235385814497271;
      } else {
        result[0] += 0.08024948024948025;
        result[1] += 0.0037422037422037424;
        result[2] += 0.011642411642411643;
        result[3] += 0.8781704781704782;
        result[4] += 0.025363825363825365;
        result[5] += 0.0008316008316008316;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
        result[0] += 0.002542372881355932;
        result[1] += 0.00847457627118644;
        result[2] += 0;
        result[3] += 0.23559322033898306;
        result[4] += 0.7533898305084745;
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
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        result[0] += 0.002072538860103627;
        result[1] += 0.00466321243523316;
        result[2] += 0;
        result[3] += 0.7352331606217617;
        result[4] += 0.25647668393782386;
        result[5] += 0.0015544041450777201;
        result[6] += 0;
      } else {
        result[0] += 0.656188605108055;
        result[1] += 0;
        result[2] += 0.021611001964636542;
        result[3] += 0;
        result[4] += 0.32220039292730845;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.8502577897332436;
        result[1] += 0;
        result[2] += 0.0028020623178659494;
        result[3] += 0.1467159829634611;
        result[4] += 0;
        result[5] += 0.00011208249271463797;
        result[6] += 0.00011208249271463797;
      } else {
        result[0] += 0.9924698795180723;
        result[1] += 0;
        result[2] += 0.00391566265060241;
        result[3] += 0.0030120481927710845;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006024096385542169;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)83) ) ) {
        result[0] += 0.9987262557456942;
        result[1] += 0;
        result[2] += 0.0012183640693359916;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5.53801849698178e-05;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        result[0] += 0.5183839247541684;
        result[1] += 0.003847798204360837;
        result[2] += 0.006840530141085932;
        result[3] += 0.4122488242838819;
        result[4] += 0.05728943993159469;
        result[5] += 0.0008550662676357415;
        result[6] += 0.0005344164172723385;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.12393162393162394;
        result[4] += 0.8760683760683761;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)9.5) ) ) {
        result[0] += 0.004672897196261682;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9953271028037384;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.166798210997106;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8321494343593792;
        result[4] += 0;
        result[5] += 0.0010523546435148646;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
        result[0] += 0;
        result[1] += 0.005191434133679429;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9948085658663206;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.10869565217391304;
        result[1] += 0;
        result[2] += 0.030193236714975844;
        result[3] += 0;
        result[4] += 0.855072463768116;
        result[5] += 0.006038647342995169;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
        result[0] += 0.9960927698318816;
        result[1] += 0.0004659999283077033;
        result[2] += 0.0025450765315266875;
        result[3] += 0.0006093845216331506;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00028676918665089437;
      } else {
        result[0] += 0.34521158129175944;
        result[1] += 0.013363028953229399;
        result[2] += 0;
        result[3] += 0.6414253897550112;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
        result[0] += 0.4517490952955368;
        result[1] += 0;
        result[2] += 0.0024125452352231603;
        result[3] += 0.5458383594692401;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8962065331928346;
        result[1] += 0;
        result[2] += 0.003951527924130664;
        result[3] += 0.09747102212855638;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0023709167544783984;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
        result[0] += 0.19645293315143242;
        result[1] += 0;
        result[2] += 0.00354706684856753;
        result[3] += 0.7969986357435196;
        result[4] += 0.0024556616643929053;
        result[5] += 0.0005457025920873124;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.004639175257731959;
        result[2] += 0;
        result[3] += 0.13144329896907217;
        result[4] += 0.8639175257731959;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
        result[0] += 0.6184971098265896;
        result[1] += 0.002890173410404624;
        result[2] += 0;
        result[3] += 0.3786127167630058;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9934891123489836;
        result[1] += 0.00047023077479563046;
        result[2] += 0.0022788106778557477;
        result[3] += 0.0036171598061202344;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00014468639224480938;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += 0.16486129458388374;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8351387054161162;
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
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        result[0] += 0.9803411390575312;
        result[1] += 0;
        result[2] += 0.012720439433362245;
        result[3] += 0.0011564035848511134;
        result[4] += 0.0043365134431916745;
        result[5] += 0.0005782017924255567;
        result[6] += 0.0008673026886383349;
      } else {
        result[0] += 0.0045871559633027525;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9954128440366973;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)6504) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        result[0] += 0.9964877069744105;
        result[1] += 0;
        result[2] += 0.0030105368790767687;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005017561465127947;
      } else {
        result[0] += 0.9996267418712674;
        result[1] += 0;
        result[2] += 0.0003732581287325813;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)71) ) ) {
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
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
        result[0] += 0.6049603483128595;
        result[1] += 0.0013217229046804538;
        result[2] += 0.0061421240864562255;
        result[3] += 0.33167470066863625;
        result[4] += 0.05512361996579069;
        result[5] += 0.000310993624630695;
        result[6] += 0.0004664904369460425;
      } else {
        result[0] += 0.07053607416364369;
        result[1] += 0.0032245062474808546;
        result[2] += 0.015316404675534058;
        result[3] += 0.8871422813381701;
        result[4] += 0.022974607013301087;
        result[5] += 0.0008061265618702137;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.400329489291598;
        result[4] += 0.5996705107084019;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.001386001386001386;
        result[1] += 0.009009009009009009;
        result[2] += 0;
        result[3] += 0.05336105336105336;
        result[4] += 0.9362439362439362;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        result[0] += 0.5266599597585513;
        result[1] += 0;
        result[2] += 0.015090543259557344;
        result[3] += 0.44668008048289737;
        result[4] += 0.011569416498993963;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.1741253051261188;
        result[1] += 0.010577705451586655;
        result[2] += 0.007323026851098454;
        result[3] += 0.8079739625711961;
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
        result[0] += 0.011527377521613832;
        result[1] += 0.02881844380403458;
        result[2] += 0;
        result[3] += 0.9596541786743515;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        result[0] += 0.001963350785340314;
        result[1] += 0;
        result[2] += 0.007853403141361256;
        result[3] += 0.9522251308900523;
        result[4] += 0.034031413612565446;
        result[5] += 0.003926701570680628;
        result[6] += 0;
      } else {
        result[0] += 0.2309495896834701;
        result[1] += 0;
        result[2] += 0.017584994138335287;
        result[3] += 0;
        result[4] += 0.7514654161781946;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.8807155524712776;
        result[1] += 0.0006939625260235947;
        result[2] += 0.002313208420078649;
        result[3] += 0.11589174184594032;
        result[4] += 0;
        result[5] += 7.710694733595497e-05;
        result[6] += 0.00030842778934381986;
      } else {
        result[0] += 0.9881398884946782;
        result[1] += 0;
        result[2] += 0.001926001013684744;
        result[3] += 0.0099341104916371;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9907048799380326;
        result[1] += 0;
        result[2] += 0.006971340046475601;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0023237800154918666;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
        result[0] += 0.9995456094513234;
        result[1] += 0;
        result[2] += 0.00045439054867658755;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.599518182861076;
        result[1] += 0.0042445795571871055;
        result[2] += 0.004359297923597568;
        result[3] += 0.36365722152116553;
        result[4] += 0.027532407938510955;
        result[5] += 0.00011471836641046231;
        result[6] += 0.0005735918320523115;
      } else {
        result[0] += 0.5906593406593407;
        result[1] += 0;
        result[2] += 0.010777683854606932;
        result[3] += 0.08727810650887574;
        result[4] += 0.31001690617075234;
        result[5] += 0.00021132713440405747;
        result[6] += 0.0010566356720202875;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0;
        result[1] += 0.0032537960954446853;
        result[2] += 0.0021691973969631237;
        result[3] += 0.23210412147505424;
        result[4] += 0.7592190889370932;
        result[5] += 0.0032537960954446853;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.00841467519353753;
        result[3] += 0.9882194547290475;
        result[4] += 0.003365870077415012;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        result[0] += 0.972181551976574;
        result[1] += 0;
        result[2] += 0.027818448023426062;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.06618640252138676;
        result[1] += 0.010355695632597929;
        result[2] += 0.0027014858171994596;
        result[3] += 0.7964880684376408;
        result[4] += 0.12426834759117515;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)73) ) ) {
        result[0] += 0.3981191222570533;
        result[1] += 0;
        result[2] += 0.012539184952978056;
        result[3] += 0.5893416927899686;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.02510460251046025;
        result[4] += 0.9748953974895398;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
        result[0] += 0.9549504399153581;
        result[1] += 0.00011137097672346586;
        result[2] += 0.00228310502283105;
        result[3] += 0.017151130415413742;
        result[4] += 0.025503953669673684;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9283029777392311;
        result[1] += 0;
        result[2] += 0.0005782017924255567;
        result[3] += 0.007227522405319457;
        result[4] += 0.06389129806302402;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.4295293522267207;
        result[1] += 0.001771255060728745;
        result[2] += 0.005566801619433198;
        result[3] += 0.5446609311740891;
        result[4] += 0.01771255060728745;
        result[5] += 0.00025303643724696357;
        result[6] += 0.0005060728744939271;
      } else {
        result[0] += 0.9850871665616467;
        result[1] += 0;
        result[2] += 0.001575299306868305;
        result[3] += 0.013022474270111321;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.000315059861373661;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
        result[0] += 0.018691588785046728;
        result[1] += 0.04361370716510903;
        result[2] += 0;
        result[3] += 0.10903426791277258;
        result[4] += 0.8286604361370716;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.32199931995919756;
        result[1] += 0.004080244814688882;
        result[2] += 0.006460387623257395;
        result[3] += 0.666780006800408;
        result[4] += 0.0006800408024481469;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
        result[0] += 0.08373786407766991;
        result[1] += 0;
        result[2] += 0.0036407766990291263;
        result[3] += 0.017597087378640776;
        result[4] += 0.8950242718446602;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.3192307692307692;
        result[1] += 0;
        result[2] += 0.019230769230769232;
        result[3] += 0.6615384615384615;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)25) ) ) {
        result[0] += 0.7553855445943226;
        result[1] += 0;
        result[2] += 0.005234548016911617;
        result[3] += 0.23172941413327966;
        result[4] += 0.0070465069458425615;
        result[5] += 0.00020132876988121606;
        result[6] += 0.00040265753976243213;
      } else {
        result[0] += 0.8916429511306954;
        result[1] += 0.0004284096820588144;
        result[2] += 0.0024174546344747387;
        result[3] += 0.10462376449707761;
        result[4] += 0.000459010373634444;
        result[5] += 0.00015300345787814802;
        result[6] += 0.00027540622418066645;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23) ) ) {
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-9) ) ) {
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
        result[0] += 0;
        result[1] += 0.0005082592121982211;
        result[2] += 0.0055908513341804324;
        result[3] += 0.795171537484117;
        result[4] += 0.19669631512071156;
        result[5] += 0.0020330368487928843;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0032948929159802307;
        result[2] += 0;
        result[3] += 0.06699615595826469;
        result[4] += 0.9297089511257551;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9990820073439413;
        result[1] += 0;
        result[2] += 0.0007649938800489596;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0001529987760097919;
      } else {
        result[0] += 0.6515679442508711;
        result[1] += 0.027874564459930314;
        result[2] += 0;
        result[3] += 0.3205574912891986;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.5423683507083668;
        result[1] += 0.0018711574445335472;
        result[2] += 0.0052125100240577385;
        result[3] += 0.4496124031007752;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009355787222667736;
      } else {
        result[0] += 0.9861241523213354;
        result[1] += 0;
        result[2] += 0.0026082420448617634;
        result[3] += 0.011058946270213876;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00020865936358894105;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
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
        result[1] += 0.0005865102639296188;
        result[2] += 0;
        result[3] += 0.9337243401759531;
        result[4] += 0.06451612903225806;
        result[5] += 0.0011730205278592375;
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
        result[1] += 0.005719313682358118;
        result[2] += 0.014958205015398154;
        result[3] += 0;
        result[4] += 0.9784425868895733;
        result[5] += 0.0008798944126704797;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
        result[0] += 0.995500521939455;
        result[1] += 0.0006119290162341168;
        result[2] += 0.003095640905654944;
        result[3] += 0.0005399373672653972;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002519707713905187;
      } else {
        result[0] += 0.3579418344519016;
        result[1] += 0.026845637583892617;
        result[2] += 0;
        result[3] += 0.6152125279642058;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
        result[0] += 0.44645286686103014;
        result[1] += 0;
        result[2] += 0.0023323615160349854;
        result[3] += 0.5512147716229349;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8936112615051435;
        result[1] += 0;
        result[2] += 0.004331348132106118;
        result[3] += 0.10043313481321062;
        result[4] += 0;
        result[5] += 0.0005414185165132648;
        result[6] += 0.0010828370330265296;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        result[0] += 0.007427055702917772;
        result[1] += 0.008488063660477453;
        result[2] += 0.01220159151193634;
        result[3] += 0.9586206896551724;
        result[4] += 0.013262599469496022;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9901558654634947;
        result[1] += 0;
        result[2] += 0.009844134536505332;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
        result[0] += 0.004901960784313725;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8088235294117647;
        result[4] += 0.18627450980392157;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.005611672278338945;
        result[2] += 0;
        result[3] += 0.07800224466891134;
        result[4] += 0.9163860830527497;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)27) ) ) {
        result[0] += 0.7189814814814816;
        result[1] += 0;
        result[2] += 0.006944444444444445;
        result[3] += 0.26527777777777783;
        result[4] += 0.0074074074074074086;
        result[5] += 0.0006944444444444446;
        result[6] += 0.0006944444444444446;
      } else {
        result[0] += 0.984222907203115;
        result[1] += 0.00024334847501622327;
        result[2] += 0.0007300454250486698;
        result[3] += 0.014276443867618432;
        result[4] += 0.00012167423750811164;
        result[5] += 0.00012167423750811164;
        result[6] += 0.00028390655418559385;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
        result[0] += 0.15069413345275415;
        result[1] += 0;
        result[2] += 0.007836990595611285;
        result[3] += 0.6793551276309897;
        result[4] += 0.16121809225257502;
        result[5] += 0.0008956560680698612;
        result[6] += 0;
      } else {
        result[0] += 0.9971819645732689;
        result[1] += 0;
        result[2] += 0.0024154589371980675;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00040257648953301127;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        result[0] += 0.001729106628242075;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9976945244956772;
        result[5] += 0.0005763688760806917;
        result[6] += 0;
      } else {
        result[0] += 0.07189306358381503;
        result[1] += 0.0025289017341040463;
        result[2] += 0.006502890173410405;
        result[3] += 0.9151011560693642;
        result[4] += 0;
        result[5] += 0.003973988439306358;
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        result[0] += 0.9949083503054991;
        result[1] += 0;
        result[2] += 0.004073319755600815;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0010183299389002038;
      } else {
        result[0] += 0.999417346429166;
        result[1] += 0;
        result[2] += 0.000582653570834027;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        result[0] += 0.5052564510990762;
        result[1] += 0.002230009557183817;
        result[2] += 0.00525645109907614;
        result[3] += 0.48646065625995544;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.000796431984708506;
      } else {
        result[0] += 0.7904430064708811;
        result[1] += 0.0016592002654720426;
        result[2] += 0.009125601460096234;
        result[3] += 0.19727891156462585;
        result[4] += 0;
        result[5] += 0.0008296001327360213;
        result[6] += 0.000663680106188817;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        result[0] += 0.9923558026407228;
        result[1] += 0;
        result[2] += 0.007644197359277276;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9993206102155519;
        result[1] += 0;
        result[2] += 0.0006793897844481502;
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
        result[0] += 0.9984101748807631;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.001589825119236884;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        result[0] += 0.016740779492545124;
        result[1] += 0.004446769552707299;
        result[2] += 0.017525503531258178;
        result[3] += 0.7015432906094691;
        result[4] += 0.25817420873659436;
        result[5] += 0.0015694480774261054;
        result[6] += 0;
      } else {
        result[0] += 0.7454266832678862;
        result[1] += 0;
        result[2] += 0.003543721865721674;
        result[3] += 0.25083804233310986;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00019155253328225267;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.11146700832799487;
        result[1] += 0.012812299807815503;
        result[2] += 0;
        result[3] += 0.6873798846893018;
        result[4] += 0.18834080717488788;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.06604402935290193;
        result[1] += 0;
        result[2] += 0.0066711140760507;
        result[3] += 0.14809873248832556;
        result[4] += 0.7791861240827218;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        result[0] += 0.18807339449541285;
        result[1] += 0.014271151885830785;
        result[2] += 0;
        result[3] += 0.7976554536187563;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5;
        result[1] += 0;
        result[2] += 0.021139705882352942;
        result[3] += 0.4788602941176471;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)83) ) ) {
        result[0] += 0.9992353863210613;
        result[1] += 0;
        result[2] += 0.0007263829949917805;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.8230683946935814e-05;
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
        result[0] += 0.7969314079422383;
        result[1] += 0.0013537906137184115;
        result[2] += 0.004625451263537906;
        result[3] += 0.18231046931407943;
        result[4] += 0.013312274368231047;
        result[5] += 0.0010153429602888086;
        result[6] += 0.0004512635379061372;
      } else {
        result[0] += 0;
        result[1] += 0.002100840336134454;
        result[2] += 0.008403361344537816;
        result[3] += 0.8138130252100841;
        result[4] += 0.1754201680672269;
        result[5] += 0.00026260504201680677;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)86) ) ) {
        result[0] += 0.19015599784830556;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8071543840774611;
        result[4] += 0.0016137708445400755;
        result[5] += 0.0010758472296933837;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.05131578947368421;
        result[3] += 0;
        result[4] += 0.9394736842105263;
        result[5] += 0.009210526315789473;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.17547169811320754;
        result[4] += 0.8245283018867925;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.02040816326530612;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9795918367346939;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
        result[0] += 0.9981035252119588;
        result[1] += 0.0005577867023650155;
        result[2] += 0.0012271307452030342;
        result[3] += 0.00011155734047300309;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.991072250345145;
        result[1] += 0;
        result[2] += 0.0008283479061205706;
        result[3] += 0.008099401748734468;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
        result[0] += 0.8875927070457355;
        result[1] += 0.0016223733003708281;
        result[2] += 0.005330655129789864;
        result[3] += 0.10452719406674907;
        result[4] += 0;
        result[5] += 0.00030902348578491963;
        result[6] += 0.0006180469715698393;
      } else {
        result[0] += 0.511028558161133;
        result[1] += 0;
        result[2] += 0.0027861620617599257;
        result[3] += 0.486185279777107;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        result[0] += 0.9820717131474104;
        result[1] += 0;
        result[2] += 0.013944223107569721;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00398406374501992;
      } else {
        result[0] += 0.9960629921259843;
        result[1] += 0;
        result[2] += 0.003937007874015748;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.992619926199262;
        result[1] += 0;
        result[2] += 0.007380073800738007;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9998750988800533;
        result[1] += 0;
        result[2] += 0.00012490111994670886;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        result[0] += 0.0004122011541632317;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9991755976916736;
        result[5] += 0.0004122011541632317;
        result[6] += 0;
      } else {
        result[0] += 0.01758188824662813;
        result[1] += 0.009633911368015413;
        result[2] += 0.014932562620423893;
        result[3] += 0.9564065510597303;
        result[4] += 0;
        result[5] += 0.001445086705202312;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
        result[0] += 0.6180758017492711;
        result[1] += 0;
        result[2] += 0.0017816650469711693;
        result[3] += 0.37884677680596046;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0012957563977972141;
      } else {
        result[0] += 0.921254512635379;
        result[1] += 0;
        result[2] += 0.0058664259927797835;
        result[3] += 0.07220216606498195;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006768953068592057;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        result[0] += 0.003616636528028933;
        result[1] += 0.005063291139240506;
        result[2] += 0.005786618444846293;
        result[3] += 0.7030741410488246;
        result[4] += 0.2824593128390597;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9852320675105485;
        result[1] += 0;
        result[2] += 0.014767932489451477;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += 0.0036101083032490976;
        result[1] += 0.04693140794223827;
        result[2] += 0;
        result[3] += 0.24548736462093862;
        result[4] += 0.703971119133574;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0015220700152207;
        result[2] += 0;
        result[3] += 0.0395738203957382;
        result[4] += 0.958904109589041;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)27) ) ) {
        result[0] += 0.6981764829176272;
        result[1] += 0;
        result[2] += 0.00901278557954307;
        result[3] += 0.2643051771117166;
        result[4] += 0.026828757073988675;
        result[5] += 0.0006287989939216096;
        result[6] += 0.0010479983232026826;
      } else {
        result[0] += 0.9825385893124823;
        result[1] += 0.0005266782805979824;
        result[2] += 0.0007697605639508973;
        result[3] += 0.015719320990155168;
        result[4] += 0.00016205485556860998;
        result[5] += 0.00024308228335291496;
        result[6] += 4.0513713892152495e-05;
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
        result[0] += 0.3524839472794863;
        result[1] += 0;
        result[2] += 0.00777289624873268;
        result[3] += 0.5185873605947955;
        result[4] += 0.11929705981750592;
        result[5] += 0.0011828320378506252;
        result[6] += 0.0006759040216289286;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)58.5) ) ) {
        result[0] += 0.9483163168241486;
        result[1] += 0.001331726805758133;
        result[2] += 0.0016488046166529267;
        result[3] += 0.04743484050986112;
        result[4] += 0.0003804933730737523;
        result[5] += 0.000443908935252711;
        result[6] += 0.000443908935252711;
      } else {
        result[0] += 0.43770856507230255;
        result[1] += 0.0029662588060808304;
        result[2] += 0.0035224323322209862;
        result[3] += 0.5087133852428625;
        result[4] += 0.047089358546533185;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
        result[0] += 0.8657718120805369;
        result[1] += 0;
        result[2] += 0.0027684563758389263;
        result[3] += 0.0026006711409395974;
        result[4] += 0.12885906040268458;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9448909299655569;
        result[1] += 0;
        result[2] += 0.006888633754305397;
        result[3] += 0.04822043628013778;
        result[4] += 0;
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
        result[3] += 0.9959526774595268;
        result[4] += 0.00311332503113325;
        result[5] += 0.0009339975093399751;
        result[6] += 0;
      } else {
        result[0] += 0.4755244755244755;
        result[1] += 0;
        result[2] += 0.01888111888111888;
        result[3] += 0;
        result[4] += 0.5055944055944056;
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
        result[0] += 0.9886039886039886;
        result[1] += 0;
        result[2] += 0.006647673314339981;
        result[3] += 0.0033238366571699905;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0014245014245014246;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += 0.996192954556407;
        result[1] += 0;
        result[2] += 0.0006746662811430775;
        result[3] += 0.002939617367837695;
        result[4] += 9.638089730615394e-05;
        result[5] += 0;
        result[6] += 9.638089730615394e-05;
      } else {
        result[0] += 0.016145307769929364;
        result[1] += 0.007063572149344097;
        result[2] += 0.017154389505549948;
        result[3] += 0.26437941473259335;
        result[4] += 0.6942482341069627;
        result[5] += 0.0010090817356205853;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)41.5) ) ) {
        result[0] += 0.3595215441076526;
        result[1] += 0.0020388745412532284;
        result[2] += 0.007339948348511621;
        result[3] += 0.5914095419328531;
        result[4] += 0.03792306646731004;
        result[5] += 0.001087399755335055;
        result[6] += 0.0006796248470844094;
      } else {
        result[0] += 0.9418860614598924;
        result[1] += 0;
        result[2] += 0.0015849255965483839;
        result[3] += 0.056264858677467625;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00026415426609139735;
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
        result[1] += 0.014095536413469069;
        result[2] += 0;
        result[3] += 0.9859044635865309;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9868852459016394;
        result[1] += 0;
        result[2] += 0.013114754098360656;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9993501032189006;
        result[1] += 0;
        result[2] += 0.0006116675586818565;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.822922241761603e-05;
      } else {
        result[0] += 0.5722577327161854;
        result[1] += 0.001248989787671736;
        result[2] += 0.0066857688634192934;
        result[3] += 0.39703181250459185;
        result[4] += 0.02145323635294982;
        result[5] += 0.0007346998751010213;
        result[6] += 0.0005877599000808169;
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
        result[0] += 0.8333333333333334;
        result[1] += 0;
        result[2] += 0.16666666666666666;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
        result[0] += 0;
        result[1] += 0.009107468123861567;
        result[2] += 0;
        result[3] += 0.9908925318761385;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9737827715355806;
        result[1] += 0;
        result[2] += 0.026217228464419477;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)104) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0009057971014492754;
        result[1] += 0.010869565217391304;
        result[2] += 0;
        result[3] += 0.161231884057971;
        result[4] += 0.8269927536231884;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-41) ) ) {
        result[0] += 0.006172839506172839;
        result[1] += 0.06790123456790123;
        result[2] += 0;
        result[3] += 0.030864197530864196;
        result[4] += 0.8950617283950617;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.25127087872185916;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.551924473493101;
        result[4] += 0.19680464778503998;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.2798141455859577;
        result[1] += 0.008776458440887971;
        result[2] += 0.011357769747031492;
        result[3] += 0.6004130098089829;
        result[4] += 0.0996386164171399;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.04919423240033927;
        result[1] += 0;
        result[2] += 0.008481764206955046;
        result[3] += 0.1085665818490246;
        result[4] += 0.833757421543681;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.11388101983002832;
        result[1] += 0.0005665722379603399;
        result[2] += 0;
        result[3] += 0.8804532577903683;
        result[4] += 0.0022662889518413596;
        result[5] += 0.0028328611898017;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.019138755980861243;
        result[3] += 0;
        result[4] += 0.9784688995215312;
        result[5] += 0.0023923444976076554;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.9926470588235294;
        result[1] += 0.0006157635467980296;
        result[2] += 0.0018110692552883222;
        result[3] += 0.004672558678643871;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002535496957403651;
      } else {
        result[0] += 0.6448587308939324;
        result[1] += 0;
        result[2] += 0.003589624826308476;
        result[3] += 0.3507410838351088;
        result[4] += 0;
        result[5] += 0.0005789717461787865;
        result[6] += 0.0002315886984715146;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)76.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        result[0] += 0.10673234811165845;
        result[1] += 0.0005473453749315818;
        result[2] += 0;
        result[3] += 0.8866995073891626;
        result[4] += 0.003284072249589491;
        result[5] += 0.002736726874657909;
        result[6] += 0;
      } else {
        result[0] += 0.9929511278195489;
        result[1] += 0.0006868131868131869;
        result[2] += 0.0013374783111625218;
        result[3] += 0.004879988432620012;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00014459224985540774;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.2655068078668684;
        result[1] += 0.009833585476550683;
        result[2] += 0.007186081694402421;
        result[3] += 0.619515885022693;
        result[4] += 0.09795763993948564;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.1312;
        result[1] += 0;
        result[2] += 0.018666666666666668;
        result[3] += 0.050666666666666665;
        result[4] += 0.7994666666666667;
        result[5] += 0;
        result[6] += 0;
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
        result[0] += 0.406313834726091;
        result[1] += 0;
        result[2] += 0.0072423398328690805;
        result[3] += 0.5829155060352832;
        result[4] += 0.0012999071494893223;
        result[5] += 0.0012999071494893223;
        result[6] += 0.0009285051067780873;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)36.5) ) ) {
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
        result[2] += 0.018518518518518517;
        result[3] += 0;
        result[4] += 0.9814814814814815;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
        result[0] += 0.9991900101248734;
        result[1] += 0;
        result[2] += 0.000809989875126561;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9862132352941176;
        result[1] += 0;
        result[2] += 0.01011029411764706;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.003676470588235294;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += 0.9996150144369587;
        result[1] += 0;
        result[2] += 0.00038498556304138594;
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        result[0] += 0.00039541320680110717;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9996045867931989;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.02107506511958324;
        result[1] += 0.007577551503670377;
        result[2] += 0.018233483305706847;
        result[3] += 0.951219512195122;
        result[4] += 0;
        result[5] += 0.0018943878759175943;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.9834233791748527;
        result[1] += 0;
        result[2] += 0.005034381139489195;
        result[3] += 0.010928290766208252;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006139489194499018;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.00038299502106472615;
        result[3] += 0.9996170049789352;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9733333333333334;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.02666666666666667;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9353276353276354;
        result[4] += 0.0643874643874644;
        result[5] += 0.00028490028490028494;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.003113879003558719;
        result[2] += 0.014234875444839857;
        result[3] += 0;
        result[4] += 0.9804270462633452;
        result[5] += 0.002224199288256228;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
        result[0] += 0.998672948045916;
        result[1] += 0;
        result[2] += 0.0011943467586756022;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00013270519540840023;
      } else {
        result[0] += 0.9998036327933235;
        result[1] += 0;
        result[2] += 0.00019636720667648503;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        result[0] += 0.936658749010293;
        result[1] += 0.003800475059382423;
        result[2] += 0.008392715756136183;
        result[3] += 0.04972288202692003;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0014251781472684087;
      } else {
        result[0] += 0.4007703595011005;
        result[1] += 0;
        result[2] += 0.005135730007336757;
        result[3] += 0.592993396918562;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0011005135730007337;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)83) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        result[0] += 0.9980217606330366;
        result[1] += 0;
        result[2] += 0.0019782393669634025;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9997515013460344;
        result[1] += 0;
        result[2] += 0.0002484986539656244;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.2;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        result[0] += 0.01455604075691412;
        result[1] += 0.006004366812227074;
        result[2] += 0.006368267831149927;
        result[3] += 0.6466521106259098;
        result[4] += 0.3247816593886463;
        result[5] += 0.0016375545851528383;
        result[6] += 0;
      } else {
        result[0] += 0.9814814814814813;
        result[1] += 0.000124285359184688;
        result[2] += 0.006587124036788464;
        result[3] += 0.011434253044991299;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.000372856077554064;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)101) ) ) {
        result[0] += 0;
        result[1] += 0.0009845749917952087;
        result[2] += 0;
        result[3] += 0.9973744666885462;
        result[4] += 0.0009845749917952087;
        result[5] += 0.0006563833278634723;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.03934871099050204;
        result[3] += 0;
        result[4] += 0.9592944369063772;
        result[5] += 0.0013568521031207597;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)83) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
        result[0] += 0.9988856559153099;
        result[1] += 0;
        result[2] += 0.0010524360799851421;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6.190800470500836e-05;
      } else {
        result[0] += 0.999900882148875;
        result[1] += 0;
        result[2] += 9.911785112498761e-05;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-158) ) ) {
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
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        result[0] += 0.0004060089321965083;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.999187982135607;
        result[5] += 0.0004060089321965083;
        result[6] += 0;
      } else {
        result[0] += 0.017347908745247147;
        result[1] += 0.009980988593155894;
        result[2] += 0.016397338403041826;
        result[3] += 0.9553231939163498;
        result[4] += 0;
        result[5] += 0.0009505703422053232;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.5991521431935939;
        result[1] += 0.00015701051970482018;
        result[2] += 0.0026691788349819433;
        result[3] += 0.3975506358926047;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004710315591144606;
      } else {
        result[0] += 0.968920521945433;
        result[1] += 0;
        result[2] += 0.005219454329774615;
        result[3] += 0.025148279952550416;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0007117437722419929;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        result[0] += 0.18737166324435317;
        result[1] += 0.0077002053388090345;
        result[2] += 0;
        result[3] += 0.8049281314168378;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5356835769561479;
        result[1] += 0;
        result[2] += 0.02063628546861565;
        result[3] += 0.44368013757523644;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
        result[0] += 0.09744560075685904;
        result[1] += 0;
        result[2] += 0.017029328287606435;
        result[3] += 0.6887417218543046;
        result[4] += 0.19394512771996217;
        result[5] += 0.002838221381267739;
        result[6] += 0;
      } else {
        result[0] += 0.8929799547093853;
        result[1] += 0;
        result[2] += 0.002516145265453326;
        result[3] += 0.10416841398976769;
        result[4] += 0;
        result[5] += 8.38715088484442e-05;
        result[6] += 0.0002516145265453326;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        result[0] += 0.08815958815958815;
        result[1] += 0.0006435006435006434;
        result[2] += 0.009009009009009007;
        result[3] += 0.532175032175032;
        result[4] += 0.36808236808236805;
        result[5] += 0.0019305019305019301;
        result[6] += 0;
      } else {
        result[0] += 0.9207631134368949;
        result[1] += 0.0005768676088837612;
        result[2] += 0.0019366269726811985;
        result[3] += 0.07643495817709837;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002884338044418806;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.9828571428571429;
        result[1] += 0;
        result[2] += 0.015238095238095238;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0019047619047619048;
      } else {
        result[0] += 0.9993412384716732;
        result[1] += 0;
        result[2] += 0.0006587615283267457;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
        result[0] += 0.9995476750497557;
        result[1] += 0;
        result[2] += 0.00045232495024425545;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        result[0] += 0.014094819696137652;
        result[1] += 0.006955885044847154;
        result[2] += 0.006772835438403808;
        result[3] += 0.6450668131063518;
        result[4] += 0.3261943986820428;
        result[5] += 0.0009152480322167307;
        result[6] += 0;
      } else {
        result[0] += 0.9823238566131024;
        result[1] += 0.00012360939431396785;
        result[2] += 0.004697156983930778;
        result[3] += 0.01186650185414091;
        result[4] += 0;
        result[5] += 0.0002472187886279357;
        result[6] += 0.0007416563658838069;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
        result[0] += 0;
        result[1] += 0.0016485328058028356;
        result[2] += 0;
        result[3] += 0.9960435212660732;
        result[4] += 0.0019782393669634025;
        result[5] += 0.0003297065611605671;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.05263157894736842;
        result[3] += 0;
        result[4] += 0.9473684210526315;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
        result[0] += 0.9749759384023099;
        result[1] += 0;
        result[2] += 0.025024061597690085;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.07727085902178381;
        result[1] += 0.010686395396629675;
        result[2] += 0.006987258528565557;
        result[3] += 0.905055487053021;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        result[0] += 0.8711305518169584;
        result[1] += 0.0017664872139973083;
        result[2] += 0.0019347240915208615;
        result[3] += 0.1236541049798116;
        result[4] += 0.0003364737550471064;
        result[5] += 0.00042059219380888296;
        result[6] += 0.0007570659488559893;
      } else {
        result[0] += 0.9926822071407493;
        result[1] += 0.00011802891708468571;
        result[2] += 0.001298318087931543;
        result[3] += 0.0034818530539982287;
        result[4] += 0.002183534966066686;
        result[5] += 0.00023605783416937143;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += 0.14968958381237066;
        result[1] += 0;
        result[2] += 0.008047827086686594;
        result[3] += 0.6872844332030352;
        result[4] += 0.15405840423085768;
        result[5] += 0.0009197516670498966;
        result[6] += 0;
      } else {
        result[0] += 0.9943502824858758;
        result[1] += 0;
        result[2] += 0.0038963569062926166;
        result[3] += 0.0009740892265731541;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0007792713812585232;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9979879275653923;
        result[5] += 0.002012072434607646;
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
        result[1] += 0.003803486529318542;
        result[2] += 0.008240887480190175;
        result[3] += 0.986053882725832;
        result[4] += 0;
        result[5] += 0.001901743264659271;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
        result[0] += 0.6152796725784447;
        result[1] += 0.004092769440654843;
        result[2] += 0.001364256480218281;
        result[3] += 0.3792633015006821;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9942514190679345;
        result[1] += 0.0009038649264253949;
        result[2] += 0.0020608120322499006;
        result[3] += 0.0026392855851621534;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0001446183882280632;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        result[0] += 0.42957366432811656;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.5704263356718834;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9866001869741353;
        result[1] += 0;
        result[2] += 0.009660330320972268;
        result[3] += 0.0018697413524462452;
        result[4] += 0;
        result[5] += 0.00031162355874104087;
        result[6] += 0.0015581177937052043;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        result[0] += 0.0011013215859030838;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.998898678414097;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.18897216274089937;
        result[1] += 0.0010706638115631692;
        result[2] += 0.007762312633832976;
        result[3] += 0.8005888650963597;
        result[4] += 0;
        result[5] += 0.0016059957173447537;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.08843537414965986;
        result[4] += 0.9115646258503401;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.013651877133105802;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9863481228668942;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        result[0] += 0.9940688018979834;
        result[1] += 0.00041260508535767706;
        result[2] += 0.0008767858063850637;
        result[3] += 0.004641807210273866;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5448862880702222;
        result[1] += 0.003989892272908632;
        result[2] += 0.009309748636786809;
        result[3] += 0.44168107461098555;
        result[4] += 0;
        result[5] += 0.00013299640909695442;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        result[0] += 0.9918454935622317;
        result[1] += 0;
        result[2] += 0.0024678111587982834;
        result[3] += 0.0050429184549356226;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006437768240343348;
      } else {
        result[0] += 0.9398422090729783;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.0601577909270217;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.00693481276005548;
        result[2] += 0.011095700416088768;
        result[3] += 0.6759130836800741;
        result[4] += 0.30559408229311147;
        result[5] += 0.00046232085067036526;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-15.5) ) ) {
        result[0] += 0.9014399205561072;
        result[1] += 0;
        result[2] += 0.0029791459781529296;
        result[3] += 0.09508440913604767;
        result[4] += 0;
        result[5] += 0.0004965243296921549;
        result[6] += 0;
      } else {
        result[0] += 0.8830784410458806;
        result[1] += 0;
        result[2] += 0.002713369511593488;
        result[3] += 0.11346817957572768;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0007400098667982239;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.9889807162534435;
        result[1] += 0;
        result[2] += 0.008264462809917356;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0027548209366391185;
      } else {
        result[0] += 0.9996408045977011;
        result[1] += 0;
        result[2] += 0.00035919540229885057;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.5776233828461907;
        result[1] += 0.003114518447532343;
        result[2] += 0.00802587446094873;
        result[3] += 0.25371346430282704;
        result[4] += 0.15704360325826544;
        result[5] += 0.00023957834211787255;
        result[6] += 0.00023957834211787255;
      } else {
        result[0] += 0;
        result[1] += 0.001725625539257981;
        result[2] += 0.0012942191544434857;
        result[3] += 0.7924935289042278;
        result[4] += 0.20405522001725626;
        result[5] += 0.0004314063848144953;
        result[6] += 0;
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 100;
  result[1] /= 100;
  result[2] /= 100;
  result[3] /= 100;
  result[4] /= 100;
  result[5] /= 100;
  result[6] /= 100;
  
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
