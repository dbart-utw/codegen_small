
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
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        result[0] += 0.9716673602441394;
        result[1] += 0.0005895408517131365;
        result[2] += 0.0006935774726036899;
        result[3] += 0.026425301706200586;
        result[4] += 6.9357747260369e-05;
        result[5] += 0.0003121098626716605;
        result[6] += 0.00024275211541129147;
      } else {
        result[0] += 0.1681534344335415;
        result[1] += 0;
        result[2] += 0.009812667261373776;
        result[3] += 0.7069580731489742;
        result[4] += 0.11507582515611063;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += 0.14910858995137763;
        result[1] += 0;
        result[2] += 0.005788376939106275;
        result[3] += 0.6865015049780042;
        result[4] += 0.15860152813151193;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.993019545273235;
        result[1] += 0;
        result[2] += 0.003988831272437176;
        result[3] += 0.0015955325089748703;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0013960909453530116;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += 0.012396694214876033;
        result[1] += 0.028925619834710745;
        result[2] += 0;
        result[3] += 0.2809917355371901;
        result[4] += 0.6776859504132231;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.003430531732418525;
        result[2] += 0;
        result[3] += 0.03773584905660377;
        result[4] += 0.9588336192109777;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        result[0] += 0.1213707758210376;
        result[1] += 0.005711565920990005;
        result[2] += 0.006663493574488339;
        result[3] += 0.5506901475487863;
        result[4] += 0.3155640171346978;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.1901840490797546;
        result[4] += 0.8098159509202454;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        result[0] += 0.25744388456252865;
        result[1] += 0.0006871278057718735;
        result[2] += 0.001374255611543747;
        result[3] += 0.7230874942739349;
        result[4] += 0.015345854328905176;
        result[5] += 0.002061383417315621;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.004416094210009814;
        result[2] += 0;
        result[3] += 0.14278704612365065;
        result[4] += 0.8527968596663396;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-13324) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9934117647058824;
        result[1] += 0.00097737556561086;
        result[2] += 0.00195475113122172;
        result[3] += 0.0034751131221719463;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0001809954751131222;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)49) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.006133401482238692;
        result[3] += 0.8144646051622796;
        result[4] += 0.17889087656529518;
        result[5] += 0.0005111167901865576;
        result[6] += 0;
      } else {
        result[0] += 0.9890004782400765;
        result[1] += 0;
        result[2] += 0.008130081300813009;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0028694404591104736;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)29) ) ) {
        result[0] += 0.9947368421052631;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.005263157894736842;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.001616488179430188;
        result[2] += 0.002424732269145282;
        result[3] += 0.6387148918973531;
        result[4] += 0.3556273994746414;
        result[5] += 0.001616488179430188;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
        result[0] += 0.6094946401225115;
        result[1] += 0.0030627871362940277;
        result[2] += 0;
        result[3] += 0.3874425727411945;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9935067277515242;
        result[1] += 0.000865769633130118;
        result[2] += 0.0014429493885501966;
        result[3] += 0.0037155946755167563;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004689585512788139;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += 0.1544246678365505;
        result[1] += 0;
        result[2] += 0.006267234895963901;
        result[3] += 0.6610679368262723;
        result[4] += 0.17824016044121332;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9963530269876003;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.0036469730123997084;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)93.5) ) ) {
        result[0] += 0.5106382978723404;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.48936170212765956;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9432185937040307;
        result[1] += 0;
        result[2] += 0.004118858487790527;
        result[3] += 0.04589585172109445;
        result[4] += 0.004118858487790527;
        result[5] += 0.001471020888496617;
        result[6] += 0.0011768167107972934;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-174.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
        result[0] += 0.9990664675130695;
        result[1] += 0;
        result[2] += 0.0008090614886731392;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00012447099825740602;
      } else {
        result[0] += 0.9999014778325123;
        result[1] += 0;
        result[2] += 9.852216748768474e-05;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        result[0] += 0.015852334419109663;
        result[1] += 0.0028230184581976114;
        result[2] += 0.010640608034744842;
        result[3] += 0.8073832790445168;
        result[4] += 0.16112920738327904;
        result[5] += 0.002171552660152009;
        result[6] += 0;
      } else {
        result[0] += 0.7468875783955817;
        result[1] += 0;
        result[2] += 0.003931479921370402;
        result[3] += 0.24833848169989703;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0008424599831508003;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.0036429872495446266;
        result[1] += 0.023679417122040074;
        result[2] += 0;
        result[3] += 0.5336976320582878;
        result[4] += 0.43897996357012753;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.027739251040221916;
        result[4] += 0.9722607489597781;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        result[0] += 0.9842864625494024;
        result[1] += 0.00014285034045997808;
        result[2] += 0.00014285034045997808;
        result[3] += 0.014999285748297701;
        result[4] += 0.00019046712061330414;
        result[5] += 9.523356030665207e-05;
        result[6] += 0.00014285034045997808;
      } else {
        result[0] += 0.06064690026954178;
        result[1] += 0;
        result[2] += 0.0215633423180593;
        result[3] += 0;
        result[4] += 0.9177897574123989;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        result[0] += 0.7873559677121204;
        result[1] += 0.0006161809107153862;
        result[2] += 0.002896050280362315;
        result[3] += 0.20802267545751435;
        result[4] += 0;
        result[5] += 0.000492944728572309;
        result[6] += 0.0006161809107153862;
      } else {
        result[0] += 0.16052958212660323;
        result[1] += 0;
        result[2] += 0.014894497310715763;
        result[3] += 0.7145221348779479;
        result[4] += 0.1092263136119156;
        result[5] += 0.0008274720728175424;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.15683104284559418;
        result[1] += 0.016168148746968473;
        result[2] += 0;
        result[3] += 0.8270008084074374;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)97.5) ) ) {
        result[0] += 0.13649025069637882;
        result[1] += 0;
        result[2] += 0.009749303621169917;
        result[3] += 0.28551532033426186;
        result[4] += 0.5682451253481894;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.06761177753544166;
        result[4] += 0.9323882224645583;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.00038211692777990065;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9686664119220482;
        result[4] += 0.02904088651127245;
        result[5] += 0.0019105846388995033;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
        result[0] += 0.6923076923076923;
        result[1] += 0;
        result[2] += 0.23076923076923078;
        result[3] += 0.019230769230769232;
        result[4] += 0.057692307692307696;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.004882017900732303;
        result[2] += 0.005695687550854353;
        result[3] += 0;
        result[4] += 0.9894222945484134;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
        result[0] += 0.3685897435897436;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.6217948717948718;
        result[4] += 0;
        result[5] += 0.009615384615384616;
        result[6] += 0;
      } else {
        result[0] += 0.5391358797745773;
        result[1] += 0.0012523481527864746;
        result[2] += 0.004383218534752661;
        result[3] += 0.45522855353788355;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
        result[0] += 0.9326549329606499;
        result[1] += 0.001091846093374678;
        result[2] += 0.0031008429051840856;
        result[3] += 0.06293400882211644;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002183692186749356;
      } else {
        result[0] += 0.8647436855477507;
        result[1] += 0;
        result[2] += 0.00044836347332237334;
        result[3] += 0.13480795097892692;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        result[0] += 0.20659062103929024;
        result[1] += 0;
        result[2] += 0.003041825095057034;
        result[3] += 0.7761723700887199;
        result[4] += 0.012167300380228136;
        result[5] += 0.0020278833967046894;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.005268703898840885;
        result[2] += 0;
        result[3] += 0.09062170706006323;
        result[4] += 0.9041095890410958;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
        result[0] += 0.6134585289514867;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.3865414710485133;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9935005991067862;
        result[1] += 0.0008351185505246723;
        result[2] += 0.002178570131803493;
        result[3] += 0.0034130932064921388;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.261900439344976e-05;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
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
        result[2] += 0.008165645960921552;
        result[3] += 0.7973170020414115;
        result[4] += 0.19451735199766695;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)48.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9850427350427351;
        result[4] += 0.01282051282051282;
        result[5] += 0.002136752136752137;
        result[6] += 0;
      } else {
        result[0] += 0.9913960588398557;
        result[1] += 0;
        result[2] += 0.006938662225922842;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0016652789342214821;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)58.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        result[0] += 0.9275348202980422;
        result[1] += 0.0018505892665822538;
        result[2] += 0.0020453881367488067;
        result[3] += 0.06769260738287718;
        result[4] += 0.00029219830524982956;
        result[5] += 0;
        result[6] += 0.0005843966104996591;
      } else {
        result[0] += 0.9988338550297674;
        result[1] += 0;
        result[2] += 0.00024550420425949795;
        result[3] += 0.0006137605106487448;
        result[4] += 0;
        result[5] += 0.0003068802553243724;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
        result[0] += 0;
        result[1] += 0.0044728434504792336;
        result[2] += 0.005963791267305644;
        result[3] += 0.6051118210862619;
        result[4] += 0.3844515441959531;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9912064720365811;
        result[1] += 0.001055223355610271;
        result[2] += 0.007738304607808653;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
        result[0] += 0.16895715440582054;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8310428455941795;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)40) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.04129793510324484;
        result[3] += 0;
        result[4] += 0.9542772861356932;
        result[5] += 0.004424778761061947;
        result[6] += 0;
      } else {
        result[0] += 0.9916718075262184;
        result[1] += 0;
        result[2] += 0.007094386181369525;
        result[3] += 0.00030845157310302283;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009253547193090684;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9995049504950495;
        result[1] += 0;
        result[2] += 0.0004950495049504951;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        result[0] += 0.012510425354462052;
        result[1] += 0.0029190992493744786;
        result[2] += 0.006672226855713094;
        result[3] += 0.7160133444537115;
        result[4] += 0.26063386155129276;
        result[5] += 0.0012510425354462051;
        result[6] += 0;
      } else {
        result[0] += 0.7296650717703349;
        result[1] += 0;
        result[2] += 0.005502392344497608;
        result[3] += 0.2641148325358852;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0007177033492822966;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-29) ) ) {
        result[0] += 0;
        result[1] += 0.009009009009009009;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.990990990990991;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.055875991348233595;
        result[1] += 0;
        result[2] += 0.0025234318673395817;
        result[3] += 0.5165825522710887;
        result[4] += 0.42357606344628695;
        result[5] += 0.0014419610670511895;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9992851644121852;
        result[1] += 0;
        result[2] += 0.0005498735290883097;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0001649620587264929;
      } else {
        result[0] += 0.6557156321529555;
        result[1] += 0.003096808940352767;
        result[2] += 0.005789686279789956;
        result[3] += 0.33445536555809885;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.000942507068803016;
      }
    }
  }
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
        result[0] += 0.999436556231688;
        result[1] += 0;
        result[2] += 0.0005634437683119225;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9998851102941176;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00011488970588235294;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
        result[0] += 0.21075027995520718;
        result[1] += 0.003807390817469205;
        result[2] += 0.005599104143337066;
        result[3] += 0.43449048152295633;
        result[4] += 0.34535274356103024;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.786045459685627;
        result[1] += 0.0013570055411059596;
        result[2] += 0.005654189754608165;
        result[3] += 0.18828451882845187;
        result[4] += 0.017075653058916656;
        result[5] += 0.0005654189754608164;
        result[6] += 0.0010177541558294696;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)101) ) ) {
        result[0] += 0;
        result[1] += 0.00097815454841865;
        result[2] += 0;
        result[3] += 0.9980436909031627;
        result[4] += 0.00032605151613955004;
        result[5] += 0.0006521030322791001;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.03869047619047619;
        result[3] += 0;
        result[4] += 0.9613095238095238;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-327) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.9910714285714286;
        result[1] += 0;
        result[2] += 0.008928571428571428;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9996894168801925;
        result[1] += 0;
        result[2] += 0.00031058311980743846;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        result[0] += 0.9161654596784093;
        result[1] += 0.0018411685282926232;
        result[2] += 0.0041733153307966135;
        result[3] += 0.07511967595433904;
        result[4] += 0;
        result[5] += 0.0006137228427642078;
        result[6] += 0.0020866576653983068;
      } else {
        result[0] += 0.10682110682110682;
        result[1] += 0.0036771465342893914;
        result[2] += 0.007905865048722191;
        result[3] += 0.5576392719249862;
        result[4] += 0.3239566096708954;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0;
        result[1] += 0.0046029919447640975;
        result[2] += 0;
        result[3] += 0.20483314154200233;
        result[4] += 0.7894131185270427;
        result[5] += 0.0011507479861910244;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.007049700387733521;
        result[3] += 0.9873105393020797;
        result[4] += 0.005287275290800141;
        result[5] += 0.00035248501938667606;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)39) ) ) {
        result[0] += 0.9994186046511628;
        result[1] += 0;
        result[2] += 0.0005813953488372093;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.12315663611000399;
        result[1] += 0.004184934236747709;
        result[2] += 0.009565563969709047;
        result[3] += 0.5306895177361498;
        result[4] += 0.3324033479473894;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
        result[0] += 0.9887014160891835;
        result[1] += 0.00030129557095510696;
        result[2] += 0.0009792106056040976;
        result[3] += 0.009867429948779753;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00015064778547755348;
      } else {
        result[0] += 0;
        result[1] += 0.006134969325153374;
        result[2] += 0;
        result[3] += 0.9785276073619632;
        result[4] += 0.0015337423312883436;
        result[5] += 0.013803680981595092;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
        result[0] += 0.45426594926979247;
        result[1] += 0;
        result[2] += 0.007686395080707148;
        result[3] += 0.04919292851652575;
        result[4] += 0.4888547271329746;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.015309246785058175;
        result[1] += 0;
        result[2] += 0.005511328842620943;
        result[3] += 0.977342314758114;
        result[4] += 0.0015309246785058174;
        result[5] += 0.0003061849357011635;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-61) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9941872118661055;
        result[1] += 0;
        result[2] += 0.0038083784325516137;
        result[3] += 0.0012026458208057728;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0008017638805371818;
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
        result[0] += 0.973715651135006;
        result[1] += 0;
        result[2] += 0.026284348864994027;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.05869275233437083;
        result[1] += 0.006224988883948421;
        result[2] += 0;
        result[3] += 0.9350822587816807;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        result[0] += 0.9833776595744681;
        result[1] += 0.00018996960486322188;
        result[2] += 0.0010448328267477203;
        result[3] += 0.015197568389057751;
        result[4] += 9.498480243161094e-05;
        result[5] += 4.749240121580547e-05;
        result[6] += 4.749240121580547e-05;
      } else {
        result[0] += 0.0014947683109118087;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9985052316890882;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        result[0] += 0.6984312416555407;
        result[1] += 0.0006675567423230974;
        result[2] += 0.002336448598130841;
        result[3] += 0.29789719626168226;
        result[4] += 0;
        result[5] += 0.00025033377837116157;
        result[6] += 0.00041722296395193593;
      } else {
        result[0] += 0.8296499119890476;
        result[1] += 0;
        result[2] += 0.008801095247408568;
        result[3] += 0.13592802659886566;
        result[4] += 0.02405632700958342;
        result[5] += 0.0005867396831605712;
        result[6] += 0.0009778994719342854;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.999580008399832;
        result[5] += 0.00041999160016799666;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.002688172043010753;
        result[2] += 0.006869772998805257;
        result[3] += 0.9877538829151732;
        result[4] += 0;
        result[5] += 0.002688172043010753;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
        result[0] += 0.9685314685314685;
        result[1] += 0.03146853146853147;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.12410501193317422;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8758949880668258;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
        result[0] += 0.9901610984971349;
        result[1] += 0.0017299167477565142;
        result[2] += 0.004000432479186939;
        result[3] += 0.004108552275921721;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8792663535850312;
        result[1] += 0.00011093443774729136;
        result[2] += 0.0021447324631142994;
        result[3] += 0.11799726361720224;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00048071589690492917;
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
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)8.5) ) ) {
        result[0] += 0.30178511283260356;
        result[1] += 0.008757157292017514;
        result[2] += 0.008420343550016841;
        result[3] += 0.681037386325362;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.999749655776693;
        result[1] += 0;
        result[2] += 0.00025034422330704717;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5457962413452029;
        result[1] += 0;
        result[2] += 0.009099901088031654;
        result[3] += 0.4045499505440159;
        result[4] += 0.038773491592482695;
        result[5] += 0.0007912957467853611;
        result[6] += 0.0009891196834817015;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9991216995114454;
        result[1] += 0;
        result[2] += 0.0005489378053466543;
        result[3] += 0;
        result[4] += 0.0002195751221386617;
        result[5] += 0;
        result[6] += 0.00010978756106933085;
      } else {
        result[0] += 0.5688424947145878;
        result[1] += 0.002510570824524313;
        result[2] += 0.005549682875264272;
        result[3] += 0.343816067653277;
        result[4] += 0.07809196617336153;
        result[5] += 0.000528541226215645;
        result[6] += 0.0006606765327695561;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
        result[0] += 0.12988348183687456;
        result[1] += 0;
        result[2] += 0.00822481151473612;
        result[3] += 0.7604523646333105;
        result[4] += 0.09869773817683344;
        result[5] += 0.0027416038382453737;
        result[6] += 0;
      } else {
        result[0] += 0.909702261510928;
        result[1] += 0.0005152123217094203;
        result[2] += 0.002115082162807094;
        result[3] += 0.08720646455881557;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00046097944574000765;
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
        result[1] += 0.015407190022010272;
        result[2] += 0;
        result[3] += 0.9845928099779897;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9698996655518395;
        result[1] += 0;
        result[2] += 0.030100334448160536;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-327) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9995805209167524;
        result[1] += 0;
        result[2] += 0.0004194790832475308;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
        result[0] += 0.0021810250817884407;
        result[1] += 0.004362050163576881;
        result[2] += 0;
        result[3] += 0.2420937840785169;
        result[4] += 0.7513631406761178;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5773787067079152;
        result[1] += 0.0009054553685957897;
        result[2] += 0.007394552176865616;
        result[3] += 0.39213762921602663;
        result[4] += 0.020976382705802463;
        result[5] += 0.000528182298347544;
        result[6] += 0.0006790915264468423;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
        result[0] += 0.010101010101010102;
        result[1] += 0.030303030303030304;
        result[2] += 0;
        result[3] += 0.1111111111111111;
        result[4] += 0.8484848484848485;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.16057774001699235;
        result[1] += 0.006796941376380629;
        result[2] += 0;
        result[3] += 0.832625318606627;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        result[0] += 0.2857142857142857;
        result[1] += 0;
        result[2] += 0.031055900621118012;
        result[3] += 0.6832298136645962;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.03211009174311927;
        result[4] += 0.9678899082568807;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        result[0] += 0.0018838304552590268;
        result[1] += 0;
        result[2] += 0.004081632653061226;
        result[3] += 0.9726844583987442;
        result[4] += 0.019466248037676614;
        result[5] += 0.0018838304552590268;
        result[6] += 0;
      } else {
        result[0] += 0.525722339675828;
        result[1] += 0;
        result[2] += 0.009161381254404511;
        result[3] += 0;
        result[4] += 0.46511627906976744;
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
        result[0] += 0;
        result[1] += 0.05649717514124294;
        result[2] += 0;
        result[3] += 0.943502824858757;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.998953756015903;
        result[1] += 0.00036618539443398205;
        result[2] += 0.0003138731952291275;
        result[3] += 0.00020924879681941832;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00015693659761456375;
      } else {
        result[0] += 0.8677462887989204;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.13225371120107962;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
        result[0] += 0.8151260504201682;
        result[1] += 0.0007859258811438245;
        result[2] += 0.004896922797896138;
        result[3] += 0.17864699836769243;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005441025330995709;
      } else {
        result[0] += 0.21103896103896103;
        result[1] += 0.027597402597402596;
        result[2] += 0;
        result[3] += 0.7613636363636364;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-185) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9995399831327149;
        result[1] += 0;
        result[2] += 0.0004600168672851338;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.7357685009487666;
        result[1] += 0.0006641366223908918;
        result[2] += 0.0062618595825426945;
        result[3] += 0.22741935483870968;
        result[4] += 0.028273244781783682;
        result[5] += 0.0005692599620493358;
        result[6] += 0.0010436432637571157;
      } else {
        result[0] += 0;
        result[1] += 0.0018975332068311196;
        result[2] += 0.005963675792897805;
        result[3] += 0.813228517213337;
        result[4] += 0.17891027378693414;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
        result[0] += 0.15574348132487667;
        result[1] += 0.009161381254404511;
        result[2] += 0.011980267794221282;
        result[3] += 0.8231148696264975;
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += 0;
        result[1] += 0.008726003490401396;
        result[2] += 0;
        result[3] += 0.24956369982547993;
        result[4] += 0.7417102966841187;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.05456171735241502;
        result[4] += 0.945438282647585;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0.18634686346863472;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.16051660516605168;
        result[4] += 0.6512915129151292;
        result[5] += 0.001845018450184502;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0051204819277108436;
        result[3] += 0.7189759036144578;
        result[4] += 0.2753012048192771;
        result[5] += 0.0006024096385542169;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-9422.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.007168458781362007;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.992831541218638;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-2.5) ) ) {
        result[0] += 0.4405850091407678;
        result[1] += 0;
        result[2] += 0.003656307129798903;
        result[3] += 0.5502742230347349;
        result[4] += 0;
        result[5] += 0.005484460694698354;
        result[6] += 0;
      } else {
        result[0] += 0.5618153364632238;
        result[1] += 0.001564945226917058;
        result[2] += 0.001564945226917058;
        result[3] += 0.4350547730829421;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        result[0] += 0.995651951506471;
        result[1] += 0.0001534605350657323;
        result[2] += 0.0003069210701314646;
        result[3] += 0.003836513376643307;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5.115351168857743e-05;
      } else {
        result[0] += 0.8040156361051883;
        result[1] += 0.0011845534233593934;
        result[2] += 0.0039090262970859985;
        result[3] += 0.19035773513385454;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005330490405117271;
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
    

    FILE* file = fopen("./codegen/dataset_148/split_0/test_data.csv", "r");
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
