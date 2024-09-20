
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
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        result[0] += (float)0.1858163826278175;
        result[1] += (float)0.018141836173721827;
        result[2] += (float)0;
        result[3] += (float)0.7960417811984607;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.5035523978685613;
        result[1] += (float)0;
        result[2] += (float)0.021314387211367674;
        result[3] += (float)0.47513321492007105;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        result[0] += (float)0.0011947431302270011;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.998805256869773;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.11397720455908818;
        result[1] += (float)0;
        result[2] += (float)0.011397720455908818;
        result[3] += (float)0.8734253149370126;
        result[4] += (float)0;
        result[5] += (float)0.0011997600479904018;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += (float)0.883356460697086;
        result[1] += (float)0;
        result[2] += (float)0.0037547955268957636;
        result[3] += (float)0.11190923189943679;
        result[4] += (float)0;
        result[5] += (float)0.00032650395886050116;
        result[6] += (float)0.0006530079177210023;
      } else {
        result[0] += (float)0.9233187194970635;
        result[1] += (float)0.0007858383654561999;
        result[2] += (float)0.0014889569029696418;
        result[3] += (float)0.07436512532053934;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)4.135991397137894e-05;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        result[0] += (float)0.0011235955056179776;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.998876404494382;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.17620481927710843;
        result[1] += (float)0.00426706827309237;
        result[2] += (float)0.0035140562248995983;
        result[3] += (float)0.8157630522088354;
        result[4] += (float)0;
        result[5] += (float)0.000251004016064257;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        result[0] += (float)0.9955687381624558;
        result[1] += (float)0.0005003037558517673;
        result[2] += (float)0.0019654790408462283;
        result[3] += (float)0.0018582710931637067;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00010720794768252155;
      } else {
        result[0] += (float)0.003816793893129771;
        result[1] += (float)0.03435114503816794;
        result[2] += (float)0;
        result[3] += (float)0.9618320610687023;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.9974243399871217;
        result[4] += (float)0.0022537025112685126;
        result[5] += (float)0.0003219575016097875;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.4888888888888889;
        result[1] += (float)0;
        result[2] += (float)0.022222222222222223;
        result[3] += (float)0;
        result[4] += (float)0.4888888888888889;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
        result[0] += (float)0.9987929993964997;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.0012070006035003018;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9889563776918829;
        result[1] += (float)0;
        result[2] += (float)0.009387078961899503;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0016565433462175593;
      }
    }
  }
  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      result[0] += (float)1;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)0;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += (float)0.5936471043966686;
        result[1] += (float)0.0025179159403447607;
        result[2] += (float)0.0036800309897346505;
        result[3] += (float)0.3040867712570211;
        result[4] += (float)0.09451869068371102;
        result[5] += (float)0.0005810575246949448;
        result[6] += (float)0.000968429207824908;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.020279720279720283;
        result[3] += (float)0.841958041958042;
        result[4] += (float)0.13776223776223778;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        result[0] += (float)0.05631188118811881;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.9133663366336634;
        result[4] += (float)0.03032178217821782;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.026746724890829694;
        result[1] += (float)0.0005458515283842794;
        result[2] += (float)0.007641921397379912;
        result[3] += (float)0.0005458515283842794;
        result[4] += (float)0.9639737991266376;
        result[5] += (float)0.0005458515283842794;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        result[0] += (float)0.9690290610643679;
        result[1] += (float)0.0012904557889846693;
        result[2] += (float)0.0024260568832911783;
        result[3] += (float)0.026944716873999897;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00030970938935632065;
      } else {
        result[0] += (float)0.6882091761223483;
        result[1] += (float)0;
        result[2] += (float)0.002302252918927808;
        result[3] += (float)0.3094885709587239;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.019801980198019802;
        result[1] += (float)0.16831683168316833;
        result[2] += (float)0;
        result[3] += (float)0.8118811881188119;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        result[0] += (float)0.46516956920256647;
        result[1] += (float)0;
        result[2] += (float)0.013748854262144821;
        result[3] += (float)0.4106324472960587;
        result[4] += (float)0.11044912923923006;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.09523809523809523;
        result[1] += (float)0.005085529357374018;
        result[2] += (float)0.005085529357374018;
        result[3] += (float)0.5469255663430421;
        result[4] += (float)0.34766527970411465;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        result[0] += (float)0.004155124653739612;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.9958448753462604;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.11497005988023952;
        result[1] += (float)0;
        result[2] += (float)0.017365269461077845;
        result[3] += (float)0.8658682634730539;
        result[4] += (float)0;
        result[5] += (float)0.0017964071856287425;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        result[0] += (float)0.9946872736054093;
        result[1] += (float)4.829751267809708e-05;
        result[2] += (float)0.0005795701521371649;
        result[3] += (float)0.004684858729775416;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.8038559905567578;
        result[1] += (float)0.0005902026362384419;
        result[2] += (float)0.0030165912518853697;
        result[3] += (float)0.19188143484818676;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.000655780706931602;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
        result[0] += (float)0.0034602076124567475;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.9896193771626297;
        result[5] += (float)0.006920415224913495;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.003968253968253968;
        result[2] += (float)0.0057997557997558;
        result[3] += (float)0.9877899877899878;
        result[4] += (float)0;
        result[5] += (float)0.002442002442002442;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-12440.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)1;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9867087020384767;
        result[1] += (float)0.0012897216350804285;
        result[2] += (float)0.0018987568516461864;
        result[3] += (float)0.009923691469924409;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00017912800487228172;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.41560831952880545;
        result[1] += (float)0;
        result[2] += (float)0.005889931897662433;
        result[3] += (float)0.5766611448555126;
        result[4] += (float)0;
        result[5] += (float)0.0007362414872078042;
        result[6] += (float)0.0011043622308117063;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)248) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        result[0] += (float)0;
        result[1] += (float)0.0002653927813163482;
        result[2] += (float)0.006900212314225053;
        result[3] += (float)0.798036093418259;
        result[4] += (float)0.1942675159235669;
        result[5] += (float)0.0005307855626326964;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.010131712259371834;
        result[2] += (float)0;
        result[3] += (float)0.09574468085106383;
        result[4] += (float)0.8941236068895644;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        result[0] += (float)0.9989344698987747;
        result[1] += (float)0;
        result[2] += (float)0.000989420808280691;
        result[3] += (float)7.610929294466855e-05;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9898856640281443;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.010114335971855761;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        result[0] += (float)0.9605128787019176;
        result[1] += (float)0.002155906047883808;
        result[2] += (float)0.00499262453194145;
        result[3] += (float)0.03211165323953251;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00022693747872461136;
      } else {
        result[0] += (float)0.6203883495145631;
        result[1] += (float)0;
        result[2] += (float)0.003762135922330097;
        result[3] += (float)0.37524271844660195;
        result[4] += (float)0;
        result[5] += (float)0.00012135922330097087;
        result[6] += (float)0.0004854368932038835;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
        result[0] += (float)0.9879807692307693;
        result[1] += (float)0;
        result[2] += (float)0.01201923076923077;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.0486815415821501;
        result[1] += (float)0.012170385395537525;
        result[2] += (float)0.000676132521974307;
        result[3] += (float)0.5841784989858012;
        result[4] += (float)0.35429344151453684;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)8.5) ) ) {
        result[0] += (float)0.22709404293921984;
        result[1] += (float)0.0030238887208950713;
        result[2] += (float)0.006954944058058663;
        result[3] += (float)0.37163592379800425;
        result[4] += (float)0.3912912004838222;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.21951219512195122;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.7804878048780488;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += (float)0.999159374880593;
        result[1] += (float)0;
        result[2] += (float)0.0007642046540063429;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)7.64204654006343e-05;
      } else {
        result[0] += (float)0.6014860139860141;
        result[1] += (float)0.001223776223776224;
        result[2] += (float)0.005594405594405595;
        result[3] += (float)0.38627622377622384;
        result[4] += (float)0.004283216783216784;
        result[5] += (float)0.0005244755244755246;
        result[6] += (float)0.000611888111888112;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.0031007751937984496;
        result[3] += (float)0;
        result[4] += (float)0.9968992248062015;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        result[0] += (float)0.007292011932383162;
        result[1] += (float)0.004308916141862778;
        result[2] += (float)0.006629101756711966;
        result[3] += (float)0.6957242293669208;
        result[4] += (float)0.2860457408021213;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9874581939799331;
        result[1] += (float)0;
        result[2] += (float)0.01254180602006689;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)123.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0.009689922480620155;
        result[2] += (float)0;
        result[3] += (float)0.1686046511627907;
        result[4] += (float)0.8217054263565892;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.0345679012345679;
        result[2] += (float)0;
        result[3] += (float)0.019753086419753086;
        result[4] += (float)0.945679012345679;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)-305.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9995037220843673;
        result[1] += (float)0;
        result[2] += (float)0.00045810269135331173;
        result[3] += (float)0;
        result[4] += (float)3.8175224279442646e-05;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0.0010787486515641855;
        result[2] += (float)0;
        result[3] += (float)0.20496224379719524;
        result[4] += (float)0.7939590075512406;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.6036645023570222;
        result[1] += (float)0.0014231077114649116;
        result[2] += (float)0.007026594325358001;
        result[3] += (float)0.3821933647602953;
        result[4] += (float)0.0041803789024281775;
        result[5] += (float)0.00044472115983278484;
        result[6] += (float)0.0010673307835986836;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-7.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)-5) ) ) {
        result[0] += (float)0.3333333333333333;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.6666666666666666;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.999581860341354;
        result[1] += (float)0;
        result[2] += (float)0.0003801269624054434;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)3.8012696240544345e-05;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += (float)0.7011291460832746;
        result[1] += (float)0.0027346506704304875;
        result[2] += (float)0.006704304869442485;
        result[3] += (float)0.2884615384615385;
        result[4] += (float)0.0003528581510232887;
        result[5] += (float)0.00017642907551164436;
        result[6] += (float)0.0004410726887791109;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.0005583472920156338;
        result[2] += (float)0.010050251256281409;
        result[3] += (float)0.809603573422669;
        result[4] += (float)0.17922948073701844;
        result[5] += (float)0.0005583472920156338;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
        result[0] += (float)0;
        result[1] += (float)0.006235385814497272;
        result[2] += (float)0;
        result[3] += (float)0.32657833203429465;
        result[4] += (float)0.6671862821512081;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        result[0] += (float)0.9505520136837194;
        result[1] += (float)0;
        result[2] += (float)0.0013994713108381278;
        result[3] += (float)0.01710464935468823;
        result[4] += (float)0.03094386565075416;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.8158415841584158;
        result[1] += (float)0;
        result[2] += (float)0.011881188118811881;
        result[3] += (float)0.17227722772277226;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        result[0] += (float)0.0043206913106096975;
        result[1] += (float)0.005760921747479597;
        result[2] += (float)0.0019203072491598655;
        result[3] += (float)0.7695631301008161;
        result[4] += (float)0.2184349495919347;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.8159099580312857;
        result[1] += (float)0;
        result[2] += (float)0.0032430370087752768;
        result[3] += (float)0.1793208698969859;
        result[4] += (float)0;
        result[5] += (float)0.00019076688286913393;
        result[6] += (float)0.0013353681800839375;
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)10.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.35551330798479086;
        result[1] += (float)0.006653992395437262;
        result[2] += (float)0.013307984790874524;
        result[3] += (float)0.6245247148288974;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        result[0] += (float)0.9533788712779362;
        result[1] += (float)0.000198952185158167;
        result[2] += (float)0.0007294913455799456;
        result[3] += (float)0.014390874726440746;
        result[4] += (float)0.031235493069832216;
        result[5] += (float)0;
        result[6] += (float)6.631739505272233e-05;
      } else {
        result[0] += (float)0.7581566463355602;
        result[1] += (float)0.0011617775196049959;
        result[2] += (float)0.0029044437990124895;
        result[3] += (float)0.23235550392099916;
        result[4] += (float)0.005227998838222481;
        result[5] += (float)9.681479330041632e-05;
        result[6] += (float)9.681479330041632e-05;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-7.5) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)49) ) ) {
        result[0] += (float)0.9444444444444444;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.05555555555555555;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.6142857142857143;
        result[4] += (float)0.38571428571428573;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
        result[0] += (float)0.3435804701627486;
        result[1] += (float)0.0037673297166968055;
        result[2] += (float)0.0076853526220614825;
        result[3] += (float)0.3925557564798071;
        result[4] += (float)0.252411091018686;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9649277600088232;
        result[1] += (float)0.0006985037314804602;
        result[2] += (float)0.0008823205029226867;
        result[3] += (float)0.033197308922466084;
        result[4] += (float)3.6763354288445275e-05;
        result[5] += (float)0.0001470534171537811;
        result[6] += (float)0.00011029006286533584;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        result[0] += (float)0.31942730190076524;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.6805726980992347;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.7546099290780142;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.2453900709219858;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)40) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.055162659123055166;
        result[3] += (float)0;
        result[4] += (float)0.9434229137199435;
        result[5] += (float)0.0014144271570014145;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9913510289293171;
        result[1] += (float)0;
        result[2] += (float)0.0062630480167014625;
        result[3] += (float)0.0008947211452430661;
        result[4] += (float)0;
        result[5] += (float)0.0002982403817476887;
        result[6] += (float)0.0011929615269907548;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
        result[0] += (float)0.21220450797141288;
        result[1] += (float)0;
        result[2] += (float)0.003023639362286971;
        result[3] += (float)0.7822979659153382;
        result[4] += (float)0.0010995052226498078;
        result[5] += (float)0.0013743815283122596;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.005638134290107637;
        result[2] += (float)0;
        result[3] += (float)0.11071245515120451;
        result[4] += (float)0.8836494105586878;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        result[0] += (float)0.9863332260026475;
        result[1] += (float)0.0009301992773067153;
        result[2] += (float)0.0023254981932667885;
        result[3] += (float)0.010303745840935923;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00010733068584308254;
      } else {
        result[0] += (float)0.8122866894197952;
        result[1] += (float)0;
        result[2] += (float)0.020477815699658702;
        result[3] += (float)0.16723549488054607;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      result[0] += (float)1;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)0;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)49) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.005850928516916816;
        result[3] += (float)0.8247265326888833;
        result[4] += (float)0.16840498600864923;
        result[5] += (float)0.0010175527855507507;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.988677536231884;
        result[1] += (float)0;
        result[2] += (float)0.007699275362318841;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0036231884057971015;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.00366412213740458;
        result[3] += (float)0.9587786259541985;
        result[4] += (float)0.0366412213740458;
        result[5] += (float)0.000916030534351145;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.49412628487518356;
        result[1] += (float)0;
        result[2] += (float)0.00881057268722467;
        result[3] += (float)0;
        result[4] += (float)0.49706314243759175;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)8) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.11570247933884298;
        result[2] += (float)0;
        result[3] += (float)0.8842975206611571;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
        result[0] += (float)0.9447004608294931;
        result[1] += (float)0.055299539170506916;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)1;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        result[0] += (float)0.9973142670489602;
        result[1] += (float)0.00047181795085834575;
        result[2] += (float)0.001996152869016078;
        result[3] += (float)0.00010888106558269518;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00010888106558269518;
      } else {
        result[0] += (float)0.6432923451866623;
        result[1] += (float)0;
        result[2] += (float)0.0048742660906170385;
        result[3] += (float)0.35094715852442676;
        result[4] += (float)0;
        result[5] += (float)0.00011077877478675087;
        result[6] += (float)0.0007754514235072561;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        result[0] += (float)0.9829518472789437;
        result[1] += (float)0.00014246367176370023;
        result[2] += (float)0.0009022699211701014;
        result[3] += (float)0.015765979675182826;
        result[4] += (float)0.00014246367176370023;
        result[5] += (float)4.748789058790007e-05;
        result[6] += (float)4.748789058790007e-05;
      } else {
        result[0] += (float)0.0046801872074883;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.9953198127925117;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
        result[0] += (float)0.7606192425793245;
        result[1] += (float)0.0005757420675537359;
        result[2] += (float)0.0044140225179119755;
        result[3] += (float)0.21494370522006143;
        result[4] += (float)0.018807574206755374;
        result[5] += (float)0.00025588536335721597;
        result[6] += (float)0.00038382804503582393;
      } else {
        result[0] += (float)0.4717041800643087;
        result[1] += (float)0;
        result[2] += (float)0.003536977491961415;
        result[3] += (float)0.52475884244373;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)11) ) ) {
        result[0] += (float)0.1277445109780439;
        result[1] += (float)0.0166333998669328;
        result[2] += (float)0.008649367930805056;
        result[3] += (float)0.8469727212242182;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)-305.5) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += (float)0.9797687861271677;
        result[1] += (float)0;
        result[2] += (float)0.02023121387283237;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.99934207980185;
        result[1] += (float)0;
        result[2] += (float)0.0006192190100236078;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)3.8701188126475485e-05;
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
        result[0] += (float)0.3070739549839228;
        result[1] += (float)0.0021436227224008574;
        result[2] += (float)0.010718113612004287;
        result[3] += (float)0.6318327974276527;
        result[4] += (float)0.04823151125401929;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.6979993101069335;
        result[1] += (float)0.0029320455329423945;
        result[2] += (float)0.0017247326664367026;
        result[3] += (float)0.2959641255605382;
        result[4] += (float)0;
        result[5] += (float)0.0005174197999310108;
        result[6] += (float)0.0008623663332183513;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += (float)0.5476772616136919;
        result[1] += (float)0.0027709861450692748;
        result[2] += (float)0.009616951915240424;
        result[3] += (float)0.16414017929910352;
        result[4] += (float)0.2743276283618582;
        result[5] += (float)0.00032599837000814997;
        result[6] += (float)0.0011409942950285248;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.008250355618776671;
        result[3] += (float)0.8065433854907539;
        result[4] += (float)0.18435277382645804;
        result[5] += (float)0.0008534850640113798;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        result[0] += (float)0.9699519230769231;
        result[1] += (float)0;
        result[2] += (float)0.030048076923076924;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.0742857142857143;
        result[1] += (float)0.005194805194805196;
        result[2] += (float)0.0005194805194805196;
        result[3] += (float)0.9194805194805196;
        result[4] += (float)0.0005194805194805196;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)101.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.0008417508417508417;
        result[1] += (float)0.013468013468013467;
        result[2] += (float)0;
        result[3] += (float)0.19696969696969696;
        result[4] += (float)0.7887205387205387;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += (float)0.12185120093731693;
        result[1] += (float)0.0011716461628588166;
        result[2] += (float)0;
        result[3] += (float)0.8711189220855302;
        result[4] += (float)0;
        result[5] += (float)0.005858230814294083;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.02944640753828033;
        result[3] += (float)0;
        result[4] += (float)0.9693757361601885;
        result[5] += (float)0.001177856301531213;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
        result[0] += (float)0.9365605558330684;
        result[1] += (float)0.0005903455792198357;
        result[2] += (float)0.002679260705690023;
        result[3] += (float)0.05957949230280187;
        result[4] += (float)0;
        result[5] += (float)0.00018164479360610326;
        result[6] += (float)0.00040870078561373234;
      } else {
        result[0] += (float)0.8716761383568371;
        result[1] += (float)0;
        result[2] += (float)0.0007717673472251456;
        result[3] += (float)0.1275520942959377;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.9337313432835821;
        result[4] += (float)0.06567164179104477;
        result[5] += (float)0.0005970149253731343;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
        result[0] += (float)0.9886363636363636;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.011363636363636364;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.0044943820224719105;
        result[2] += (float)0.010337078651685393;
        result[3] += (float)0;
        result[4] += (float)0.9829213483146068;
        result[5] += (float)0.0022471910112359553;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
        result[0] += (float)0.9962384466575912;
        result[1] += (float)0.00046571612810775956;
        result[2] += (float)0.0024718779107258007;
        result[3] += (float)0.0006448377158415132;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00017912158773375367;
      } else {
        result[0] += (float)0.3333333333333333;
        result[1] += (float)0.015350877192982455;
        result[2] += (float)0;
        result[3] += (float)0.6513157894736842;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        result[0] += (float)0.427496328928047;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.572503671071953;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9862809424396064;
        result[1] += (float)0;
        result[2] += (float)0.010140172979421415;
        result[3] += (float)0.0005964807634953774;
        result[4] += (float)0;
        result[5] += (float)0.0002982403817476887;
        result[6] += (float)0.002684163435729198;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += (float)0.2968;
        result[1] += (float)0;
        result[2] += (float)0.0016;
        result[3] += (float)0.1552;
        result[4] += (float)0.5464;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.000852151682999574;
        result[2] += (float)0.00852151682999574;
        result[3] += (float)0.8670643374520666;
        result[4] += (float)0.12185769066893909;
        result[5] += (float)0.001704303365999148;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += (float)0.9993396776073024;
        result[1] += (float)0;
        result[2] += (float)0.0006603223926976112;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.7139368725694131;
        result[1] += (float)0.0016279280094058063;
        result[2] += (float)0.006873473817491182;
        result[3] += (float)0.27683820204395404;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0007235235597359139;
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
        result[0] += (float)0;
        result[1] += (float)0.014311270125223614;
        result[2] += (float)0;
        result[3] += (float)0.9856887298747764;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9738805970149254;
        result[1] += (float)0;
        result[2] += (float)0.026119402985074626;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.005847953216374269;
        result[1] += (float)0.06432748538011696;
        result[2] += (float)0;
        result[3] += (float)0.9298245614035088;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
        result[0] += (float)0.9991245099158769;
        result[1] += (float)0;
        result[2] += (float)0.0008754900841231776;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
        result[0] += (float)0.6105146826649825;
        result[1] += (float)0.001105146826649826;
        result[2] += (float)0.005920429428481211;
        result[3] += (float)0.33059677928639086;
        result[4] += (float)0.05123144932112408;
        result[5] += (float)0.00023681717713924845;
        result[6] += (float)0.00039469529523208073;
      } else {
        result[0] += (float)0.0037974683544303796;
        result[1] += (float)0;
        result[2] += (float)0.012025316455696202;
        result[3] += (float)0.7968354430379747;
        result[4] += (float)0.18734177215189873;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
        result[0] += (float)0.4040114613180516;
        result[1] += (float)0;
        result[2] += (float)0.02865329512893983;
        result[3] += (float)0.5673352435530086;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.1260245901639344;
        result[1] += (float)0.007172131147540984;
        result[2] += (float)0;
        result[3] += (float)0.8668032786885246;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.06666666666666667;
        result[2] += (float)0;
        result[3] += (float)0.9333333333333333;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        result[0] += (float)0.005917159763313609;
        result[1] += (float)0.007737824305871643;
        result[2] += (float)0.013199817933545745;
        result[3] += (float)0.973145197997269;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9866777685262281;
        result[1] += (float)0;
        result[2] += (float)0.013322231473771857;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9992786362428339;
        result[1] += (float)0;
        result[2] += (float)0.0007213637571661794;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0.001201923076923077;
        result[2] += (float)0;
        result[3] += (float)0.21754807692307693;
        result[4] += (float)0.78125;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.6077053118604858;
        result[1] += (float)0.0007118071002758253;
        result[2] += (float)0.006940119227689296;
        result[3] += (float)0.3792152326719459;
        result[4] += (float)0.004270842601654951;
        result[5] += (float)0.0006228312127413471;
        result[6] += (float)0.0005338553252068689;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += (float)0.9995048562178632;
        result[1] += (float)0;
        result[2] += (float)0.00038087983241287375;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00011426394972386212;
      } else {
        result[0] += (float)0.5721988330009602;
        result[1] += (float)0.0008863283846665189;
        result[2] += (float)0.005170248910554694;
        result[3] += (float)0.3988477730999335;
        result[4] += (float)0.021198020533274246;
        result[5] += (float)0.0007386069872220991;
        result[6] += (float)0.0009601890833887288;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.5;
        result[1] += (float)0;
        result[2] += (float)0.5;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        result[0] += (float)0.6241610738255033;
        result[1] += (float)0;
        result[2] += (float)0.026845637583892617;
        result[3] += (float)0.348993288590604;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.003626473254759746;
        result[1] += (float)0.016319129646418858;
        result[2] += (float)0;
        result[3] += (float)0.9800543970988214;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)71) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += (float)0.9813117699910153;
        result[1] += (float)0.00039532794249775384;
        result[2] += (float)0.0007906558849955077;
        result[3] += (float)0.017286612758310872;
        result[4] += (float)0;
        result[5] += (float)3.5938903863432166e-05;
        result[6] += (float)0.00017969451931716083;
      } else {
        result[0] += (float)0.670710163702744;
        result[1] += (float)0;
        result[2] += (float)0.005888587916617595;
        result[3] += (float)0.3229301613473089;
        result[4] += (float)0;
        result[5] += (float)0.0001177717583323519;
        result[6] += (float)0.0003533152749970557;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)22.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        result[0] += (float)0.004595060310166571;
        result[1] += (float)0.007179781734635267;
        result[2] += (float)0.009190120620333142;
        result[3] += (float)0.9773118897185525;
        result[4] += (float)0;
        result[5] += (float)0.0017231476163124641;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9822934232715008;
        result[1] += (float)0;
        result[2] += (float)0.012647554806070826;
        result[3] += (float)0.00505902192242833;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)3.5) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)-305.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.5;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.5;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)34.5) ) ) {
        result[0] += (float)0.9990364928339155;
        result[1] += (float)0;
        result[2] += (float)0.0009635071660845478;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9998334998334998;
        result[1] += (float)0;
        result[2] += (float)0.0001665001665001665;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        result[0] += (float)0.7336630838010083;
        result[1] += (float)0.0009512032721392562;
        result[2] += (float)0.005802339960049463;
        result[3] += (float)0.23180823742033674;
        result[4] += (float)0.0271092932559688;
        result[5] += (float)0.00019024065442785123;
        result[6] += (float)0.0004756016360696281;
      } else {
        result[0] += (float)0.09237637362637363;
        result[1] += (float)0.007211538461538462;
        result[2] += (float)0.002403846153846154;
        result[3] += (float)0.40006868131868134;
        result[4] += (float)0.49793956043956045;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
        result[0] += (float)0;
        result[1] += (float)0.0006482982171799027;
        result[2] += (float)0.004862236628849271;
        result[3] += (float)0.9944894651539709;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.024024024024024024;
        result[3] += (float)0;
        result[4] += (float)0.972972972972973;
        result[5] += (float)0.003003003003003003;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        result[0] += (float)0.9760697305863708;
        result[1] += (float)0;
        result[2] += (float)0.002694136291600634;
        result[3] += (float)0.020919175911251982;
        result[4] += (float)0.0003169572107765452;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.7873691436416681;
        result[1] += (float)0;
        result[2] += (float)0.0032606830272867687;
        result[3] += (float)0.20782563926548825;
        result[4] += (float)0;
        result[5] += (float)0.0005148446885189634;
        result[6] += (float)0.0010296893770379268;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += (float)0.998796498905908;
        result[1] += (float)0;
        result[2] += (float)0.0009299781181619256;
        result[3] += (float)0;
        result[4] += (float)0.00016411378555798687;
        result[5] += (float)0;
        result[6] += (float)0.00010940919037199125;
      } else {
        result[0] += (float)0.6739694904251867;
        result[1] += (float)0.0025965595585848754;
        result[2] += (float)0.0030834144758195396;
        result[3] += (float)0.3033106134371958;
        result[4] += (float)0.015903927296332363;
        result[5] += (float)0.00032456994482310943;
        result[6] += (float)0.0008114248620577735;
      }
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        result[0] += (float)0.24772036474164133;
        result[1] += (float)0;
        result[2] += (float)0.004052684903748734;
        result[3] += (float)0.6550151975683891;
        result[4] += (float)0.09321175278622088;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.01746031746031746;
        result[2] += (float)0;
        result[3] += (float)0.22063492063492063;
        result[4] += (float)0.7619047619047619;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-29) ) ) {
        result[0] += (float)0;
        result[1] += (float)0.01206896551724138;
        result[2] += (float)0;
        result[3] += (float)0.05517241379310345;
        result[4] += (float)0.9327586206896552;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.18089376505218088;
        result[1] += (float)0.004281509232004281;
        result[2] += (float)0.010168584426010168;
        result[3] += (float)0.49986620283649985;
        result[4] += (float)0.30345196681830344;
        result[5] += (float)0.001337971635001338;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.0002891844997108155;
        result[2] += (float)0;
        result[3] += (float)0.9346443030653557;
        result[4] += (float)0.06477732793522267;
        result[5] += (float)0.0002891844997108155;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.9995194617972128;
        result[5] += (float)0.0004805382027871216;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.7377049180327869;
        result[1] += (float)0.10655737704918032;
        result[2] += (float)0.14754098360655737;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0.00819672131147541;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
        result[0] += (float)0.40444444444444444;
        result[1] += (float)0.02;
        result[2] += (float)0;
        result[3] += (float)0.5755555555555556;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9976125881714597;
        result[1] += (float)0.0001808645324651836;
        result[2] += (float)0.001808645324651836;
        result[3] += (float)0.00021703743895822033;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0001808645324651836;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.4030369557263081;
        result[1] += (float)0;
        result[2] += (float)0.005305525064032199;
        result[3] += (float)0.5916575192096597;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.9967213114754099;
        result[5] += (float)0.003278688524590164;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        result[0] += (float)0.0009342883836810962;
        result[1] += (float)0.003114294612270321;
        result[2] += (float)0.002491435689816257;
        result[3] += (float)0.9928371223917782;
        result[4] += (float)0;
        result[5] += (float)0.0006228589224540642;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9895287958115183;
        result[1] += (float)0;
        result[2] += (float)0.010471204188481676;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += (float)0.9993836038627492;
        result[1] += (float)0;
        result[2] += (float)0.0005650297924799672;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)5.13663447709061e-05;
      } else {
        result[0] += (float)0.5124757416135294;
        result[1] += (float)0.003326864430274467;
        result[2] += (float)0.005960632104241753;
        result[3] += (float)0.4775436650956474;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0006930967563071805;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
        result[0] += (float)0.9852231021827313;
        result[1] += (float)0;
        result[2] += (float)0.0026076878501062393;
        result[3] += (float)0.011396561715279118;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0007726482518833301;
      } else {
        result[0] += (float)0.3333333333333333;
        result[1] += (float)0;
        result[2] += (float)0.6666666666666666;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        result[0] += (float)0.004502476361999099;
        result[1] += (float)0.012156686177397569;
        result[2] += (float)0.00945520036019811;
        result[3] += (float)0.9738856371004052;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9888983774551665;
        result[1] += (float)0;
        result[2] += (float)0.011101622544833475;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        result[0] += (float)0.9829413162271323;
        result[1] += (float)0.0001900688999762414;
        result[2] += (float)0.0007127583749109052;
        result[3] += (float)0.015680684248039915;
        result[4] += (float)0.0002851033499643621;
        result[5] += (float)9.50344499881207e-05;
        result[6] += (float)9.50344499881207e-05;
      } else {
        result[0] += (float)0.041428571428571426;
        result[1] += (float)0;
        result[2] += (float)0.022857142857142857;
        result[3] += (float)0;
        result[4] += (float)0.9357142857142857;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += (float)0.43334238392614716;
        result[1] += (float)0.0013575889220743959;
        result[2] += (float)0.007195221286994298;
        result[3] += (float)0.5513168612544121;
        result[4] += (float)0.005973391257127342;
        result[5] += (float)0.0005430355688297583;
        result[6] += (float)0.00027151778441487917;
      } else {
        result[0] += (float)0.9858086881161304;
        result[1] += (float)0;
        result[2] += (float)0.0016249593760155996;
        result[3] += (float)0.011699707507312317;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0008666450005416531;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)4918.5) ) ) {
        result[0] += (float)0.9996166526105957;
        result[1] += (float)0;
        result[2] += (float)0.0003450126504638503;
        result[3] += (float)0;
        result[4] += (float)3.833473894042782e-05;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.3333333333333333;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.6666666666666666;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += (float)0.4806919987642879;
        result[1] += (float)0.003398208217485326;
        result[2] += (float)0.006950880444856348;
        result[3] += (float)0.4910410874266296;
        result[4] += (float)0.01745443311708372;
        result[5] += (float)0.00030892801977139327;
        result[6] += (float)0.00015446400988569664;
      } else {
        result[0] += (float)0.9669054087428995;
        result[1] += (float)0;
        result[2] += (float)0.003951592985922451;
        result[3] += (float)0.027661150901457154;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.001481847369720919;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        result[0] += (float)0.23588913615213433;
        result[1] += (float)0.0028322880841594174;
        result[2] += (float)0.011126846044911997;
        result[3] += (float)0.6237102973902489;
        result[4] += (float)0.12563220716164272;
        result[5] += (float)0.0008092251669026907;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.17857142857142858;
        result[4] += (float)0.8214285714285714;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)102) ) ) {
        result[0] += (float)0.01098901098901099;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.989010989010989;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.003667481662591687;
        result[1] += (float)0.018337408312958436;
        result[2] += (float)0;
        result[3] += (float)0.0012224938875305623;
        result[4] += (float)0.9767726161369193;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        result[0] += (float)0.004878048780487805;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.9951219512195122;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.2010968921389397;
        result[1] += (float)0.000261164794985636;
        result[2] += (float)0.004962131104727084;
        result[3] += (float)0.7918516583964482;
        result[4] += (float)0;
        result[5] += (float)0.0018281535648994518;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.13646788990825687;
        result[4] += (float)0.8635321100917431;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.014942528735632184;
        result[2] += (float)0;
        result[3] += (float)0.0011494252873563218;
        result[4] += (float)0.9839080459770115;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
        result[0] += (float)0.6225806451612903;
        result[1] += (float)0.0032258064516129032;
        result[2] += (float)0;
        result[3] += (float)0.3741935483870968;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.995263081183501;
        result[1] += (float)0.0008380702521498325;
        result[2] += (float)0.002368459408249527;
        result[3] += (float)0.001311762133799738;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0002186270222999563;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
        result[0] += (float)0.20990806945863125;
        result[1] += (float)0;
        result[2] += (float)0.005362614913176711;
        result[3] += (float)0.7842185903983657;
        result[4] += (float)0;
        result[5] += (float)0.0005107252298263534;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9937609670501072;
        result[1] += (float)0;
        result[2] += (float)0.004679274712419575;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0015597582374731916;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.9694539900725467;
        result[4] += (float)0.030546009927453228;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)26.5) ) ) {
        result[0] += (float)0.9565217391304348;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.043478260869565216;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.003748438150770512;
        result[2] += (float)0.007080383173677634;
        result[3] += (float)0.0008329862557267805;
        result[4] += (float)0.9875052061640983;
        result[5] += (float)0.0008329862557267805;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9988183966551536;
        result[1] += (float)0;
        result[2] += (float)0.0009998182148700237;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00018178512997636792;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += (float)0.8518953550453817;
        result[1] += (float)0.0020288307528029898;
        result[2] += (float)0.008328884143085958;
        result[3] += (float)0.13657234383342232;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0011745862253069942;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.00035842293906810036;
        result[2] += (float)0.005376344086021506;
        result[3] += (float)0.9942652329749104;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)4979) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
        result[0] += (float)0.9991506228765572;
        result[1] += (float)0;
        result[2] += (float)0.0008493771234428086;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)245) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
        result[0] += (float)0.5896383688125161;
        result[1] += (float)0.003847140292382662;
        result[2] += (float)0.0005129520389843549;
        result[3] += (float)0.38009746088740703;
        result[4] += (float)0.02564760194921775;
        result[5] += (float)0;
        result[6] += (float)0.00025647601949217746;
      } else {
        result[0] += (float)0.3262786596119929;
        result[1] += (float)0;
        result[2] += (float)0.014814814814814815;
        result[3] += (float)0.4585537918871252;
        result[4] += (float)0.19788359788359788;
        result[5] += (float)0.0007054673721340388;
        result[6] += (float)0.001763668430335097;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += (float)0.5812340270171595;
        result[1] += (float)0.0032858707557502738;
        result[2] += (float)0.007667031763417305;
        result[3] += (float)0.24558841426311306;
        result[4] += (float)0.16112936594864305;
        result[5] += (float)0.0008518924181574784;
        result[6] += (float)0.00024339783375927954;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.0004389815627743635;
        result[3] += (float)0.7954345917471466;
        result[4] += (float)0.20412642669007902;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)10.5) ) ) {
        result[0] += (float)0.0047169811320754715;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.9952830188679245;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.1641554321966693;
        result[1] += (float)0.0002643404705260375;
        result[2] += (float)0;
        result[3] += (float)0.8355802273328047;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
        result[0] += (float)0;
        result[1] += (float)0.007994670219853431;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.9920053297801465;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.11778290993071594;
        result[1] += (float)0;
        result[2] += (float)0.03002309468822171;
        result[3] += (float)0;
        result[4] += (float)0.848729792147806;
        result[5] += (float)0.003464203233256351;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += (float)0.9972577696526508;
        result[1] += (float)0;
        result[2] += (float)0.002742230347349177;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9996589504199173;
        result[1] += (float)0;
        result[2] += (float)0.00034104958008270453;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += (float)0.5346728059160039;
        result[1] += (float)0.0032091530626482487;
        result[2] += (float)0.008929817217803823;
        result[3] += (float)0.45263011022743127;
        result[4] += (float)0;
        result[5] += (float)0.00013952839402818474;
        result[6] += (float)0.0004185851820845542;
      } else {
        result[0] += (float)0.9699491447064262;
        result[1] += (float)0;
        result[2] += (float)0.006472491909385114;
        result[3] += (float)0.0212667591308368;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.002311604253351826;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)-16) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        result[0] += (float)0.9960649286768323;
        result[1] += (float)0;
        result[2] += (float)0.002459419576979833;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0014756517461878996;
      } else {
        result[0] += (float)0.9996288047512992;
        result[1] += (float)0;
        result[2] += (float)0.0003711952487008166;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
        result[0] += (float)0.01928846978139734;
        result[1] += (float)0.005572224603514788;
        result[2] += (float)0.01178739819974282;
        result[3] += (float)0.7936133733390485;
        result[4] += (float)0.1695242177453922;
        result[5] += (float)0.0002143163309044149;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.011692933401118455;
        result[2] += (float)0;
        result[3] += (float)0.1392984239959329;
        result[4] += (float)0.8490086426029486;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
        result[0] += (float)0.6281138790035588;
        result[1] += (float)0;
        result[2] += (float)0.0042057586541572305;
        result[3] += (float)0.3667098026528631;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0009705596894208993;
      } else {
        result[0] += (float)0.9213993639254884;
        result[1] += (float)0.00045433893684688776;
        result[2] += (float)0.004543389368468878;
        result[3] += (float)0.07337573830077238;
        result[4] += (float)0;
        result[5] += (float)0.00022716946842344388;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += (float)0.9927184466019418;
        result[1] += (float)0;
        result[2] += (float)0.007281553398058253;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9994585186617676;
        result[1] += (float)0;
        result[2] += (float)0.00046412686134210016;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)7.735447689035002e-05;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        result[0] += (float)0.01948051948051948;
        result[1] += (float)0.0033766233766233766;
        result[2] += (float)0.015324675324675324;
        result[3] += (float)0.7051948051948052;
        result[4] += (float)0.25506493506493505;
        result[5] += (float)0.0015584415584415584;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.7429509463113171;
        result[1] += (float)0;
        result[2] += (float)0.0034762456546929316;
        result[3] += (float)0.2522209347238316;
        result[4] += (float)0;
        result[5] += (float)0.00019312475859405175;
        result[6] += (float)0.0011587485515643105;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += (float)0.11948404616429056;
        result[1] += (float)0.015614392396469789;
        result[2] += (float)0;
        result[3] += (float)0.6849966055668704;
        result[4] += (float)0.17990495587236932;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.05490956072351421;
        result[1] += (float)0;
        result[2] += (float)0.004521963824289405;
        result[3] += (float)0.1640826873385013;
        result[4] += (float)0.7764857881136951;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
        result[0] += (float)0.13693940431359122;
        result[1] += (float)0.00034234851078397807;
        result[2] += (float)0.004108182129407737;
        result[3] += (float)0.7723382403286546;
        result[4] += (float)0.08558712769599452;
        result[5] += (float)0.0006846970215679561;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9914208735110607;
        result[1] += (float)0.0005317640385706183;
        result[2] += (float)0.001807997731140102;
        result[3] += (float)0.006168462847419172;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)7.090187180941577e-05;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        result[0] += (float)0.38472998137802605;
        result[1] += (float)0;
        result[2] += (float)0.00484171322160149;
        result[3] += (float)0.4877094972067039;
        result[4] += (float)0.12271880819366852;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9008455034588779;
        result[1] += (float)0;
        result[2] += (float)0.0033307712016397645;
        result[3] += (float)0.09018703561363055;
        result[4] += (float)0.00256213169356905;
        result[5] += (float)0.001281065846784525;
        result[6] += (float)0.0017934921854983348;
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)110) ) ) {
        result[0] += (float)0;
        result[1] += (float)0.10810810810810811;
        result[2] += (float)0;
        result[3] += (float)0.8918918918918919;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.015918958031837915;
        result[2] += (float)0;
        result[3] += (float)0.010130246020260492;
        result[4] += (float)0.9739507959479016;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)11) ) ) {
        result[0] += (float)0.09006211180124224;
        result[1] += (float)0.001774622892635315;
        result[2] += (float)0.0048802129547471165;
        result[3] += (float)0.5354924578527063;
        result[4] += (float)0.367790594498669;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)-305.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9993869496915591;
        result[1] += (float)0;
        result[2] += (float)0.0005747346641633779;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)3.8315644277558524e-05;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += (float)0.7401937729282287;
        result[1] += (float)0.0010347098109302981;
        result[2] += (float)0.006020129809049007;
        result[3] += (float)0.225566738782805;
        result[4] += (float)0.025773680744991066;
        result[5] += (float)0.0004703226413319537;
        result[6] += (float)0.0009406452826639074;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.0010793308148947653;
        result[2] += (float)0.00836481381543443;
        result[3] += (float)0.803291958985429;
        result[4] += (float)0.1867242309767944;
        result[5] += (float)0.0005396654074473826;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)85) ) ) {
        result[0] += (float)0.2916666666666667;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.7083333333333334;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.0020876826722338203;
        result[1] += (float)0.04175365344467641;
        result[2] += (float)0;
        result[3] += (float)0.162839248434238;
        result[4] += (float)0.7933194154488518;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        result[0] += (float)0.11756569847856155;
        result[1] += (float)0.019363762102351315;
        result[2] += (float)0.011065006915629323;
        result[3] += (float)0.8520055325034578;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.0033003300330033004;
        result[2] += (float)0;
        result[3] += (float)0.040429042904290426;
        result[4] += (float)0.9562706270627063;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-7.5) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)912) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)83) ) ) {
        result[0] += (float)0.9996195838247042;
        result[1] += (float)0;
        result[2] += (float)0.00038041617529577357;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        result[0] += (float)0.014928123848138592;
        result[1] += (float)0.005897530409141172;
        result[2] += (float)0.0055289347585698485;
        result[3] += (float)0.6354589015849613;
        result[4] += (float)0.33763361592333213;
        result[5] += (float)0.0005528934758569849;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9795686719636776;
        result[1] += (float)0.0001261193088661874;
        result[2] += (float)0.006053726825576996;
        result[3] += (float)0.012107453651153992;
        result[4] += (float)0;
        result[5] += (float)0.0001261193088661874;
        result[6] += (float)0.0020179089418589985;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.005498059508408797;
        result[3] += (float)0.9945019404915912;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.01455604075691412;
        result[3] += (float)0;
        result[4] += (float)0.9737991266375546;
        result[5] += (float)0.011644832605531296;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += (float)0.046120058565153735;
        result[1] += (float)0;
        result[2] += (float)0.010980966325036604;
        result[3] += (float)0.739385065885798;
        result[4] += (float)0.2020497803806735;
        result[5] += (float)0.0014641288433382138;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.12737478411053543;
        result[1] += (float)0;
        result[2] += (float)0.004749568221070813;
        result[3] += (float)0.5746977547495683;
        result[4] += (float)0.2914507772020726;
        result[5] += (float)0.0017271157167530226;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += (float)0.886029134274285;
        result[1] += (float)0.0007170352479432411;
        result[2] += (float)0.002453015321911088;
        result[3] += (float)0.11049890557777947;
        result[4] += (float)0;
        result[5] += (float)7.547739452034117e-05;
        result[6] += (float)0.0002264321835610235;
      } else {
        result[0] += (float)0.9878250706145905;
        result[1] += (float)0;
        result[2] += (float)0.0010713937859160418;
        result[3] += (float)0.010519138988993863;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0005843966104996591;
      }
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)111.5) ) ) {
        result[0] += (float)0.20780711825487944;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.5614236509758898;
        result[4] += (float)0.23076923076923078;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.010380622837370242;
        result[1] += (float)0.04498269896193772;
        result[2] += (float)0;
        result[3] += (float)0.17647058823529413;
        result[4] += (float)0.7681660899653979;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += (float)0.0931899641577061;
        result[1] += (float)0.02031063321385902;
        result[2] += (float)0;
        result[3] += (float)0.6391875746714456;
        result[4] += (float)0.24731182795698925;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.01231060606060606;
        result[1] += (float)0;
        result[2] += (float)0.010416666666666666;
        result[3] += (float)0.14015151515151514;
        result[4] += (float)0.8371212121212122;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)-174.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9993539315167408;
        result[1] += (float)0;
        result[2] += (float)0.000570060426405199;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)7.600805685402653e-05;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += (float)0.7372671987837325;
        result[1] += (float)0.0012352717597871534;
        result[2] += (float)0.007696693272519956;
        result[3] += (float)0.22358418852147477;
        result[4] += (float)0.02888635499809959;
        result[5] += (float)0.0002850627137970354;
        result[6] += (float)0.00104522995058913;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.004338394793926247;
        result[3] += (float)0.8129067245119306;
        result[4] += (float)0.1822125813449024;
        result[5] += (float)0.0005422993492407809;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
        result[0] += (float)0.12759856630824373;
        result[1] += (float)0.015770609318996417;
        result[2] += (float)0.008602150537634409;
        result[3] += (float)0.8480286738351255;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)1753.5) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += (float)0.9903147699757869;
        result[1] += (float)0;
        result[2] += (float)0.009685230024213076;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9994981276300043;
        result[1] += (float)0;
        result[2] += (float)0.00046326680307300316;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)3.860556692275027e-05;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        result[0] += (float)0.014692865993981232;
        result[1] += (float)0.00442556204637989;
        result[2] += (float)0.01044432642945654;
        result[3] += (float)0.6919808815719596;
        result[4] += (float)0.2777482740308019;
        result[5] += (float)0.0007080899274207823;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.016913319238900635;
        result[2] += (float)0;
        result[3] += (float)0.09619450317124736;
        result[4] += (float)0.8868921775898521;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += (float)0.9801538079880925;
        result[1] += (float)0.00012403870007442324;
        result[2] += (float)0.007194244604316549;
        result[3] += (float)0.011039444306623668;
        result[4] += (float)0;
        result[5] += (float)0.00012403870007442324;
        result[6] += (float)0.0013644257008186556;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.000397456279809221;
        result[3] += (float)0.9996025437201908;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
        result[0] += (float)0.893612651468474;
        result[1] += (float)0.0024645717806531116;
        result[2] += (float)0.003286095707537482;
        result[3] += (float)0.10002053809817212;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0006161429451632779;
      } else {
        result[0] += (float)0.9871078104138852;
        result[1] += (float)0.00012516688918558078;
        result[2] += (float)0.0005006675567423231;
        result[3] += (float)0.011932576769025368;
        result[4] += (float)0.00016688918558077436;
        result[5] += (float)0.00012516688918558078;
        result[6] += (float)4.172229639519359e-05;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.17755102040816326;
        result[1] += (float)0.003498542274052478;
        result[2] += (float)0.01370262390670554;
        result[3] += (float)0.8052478134110788;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.3938478958294018;
        result[1] += (float)0;
        result[2] += (float)0.009435742592942064;
        result[3] += (float)0.5936969239479147;
        result[4] += (float)0.0018871485185884128;
        result[5] += (float)0.0005661445555765239;
        result[6] += (float)0.0005661445555765239;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)1;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        result[0] += (float)0.0009296560272699102;
        result[1] += (float)0.00030988534242330345;
        result[2] += (float)0.0018593120545398205;
        result[3] += (float)0.9519677719243881;
        result[4] += (float)0.04369383328168578;
        result[5] += (float)0.0012395413696932138;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.5092460881934566;
        result[1] += (float)0;
        result[2] += (float)0.00995732574679943;
        result[3] += (float)0;
        result[4] += (float)0.48079658605974396;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.12318840579710146;
        result[2] += (float)0;
        result[3] += (float)0.8768115942028986;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += (float)0.9992237230243751;
        result[1] += (float)0.00010350359674998706;
        result[2] += (float)0.0004657661853749418;
        result[3] += (float)0.00020700719349997412;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9032258064516129;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.0967741935483871;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += (float)0.5484676189155457;
        result[1] += (float)0.0024961863819165163;
        result[2] += (float)0.007765913188184718;
        result[3] += (float)0.44071557342948275;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.000554708084870337;
      } else {
        result[0] += (float)0.9841972823351787;
        result[1] += (float)0;
        result[2] += (float)0.004227478610971313;
        result[3] += (float)0.010870659285354807;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.000704579768495219;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
      result[0] += (float)1;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)0;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-3.5) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9983938968078699;
        result[1] += (float)0;
        result[2] += (float)0.0014053402931138326;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0002007628990162618;
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        result[0] += (float)0.8383245649534602;
        result[1] += (float)0.0026305139619587216;
        result[2] += (float)0.0018211250505868071;
        result[3] += (float)0.15621205989477946;
        result[4] += (float)0;
        result[5] += (float)0.00040469445568595716;
        result[6] += (float)0.0006070416835289357;
      } else {
        result[0] += (float)0.16139828932688735;
        result[1] += (float)0.0033469691335068804;
        result[2] += (float)0.008553365563406473;
        result[3] += (float)0.7910003718854594;
        result[4] += (float)0.034957233172182973;
        result[5] += (float)0.0007437709185570845;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        result[0] += (float)0.12924993511549443;
        result[1] += (float)0;
        result[2] += (float)0.007526602647287828;
        result[3] += (float)0.6893329872826369;
        result[4] += (float)0.17311186088762004;
        result[5] += (float)0.0007786140669608098;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.507155635062612;
        result[1] += (float)0.002862254025044723;
        result[2] += (float)0.010554561717352418;
        result[3] += (float)0.18264758497316638;
        result[4] += (float)0.2953488372093024;
        result[5] += (float)0.0005366726296958856;
        result[6] += (float)0.000894454382826476;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9994302859964298;
        result[1] += (float)0;
        result[2] += (float)0.0004937521364275134;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)7.596186714269437e-05;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += (float)0.7380589914367269;
        result[1] += (float)0.0012369172216936252;
        result[2] += (float)0.006184586108468126;
        result[3] += (float)0.22321598477640342;
        result[4] += (float)0.03016175071360609;
        result[5] += (float)0.000285442435775452;
        result[6] += (float)0.0008563273073263558;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.009013930620049166;
        result[3] += (float)0.7978694345807157;
        result[4] += (float)0.19229718656104888;
        result[5] += (float)0.0008194482381862879;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0.008333333333333333;
        result[2] += (float)0.000925925925925926;
        result[3] += (float)0.9907407407407407;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9657794676806084;
        result[1] += (float)0;
        result[2] += (float)0.034220532319391636;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.6071428571428571;
        result[4] += (float)0.39285714285714285;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.0012970168612191958;
        result[1] += (float)0.007782101167315175;
        result[2] += (float)0;
        result[3] += (float)0.05252918287937743;
        result[4] += (float)0.9383916990920882;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += (float)0.14837017609591607;
        result[1] += (float)0.0003746721618583739;
        result[2] += (float)0;
        result[3] += (float)0.8478831022855002;
        result[4] += (float)0.0011240164855751218;
        result[5] += (float)0.0022480329711502436;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.0010214504596527069;
        result[1] += (float)0;
        result[2] += (float)0.020429009193054137;
        result[3] += (float)0;
        result[4] += (float)0.9765066394279878;
        result[5] += (float)0.0020429009193054137;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        result[0] += (float)0.9957290132547865;
        result[1] += (float)9.818360333824252e-05;
        result[2] += (float)0.0003436426116838488;
        result[3] += (float)0.003780068728522337;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)4.909180166912126e-05;
      } else {
        result[0] += (float)0.8102954614681696;
        result[1] += (float)0.0005482790130977765;
        result[2] += (float)0.003655193420651844;
        result[3] += (float)0.1844654279622297;
        result[4] += (float)0;
        result[5] += (float)0.00018275967103259218;
        result[6] += (float)0.0008528784648187635;
      }
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)111.5) ) ) {
        result[0] += (float)0.19217877094972066;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.5798882681564246;
        result[4] += (float)0.22793296089385476;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.00847457627118644;
        result[1] += (float)0.025423728813559324;
        result[2] += (float)0;
        result[3] += (float)0.211864406779661;
        result[4] += (float)0.7542372881355932;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)8.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.1187648456057007;
        result[1] += (float)0.014251781472684086;
        result[2] += (float)0.009501187648456057;
        result[3] += (float)0.8574821852731591;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
        result[0] += (float)0.13059829059829062;
        result[1] += (float)0.0006837606837606839;
        result[2] += (float)0.004444444444444445;
        result[3] += (float)0.7593162393162394;
        result[4] += (float)0.10427350427350429;
        result[5] += (float)0.0006837606837606839;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9907266484975047;
        result[1] += (float)0.0004955225993699784;
        result[2] += (float)0.0017697235691784942;
        result[3] += (float)0.006866527448412558;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00014157788553427955;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        result[0] += (float)0.4562160135008438;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.5437839864991562;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.8112388250319285;
        result[1] += (float)0;
        result[2] += (float)0.013026819923371647;
        result[3] += (float)0.001277139208173691;
        result[4] += (float)0.1713920817369093;
        result[5] += (float)0;
        result[6] += (float)0.0030651340996168583;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-8.5) ) ) {
        result[0] += (float)0.26303317535545023;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.7369668246445498;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.13527851458885942;
        result[1] += (float)0.01856763925729443;
        result[2] += (float)0.010610079575596816;
        result[3] += (float)0.8355437665782494;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9910213243546577;
        result[1] += (float)0;
        result[2] += (float)0.008978675645342313;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
        result[0] += (float)0.9993250084373946;
        result[1] += (float)0;
        result[2] += (float)0.0006749915626054674;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        result[0] += (float)0.015513126491646777;
        result[1] += (float)0.004943743607228094;
        result[2] += (float)0.008864643709512444;
        result[3] += (float)0.6743948175929083;
        result[4] += (float)0.29526082509376067;
        result[5] += (float)0.0010228435049437436;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
        result[0] += (float)0.6194577352472089;
        result[1] += (float)0;
        result[2] += (float)0.0035087719298245615;
        result[3] += (float)0.37575757575757573;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0012759170653907496;
      } else {
        result[0] += (float)0.9092925260589931;
        result[1] += (float)0.00044355732978487467;
        result[2] += (float)0.006431581281880683;
        result[3] += (float)0.08316699933466401;
        result[4] += (float)0;
        result[5] += (float)0.00022177866489243733;
        result[6] += (float)0.00044355732978487467;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)14) ) ) {
        result[0] += (float)0.5;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.5;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.9975083056478405;
        result[5] += (float)0.0024916943521594683;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        result[0] += (float)0.0715292459478506;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.9281183932346723;
        result[4] += (float)0;
        result[5] += (float)0.00035236081747709656;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.5120481927710844;
        result[1] += (float)0.06626506024096386;
        result[2] += (float)0.06927710843373494;
        result[3] += (float)0.34036144578313254;
        result[4] += (float)0;
        result[5] += (float)0.012048192771084338;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)53) ) ) {
        result[0] += (float)0.9962508033992716;
        result[1] += (float)0.00039277297721916735;
        result[2] += (float)0.0022852245947297006;
        result[3] += (float)0.0009997857601942441;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)7.141326858530314e-05;
      } else {
        result[0] += (float)0.17424242424242425;
        result[1] += (float)0.01893939393939394;
        result[2] += (float)0;
        result[3] += (float)0.8068181818181818;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        result[0] += (float)0.449402670414617;
        result[1] += (float)0;
        result[2] += (float)0.0021082220660576245;
        result[3] += (float)0.5484891075193253;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9874635568513119;
        result[1] += (float)0;
        result[2] += (float)0.009329446064139942;
        result[3] += (float)0.0008746355685131195;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0023323615160349854;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        result[0] += (float)0.007201152184349496;
        result[1] += (float)0.01344215074411906;
        result[2] += (float)0.011041766682669226;
        result[3] += (float)0.9683149303888622;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9966517857142857;
        result[1] += (float)0;
        result[2] += (float)0.0033482142857142855;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        result[0] += (float)0.12337998963193365;
        result[1] += (float)0.0005184033177812339;
        result[2] += (float)0.008294453084499743;
        result[3] += (float)0.7833074131674443;
        result[4] += (float)0.08294453084499742;
        result[5] += (float)0.0015552099533437016;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9067328918322296;
        result[1] += (float)0.0004139072847682119;
        result[2] += (float)0.0020971302428256073;
        result[3] += (float)0.09045253863134659;
        result[4] += (float)0;
        result[5] += (float)2.759381898454746e-05;
        result[6] += (float)0.0002759381898454746;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.75;
        result[1] += (float)0;
        result[2] += (float)0.25;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
        result[0] += (float)0.14824797843665768;
        result[1] += (float)0.005840071877807727;
        result[2] += (float)0;
        result[3] += (float)0.6208445642407907;
        result[4] += (float)0.22371967654986524;
        result[5] += (float)0.0013477088948787063;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9947004608294931;
        result[1] += (float)0;
        result[2] += (float)0.001036866359447005;
        result[3] += (float)0.004262672811059909;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        result[0] += (float)0.32887402452619846;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.6711259754738016;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.8140569395017794;
        result[1] += (float)0;
        result[2] += (float)0.030249110320284697;
        result[3] += (float)0;
        result[4] += (float)0.14412811387900357;
        result[5] += (float)0.0035587188612099642;
        result[6] += (float)0.00800711743772242;
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)8.5) ) ) {
        result[0] += (float)0.20826999087868653;
        result[1] += (float)0.005168744299179082;
        result[2] += (float)0.007905138339920948;
        result[3] += (float)0.390392216479173;
        result[4] += (float)0.38826391000304045;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.18181818181818182;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.8181818181818182;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        result[0] += (float)0.08655126498002665;
        result[1] += (float)0.0013315579227696408;
        result[2] += (float)0.005326231691078563;
        result[3] += (float)0.5219707057256991;
        result[4] += (float)0.3834886817576565;
        result[5] += (float)0.0013315579227696408;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.920454087999678;
        result[1] += (float)0.0005233283684231714;
        result[2] += (float)0.00173100921863049;
        result[3] += (float)0.07717080632824766;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00012076808502073185;
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 50;
  result[1] /= 50;
  result[2] /= 50;
  result[3] /= 50;
  result[4] /= 50;
  result[5] /= 50;
  result[6] /= 50;
  
  // Apply base_scores
  result[0] += (float)0;
  result[1] += (float)0;
  result[2] += (float)0;
  result[3] += (float)0;
  result[4] += (float)0;
  result[5] += (float)0;
  result[6] += (float)0;
  
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
    

    FILE* file = fopen("./../../codegen_small/codegen_small/dataset_148/split_2/test_data.csv", "r");
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
        
    }
    

    return 0;
}
