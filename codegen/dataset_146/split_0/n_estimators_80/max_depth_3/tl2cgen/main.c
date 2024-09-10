
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
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        result[0] += 0.0036363636363636364;
        result[1] += 0.09454545454545454;
        result[2] += 0;
        result[3] += 0.007272727272727273;
        result[4] += 0.8290909090909091;
        result[5] += 0.06545454545454546;
      } else {
        result[0] += 0.028764805414551606;
        result[1] += 0.005922165820642978;
        result[2] += 0.03637901861252115;
        result[3] += 0.13451776649746192;
        result[4] += 0.05245346869712352;
        result[5] += 0.7419627749576988;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.009316770186335404;
        result[1] += 0.7888198757763976;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.1972049689440994;
        result[5] += 0.004658385093167702;
      } else {
        result[0] += 0.755586592178771;
        result[1] += 0.014664804469273743;
        result[2] += 0.025139664804469275;
        result[3] += 0.05726256983240224;
        result[4] += 0.08798882681564246;
        result[5] += 0.05935754189944134;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.06965174129353234;
        result[3] += 0.6318407960199005;
        result[4] += 0.03482587064676617;
        result[5] += 0.263681592039801;
      } else {
        result[0] += 0.026143790849673203;
        result[1] += 0.032679738562091505;
        result[2] += 0.3464052287581699;
        result[3] += 0.16339869281045752;
        result[4] += 0.12418300653594772;
        result[5] += 0.30718954248366015;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        result[0] += 0.05120481927710843;
        result[1] += 0;
        result[2] += 0.7650602409638554;
        result[3] += 0.16265060240963855;
        result[4] += 0;
        result[5] += 0.02108433734939759;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9637561779242174;
        result[3] += 0.032948929159802305;
        result[4] += 0;
        result[5] += 0.0032948929159802307;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        result[0] += 0.12121212121212122;
        result[1] += 0.012121212121212121;
        result[2] += 0.012121212121212121;
        result[3] += 0;
        result[4] += 0.7484848484848485;
        result[5] += 0.10606060606060606;
      } else {
        result[0] += 0;
        result[1] += 0.010978956999085089;
        result[2] += 0.004574565416285454;
        result[3] += 0.15462031107044832;
        result[4] += 0.04300091491308326;
        result[5] += 0.786825251601098;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)55.5) ) ) {
        result[0] += 0;
        result[1] += 0.9337899543378996;
        result[2] += 0;
        result[3] += 0.0045662100456621;
        result[4] += 0.06164383561643835;
        result[5] += 0;
      } else {
        result[0] += 0.6679797411367473;
        result[1] += 0.028137310073157007;
        result[2] += 0.04727068092290377;
        result[3] += 0.07765897580191333;
        result[4] += 0.10579628587507034;
        result[5] += 0.07315700619020822;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        result[0] += 0;
        result[1] += 0.021164021164021163;
        result[2] += 0.26455026455026454;
        result[3] += 0.4444444444444444;
        result[4] += 0.05291005291005291;
        result[5] += 0.21693121693121692;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7872340425531915;
        result[3] += 0.19148936170212766;
        result[4] += 0;
        result[5] += 0.02127659574468085;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
        result[0] += 0.03021978021978022;
        result[1] += 0.005494505494505495;
        result[2] += 0.728021978021978;
        result[3] += 0.1813186813186813;
        result[4] += 0.008241758241758242;
        result[5] += 0.046703296703296704;
      } else {
        result[0] += 0.003401360544217687;
        result[1] += 0;
        result[2] += 0.9710884353741497;
        result[3] += 0.022108843537414966;
        result[4] += 0;
        result[5] += 0.003401360544217687;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        result[0] += 0.13855421686746988;
        result[1] += 0.0030120481927710845;
        result[2] += 0;
        result[3] += 0.006024096385542169;
        result[4] += 0.7409638554216867;
        result[5] += 0.11144578313253012;
      } else {
        result[0] += 0.0025167785234899327;
        result[1] += 0;
        result[2] += 0.006711409395973154;
        result[3] += 0.16023489932885907;
        result[4] += 0.05285234899328859;
        result[5] += 0.7776845637583892;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0;
        result[1] += 0.8476357267950964;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.15236427320490367;
        result[5] += 0;
      } else {
        result[0] += 0.6795881284070261;
        result[1] += 0.019987886129618413;
        result[2] += 0.05208964264082374;
        result[3] += 0.09145972138098123;
        result[4] += 0.07874015748031496;
        result[5] += 0.07813446396123562;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)80.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.14814814814814814;
        result[3] += 0.5555555555555556;
        result[4] += 0;
        result[5] += 0.2962962962962963;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5714285714285714;
        result[3] += 0.22857142857142856;
        result[4] += 0.05714285714285714;
        result[5] += 0.14285714285714285;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
        result[0] += 0.004629629629629629;
        result[1] += 0;
        result[2] += 0.7731481481481481;
        result[3] += 0.19907407407407407;
        result[4] += 0;
        result[5] += 0.023148148148148147;
      } else {
        result[0] += 0.02064516129032258;
        result[1] += 0;
        result[2] += 0.9341935483870968;
        result[3] += 0.04;
        result[4] += 0;
        result[5] += 0.005161290322580645;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        result[0] += 0.08797653958944282;
        result[1] += 0.0469208211143695;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7565982404692082;
        result[5] += 0.10850439882697947;
      } else {
        result[0] += 0;
        result[1] += 0.0216998191681736;
        result[2] += 0.012658227848101266;
        result[3] += 0.15822784810126583;
        result[4] += 0.048824593128390596;
        result[5] += 0.7585895117540687;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0.9714285714285714;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.02857142857142857;
        result[5] += 0;
      } else {
        result[0] += 0.5961844197138315;
        result[1] += 0.025437201907790145;
        result[2] += 0.06253312135665076;
        result[3] += 0.08532061473237944;
        result[4] += 0.1282458929517753;
        result[5] += 0.10227874933757286;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)90) ) ) {
        result[0] += 0.047619047619047616;
        result[1] += 0.11904761904761904;
        result[2] += 0.07142857142857142;
        result[3] += 0;
        result[4] += 0.2619047619047619;
        result[5] += 0.5;
      } else {
        result[0] += 0.0392156862745098;
        result[1] += 0.0392156862745098;
        result[2] += 0.38562091503267976;
        result[3] += 0.3464052287581699;
        result[4] += 0.032679738562091505;
        result[5] += 0.1568627450980392;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)86.5) ) ) {
        result[0] += 0.025889967637540454;
        result[1] += 0;
        result[2] += 0.7928802588996764;
        result[3] += 0.1650485436893204;
        result[4] += 0;
        result[5] += 0.016181229773462782;
      } else {
        result[0] += 0.005628517823639775;
        result[1] += 0;
        result[2] += 0.9549718574108818;
        result[3] += 0.0375234521575985;
        result[4] += 0;
        result[5] += 0.001876172607879925;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        result[0] += 0.25669642857142855;
        result[1] += 0.008928571428571428;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.6607142857142857;
        result[5] += 0.07366071428571429;
      } else {
        result[0] += 0.0019455252918287938;
        result[1] += 0.024319066147859923;
        result[2] += 0.02237354085603113;
        result[3] += 0.0933852140077821;
        result[4] += 0.053501945525291826;
        result[5] += 0.8044747081712063;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)104.5) ) ) {
        result[0] += 0.5841532884515795;
        result[1] += 0.038322112894873125;
        result[2] += 0.046090108751942;
        result[3] += 0.12894873122734335;
        result[4] += 0.09684101501812532;
        result[5] += 0.10564474365613671;
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
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)105.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
        result[0] += 0;
        result[1] += 0.022727272727272728;
        result[2] += 0;
        result[3] += 0.4318181818181818;
        result[4] += 0;
        result[5] += 0.5454545454545454;
      } else {
        result[0] += 0.003164556962025317;
        result[1] += 0.009493670886075951;
        result[2] += 0.6424050632911393;
        result[3] += 0.2436708860759494;
        result[4] += 0.02215189873417722;
        result[5] += 0.07911392405063293;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)61) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.25;
        result[3] += 0;
        result[4] += 0.25;
        result[5] += 0.5;
      } else {
        result[0] += 0.007309941520467837;
        result[1] += 0;
        result[2] += 0.9371345029239767;
        result[3] += 0.052631578947368425;
        result[4] += 0;
        result[5] += 0.0029239766081871348;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        result[0] += 0.006802721088435374;
        result[1] += 0.017006802721088437;
        result[2] += 0;
        result[3] += 0.034013605442176874;
        result[4] += 0.8401360544217688;
        result[5] += 0.10204081632653061;
      } else {
        result[0] += 0.03882725832012678;
        result[1] += 0.003961965134706815;
        result[2] += 0.009508716323296355;
        result[3] += 0.1450079239302694;
        result[4] += 0.060221870047543584;
        result[5] += 0.742472266244057;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)59.5) ) ) {
        result[0] += 0;
        result[1] += 0.8949416342412452;
        result[2] += 0.0019455252918287938;
        result[3] += 0.0019455252918287938;
        result[4] += 0.10116731517509728;
        result[5] += 0;
      } else {
        result[0] += 0.6784810126582278;
        result[1] += 0.03481012658227848;
        result[2] += 0.029746835443037974;
        result[3] += 0.07974683544303797;
        result[4] += 0.10759493670886076;
        result[5] += 0.06962025316455696;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.08333333333333333;
        result[3] += 0.75;
        result[4] += 0;
        result[5] += 0.16666666666666666;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.40740740740740744;
        result[3] += 0.38518518518518524;
        result[4] += 0;
        result[5] += 0.20740740740740743;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7066666666666667;
        result[3] += 0.24666666666666667;
        result[4] += 0;
        result[5] += 0.04666666666666667;
      } else {
        result[0] += 0.022864019253910954;
        result[1] += 0;
        result[2] += 0.9217809867629363;
        result[3] += 0.04813477737665464;
        result[4] += 0.004813477737665464;
        result[5] += 0.002406738868832732;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.01916932907348243;
        result[1] += 0.028753993610223644;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8849840255591055;
        result[5] += 0.06709265175718851;
      } else {
        result[0] += 0.04149026248941575;
        result[1] += 0.0059271803556308214;
        result[2] += 0.000846740050804403;
        result[3] += 0.15664690939881457;
        result[4] += 0.03048264182895851;
        result[5] += 0.7646062658763759;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)53.5) ) ) {
        result[0] += 0.006369426751592357;
        result[1] += 0.9426751592356688;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.04883227176220807;
        result[5] += 0.0021231422505307855;
      } else {
        result[0] += 0.6010899182561308;
        result[1] += 0.043596730245231606;
        result[2] += 0.08337874659400545;
        result[3] += 0.09591280653950954;
        result[4] += 0.10463215258855586;
        result[5] += 0.07138964577656676;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)60) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.125;
        result[3] += 0.3055555555555556;
        result[4] += 0.027777777777777776;
        result[5] += 0.5416666666666666;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
        result[0] += 0.07507507507507508;
        result[1] += 0.02702702702702703;
        result[2] += 0.6546546546546547;
        result[3] += 0.17417417417417416;
        result[4] += 0.009009009009009009;
        result[5] += 0.06006006006006006;
      } else {
        result[0] += 0.0016233766233766235;
        result[1] += 0;
        result[2] += 0.9448051948051948;
        result[3] += 0.05357142857142857;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.010135135135135136;
        result[1] += 0.02027027027027027;
        result[2] += 0.013513513513513514;
        result[3] += 0.013513513513513514;
        result[4] += 0.9087837837837838;
        result[5] += 0.033783783783783786;
      } else {
        result[0] += 0.05060240963855422;
        result[1] += 0.021686746987951807;
        result[2] += 0.01606425702811245;
        result[3] += 0.15502008032128514;
        result[4] += 0.05301204819277108;
        result[5] += 0.7036144578313253;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
        result[0] += 0.006944444444444444;
        result[1] += 0.8038194444444444;
        result[2] += 0;
        result[3] += 0.03125;
        result[4] += 0.1527777777777778;
        result[5] += 0.005208333333333333;
      } else {
        result[0] += 0.7221873035826525;
        result[1] += 0.018856065367693277;
        result[2] += 0.037083595223130116;
        result[3] += 0.0647391577624136;
        result[4] += 0.08736643620364552;
        result[5] += 0.06976744186046513;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.14705882352941177;
        result[3] += 0;
        result[4] += 0.058823529411764705;
        result[5] += 0.7941176470588235;
      } else {
        result[0] += 0;
        result[1] += 0.037037037037037035;
        result[2] += 0.16666666666666666;
        result[3] += 0.5370370370370371;
        result[4] += 0.037037037037037035;
        result[5] += 0.2222222222222222;
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
        result[0] += 0;
        result[1] += 0.02857142857142857;
        result[2] += 0.44285714285714284;
        result[3] += 0.32857142857142857;
        result[4] += 0.05714285714285714;
        result[5] += 0.14285714285714285;
      } else {
        result[0] += 0.012141280353200884;
        result[1] += 0.0011037527593818987;
        result[2] += 0.902869757174393;
        result[3] += 0.06291390728476823;
        result[4] += 0.0011037527593818987;
        result[5] += 0.019867549668874177;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)87.5) ) ) {
        result[0] += 0;
        result[1] += 0.25;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.5;
        result[5] += 0.25;
      } else {
        result[0] += 0;
        result[1] += 0.9934354485776805;
        result[2] += 0;
        result[3] += 0.002188183807439825;
        result[4] += 0.00437636761487965;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
        result[0] += 0.03495007132667618;
        result[1] += 0.017118402282453638;
        result[2] += 0.005706134094151213;
        result[3] += 0.11554921540656206;
        result[4] += 0.19614835948644793;
        result[5] += 0.630527817403709;
      } else {
        result[0] += 0.6515499425947188;
        result[1] += 0.03788748564867968;
        result[2] += 0.02525832376578645;
        result[3] += 0.08151549942594719;
        result[4] += 0.11595866819747416;
        result[5] += 0.0878300803673938;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)71.5) ) ) {
        result[0] += 0;
        result[1] += 0.14634146341463414;
        result[2] += 0.13414634146341464;
        result[3] += 0.13414634146341464;
        result[4] += 0.10975609756097561;
        result[5] += 0.47560975609756095;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.1746031746031746;
        result[3] += 0.6190476190476191;
        result[4] += 0.007936507936507936;
        result[5] += 0.1984126984126984;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)96.5) ) ) {
        result[0] += 0.043243243243243246;
        result[1] += 0.02702702702702703;
        result[2] += 0.5567567567567567;
        result[3] += 0.2648648648648649;
        result[4] += 0.07567567567567568;
        result[5] += 0.032432432432432434;
      } else {
        result[0] += 0.021844660194174758;
        result[1] += 0;
        result[2] += 0.8907766990291263;
        result[3] += 0.07888349514563107;
        result[4] += 0;
        result[5] += 0.00849514563106796;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)59.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)63.5) ) ) {
        result[0] += 0;
        result[1] += 0.052434456928838954;
        result[2] += 0.026217228464419477;
        result[3] += 0.003745318352059925;
        result[4] += 0.8352059925093633;
        result[5] += 0.08239700374531835;
      } else {
        result[0] += 0.8235294117647058;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.058823529411764705;
        result[4] += 0.029411764705882353;
        result[5] += 0.08823529411764706;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
        result[0] += 0;
        result[1] += 0.008149010477299184;
        result[2] += 0.0011641443538998836;
        result[3] += 0.03841676367869616;
        result[4] += 0.09080325960419092;
        result[5] += 0.8614668218859138;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.07023411371237458;
        result[3] += 0.5484949832775919;
        result[4] += 0;
        result[5] += 0.38127090301003347;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        result[0] += 0.0054446460980036296;
        result[1] += 0.8021778584392014;
        result[2] += 0;
        result[3] += 0.009074410163339383;
        result[4] += 0.18330308529945555;
        result[5] += 0;
      } else {
        result[0] += 0.6988102692548529;
        result[1] += 0.031934877896055106;
        result[2] += 0.012523481527864746;
        result[3] += 0.07326236693800876;
        result[4] += 0.09893550407013149;
        result[5] += 0.08453350031308704;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.22033898305084748;
        result[3] += 0.5310734463276837;
        result[4] += 0.016949152542372885;
        result[5] += 0.23163841807909608;
      } else {
        result[0] += 0.032629558541266784;
        result[1] += 0;
        result[2] += 0.8896353166986563;
        result[3] += 0.06525911708253357;
        result[4] += 0.001919385796545105;
        result[5] += 0.010556621880998079;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)70.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.004032258064516129;
        result[1] += 0.08870967741935484;
        result[2] += 0.004032258064516129;
        result[3] += 0;
        result[4] += 0.8830645161290323;
        result[5] += 0.020161290322580645;
      } else {
        result[0] += 0.015296367112810707;
        result[1] += 0.0019120458891013384;
        result[2] += 0.0028680688336520078;
        result[3] += 0.10611854684512428;
        result[4] += 0.05927342256214149;
        result[5] += 0.8145315487571702;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)52) ) ) {
        result[0] += 0;
        result[1] += 0.9523809523809524;
        result[2] += 0;
        result[3] += 0.009523809523809526;
        result[4] += 0.038095238095238106;
        result[5] += 0;
      } else {
        result[0] += 0.5608927704997574;
        result[1] += 0.025230470645317808;
        result[2] += 0.056768558951965066;
        result[3] += 0.13973799126637554;
        result[4] += 0.11838913148956817;
        result[5] += 0.09898107714701601;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0.10869565217391305;
        result[2] += 0.10869565217391305;
        result[3] += 0.1739130434782609;
        result[4] += 0.04347826086956522;
        result[5] += 0.5652173913043479;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5233160621761658;
        result[3] += 0.35233160621761656;
        result[4] += 0.0051813471502590676;
        result[5] += 0.11917098445595854;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)93.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5416666666666666;
        result[3] += 0.125;
        result[4] += 0;
        result[5] += 0.3333333333333333;
      } else {
        result[0] += 0.015228426395939087;
        result[1] += 0.0012690355329949238;
        result[2] += 0.9213197969543148;
        result[3] += 0.05964467005076142;
        result[4] += 0.0012690355329949238;
        result[5] += 0.0012690355329949238;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)71.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
        result[0] += 0.08189655172413794;
        result[1] += 0.025862068965517244;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.810344827586207;
        result[5] += 0.08189655172413794;
      } else {
        result[0] += 0.0009389671361502347;
        result[1] += 0.02629107981220657;
        result[2] += 0.007511737089201878;
        result[3] += 0.12018779342723004;
        result[4] += 0.06291079812206572;
        result[5] += 0.7821596244131456;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)50) ) ) {
        result[0] += 0;
        result[1] += 0.9736842105263158;
        result[2] += 0;
        result[3] += 0.0023923444976076554;
        result[4] += 0.023923444976076555;
        result[5] += 0;
      } else {
        result[0] += 0.6235102925243771;
        result[1] += 0.038461538461538464;
        result[2] += 0.03412784398699892;
        result[3] += 0.08721560130010834;
        result[4] += 0.12405200433369447;
        result[5] += 0.09263271939328277;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
        result[0] += 0.04938271604938271;
        result[1] += 0.16049382716049382;
        result[2] += 0.09876543209876543;
        result[3] += 0.04938271604938271;
        result[4] += 0.2839506172839506;
        result[5] += 0.35802469135802467;
      } else {
        result[0] += 0.02464788732394366;
        result[1] += 0;
        result[2] += 0.3626760563380282;
        result[3] += 0.43661971830985913;
        result[4] += 0.0035211267605633804;
        result[5] += 0.17253521126760563;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
        result[0] += 0.24324324324324328;
        result[1] += 0;
        result[2] += 0.5675675675675677;
        result[3] += 0.06756756756756759;
        result[4] += 0.013513513513513516;
        result[5] += 0.10810810810810813;
      } else {
        result[0] += 0.006053268765133172;
        result[1] += 0;
        result[2] += 0.9249394673123487;
        result[3] += 0.06537530266343826;
        result[4] += 0;
        result[5] += 0.0036319612590799033;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.004484304932735426;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9865470852017937;
        result[5] += 0.008968609865470852;
      } else {
        result[0] += 0;
        result[1] += 0.058823529411764705;
        result[2] += 0;
        result[3] += 0.11764705882352941;
        result[4] += 0.5;
        result[5] += 0.3235294117647059;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)56.5) ) ) {
        result[0] += 0.9032258064516129;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.0967741935483871;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.003389830508474576;
        result[2] += 0.005084745762711864;
        result[3] += 0.16779661016949152;
        result[4] += 0.07711864406779662;
        result[5] += 0.7466101694915255;
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)81) ) ) {
        result[0] += 0;
        result[1] += 0.9953810623556582;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.004618937644341801;
        result[5] += 0;
      } else {
        result[0] += 0.4;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.2;
        result[4] += 0.4;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
        result[0] += 0.7628797886393659;
        result[1] += 0.04095112285336856;
        result[2] += 0.015191545574636724;
        result[3] += 0.03302509907529723;
        result[4] += 0.11822985468956407;
        result[5] += 0.029722589167767502;
      } else {
        result[0] += 0.04581818181818183;
        result[1] += 0.006545454545454546;
        result[2] += 0.7134545454545456;
        result[3] += 0.14545454545454548;
        result[4] += 0.021090909090909094;
        result[5] += 0.06763636363636365;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)59.5) ) ) {
        result[0] += 0.13069908814589667;
        result[1] += 0.06382978723404256;
        result[2] += 0;
        result[3] += 0.04255319148936171;
        result[4] += 0.696048632218845;
        result[5] += 0.06686930091185411;
      } else {
        result[0] += 0.0052310374891020054;
        result[1] += 0.004359197907585004;
        result[2] += 0.010462074978204011;
        result[3] += 0.14210985178727115;
        result[4] += 0.07585004359197908;
        result[5] += 0.7619877942458587;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6176971072036301;
        result[1] += 0.039137833238797506;
        result[2] += 0.04254112308564946;
        result[3] += 0.0822461712989223;
        result[4] += 0.11798071469086784;
        result[5] += 0.10039705048213272;
      } else {
        result[0] += 0.007633587786259542;
        result[1] += 0.9923664122137404;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)82) ) ) {
        result[0] += 0;
        result[1] += 0.016;
        result[2] += 0.144;
        result[3] += 0.528;
        result[4] += 0.016;
        result[5] += 0.296;
      } else {
        result[0] += 0.013333333333333334;
        result[1] += 0;
        result[2] += 0.30666666666666664;
        result[3] += 0.06666666666666667;
        result[4] += 0.24;
        result[5] += 0.37333333333333335;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)87.5) ) ) {
        result[0] += 0.019464720194647202;
        result[1] += 0;
        result[2] += 0.8223844282238443;
        result[3] += 0.1435523114355231;
        result[4] += 0;
        result[5] += 0.014598540145985401;
      } else {
        result[0] += 0.003430531732418525;
        result[1] += 0;
        result[2] += 0.9554030874785592;
        result[3] += 0.03430531732418525;
        result[4] += 0;
        result[5] += 0.00686106346483705;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)59.5) ) ) {
        result[0] += 0.13245033112582782;
        result[1] += 0.052980132450331126;
        result[2] += 0.006622516556291391;
        result[3] += 0.016556291390728478;
        result[4] += 0.7019867549668874;
        result[5] += 0.08940397350993377;
      } else {
        result[0] += 0.0034934497816593887;
        result[1] += 0.0026200873362445414;
        result[2] += 0.013973799126637555;
        result[3] += 0.15196506550218342;
        result[4] += 0.07161572052401746;
        result[5] += 0.7563318777292577;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)66.5) ) ) {
        result[0] += 0.007155635062611807;
        result[1] += 0.7799642218246869;
        result[2] += 0;
        result[3] += 0.007155635062611807;
        result[4] += 0.20214669051878353;
        result[5] += 0.0035778175313059034;
      } else {
        result[0] += 0.7224036577400392;
        result[1] += 0.032658393207054215;
        result[2] += 0.032658393207054215;
        result[3] += 0.06139777922926192;
        result[4] += 0.08556499020248204;
        result[5] += 0.06531678641410843;
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)77) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)92) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.13580246913580246;
        result[3] += 0.09876543209876543;
        result[4] += 0.18518518518518517;
        result[5] += 0.5802469135802469;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.1891891891891892;
        result[3] += 0.6486486486486487;
        result[4] += 0;
        result[5] += 0.16216216216216217;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        result[0] += 0.007246376811594203;
        result[1] += 0.007246376811594203;
        result[2] += 0.4855072463768116;
        result[3] += 0.3695652173913043;
        result[4] += 0.021739130434782608;
        result[5] += 0.10869565217391304;
      } else {
        result[0] += 0.03253796095444685;
        result[1] += 0.009761388286334056;
        result[2] += 0.8882863340563991;
        result[3] += 0.05314533622559653;
        result[4] += 0.0021691973969631237;
        result[5] += 0.014099783080260303;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.17155756207674944;
        result[1] += 0.004514672686230248;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7020316027088036;
        result[5] += 0.12189616252821671;
      } else {
        result[0] += 0.0010362694300518134;
        result[1] += 0.0062176165803108805;
        result[2] += 0.004145077720207254;
        result[3] += 0.06528497409326425;
        result[4] += 0.07979274611398963;
        result[5] += 0.8435233160621761;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)55) ) ) {
        result[0] += 0;
        result[1] += 0.9914163090128756;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.008583690987124463;
        result[5] += 0;
      } else {
        result[0] += 0.5575123830489819;
        result[1] += 0.03467253714914695;
        result[2] += 0.07044578976334617;
        result[3] += 0.15244909190974132;
        result[4] += 0.08750687947165657;
        result[5] += 0.09741331865712713;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.20388349514563106;
        result[3] += 0.3106796116504854;
        result[4] += 0.06796116504854369;
        result[5] += 0.4174757281553398;
      } else {
        result[0] += 0.021367521367521368;
        result[1] += 0;
        result[2] += 0.7435897435897436;
        result[3] += 0.21794871794871795;
        result[4] += 0;
        result[5] += 0.017094017094017096;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
        result[0] += 0.15151515151515152;
        result[1] += 0.12121212121212122;
        result[2] += 0.5151515151515151;
        result[3] += 0.12121212121212122;
        result[4] += 0;
        result[5] += 0.09090909090909091;
      } else {
        result[0] += 0.023529411764705882;
        result[1] += 0.00261437908496732;
        result[2] += 0.9359477124183007;
        result[3] += 0.036601307189542485;
        result[4] += 0;
        result[5] += 0.00130718954248366;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        result[0] += 0.0205761316872428;
        result[1] += 0.037037037037037035;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9259259259259259;
        result[5] += 0.01646090534979424;
      } else {
        result[0] += 0.04495335029686175;
        result[1] += 0.011874469889737066;
        result[2] += 0.002544529262086514;
        result[3] += 0.13740458015267176;
        result[4] += 0.0737913486005089;
        result[5] += 0.729431721798134;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9701149425287356;
        result[2] += 0;
        result[3] += 0.013793103448275862;
        result[4] += 0.016091954022988506;
        result[5] += 0;
      } else {
        result[0] += 0.6149137451307735;
        result[1] += 0.05008347245409015;
        result[2] += 0.053978853644963826;
        result[3] += 0.08069003895381191;
        result[4] += 0.10962715637173066;
        result[5] += 0.09070673344462994;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0.0111731843575419;
        result[1] += 0.03910614525139665;
        result[2] += 0.10614525139664804;
        result[3] += 0.39106145251396646;
        result[4] += 0.1452513966480447;
        result[5] += 0.30726256983240224;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7123287671232876;
        result[3] += 0.1643835616438356;
        result[4] += 0;
        result[5] += 0.1232876712328767;
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)86.5) ) ) {
        result[0] += 0.004914004914004914;
        result[1] += 0.004914004914004914;
        result[2] += 0.7837837837837838;
        result[3] += 0.18427518427518427;
        result[4] += 0;
        result[5] += 0.022113022113022112;
      } else {
        result[0] += 0.023391812865497075;
        result[1] += 0;
        result[2] += 0.9512670565302144;
        result[3] += 0.023391812865497075;
        result[4] += 0;
        result[5] += 0.001949317738791423;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        result[0] += 0.004273504273504274;
        result[1] += 0.017094017094017096;
        result[2] += 0;
        result[3] += 0.004273504273504274;
        result[4] += 0.9401709401709402;
        result[5] += 0.03418803418803419;
      } else {
        result[0] += 0.027152831652443754;
        result[1] += 0.0023273855702094647;
        result[2] += 0.008533747090768037;
        result[3] += 0.1590380139643134;
        result[4] += 0.07137315748642359;
        result[5] += 0.7315748642358417;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)103.5) ) ) {
        result[0] += 0.598572213069742;
        result[1] += 0.06534870950027458;
        result[2] += 0.05930807248764415;
        result[3] += 0.08237232289950576;
        result[4] += 0.14332784184514002;
        result[5] += 0.051070840197693576;
      } else {
        result[0] += 0.010025062656641603;
        result[1] += 0.9874686716791979;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.002506265664160401;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)83.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.15384615384615385;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.8461538461538461;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.2571428571428571;
        result[3] += 0.4;
        result[4] += 0;
        result[5] += 0.34285714285714286;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)89) ) ) {
        result[0] += 0;
        result[1] += 0.75;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.25;
        result[5] += 0;
      } else {
        result[0] += 0.013333333333333334;
        result[1] += 0;
        result[2] += 0.8892307692307693;
        result[3] += 0.0841025641025641;
        result[4] += 0;
        result[5] += 0.013333333333333334;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.00806451612903226;
        result[2] += 0;
        result[3] += 0.028225806451612906;
        result[4] += 0.9274193548387097;
        result[5] += 0.03629032258064517;
      } else {
        result[0] += 0.05238095238095238;
        result[1] += 0.026984126984126985;
        result[2] += 0;
        result[3] += 0.15634920634920635;
        result[4] += 0.049206349206349205;
        result[5] += 0.7150793650793651;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        result[0] += 0.0034965034965034965;
        result[1] += 0.7902097902097902;
        result[2] += 0;
        result[3] += 0.015734265734265736;
        result[4] += 0.17832167832167833;
        result[5] += 0.012237762237762238;
      } else {
        result[0] += 0.6586568083795441;
        result[1] += 0.017868145409735057;
        result[2] += 0.08194701170671596;
        result[3] += 0.07393715341959335;
        result[4] += 0.0893407270486753;
        result[5] += 0.07825015403573629;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
        result[0] += 0;
        result[1] += 0.010752688172043012;
        result[2] += 0;
        result[3] += 0.27956989247311825;
        result[4] += 0.13978494623655913;
        result[5] += 0.5698924731182796;
      } else {
        result[0] += 0.0784313725490196;
        result[1] += 0.0784313725490196;
        result[2] += 0.5490196078431373;
        result[3] += 0.0784313725490196;
        result[4] += 0.0392156862745098;
        result[5] += 0.17647058823529413;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)70.5) ) ) {
        result[0] += 0.6590909090909091;
        result[1] += 0;
        result[2] += 0.3409090909090909;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.011764705882352943;
        result[1] += 0;
        result[2] += 0.877005347593583;
        result[3] += 0.10267379679144387;
        result[4] += 0;
        result[5] += 0.008556149732620323;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.00881057268722467;
        result[1] += 0.04405286343612335;
        result[2] += 0;
        result[3] += 0.004405286343612335;
        result[4] += 0.9162995594713657;
        result[5] += 0.02643171806167401;
      } else {
        result[0] += 0.029386343993085567;
        result[1] += 0.012100259291270527;
        result[2] += 0.00950734658599827;
        result[3] += 0.12186689714779603;
        result[4] += 0.04235090751944685;
        result[5] += 0.7847882454624028;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        result[0] += 0.646889400921659;
        result[1] += 0.04377880184331797;
        result[2] += 0.04377880184331797;
        result[3] += 0.07776497695852534;
        result[4] += 0.12442396313364056;
        result[5] += 0.06336405529953917;
      } else {
        result[0] += 0.009708737864077669;
        result[1] += 0.9902912621359223;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
        result[0] += 0;
        result[1] += 0.03278688524590164;
        result[2] += 0.01639344262295082;
        result[3] += 0.06557377049180328;
        result[4] += 0.3114754098360656;
        result[5] += 0.5737704918032787;
      } else {
        result[0] += 0;
        result[1] += 0.008583690987124463;
        result[2] += 0.30042918454935624;
        result[3] += 0.4892703862660944;
        result[4] += 0;
        result[5] += 0.2017167381974249;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
        result[0] += 0.03591160220994475;
        result[1] += 0.008287292817679558;
        result[2] += 0.6685082872928176;
        result[3] += 0.1850828729281768;
        result[4] += 0.04696132596685083;
        result[5] += 0.055248618784530384;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9545454545454546;
        result[3] += 0.04075235109717868;
        result[4] += 0.003134796238244514;
        result[5] += 0.001567398119122257;
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)99.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.45681818181818185;
        result[1] += 0.0715909090909091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.41704545454545455;
        result[5] += 0.05454545454545454;
      } else {
        result[0] += 0.0619126589275843;
        result[1] += 0.014925373134328358;
        result[2] += 0.03427307904919845;
        result[3] += 0.2017689331122167;
        result[4] += 0.10834715312327253;
        result[5] += 0.5787728026533997;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71) ) ) {
        result[0] += 0.002403846153846154;
        result[1] += 0.9951923076923077;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.002403846153846154;
        result[5] += 0;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.9858490566037735;
        result[1] += 0;
        result[2] += 0.0031446540880503146;
        result[3] += 0;
        result[4] += 0.0110062893081761;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)97.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.47761194029850745;
        result[3] += 0.3582089552238806;
        result[4] += 0;
        result[5] += 0.16417910447761194;
      } else {
        result[0] += 0.0374384236453202;
        result[1] += 0;
        result[2] += 0.8788177339901477;
        result[3] += 0.06699507389162561;
        result[4] += 0.002955665024630542;
        result[5] += 0.013793103448275862;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        result[0] += 0.21144278606965175;
        result[1] += 0.022388059701492536;
        result[2] += 0;
        result[3] += 0.012437810945273632;
        result[4] += 0.6567164179104478;
        result[5] += 0.09701492537313433;
      } else {
        result[0] += 0.007137192704203013;
        result[1] += 0.020618556701030927;
        result[2] += 0.007137192704203013;
        result[3] += 0.17367168913560665;
        result[4] += 0.06819984139571768;
        result[5] += 0.7232355273592387;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
        result[0] += 0.005272407732864676;
        result[1] += 0.8277680140597541;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.16168717047451672;
        result[5] += 0.005272407732864676;
      } else {
        result[0] += 0.709263015551048;
        result[1] += 0.018931710615280595;
        result[2] += 0.0784313725490196;
        result[3] += 0.06964164976335362;
        result[4] += 0.054090601757944556;
        result[5] += 0.06964164976335362;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)78.5) ) ) {
        result[0] += 0.02608695652173913;
        result[1] += 0.06956521739130435;
        result[2] += 0.22608695652173913;
        result[3] += 0.2;
        result[4] += 0.17391304347826086;
        result[5] += 0.30434782608695654;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6298076923076923;
        result[3] += 0.3076923076923077;
        result[4] += 0;
        result[5] += 0.0625;
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)101.5) ) ) {
        result[0] += 0.07865168539325842;
        result[1] += 0.02247191011235955;
        result[2] += 0.7303370786516854;
        result[3] += 0.14606741573033707;
        result[4] += 0.02247191011235955;
        result[5] += 0;
      } else {
        result[0] += 0.014224751066856332;
        result[1] += 0;
        result[2] += 0.9345661450924609;
        result[3] += 0.0469416785206259;
        result[4] += 0;
        result[5] += 0.0042674253200569;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9628099173553719;
        result[5] += 0.0371900826446281;
      } else {
        result[0] += 0.030204081632653063;
        result[1] += 0.0163265306122449;
        result[2] += 0.0032653061224489797;
        result[3] += 0.15428571428571428;
        result[4] += 0.05714285714285714;
        result[5] += 0.7387755102040816;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)54.5) ) ) {
        result[0] += 0.00860215053763441;
        result[1] += 0.903225806451613;
        result[2] += 0.0021505376344086026;
        result[3] += 0.00860215053763441;
        result[4] += 0.0774193548387097;
        result[5] += 0;
      } else {
        result[0] += 0.6287042417199302;
        result[1] += 0.0453224869262057;
        result[2] += 0.05287623474723998;
        result[3] += 0.06972690296339337;
        result[4] += 0.11388727484020918;
        result[5] += 0.0894828588030215;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
        result[0] += 0;
        result[1] += 0.00684931506849315;
        result[2] += 0.10273972602739725;
        result[3] += 0.5958904109589042;
        result[4] += 0.04794520547945205;
        result[5] += 0.2465753424657534;
      } else {
        result[0] += 0.056338028169014086;
        result[1] += 0.056338028169014086;
        result[2] += 0.49295774647887325;
        result[3] += 0.23943661971830985;
        result[4] += 0.028169014084507043;
        result[5] += 0.1267605633802817;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
        result[0] += 0.07674943566591422;
        result[1] += 0;
        result[2] += 0.7471783295711061;
        result[3] += 0.14221218961625282;
        result[4] += 0;
        result[5] += 0.033860045146726865;
      } else {
        result[0] += 0.0019493177387914231;
        result[1] += 0;
        result[2] += 0.9727095516569202;
        result[3] += 0.021442495126705655;
        result[4] += 0;
        result[5] += 0.0038986354775828462;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.026923076923076925;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9576923076923077;
        result[5] += 0.015384615384615385;
      } else {
        result[0] += 0.03127443315089914;
        result[1] += 0.010164190774042221;
        result[2] += 0.020328381548084442;
        result[3] += 0.1532447224394058;
        result[4] += 0.04769351055512119;
        result[5] += 0.7372947615324472;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        result[0] += 0;
        result[1] += 0.8526119402985075;
        result[2] += 0;
        result[3] += 0.0037313432835820895;
        result[4] += 0.14365671641791045;
        result[5] += 0;
      } else {
        result[0] += 0.6685049019607844;
        result[1] += 0.015318627450980393;
        result[2] += 0.07107843137254903;
        result[3] += 0.08394607843137256;
        result[4] += 0.08639705882352942;
        result[5] += 0.07475490196078433;
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)102.5) ) ) {
        result[0] += 0;
        result[1] += 0.10606060606060606;
        result[2] += 0.18181818181818182;
        result[3] += 0.3106060606060606;
        result[4] += 0.007575757575757576;
        result[5] += 0.3939393939393939;
      } else {
        result[0] += 0.08620689655172414;
        result[1] += 0.04310344827586207;
        result[2] += 0.6896551724137931;
        result[3] += 0.07758620689655173;
        result[4] += 0;
        result[5] += 0.10344827586206896;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)69) ) ) {
        result[0] += 0.8461538461538461;
        result[1] += 0;
        result[2] += 0.15384615384615385;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.0011655011655011655;
        result[1] += 0;
        result[2] += 0.9195804195804196;
        result[3] += 0.07342657342657342;
        result[4] += 0;
        result[5] += 0.005827505827505828;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        result[0] += 0.00398406374501992;
        result[1] += 0.06374501992031872;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8884462151394422;
        result[5] += 0.043824701195219126;
      } else {
        result[0] += 0.03885135135135135;
        result[1] += 0.01097972972972973;
        result[2] += 0.007601351351351352;
        result[3] += 0.15118243243243243;
        result[4] += 0.07263513513513513;
        result[5] += 0.71875;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0.9766454352441614;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.02335456475583864;
        result[5] += 0;
      } else {
        result[0] += 0.6362612612612613;
        result[1] += 0.029842342342342343;
        result[2] += 0.05912162162162162;
        result[3] += 0.08220720720720721;
        result[4] += 0.10078828828828829;
        result[5] += 0.09177927927927929;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)87.5) ) ) {
        result[0] += 0.05128205128205128;
        result[1] += 0;
        result[2] += 0.1282051282051282;
        result[3] += 0.1282051282051282;
        result[4] += 0.10256410256410256;
        result[5] += 0.5897435897435898;
      } else {
        result[0] += 0.008928571428571428;
        result[1] += 0.026785714285714284;
        result[2] += 0.3392857142857143;
        result[3] += 0.44642857142857145;
        result[4] += 0.017857142857142856;
        result[5] += 0.16071428571428573;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
        result[0] += 0.013953488372093023;
        result[1] += 0;
        result[2] += 0.7767441860465116;
        result[3] += 0.1813953488372093;
        result[4] += 0;
        result[5] += 0.027906976744186046;
      } else {
        result[0] += 0.02313624678663239;
        result[1] += 0;
        result[2] += 0.9254498714652957;
        result[3] += 0.05141388174807198;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
        result[0] += 0.008695652173913044;
        result[1] += 0.05217391304347826;
        result[2] += 0.02608695652173913;
        result[3] += 0.013043478260869565;
        result[4] += 0.8521739130434782;
        result[5] += 0.04782608695652174;
      } else {
        result[0] += 0.02313624678663239;
        result[1] += 0.004284490145672665;
        result[2] += 0.003427592116538132;
        result[3] += 0.15252784918594686;
        result[4] += 0.060839760068551844;
        result[5] += 0.7557840616966581;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
        result[0] += 0.006677796327212021;
        result[1] += 0.8180300500834725;
        result[2] += 0;
        result[3] += 0.005008347245409016;
        result[4] += 0.16694490818030053;
        result[5] += 0.0033388981636060105;
      } else {
        result[0] += 0.6942446043165467;
        result[1] += 0.0197841726618705;
        result[2] += 0.02877697841726618;
        result[3] += 0.08273381294964027;
        result[4] += 0.08213429256594723;
        result[5] += 0.092326139088729;
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)98.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.2937853107344633;
        result[3] += 0.4519774011299435;
        result[4] += 0;
        result[5] += 0.2542372881355932;
      } else {
        result[0] += 0.04444444444444445;
        result[1] += 0;
        result[2] += 0.788888888888889;
        result[3] += 0.10000000000000002;
        result[4] += 0.011111111111111113;
        result[5] += 0.05555555555555556;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6746987951807228;
        result[3] += 0.1927710843373494;
        result[4] += 0.012048192771084338;
        result[5] += 0.12048192771084337;
      } else {
        result[0] += 0.01847290640394089;
        result[1] += 0;
        result[2] += 0.9174876847290641;
        result[3] += 0.06157635467980296;
        result[4] += 0;
        result[5] += 0.0024630541871921183;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.004672897196261682;
        result[2] += 0.004672897196261682;
        result[3] += 0;
        result[4] += 0.9906542056074766;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.05263157894736842;
        result[2] += 0;
        result[3] += 0.18421052631578946;
        result[4] += 0.39473684210526316;
        result[5] += 0.3684210526315789;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)66.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.008547008547008548;
        result[3] += 0.026862026862026864;
        result[4] += 0.04395604395604396;
        result[5] += 0.9206349206349206;
      } else {
        result[0] += 0.1012396694214876;
        result[1] += 0.022727272727272728;
        result[2] += 0.01652892561983471;
        result[3] += 0.3305785123966942;
        result[4] += 0.08264462809917356;
        result[5] += 0.4462809917355372;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)99) ) ) {
        result[0] += 0.0078125;
        result[1] += 0.34375;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.6484375;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.9706498951781971;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.029350104821802937;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)75.5) ) ) {
        result[0] += 0.8070175438596492;
        result[1] += 0.010964912280701756;
        result[2] += 0.019005847953216377;
        result[3] += 0.046783625730994156;
        result[4] += 0.08771929824561404;
        result[5] += 0.028508771929824563;
      } else {
        result[0] += 0.02465331278890601;
        result[1] += 0.0030816640986132513;
        result[2] += 0.7187981510015409;
        result[3] += 0.17257318952234207;
        result[4] += 0.014637904468412942;
        result[5] += 0.0662557781201849;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.003125;
        result[1] += 0.0875;
        result[2] += 0.00625;
        result[3] += 0.003125;
        result[4] += 0.878125;
        result[5] += 0.021875;
      } else {
        result[0] += 0.04272151898734177;
        result[1] += 0.0023734177215189874;
        result[2] += 0.007911392405063292;
        result[3] += 0.15427215189873417;
        result[4] += 0.07753164556962025;
        result[5] += 0.7151898734177216;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9791666666666667;
        result[2] += 0;
        result[3] += 0.006944444444444445;
        result[4] += 0.01388888888888889;
        result[5] += 0;
      } else {
        result[0] += 0.6693598508390305;
        result[1] += 0.04226227470478558;
        result[2] += 0.026724673710379118;
        result[3] += 0.08017402113113735;
        result[4] += 0.09757613424487259;
        result[5] += 0.0839030453697949;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.08333333333333333;
        result[3] += 0.8055555555555556;
        result[4] += 0;
        result[5] += 0.1111111111111111;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.234375;
        result[3] += 0.296875;
        result[4] += 0;
        result[5] += 0.46875;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)98.5) ) ) {
        result[0] += 0.013698630136986304;
        result[1] += 0;
        result[2] += 0.6301369863013699;
        result[3] += 0.22374429223744297;
        result[4] += 0.009132420091324202;
        result[5] += 0.12328767123287673;
      } else {
        result[0] += 0.022675736961451247;
        result[1] += 0;
        result[2] += 0.9104308390022676;
        result[3] += 0.061224489795918366;
        result[4] += 0;
        result[5] += 0.005668934240362812;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        result[0] += 0.016901408450704224;
        result[1] += 0.03380281690140845;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8535211267605634;
        result[5] += 0.09577464788732394;
      } else {
        result[0] += 0.09213051823416507;
        result[1] += 0.003838771593090211;
        result[2] += 0;
        result[3] += 0.06813819577735125;
        result[4] += 0.06525911708253358;
        result[5] += 0.7706333973128598;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.9332023575638507;
        result[2] += 0;
        result[3] += 0.0019646365422396855;
        result[4] += 0.06483300589390963;
        result[5] += 0;
      } else {
        result[0] += 0.5852334419109663;
        result[1] += 0.022801302931596087;
        result[2] += 0.0532030401737242;
        result[3] += 0.14875135722041258;
        result[4] += 0.0808903365906623;
        result[5] += 0.10912052117263842;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.11764705882352941;
        result[3] += 0.6470588235294118;
        result[4] += 0;
        result[5] += 0.23529411764705882;
      } else {
        result[0] += 0.05;
        result[1] += 0;
        result[2] += 0.4625;
        result[3] += 0.2375;
        result[4] += 0.025;
        result[5] += 0.225;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7391304347826086;
        result[3] += 0.21014492753623187;
        result[4] += 0;
        result[5] += 0.050724637681159424;
      } else {
        result[0] += 0.010101010101010102;
        result[1] += 0;
        result[2] += 0.9431818181818182;
        result[3] += 0.04040404040404041;
        result[4] += 0;
        result[5] += 0.006313131313131313;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0.0034602076124567475;
        result[1] += 0.06228373702422145;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.903114186851211;
        result[5] += 0.031141868512110725;
      } else {
        result[0] += 0.03664921465968586;
        result[1] += 0.007853403141361256;
        result[2] += 0.010471204188481676;
        result[3] += 0.15357766143106458;
        result[4] += 0.05759162303664921;
        result[5] += 0.7338568935427574;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0.9521640091116174;
        result[2] += 0;
        result[3] += 0.00683371298405467;
        result[4] += 0.04100227790432802;
        result[5] += 0;
      } else {
        result[0] += 0.6221122112211221;
        result[1] += 0.0462046204620462;
        result[2] += 0.048954895489548955;
        result[3] += 0.0847084708470847;
        result[4] += 0.10451045104510451;
        result[5] += 0.09350935093509351;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
        result[0] += 0.026143790849673203;
        result[1] += 0.0196078431372549;
        result[2] += 0.16339869281045752;
        result[3] += 0.3464052287581699;
        result[4] += 0.13725490196078433;
        result[5] += 0.30718954248366015;
      } else {
        result[0] += 0.03937007874015748;
        result[1] += 0.007874015748031496;
        result[2] += 0.7086614173228346;
        result[3] += 0.18110236220472442;
        result[4] += 0;
        result[5] += 0.06299212598425197;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.42592592592592593;
        result[3] += 0.37037037037037035;
        result[4] += 0;
        result[5] += 0.2037037037037037;
      } else {
        result[0] += 0.0025000000000000005;
        result[1] += 0;
        result[2] += 0.9087500000000001;
        result[3] += 0.07750000000000001;
        result[4] += 0;
        result[5] += 0.011250000000000001;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.011152416356877323;
        result[2] += 0;
        result[3] += 0.007434944237918215;
        result[4] += 0.929368029739777;
        result[5] += 0.05204460966542751;
      } else {
        result[0] += 0.022203947368421052;
        result[1] += 0.013157894736842105;
        result[2] += 0.009046052631578948;
        result[3] += 0.12828947368421054;
        result[4] += 0.07072368421052631;
        result[5] += 0.756578947368421;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        result[0] += 0.001792114695340502;
        result[1] += 0.7813620071684589;
        result[2] += 0.001792114695340502;
        result[3] += 0.007168458781362008;
        result[4] += 0.20788530465949823;
        result[5] += 0;
      } else {
        result[0] += 0.6578638497652582;
        result[1] += 0.03345070422535211;
        result[2] += 0.05046948356807512;
        result[3] += 0.0892018779342723;
        result[4] += 0.07394366197183098;
        result[5] += 0.09507042253521127;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8421052631578947;
        result[4] += 0;
        result[5] += 0.15789473684210525;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.3125;
        result[3] += 0.3125;
        result[4] += 0;
        result[5] += 0.375;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        result[0] += 0.025;
        result[1] += 0;
        result[2] += 0.7;
        result[3] += 0.2392857142857143;
        result[4] += 0.0035714285714285713;
        result[5] += 0.03214285714285714;
      } else {
        result[0] += 0.013368983957219251;
        result[1] += 0;
        result[2] += 0.9425133689839572;
        result[3] += 0.040106951871657755;
        result[4] += 0;
        result[5] += 0.004010695187165776;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        result[0] += 0.2531017369727047;
        result[1] += 0.03722084367245657;
        result[2] += 0;
        result[3] += 0.02481389578163772;
        result[4] += 0.6327543424317618;
        result[5] += 0.052109181141439205;
      } else {
        result[0] += 0.005291005291005291;
        result[1] += 0.007558578987150416;
        result[2] += 0.003779289493575208;
        result[3] += 0.17233560090702948;
        result[4] += 0.05291005291005291;
        result[5] += 0.7581254724111867;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.888030888030888;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.11003861003861004;
        result[5] += 0.0019305019305019305;
      } else {
        result[0] += 0.7531914893617021;
        result[1] += 0.02127659574468085;
        result[2] += 0.03687943262411347;
        result[3] += 0.03971631205673759;
        result[4] += 0.09716312056737589;
        result[5] += 0.05177304964539007;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.144;
        result[3] += 0.608;
        result[4] += 0;
        result[5] += 0.248;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6612903225806452;
        result[3] += 0.17741935483870971;
        result[4] += 0;
        result[5] += 0.16129032258064518;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
        result[0] += 0.039603960396039604;
        result[1] += 0;
        result[2] += 0.7920792079207921;
        result[3] += 0.14356435643564355;
        result[4] += 0;
        result[5] += 0.024752475247524754;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9845857418111753;
        result[3] += 0.015414258188824663;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
        result[0] += 0.3391472868217054;
        result[1] += 0.02131782945736434;
        result[2] += 0;
        result[3] += 0.003875968992248062;
        result[4] += 0.5658914728682171;
        result[5] += 0.06976744186046512;
      } else {
        result[0] += 0.008668242710795903;
        result[1] += 0.015760441292356184;
        result[2] += 0.002364066193853428;
        result[3] += 0.14105594956658787;
        result[4] += 0.08983451536643026;
        result[5] += 0.7423167848699763;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)54) ) ) {
        result[0] += 0.009174311926605505;
        result[1] += 0.9839449541284404;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.006880733944954129;
        result[5] += 0;
      } else {
        result[0] += 0.6991084695393759;
        result[1] += 0.057206537890044575;
        result[2] += 0.048291233283803865;
        result[3] += 0.0638930163447251;
        result[4] += 0.08469539375928678;
        result[5] += 0.046805349182763745;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
        result[0] += 0;
        result[1] += 0.00909090909090909;
        result[2] += 0.08636363636363636;
        result[3] += 0.5136363636363637;
        result[4] += 0.11818181818181818;
        result[5] += 0.2727272727272727;
      } else {
        result[0] += 0.0078125;
        result[1] += 0.0234375;
        result[2] += 0.6796875;
        result[3] += 0.1484375;
        result[4] += 0.0234375;
        result[5] += 0.1171875;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)89.5) ) ) {
        result[0] += 0.08695652173913043;
        result[1] += 0.43478260869565216;
        result[2] += 0;
        result[3] += 0.08695652173913043;
        result[4] += 0;
        result[5] += 0.391304347826087;
      } else {
        result[0] += 0.02477477477477478;
        result[1] += 0;
        result[2] += 0.8851351351351352;
        result[3] += 0.08445945945945947;
        result[4] += 0;
        result[5] += 0.005630630630630631;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        result[0] += 0.00706713780918728;
        result[1] += 0.021201413427561842;
        result[2] += 0;
        result[3] += 0.042402826855123685;
        result[4] += 0.8515901060070672;
        result[5] += 0.07773851590106008;
      } else {
        result[0] += 0.06313328137178488;
        result[1] += 0.011691348402182385;
        result[2] += 0;
        result[3] += 0.13795791114575215;
        result[4] += 0.060795011691348405;
        result[5] += 0.7264224473889321;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        result[0] += 0;
        result[1] += 0.8643122676579926;
        result[2] += 0;
        result[3] += 0.001858736059479554;
        result[4] += 0.13197026022304836;
        result[5] += 0.001858736059479554;
      } else {
        result[0] += 0.7410169491525423;
        result[1] += 0.018983050847457626;
        result[2] += 0.05559322033898305;
        result[3] += 0.05694915254237288;
        result[4] += 0.0711864406779661;
        result[5] += 0.05627118644067797;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)90.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.014492753623188406;
        result[3] += 0.10144927536231885;
        result[4] += 0.2318840579710145;
        result[5] += 0.6521739130434783;
      } else {
        result[0] += 0.005405405405405406;
        result[1] += 0.005405405405405406;
        result[2] += 0.24864864864864866;
        result[3] += 0.5135135135135135;
        result[4] += 0.02702702702702703;
        result[5] += 0.2;
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)78.5) ) ) {
        result[0] += 0.25;
        result[1] += 0;
        result[2] += 0.5789473684210527;
        result[3] += 0.07894736842105263;
        result[4] += 0.013157894736842105;
        result[5] += 0.07894736842105263;
      } else {
        result[0] += 0.0021810250817884407;
        result[1] += 0;
        result[2] += 0.9138495092693566;
        result[3] += 0.08287895310796074;
        result[4] += 0;
        result[5] += 0.0010905125408942203;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.11320754716981134;
        result[1] += 0.015723270440251576;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.738993710691824;
        result[5] += 0.13207547169811323;
      } else {
        result[0] += 0;
        result[1] += 0.0037629350893697085;
        result[2] += 0.0037629350893697085;
        result[3] += 0.12699905926622765;
        result[4] += 0.04045155221072436;
        result[5] += 0.8250235183443085;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.0034722222222222225;
        result[1] += 0.810763888888889;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.18229166666666669;
        result[5] += 0.0034722222222222225;
      } else {
        result[0] += 0.7543391188251002;
        result[1] += 0.016688918558077435;
        result[2] += 0.028037383177570093;
        result[3] += 0.06008010680907877;
        result[4] += 0.09012016021361816;
        result[5] += 0.050734312416555405;
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        result[0] += 0.005865102639296188;
        result[1] += 0.005865102639296188;
        result[2] += 0.16422287390029325;
        result[3] += 0.44868035190615835;
        result[4] += 0.04105571847507331;
        result[5] += 0.3343108504398827;
      } else {
        result[0] += 0.08196721311475409;
        result[1] += 0.10655737704918032;
        result[2] += 0.6147540983606558;
        result[3] += 0.08196721311475409;
        result[4] += 0;
        result[5] += 0.11475409836065574;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
        result[0] += 0.08333333333333333;
        result[1] += 0;
        result[2] += 0.2916666666666667;
        result[3] += 0.5;
        result[4] += 0.041666666666666664;
        result[5] += 0.08333333333333333;
      } else {
        result[0] += 0.02828054298642534;
        result[1] += 0;
        result[2] += 0.8914027149321267;
        result[3] += 0.07692307692307693;
        result[4] += 0;
        result[5] += 0.003393665158371041;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        result[0] += 0.08847184986595175;
        result[1] += 0.058981233243967826;
        result[2] += 0;
        result[3] += 0.0160857908847185;
        result[4] += 0.6836461126005362;
        result[5] += 0.15281501340482573;
      } else {
        result[0] += 0.006323396567299007;
        result[1] += 0.0027100271002710027;
        result[2] += 0.016260162601626018;
        result[3] += 0.15447154471544716;
        result[4] += 0.07226738934056007;
        result[5] += 0.7479674796747967;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9793388429752066;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.02066115702479339;
        result[5] += 0;
      } else {
        result[0] += 0.6283029947152085;
        result[1] += 0.0364063417498532;
        result[2] += 0.04169113329418673;
        result[3] += 0.08690546095126248;
        result[4] += 0.11626541397533764;
        result[5] += 0.0904286553141515;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)94.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
        result[0] += 0;
        result[1] += 0.15789473684210525;
        result[2] += 0.05263157894736842;
        result[3] += 0;
        result[4] += 0.18421052631578946;
        result[5] += 0.6052631578947368;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.36633663366336633;
        result[3] += 0.37623762376237624;
        result[4] += 0.009900990099009901;
        result[5] += 0.24752475247524752;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.3793103448275862;
        result[3] += 0.5517241379310345;
        result[4] += 0;
        result[5] += 0.06896551724137931;
      } else {
        result[0] += 0.009081735620585268;
        result[1] += 0;
        result[2] += 0.9132189707366297;
        result[3] += 0.06659939455095863;
        result[4] += 0.0020181634712411706;
        result[5] += 0.009081735620585268;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)92.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
        result[0] += 0.2661122661122661;
        result[1] += 0.058212058212058215;
        result[2] += 0.002079002079002079;
        result[3] += 0.02079002079002079;
        result[4] += 0.553014553014553;
        result[5] += 0.0997920997920998;
      } else {
        result[0] += 0.010101010101010102;
        result[1] += 0.005050505050505051;
        result[2] += 0.015993265993265993;
        result[3] += 0.13383838383838384;
        result[4] += 0.0867003367003367;
        result[5] += 0.7483164983164983;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
        result[0] += 0.0037243947858473;
        result[1] += 0.8770949720670391;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.11173184357541899;
        result[5] += 0.0074487895716946;
      } else {
        result[0] += 0.7867590454195535;
        result[1] += 0.013856812933025405;
        result[2] += 0.026943802925327175;
        result[3] += 0.07852193995381063;
        result[4] += 0.054657428791377985;
        result[5] += 0.03926096997690531;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)75.5) ) ) {
        result[0] += 0.008547008547008548;
        result[1] += 0.042735042735042736;
        result[2] += 0.05128205128205128;
        result[3] += 0.2222222222222222;
        result[4] += 0.09401709401709402;
        result[5] += 0.5811965811965812;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.3125;
        result[3] += 0.5677083333333334;
        result[4] += 0;
        result[5] += 0.11979166666666667;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)86.5) ) ) {
        result[0] += 0.0400890868596882;
        result[1] += 0;
        result[2] += 0.7683741648106904;
        result[3] += 0.15367483296213807;
        result[4] += 0.0066815144766146995;
        result[5] += 0.031180400890868598;
      } else {
        result[0] += 0.014209591474245113;
        result[1] += 0;
        result[2] += 0.9591474245115451;
        result[3] += 0.019538188277087032;
        result[4] += 0;
        result[5] += 0.007104795737122556;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
        result[0] += 0.3569979716024341;
        result[1] += 0.01622718052738337;
        result[2] += 0;
        result[3] += 0.008113590263691685;
        result[4] += 0.5517241379310346;
        result[5] += 0.0669371196754564;
      } else {
        result[0] += 0.0069821567106283944;
        result[1] += 0.01008533747090768;
        result[2] += 0.004654771140418929;
        result[3] += 0.1474010861132661;
        result[4] += 0.10162916989914662;
        result[5] += 0.7292474786656322;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        result[0] += 0.00980392156862745;
        result[1] += 0.9254901960784314;
        result[2] += 0;
        result[3] += 0.00196078431372549;
        result[4] += 0.058823529411764705;
        result[5] += 0.00392156862745098;
      } else {
        result[0] += 0.7412244897959184;
        result[1] += 0.02040816326530612;
        result[2] += 0.053061224489795916;
        result[3] += 0.06938775510204082;
        result[4] += 0.05959183673469388;
        result[5] += 0.0563265306122449;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
        result[0] += 0;
        result[1] += 0.05;
        result[2] += 0.06666666666666667;
        result[3] += 0.03333333333333333;
        result[4] += 0.23333333333333334;
        result[5] += 0.6166666666666667;
      } else {
        result[0] += 0.0043859649122807015;
        result[1] += 0.008771929824561403;
        result[2] += 0.2543859649122807;
        result[3] += 0.5;
        result[4] += 0.039473684210526314;
        result[5] += 0.19298245614035087;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
        result[0] += 0.22916666666666666;
        result[1] += 0.041666666666666664;
        result[2] += 0.5208333333333334;
        result[3] += 0.041666666666666664;
        result[4] += 0.07291666666666667;
        result[5] += 0.09375;
      } else {
        result[0] += 0.0032432432432432435;
        result[1] += 0;
        result[2] += 0.8854054054054055;
        result[3] += 0.09837837837837839;
        result[4] += 0.004324324324324325;
        result[5] += 0.00864864864864865;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.0041841004184100415;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9581589958158996;
        result[5] += 0.03765690376569038;
      } else {
        result[0] += 0.04398340248962656;
        result[1] += 0.01991701244813278;
        result[2] += 0;
        result[3] += 0.12531120331950207;
        result[4] += 0.05726141078838174;
        result[5] += 0.7535269709543568;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        result[0] += 0.002150537634408602;
        result[1] += 0.9290322580645162;
        result[2] += 0;
        result[3] += 0.0064516129032258064;
        result[4] += 0.06236559139784946;
        result[5] += 0;
      } else {
        result[0] += 0.6594960049170253;
        result[1] += 0.02704363859864782;
        result[2] += 0.028272894898586358;
        result[3] += 0.06207744314689614;
        result[4] += 0.12661339889366935;
        result[5] += 0.09649661954517519;
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
        result[0] += 0.005235602094240838;
        result[1] += 0.005235602094240838;
        result[2] += 0.13089005235602094;
        result[3] += 0.5445026178010471;
        result[4] += 0.020942408376963352;
        result[5] += 0.2931937172774869;
      } else {
        result[0] += 0.07692307692307694;
        result[1] += 0.02307692307692308;
        result[2] += 0.6076923076923078;
        result[3] += 0.1384615384615385;
        result[4] += 0.02307692307692308;
        result[5] += 0.1307692307692308;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
        result[0] += 0.011494252873563218;
        result[1] += 0;
        result[2] += 0.5977011494252874;
        result[3] += 0.26436781609195403;
        result[4] += 0.022988505747126436;
        result[5] += 0.10344827586206896;
      } else {
        result[0] += 0.02947845804988662;
        result[1] += 0;
        result[2] += 0.9070294784580499;
        result[3] += 0.05555555555555555;
        result[4] += 0;
        result[5] += 0.007936507936507936;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        result[0] += 0.12979351032448377;
        result[1] += 0.008849557522123894;
        result[2] += 0.0058997050147492625;
        result[3] += 0.0029498525073746312;
        result[4] += 0.7197640117994101;
        result[5] += 0.13274336283185842;
      } else {
        result[0] += 0.003524229074889868;
        result[1] += 0.02026431718061674;
        result[2] += 0.003524229074889868;
        result[3] += 0.16651982378854627;
        result[4] += 0.04052863436123348;
        result[5] += 0.7656387665198238;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)50) ) ) {
        result[0] += 0;
        result[1] += 0.9771689497716894;
        result[2] += 0;
        result[3] += 0.00684931506849315;
        result[4] += 0.01598173515981735;
        result[5] += 0;
      } else {
        result[0] += 0.613599568267674;
        result[1] += 0.05180787911494873;
        result[2] += 0.04803022126281705;
        result[3] += 0.07177549919050188;
        result[4] += 0.1397733405288721;
        result[5] += 0.07501349163518618;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.1827956989247312;
        result[3] += 0.6344086021505376;
        result[4] += 0;
        result[5] += 0.1827956989247312;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7096774193548387;
        result[3] += 0.24193548387096775;
        result[4] += 0;
        result[5] += 0.04838709677419355;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
        result[0] += 0.225;
        result[1] += 0;
        result[2] += 0.425;
        result[3] += 0.05;
        result[4] += 0;
        result[5] += 0.3;
      } else {
        result[0] += 0.013856812933025405;
        result[1] += 0;
        result[2] += 0.9030023094688222;
        result[3] += 0.07736720554272518;
        result[4] += 0;
        result[5] += 0.005773672055427252;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)59.5) ) ) {
        result[0] += 0.1621621621621622;
        result[1] += 0.08880308880308882;
        result[2] += 0;
        result[3] += 0.011583011583011584;
        result[4] += 0.6602316602316604;
        result[5] += 0.07722007722007723;
      } else {
        result[0] += 0.01077943615257048;
        result[1] += 0.001658374792703151;
        result[2] += 0.004975124378109453;
        result[3] += 0.1351575456053068;
        result[4] += 0.07545605306799337;
        result[5] += 0.7719734660033167;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)51.5) ) ) {
        result[0] += 0.006550218340611354;
        result[1] += 0.9541484716157206;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.03493449781659389;
        result[5] += 0.0043668122270742364;
      } else {
        result[0] += 0.6207270754205101;
        result[1] += 0.03906673901247965;
        result[2] += 0.06348345089527943;
        result[3] += 0.07759088442756376;
        result[4] += 0.12045577862181227;
        result[5] += 0.07867607162235486;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)95.5) ) ) {
        result[0] += 0.06521739130434782;
        result[1] += 0.06521739130434782;
        result[2] += 0.021739130434782608;
        result[3] += 0.15217391304347827;
        result[4] += 0;
        result[5] += 0.6956521739130435;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5274725274725275;
        result[3] += 0.25274725274725274;
        result[4] += 0.02197802197802198;
        result[5] += 0.1978021978021978;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
        result[0] += 0.01928374655647383;
        result[1] += 0;
        result[2] += 0.790633608815427;
        result[3] += 0.1652892561983471;
        result[4] += 0;
        result[5] += 0.024793388429752067;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9678571428571429;
        result[3] += 0.02857142857142857;
        result[4] += 0;
        result[5] += 0.0035714285714285713;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.022151898734177215;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9525316455696202;
        result[5] += 0.02531645569620253;
      } else {
        result[0] += 0.08897637795275591;
        result[1] += 0.010236220472440945;
        result[2] += 0.010236220472440945;
        result[3] += 0.1251968503937008;
        result[4] += 0.07086614173228346;
        result[5] += 0.694488188976378;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
        result[0] += 0;
        result[1] += 0.8884462151394422;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.11155378486055777;
        result[5] += 0;
      } else {
        result[0] += 0.637355973317162;
        result[1] += 0.013341419041843543;
        result[2] += 0.07519708914493634;
        result[3] += 0.13826561552456038;
        result[4] += 0.04851425106124925;
        result[5] += 0.08732565191024864;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)88) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.04081632653061224;
        result[3] += 0;
        result[4] += 0.10204081632653061;
        result[5] += 0.8571428571428571;
      } else {
        result[0] += 0.13095238095238096;
        result[1] += 0.15476190476190477;
        result[2] += 0.15476190476190477;
        result[3] += 0.27380952380952384;
        result[4] += 0.023809523809523808;
        result[5] += 0.2619047619047619;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
        result[0] += 0.046875;
        result[1] += 0;
        result[2] += 0.6875;
        result[3] += 0.225;
        result[4] += 0;
        result[5] += 0.040625;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9371069182389937;
        result[3] += 0.055031446540880505;
        result[4] += 0;
        result[5] += 0.007861635220125786;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.00303951367781155;
        result[1] += 0.0790273556231003;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.817629179331307;
        result[5] += 0.10030395136778116;
      } else {
        result[0] += 0.04388185654008439;
        result[1] += 0.008438818565400843;
        result[2] += 0.018565400843881856;
        result[3] += 0.14767932489451477;
        result[4] += 0.060759493670886074;
        result[5] += 0.7206751054852321;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)55.5) ) ) {
        result[0] += 0;
        result[1] += 0.9119638826185101;
        result[2] += 0;
        result[3] += 0.01805869074492099;
        result[4] += 0.056433408577878104;
        result[5] += 0.013544018058690745;
      } else {
        result[0] += 0.6054114994363021;
        result[1] += 0.03664036076662908;
        result[2] += 0.04340473506200677;
        result[3] += 0.09075535512965051;
        result[4] += 0.10710259301014656;
        result[5] += 0.11668545659526494;
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)105.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.3524590163934426;
        result[3] += 0.4918032786885246;
        result[4] += 0;
        result[5] += 0.1557377049180328;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.8020833333333334;
        result[3] += 0.11458333333333333;
        result[4] += 0;
        result[5] += 0.08333333333333333;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)89) ) ) {
        result[0] += 0.5;
        result[1] += 0;
        result[2] += 0.125;
        result[3] += 0.125;
        result[4] += 0;
        result[5] += 0.25;
      } else {
        result[0] += 0.01611047180667434;
        result[1] += 0;
        result[2] += 0.9010356731875719;
        result[3] += 0.0759493670886076;
        result[4] += 0;
        result[5] += 0.006904487917146145;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)61.5) ) ) {
        result[0] += 0.003436426116838488;
        result[1] += 0.07560137457044673;
        result[2] += 0;
        result[3] += 0.013745704467353952;
        result[4] += 0.852233676975945;
        result[5] += 0.054982817869415807;
      } else {
        result[0] += 0.027049873203719356;
        result[1] += 0.011834319526627219;
        result[2] += 0.00507185122569738;
        result[3] += 0.12679628064243448;
        result[4] += 0.0650887573964497;
        result[5] += 0.7641589180050719;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.0015923566878980893;
        result[1] += 0.7945859872611465;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.19904458598726116;
        result[5] += 0.004777070063694267;
      } else {
        result[0] += 0.672090112640801;
        result[1] += 0.011889862327909888;
        result[2] += 0.04881101376720901;
        result[3] += 0.09762202753441802;
        result[4] += 0.07509386733416772;
        result[5] += 0.09449311639549436;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0.05263157894736842;
        result[2] += 0.05263157894736842;
        result[3] += 0.2631578947368421;
        result[4] += 0.07894736842105263;
        result[5] += 0.5526315789473685;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.47058823529411764;
        result[3] += 0.4215686274509804;
        result[4] += 0;
        result[5] += 0.10784313725490197;
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)87.5) ) ) {
        result[0] += 0.011600928074245941;
        result[1] += 0.009280742459396753;
        result[2] += 0.7679814385150813;
        result[3] += 0.1577726218097448;
        result[4] += 0.011600928074245941;
        result[5] += 0.04176334106728539;
      } else {
        result[0] += 0.005802707930367506;
        result[1] += 0;
        result[2] += 0.95357833655706;
        result[3] += 0.032882011605415866;
        result[4] += 0;
        result[5] += 0.007736943907156674;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0.0036900369003690036;
        result[1] += 0.04059040590405904;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.940959409594096;
        result[5] += 0.014760147601476014;
      } else {
        result[0] += 0.04133545310015898;
        result[1] += 0.0047694753577106515;
        result[2] += 0.003179650238473768;
        result[3] += 0.14864864864864866;
        result[4] += 0.057233704292527825;
        result[5] += 0.7448330683624801;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)104.5) ) ) {
        result[0] += 0.6472642607683353;
        result[1] += 0.04307334109429569;
        result[2] += 0.04947613504074505;
        result[3] += 0.06461001164144353;
        result[4] += 0.12747380675203726;
        result[5] += 0.0681024447031432;
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
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
        result[0] += 0;
        result[1] += 0.011627906976744186;
        result[2] += 0.06976744186046512;
        result[3] += 0.5116279069767442;
        result[4] += 0.023255813953488372;
        result[5] += 0.38372093023255816;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.48466257668711654;
        result[3] += 0.4171779141104294;
        result[4] += 0.012269938650306749;
        result[5] += 0.08588957055214724;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)75.5) ) ) {
        result[0] += 0.6578947368421053;
        result[1] += 0.02631578947368421;
        result[2] += 0.2894736842105263;
        result[3] += 0.02631578947368421;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.013745704467353952;
        result[1] += 0.004581901489117984;
        result[2] += 0.9117983963344788;
        result[3] += 0.058419243986254296;
        result[4] += 0;
        result[5] += 0.011454753722794959;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        result[0] += 0.016826923076923076;
        result[1] += 0.04807692307692308;
        result[2] += 0;
        result[3] += 0.014423076923076924;
        result[4] += 0.8293269230769231;
        result[5] += 0.09134615384615384;
      } else {
        result[0] += 0.12964311726147124;
        result[1] += 0.009468317552804079;
        result[2] += 0.003641660597232338;
        result[3] += 0.15222141296431171;
        result[4] += 0.07137654770575383;
        result[5] += 0.6336489439184269;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
        result[0] += 0.004158004158004159;
        result[1] += 0.9085239085239087;
        result[2] += 0.014553014553014557;
        result[3] += 0.0020790020790020796;
        result[4] += 0.06860706860706862;
        result[5] += 0.0020790020790020796;
      } else {
        result[0] += 0.7112135176651306;
        result[1] += 0.04377880184331798;
        result[2] += 0.04608294930875577;
        result[3] += 0.08832565284178188;
        result[4] += 0.05990783410138249;
        result[5] += 0.050691244239631346;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
        result[0] += 0.015625;
        result[1] += 0.015625;
        result[2] += 0.15625;
        result[3] += 0.546875;
        result[4] += 0.03125;
        result[5] += 0.234375;
      } else {
        result[0] += 0.13071895424836602;
        result[1] += 0.006535947712418301;
        result[2] += 0.5424836601307189;
        result[3] += 0.13071895424836602;
        result[4] += 0.026143790849673203;
        result[5] += 0.16339869281045752;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        result[0] += 0.03802281368821293;
        result[1] += 0;
        result[2] += 0.7376425855513308;
        result[3] += 0.18631178707224336;
        result[4] += 0;
        result[5] += 0.03802281368821293;
      } else {
        result[0] += 0.004225352112676056;
        result[1] += 0;
        result[2] += 0.967605633802817;
        result[3] += 0.02535211267605634;
        result[4] += 0;
        result[5] += 0.0028169014084507044;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.029166666666666667;
        result[2] += 0;
        result[3] += 0.0125;
        result[4] += 0.925;
        result[5] += 0.03333333333333333;
      } else {
        result[0] += 0.03715415019762846;
        result[1] += 0.015019762845849802;
        result[2] += 0.007905138339920948;
        result[3] += 0.1707509881422925;
        result[4] += 0.05612648221343874;
        result[5] += 0.7130434782608696;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        result[0] += 0.005338078291814947;
        result[1] += 0.8131672597864769;
        result[2] += 0;
        result[3] += 0.008896797153024912;
        result[4] += 0.1583629893238434;
        result[5] += 0.014234875444839857;
      } else {
        result[0] += 0.6793708408953418;
        result[1] += 0.022988505747126436;
        result[2] += 0.05747126436781609;
        result[3] += 0.07743496672716274;
        result[4] += 0.09860859044162129;
        result[5] += 0.06412583182093164;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)95.5) ) ) {
        result[0] += 0.14049586776859505;
        result[1] += 0.01652892561983471;
        result[2] += 0.15702479338842976;
        result[3] += 0.33884297520661155;
        result[4] += 0.05785123966942149;
        result[5] += 0.2892561983471074;
      } else {
        result[0] += 0.14285714285714285;
        result[1] += 0;
        result[2] += 0.75;
        result[3] += 0.05357142857142857;
        result[4] += 0;
        result[5] += 0.05357142857142857;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)85.5) ) ) {
        result[0] += 0.0037735849056603774;
        result[1] += 0;
        result[2] += 0.7622641509433963;
        result[3] += 0.19245283018867926;
        result[4] += 0;
        result[5] += 0.04150943396226415;
      } else {
        result[0] += 0.004518072289156627;
        result[1] += 0;
        result[2] += 0.957831325301205;
        result[3] += 0.03313253012048194;
        result[4] += 0;
        result[5] += 0.004518072289156627;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.3420074349442379;
        result[1] += 0.026022304832713755;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.570631970260223;
        result[5] += 0.06133828996282528;
      } else {
        result[0] += 0.007818608287724784;
        result[1] += 0.008600469116497263;
        result[2] += 0.001563721657544957;
        result[3] += 0.145426114151681;
        result[4] += 0.07427677873338545;
        result[5] += 0.7623143080531666;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        result[0] += 0;
        result[1] += 0.9094412331406551;
        result[2] += 0.005780346820809248;
        result[3] += 0;
        result[4] += 0.08285163776493257;
        result[5] += 0.0019267822736030828;
      } else {
        result[0] += 0.7244340359094458;
        result[1] += 0.03200624512099922;
        result[2] += 0.04918032786885246;
        result[3] += 0.0897736143637783;
        result[4] += 0.06401249024199844;
        result[5] += 0.04059328649492584;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0.010526315789473686;
        result[1] += 0.01578947368421053;
        result[2] += 0.13684210526315793;
        result[3] += 0.5263157894736843;
        result[4] += 0.06842105263157897;
        result[5] += 0.24210526315789477;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7580645161290323;
        result[3] += 0.16129032258064516;
        result[4] += 0;
        result[5] += 0.08064516129032258;
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
        result[0] += 0.41935483870967744;
        result[1] += 0;
        result[2] += 0.3548387096774194;
        result[3] += 0.0967741935483871;
        result[4] += 0;
        result[5] += 0.12903225806451613;
      } else {
        result[0] += 0.02159827213822894;
        result[1] += 0;
        result[2] += 0.9017278617710583;
        result[3] += 0.07235421166306695;
        result[4] += 0;
        result[5] += 0.004319654427645789;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        result[0] += 0.0038910505836575876;
        result[1] += 0.0038910505836575876;
        result[2] += 0.011673151750972763;
        result[3] += 0.007782101167315175;
        result[4] += 0.9494163424124513;
        result[5] += 0.023346303501945526;
      } else {
        result[0] += 0.04580745341614907;
        result[1] += 0.003105590062111801;
        result[2] += 0.003105590062111801;
        result[3] += 0.17701863354037267;
        result[4] += 0.05201863354037267;
        result[5] += 0.718944099378882;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9849137931034483;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.015086206896551725;
        result[5] += 0;
      } else {
        result[0] += 0.6358244365361803;
        result[1] += 0.03795966785290629;
        result[2] += 0.060498220640569395;
        result[3] += 0.0753262158956109;
        result[4] += 0.11506524317912219;
        result[5] += 0.0753262158956109;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.12244897959183673;
        result[3] += 0.5102040816326531;
        result[4] += 0.05102040816326531;
        result[5] += 0.3163265306122449;
      } else {
        result[0] += 0;
        result[1] += 0.07936507936507936;
        result[2] += 0.5555555555555556;
        result[3] += 0.2222222222222222;
        result[4] += 0;
        result[5] += 0.14285714285714285;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
        result[0] += 0.7272727272727273;
        result[1] += 0;
        result[2] += 0.18181818181818182;
        result[3] += 0.09090909090909091;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.010548523206751056;
        result[1] += 0;
        result[2] += 0.9082278481012659;
        result[3] += 0.07278481012658229;
        result[4] += 0;
        result[5] += 0.008438818565400845;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)88.5) ) ) {
        result[0] += 0;
        result[1] += 0.2727272727272727;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7272727272727273;
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)72.5) ) ) {
        result[0] += 0.03460207612456748;
        result[1] += 0.008996539792387544;
        result[2] += 0.001384083044982699;
        result[3] += 0.12179930795847752;
        result[4] += 0.22283737024221453;
        result[5] += 0.6103806228373703;
      } else {
        result[0] += 0.5840130505709625;
        result[1] += 0.04513322457857531;
        result[2] += 0.04187058183795541;
        result[3] += 0.09679173463839043;
        result[4] += 0.13268080478520936;
        result[5] += 0.09951060358890701;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)96.5) ) ) {
        result[0] += 0.00847457627118644;
        result[1] += 0;
        result[2] += 0.3559322033898305;
        result[3] += 0.4491525423728814;
        result[4] += 0;
        result[5] += 0.1864406779661017;
      } else {
        result[0] += 0.029914529914529916;
        result[1] += 0;
        result[2] += 0.7393162393162394;
        result[3] += 0.18376068376068377;
        result[4] += 0;
        result[5] += 0.04700854700854701;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)105.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7909090909090909;
        result[3] += 0.2;
        result[4] += 0;
        result[5] += 0.00909090909090909;
      } else {
        result[0] += 0.0034188034188034192;
        result[1] += 0;
        result[2] += 0.9487179487179488;
        result[3] += 0.03931623931623932;
        result[4] += 0;
        result[5] += 0.00854700854700855;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        result[0] += 0.12332439678284182;
        result[1] += 0.024128686327077747;
        result[2] += 0;
        result[3] += 0.00804289544235925;
        result[4] += 0.7211796246648794;
        result[5] += 0.12332439678284182;
      } else {
        result[0] += 0.0008764241893076249;
        result[1] += 0.013146362839614373;
        result[2] += 0.007887817703768623;
        result[3] += 0.16739702015775634;
        result[4] += 0.044697633654688866;
        result[5] += 0.7659947414548641;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)58.5) ) ) {
        result[0] += 0;
        result[1] += 0.946611909650924;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.053388090349075976;
        result[5] += 0;
      } else {
        result[0] += 0.6448979591836735;
        result[1] += 0.024489795918367353;
        result[2] += 0.05830903790087465;
        result[3] += 0.07871720116618078;
        result[4] += 0.10320699708454813;
        result[5] += 0.0903790087463557;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)89.5) ) ) {
        result[0] += 0;
        result[1] += 0.0196078431372549;
        result[2] += 0.058823529411764705;
        result[3] += 0;
        result[4] += 0.2549019607843137;
        result[5] += 0.6666666666666666;
      } else {
        result[0] += 0.03508771929824562;
        result[1] += 0.052631578947368425;
        result[2] += 0.26315789473684215;
        result[3] += 0.4736842105263158;
        result[4] += 0.023391812865497078;
        result[5] += 0.152046783625731;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.013590033975084938;
        result[1] += 0;
        result[2] += 0.9014722536806342;
        result[3] += 0.08267270668176671;
        result[4] += 0;
        result[5] += 0.0022650056625141564;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9909502262443439;
        result[5] += 0.00904977375565611;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.11627906976744186;
        result[4] += 0.5581395348837209;
        result[5] += 0.32558139534883723;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
        result[0] += 0.027054108216432865;
        result[1] += 0.004008016032064128;
        result[2] += 0.003006012024048096;
        result[3] += 0.047094188376753505;
        result[4] += 0.06212424849699399;
        result[5] += 0.8567134268537074;
      } else {
        result[0] += 0.03492063492063492;
        result[1] += 0.01904761904761905;
        result[2] += 0.04126984126984127;
        result[3] += 0.5142857142857142;
        result[4] += 0.01904761904761905;
        result[5] += 0.37142857142857144;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)83) ) ) {
        result[0] += 0;
        result[1] += 0.14285714285714285;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8571428571428571;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.9931506849315068;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.00684931506849315;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
        result[0] += 0.7065081351689612;
        result[1] += 0.040675844806007506;
        result[2] += 0.02127659574468085;
        result[3] += 0.05381727158948686;
        result[4] += 0.12703379224030037;
        result[5] += 0.05068836045056321;
      } else {
        result[0] += 0.0505804311774461;
        result[1] += 0.004975124378109453;
        result[2] += 0.7305140961857379;
        result[3] += 0.14096185737976782;
        result[4] += 0.0024875621890547263;
        result[5] += 0.07048092868988391;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        result[0] += 0.0032679738562091504;
        result[1] += 0.026143790849673203;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8986928104575164;
        result[5] += 0.0718954248366013;
      } else {
        result[0] += 0.0676056338028169;
        result[1] += 0.004929577464788733;
        result[2] += 0.005633802816901409;
        result[3] += 0.1823943661971831;
        result[4] += 0.04788732394366197;
        result[5] += 0.6915492957746479;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        result[0] += 0.0039447731755424065;
        result[1] += 0.8777120315581854;
        result[2] += 0;
        result[3] += 0.0039447731755424065;
        result[4] += 0.11045364891518737;
        result[5] += 0.0039447731755424065;
      } else {
        result[0] += 0.7321814254859611;
        result[1] += 0.03311735061195104;
        result[2] += 0.04895608351331893;
        result[3] += 0.056155507559395246;
        result[4] += 0.09575233981281497;
        result[5] += 0.033837293016558675;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
        result[0] += 0.07471264367816093;
        result[1] += 0.022988505747126436;
        result[2] += 0.14942528735632185;
        result[3] += 0.46551724137931033;
        result[4] += 0.022988505747126436;
        result[5] += 0.26436781609195403;
      } else {
        result[0] += 0.044444444444444446;
        result[1] += 0.0031746031746031746;
        result[2] += 0.7619047619047619;
        result[3] += 0.16825396825396827;
        result[4] += 0;
        result[5] += 0.022222222222222223;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
        result[0] += 0.010638297872340427;
        result[1] += 0;
        result[2] += 0.8865248226950355;
        result[3] += 0.10283687943262412;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9838337182448037;
        result[3] += 0.016166281755196306;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)71.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.05673758865248227;
        result[2] += 0;
        result[3] += 0.014184397163120567;
        result[4] += 0.8829787234042553;
        result[5] += 0.04609929078014184;
      } else {
        result[0] += 0.017191977077363897;
        result[1] += 0.0019102196752626551;
        result[2] += 0.009551098376313277;
        result[3] += 0.14613180515759314;
        result[4] += 0.06972301814708691;
        result[5] += 0.7554918815663801;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        result[0] += 0.002262443438914028;
        result[1] += 0.9524886877828055;
        result[2] += 0;
        result[3] += 0.013574660633484165;
        result[4] += 0.031674208144796386;
        result[5] += 0;
      } else {
        result[0] += 0.5853909465020576;
        result[1] += 0.032407407407407406;
        result[2] += 0.06430041152263374;
        result[3] += 0.08487654320987655;
        result[4] += 0.11934156378600823;
        result[5] += 0.11368312757201646;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)86) ) ) {
        result[0] += 0.013888888888888888;
        result[1] += 0.041666666666666664;
        result[2] += 0.09722222222222222;
        result[3] += 0.027777777777777776;
        result[4] += 0.1388888888888889;
        result[5] += 0.6805555555555556;
      } else {
        result[0] += 0.03896103896103896;
        result[1] += 0.025974025974025976;
        result[2] += 0.3246753246753247;
        result[3] += 0.4155844155844156;
        result[4] += 0;
        result[5] += 0.19480519480519481;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
        result[0] += 0.06069364161849711;
        result[1] += 0;
        result[2] += 0.7196531791907514;
        result[3] += 0.1936416184971098;
        result[4] += 0;
        result[5] += 0.02601156069364162;
      } else {
        result[0] += 0.003246753246753247;
        result[1] += 0;
        result[2] += 0.961038961038961;
        result[3] += 0.03571428571428571;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        result[0] += 0.010489510489510492;
        result[1] += 0.052447552447552455;
        result[2] += 0;
        result[3] += 0.006993006993006994;
        result[4] += 0.8916083916083917;
        result[5] += 0.03846153846153847;
      } else {
        result[0] += 0.051515151515151514;
        result[1] += 0.00909090909090909;
        result[2] += 0.0030303030303030303;
        result[3] += 0.16818181818181818;
        result[4] += 0.04772727272727273;
        result[5] += 0.7204545454545455;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)104.5) ) ) {
        result[0] += 0.6495774647887325;
        result[1] += 0.0467605633802817;
        result[2] += 0.04507042253521128;
        result[3] += 0.0715492957746479;
        result[4] += 0.12676056338028172;
        result[5] += 0.06028169014084508;
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
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)77) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.13043478260869565;
        result[3] += 0.7391304347826086;
        result[4] += 0;
        result[5] += 0.13043478260869565;
      } else {
        result[0] += 0.04166666666666667;
        result[1] += 0;
        result[2] += 0.5312500000000001;
        result[3] += 0.28125000000000006;
        result[4] += 0.010416666666666668;
        result[5] += 0.13541666666666669;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.21428571428571427;
        result[3] += 0.5;
        result[4] += 0;
        result[5] += 0.2857142857142857;
      } else {
        result[0] += 0.011982570806100218;
        result[1] += 0;
        result[2] += 0.9161220043572985;
        result[3] += 0.06100217864923747;
        result[4] += 0;
        result[5] += 0.010893246187363835;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        result[0] += 0.008064516129032258;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9435483870967742;
        result[5] += 0.04838709677419355;
      } else {
        result[0] += 0.04253611556982344;
        result[1] += 0.01765650080256822;
        result[2] += 0.012038523274478331;
        result[3] += 0.1548956661316212;
        result[4] += 0.05537720706260032;
        result[5] += 0.7174959871589085;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)56.5) ) ) {
        result[0] += 0.005649717514124295;
        result[1] += 0.8851224105461395;
        result[2] += 0.007532956685499059;
        result[3] += 0.0018832391713747647;
        result[4] += 0.09039548022598871;
        result[5] += 0.009416195856873824;
      } else {
        result[0] += 0.6333523700742433;
        result[1] += 0.036550542547115934;
        result[2] += 0.05825242718446602;
        result[3] += 0.08623643632210165;
        result[4] += 0.10394060536836093;
        result[5] += 0.08166761850371217;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)100.5) ) ) {
        result[0] += 0.011904761904761904;
        result[1] += 0.011904761904761904;
        result[2] += 0.15476190476190477;
        result[3] += 0.5;
        result[4] += 0.07142857142857142;
        result[5] += 0.25;
      } else {
        result[0] += 0.011764705882352941;
        result[1] += 0.011764705882352941;
        result[2] += 0.6882352941176471;
        result[3] += 0.15294117647058825;
        result[4] += 0.03529411764705882;
        result[5] += 0.1;
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
        result[0] += 0.47058823529411764;
        result[1] += 0.17647058823529413;
        result[2] += 0.17647058823529413;
        result[3] += 0;
        result[4] += 0.17647058823529413;
        result[5] += 0;
      } else {
        result[0] += 0.005134788189987163;
        result[1] += 0;
        result[2] += 0.9101412066752247;
        result[3] += 0.07702182284980745;
        result[4] += 0;
        result[5] += 0.007702182284980745;
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)66.5) ) ) {
        result[0] += 0.029508196721311476;
        result[1] += 0.05573770491803279;
        result[2] += 0;
        result[3] += 0.003278688524590164;
        result[4] += 0.8721311475409836;
        result[5] += 0.03934426229508197;
      } else {
        result[0] += 0.8090909090909091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.1;
        result[5] += 0.09090909090909091;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
        result[0] += 0.0011013215859030838;
        result[1] += 0.0011013215859030838;
        result[2] += 0.0011013215859030838;
        result[3] += 0.04515418502202643;
        result[4] += 0.09801762114537445;
        result[5] += 0.8535242290748899;
      } else {
        result[0] += 0.01818181818181818;
        result[1] += 0.03896103896103896;
        result[2] += 0.01818181818181818;
        result[3] += 0.38441558441558443;
        result[4] += 0.08051948051948052;
        result[5] += 0.4597402597402597;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)103.5) ) ) {
        result[0] += 0.7156937073540561;
        result[1] += 0.06368460955269144;
        result[2] += 0.008339651250947688;
        result[3] += 0.07202426080363912;
        result[4] += 0.0978013646702047;
        result[5] += 0.04245640636846096;
      } else {
        result[0] += 0.010498687664041995;
        result[1] += 0.9816272965879265;
        result[2] += 0.005249343832020997;
        result[3] += 0;
        result[4] += 0.0026246719160104987;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        result[0] += 0;
        result[1] += 0.010810810810810811;
        result[2] += 0.2594594594594595;
        result[3] += 0.5405405405405406;
        result[4] += 0.005405405405405406;
        result[5] += 0.1837837837837838;
      } else {
        result[0] += 0.025823686553873553;
        result[1] += 0;
        result[2] += 0.8539626001780944;
        result[3] += 0.08459483526268922;
        result[4] += 0.008904719501335707;
        result[5] += 0.026714158504007122;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.0072992700729927005;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9635036496350365;
        result[5] += 0.029197080291970802;
      } else {
        result[0] += 0.030327868852459017;
        result[1] += 0.004918032786885246;
        result[2] += 0.004098360655737705;
        result[3] += 0.14918032786885246;
        result[4] += 0.05327868852459016;
        result[5] += 0.7581967213114754;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)55.5) ) ) {
        result[0] += 0;
        result[1] += 0.9541484716157205;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.04585152838427948;
        result[5] += 0;
      } else {
        result[0] += 0.6806825106642291;
        result[1] += 0.038391224862888484;
        result[2] += 0.044485070079219986;
        result[3] += 0.06398537477148081;
        result[4] += 0.12492382693479585;
        result[5] += 0.04753199268738574;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
        result[0] += 0.005952380952380952;
        result[1] += 0;
        result[2] += 0.06547619047619048;
        result[3] += 0.3273809523809524;
        result[4] += 0.06547619047619048;
        result[5] += 0.5357142857142857;
      } else {
        result[0] += 0.16964285714285715;
        result[1] += 0.23214285714285715;
        result[2] += 0.4107142857142857;
        result[3] += 0.09821428571428571;
        result[4] += 0.05357142857142857;
        result[5] += 0.03571428571428571;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        result[0] += 0.014925373134328358;
        result[1] += 0;
        result[2] += 0.5597014925373134;
        result[3] += 0.373134328358209;
        result[4] += 0;
        result[5] += 0.05223880597014925;
      } else {
        result[0] += 0.008547008547008548;
        result[1] += 0;
        result[2] += 0.9255189255189256;
        result[3] += 0.05372405372405373;
        result[4] += 0;
        result[5] += 0.01221001221001221;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        result[0] += 0.17231638418079095;
        result[1] += 0.03954802259887006;
        result[2] += 0.002824858757062147;
        result[3] += 0.011299435028248588;
        result[4] += 0.6666666666666666;
        result[5] += 0.10734463276836158;
      } else {
        result[0] += 0.0008733624454148472;
        result[1] += 0.00611353711790393;
        result[2] += 0.00611353711790393;
        result[3] += 0.1685589519650655;
        result[4] += 0.07074235807860262;
        result[5] += 0.7475982532751092;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9655913978494624;
        result[2] += 0;
        result[3] += 0.010752688172043012;
        result[4] += 0.017204301075268817;
        result[5] += 0.0064516129032258064;
      } else {
        result[0] += 0.6176641487507263;
        result[1] += 0.04067402672864614;
        result[2] += 0.06042998256827426;
        result[3] += 0.08192911098198721;
        result[4] += 0.11098198721673445;
        result[5] += 0.08832074375363161;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
        result[0] += 0.03571428571428571;
        result[1] += 0.03571428571428571;
        result[2] += 0.03571428571428571;
        result[3] += 0.5238095238095238;
        result[4] += 0.023809523809523808;
        result[5] += 0.34523809523809523;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6041666666666667;
        result[3] += 0.35416666666666674;
        result[4] += 0;
        result[5] += 0.04166666666666667;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)85.5) ) ) {
        result[0] += 0.013440860215053765;
        result[1] += 0;
        result[2] += 0.7822580645161291;
        result[3] += 0.16397849462365593;
        result[4] += 0;
        result[5] += 0.040322580645161296;
      } else {
        result[0] += 0.03139717425431711;
        result[1] += 0;
        result[2] += 0.9293563579277865;
        result[3] += 0.03924646781789639;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.10652920962199312;
        result[2] += 0;
        result[3] += 0.027491408934707903;
        result[4] += 0.8281786941580757;
        result[5] += 0.037800687285223365;
      } else {
        result[0] += 0.03307223672758921;
        result[1] += 0;
        result[2] += 0.0034812880765883376;
        result[3] += 0.1453437771975631;
        result[4] += 0.06179286335944299;
        result[5] += 0.7563098346388164;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9383259911894273;
        result[2] += 0;
        result[3] += 0.01762114537444934;
        result[4] += 0.039647577092511016;
        result[5] += 0.004405286343612335;
      } else {
        result[0] += 0.611170784103115;
        result[1] += 0.03276047261009667;
        result[2] += 0.06928034371643395;
        result[3] += 0.09129967776584318;
        result[4] += 0.09613319011815252;
        result[5] += 0.09935553168635876;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        result[0] += 0.03;
        result[1] += 0.02;
        result[2] += 0.13;
        result[3] += 0.37;
        result[4] += 0.08;
        result[5] += 0.37;
      } else {
        result[0] += 0.21212121212121213;
        result[1] += 0.030303030303030304;
        result[2] += 0.6060606060606061;
        result[3] += 0.030303030303030304;
        result[4] += 0.12121212121212122;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
        result[0] += 0.02185792349726776;
        result[1] += 0;
        result[2] += 0.7513661202185792;
        result[3] += 0.1912568306010929;
        result[4] += 0.00273224043715847;
        result[5] += 0.03278688524590164;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9544658493870403;
        result[3] += 0.04203152364273205;
        result[4] += 0;
        result[5] += 0.0035026269702276708;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.20044543429844097;
        result[1] += 0.044543429844097995;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.6458797327394209;
        result[5] += 0.1091314031180401;
      } else {
        result[0] += 0.0020181634712411706;
        result[1] += 0.014127144298688193;
        result[2] += 0.008072653884964682;
        result[3] += 0.07366296670030273;
        result[4] += 0.06357214934409687;
        result[5] += 0.8385469223007064;
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)104.5) ) ) {
        result[0] += 0.5516877637130803;
        result[1] += 0.04324894514767933;
        result[2] += 0.05854430379746837;
        result[3] += 0.1445147679324895;
        result[4] += 0.10021097046413505;
        result[5] += 0.10179324894514771;
      } else {
        result[0] += 0.009433962264150943;
        result[1] += 0.9693396226415094;
        result[2] += 0.01650943396226415;
        result[3] += 0;
        result[4] += 0.0047169811320754715;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)94.5) ) ) {
        result[0] += 0.02040816326530612;
        result[1] += 0.09183673469387756;
        result[2] += 0.14285714285714285;
        result[3] += 0.17346938775510204;
        result[4] += 0.1836734693877551;
        result[5] += 0.3877551020408163;
      } else {
        result[0] += 0.06557377049180328;
        result[1] += 0;
        result[2] += 0.5491803278688525;
        result[3] += 0.3360655737704918;
        result[4] += 0;
        result[5] += 0.04918032786885246;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)83.5) ) ) {
        result[0] += 0.009523809523809526;
        result[1] += 0;
        result[2] += 0.7333333333333334;
        result[3] += 0.2380952380952381;
        result[4] += 0;
        result[5] += 0.019047619047619053;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9352226720647774;
        result[3] += 0.05668016194331984;
        result[4] += 0.001349527665317139;
        result[5] += 0.006747638326585695;
      }
    }
  }
  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)99) ) ) {
        result[0] += 0.0038910505836575876;
        result[1] += 0.011673151750972763;
        result[2] += 0.007782101167315175;
        result[3] += 0;
        result[4] += 0.9416342412451362;
        result[5] += 0.03501945525291829;
      } else {
        result[0] += 0;
        result[1] += 0.875;
        result[2] += 0.125;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)88.5) ) ) {
        result[0] += 0.015294117647058824;
        result[1] += 0;
        result[2] += 0.004705882352941176;
        result[3] += 0.05176470588235294;
        result[4] += 0.047058823529411764;
        result[5] += 0.8811764705882353;
      } else {
        result[0] += 0.06982543640897755;
        result[1] += 0.0399002493765586;
        result[2] += 0.08977556109725686;
        result[3] += 0.3516209476309227;
        result[4] += 0.04738154613466334;
        result[5] += 0.4014962593516209;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9630434782608696;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.03695652173913044;
        result[5] += 0;
      } else {
        result[0] += 0.6637445209768316;
        result[1] += 0.02567313713212273;
        result[2] += 0.02567313713212273;
        result[3] += 0.061365059486537255;
        result[4] += 0.12648716343143393;
        result[5] += 0.09705698184095178;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
        result[0] += 0.13227513227513227;
        result[1] += 0.0582010582010582;
        result[2] += 0.1693121693121693;
        result[3] += 0.42328042328042326;
        result[4] += 0.042328042328042326;
        result[5] += 0.1746031746031746;
      } else {
        result[0] += 0.03409090909090909;
        result[1] += 0;
        result[2] += 0.8446969696969697;
        result[3] += 0.10037878787878787;
        result[4] += 0;
        result[5] += 0.020833333333333332;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)94) ) ) {
        result[0] += 0;
        result[1] += 0.3478260869565218;
        result[2] += 0;
        result[3] += 0.04347826086956522;
        result[4] += 0.5652173913043479;
        result[5] += 0.04347826086956522;
      } else {
        result[0] += 0;
        result[1] += 0.9873684210526316;
        result[2] += 0;
        result[3] += 0.008421052631578947;
        result[4] += 0.004210526315789474;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)70.5) ) ) {
        result[0] += 0.016786570743405275;
        result[1] += 0.0007993605115907274;
        result[2] += 0.003996802557953637;
        result[3] += 0.07194244604316546;
        result[4] += 0.22941646682653877;
        result[5] += 0.6770583533173461;
      } else {
        result[0] += 0.5366682855755222;
        result[1] += 0.04176784847013113;
        result[2] += 0.06168042739193783;
        result[3] += 0.12336085478387566;
        result[4] += 0.11656143759106362;
        result[5] += 0.11996114618746964;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)85.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.21428571428571427;
        result[3] += 0.5714285714285714;
        result[4] += 0;
        result[5] += 0.21428571428571427;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7096774193548387;
        result[3] += 0.2903225806451613;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
        result[0] += 0.0816326530612245;
        result[1] += 0.06122448979591837;
        result[2] += 0.28571428571428575;
        result[3] += 0.10204081632653063;
        result[4] += 0.163265306122449;
        result[5] += 0.3061224489795919;
      } else {
        result[0] += 0.00468384074941452;
        result[1] += 0.00585480093676815;
        result[2] += 0.914519906323185;
        result[3] += 0.07142857142857142;
        result[4] += 0;
        result[5] += 0.00351288056206089;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.008438818565400843;
        result[2] += 0;
        result[3] += 0.016877637130801686;
        result[4] += 0.9156118143459916;
        result[5] += 0.05907172995780591;
      } else {
        result[0] += 0.02365415986949429;
        result[1] += 0.02365415986949429;
        result[2] += 0.005709624796084829;
        result[3] += 0.14518760195758565;
        result[4] += 0.048939641109298535;
        result[5] += 0.7528548123980424;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9389002036659878;
        result[2] += 0;
        result[3] += 0.010183299389002037;
        result[4] += 0.05091649694501019;
        result[5] += 0;
      } else {
        result[0] += 0.6266447368421053;
        result[1] += 0.0356359649122807;
        result[2] += 0.046052631578947366;
        result[3] += 0.07894736842105263;
        result[4] += 0.1288377192982456;
        result[5] += 0.08388157894736842;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)101) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.25274725274725274;
        result[3] += 0.5604395604395604;
        result[4] += 0;
        result[5] += 0.18681318681318682;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7352941176470589;
        result[3] += 0.16176470588235295;
        result[4] += 0;
        result[5] += 0.10294117647058823;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6627906976744187;
        result[3] += 0.2674418604651163;
        result[4] += 0;
        result[5] += 0.06976744186046513;
      } else {
        result[0] += 0.014943960149439602;
        result[1] += 0;
        result[2] += 0.9364881693648817;
        result[3] += 0.038605230386052306;
        result[4] += 0;
        result[5] += 0.009962640099626401;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62) ) ) {
        result[0] += 0;
        result[1] += 0.027522935779816515;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.963302752293578;
        result[5] += 0.009174311926605505;
      } else {
        result[0] += 0.052631578947368425;
        result[1] += 0.2456140350877193;
        result[2] += 0;
        result[3] += 0.10526315789473685;
        result[4] += 0.2105263157894737;
        result[5] += 0.3859649122807018;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
        result[0] += 0.01995798319327731;
        result[1] += 0.0010504201680672268;
        result[2] += 0.0010504201680672268;
        result[3] += 0.04936974789915966;
        result[4] += 0.07983193277310924;
        result[5] += 0.8487394957983193;
      } else {
        result[0] += 0.04864864864864865;
        result[1] += 0.016216216216216217;
        result[2] += 0.07837837837837838;
        result[3] += 0.45675675675675675;
        result[4] += 0.04054054054054054;
        result[5] += 0.35945945945945945;
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9886104783599089;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.011389521640091117;
        result[5] += 0;
      } else {
        result[0] += 0.6893890675241158;
        result[1] += 0.03022508038585209;
        result[2] += 0.024437299035369776;
        result[3] += 0.06816720257234726;
        result[4] += 0.11189710610932475;
        result[5] += 0.07588424437299035;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0.011494252873563218;
        result[2] += 0.2681992337164751;
        result[3] += 0.4827586206896552;
        result[4] += 0.038314176245210725;
        result[5] += 0.19923371647509577;
      } else {
        result[0] += 0.04106776180698152;
        result[1] += 0.009240246406570842;
        result[2] += 0.8326488706365504;
        result[3] += 0.0811088295687885;
        result[4] += 0.011293634496919919;
        result[5] += 0.024640657084188913;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        result[0] += 0.008620689655172414;
        result[1] += 0.004310344827586207;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9051724137931034;
        result[5] += 0.08189655172413793;
      } else {
        result[0] += 0.03902439024390244;
        result[1] += 0.030894308943089432;
        result[2] += 0.014634146341463415;
        result[3] += 0.13089430894308943;
        result[4] += 0.04390243902439024;
        result[5] += 0.740650406504065;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9834905660377359;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.01650943396226415;
        result[5] += 0;
      } else {
        result[0] += 0.674669867947179;
        result[1] += 0.03181272509003602;
        result[2] += 0.01320528211284514;
        result[3] += 0.052220888355342145;
        result[4] += 0.13025210084033617;
        result[5] += 0.09783913565426172;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.17901234567901234;
        result[3] += 0.5493827160493827;
        result[4] += 0;
        result[5] += 0.2716049382716049;
      } else {
        result[0] += 0.09401709401709402;
        result[1] += 0;
        result[2] += 0.6239316239316239;
        result[3] += 0.1282051282051282;
        result[4] += 0.02564102564102564;
        result[5] += 0.1282051282051282;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        result[0] += 0.07849829351535836;
        result[1] += 0;
        result[2] += 0.7303754266211604;
        result[3] += 0.17064846416382254;
        result[4] += 0;
        result[5] += 0.020477815699658702;
      } else {
        result[0] += 0.004273504273504275;
        result[1] += 0;
        result[2] += 0.9287749287749288;
        result[3] += 0.05413105413105414;
        result[4] += 0;
        result[5] += 0.012820512820512822;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        result[0] += 0.22439024390243903;
        result[1] += 0.02926829268292683;
        result[2] += 0;
        result[3] += 0.02195121951219512;
        result[4] += 0.6365853658536585;
        result[5] += 0.08780487804878048;
      } else {
        result[0] += 0.0062063615205585725;
        result[1] += 0.004654771140418929;
        result[2] += 0.005430566330488751;
        result[3] += 0.17222653219550038;
        result[4] += 0.060512024825446084;
        result[5] += 0.7509697439875873;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9930555555555556;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.006944444444444444;
        result[5] += 0;
      } else {
        result[0] += 0.6914675767918089;
        result[1] += 0.043003412969283276;
        result[2] += 0.05665529010238908;
        result[3] += 0.06075085324232082;
        result[4] += 0.11262798634812286;
        result[5] += 0.03549488054607509;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)85.5) ) ) {
        result[0] += 0.015463917525773196;
        result[1] += 0.005154639175257732;
        result[2] += 0.27319587628865977;
        result[3] += 0.4690721649484536;
        result[4] += 0.005154639175257732;
        result[5] += 0.23195876288659795;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7246376811594203;
        result[3] += 0.18840579710144928;
        result[4] += 0.014492753623188406;
        result[5] += 0.07246376811594203;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
        result[0] += 0.46511627906976744;
        result[1] += 0.023255813953488372;
        result[2] += 0.4418604651162791;
        result[3] += 0.023255813953488372;
        result[4] += 0;
        result[5] += 0.046511627906976744;
      } else {
        result[0] += 0.011904761904761906;
        result[1] += 0.0032467532467532474;
        result[2] += 0.9145021645021646;
        result[3] += 0.060606060606060615;
        result[4] += 0;
        result[5] += 0.009740259740259742;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.004329004329004329;
        result[1] += 0.004329004329004329;
        result[2] += 0.012987012987012988;
        result[3] += 0;
        result[4] += 0.948051948051948;
        result[5] += 0.030303030303030304;
      } else {
        result[0] += 0.03571428571428571;
        result[1] += 0.002380952380952381;
        result[2] += 0.006349206349206349;
        result[3] += 0.15317460317460319;
        result[4] += 0.05238095238095238;
        result[5] += 0.75;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6076581576026637;
        result[1] += 0.059378468368479466;
        result[2] += 0.04716981132075472;
        result[3] += 0.08268590455049944;
        result[4] += 0.13706992230854606;
        result[5] += 0.0660377358490566;
      } else {
        result[0] += 0.004464285714285714;
        result[1] += 0.9955357142857143;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.34444444444444444;
        result[3] += 0.5;
        result[4] += 0;
        result[5] += 0.15555555555555556;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5882352941176471;
        result[3] += 0.058823529411764705;
        result[4] += 0;
        result[5] += 0.35294117647058826;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)87.5) ) ) {
        result[0] += 0.024271844660194174;
        result[1] += 0;
        result[2] += 0.7985436893203883;
        result[3] += 0.16019417475728157;
        result[4] += 0;
        result[5] += 0.01699029126213592;
      } else {
        result[0] += 0.0035335689045936395;
        result[1] += 0;
        result[2] += 0.9664310954063604;
        result[3] += 0.024734982332155476;
        result[4] += 0;
        result[5] += 0.00530035335689046;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        result[0] += 0.19315403422982885;
        result[1] += 0.039119804400977995;
        result[2] += 0;
        result[3] += 0.009779951100244499;
        result[4] += 0.6601466992665037;
        result[5] += 0.097799511002445;
      } else {
        result[0] += 0.000992063492063492;
        result[1] += 0.000992063492063492;
        result[2] += 0.007936507936507936;
        result[3] += 0.10119047619047619;
        result[4] += 0.0744047619047619;
        result[5] += 0.814484126984127;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)59.5) ) ) {
        result[0] += 0;
        result[1] += 0.9352678571428571;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.05803571428571429;
        result[5] += 0.006696428571428571;
      } else {
        result[0] += 0.6278938452851497;
        result[1] += 0.025409373235460192;
        result[2] += 0.050818746470920384;
        result[3] += 0.11801242236024845;
        result[4] += 0.07171089779785432;
        result[5] += 0.10615471485036702;
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.17687074829931973;
        result[3] += 0.3469387755102041;
        result[4] += 0.11564625850340136;
        result[5] += 0.36054421768707484;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.8333333333333334;
        result[3] += 0.1111111111111111;
        result[4] += 0;
        result[5] += 0.05555555555555555;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        result[0] += 0;
        result[1] += 0.09774436090225563;
        result[2] += 0.48120300751879697;
        result[3] += 0.2857142857142857;
        result[4] += 0;
        result[5] += 0.13533834586466165;
      } else {
        result[0] += 0.009153318077803204;
        result[1] += 0.002288329519450801;
        result[2] += 0.919908466819222;
        result[3] += 0.06292906178489703;
        result[4] += 0;
        result[5] += 0.005720823798627002;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)69.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.03308823529411765;
        result[1] += 0.058823529411764705;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8014705882352942;
        result[5] += 0.10661764705882353;
      } else {
        result[0] += 0.006880733944954129;
        result[1] += 0.0022935779816513763;
        result[2] += 0.0045871559633027525;
        result[3] += 0.06995412844036697;
        result[4] += 0.06422018348623854;
        result[5] += 0.8520642201834863;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9764453961456103;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.023554603854389723;
        result[5] += 0;
      } else {
        result[0] += 0.562279374684821;
        result[1] += 0.02723146747352496;
        result[2] += 0.0448814926878467;
        result[3] += 0.11699445284921836;
        result[4] += 0.1341401916288452;
        result[5] += 0.11447302067574382;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
        result[0] += 0;
        result[1] += 0.010309278350515464;
        result[2] += 0.07216494845360824;
        result[3] += 0.16494845360824742;
        result[4] += 0.1134020618556701;
        result[5] += 0.6391752577319587;
      } else {
        result[0] += 0.005050505050505051;
        result[1] += 0;
        result[2] += 0.4393939393939394;
        result[3] += 0.4797979797979798;
        result[4] += 0;
        result[5] += 0.07575757575757576;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75.5) ) ) {
        result[0] += 0.2413793103448276;
        result[1] += 0.3448275862068966;
        result[2] += 0.034482758620689655;
        result[3] += 0;
        result[4] += 0.2413793103448276;
        result[5] += 0.13793103448275862;
      } else {
        result[0] += 0.018722466960352426;
        result[1] += 0;
        result[2] += 0.9041850220264318;
        result[3] += 0.06607929515418504;
        result[4] += 0;
        result[5] += 0.01101321585903084;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.01107011070110701;
        result[3] += 0.0036900369003690036;
        result[4] += 0.955719557195572;
        result[5] += 0.02952029520295203;
      } else {
        result[0] += 0.037480063795853266;
        result[1] += 0.005582137161084529;
        result[2] += 0.005582137161084529;
        result[3] += 0.1419457735247209;
        result[4] += 0.05263157894736842;
        result[5] += 0.7567783094098883;
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)104.5) ) ) {
        result[0] += 0.630712008501594;
        result[1] += 0.05154091392136025;
        result[2] += 0.06588735387885228;
        result[3] += 0.07545164718384698;
        result[4] += 0.1099893730074389;
        result[5] += 0.06641870350690754;
      } else {
        result[0] += 0.007653061224489796;
        result[1] += 0.9744897959183674;
        result[2] += 0;
        result[3] += 0.015306122448979591;
        result[4] += 0.002551020408163265;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.1;
        result[3] += 0.16666666666666666;
        result[4] += 0.2;
        result[5] += 0.5333333333333333;
      } else {
        result[0] += 0.21929824561403508;
        result[1] += 0.07894736842105263;
        result[2] += 0.5087719298245614;
        result[3] += 0.12280701754385964;
        result[4] += 0.008771929824561403;
        result[5] += 0.06140350877192982;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.45871559633027525;
        result[3] += 0.3944954128440367;
        result[4] += 0;
        result[5] += 0.14678899082568808;
      } else {
        result[0] += 0.005376344086021506;
        result[1] += 0;
        result[2] += 0.9354838709677419;
        result[3] += 0.05913978494623656;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.05106382978723405;
        result[2] += 0.004255319148936171;
        result[3] += 0.012765957446808512;
        result[4] += 0.8851063829787235;
        result[5] += 0.04680851063829788;
      } else {
        result[0] += 0.041990668740279936;
        result[1] += 0.013219284603421462;
        result[2] += 0.004665629860031105;
        result[3] += 0.13452566096423016;
        result[4] += 0.059875583203732506;
        result[5] += 0.7457231726283048;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)104.5) ) ) {
        result[0] += 0.6095290251916758;
        result[1] += 0.050383351588170866;
        result[2] += 0.05421686746987952;
        result[3] += 0.0783132530120482;
        result[4] += 0.11555312157721796;
        result[5] += 0.09200438116100766;
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
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.08;
        result[3] += 0.16;
        result[4] += 0;
        result[5] += 0.76;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5321100917431193;
        result[3] += 0.3486238532110092;
        result[4] += 0;
        result[5] += 0.11926605504587157;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)82.5) ) ) {
        result[0] += 0.08496732026143791;
        result[1] += 0;
        result[2] += 0.7058823529411765;
        result[3] += 0.1437908496732026;
        result[4] += 0;
        result[5] += 0.06535947712418301;
      } else {
        result[0] += 0.008849557522123894;
        result[1] += 0;
        result[2] += 0.9254108723135271;
        result[3] += 0.0606826801517067;
        result[4] += 0;
        result[5] += 0.0050568900126422255;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
        result[0] += 0.016611295681063124;
        result[1] += 0.009966777408637873;
        result[2] += 0.019933554817275746;
        result[3] += 0.006644518272425249;
        result[4] += 0.9036544850498339;
        result[5] += 0.04318936877076412;
      } else {
        result[0] += 0.06961506961506962;
        result[1] += 0.003276003276003276;
        result[2] += 0.001638001638001638;
        result[3] += 0.06633906633906633;
        result[4] += 0.09418509418509419;
        result[5] += 0.764946764946765;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
        result[0] += 0.008146639511201629;
        result[1] += 0.8920570264765784;
        result[2] += 0;
        result[3] += 0.006109979633401222;
        result[4] += 0.08757637474541752;
        result[5] += 0.006109979633401222;
      } else {
        result[0] += 0.6474555487431024;
        result[1] += 0.03494788473329246;
        result[2] += 0.03494788473329246;
        result[3] += 0.12568976088289394;
        result[4] += 0.05947271612507664;
        result[5] += 0.09748620478234211;
      }
    }
  } else {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)101) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.2720588235294118;
        result[3] += 0.5147058823529412;
        result[4] += 0.01470588235294118;
        result[5] += 0.19852941176470593;
      } else {
        result[0] += 0.06451612903225808;
        result[1] += 0;
        result[2] += 0.7903225806451614;
        result[3] += 0.06451612903225808;
        result[4] += 0;
        result[5] += 0.08064516129032259;
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.2692307692307692;
        result[3] += 0.34615384615384615;
        result[4] += 0;
        result[5] += 0.38461538461538464;
      } else {
        result[0] += 0.021920668058455117;
        result[1] += 0;
        result[2] += 0.8977035490605428;
        result[3] += 0.06889352818371608;
        result[4] += 0;
        result[5] += 0.011482254697286013;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        result[0] += 0.006779661016949152;
        result[1] += 0.04406779661016949;
        result[2] += 0;
        result[3] += 0.003389830508474576;
        result[4] += 0.9152542372881356;
        result[5] += 0.030508474576271188;
      } else {
        result[0] += 0.07845934379457917;
        result[1] += 0.0028530670470756064;
        result[2] += 0.0028530670470756064;
        result[3] += 0.15691868758915833;
        result[4] += 0.05991440798858773;
        result[5] += 0.6990014265335235;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)56.5) ) ) {
        result[0] += 0;
        result[1] += 0.9436619718309859;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.056338028169014086;
        result[5] += 0;
      } else {
        result[0] += 0.6908967391304348;
        result[1] += 0.033967391304347824;
        result[2] += 0.07540760869565218;
        result[3] += 0.043478260869565216;
        result[4] += 0.11005434782608696;
        result[5] += 0.04619565217391304;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        result[0] += 0;
        result[1] += 0.01282051282051282;
        result[2] += 0.14102564102564102;
        result[3] += 0.44871794871794873;
        result[4] += 0.02564102564102564;
        result[5] += 0.3717948717948718;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9090909090909091;
        result[3] += 0.06060606060606061;
        result[4] += 0;
        result[5] += 0.030303030303030304;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
        result[0] += 0;
        result[1] += 0.2413793103448276;
        result[2] += 0.06896551724137931;
        result[3] += 0.2413793103448276;
        result[4] += 0.034482758620689655;
        result[5] += 0.41379310344827586;
      } else {
        result[0] += 0.037154989384288746;
        result[1] += 0;
        result[2] += 0.8821656050955414;
        result[3] += 0.06794055201698514;
        result[4] += 0.0031847133757961785;
        result[5] += 0.009554140127388535;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)61.5) ) ) {
        result[0] += 0.00684931506849315;
        result[1] += 0.0821917808219178;
        result[2] += 0;
        result[3] += 0.0273972602739726;
        result[4] += 0.8493150684931506;
        result[5] += 0.03424657534246575;
      } else {
        result[0] += 0.046473029045643155;
        result[1] += 0.012448132780082987;
        result[2] += 0.0016597510373443983;
        result[3] += 0.14937759336099585;
        result[4] += 0.07136929460580912;
        result[5] += 0.7186721991701245;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9483568075117371;
        result[2] += 0;
        result[3] += 0.02112676056338028;
        result[4] += 0.025821596244131457;
        result[5] += 0.004694835680751174;
      } else {
        result[0] += 0.629086809470124;
        result[1] += 0.030439684329199548;
        result[2] += 0.05411499436302142;
        result[3] += 0.08117249154453213;
        result[4] += 0.11781285231116122;
        result[5] += 0.08737316798196167;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
        result[0] += 0.031746031746031744;
        result[1] += 0.031746031746031744;
        result[2] += 0.031746031746031744;
        result[3] += 0.015873015873015872;
        result[4] += 0.30158730158730157;
        result[5] += 0.5873015873015873;
      } else {
        result[0] += 0.0064516129032258064;
        result[1] += 0.01935483870967742;
        result[2] += 0.2967741935483871;
        result[3] += 0.4774193548387097;
        result[4] += 0;
        result[5] += 0.2;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
        result[0] += 0.032418952618453865;
        result[1] += 0;
        result[2] += 0.7805486284289277;
        result[3] += 0.16458852867830423;
        result[4] += 0;
        result[5] += 0.022443890274314215;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9666666666666667;
        result[3] += 0.025490196078431372;
        result[4] += 0;
        result[5] += 0.00784313725490196;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)71.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        result[0] += 0.003937007874015748;
        result[1] += 0.03543307086614173;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9251968503937008;
        result[5] += 0.03543307086614173;
      } else {
        result[0] += 0.018231540565177756;
        result[1] += 0.0054694621695533276;
        result[2] += 0.013673655423883319;
        result[3] += 0.10391978122151321;
        result[4] += 0.07201458523245215;
        result[5] += 0.7866909753874203;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)59.5) ) ) {
        result[0] += 0;
        result[1] += 0.8820861678004536;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.11791383219954649;
        result[5] += 0;
      } else {
        result[0] += 0.6790560471976401;
        result[1] += 0.027728613569321534;
        result[2] += 0.025958702064896755;
        result[3] += 0.09380530973451327;
        result[4] += 0.0943952802359882;
        result[5] += 0.07905604719764012;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)87.5) ) ) {
        result[0] += 0;
        result[1] += 0.030534351145038167;
        result[2] += 0.07633587786259542;
        result[3] += 0.19083969465648856;
        result[4] += 0.05343511450381679;
        result[5] += 0.648854961832061;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.3782051282051282;
        result[3] += 0.5192307692307693;
        result[4] += 0;
        result[5] += 0.10256410256410256;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)98.5) ) ) {
        result[0] += 0.01873767258382643;
        result[1] += 0.005917159763313609;
        result[2] += 0.8619329388560157;
        result[3] += 0.09171597633136094;
        result[4] += 0.0029585798816568047;
        result[5] += 0.01873767258382643;
      } else {
        result[0] += 0.5789473684210527;
        result[1] += 0;
        result[2] += 0.42105263157894735;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        result[0] += 0.007434944237918215;
        result[1] += 0.026022304832713755;
        result[2] += 0;
        result[3] += 0.0037174721189591076;
        result[4] += 0.8996282527881041;
        result[5] += 0.06319702602230483;
      } else {
        result[0] += 0.08699254349627175;
        result[1] += 0.019055509527754765;
        result[2] += 0.0033140016570008283;
        result[3] += 0.09113504556752279;
        result[4] += 0.06048053024026512;
        result[5] += 0.7390223695111847;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)104.5) ) ) {
        result[0] += 0.5648340248962657;
        result[1] += 0.03993775933609959;
        result[2] += 0.06690871369294607;
        result[3] += 0.1307053941908714;
        result[4] += 0.10788381742738591;
        result[5] += 0.08973029045643155;
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
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.23404255319148937;
        result[3] += 0.39361702127659576;
        result[4] += 0.02127659574468085;
        result[5] += 0.35106382978723405;
      } else {
        result[0] += 0;
        result[1] += 0.012500000000000002;
        result[2] += 0.7750000000000001;
        result[3] += 0.16250000000000003;
        result[4] += 0.012500000000000002;
        result[5] += 0.037500000000000006;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)85.5) ) ) {
        result[0] += 0.030303030303030304;
        result[1] += 0.021645021645021644;
        result[2] += 0.7402597402597403;
        result[3] += 0.18614718614718614;
        result[4] += 0;
        result[5] += 0.021645021645021644;
      } else {
        result[0] += 0.007751937984496124;
        result[1] += 0;
        result[2] += 0.9627906976744186;
        result[3] += 0.02945736434108527;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.1285266457680251;
        result[1] += 0.03448275862068966;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7366771159874609;
        result[5] += 0.10031347962382446;
      } else {
        result[0] += 0.00353045013239188;
        result[1] += 0.009708737864077669;
        result[2] += 0.00353045013239188;
        result[3] += 0.15975286849073256;
        result[4] += 0.06266548984995587;
        result[5] += 0.7608120035304501;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)51.5) ) ) {
        result[0] += 0.009324009324009324;
        result[1] += 0.9463869463869464;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.04428904428904429;
        result[5] += 0;
      } else {
        result[0] += 0.6472269868496283;
        result[1] += 0.04230989136649514;
        result[2] += 0.052601486563750716;
        result[3] += 0.06918238993710692;
        result[4] += 0.11606632361349342;
        result[5] += 0.07261292166952545;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
        result[0] += 0.008333333333333333;
        result[1] += 0.008333333333333333;
        result[2] += 0.1;
        result[3] += 0.5666666666666667;
        result[4] += 0.025;
        result[5] += 0.2916666666666667;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5842696629213484;
        result[3] += 0.20224719101123598;
        result[4] += 0;
        result[5] += 0.21348314606741575;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
        result[0] += 0.4722222222222222;
        result[1] += 0.013888888888888888;
        result[2] += 0.4583333333333333;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.05555555555555555;
      } else {
        result[0] += 0.00546448087431694;
        result[1] += 0;
        result[2] += 0.9180327868852459;
        result[3] += 0.07103825136612021;
        result[4] += 0;
        result[5] += 0.00546448087431694;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.02390438247011952;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9442231075697212;
        result[5] += 0.03187250996015936;
      } else {
        result[0] += 0.04245283018867924;
        result[1] += 0.01729559748427673;
        result[2] += 0.012578616352201259;
        result[3] += 0.14937106918238993;
        result[4] += 0.036949685534591194;
        result[5] += 0.7413522012578616;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6119235095613048;
        result[1] += 0.03993250843644545;
        result[2] += 0.06524184476940383;
        result[3] += 0.07592800899887514;
        result[4] += 0.1372328458942632;
        result[5] += 0.06974128233970754;
      } else {
        result[0] += 0.013015184381778741;
        result[1] += 0.9869848156182213;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)83.5) ) ) {
        result[0] += 0;
        result[1] += 0.03636363636363636;
        result[2] += 0.09090909090909091;
        result[3] += 0.03636363636363636;
        result[4] += 0.14545454545454545;
        result[5] += 0.6909090909090909;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.336734693877551;
        result[3] += 0.5510204081632653;
        result[4] += 0;
        result[5] += 0.11224489795918367;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)107) ) ) {
        result[0] += 0.011450381679389313;
        result[1] += 0;
        result[2] += 0.7633587786259542;
        result[3] += 0.1717557251908397;
        result[4] += 0.003816793893129771;
        result[5] += 0.04961832061068702;
      } else {
        result[0] += 0.0015408320493066256;
        result[1] += 0.0030816640986132513;
        result[2] += 0.9599383667180277;
        result[3] += 0.029275808936825885;
        result[4] += 0;
        result[5] += 0.0061633281972265025;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        result[0] += 0.008438818565400843;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9493670886075949;
        result[5] += 0.04219409282700422;
      } else {
        result[0] += 0.04260450160771704;
        result[1] += 0.021704180064308683;
        result[2] += 0.0008038585209003215;
        result[3] += 0.15514469453376206;
        result[4] += 0.04903536977491962;
        result[5] += 0.7307073954983923;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9779735682819384;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.022026431718061675;
        result[5] += 0;
      } else {
        result[0] += 0.6391691394658755;
        result[1] += 0.025519287833827897;
        result[2] += 0.04688427299703265;
        result[3] += 0.061127596439169145;
        result[4] += 0.1335311572700297;
        result[5] += 0.0937685459940653;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)80.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.14102564102564102;
        result[3] += 0.4935897435897436;
        result[4] += 0.01282051282051282;
        result[5] += 0.3525641025641026;
      } else {
        result[0] += 0;
        result[1] += 0.024;
        result[2] += 0.568;
        result[3] += 0.32;
        result[4] += 0.024;
        result[5] += 0.064;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
        result[0] += 0.15384615384615385;
        result[1] += 0;
        result[2] += 0.34615384615384615;
        result[3] += 0.2692307692307692;
        result[4] += 0;
        result[5] += 0.23076923076923078;
      } else {
        result[0] += 0.034482758620689655;
        result[1] += 0;
        result[2] += 0.8954393770856507;
        result[3] += 0.06896551724137931;
        result[4] += 0;
        result[5] += 0.0011123470522803114;
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 80;
  result[1] /= 80;
  result[2] /= 80;
  result[3] /= 80;
  result[4] /= 80;
  result[5] /= 80;
  
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
