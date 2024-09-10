
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
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)75.5) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105) ) ) {
          result[0] += 0;
          result[1] += 0.017094017094017096;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9358974358974359;
          result[5] += 0.04700854700854701;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.875;
          result[4] += 0.125;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)87) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.75;
          result[4] += 0.25;
          result[5] += 0;
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
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)67.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0013477088948787063;
          result[3] += 0.03773584905660377;
          result[4] += 0.0444743935309973;
          result[5] += 0.9164420485175202;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7297297297297297;
          result[4] += 0;
          result[5] += 0.2702702702702703;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
          result[0] += 0.7000000000000001;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.27142857142857146;
          result[5] += 0.028571428571428574;
        } else {
          result[0] += 0.033582089552238806;
          result[1] += 0;
          result[2] += 0.06343283582089553;
          result[3] += 0.38619402985074625;
          result[4] += 0.09328358208955224;
          result[5] += 0.42350746268656714;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)72.5) ) ) {
          result[0] += 0.1228813559322034;
          result[1] += 0.2796610169491525;
          result[2] += 0.00423728813559322;
          result[3] += 0.029661016949152543;
          result[4] += 0.4830508474576271;
          result[5] += 0.08050847457627118;
        } else {
          result[0] += 0.8380221653878943;
          result[1] += 0.01619778346121057;
          result[2] += 0.005967604433077579;
          result[3] += 0.03580562659846547;
          result[4] += 0.03836317135549872;
          result[5] += 0.06564364876385337;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0.9090909090909091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.09090909090909091;
          result[5] += 0;
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
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0.012048192771084338;
          result[2] += 0.13253012048192772;
          result[3] += 0.3614457831325301;
          result[4] += 0.012048192771084338;
          result[5] += 0.4819277108433735;
        } else {
          result[0] += 0;
          result[1] += 0.005917159763313609;
          result[2] += 0.5739644970414202;
          result[3] += 0.28402366863905326;
          result[4] += 0;
          result[5] += 0.13609467455621302;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)97.5) ) ) {
          result[0] += 0.015337423312883436;
          result[1] += 0;
          result[2] += 0.8957055214723927;
          result[3] += 0.06952965235173825;
          result[4] += 0.007157464212678937;
          result[5] += 0.012269938650306749;
        } else {
          result[0] += 0.34615384615384615;
          result[1] += 0;
          result[2] += 0.6538461538461539;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)67.5) ) ) {
          result[0] += 0.00392156862745098;
          result[1] += 0.09803921568627451;
          result[2] += 0;
          result[3] += 0.01568627450980392;
          result[4] += 0.807843137254902;
          result[5] += 0.07450980392156863;
        } else {
          result[0] += 0.8043478260869567;
          result[1] += 0;
          result[2] += 0.04347826086956522;
          result[3] += 0.08695652173913045;
          result[4] += 0.02173913043478261;
          result[5] += 0.04347826086956522;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.031007751937984496;
          result[4] += 0.06589147286821706;
          result[5] += 0.9031007751937985;
        } else {
          result[0] += 0.03355704697986577;
          result[1] += 0.0022371364653243847;
          result[2] += 0.011185682326621925;
          result[3] += 0.38478747203579416;
          result[4] += 0.116331096196868;
          result[5] += 0.4519015659955257;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0.2727272727272727;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7272727272727273;
          result[5] += 0;
        } else {
          result[0] += 0.002352941176470588;
          result[1] += 0.9741176470588235;
          result[2] += 0;
          result[3] += 0.004705882352941176;
          result[4] += 0.01411764705882353;
          result[5] += 0.004705882352941176;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7420546932742056;
          result[1] += 0.04212860310421287;
          result[2] += 0.0029563932002956398;
          result[3] += 0.03178122690317813;
          result[4] += 0.11234294161123431;
          result[5] += 0.06873614190687363;
        } else {
          result[0] += 0.17061611374407584;
          result[1] += 0.02132701421800948;
          result[2] += 0.16824644549763032;
          result[3] += 0.24644549763033174;
          result[4] += 0.11137440758293839;
          result[5] += 0.28199052132701424;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)109.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8484848484848485;
          result[4] += 0;
          result[5] += 0.15151515151515152;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.41935483870967744;
          result[3] += 0.25806451612903225;
          result[4] += 0.04838709677419355;
          result[5] += 0.27419354838709675;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)74.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8461538461538461;
          result[3] += 0.15384615384615385;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.26666666666666666;
          result[3] += 0.6;
          result[4] += 0;
          result[5] += 0.13333333333333333;
        } else {
          result[0] += 0.010526315789473686;
          result[1] += 0;
          result[2] += 0.8052631578947369;
          result[3] += 0.15789473684210528;
          result[4] += 0;
          result[5] += 0.026315789473684213;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)93) ) ) {
          result[0] += 0.2380952380952381;
          result[1] += 0;
          result[2] += 0.6666666666666667;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.09523809523809525;
        } else {
          result[0] += 0.002688172043010753;
          result[1] += 0;
          result[2] += 0.9502688172043011;
          result[3] += 0.041666666666666664;
          result[4] += 0;
          result[5] += 0.005376344086021506;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)63.5) ) ) {
          result[0] += 0.004291845493562232;
          result[1] += 0.008583690987124463;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9871244635193133;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.024390243902439025;
          result[4] += 0.5609756097560976;
          result[5] += 0.4146341463414634;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0.002793296089385475;
          result[2] += 0.0013966480446927375;
          result[3] += 0.027932960893854747;
          result[4] += 0.05027932960893855;
          result[5] += 0.9175977653631285;
        } else {
          result[0] += 0.08892921960072596;
          result[1] += 0.009074410163339383;
          result[2] += 0;
          result[3] += 0.3121597096188748;
          result[4] += 0.08892921960072596;
          result[5] += 0.5009074410163339;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)48.5) ) ) {
          result[0] += 0;
          result[1] += 0.982532751091703;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.017467248908296942;
          result[5] += 0;
        } else {
          result[0] += 0.013245033112582783;
          result[1] += 0.34437086092715236;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6291390728476822;
          result[5] += 0.013245033112582783;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8620689655172413;
          result[1] += 0.02943650126156434;
          result[2] += 0;
          result[3] += 0.011774600504625737;
          result[4] += 0.08494533221194281;
          result[5] += 0.011774600504625737;
        } else {
          result[0] += 0.21761658031088082;
          result[1] += 0.012953367875647668;
          result[2] += 0.23834196891191708;
          result[3] += 0.2823834196891192;
          result[4] += 0.03626943005181347;
          result[5] += 0.21243523316062177;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.02702702702702703;
          result[4] += 0.13513513513513514;
          result[5] += 0.8378378378378378;
        } else {
          result[0] += 0.024390243902439025;
          result[1] += 0.08130081300813008;
          result[2] += 0.15447154471544716;
          result[3] += 0.43089430894308944;
          result[4] += 0.08130081300813008;
          result[5] += 0.22764227642276422;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0.07894736842105263;
          result[2] += 0.2894736842105263;
          result[3] += 0.18421052631578946;
          result[4] += 0.05263157894736842;
          result[5] += 0.39473684210526316;
        } else {
          result[0] += 0.07462686567164178;
          result[1] += 0.007462686567164179;
          result[2] += 0.7611940298507462;
          result[3] += 0.1044776119402985;
          result[4] += 0.007462686567164179;
          result[5] += 0.04477611940298507;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
          result[0] += 0.3333333333333333;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.6666666666666666;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7857142857142857;
          result[3] += 0.17532467532467533;
          result[4] += 0;
          result[5] += 0.03896103896103896;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
          result[0] += 0.15384615384615385;
          result[1] += 0;
          result[2] += 0.6923076923076923;
          result[3] += 0.15384615384615385;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9709897610921502;
          result[3] += 0.02901023890784983;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          result[0] += 0.004524886877828056;
          result[1] += 0.06334841628959277;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9185520361990951;
          result[5] += 0.013574660633484165;
        } else {
          result[0] += 0.38834951456310685;
          result[1] += 0.09708737864077671;
          result[2] += 0;
          result[3] += 0.048543689320388356;
          result[4] += 0.15533980582524273;
          result[5] += 0.31067961165048547;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.006476683937823834;
          result[3] += 0.04533678756476684;
          result[4] += 0.038860103626943004;
          result[5] += 0.9093264248704663;
        } else {
          result[0] += 0.010075566750629723;
          result[1] += 0.0025188916876574307;
          result[2] += 0.04785894206549118;
          result[3] += 0.38287153652392947;
          result[4] += 0.04785894206549118;
          result[5] += 0.5088161209068011;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)52) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)47.5) ) ) {
          result[0] += 0;
          result[1] += 0.9930394431554525;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0069605568445475635;
          result[5] += 0;
        } else {
          result[0] += 0.30434782608695654;
          result[1] += 0.391304347826087;
          result[2] += 0;
          result[3] += 0.043478260869565216;
          result[4] += 0.2608695652173913;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7514749262536873;
          result[1] += 0.0420353982300885;
          result[2] += 0.01327433628318584;
          result[3] += 0.025811209439528023;
          result[4] += 0.1504424778761062;
          result[5] += 0.01696165191740413;
        } else {
          result[0] += 0.16091954022988506;
          result[1] += 0.004597701149425287;
          result[2] += 0.23448275862068965;
          result[3] += 0.26436781609195403;
          result[4] += 0.0735632183908046;
          result[5] += 0.2620689655172414;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)85) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.75;
          result[4] += 0;
          result[5] += 0.25;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3333333333333333;
          result[5] += 0.6666666666666666;
        } else {
          result[0] += 0.0189873417721519;
          result[1] += 0;
          result[2] += 0.5569620253164557;
          result[3] += 0.3291139240506329;
          result[4] += 0;
          result[5] += 0.0949367088607595;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)94) ) ) {
          result[0] += 0.02702702702702703;
          result[1] += 0;
          result[2] += 0.6756756756756757;
          result[3] += 0.10810810810810811;
          result[4] += 0.05405405405405406;
          result[5] += 0.13513513513513514;
        } else {
          result[0] += 0.5833333333333334;
          result[1] += 0.25;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.16666666666666666;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8170731707317073;
          result[3] += 0.16463414634146342;
          result[4] += 0;
          result[5] += 0.018292682926829267;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.970414201183432;
          result[3] += 0.02810650887573965;
          result[4] += 0;
          result[5] += 0.0014792899408284025;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)91) ) ) {
          result[0] += 0;
          result[1] += 0.016666666666666666;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9541666666666667;
          result[5] += 0.029166666666666667;
        } else {
          result[0] += 0;
          result[1] += 0.6111111111111112;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3888888888888889;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
          result[0] += 0.034371643394199784;
          result[1] += 0.008592910848549946;
          result[2] += 0;
          result[3] += 0.0322234156820623;
          result[4] += 0.11278195488721804;
          result[5] += 0.8120300751879699;
        } else {
          result[0] += 0.016025641025641024;
          result[1] += 0;
          result[2] += 0.05448717948717949;
          result[3] += 0.5480769230769231;
          result[4] += 0;
          result[5] += 0.3814102564102564;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0.8;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2;
          result[5] += 0;
        } else {
          result[0] += 0.0024630541871921183;
          result[1] += 0.9926108374384236;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0049261083743842365;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7650073206442167;
          result[1] += 0.04465592972181552;
          result[2] += 0.0007320644216691069;
          result[3] += 0.022693997071742314;
          result[4] += 0.11566617862371889;
          result[5] += 0.05124450951683748;
        } else {
          result[0] += 0.18872017353579176;
          result[1] += 0.008676789587852495;
          result[2] += 0.22125813449023862;
          result[3] += 0.3123644251626898;
          result[4] += 0.04121475054229935;
          result[5] += 0.227765726681128;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)89) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)95.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.34146341463414637;
          result[4] += 0;
          result[5] += 0.6585365853658537;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5416666666666666;
          result[3] += 0.125;
          result[4] += 0;
          result[5] += 0.3333333333333333;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0.6363636363636364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.36363636363636365;
          result[5] += 0;
        } else {
          result[0] += 0.14285714285714285;
          result[1] += 0;
          result[2] += 0.8571428571428571;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.49122807017543857;
          result[3] += 0.2982456140350877;
          result[4] += 0;
          result[5] += 0.21052631578947367;
        } else {
          result[0] += 0.02252252252252252;
          result[1] += 0;
          result[2] += 0.8288288288288288;
          result[3] += 0.13063063063063063;
          result[4] += 0;
          result[5] += 0.018018018018018018;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9114583333333334;
          result[3] += 0.08333333333333333;
          result[4] += 0;
          result[5] += 0.005208333333333333;
        } else {
          result[0] += 0.0020491803278688526;
          result[1] += 0;
          result[2] += 0.9877049180327869;
          result[3] += 0.010245901639344262;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)70.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)95) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.014084507042253521;
          result[4] += 0.9248826291079812;
          result[5] += 0.06103286384976526;
        } else {
          result[0] += 0;
          result[1] += 0.5882352941176471;
          result[2] += 0;
          result[3] += 0.058823529411764705;
          result[4] += 0;
          result[5] += 0.35294117647058826;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0027548209366391185;
          result[3] += 0.02066115702479339;
          result[4] += 0.05371900826446281;
          result[5] += 0.9228650137741047;
        } else {
          result[0] += 0.027932960893854747;
          result[1] += 0.030726256983240222;
          result[2] += 0.0111731843575419;
          result[3] += 0.31564245810055863;
          result[4] += 0.08659217877094973;
          result[5] += 0.5279329608938548;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)89) ) ) {
          result[0] += 0;
          result[1] += 0.22727272727272727;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7272727272727273;
          result[5] += 0.045454545454545456;
        } else {
          result[0] += 0.002173913043478261;
          result[1] += 0.9717391304347827;
          result[2] += 0.002173913043478261;
          result[3] += 0.015217391304347827;
          result[4] += 0.008695652173913044;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
          result[0] += 0.3258575197889182;
          result[1] += 0.011873350923482849;
          result[2] += 0.03562005277044855;
          result[3] += 0.17546174142480211;
          result[4] += 0.18337730870712401;
          result[5] += 0.2678100263852243;
        } else {
          result[0] += 0.8276173285198556;
          result[1] += 0.03700361010830325;
          result[2] += 0.01895306859205776;
          result[3] += 0.019855595667870037;
          result[4] += 0.08574007220216606;
          result[5] += 0.010830324909747292;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)77) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.125;
          result[4] += 0;
          result[5] += 0.875;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.030303030303030307;
          result[3] += 0.8030303030303031;
          result[4] += 0;
          result[5] += 0.16666666666666669;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08695652173913043;
          result[3] += 0.5217391304347826;
          result[4] += 0.043478260869565216;
          result[5] += 0.34782608695652173;
        } else {
          result[0] += 0.025;
          result[1] += 0;
          result[2] += 0.55;
          result[3] += 0.225;
          result[4] += 0;
          result[5] += 0.2;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)95) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.5;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.18181818181818182;
          result[3] += 0.8181818181818182;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)98.5) ) ) {
          result[0] += 0.008648648648648649;
          result[1] += 0;
          result[2] += 0.9156756756756756;
          result[3] += 0.06702702702702702;
          result[4] += 0;
          result[5] += 0.008648648648648649;
        } else {
          result[0] += 0.5833333333333334;
          result[1] += 0;
          result[2] += 0.4166666666666667;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)75) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)47.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          result[0] += 0.008298755186721992;
          result[1] += 0.04564315352697095;
          result[2] += 0;
          result[3] += 0.029045643153526972;
          result[4] += 0.8464730290456431;
          result[5] += 0.07053941908713693;
        } else {
          result[0] += 0.055640243902439025;
          result[1] += 0.0007621951219512195;
          result[2] += 0.012195121951219513;
          result[3] += 0.16463414634146342;
          result[4] += 0.07545731707317073;
          result[5] += 0.6913109756097561;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.7743628185907047;
          result[1] += 0.043478260869565216;
          result[2] += 0.0037481259370314842;
          result[3] += 0.02623688155922039;
          result[4] += 0.12593703148425786;
          result[5] += 0.02623688155922039;
        } else {
          result[0] += 0.20374707259953162;
          result[1] += 0.03747072599531616;
          result[2] += 0.2927400468384075;
          result[3] += 0.21779859484777517;
          result[4] += 0.03981264637002342;
          result[5] += 0.20843091334894615;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)89.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.896551724137931;
          result[4] += 0;
          result[5] += 0.10344827586206896;
        } else {
          result[0] += 0;
          result[1] += 0.027777777777777776;
          result[2] += 0.3888888888888889;
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0.25;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)93) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.06849315068493152;
          result[1] += 0;
          result[2] += 0.5753424657534247;
          result[3] += 0.13698630136986303;
          result[4] += 0;
          result[5] += 0.21917808219178084;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
          result[0] += 0.004524886877828055;
          result[1] += 0.004524886877828055;
          result[2] += 0.7692307692307693;
          result[3] += 0.19909502262443438;
          result[4] += 0;
          result[5] += 0.02262443438914027;
        } else {
          result[0] += 0.0015748031496062992;
          result[1] += 0;
          result[2] += 0.9732283464566929;
          result[3] += 0.023622047244094488;
          result[4] += 0;
          result[5] += 0.0015748031496062992;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
          result[0] += 0.015936254980079684;
          result[1] += 0.03984063745019921;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9282868525896415;
          result[5] += 0.015936254980079684;
        } else {
          result[0] += 0.5643564356435643;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.1485148514851485;
          result[5] += 0.2871287128712871;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
          result[0] += 0.004201680672268907;
          result[1] += 0.0010504201680672268;
          result[2] += 0;
          result[3] += 0.06932773109243698;
          result[4] += 0.06827731092436974;
          result[5] += 0.8571428571428571;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.004048582995951417;
          result[3] += 0.6518218623481782;
          result[4] += 0.012145748987854251;
          result[5] += 0.3319838056680162;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7454819277108435;
          result[1] += 0.07680722891566266;
          result[2] += 0.005271084337349398;
          result[3] += 0.015813253012048195;
          result[4] += 0.1393072289156627;
          result[5] += 0.01731927710843374;
        } else {
          result[0] += 0.2045977011494253;
          result[1] += 0.01839080459770115;
          result[2] += 0.17701149425287357;
          result[3] += 0.3103448275862069;
          result[4] += 0.04367816091954023;
          result[5] += 0.24597701149425288;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)97) ) ) {
          result[0] += 0;
          result[1] += 0.9978070175438597;
          result[2] += 0;
          result[3] += 0.0021929824561403508;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.6666666666666666;
          result[1] += 0.2222222222222222;
          result[2] += 0.1111111111111111;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9090909090909091;
          result[4] += 0;
          result[5] += 0.09090909090909091;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0.3;
          result[4] += 0;
          result[5] += 0.5;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)76.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7777777777777778;
          result[4] += 0;
          result[5] += 0.2222222222222222;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7419354838709677;
          result[3] += 0.22580645161290322;
          result[4] += 0;
          result[5] += 0.03225806451612903;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)105.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)68) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7785977859778598;
          result[3] += 0.16974169741697417;
          result[4] += 0.0036900369003690036;
          result[5] += 0.04797047970479705;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)70.5) ) ) {
          result[0] += 0.5714285714285714;
          result[1] += 0;
          result[2] += 0.2857142857142857;
          result[3] += 0.14285714285714285;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.013177159590043924;
          result[1] += 0;
          result[2] += 0.9370424597364568;
          result[3] += 0.04538799414348463;
          result[4] += 0;
          result[5] += 0.004392386530014641;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)97) ) ) {
          result[0] += 0.0071174377224199285;
          result[1] += 0.0071174377224199285;
          result[2] += 0;
          result[3] += 0.0071174377224199285;
          result[4] += 0.8790035587188612;
          result[5] += 0.099644128113879;
        } else {
          result[0] += 0;
          result[1] += 0.8421052631578947;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.15789473684210525;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0.0380952380952381;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0380952380952381;
          result[4] += 0.05952380952380952;
          result[5] += 0.8642857142857143;
        } else {
          result[0] += 0.06441717791411043;
          result[1] += 0.027607361963190184;
          result[2] += 0.003067484662576687;
          result[3] += 0.5122699386503068;
          result[4] += 0.027607361963190184;
          result[5] += 0.36503067484662577;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.6975967957276369;
          result[1] += 0.062082777036048066;
          result[2] += 0.010680907877169559;
          result[3] += 0.04606141522029372;
          result[4] += 0.15086782376502003;
          result[5] += 0.03271028037383177;
        } else {
          result[0] += 0.10752688172043011;
          result[1] += 0.005376344086021506;
          result[2] += 0.28225806451612906;
          result[3] += 0.24731182795698925;
          result[4] += 0.0967741935483871;
          result[5] += 0.260752688172043;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
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
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)94.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)107.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)85.5) ) ) {
          result[0] += 0.047058823529411764;
          result[1] += 0.011764705882352941;
          result[2] += 0.15294117647058825;
          result[3] += 0.27058823529411763;
          result[4] += 0.011764705882352941;
          result[5] += 0.5058823529411764;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6774193548387096;
          result[3] += 0.03225806451612903;
          result[4] += 0;
          result[5] += 0.2903225806451613;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.2857142857142857;
          result[2] += 0.7142857142857143;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.21428571428571427;
          result[4] += 0;
          result[5] += 0.7857142857142857;
        } else {
          result[0] += 0.0379746835443038;
          result[1] += 0;
          result[2] += 0.7257383966244726;
          result[3] += 0.20253164556962025;
          result[4] += 0;
          result[5] += 0.03375527426160337;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
          result[0] += 0.006172839506172839;
          result[1] += 0;
          result[2] += 0.8580246913580247;
          result[3] += 0.13580246913580246;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.002;
          result[1] += 0;
          result[2] += 0.986;
          result[3] += 0.012;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)45) ) ) {
          result[0] += 0;
          result[1] += 0.9090909090909091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.09090909090909091;
          result[5] += 0;
        } else {
          result[0] += 0.01652892561983471;
          result[1] += 0;
          result[2] += 0.004132231404958678;
          result[3] += 0;
          result[4] += 0.9380165289256198;
          result[5] += 0.04132231404958678;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
          result[0] += 0.0223463687150838;
          result[1] += 0.00558659217877095;
          result[2] += 0;
          result[3] += 0.05921787709497207;
          result[4] += 0.0446927374301676;
          result[5] += 0.8681564245810056;
        } else {
          result[0] += 0.08333333333333333;
          result[1] += 0.01;
          result[2] += 0.013333333333333334;
          result[3] += 0.42333333333333334;
          result[4] += 0.09333333333333334;
          result[5] += 0.37666666666666665;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0.25925925925925924;
          result[2] += 0;
          result[3] += 0.08888888888888889;
          result[4] += 0.6518518518518519;
          result[5] += 0;
        } else {
          result[0] += 0.6938394523957686;
          result[1] += 0.020535158680771628;
          result[2] += 0.04418170504044805;
          result[3] += 0.06907280647168638;
          result[4] += 0.07529558182949597;
          result[5] += 0.09707529558182951;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.5714285714285714;
          result[1] += 0.42857142857142855;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.5;
          result[2] += 0.08333333333333333;
          result[3] += 0.4166666666666667;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.024390243902439025;
          result[3] += 0.024390243902439025;
          result[4] += 0.0975609756097561;
          result[5] += 0.8536585365853658;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.060606060606060615;
          result[3] += 0.7727272727272728;
          result[4] += 0;
          result[5] += 0.16666666666666669;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6086956521739131;
          result[3] += 0.30434782608695654;
          result[4] += 0;
          result[5] += 0.08695652173913043;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)87.5) ) ) {
          result[0] += 0.033707865168539325;
          result[1] += 0.0449438202247191;
          result[2] += 0.5955056179775281;
          result[3] += 0.24719101123595505;
          result[4] += 0;
          result[5] += 0.07865168539325842;
        } else {
          result[0] += 0.6222222222222222;
          result[1] += 0.044444444444444446;
          result[2] += 0.3333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.8;
        } else {
          result[0] += 0.0057405281285878304;
          result[1] += 0;
          result[2] += 0.9299655568312285;
          result[3] += 0.05970149253731343;
          result[4] += 0;
          result[5] += 0.004592422502870264;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0.008733624454148471;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9912663755458515;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5555555555555556;
          result[5] += 0.4444444444444444;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.02312925170068027;
          result[4] += 0.02585034013605442;
          result[5] += 0.9510204081632653;
        } else {
          result[0] += 0.11026615969581749;
          result[1] += 0.013307984790874524;
          result[2] += 0.005703422053231939;
          result[3] += 0.3269961977186312;
          result[4] += 0.0779467680608365;
          result[5] += 0.46577946768060835;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)69.5) ) ) {
          result[0] += 0.099601593625498;
          result[1] += 0.40239043824701193;
          result[2] += 0.02390438247011952;
          result[3] += 0.00398406374501992;
          result[4] += 0.4302788844621514;
          result[5] += 0.0398406374501992;
        } else {
          result[0] += 0.727524204702628;
          result[1] += 0.01521438450899032;
          result[2] += 0.0442600276625173;
          result[3] += 0.08782849239280775;
          result[4] += 0.0719225449515906;
          result[5] += 0.05325034578146612;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
          result[0] += 0.009876543209876543;
          result[1] += 0.9728395061728395;
          result[2] += 0.0024691358024691358;
          result[3] += 0;
          result[4] += 0.014814814814814815;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.14285714285714285;
          result[2] += 0.8571428571428571;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2222222222222222;
          result[3] += 0;
          result[4] += 0.7222222222222222;
          result[5] += 0.05555555555555555;
        } else {
          result[0] += 0.007751937984496124;
          result[1] += 0;
          result[2] += 0.09302325581395349;
          result[3] += 0.6124031007751938;
          result[4] += 0.015503875968992248;
          result[5] += 0.2713178294573643;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)69) ) ) {
          result[0] += 0.14285714285714285;
          result[1] += 0.6666666666666666;
          result[2] += 0.047619047619047616;
          result[3] += 0.09523809523809523;
          result[4] += 0.047619047619047616;
          result[5] += 0;
        } else {
          result[0] += 0.05;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.08333333333333333;
          result[4] += 0.06666666666666667;
          result[5] += 0.3;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
          result[0] += 0.006802721088435375;
          result[1] += 0;
          result[2] += 0.7551020408163266;
          result[3] += 0.17687074829931976;
          result[4] += 0;
          result[5] += 0.06122448979591837;
        } else {
          result[0] += 0.6666666666666666;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)100.5) ) ) {
          result[0] += 0.008860759493670886;
          result[1] += 0;
          result[2] += 0.9392405063291139;
          result[3] += 0.049367088607594936;
          result[4] += 0;
          result[5] += 0.002531645569620253;
        } else {
          result[0] += 0.2608695652173913;
          result[1] += 0;
          result[2] += 0.7391304347826086;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
          result[0] += 0.009174311926605505;
          result[1] += 0.021406727828746176;
          result[2] += 0;
          result[3] += 0.0030581039755351682;
          result[4] += 0.8746177370030581;
          result[5] += 0.09174311926605505;
        } else {
          result[0] += 0.6433566433566434;
          result[1] += 0.006993006993006994;
          result[2] += 0.013986013986013988;
          result[3] += 0;
          result[4] += 0.16083916083916086;
          result[5] += 0.17482517482517484;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)86.5) ) ) {
          result[0] += 0.0025940337224383916;
          result[1] += 0.005188067444876783;
          result[2] += 0.0012970168612191958;
          result[3] += 0.04539559014267185;
          result[4] += 0.042801556420233464;
          result[5] += 0.9027237354085603;
        } else {
          result[0] += 0.010752688172043012;
          result[1] += 0.021505376344086023;
          result[2] += 0.043010752688172046;
          result[3] += 0.26881720430107525;
          result[4] += 0.16845878136200718;
          result[5] += 0.4874551971326165;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)93) ) ) {
          result[0] += 0.012820512820512822;
          result[1] += 0.4743589743589744;
          result[2] += 0;
          result[3] += 0.08974358974358976;
          result[4] += 0.4102564102564103;
          result[5] += 0.012820512820512822;
        } else {
          result[0] += 0.0022026431718061676;
          result[1] += 0.986784140969163;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.011013215859030838;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
          result[0] += 0.06091370558375635;
          result[1] += 0.10152284263959391;
          result[2] += 0.01015228426395939;
          result[3] += 0.4517766497461929;
          result[4] += 0.030456852791878174;
          result[5] += 0.34517766497461927;
        } else {
          result[0] += 0.7801691006917756;
          result[1] += 0.023059185242121444;
          result[2] += 0.033820138355111454;
          result[3] += 0.053036126056879324;
          result[4] += 0.0722521137586472;
          result[5] += 0.03766333589546503;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)71.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.1836734693877551;
          result[4] += 0.061224489795918366;
          result[5] += 0.7551020408163265;
        } else {
          result[0] += 0.009345794392523364;
          result[1] += 0;
          result[2] += 0.09345794392523364;
          result[3] += 0.5981308411214953;
          result[4] += 0.028037383177570093;
          result[5] += 0.27102803738317754;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.10714285714285714;
          result[4] += 0.03571428571428571;
          result[5] += 0.35714285714285715;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9487179487179487;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.05128205128205128;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)98.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.11764705882352941;
          result[3] += 0.5;
          result[4] += 0.08823529411764706;
          result[5] += 0.29411764705882354;
        } else {
          result[0] += 0.20987654320987653;
          result[1] += 0.08641975308641975;
          result[2] += 0.6296296296296297;
          result[3] += 0.04938271604938271;
          result[4] += 0;
          result[5] += 0.024691358024691357;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0.007874015748031496;
          result[2] += 0.6850393700787402;
          result[3] += 0.2755905511811024;
          result[4] += 0;
          result[5] += 0.031496062992125984;
        } else {
          result[0] += 0.008631319358816275;
          result[1] += 0;
          result[2] += 0.935881627620222;
          result[3] += 0.04438964241676942;
          result[4] += 0;
          result[5] += 0.011097410604192354;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0.02092050209205021;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9414225941422594;
          result[5] += 0.03765690376569038;
        } else {
          result[0] += 0.49523809523809526;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.23809523809523808;
          result[5] += 0.26666666666666666;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)80) ) ) {
          result[0] += 0;
          result[1] += 0.005208333333333333;
          result[2] += 0;
          result[3] += 0.028645833333333332;
          result[4] += 0.06380208333333333;
          result[5] += 0.90234375;
        } else {
          result[0] += 0.013245033112582781;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.49337748344370863;
          result[4] += 0.006622516556291391;
          result[5] += 0.4867549668874172;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.3125;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6875;
          result[5] += 0;
        } else {
          result[0] += 0.004514672686230248;
          result[1] += 0.9864559819413092;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.009029345372460496;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          result[0] += 0.8050458715596331;
          result[1] += 0.05657492354740062;
          result[2] += 0;
          result[3] += 0.026758409785932726;
          result[4] += 0.10397553516819573;
          result[5] += 0.007645259938837921;
        } else {
          result[0] += 0.2254641909814324;
          result[1] += 0.0557029177718833;
          result[2] += 0.15915119363395228;
          result[3] += 0.24403183023872682;
          result[4] += 0.06631299734748013;
          result[5] += 0.24933687002652521;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)94.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0.045454545454545456;
          result[2] += 0;
          result[3] += 0.045454545454545456;
          result[4] += 0.09090909090909091;
          result[5] += 0.8181818181818182;
        } else {
          result[0] += 0;
          result[1] += 0.009345794392523364;
          result[2] += 0.09345794392523364;
          result[3] += 0.5327102803738317;
          result[4] += 0;
          result[5] += 0.3644859813084112;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
          result[0] += 0.05405405405405406;
          result[1] += 0.21621621621621623;
          result[2] += 0.21621621621621623;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.5135135135135135;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8780487804878049;
          result[3] += 0.0975609756097561;
          result[4] += 0;
          result[5] += 0.024390243902439025;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2368421052631579;
          result[3] += 0.736842105263158;
          result[4] += 0.026315789473684213;
          result[5] += 0;
        } else {
          result[0] += 0.030534351145038167;
          result[1] += 0;
          result[2] += 0.648854961832061;
          result[3] += 0.16030534351145037;
          result[4] += 0.030534351145038167;
          result[5] += 0.1297709923664122;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
          result[0] += 0.015075376884422112;
          result[1] += 0;
          result[2] += 0.8090452261306533;
          result[3] += 0.17587939698492466;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.01772525849335303;
          result[1] += 0;
          result[2] += 0.9438700147710487;
          result[3] += 0.033973412112259974;
          result[4] += 0;
          result[5] += 0.004431314623338257;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)59.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7368421052631579;
          result[5] += 0.2631578947368421;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)78) ) ) {
          result[0] += 0;
          result[1] += 0.42857142857142855;
          result[2] += 0;
          result[3] += 0.07142857142857142;
          result[4] += 0.5;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0.75;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)57.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8181818181818182;
          result[5] += 0.18181818181818182;
        } else {
          result[0] += 0;
          result[1] += 0.0028208744710860366;
          result[2] += 0.004231311706629055;
          result[3] += 0.03526093088857546;
          result[4] += 0.014104372355430184;
          result[5] += 0.9435825105782792;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
          result[0] += 0.5882352941176471;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.029411764705882353;
          result[4] += 0.3382352941176471;
          result[5] += 0.04411764705882353;
        } else {
          result[0] += 0;
          result[1] += 0.002207505518763797;
          result[2] += 0.004415011037527594;
          result[3] += 0.2958057395143488;
          result[4] += 0.06622516556291391;
          result[5] += 0.6313465783664459;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)87.5) ) ) {
          result[0] += 0.014285714285714285;
          result[1] += 0.17142857142857143;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8;
          result[5] += 0.014285714285714285;
        } else {
          result[0] += 0.014141414141414142;
          result[1] += 0.9696969696969697;
          result[2] += 0.00202020202020202;
          result[3] += 0;
          result[4] += 0.014141414141414142;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.8278560250391236;
          result[1] += 0.041471048513302036;
          result[2] += 0.000782472613458529;
          result[3] += 0.02190923317683881;
          result[4] += 0.09311424100156494;
          result[5] += 0.01486697965571205;
        } else {
          result[0] += 0.2358974358974359;
          result[1] += 0.005128205128205128;
          result[2] += 0.03076923076923077;
          result[3] += 0.3384615384615385;
          result[4] += 0.10256410256410256;
          result[5] += 0.28717948717948716;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.04918032786885246;
          result[2] += 0.11475409836065574;
          result[3] += 0.16393442622950818;
          result[4] += 0;
          result[5] += 0.6721311475409836;
        } else {
          result[0] += 0.004310344827586208;
          result[1] += 0.008620689655172415;
          result[2] += 0.43965517241379315;
          result[3] += 0.3663793103448276;
          result[4] += 0.008620689655172415;
          result[5] += 0.17241379310344832;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
          result[0] += 0.26315789473684215;
          result[1] += 0;
          result[2] += 0.5921052631578948;
          result[3] += 0.05263157894736843;
          result[4] += 0.06578947368421054;
          result[5] += 0.026315789473684216;
        } else {
          result[0] += 0.014444444444444444;
          result[1] += 0;
          result[2] += 0.9077777777777778;
          result[3] += 0.06333333333333334;
          result[4] += 0.0022222222222222222;
          result[5] += 0.012222222222222223;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)61.5) ) ) {
          result[0] += 0.005681818181818182;
          result[1] += 0.011363636363636364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9829545454545454;
          result[5] += 0;
        } else {
          result[0] += 0.4027777777777778;
          result[1] += 0.013888888888888888;
          result[2] += 0.020833333333333332;
          result[3] += 0.04861111111111111;
          result[4] += 0.3333333333333333;
          result[5] += 0.18055555555555555;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0.005982053838484547;
          result[2] += 0;
          result[3] += 0.0448654037886341;
          result[4] += 0.07876370887337986;
          result[5] += 0.8703888334995015;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.009900990099009901;
          result[3] += 0.6386138613861386;
          result[4] += 0.01485148514851485;
          result[5] += 0.33663366336633666;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)78) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.0021645021645021645;
          result[1] += 0.9826839826839827;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.015151515151515152;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          result[0] += 0.7797487065779749;
          result[1] += 0.03621581670362158;
          result[2] += 0.004434589800443459;
          result[3] += 0.028824833702882482;
          result[4] += 0.12342941611234294;
          result[5] += 0.027346637102734665;
        } else {
          result[0] += 0.18269230769230768;
          result[1] += 0.019230769230769232;
          result[2] += 0.2692307692307692;
          result[3] += 0.28365384615384615;
          result[4] += 0.016826923076923076;
          result[5] += 0.2283653846153846;
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0.013513513513513514;
          result[2] += 0.04054054054054054;
          result[3] += 0.5675675675675675;
          result[4] += 0.06756756756756757;
          result[5] += 0.3108108108108108;
        } else {
          result[0] += 0.07142857142857144;
          result[1] += 0.25000000000000006;
          result[2] += 0.39285714285714296;
          result[3] += 0.07142857142857144;
          result[4] += 0.07142857142857144;
          result[5] += 0.14285714285714288;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)97) ) ) {
          result[0] += 0.03296703296703297;
          result[1] += 0.02197802197802198;
          result[2] += 0.7692307692307693;
          result[3] += 0.17582417582417584;
          result[4] += 0;
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
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
          result[0] += 0.07142857142857142;
          result[1] += 0;
          result[2] += 0.14285714285714285;
          result[3] += 0.07142857142857142;
          result[4] += 0;
          result[5] += 0.7142857142857143;
        } else {
          result[0] += 0.2222222222222222;
          result[1] += 0;
          result[2] += 0.7592592592592593;
          result[3] += 0.018518518518518517;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8114754098360656;
          result[3] += 0.1680327868852459;
          result[4] += 0;
          result[5] += 0.020491803278688523;
        } else {
          result[0] += 0.0035842293906810036;
          result[1] += 0;
          result[2] += 0.9731182795698925;
          result[3] += 0.023297491039426525;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62) ) ) {
          result[0] += 0;
          result[1] += 0.009615384615384616;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9855769230769231;
          result[5] += 0.004807692307692308;
        } else {
          result[0] += 0.05;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.1;
          result[4] += 0.6;
          result[5] += 0.25;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0.375;
          result[2] += 0;
          result[3] += 0.375;
          result[4] += 0.25;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
          result[0] += 0.5285714285714286;
          result[1] += 0.014285714285714285;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.37142857142857144;
          result[5] += 0.08571428571428572;
        } else {
          result[0] += 0;
          result[1] += 0.002176278563656148;
          result[2] += 0.001088139281828074;
          result[3] += 0.05984766050054407;
          result[4] += 0.04787812840043525;
          result[5] += 0.8890097932535365;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)84.5) ) ) {
          result[0] += 0.10062893081761007;
          result[1] += 0.03773584905660377;
          result[2] += 0;
          result[3] += 0.18238993710691823;
          result[4] += 0.05660377358490566;
          result[5] += 0.6226415094339622;
        } else {
          result[0] += 0.020512820512820513;
          result[1] += 0.010256410256410256;
          result[2] += 0;
          result[3] += 0.6871794871794872;
          result[4] += 0;
          result[5] += 0.28205128205128205;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)94.5) ) ) {
          result[0] += 0;
          result[1] += 0.08571428571428572;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9142857142857143;
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.8188180404354586;
          result[1] += 0.019440124416796264;
          result[2] += 0.008553654743390355;
          result[3] += 0.024883359253499215;
          result[4] += 0.10264385692068427;
          result[5] += 0.025660964230171068;
        } else {
          result[0] += 0.1791044776119403;
          result[1] += 0.014925373134328358;
          result[2] += 0.19402985074626866;
          result[3] += 0.26492537313432835;
          result[4] += 0.1417910447761194;
          result[5] += 0.20522388059701493;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)93) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97.5) ) ) {
          result[0] += 0.035211267605633804;
          result[1] += 0.02112676056338028;
          result[2] += 0.2605633802816901;
          result[3] += 0.2746478873239437;
          result[4] += 0.028169014084507043;
          result[5] += 0.38028169014084506;
        } else {
          result[0] += 0;
          result[1] += 0.9375;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0625;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)66.5) ) ) {
          result[0] += 0.8823529411764706;
          result[1] += 0;
          result[2] += 0.11764705882352941;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.016966067864271458;
          result[1] += 0;
          result[2] += 0.8622754491017964;
          result[3] += 0.10179640718562874;
          result[4] += 0.000998003992015968;
          result[5] += 0.017964071856287425;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0.024691358024691357;
          result[2] += 0;
          result[3] += 0.00823045267489712;
          result[4] += 0.9218106995884774;
          result[5] += 0.04526748971193416;
        } else {
          result[0] += 0.625;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.11458333333333333;
          result[5] += 0.2604166666666667;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.017830609212481426;
          result[4] += 0.02674591381872214;
          result[5] += 0.9554234769687965;
        } else {
          result[0] += 0.00946969696969697;
          result[1] += 0.041666666666666664;
          result[2] += 0.005681818181818182;
          result[3] += 0.36174242424242425;
          result[4] += 0.06818181818181818;
          result[5] += 0.5132575757575758;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)55.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0.3;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.984375;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.015625;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0.7981366459627329;
          result[1] += 0.018633540372670808;
          result[2] += 0.006987577639751553;
          result[3] += 0.030279503105590064;
          result[4] += 0.1203416149068323;
          result[5] += 0.02562111801242236;
        } else {
          result[0] += 0.1523809523809524;
          result[1] += 0.0380952380952381;
          result[2] += 0.1976190476190476;
          result[3] += 0.27380952380952384;
          result[4] += 0.08095238095238096;
          result[5] += 0.2571428571428571;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)80.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9024390243902439;
          result[4] += 0;
          result[5] += 0.0975609756097561;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2777777777777778;
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0.3888888888888889;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)105) ) ) {
          result[0] += 0.013513513513513514;
          result[1] += 0;
          result[2] += 0.5405405405405406;
          result[3] += 0.24324324324324326;
          result[4] += 0.013513513513513514;
          result[5] += 0.1891891891891892;
        } else {
          result[0] += 0.047619047619047616;
          result[1] += 0;
          result[2] += 0.9523809523809523;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.776595744680851;
          result[3] += 0.2074468085106383;
          result[4] += 0;
          result[5] += 0.015957446808510637;
        } else {
          result[0] += 0.026455026455026454;
          result[1] += 0;
          result[2] += 0.9206349206349206;
          result[3] += 0.047619047619047616;
          result[4] += 0;
          result[5] += 0.005291005291005291;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)74) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.005405405405405406;
          result[1] += 0;
          result[2] += 0.9783783783783784;
          result[3] += 0.016216216216216217;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)47) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)92) ) ) {
          result[0] += 0;
          result[1] += 0.45454545454545453;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5454545454545454;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9978813559322034;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.00211864406779661;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)105.5) ) ) {
          result[0] += 0;
          result[1] += 0.8333333333333334;
          result[2] += 0;
          result[3] += 0.16666666666666666;
          result[4] += 0;
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
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
          result[0] += 0.022641509433962263;
          result[1] += 0.007547169811320755;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9169811320754717;
          result[5] += 0.052830188679245285;
        } else {
          result[0] += 0.04376012965964344;
          result[1] += 0.0008103727714748784;
          result[2] += 0.0016207455429497568;
          result[3] += 0.16774716369529985;
          result[4] += 0.041329011345218804;
          result[5] += 0.7447325769854133;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          result[0] += 0.7617302052785925;
          result[1] += 0.05938416422287391;
          result[2] += 0.002199413489736071;
          result[3] += 0.019794721407624637;
          result[4] += 0.14442815249266866;
          result[5] += 0.0124633431085044;
        } else {
          result[0] += 0.14987714987714987;
          result[1] += 0.007371007371007371;
          result[2] += 0.24815724815724816;
          result[3] += 0.3071253071253071;
          result[4] += 0.06388206388206388;
          result[5] += 0.22358722358722358;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)58.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.047619047619047616;
          result[2] += 0.047619047619047616;
          result[3] += 0.047619047619047616;
          result[4] += 0;
          result[5] += 0.8571428571428571;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
          result[0] += 0.03076923076923077;
          result[1] += 0.03076923076923077;
          result[2] += 0.13846153846153847;
          result[3] += 0.6307692307692307;
          result[4] += 0.06153846153846154;
          result[5] += 0.1076923076923077;
        } else {
          result[0] += 0.04054054054054054;
          result[1] += 0.08108108108108109;
          result[2] += 0.5540540540540541;
          result[3] += 0.21621621621621623;
          result[4] += 0;
          result[5] += 0.10810810810810811;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)120) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7777777777777778;
          result[3] += 0.19444444444444445;
          result[4] += 0;
          result[5] += 0.027777777777777776;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
          result[0] += 0.5714285714285714;
          result[1] += 0;
          result[2] += 0.42857142857142855;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.007453416149068323;
          result[1] += 0;
          result[2] += 0.9552795031055901;
          result[3] += 0.037267080745341616;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)97) ) ) {
          result[0] += 0.004784688995215311;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9665071770334929;
          result[5] += 0.028708133971291867;
        } else {
          result[0] += 0;
          result[1] += 0.7142857142857143;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.2857142857142857;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)87.5) ) ) {
          result[0] += 0.019562715765247412;
          result[1] += 0.009205983889528193;
          result[2] += 0;
          result[3] += 0.06559263521288838;
          result[4] += 0.04948216340621404;
          result[5] += 0.856156501726122;
        } else {
          result[0] += 0.09018567639257294;
          result[1] += 0.023872679045092837;
          result[2] += 0.007957559681697613;
          result[3] += 0.44562334217506633;
          result[4] += 0.08222811671087533;
          result[5] += 0.35013262599469497;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)52.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.375;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.625;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9888392857142857;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.011160714285714286;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.7069081153588196;
          result[1] += 0.05432595573440644;
          result[2] += 0.009389671361502348;
          result[3] += 0.034875922199865864;
          result[4] += 0.1448692152917505;
          result[5] += 0.04963112005365526;
        } else {
          result[0] += 0.14705882352941177;
          result[1] += 0.0058823529411764705;
          result[2] += 0.22058823529411764;
          result[3] += 0.2735294117647059;
          result[4] += 0.06764705882352941;
          result[5] += 0.2852941176470588;
        }
      }
    }
  } else {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)107) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09803921568627451;
          result[3] += 0.7450980392156863;
          result[4] += 0;
          result[5] += 0.1568627450980392;
        } else {
          result[0] += 0.0196078431372549;
          result[1] += 0;
          result[2] += 0.45098039215686275;
          result[3] += 0.39215686274509803;
          result[4] += 0;
          result[5] += 0.13725490196078433;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)98) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0.6;
          result[4] += 0;
          result[5] += 0.2;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.925;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.075;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.23076923076923078;
          result[3] += 0.6153846153846154;
          result[4] += 0;
          result[5] += 0.15384615384615385;
        } else {
          result[0] += 0.125;
          result[1] += 0;
          result[2] += 0.625;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.25;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.011428571428571429;
          result[1] += 0;
          result[2] += 0.9257142857142857;
          result[3] += 0.05028571428571429;
          result[4] += 0;
          result[5] += 0.012571428571428572;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
          result[0] += 0.004219409282700422;
          result[1] += 0.02109704641350211;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9662447257383966;
          result[5] += 0.008438818565400843;
        } else {
          result[0] += 0.039473684210526314;
          result[1] += 0.06578947368421052;
          result[2] += 0;
          result[3] += 0.013157894736842105;
          result[4] += 0.47368421052631576;
          result[5] += 0.40789473684210525;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0.001366120218579235;
          result[1] += 0;
          result[2] += 0.001366120218579235;
          result[3] += 0.028688524590163935;
          result[4] += 0.030054644808743168;
          result[5] += 0.9385245901639344;
        } else {
          result[0] += 0.09075342465753425;
          result[1] += 0.039383561643835614;
          result[2] += 0.03595890410958904;
          result[3] += 0.3339041095890411;
          result[4] += 0.0976027397260274;
          result[5] += 0.4023972602739726;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
          result[0] += 0.05319148936170213;
          result[1] += 0.4627659574468085;
          result[2] += 0.005319148936170213;
          result[3] += 0.015957446808510637;
          result[4] += 0.4574468085106383;
          result[5] += 0.005319148936170213;
        } else {
          result[0] += 0.7868852459016393;
          result[1] += 0.02608047690014903;
          result[2] += 0.020864381520119227;
          result[3] += 0.05216095380029806;
          result[4] += 0.06557377049180328;
          result[5] += 0.04843517138599106;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)56.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.8333333333333334;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.16666666666666666;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.04878048780487805;
          result[3] += 0.32926829268292684;
          result[4] += 0.012195121951219513;
          result[5] += 0.6097560975609756;
        } else {
          result[0] += 0.07142857142857144;
          result[1] += 0.5714285714285715;
          result[2] += 0;
          result[3] += 0.07142857142857144;
          result[4] += 0.28571428571428575;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5089285714285714;
          result[3] += 0.2857142857142857;
          result[4] += 0.017857142857142856;
          result[5] += 0.1875;
        } else {
          result[0] += 0.7857142857142858;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.07142857142857144;
          result[4] += 0.07142857142857144;
          result[5] += 0.07142857142857144;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3076923076923077;
          result[3] += 0.6410256410256411;
          result[4] += 0;
          result[5] += 0.05128205128205128;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7702702702702703;
          result[3] += 0.13513513513513514;
          result[4] += 0;
          result[5] += 0.0945945945945946;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)64.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.011235955056179775;
          result[1] += 0;
          result[2] += 0.9247191011235955;
          result[3] += 0.05393258426966292;
          result[4] += 0;
          result[5] += 0.010112359550561797;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)95.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9506172839506173;
          result[5] += 0.04938271604938271;
        } else {
          result[0] += 0;
          result[1] += 0.42857142857142855;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.14285714285714285;
          result[5] += 0.42857142857142855;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          result[0] += 0.04912663755458515;
          result[1] += 0.018558951965065504;
          result[2] += 0;
          result[3] += 0.05131004366812227;
          result[4] += 0.05349344978165939;
          result[5] += 0.8275109170305677;
        } else {
          result[0] += 0;
          result[1] += 0.0032258064516129032;
          result[2] += 0.04838709677419355;
          result[3] += 0.4774193548387097;
          result[4] += 0.0032258064516129032;
          result[5] += 0.46774193548387094;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)97) ) ) {
          result[0] += 0;
          result[1] += 0.9619952494061758;
          result[2] += 0;
          result[3] += 0.0023752969121140144;
          result[4] += 0.030878859857482184;
          result[5] += 0.004750593824228029;
        } else {
          result[0] += 0.16666666666666666;
          result[1] += 0.16666666666666666;
          result[2] += 0.6666666666666666;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7673559822747416;
          result[1] += 0.0310192023633678;
          result[2] += 0.0029542097488921715;
          result[3] += 0.033973412112259974;
          result[4] += 0.1432791728212703;
          result[5] += 0.02141802067946824;
        } else {
          result[0] += 0.18442622950819673;
          result[1] += 0.03278688524590164;
          result[2] += 0.20901639344262296;
          result[3] += 0.22540983606557377;
          result[4] += 0.09631147540983606;
          result[5] += 0.2520491803278688;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)71) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)69) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6666666666666666;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.3333333333333333;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.3;
          result[2] += 0.05;
          result[3] += 0.1;
          result[4] += 0.25;
          result[5] += 0.3;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16666666666666669;
          result[3] += 0.6666666666666667;
          result[4] += 0;
          result[5] += 0.16666666666666669;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0.47368421052631576;
          result[4] += 0;
          result[5] += 0.19298245614035087;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8313253012048193;
          result[3] += 0.13253012048192772;
          result[4] += 0.012048192771084338;
          result[5] += 0.024096385542168676;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)99.5) ) ) {
          result[0] += 0.007194244604316547;
          result[1] += 0.014388489208633094;
          result[2] += 0.8201438848920863;
          result[3] += 0.12949640287769784;
          result[4] += 0.014388489208633094;
          result[5] += 0.014388489208633094;
        } else {
          result[0] += 0.0031496062992125984;
          result[1] += 0;
          result[2] += 0.9748031496062992;
          result[3] += 0.02047244094488189;
          result[4] += 0;
          result[5] += 0.0015748031496062992;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)122.5) ) ) {
          result[0] += 0.0037313432835820895;
          result[1] += 0;
          result[2] += 0.007462686567164179;
          result[3] += 0.011194029850746268;
          result[4] += 0.9253731343283582;
          result[5] += 0.05223880597014925;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)87.5) ) ) {
          result[0] += 0.030634573304157548;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04266958424507659;
          result[4] += 0.0525164113785558;
          result[5] += 0.8741794310722101;
        } else {
          result[0] += 0.04024767801857585;
          result[1] += 0.0804953560371517;
          result[2] += 0.006191950464396285;
          result[3] += 0.47987616099071206;
          result[4] += 0.030959752321981424;
          result[5] += 0.3622291021671827;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)54) ) ) {
          result[0] += 0.006315789473684211;
          result[1] += 0.9578947368421054;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.03578947368421053;
          result[5] += 0;
        } else {
          result[0] += 0.006535947712418301;
          result[1] += 0.19607843137254902;
          result[2] += 0.006535947712418301;
          result[3] += 0.032679738562091505;
          result[4] += 0.6470588235294118;
          result[5] += 0.1111111111111111;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)74.5) ) ) {
          result[0] += 0.7789559543230016;
          result[1] += 0.0367047308319739;
          result[2] += 0.0032626427406199023;
          result[3] += 0.0399673735725938;
          result[4] += 0.10440456769983687;
          result[5] += 0.0367047308319739;
        } else {
          result[0] += 0.140625;
          result[1] += 0.009375;
          result[2] += 0.25;
          result[3] += 0.259375;
          result[4] += 0.059375;
          result[5] += 0.28125;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)99) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)90) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2;
          result[4] += 0;
          result[5] += 0.8;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)97) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.29166666666666674;
          result[3] += 0.5416666666666667;
          result[4] += 0;
          result[5] += 0.16666666666666669;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.875;
          result[3] += 0.125;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)86.5) ) ) {
          result[0] += 0.02127659574468085;
          result[1] += 0;
          result[2] += 0.6595744680851063;
          result[3] += 0.2393617021276596;
          result[4] += 0.005319148936170213;
          result[5] += 0.07446808510638298;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9576271186440678;
          result[3] += 0.03389830508474576;
          result[4] += 0;
          result[5] += 0.00847457627118644;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)87.5) ) ) {
          result[0] += 0.015037593984962405;
          result[1] += 0;
          result[2] += 0.849624060150376;
          result[3] += 0.11654135338345864;
          result[4] += 0;
          result[5] += 0.018796992481203006;
        } else {
          result[0] += 0.00391389432485323;
          result[1] += 0;
          result[2] += 0.9823874755381605;
          result[3] += 0.009784735812133074;
          result[4] += 0;
          result[5] += 0.00391389432485323;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0.004739336492890996;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.995260663507109;
          result[5] += 0;
        } else {
          result[0] += 0.017241379310344827;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7586206896551724;
          result[5] += 0.22413793103448276;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)56.5) ) ) {
          result[0] += 0.7792207792207793;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.19480519480519481;
          result[5] += 0.025974025974025976;
        } else {
          result[0] += 0;
          result[1] += 0.007525083612040134;
          result[2] += 0.004180602006688963;
          result[3] += 0.15133779264214048;
          result[4] += 0.048494983277591976;
          result[5] += 0.7884615384615384;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)50) ) ) {
          result[0] += 0;
          result[1] += 0.9845474613686535;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.01545253863134658;
          result[5] += 0;
        } else {
          result[0] += 0.034482758620689655;
          result[1] += 0.27586206896551724;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6810344827586207;
          result[5] += 0.008620689655172414;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0.8359253499222395;
          result[1] += 0.017107309486780714;
          result[2] += 0.016329704510108865;
          result[3] += 0.03732503888024884;
          result[4] += 0.06687402799377916;
          result[5] += 0.026438569206842923;
        } else {
          result[0] += 0.12827225130890052;
          result[1] += 0.02356020942408377;
          result[2] += 0.306282722513089;
          result[3] += 0.27486910994764396;
          result[4] += 0.0549738219895288;
          result[5] += 0.21204188481675393;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)99) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.04878048780487805;
          result[2] += 0.04878048780487805;
          result[3] += 0.12195121951219512;
          result[4] += 0;
          result[5] += 0.7804878048780488;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3114754098360656;
          result[3] += 0.3114754098360656;
          result[4] += 0.03278688524590164;
          result[5] += 0.3442622950819672;
        } else {
          result[0] += 0.027777777777777776;
          result[1] += 0;
          result[2] += 0.8611111111111112;
          result[3] += 0;
          result[4] += 0.027777777777777776;
          result[5] += 0.08333333333333333;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0.6071428571428571;
          result[4] += 0;
          result[5] += 0.14285714285714285;
        } else {
          result[0] += 0;
          result[1] += 0.09523809523809523;
          result[2] += 0.7142857142857143;
          result[3] += 0.14285714285714285;
          result[4] += 0;
          result[5] += 0.047619047619047616;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
          result[0] += 0.005128205128205128;
          result[1] += 0;
          result[2] += 0.841025641025641;
          result[3] += 0.15384615384615385;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0015723270440251573;
          result[1] += 0;
          result[2] += 0.9591194968553459;
          result[3] += 0.03773584905660377;
          result[4] += 0;
          result[5] += 0.0015723270440251573;
        }
      }
    }
  }
  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)92) ) ) {
          result[0] += 0.023166023166023165;
          result[1] += 0.02702702702702703;
          result[2] += 0;
          result[3] += 0.003861003861003861;
          result[4] += 0.918918918918919;
          result[5] += 0.02702702702702703;
        } else {
          result[0] += 0.10000000000000002;
          result[1] += 0.5333333333333334;
          result[2] += 0;
          result[3] += 0.03333333333333334;
          result[4] += 0.30000000000000004;
          result[5] += 0.03333333333333334;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)66.5) ) ) {
          result[0] += 0.18571428571428572;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.07142857142857142;
          result[4] += 0.5857142857142857;
          result[5] += 0.15714285714285714;
        } else {
          result[0] += 0.9478260869565217;
          result[1] += 0.004347826086956522;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.017391304347826087;
          result[5] += 0.030434782608695653;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)51) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.004076086956521739;
          result[2] += 0.001358695652173913;
          result[3] += 0.021739130434782608;
          result[4] += 0.025815217391304348;
          result[5] += 0.9470108695652174;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)74) ) ) {
          result[0] += 0.05982905982905983;
          result[1] += 0.042735042735042736;
          result[2] += 0;
          result[3] += 0.02564102564102564;
          result[4] += 0.6666666666666666;
          result[5] += 0.20512820512820512;
        } else {
          result[0] += 0.04093567251461988;
          result[1] += 0.01608187134502924;
          result[2] += 0.033625730994152045;
          result[3] += 0.3961988304093567;
          result[4] += 0.03216374269005848;
          result[5] += 0.48099415204678364;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)72) ) ) {
          result[0] += 0;
          result[1] += 0.8020833333333334;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.19791666666666666;
          result[5] += 0;
        } else {
          result[0] += 0.8733401430030644;
          result[1] += 0.0040858018386108275;
          result[2] += 0.03881511746680286;
          result[3] += 0.020429009193054137;
          result[4] += 0.04698672114402452;
          result[5] += 0.01634320735444331;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)86) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
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
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)98.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25333333333333335;
          result[3] += 0.4;
          result[4] += 0;
          result[5] += 0.3466666666666667;
        } else {
          result[0] += 0.014925373134328358;
          result[1] += 0;
          result[2] += 0.7164179104477612;
          result[3] += 0.14925373134328357;
          result[4] += 0.014925373134328358;
          result[5] += 0.1044776119402985;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)75.5) ) ) {
          result[0] += 0.175;
          result[1] += 0.25;
          result[2] += 0.475;
          result[3] += 0.025;
          result[4] += 0.025;
          result[5] += 0.05;
        } else {
          result[0] += 0.007021063189568707;
          result[1] += 0.001003009027081244;
          result[2] += 0.9197592778335006;
          result[3] += 0.06519558676028085;
          result[4] += 0.002006018054162488;
          result[5] += 0.005015045135406219;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)50) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.02857142857142857;
          result[4] += 0.9714285714285714;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
          result[0] += 0;
          result[1] += 0.9333333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.06666666666666667;
          result[5] += 0;
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
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
          result[0] += 0.24187725631768953;
          result[1] += 0.032490974729241874;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.592057761732852;
          result[5] += 0.13357400722021662;
        } else {
          result[0] += 0.004233700254022015;
          result[1] += 0.00846740050804403;
          result[2] += 0.016088060965283656;
          result[3] += 0.165961049957663;
          result[4] += 0.05419136325148179;
          result[5] += 0.7510584250635055;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)70.5) ) ) {
          result[0] += 0.16356877323420074;
          result[1] += 0.15985130111524162;
          result[2] += 0.0037174721189591076;
          result[3] += 0.022304832713754646;
          result[4] += 0.5947955390334573;
          result[5] += 0.055762081784386616;
        } else {
          result[0] += 0.7394023627519111;
          result[1] += 0.004169562195969423;
          result[2] += 0.06532314107018763;
          result[3] += 0.07922168172341904;
          result[4] += 0.05281445448227936;
          result[5] += 0.05906879777623349;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)83.5) ) ) {
          result[0] += 0.014705882352941176;
          result[1] += 0.19117647058823528;
          result[2] += 0.08823529411764706;
          result[3] += 0.07352941176470588;
          result[4] += 0.20588235294117646;
          result[5] += 0.4264705882352941;
        } else {
          result[0] += 0.017857142857142856;
          result[1] += 0;
          result[2] += 0.07142857142857142;
          result[3] += 0.7857142857142857;
          result[4] += 0;
          result[5] += 0.125;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)90) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.13636363636363635;
          result[3] += 0;
          result[4] += 0.45454545454545453;
          result[5] += 0.4090909090909091;
        } else {
          result[0] += 0.112;
          result[1] += 0.008;
          result[2] += 0.696;
          result[3] += 0.168;
          result[4] += 0;
          result[5] += 0.016;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.21428571428571427;
          result[3] += 0.5714285714285714;
          result[4] += 0;
          result[5] += 0.21428571428571427;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7857142857142857;
          result[3] += 0.17346938775510204;
          result[4] += 0;
          result[5] += 0.04081632653061224;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7777777777777778;
          result[1] += 0;
          result[2] += 0.2222222222222222;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0030441400304414;
          result[1] += 0;
          result[2] += 0.9680365296803652;
          result[3] += 0.0289193302891933;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9792746113989638;
          result[5] += 0.02072538860103627;
        } else {
          result[0] += 0.654320987654321;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.012345679012345678;
          result[4] += 0.25925925925925924;
          result[5] += 0.07407407407407407;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0.024208566108007448;
          result[2] += 0.004655493482309125;
          result[3] += 0.06983240223463687;
          result[4] += 0.07914338919925512;
          result[5] += 0.8221601489757915;
        } else {
          result[0] += 0.024271844660194174;
          result[1] += 0.009708737864077669;
          result[2] += 0.043689320388349516;
          result[3] += 0.5631067961165048;
          result[4] += 0;
          result[5] += 0.3592233009708738;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)75) ) ) {
          result[0] += 0;
          result[1] += 0.25;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.75;
          result[5] += 0;
        } else {
          result[0] += 0.0022727272727272726;
          result[1] += 0.9863636363636363;
          result[2] += 0;
          result[3] += 0.004545454545454545;
          result[4] += 0.006818181818181818;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7553743513713862;
          result[1] += 0.03039288361749444;
          result[2] += 0.01111934766493699;
          result[3] += 0.03261675315048184;
          result[4] += 0.13194959229058562;
          result[5] += 0.0385470719051149;
        } else {
          result[0] += 0.1527777777777778;
          result[1] += 0.004629629629629629;
          result[2] += 0.2337962962962963;
          result[3] += 0.3194444444444444;
          result[4] += 0.07407407407407407;
          result[5] += 0.2152777777777778;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)88) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)99) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07692307692307693;
          result[3] += 0.36538461538461536;
          result[4] += 0;
          result[5] += 0.5576923076923077;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.52;
          result[3] += 0.32;
          result[4] += 0;
          result[5] += 0.16;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9523809523809523;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.047619047619047616;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)110.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6056338028169015;
          result[3] += 0.26760563380281693;
          result[4] += 0.028169014084507046;
          result[5] += 0.09859154929577466;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
          result[0] += 0.021164021164021163;
          result[1] += 0;
          result[2] += 0.8412698412698413;
          result[3] += 0.13227513227513227;
          result[4] += 0;
          result[5] += 0.005291005291005291;
        } else {
          result[0] += 0.0029985007496251873;
          result[1] += 0.0029985007496251873;
          result[2] += 0.9700149925037481;
          result[3] += 0.0239880059970015;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
          result[0] += 0.011811023622047246;
          result[1] += 0.015748031496062995;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9606299212598426;
          result[5] += 0.011811023622047246;
        } else {
          result[0] += 0;
          result[1] += 0.038834951456310676;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6699029126213593;
          result[5] += 0.2912621359223301;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)58) ) ) {
          result[0] += 0.8529411764705882;
          result[1] += 0.029411764705882353;
          result[2] += 0.011764705882352941;
          result[3] += 0.01764705882352941;
          result[4] += 0.058823529411764705;
          result[5] += 0.029411764705882353;
        } else {
          result[0] += 0.013418079096045197;
          result[1] += 0.00211864406779661;
          result[2] += 0.013418079096045197;
          result[3] += 0.2019774011299435;
          result[4] += 0.06002824858757062;
          result[5] += 0.7090395480225988;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)100.5) ) ) {
          result[0] += 0.07042253521126761;
          result[1] += 0.36619718309859156;
          result[2] += 0.056338028169014086;
          result[3] += 0.028169014084507043;
          result[4] += 0.4647887323943662;
          result[5] += 0.014084507042253521;
        } else {
          result[0] += 0.0022935779816513763;
          result[1] += 0.9954128440366973;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0022935779816513763;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
          result[0] += 0;
          result[1] += 0.6627906976744186;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3372093023255814;
          result[5] += 0;
        } else {
          result[0] += 0.83078231292517;
          result[1] += 0.00510204081632653;
          result[2] += 0.04421768707482993;
          result[3] += 0.04421768707482993;
          result[4] += 0.041666666666666664;
          result[5] += 0.034013605442176874;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1346153846153846;
          result[3] += 0.75;
          result[4] += 0;
          result[5] += 0.11538461538461539;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)116.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7142857142857143;
          result[3] += 0.16483516483516483;
          result[4] += 0;
          result[5] += 0.12087912087912088;
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
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)77) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.75;
          result[4] += 0;
          result[5] += 0.25;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8235294117647058;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.17647058823529413;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
          result[0] += 0.02531645569620253;
          result[1] += 0;
          result[2] += 0.870253164556962;
          result[3] += 0.0981012658227848;
          result[4] += 0;
          result[5] += 0.006329113924050633;
        } else {
          result[0] += 0.0016260162601626016;
          result[1] += 0;
          result[2] += 0.9772357723577236;
          result[3] += 0.02113821138211382;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
          result[0] += 0.007905138339920948;
          result[1] += 0.007905138339920948;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9090909090909091;
          result[5] += 0.07509881422924901;
        } else {
          result[0] += 0.5897435897435898;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.1794871794871795;
          result[5] += 0.23076923076923078;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.0012254901960784314;
          result[2] += 0;
          result[3] += 0.05269607843137255;
          result[4] += 0.056372549019607844;
          result[5] += 0.8897058823529411;
        } else {
          result[0] += 0;
          result[1] += 0.015105740181268883;
          result[2] += 0.012084592145015106;
          result[3] += 0.4259818731117825;
          result[4] += 0.06948640483383686;
          result[5] += 0.4773413897280967;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0.19230769230769232;
          result[2] += 0;
          result[3] += 0.038461538461538464;
          result[4] += 0.7692307692307693;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9813664596273292;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.018633540372670808;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.8012326656394451;
          result[1] += 0.03004622496147919;
          result[2] += 0.0015408320493066252;
          result[3] += 0.033127889060092446;
          result[4] += 0.11093990755007702;
          result[5] += 0.02311248073959938;
        } else {
          result[0] += 0.13938053097345135;
          result[1] += 0.019911504424778764;
          result[2] += 0.2433628318584071;
          result[3] += 0.2787610619469027;
          result[4] += 0.07743362831858408;
          result[5] += 0.24115044247787612;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0.06521739130434782;
          result[2] += 0.08695652173913043;
          result[3] += 0.44565217391304346;
          result[4] += 0.06521739130434782;
          result[5] += 0.33695652173913043;
        } else {
          result[0] += 0;
          result[1] += 0.013698630136986302;
          result[2] += 0.5342465753424659;
          result[3] += 0.26027397260273977;
          result[4] += 0;
          result[5] += 0.19178082191780824;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)116) ) ) {
          result[0] += 0.02040816326530612;
          result[1] += 0;
          result[2] += 0.9183673469387755;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.061224489795918366;
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
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
          result[0] += 0.06481481481481483;
          result[1] += 0;
          result[2] += 0.6574074074074076;
          result[3] += 0.212962962962963;
          result[4] += 0;
          result[5] += 0.06481481481481483;
        } else {
          result[0] += 0.01388888888888889;
          result[1] += 0;
          result[2] += 0.9166666666666667;
          result[3] += 0.06944444444444446;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)74.5) ) ) {
          result[0] += 0.5714285714285714;
          result[1] += 0;
          result[2] += 0.42857142857142855;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0016313213703099511;
          result[1] += 0;
          result[2] += 0.9706362153344209;
          result[3] += 0.02773246329526917;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)110.5) ) ) {
          result[0] += 0.012345679012345678;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.02880658436213992;
          result[4] += 0.9094650205761317;
          result[5] += 0.04938271604938271;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)76.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5660377358490566;
          result[5] += 0.4339622641509434;
        } else {
          result[0] += 0.8636363636363636;
          result[1] += 0.045454545454545456;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.06060606060606061;
          result[5] += 0.030303030303030304;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)50.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.009019165727170236;
          result[2] += 0;
          result[3] += 0.038331454340473504;
          result[4] += 0.05975197294250282;
          result[5] += 0.8928974069898534;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.20618556701030927;
          result[4] += 0.020618556701030927;
          result[5] += 0.7731958762886598;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.01015228426395939;
          result[3] += 0.7106598984771574;
          result[4] += 0.005076142131979695;
          result[5] += 0.27411167512690354;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.0020964360587002098;
          result[1] += 0.9853249475890985;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.012578616352201259;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7780203784570597;
          result[1] += 0.03493449781659389;
          result[2] += 0.0072780203784570605;
          result[3] += 0.0240174672489083;
          result[4] += 0.12954876273653568;
          result[5] += 0.026200873362445417;
        } else {
          result[0] += 0.18803418803418803;
          result[1] += 0.042735042735042736;
          result[2] += 0.2222222222222222;
          result[3] += 0.24358974358974358;
          result[4] += 0.06837606837606838;
          result[5] += 0.23504273504273504;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)94.5) ) ) {
          result[0] += 0.013513513513513514;
          result[1] += 0.04054054054054054;
          result[2] += 0.05405405405405406;
          result[3] += 0.3108108108108108;
          result[4] += 0.1891891891891892;
          result[5] += 0.3918918918918919;
        } else {
          result[0] += 0.018518518518518517;
          result[1] += 0.018518518518518517;
          result[2] += 0.49382716049382713;
          result[3] += 0.35802469135802467;
          result[4] += 0.006172839506172839;
          result[5] += 0.10493827160493827;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
          result[0] += 0.17567567567567569;
          result[1] += 0.013513513513513514;
          result[2] += 0.5;
          result[3] += 0.0945945945945946;
          result[4] += 0;
          result[5] += 0.21621621621621623;
        } else {
          result[0] += 0.004645760743321719;
          result[1] += 0;
          result[2] += 0.9163763066202091;
          result[3] += 0.07084785133565621;
          result[4] += 0;
          result[5] += 0.008130081300813009;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)70.5) ) ) {
          result[0] += 0.008130081300813009;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0040650406504065045;
          result[4] += 0.967479674796748;
          result[5] += 0.02032520325203252;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.1111111111111111;
          result[4] += 0.4444444444444444;
          result[5] += 0.4444444444444444;
        }
      } else {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
          result[0] += 0.7230769230769231;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.23076923076923078;
          result[5] += 0.046153846153846156;
        } else {
          result[0] += 0.0029910269192422734;
          result[1] += 0.004985044865403789;
          result[2] += 0.0009970089730807576;
          result[3] += 0.06979062811565304;
          result[4] += 0.04885343968095713;
          result[5] += 0.872382851445663;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2857142857142857;
          result[4] += 0.05357142857142857;
          result[5] += 0.6607142857142857;
        } else {
          result[0] += 0;
          result[1] += 0.007575757575757576;
          result[2] += 0;
          result[3] += 0.7954545454545454;
          result[4] += 0.007575757575757576;
          result[5] += 0.1893939393939394;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
          result[0] += 0;
          result[1] += 0.9904076738609112;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.009592326139088728;
          result[5] += 0;
        } else {
          result[0] += 0.008130081300813009;
          result[1] += 0.3252032520325203;
          result[2] += 0;
          result[3] += 0.024390243902439025;
          result[4] += 0.6178861788617886;
          result[5] += 0.024390243902439025;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8528174936921784;
          result[1] += 0.02859545836837679;
          result[2] += 0;
          result[3] += 0.010092514718250633;
          result[4] += 0.09924306139613122;
          result[5] += 0.00925147182506308;
        } else {
          result[0] += 0.26136363636363635;
          result[1] += 0.011363636363636364;
          result[2] += 0.18181818181818182;
          result[3] += 0.25;
          result[4] += 0.045454545454545456;
          result[5] += 0.25;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.05555555555555555;
          result[2] += 0.2777777777777778;
          result[3] += 0;
          result[4] += 0.6666666666666666;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.038461538461538464;
          result[2] += 0.19230769230769232;
          result[3] += 0.45054945054945056;
          result[4] += 0.016483516483516484;
          result[5] += 0.3021978021978022;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)72.5) ) ) {
          result[0] += 0.13793103448275862;
          result[1] += 0.13793103448275862;
          result[2] += 0.3793103448275862;
          result[3] += 0.034482758620689655;
          result[4] += 0.2413793103448276;
          result[5] += 0.06896551724137931;
        } else {
          result[0] += 0.01762977473065622;
          result[1] += 0.0019588638589618022;
          result[2] += 0.89128305582762;
          result[3] += 0.06660137120470128;
          result[4] += 0;
          result[5] += 0.022526934378060724;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0.033582089552238806;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9440298507462687;
          result[5] += 0.022388059701492536;
        } else {
          result[0] += 0.039473684210526314;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5789473684210527;
          result[5] += 0.3815789473684211;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)67.5) ) ) {
          result[0] += 0.00558659217877095;
          result[1] += 0.004189944134078212;
          result[2] += 0;
          result[3] += 0.030726256983240222;
          result[4] += 0.03910614525139665;
          result[5] += 0.9203910614525139;
        } else {
          result[0] += 0.26545454545454544;
          result[1] += 0.0036363636363636364;
          result[2] += 0;
          result[3] += 0.16;
          result[4] += 0.18181818181818182;
          result[5] += 0.3890909090909091;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)54.5) ) ) {
          result[0] += 0;
          result[1] += 0.9861431870669746;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.013856812933025405;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.4126984126984127;
          result[2] += 0.047619047619047616;
          result[3] += 0.031746031746031744;
          result[4] += 0.36507936507936506;
          result[5] += 0.14285714285714285;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
          result[0] += 0.27837514934289126;
          result[1] += 0.025089605734767026;
          result[2] += 0.07407407407407407;
          result[3] += 0.3201911589008363;
          result[4] += 0.07646356033452807;
          result[5] += 0.22580645161290322;
        } else {
          result[0] += 0.7933810375670841;
          result[1] += 0.04025044722719141;
          result[2] += 0.059033989266547404;
          result[3] += 0.024150268336314847;
          result[4] += 0.06350626118067978;
          result[5] += 0.01967799642218247;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
          result[0] += 0;
          result[1] += 0.03333333333333333;
          result[2] += 0.16666666666666666;
          result[3] += 0.2;
          result[4] += 0;
          result[5] += 0.6;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7142857142857143;
          result[3] += 0.22448979591836735;
          result[4] += 0.02040816326530612;
          result[5] += 0.04081632653061224;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)80) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)98.5) ) ) {
          result[0] += 0.005649717514124295;
          result[1] += 0;
          result[2] += 0.9412429378531074;
          result[3] += 0.04519774011299436;
          result[4] += 0;
          result[5] += 0.007909604519774013;
        } else {
          result[0] += 0.3448275862068966;
          result[1] += 0;
          result[2] += 0.6551724137931034;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)85) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)52) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
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
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)93.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
          result[0] += 0.008823529411764706;
          result[1] += 0.023529411764705882;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9;
          result[5] += 0.06764705882352941;
        } else {
          result[0] += 0.12675070028011204;
          result[1] += 0.0028011204481792717;
          result[2] += 0.012605042016806723;
          result[3] += 0.1323529411764706;
          result[4] += 0.07703081232492998;
          result[5] += 0.6484593837535014;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)79.5) ) ) {
          result[0] += 0.2849604221635884;
          result[1] += 0.03430079155672823;
          result[2] += 0.07387862796833773;
          result[3] += 0.2638522427440633;
          result[4] += 0.036939313984168866;
          result[5] += 0.30606860158311344;
        } else {
          result[0] += 0.7917888563049854;
          result[1] += 0.06842619745845553;
          result[2] += 0.034213098729227766;
          result[3] += 0.014662756598240472;
          result[4] += 0.07624633431085046;
          result[5] += 0.014662756598240472;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)82) ) ) {
          result[0] += 0.07142857142857142;
          result[1] += 0;
          result[2] += 0.07142857142857142;
          result[3] += 0.07142857142857142;
          result[4] += 0;
          result[5] += 0.7857142857142857;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14705882352941177;
          result[3] += 0.6911764705882353;
          result[4] += 0;
          result[5] += 0.16176470588235295;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
          result[0] += 0;
          result[1] += 0.9230769230769231;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.07692307692307693;
          result[5] += 0;
        } else {
          result[0] += 0.08029197080291972;
          result[1] += 0.007299270072992701;
          result[2] += 0.54014598540146;
          result[3] += 0.13138686131386865;
          result[4] += 0.04379562043795621;
          result[5] += 0.19708029197080296;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
          result[0] += 0.02173913043478261;
          result[1] += 0;
          result[2] += 0.39130434782608703;
          result[3] += 0.5652173913043479;
          result[4] += 0;
          result[5] += 0.02173913043478261;
        } else {
          result[0] += 0.014084507042253523;
          result[1] += 0;
          result[2] += 0.7887323943661972;
          result[3] += 0.1830985915492958;
          result[4] += 0;
          result[5] += 0.014084507042253523;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)87.5) ) ) {
          result[0] += 0.01845018450184502;
          result[1] += 0;
          result[2] += 0.8560885608856088;
          result[3] += 0.11070110701107011;
          result[4] += 0;
          result[5] += 0.014760147601476014;
        } else {
          result[0] += 0.007797270955165692;
          result[1] += 0;
          result[2] += 0.9785575048732943;
          result[3] += 0.01364522417153996;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)71.5) ) ) {
          result[0] += 0.028662420382165606;
          result[1] += 0.022292993630573247;
          result[2] += 0;
          result[3] += 0.01910828025477707;
          result[4] += 0.8375796178343949;
          result[5] += 0.09235668789808917;
        } else {
          result[0] += 0.5409836065573771;
          result[1] += 0.04918032786885246;
          result[2] += 0;
          result[3] += 0.04918032786885246;
          result[4] += 0.36065573770491804;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0012239902080783353;
          result[3] += 0.04528763769889841;
          result[4] += 0.06976744186046512;
          result[5] += 0.8837209302325582;
        } else {
          result[0] += 0.03237410071942446;
          result[1] += 0.007194244604316547;
          result[2] += 0;
          result[3] += 0.4460431654676259;
          result[4] += 0.03597122302158273;
          result[5] += 0.4784172661870504;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.3;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9979035639412998;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0020964360587002098;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)71.5) ) ) {
          result[0] += 0.24338624338624337;
          result[1] += 0.10582010582010581;
          result[2] += 0.021164021164021163;
          result[3] += 0.042328042328042326;
          result[4] += 0.5555555555555556;
          result[5] += 0.031746031746031744;
        } else {
          result[0] += 0.7633959638135004;
          result[1] += 0.012526096033402923;
          result[2] += 0.037578288100208766;
          result[3] += 0.0744606819763396;
          result[4] += 0.05149617258176757;
          result[5] += 0.060542797494780795;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)82) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
          result[0] += 0;
          result[1] += 0.08955223880597014;
          result[2] += 0;
          result[3] += 0.11940298507462686;
          result[4] += 0.208955223880597;
          result[5] += 0.582089552238806;
        } else {
          result[0] += 0.013245033112582781;
          result[1] += 0;
          result[2] += 0.2980132450331126;
          result[3] += 0.5695364238410596;
          result[4] += 0;
          result[5] += 0.11920529801324503;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)88) ) ) {
          result[0] += 0.13636363636363635;
          result[1] += 0.09090909090909091;
          result[2] += 0.22727272727272727;
          result[3] += 0.045454545454545456;
          result[4] += 0.18181818181818182;
          result[5] += 0.3181818181818182;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7894736842105263;
          result[3] += 0.14473684210526316;
          result[4] += 0;
          result[5] += 0.06578947368421052;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.23809523809523808;
          result[3] += 0.5238095238095238;
          result[4] += 0;
          result[5] += 0.23809523809523808;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8348623853211009;
          result[3] += 0.1651376146788991;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
          result[0] += 0.65;
          result[1] += 0;
          result[2] += 0.35;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.013386880856760375;
          result[1] += 0;
          result[2] += 0.9384203480589023;
          result[3] += 0.0428380187416332;
          result[4] += 0;
          result[5] += 0.00535475234270415;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)67.5) ) ) {
          result[0] += 0.0040650406504065045;
          result[1] += 0.008130081300813009;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.967479674796748;
          result[5] += 0.02032520325203252;
        } else {
          result[0] += 0.0625;
          result[1] += 0;
          result[2] += 0.1875;
          result[3] += 0.0625;
          result[4] += 0.25;
          result[5] += 0.4375;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03137789904502047;
          result[4] += 0.03819918144611187;
          result[5] += 0.9304229195088677;
        } else {
          result[0] += 0.08300395256916997;
          result[1] += 0.017786561264822136;
          result[2] += 0.003952569169960474;
          result[3] += 0.3201581027667984;
          result[4] += 0.1007905138339921;
          result[5] += 0.4743083003952569;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)55.5) ) ) {
          result[0] += 0.017408123791102518;
          result[1] += 0.9477756286266925;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.034816247582205036;
          result[5] += 0;
        } else {
          result[0] += 0.007633587786259542;
          result[1] += 0.2900763358778626;
          result[2] += 0;
          result[3] += 0.015267175572519083;
          result[4] += 0.6870229007633588;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)80.5) ) ) {
          result[0] += 0.44907407407407407;
          result[1] += 0.013888888888888888;
          result[2] += 0.05324074074074074;
          result[3] += 0.24305555555555555;
          result[4] += 0.08333333333333333;
          result[5] += 0.1574074074074074;
        } else {
          result[0] += 0.8485148514851485;
          result[1] += 0.01287128712871287;
          result[2] += 0.05148514851485148;
          result[3] += 0.01089108910891089;
          result[4] += 0.053465346534653464;
          result[5] += 0.02277227722772277;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)89.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)113.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.037037037037037035;
          result[3] += 0.037037037037037035;
          result[4] += 0.037037037037037035;
          result[5] += 0.8888888888888888;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8333333333333334;
          result[3] += 0;
          result[4] += 0.08333333333333333;
          result[5] += 0.08333333333333333;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
          result[0] += 0.010638297872340425;
          result[1] += 0.10638297872340426;
          result[2] += 0.05319148936170213;
          result[3] += 0.5638297872340425;
          result[4] += 0.0425531914893617;
          result[5] += 0.22340425531914893;
        } else {
          result[0] += 0.06818181818181818;
          result[1] += 0;
          result[2] += 0.5909090909090909;
          result[3] += 0.25;
          result[4] += 0;
          result[5] += 0.09090909090909091;
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1;
          result[3] += 0.85;
          result[4] += 0;
          result[5] += 0.05;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7962962962962963;
          result[3] += 0.1574074074074074;
          result[4] += 0;
          result[5] += 0.046296296296296294;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)99.5) ) ) {
          result[0] += 0.02564102564102564;
          result[1] += 0;
          result[2] += 0.7884615384615384;
          result[3] += 0.11538461538461539;
          result[4] += 0;
          result[5] += 0.07051282051282051;
        } else {
          result[0] += 0.016795865633074936;
          result[1] += 0;
          result[2] += 0.9405684754521964;
          result[3] += 0.041343669250646;
          result[4] += 0;
          result[5] += 0.0012919896640826874;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
          result[0] += 0.008771929824561403;
          result[1] += 0.039473684210526314;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9385964912280702;
          result[5] += 0.013157894736842105;
        } else {
          result[0] += 0.35947712418300654;
          result[1] += 0;
          result[2] += 0.026143790849673203;
          result[3] += 0;
          result[4] += 0.3660130718954248;
          result[5] += 0.24836601307189543;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0.00778642936596218;
          result[2] += 0;
          result[3] += 0.04671857619577308;
          result[4] += 0.06117908787541713;
          result[5] += 0.8843159065628476;
        } else {
          result[0] += 0.006349206349206349;
          result[1] += 0.0031746031746031746;
          result[2] += 0.031746031746031744;
          result[3] += 0.5555555555555556;
          result[4] += 0.006349206349206349;
          result[5] += 0.3968253968253968;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)92) ) ) {
          result[0] += 0;
          result[1] += 0.36363636363636365;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6363636363636364;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9889624724061811;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.011037527593818985;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)107) ) ) {
          result[0] += 0.45310734463276836;
          result[1] += 0.04971751412429379;
          result[2] += 0.07457627118644068;
          result[3] += 0.14689265536723164;
          result[4] += 0.13559322033898305;
          result[5] += 0.1401129943502825;
        } else {
          result[0] += 0.8958333333333334;
          result[1] += 0.00390625;
          result[2] += 0.02734375;
          result[3] += 0.015625;
          result[4] += 0.05078125;
          result[5] += 0.006510416666666667;
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)102.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.23529411764705885;
          result[3] += 0.6000000000000001;
          result[4] += 0;
          result[5] += 0.1647058823529412;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7428571428571429;
          result[3] += 0.14285714285714285;
          result[4] += 0;
          result[5] += 0.11428571428571428;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)107) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7272727272727273;
          result[3] += 0.25;
          result[4] += 0;
          result[5] += 0.022727272727272728;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9444444444444444;
          result[3] += 0.018518518518518517;
          result[4] += 0;
          result[5] += 0.037037037037037035;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.34782608695652173;
          result[3] += 0.4782608695652174;
          result[4] += 0;
          result[5] += 0.17391304347826086;
        } else {
          result[0] += 0.11764705882352941;
          result[1] += 0;
          result[2] += 0.7941176470588235;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.08823529411764706;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
          result[0] += 0.05084745762711865;
          result[1] += 0;
          result[2] += 0.8177966101694916;
          result[3] += 0.1228813559322034;
          result[4] += 0;
          result[5] += 0.00847457627118644;
        } else {
          result[0] += 0.0035087719298245615;
          result[1] += 0;
          result[2] += 0.9701754385964912;
          result[3] += 0.02631578947368421;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)68.5) ) ) {
          result[0] += 0.011406844106463879;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9467680608365019;
          result[5] += 0.04182509505703422;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.25;
          result[4] += 0;
          result[5] += 0.25;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
          result[0] += 0.051961823966065745;
          result[1] += 0.006362672322375398;
          result[2] += 0;
          result[3] += 0.029692470837751856;
          result[4] += 0.07953340402969247;
          result[5] += 0.8324496288441146;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.012396694214876033;
          result[3] += 0.5289256198347108;
          result[4] += 0.01652892561983471;
          result[5] += 0.44214876033057854;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)68.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
          result[0] += 0.08421052631578947;
          result[1] += 0.021052631578947368;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8736842105263158;
          result[5] += 0.021052631578947368;
        } else {
          result[0] += 0;
          result[1] += 0.9328358208955224;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.06716417910447761;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.9012455516014235;
          result[1] += 0.011565836298932384;
          result[2] += 0;
          result[3] += 0.011565836298932384;
          result[4] += 0.06583629893238434;
          result[5] += 0.009786476868327402;
        } else {
          result[0] += 0.23512747875354106;
          result[1] += 0.036827195467422094;
          result[2] += 0.20679886685552407;
          result[3] += 0.2747875354107649;
          result[4] += 0.036827195467422094;
          result[5] += 0.2096317280453258;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)87.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 1;
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.15079365079365079;
          result[3] += 0.6904761904761905;
          result[4] += 0.015873015873015872;
          result[5] += 0.14285714285714285;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.22727272727272727;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.7727272727272727;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
          result[0] += 0.13114754098360656;
          result[1] += 0.06557377049180328;
          result[2] += 0.03278688524590164;
          result[3] += 0.2786885245901639;
          result[4] += 0.18032786885245902;
          result[5] += 0.3114754098360656;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.671875;
          result[3] += 0.21875;
          result[4] += 0.078125;
          result[5] += 0.03125;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7974683544303798;
          result[3] += 0.17088607594936708;
          result[4] += 0;
          result[5] += 0.03164556962025317;
        } else {
          result[0] += 0.004993757802746567;
          result[1] += 0;
          result[2] += 0.9450686641697877;
          result[3] += 0.0449438202247191;
          result[4] += 0;
          result[5] += 0.004993757802746567;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.01818181818181818;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9818181818181818;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5925925925925926;
          result[5] += 0.4074074074074074;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0.04198062432723358;
          result[1] += 0.001076426264800861;
          result[2] += 0;
          result[3] += 0.03767491926803014;
          result[4] += 0.062432723358449946;
          result[5] += 0.8568353067814855;
        } else {
          result[0] += 0.06764705882352941;
          result[1] += 0.008823529411764706;
          result[2] += 0;
          result[3] += 0.4823529411764706;
          result[4] += 0.029411764705882353;
          result[5] += 0.4117647058823529;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0.14285714285714285;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8571428571428571;
          result[5] += 0;
        } else {
          result[0] += 0.004629629629629629;
          result[1] += 0.9837962962962963;
          result[2] += 0;
          result[3] += 0.006944444444444444;
          result[4] += 0.004629629629629629;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
          result[0] += 0.3179347826086957;
          result[1] += 0.05570652173913043;
          result[2] += 0.07880434782608696;
          result[3] += 0.22418478260869565;
          result[4] += 0.16032608695652173;
          result[5] += 0.16304347826086957;
        } else {
          result[0] += 0.8188050930460331;
          result[1] += 0.029382957884427026;
          result[2] += 0.052889324191968644;
          result[3] += 0.014691478942213513;
          result[4] += 0.07541625857002937;
          result[5] += 0.008814887365328108;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.2;
          result[2] += 0;
          result[3] += 0.05;
          result[4] += 0;
          result[5] += 0.75;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3611111111111111;
          result[3] += 0.5277777777777778;
          result[4] += 0;
          result[5] += 0.1111111111111111;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)95) ) ) {
          result[0] += 0;
          result[1] += 0.052083333333333336;
          result[2] += 0.7916666666666666;
          result[3] += 0.10416666666666667;
          result[4] += 0;
          result[5] += 0.052083333333333336;
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
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)98.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.24;
          result[3] += 0.72;
          result[4] += 0;
          result[5] += 0.04;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8181818181818182;
          result[3] += 0.09090909090909091;
          result[4] += 0;
          result[5] += 0.09090909090909091;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)101.5) ) ) {
          result[0] += 0.007001166861143524;
          result[1] += 0;
          result[2] += 0.9323220536756126;
          result[3] += 0.050175029171528586;
          result[4] += 0.0011668611435239206;
          result[5] += 0.009334889148191364;
        } else {
          result[0] += 0.3333333333333333;
          result[1] += 0;
          result[2] += 0.6666666666666666;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)65) ) ) {
          result[0] += 0.00909090909090909;
          result[1] += 0.004545454545454545;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9590909090909091;
          result[5] += 0.02727272727272727;
        } else {
          result[0] += 0.4117647058823529;
          result[1] += 0.01680672268907563;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.25210084033613445;
          result[5] += 0.31932773109243695;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0.003246753246753247;
          result[2] += 0;
          result[3] += 0.031385281385281384;
          result[4] += 0.07792207792207792;
          result[5] += 0.8874458874458875;
        } else {
          result[0] += 0.006644518272425249;
          result[1] += 0.0033222591362126247;
          result[2] += 0.009966777408637873;
          result[3] += 0.4684385382059801;
          result[4] += 0.016611295681063124;
          result[5] += 0.4950166112956811;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)47) ) ) {
          result[0] += 0;
          result[1] += 0.9913232104121475;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.008676789587852495;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.43023255813953487;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5697674418604651;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7952883834281074;
          result[1] += 0.03005686433793664;
          result[2] += 0.004061738424045492;
          result[3] += 0.022745735174654756;
          result[4] += 0.13403736799350124;
          result[5] += 0.013809910641754672;
        } else {
          result[0] += 0.17209302325581396;
          result[1] += 0.037209302325581395;
          result[2] += 0.19069767441860466;
          result[3] += 0.27906976744186046;
          result[4] += 0.08604651162790698;
          result[5] += 0.23488372093023255;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8461538461538461;
          result[4] += 0;
          result[5] += 0.15384615384615385;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.36363636363636365;
          result[3] += 0.09090909090909091;
          result[4] += 0;
          result[5] += 0.5454545454545454;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)99.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.48333333333333334;
          result[3] += 0.31666666666666665;
          result[4] += 0.016666666666666666;
          result[5] += 0.18333333333333332;
        } else {
          result[0] += 0.06666666666666667;
          result[1] += 0;
          result[2] += 0.9;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.03333333333333333;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5121951219512195;
          result[3] += 0.4878048780487805;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6190476190476191;
          result[3] += 0.19047619047619047;
          result[4] += 0;
          result[5] += 0.19047619047619047;
        } else {
          result[0] += 0.010650887573964497;
          result[1] += 0;
          result[2] += 0.9609467455621302;
          result[3] += 0.028402366863905324;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
          result[0] += 0.018691588785046728;
          result[1] += 0.004672897196261682;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9392523364485982;
          result[5] += 0.037383177570093455;
        } else {
          result[0] += 0;
          result[1] += 0.7391304347826086;
          result[2] += 0;
          result[3] += 0.13043478260869565;
          result[4] += 0.08695652173913043;
          result[5] += 0.043478260869565216;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0.025081788440567066;
          result[1] += 0.0054525627044711015;
          result[2] += 0;
          result[3] += 0.04362050163576881;
          result[4] += 0.0697928026172301;
          result[5] += 0.8560523446019629;
        } else {
          result[0] += 0.09309309309309309;
          result[1] += 0.03003003003003003;
          result[2] += 0;
          result[3] += 0.3933933933933934;
          result[4] += 0.06906906906906907;
          result[5] += 0.4144144144144144;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)57.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0.2857142857142857;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7142857142857143;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9783080260303688;
          result[2] += 0;
          result[3] += 0.004338394793926247;
          result[4] += 0.01735357917570499;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.7483221476510068;
          result[1] += 0.03959731543624162;
          result[2] += 0.005369127516778524;
          result[3] += 0.03288590604026846;
          result[4] += 0.11073825503355707;
          result[5] += 0.06308724832214767;
        } else {
          result[0] += 0.14414414414414414;
          result[1] += 0.003003003003003003;
          result[2] += 0.1981981981981982;
          result[3] += 0.35735735735735735;
          result[4] += 0.057057057057057055;
          result[5] += 0.24024024024024024;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14084507042253522;
          result[3] += 0.7183098591549296;
          result[4] += 0;
          result[5] += 0.14084507042253522;
        } else {
          result[0] += 0.03125;
          result[1] += 0;
          result[2] += 0.625;
          result[3] += 0.125;
          result[4] += 0;
          result[5] += 0.21875;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)100) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7777777777777778;
          result[3] += 0.14814814814814814;
          result[4] += 0;
          result[5] += 0.07407407407407407;
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
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)76.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.011204481792717087;
          result[1] += 0;
          result[2] += 0.865546218487395;
          result[3] += 0.10084033613445378;
          result[4] += 0;
          result[5] += 0.022408963585434174;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)93) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0019267822736030828;
          result[1] += 0;
          result[2] += 0.9826589595375722;
          result[3] += 0.015414258188824663;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)98.5) ) ) {
          result[0] += 0.013422818791946308;
          result[1] += 0.010067114093959731;
          result[2] += 0.006711409395973154;
          result[3] += 0;
          result[4] += 0.8523489932885906;
          result[5] += 0.1174496644295302;
        } else {
          result[0] += 0;
          result[1] += 0.8484848484848485;
          result[2] += 0;
          result[3] += 0.06060606060606061;
          result[4] += 0.09090909090909091;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0.004405286343612335;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.023494860499265784;
          result[4] += 0.02643171806167401;
          result[5] += 0.9456681350954479;
        } else {
          result[0] += 0.13221601489757914;
          result[1] += 0.00558659217877095;
          result[2] += 0.0186219739292365;
          result[3] += 0.33147113594040967;
          result[4] += 0.08752327746741155;
          result[5] += 0.4245810055865922;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.07142857142857142;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9285714285714286;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9915966386554622;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.008403361344537815;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
          result[0] += 0.830220713073005;
          result[1] += 0.016129032258064516;
          result[2] += 0.0050933786078098476;
          result[3] += 0.025466893039049237;
          result[4] += 0.0899830220713073;
          result[5] += 0.03310696095076401;
        } else {
          result[0] += 0.2073490813648294;
          result[1] += 0.01837270341207349;
          result[2] += 0.13648293963254593;
          result[3] += 0.2545931758530184;
          result[4] += 0.06036745406824147;
          result[5] += 0.3228346456692913;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
          result[0] += 0.013888888888888888;
          result[1] += 0.1388888888888889;
          result[2] += 0.1111111111111111;
          result[3] += 0.18055555555555555;
          result[4] += 0.1527777777777778;
          result[5] += 0.4027777777777778;
        } else {
          result[0] += 0.019230769230769232;
          result[1] += 0;
          result[2] += 0.21153846153846154;
          result[3] += 0.6538461538461539;
          result[4] += 0;
          result[5] += 0.11538461538461539;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2727272727272727;
          result[3] += 0;
          result[4] += 0.2727272727272727;
          result[5] += 0.45454545454545453;
        } else {
          result[0] += 0.020833333333333332;
          result[1] += 0;
          result[2] += 0.7708333333333334;
          result[3] += 0.14583333333333334;
          result[4] += 0;
          result[5] += 0.0625;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)110.5) ) ) {
          result[0] += 0.09375;
          result[1] += 0;
          result[2] += 0.765625;
          result[3] += 0.125;
          result[4] += 0;
          result[5] += 0.015625;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
          result[0] += 0.00872093023255814;
          result[1] += 0;
          result[2] += 0.8691860465116279;
          result[3] += 0.10755813953488372;
          result[4] += 0;
          result[5] += 0.014534883720930232;
        } else {
          result[0] += 0.0106951871657754;
          result[1] += 0;
          result[2] += 0.9696969696969697;
          result[3] += 0.0196078431372549;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9751243781094527;
          result[5] += 0.024875621890547265;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)50) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
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
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)68.5) ) ) {
          result[0] += 0.006561679790026247;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.02099737532808399;
          result[4] += 0.049868766404199474;
          result[5] += 0.9225721784776902;
        } else {
          result[0] += 0.1554054054054054;
          result[1] += 0.04054054054054054;
          result[2] += 0;
          result[3] += 0.15202702702702703;
          result[4] += 0.11824324324324324;
          result[5] += 0.5337837837837838;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
          result[0] += 0.02112676056338028;
          result[1] += 0.01056338028169014;
          result[2] += 0.04225352112676056;
          result[3] += 0.5246478873239436;
          result[4] += 0.045774647887323945;
          result[5] += 0.35563380281690143;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7368421052631579;
          result[3] += 0.05263157894736842;
          result[4] += 0;
          result[5] += 0.21052631578947367;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)52.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)74) ) ) {
          result[0] += 0;
          result[1] += 0.9716599190283401;
          result[2] += 0;
          result[3] += 0.002024291497975709;
          result[4] += 0.026315789473684213;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)99) ) ) {
          result[0] += 0.396969696969697;
          result[1] += 0.05606060606060606;
          result[2] += 0.045454545454545456;
          result[3] += 0.13787878787878788;
          result[4] += 0.23333333333333334;
          result[5] += 0.1303030303030303;
        } else {
          result[0] += 0.8654467168998924;
          result[1] += 0.017222820236813777;
          result[2] += 0.04520990312163617;
          result[3] += 0.010764262648008612;
          result[4] += 0.05705059203444564;
          result[5] += 0.004305705059203444;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
          result[0] += 0.011363636363636364;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.29545454545454547;
          result[4] += 0.18181818181818182;
          result[5] += 0.5113636363636364;
        } else {
          result[0] += 0.009433962264150943;
          result[1] += 0;
          result[2] += 0.5094339622641509;
          result[3] += 0.3584905660377358;
          result[4] += 0.0047169811320754715;
          result[5] += 0.1179245283018868;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
          result[0] += 0.057692307692307696;
          result[1] += 0.07692307692307693;
          result[2] += 0.3269230769230769;
          result[3] += 0.09615384615384616;
          result[4] += 0.09615384615384616;
          result[5] += 0.34615384615384615;
        } else {
          result[0] += 0.01870324189526185;
          result[1] += 0;
          result[2] += 0.945137157107232;
          result[3] += 0.03366583541147133;
          result[4] += 0;
          result[5] += 0.002493765586034913;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)44) ) ) {
          result[0] += 0.004301075268817204;
          result[1] += 0.9956989247311828;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.8181818181818182;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.18181818181818182;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
          result[0] += 0.019230769230769232;
          result[1] += 0.07307692307692308;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8923076923076924;
          result[5] += 0.015384615384615385;
        } else {
          result[0] += 0.707641196013289;
          result[1] += 0.054817275747508304;
          result[2] += 0.0033222591362126247;
          result[3] += 0.016611295681063124;
          result[4] += 0.1478405315614618;
          result[5] += 0.06976744186046512;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)69.5) ) ) {
          result[0] += 0;
          result[1] += 0.003121748178980229;
          result[2] += 0.011446409989594173;
          result[3] += 0.08949011446409989;
          result[4] += 0.08740894901144641;
          result[5] += 0.8085327783558793;
        } else {
          result[0] += 0.16666666666666666;
          result[1] += 0.03580246913580247;
          result[2] += 0.07901234567901234;
          result[3] += 0.2777777777777778;
          result[4] += 0.12098765432098765;
          result[5] += 0.3197530864197531;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78) ) ) {
          result[0] += 0.9928825622775801;
          result[1] += 0;
          result[2] += 0.0017793594306049821;
          result[3] += 0;
          result[4] += 0.005338078291814947;
          result[5] += 0;
        } else {
          result[0] += 0.3333333333333333;
          result[1] += 0;
          result[2] += 0.1111111111111111;
          result[3] += 0.4444444444444444;
          result[4] += 0.1111111111111111;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)102) ) ) {
          result[0] += 0.1111111111111111;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.4444444444444444;
          result[4] += 0;
          result[5] += 0.4444444444444444;
        } else {
          result[0] += 0.03125;
          result[1] += 0;
          result[2] += 0.8125;
          result[3] += 0.0625;
          result[4] += 0;
          result[5] += 0.09375;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)111.5) ) ) {
          result[0] += 0.1724137931034483;
          result[1] += 0;
          result[2] += 0.7586206896551724;
          result[3] += 0.06896551724137931;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.8913043478260869;
          result[1] += 0;
          result[2] += 0.10869565217391304;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)85.5) ) ) {
          result[0] += 0.002304147465437788;
          result[1] += 0;
          result[2] += 0.783410138248848;
          result[3] += 0.1728110599078341;
          result[4] += 0;
          result[5] += 0.041474654377880185;
        } else {
          result[0] += 0.023728813559322035;
          result[1] += 0;
          result[2] += 0.9559322033898305;
          result[3] += 0.01864406779661017;
          result[4] += 0;
          result[5] += 0.001694915254237288;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
          result[0] += 0;
          result[1] += 0.015306122448979591;
          result[2] += 0.00510204081632653;
          result[3] += 0;
          result[4] += 0.9744897959183674;
          result[5] += 0.00510204081632653;
        } else {
          result[0] += 0.09803921568627451;
          result[1] += 0.0196078431372549;
          result[2] += 0.0392156862745098;
          result[3] += 0;
          result[4] += 0.5294117647058824;
          result[5] += 0.3137254901960784;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0.008152173913043478;
          result[2] += 0.001358695652173913;
          result[3] += 0.043478260869565216;
          result[4] += 0.028532608695652172;
          result[5] += 0.9184782608695652;
        } else {
          result[0] += 0.10505836575875487;
          result[1] += 0.011673151750972763;
          result[2] += 0.007782101167315175;
          result[3] += 0.31906614785992216;
          result[4] += 0.11089494163424124;
          result[5] += 0.4455252918287938;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9956709956709957;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004329004329004329;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)100.5) ) ) {
          result[0] += 0.3850574712643678;
          result[1] += 0.05172413793103448;
          result[2] += 0.021551724137931036;
          result[3] += 0.1336206896551724;
          result[4] += 0.22701149425287356;
          result[5] += 0.1810344827586207;
        } else {
          result[0] += 0.8333333333333335;
          result[1] += 0.032128514056224904;
          result[2] += 0.034136546184738964;
          result[3] += 0.014056224899598395;
          result[4] += 0.07028112449799198;
          result[5] += 0.016064257028112452;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)110) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.19298245614035087;
          result[3] += 0.6140350877192983;
          result[4] += 0;
          result[5] += 0.19298245614035087;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
          result[0] += 0.02;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.26;
          result[4] += 0;
          result[5] += 0.22;
        } else {
          result[0] += 0.015625;
          result[1] += 0;
          result[2] += 0.828125;
          result[3] += 0.09375;
          result[4] += 0.015625;
          result[5] += 0.046875;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)121.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7884615384615384;
          result[3] += 0.1346153846153846;
          result[4] += 0;
          result[5] += 0.07692307692307693;
        } else {
          result[0] += 0.9230769230769231;
          result[1] += 0;
          result[2] += 0.07692307692307693;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0.6666666666666666;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.009313154831199068;
          result[1] += 0;
          result[2] += 0.9394644935972061;
          result[3] += 0.050058207217694994;
          result[4] += 0;
          result[5] += 0.0011641443538998836;
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.004830917874396135;
          result[3] += 0;
          result[4] += 0.961352657004831;
          result[5] += 0.033816425120772944;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)78) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.07142857142857142;
          result[5] += 0.9285714285714286;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09090909090909091;
          result[3] += 0;
          result[4] += 0.6363636363636364;
          result[5] += 0.2727272727272727;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6363636363636364;
          result[5] += 0.36363636363636365;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.004297994269340974;
          result[3] += 0.02865329512893983;
          result[4] += 0.024355300859598854;
          result[5] += 0.9426934097421203;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)57.5) ) ) {
          result[0] += 0.8775510204081632;
          result[1] += 0.08163265306122448;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.04081632653061224;
          result[5] += 0;
        } else {
          result[0] += 0.004048582995951417;
          result[1] += 0.04251012145748988;
          result[2] += 0.0465587044534413;
          result[3] += 0.3562753036437247;
          result[4] += 0.0465587044534413;
          result[5] += 0.5040485829959515;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0.4090909090909091;
          result[2] += 0.09090909090909091;
          result[3] += 0.022727272727272728;
          result[4] += 0.4772727272727273;
          result[5] += 0;
        } else {
          result[0] += 0.007594936708860759;
          result[1] += 0.979746835443038;
          result[2] += 0;
          result[3] += 0.005063291139240506;
          result[4] += 0.007594936708860759;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0.7720588235294118;
          result[1] += 0.03308823529411765;
          result[2] += 0;
          result[3] += 0.023529411764705882;
          result[4] += 0.1514705882352941;
          result[5] += 0.019852941176470587;
        } else {
          result[0] += 0.17592592592592593;
          result[1] += 0.0030864197530864196;
          result[2] += 0.1388888888888889;
          result[3] += 0.2808641975308642;
          result[4] += 0.08333333333333333;
          result[5] += 0.31790123456790126;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)54.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0199203187250996;
          result[1] += 0.00796812749003984;
          result[2] += 0.350597609561753;
          result[3] += 0.350597609561753;
          result[4] += 0.02390438247011952;
          result[5] += 0.24701195219123506;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8695652173913043;
          result[1] += 0;
          result[2] += 0.13043478260869565;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.012168141592920354;
          result[1] += 0;
          result[2] += 0.8960176991150443;
          result[3] += 0.08296460176991151;
          result[4] += 0.0011061946902654867;
          result[5] += 0.007743362831858407;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0.00684931506849315;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9246575342465754;
          result[5] += 0.0684931506849315;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.005221932114882507;
          result[3] += 0.028720626631853787;
          result[4] += 0.048302872062663184;
          result[5] += 0.9177545691906005;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
          result[0] += 0.019230769230769232;
          result[1] += 0.11538461538461539;
          result[2] += 0;
          result[3] += 0.019230769230769232;
          result[4] += 0.7788461538461539;
          result[5] += 0.0673076923076923;
        } else {
          result[0] += 0.11218568665377177;
          result[1] += 0.027079303675048357;
          result[2] += 0.007736943907156673;
          result[3] += 0.3307543520309478;
          result[4] += 0.04642166344294004;
          result[5] += 0.4758220502901354;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
          result[0] += 0.015384615384615385;
          result[1] += 0.03076923076923077;
          result[2] += 0.023076923076923078;
          result[3] += 0.023076923076923078;
          result[4] += 0.8461538461538461;
          result[5] += 0.06153846153846154;
        } else {
          result[0] += 0.00684931506849315;
          result[1] += 0.9794520547945206;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0136986301369863;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8298387096774194;
          result[1] += 0.03467741935483871;
          result[2] += 0;
          result[3] += 0.020161290322580645;
          result[4] += 0.08387096774193549;
          result[5] += 0.031451612903225803;
        } else {
          result[0] += 0.25;
          result[1] += 0.013513513513513514;
          result[2] += 0.19932432432432431;
          result[3] += 0.30405405405405406;
          result[4] += 0.02702702702702703;
          result[5] += 0.20608108108108109;
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)88) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.045454545454545456;
          result[4] += 0.045454545454545456;
          result[5] += 0.9090909090909091;
        } else {
          result[0] += 0;
          result[1] += 0.061068702290076333;
          result[2] += 0.183206106870229;
          result[3] += 0.549618320610687;
          result[4] += 0.030534351145038167;
          result[5] += 0.17557251908396945;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          result[0] += 0.33333333333333337;
          result[1] += 0.25000000000000006;
          result[2] += 0.16666666666666669;
          result[3] += 0.16666666666666669;
          result[4] += 0.08333333333333334;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7473684210526316;
          result[3] += 0.18947368421052632;
          result[4] += 0.010526315789473684;
          result[5] += 0.05263157894736842;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)91.5) ) ) {
          result[0] += 0.05172413793103448;
          result[1] += 0;
          result[2] += 0.6896551724137931;
          result[3] += 0.017241379310344827;
          result[4] += 0.017241379310344827;
          result[5] += 0.22413793103448276;
        } else {
          result[0] += 0.7647058823529411;
          result[1] += 0;
          result[2] += 0.23529411764705882;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6;
          result[4] += 0;
          result[5] += 0.4;
        } else {
          result[0] += 0.005889281507656066;
          result[1] += 0;
          result[2] += 0.9234393404004712;
          result[3] += 0.061248527679623084;
          result[4] += 0;
          result[5] += 0.009422850412249705;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)102.5) ) ) {
          result[0] += 0;
          result[1] += 0.008064516129032258;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.967741935483871;
          result[5] += 0.024193548387096774;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
          result[0] += 0.022641509433962263;
          result[1] += 0.0012578616352201257;
          result[2] += 0.0025157232704402514;
          result[3] += 0.04025157232704402;
          result[4] += 0.06289308176100629;
          result[5] += 0.8704402515723271;
        } else {
          result[0] += 0.08430913348946135;
          result[1] += 0.03044496487119438;
          result[2] += 0.0351288056206089;
          result[3] += 0.33489461358313816;
          result[4] += 0.03278688524590164;
          result[5] += 0.48243559718969553;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
          result[0] += 0.10546875;
          result[1] += 0.296875;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5703125;
          result[5] += 0.02734375;
        } else {
          result[0] += 0.7505330490405115;
          result[1] += 0.011371712864250176;
          result[2] += 0.0355366027007818;
          result[3] += 0.0952380952380952;
          result[4] += 0.05259417199715706;
          result[5] += 0.05472636815920397;
        }
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
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.011363636363636364;
          result[3] += 0.7272727272727273;
          result[4] += 0;
          result[5] += 0.26136363636363635;
        } else {
          result[0] += 0;
          result[1] += 0.08888888888888889;
          result[2] += 0.3111111111111111;
          result[3] += 0.26666666666666666;
          result[4] += 0;
          result[5] += 0.3333333333333333;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.36904761904761907;
          result[3] += 0.11904761904761904;
          result[4] += 0.09523809523809523;
          result[5] += 0.4166666666666667;
        } else {
          result[0] += 0.10784313725490197;
          result[1] += 0.00980392156862745;
          result[2] += 0.7843137254901961;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.09803921568627451;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
          result[0] += 0.011764705882352941;
          result[1] += 0;
          result[2] += 0.5176470588235295;
          result[3] += 0.3411764705882353;
          result[4] += 0;
          result[5] += 0.12941176470588237;
        } else {
          result[0] += 0.005025125628140704;
          result[1] += 0;
          result[2] += 0.8391959798994975;
          result[3] += 0.15577889447236182;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)86.5) ) ) {
          result[0] += 0.08666666666666667;
          result[1] += 0;
          result[2] += 0.8133333333333334;
          result[3] += 0.1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9856850715746421;
          result[3] += 0.014314928425357873;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)120) ) ) {
          result[0] += 0;
          result[1] += 0.007352941176470588;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9742647058823529;
          result[5] += 0.01838235294117647;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          result[0] += 0.0013568521031207597;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.032564450474898234;
          result[4] += 0.036635006784260515;
          result[5] += 0.9294436906377205;
        } else {
          result[0] += 0.06990291262135923;
          result[1] += 0.017475728155339806;
          result[2] += 0;
          result[3] += 0.3048543689320388;
          result[4] += 0.07961165048543689;
          result[5] += 0.5281553398058253;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)96.5) ) ) {
          result[0] += 0.01764705882352941;
          result[1] += 0.40588235294117647;
          result[2] += 0.0058823529411764705;
          result[3] += 0.0058823529411764705;
          result[4] += 0.49411764705882355;
          result[5] += 0.07058823529411765;
        } else {
          result[0] += 0.0022471910112359553;
          result[1] += 0.9977528089887641;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.8044871794871795;
          result[1] += 0.04246794871794872;
          result[2] += 0.011217948717948718;
          result[3] += 0.036057692307692304;
          result[4] += 0.08173076923076923;
          result[5] += 0.02403846153846154;
        } else {
          result[0] += 0.1799163179916318;
          result[1] += 0.058577405857740586;
          result[2] += 0.14225941422594143;
          result[3] += 0.39748953974895396;
          result[4] += 0.03765690376569038;
          result[5] += 0.18410041841004185;
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.18493150684931506;
          result[3] += 0.5684931506849316;
          result[4] += 0.00684931506849315;
          result[5] += 0.23972602739726026;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.76;
          result[3] += 0.16;
          result[4] += 0.04;
          result[5] += 0.04;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8636363636363636;
          result[3] += 0.09090909090909091;
          result[4] += 0;
          result[5] += 0.045454545454545456;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7751937984496124;
          result[3] += 0.10077519379844961;
          result[4] += 0;
          result[5] += 0.12403100775193798;
        } else {
          result[0] += 0.7142857142857143;
          result[1] += 0;
          result[2] += 0.14285714285714285;
          result[3] += 0.14285714285714285;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)99.5) ) ) {
          result[0] += 0.0025412960609911056;
          result[1] += 0;
          result[2] += 0.9453621346886912;
          result[3] += 0.04701397712833545;
          result[4] += 0;
          result[5] += 0.005082592121982211;
        } else {
          result[0] += 0.37037037037037035;
          result[1] += 0;
          result[2] += 0.6296296296296297;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          result[0] += 0.004098360655737705;
          result[1] += 0.045081967213114756;
          result[2] += 0;
          result[3] += 0.012295081967213115;
          result[4] += 0.8934426229508197;
          result[5] += 0.045081967213114756;
        } else {
          result[0] += 0.5352112676056339;
          result[1] += 0.014084507042253523;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.1971830985915493;
          result[5] += 0.25352112676056343;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0.0059594755661501785;
          result[2] += 0.003575685339690107;
          result[3] += 0.027413587604290822;
          result[4] += 0.07747318235995232;
          result[5] += 0.8855780691299165;
        } else {
          result[0] += 0.0035842293906810036;
          result[1] += 0;
          result[2] += 0.05734767025089606;
          result[3] += 0.5698924731182796;
          result[4] += 0;
          result[5] += 0.36917562724014336;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)102.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          result[0] += 0.722184300341297;
          result[1] += 0.045051194539249155;
          result[2] += 0.003412969283276451;
          result[3] += 0.03412969283276451;
          result[4] += 0.13583617747440277;
          result[5] += 0.05938566552901024;
        } else {
          result[0] += 0.1871508379888268;
          result[1] += 0.025139664804469275;
          result[2] += 0.2430167597765363;
          result[3] += 0.2905027932960894;
          result[4] += 0.07262569832402235;
          result[5] += 0.18156424581005587;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
          result[0] += 0.002212389380530974;
          result[1] += 0.9955752212389382;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002212389380530974;
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
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0;
          result[4] += 0.8;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.027777777777777776;
          result[3] += 0.1388888888888889;
          result[4] += 0;
          result[5] += 0.8333333333333334;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)74.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.03333333333333333;
          result[2] += 0.36666666666666664;
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0.26666666666666666;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.22727272727272727;
          result[3] += 0.7727272727272727;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.019230769230769232;
          result[2] += 0.7163461538461539;
          result[3] += 0.19230769230769232;
          result[4] += 0;
          result[5] += 0.07211538461538461;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75.5) ) ) {
          result[0] += 0.7857142857142857;
          result[1] += 0.21428571428571427;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.020486555697823303;
          result[1] += 0;
          result[2] += 0.9372599231754162;
          result[3] += 0.04225352112676056;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
          result[0] += 0.00398406374501992;
          result[1] += 0.0199203187250996;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.952191235059761;
          result[5] += 0.02390438247011952;
        } else {
          result[0] += 0.4803921568627451;
          result[1] += 0.029411764705882353;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2549019607843137;
          result[5] += 0.23529411764705882;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)85.5) ) ) {
          result[0] += 0.0026041666666666665;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.052083333333333336;
          result[4] += 0.0625;
          result[5] += 0.8828125;
        } else {
          result[0] += 0.005249343832020997;
          result[1] += 0.0026246719160104987;
          result[2] += 0;
          result[3] += 0.4304461942257218;
          result[4] += 0.03937007874015748;
          result[5] += 0.5223097112860893;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)110.5) ) ) {
          result[0] += 0.43299832495812396;
          result[1] += 0.07537688442211055;
          result[2] += 0.07788944723618091;
          result[3] += 0.1306532663316583;
          result[4] += 0.17336683417085427;
          result[5] += 0.10971524288107203;
        } else {
          result[0] += 0.9182692307692307;
          result[1] += 0.03205128205128205;
          result[2] += 0.019230769230769232;
          result[3] += 0;
          result[4] += 0.02403846153846154;
          result[5] += 0.00641025641025641;
        }
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
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16666666666666666;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.8333333333333334;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0.6666666666666666;
          result[4] += 0.016666666666666666;
          result[5] += 0.11666666666666667;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.36363636363636365;
          result[3] += 0.6363636363636364;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7628865979381443;
          result[3] += 0.17525773195876287;
          result[4] += 0;
          result[5] += 0.061855670103092786;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)68.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.01812688821752266;
          result[1] += 0;
          result[2] += 0.8338368580060423;
          result[3] += 0.1268882175226586;
          result[4] += 0;
          result[5] += 0.021148036253776436;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8461538461538461;
          result[3] += 0.11538461538461539;
          result[4] += 0;
          result[5] += 0.038461538461538464;
        } else {
          result[0] += 0.0019120458891013384;
          result[1] += 0;
          result[2] += 0.9847036328871893;
          result[3] += 0.01338432122370937;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)102.5) ) ) {
          result[0] += 0.1365079365079365;
          result[1] += 0.006349206349206349;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8063492063492064;
          result[5] += 0.050793650793650794;
        } else {
          result[0] += 0.034482758620689655;
          result[1] += 0.8275862068965517;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.13793103448275862;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.00145985401459854;
          result[3] += 0.04525547445255475;
          result[4] += 0.040875912408759124;
          result[5] += 0.9124087591240876;
        } else {
          result[0] += 0.007792207792207792;
          result[1] += 0.01038961038961039;
          result[2] += 0.015584415584415584;
          result[3] += 0.37142857142857144;
          result[4] += 0.12467532467532468;
          result[5] += 0.4701298701298701;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)89) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
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
          result[0] += 0.13821138211382114;
          result[1] += 0.08536585365853659;
          result[2] += 0;
          result[3] += 0.24796747967479674;
          result[4] += 0.1016260162601626;
          result[5] += 0.4268292682926829;
        } else {
          result[0] += 0.7501674480910918;
          result[1] += 0.020093770931011386;
          result[2] += 0.03014065639651708;
          result[3] += 0.04822505023442733;
          result[4] += 0.11185532484929672;
          result[5] += 0.03951774949765573;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)98.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05660377358490566;
          result[3] += 0.6792452830188679;
          result[4] += 0;
          result[5] += 0.2641509433962264;
        } else {
          result[0] += 0.11111111111111112;
          result[1] += 0;
          result[2] += 0.31111111111111117;
          result[3] += 0.22222222222222224;
          result[4] += 0.04444444444444445;
          result[5] += 0.31111111111111117;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3924050632911392;
          result[3] += 0.43037974683544306;
          result[4] += 0;
          result[5] += 0.17721518987341772;
        } else {
          result[0] += 0.008403361344537815;
          result[1] += 0;
          result[2] += 0.8067226890756303;
          result[3] += 0.10084033613445378;
          result[4] += 0;
          result[5] += 0.08403361344537816;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.1111111111111111;
          result[4] += 0.2222222222222222;
          result[5] += 0.6666666666666666;
        } else {
          result[0] += 0.03333333333333333;
          result[1] += 0;
          result[2] += 0.6666666666666666;
          result[3] += 0.3;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)98.5) ) ) {
          result[0] += 0.003694581280788177;
          result[1] += 0;
          result[2] += 0.9310344827586207;
          result[3] += 0.06280788177339902;
          result[4] += 0;
          result[5] += 0.0024630541871921183;
        } else {
          result[0] += 0.27906976744186046;
          result[1] += 0;
          result[2] += 0.7209302325581395;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
          result[0] += 0.007782101167315175;
          result[1] += 0.03501945525291829;
          result[2] += 0;
          result[3] += 0.01556420233463035;
          result[4] += 0.8949416342412452;
          result[5] += 0.04669260700389105;
        } else {
          result[0] += 0.9056603773584906;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.03773584905660377;
          result[5] += 0.05660377358490566;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0.0035252643948296123;
          result[2] += 0;
          result[3] += 0.04935370152761457;
          result[4] += 0.09518213866039953;
          result[5] += 0.8519388954171563;
        } else {
          result[0] += 0.013966480446927373;
          result[1] += 0;
          result[2] += 0.00558659217877095;
          result[3] += 0.4664804469273743;
          result[4] += 0.0111731843575419;
          result[5] += 0.5027932960893855;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0.38317757009345793;
          result[2] += 0;
          result[3] += 0.009345794392523364;
          result[4] += 0.5700934579439252;
          result[5] += 0.037383177570093455;
        } else {
          result[0] += 0.011627906976744186;
          result[1] += 0.9883720930232558;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8093289689034371;
          result[1] += 0.02291325695581015;
          result[2] += 0.00490998363338789;
          result[3] += 0.022094926350245504;
          result[4] += 0.11620294599018005;
          result[5] += 0.024549918166939445;
        } else {
          result[0] += 0.2403846153846154;
          result[1] += 0.04423076923076923;
          result[2] += 0.22115384615384615;
          result[3] += 0.22115384615384615;
          result[4] += 0.06923076923076923;
          result[5] += 0.20384615384615384;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)72.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0.09375;
          result[2] += 0.15625;
          result[3] += 0.65625;
          result[4] += 0;
          result[5] += 0.09375;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
          result[0] += 0.047619047619047616;
          result[1] += 0;
          result[2] += 0.2857142857142857;
          result[3] += 0;
          result[4] += 0.09523809523809523;
          result[5] += 0.5714285714285714;
        } else {
          result[0] += 0.016666666666666666;
          result[1] += 0.05;
          result[2] += 0.7666666666666667;
          result[3] += 0.06666666666666667;
          result[4] += 0.016666666666666666;
          result[5] += 0.08333333333333333;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.23076923076923078;
          result[3] += 0.7692307692307693;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.00851063829787234;
          result[1] += 0;
          result[2] += 0.7787234042553192;
          result[3] += 0.1829787234042553;
          result[4] += 0;
          result[5] += 0.029787234042553193;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)71) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.963020030816641;
          result[3] += 0.03389830508474576;
          result[4] += 0;
          result[5] += 0.0030816640986132513;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)52) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0.75;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.25;
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
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.2;
          result[2] += 0;
          result[3] += 0.2;
          result[4] += 0.4;
          result[5] += 0.2;
        } else {
          result[0] += 0;
          result[1] += 0.9642857142857143;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.03571428571428571;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)66.5) ) ) {
          result[0] += 0.0584958217270195;
          result[1] += 0.07520891364902507;
          result[2] += 0;
          result[3] += 0.008356545961002786;
          result[4] += 0.8105849582172702;
          result[5] += 0.04735376044568245;
        } else {
          result[0] += 0.8398950131233597;
          result[1] += 0.044619422572178484;
          result[2] += 0.010498687664041996;
          result[3] += 0.002624671916010499;
          result[4] += 0.08136482939632547;
          result[5] += 0.020997375328083993;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 0.0023446658851113715;
          result[2] += 0.0011723329425556857;
          result[3] += 0.05744431418522861;
          result[4] += 0.06213364595545135;
          result[5] += 0.876905041031653;
        } else {
          result[0] += 0.12577833125778332;
          result[1] += 0.052303860523038606;
          result[2] += 0.0161892901618929;
          result[3] += 0.27895392278953923;
          result[4] += 0.14819427148194272;
          result[5] += 0.37858032378580325;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)81) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
          result[0] += 0.9638205499276411;
          result[1] += 0;
          result[2] += 0.001447178002894356;
          result[3] += 0.005788712011577424;
          result[4] += 0.023154848046309694;
          result[5] += 0.005788712011577424;
        } else {
          result[0] += 0.16666666666666666;
          result[1] += 0;
          result[2] += 0.8333333333333334;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4577114427860697;
          result[3] += 0.4079601990049751;
          result[4] += 0.024875621890547265;
          result[5] += 0.10945273631840796;
        } else {
          result[0] += 0.06539509536784742;
          result[1] += 0;
          result[2] += 0.7438692098092644;
          result[3] += 0.1253405994550409;
          result[4] += 0;
          result[5] += 0.06539509536784742;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)83.5) ) ) {
          result[0] += 0.06382978723404255;
          result[1] += 0;
          result[2] += 0.723404255319149;
          result[3] += 0.14893617021276595;
          result[4] += 0;
          result[5] += 0.06382978723404255;
        } else {
          result[0] += 0.003072196620583718;
          result[1] += 0;
          result[2] += 0.9708141321044548;
          result[3] += 0.023041474654377885;
          result[4] += 0;
          result[5] += 0.003072196620583718;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)50) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)87.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
          result[0] += 0;
          result[1] += 0.6428571428571429;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.35714285714285715;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9977777777777778;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0022222222222222222;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          result[0] += 0.010416666666666666;
          result[1] += 0.03125;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9270833333333334;
          result[5] += 0.03125;
        } else {
          result[0] += 0.05336426914153132;
          result[1] += 0.01082753286929621;
          result[2] += 0.0015467904098994587;
          result[3] += 0.15622583139984533;
          result[4] += 0.04949729311678268;
          result[5] += 0.728538283062645;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)70.5) ) ) {
          result[0] += 0.13602941176470587;
          result[1] += 0.17279411764705882;
          result[2] += 0.029411764705882353;
          result[3] += 0.007352941176470588;
          result[4] += 0.6176470588235294;
          result[5] += 0.03676470588235294;
        } else {
          result[0] += 0.7170487106017192;
          result[1] += 0.0035816618911174787;
          result[2] += 0.04154727793696275;
          result[3] += 0.083810888252149;
          result[4] += 0.07664756446991404;
          result[5] += 0.07736389684813753;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          result[0] += 0.028089887640449437;
          result[1] += 0.06179775280898876;
          result[2] += 0.12921348314606743;
          result[3] += 0.4101123595505618;
          result[4] += 0.056179775280898875;
          result[5] += 0.3146067415730337;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6904761904761905;
          result[3] += 0.2619047619047619;
          result[4] += 0;
          result[5] += 0.047619047619047616;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
          result[0] += 0.7105263157894737;
          result[1] += 0;
          result[2] += 0.23684210526315788;
          result[3] += 0;
          result[4] += 0.05263157894736842;
          result[5] += 0;
        } else {
          result[0] += 0.12195121951219512;
          result[1] += 0;
          result[2] += 0.8536585365853658;
          result[3] += 0.024390243902439025;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.37777777777777777;
          result[3] += 0.35555555555555557;
          result[4] += 0;
          result[5] += 0.26666666666666666;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8;
          result[3] += 0.14444444444444443;
          result[4] += 0;
          result[5] += 0.05555555555555555;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)105.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8461538461538461;
          result[3] += 0.15384615384615385;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.004846526655896607;
          result[1] += 0;
          result[2] += 0.9693053311793215;
          result[3] += 0.025848142164781908;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)104) ) ) {
          result[0] += 0.0047393364928909965;
          result[1] += 0;
          result[2] += 0.009478672985781993;
          result[3] += 0.014218009478672987;
          result[4] += 0.9194312796208531;
          result[5] += 0.05213270142180095;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          result[0] += 0.05213764337851929;
          result[1] += 0.01981230448383733;
          result[2] += 0;
          result[3] += 0.04692387904066736;
          result[4] += 0.056308654848800835;
          result[5] += 0.8248175182481752;
        } else {
          result[0] += 0.014150943396226415;
          result[1] += 0.009433962264150943;
          result[2] += 0.03773584905660377;
          result[3] += 0.5283018867924528;
          result[4] += 0.0047169811320754715;
          result[5] += 0.4056603773584906;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
          result[0] += 0;
          result[1] += 0.4878048780487805;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4634146341463415;
          result[5] += 0.04878048780487805;
        } else {
          result[0] += 0;
          result[1] += 0.9950980392156863;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004901960784313725;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8084615384615386;
          result[1] += 0.02153846153846154;
          result[2] += 0.0015384615384615387;
          result[3] += 0.018461538461538467;
          result[4] += 0.1253846153846154;
          result[5] += 0.02461538461538462;
        } else {
          result[0] += 0.23573200992555832;
          result[1] += 0.07692307692307693;
          result[2] += 0.1761786600496278;
          result[3] += 0.2555831265508685;
          result[4] += 0.06699751861042183;
          result[5] += 0.18858560794044665;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0.022727272727272728;
          result[2] += 0;
          result[3] += 0.022727272727272728;
          result[4] += 0.2727272727272727;
          result[5] += 0.6818181818181818;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.13131313131313133;
          result[3] += 0.48484848484848486;
          result[4] += 0;
          result[5] += 0.3838383838383838;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
          result[0] += 0.04444444444444445;
          result[1] += 0.06666666666666668;
          result[2] += 0.22222222222222224;
          result[3] += 0.3777777777777778;
          result[4] += 0.04444444444444445;
          result[5] += 0.24444444444444446;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6974789915966386;
          result[3] += 0.25210084033613445;
          result[4] += 0;
          result[5] += 0.05042016806722689;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)110.5) ) ) {
          result[0] += 0.08333333333333333;
          result[1] += 0;
          result[2] += 0.5208333333333334;
          result[3] += 0.14583333333333334;
          result[4] += 0;
          result[5] += 0.25;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
          result[0] += 0.2708333333333333;
          result[1] += 0;
          result[2] += 0.5416666666666666;
          result[3] += 0.041666666666666664;
          result[4] += 0.020833333333333332;
          result[5] += 0.125;
        } else {
          result[0] += 0.005714285714285714;
          result[1] += 0;
          result[2] += 0.9417142857142857;
          result[3] += 0.052571428571428575;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)86) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)56) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.25;
          result[5] += 0.75;
        } else {
          result[0] += 0.0091324200913242;
          result[1] += 0.9726027397260274;
          result[2] += 0.00684931506849315;
          result[3] += 0.00684931506849315;
          result[4] += 0.0045662100456621;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          result[0] += 0.007751937984496125;
          result[1] += 0.023255813953488375;
          result[2] += 0.0038759689922480624;
          result[3] += 0.0038759689922480624;
          result[4] += 0.9186046511627908;
          result[5] += 0.04263565891472869;
        } else {
          result[0] += 0.06198034769463341;
          result[1] += 0.0030234315948601664;
          result[2] += 0.024943310657596373;
          result[3] += 0.1655328798185941;
          result[4] += 0.07785336356764928;
          result[5] += 0.6666666666666666;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
          result[0] += 0.7307692307692307;
          result[1] += 0.07461538461538461;
          result[2] += 0.008461538461538461;
          result[3] += 0.027692307692307693;
          result[4] += 0.12846153846153846;
          result[5] += 0.03;
        } else {
          result[0] += 0.21270718232044203;
          result[1] += 0.019337016574585638;
          result[2] += 0.24861878453038677;
          result[3] += 0.28729281767955805;
          result[4] += 0.03591160220994476;
          result[5] += 0.1961325966850829;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)68.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.039473684210526314;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.15789473684210525;
          result[4] += 0.05263157894736842;
          result[5] += 0.75;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1866666666666667;
          result[3] += 0.6666666666666667;
          result[4] += 0.013333333333333336;
          result[5] += 0.13333333333333336;
        } else {
          result[0] += 0.0975609756097561;
          result[1] += 0.024390243902439025;
          result[2] += 0.7804878048780488;
          result[3] += 0.0975609756097561;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)97) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6153846153846154;
          result[3] += 0.38461538461538464;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.8823529411764706;
          result[1] += 0;
          result[2] += 0.11764705882352941;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
          result[0] += 0.48;
          result[1] += 0;
          result[2] += 0.48;
          result[3] += 0.04;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.007990867579908675;
          result[1] += 0;
          result[2] += 0.932648401826484;
          result[3] += 0.05251141552511415;
          result[4] += 0;
          result[5] += 0.00684931506849315;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)69.5) ) ) {
          result[0] += 0;
          result[1] += 0.00966183574879227;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.966183574879227;
          result[5] += 0.024154589371980676;
        } else {
          result[0] += 0;
          result[1] += 0.5777777777777777;
          result[2] += 0;
          result[3] += 0.1111111111111111;
          result[4] += 0.06666666666666667;
          result[5] += 0.24444444444444444;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)86) ) ) {
          result[0] += 0.03663003663003663;
          result[1] += 0.0027472527472527475;
          result[2] += 0.008241758241758242;
          result[3] += 0.06318681318681318;
          result[4] += 0.08882783882783883;
          result[5] += 0.8003663003663004;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0234375;
          result[3] += 0.7109375;
          result[4] += 0;
          result[5] += 0.265625;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)69.5) ) ) {
          result[0] += 0.16055045871559634;
          result[1] += 0.17889908256880735;
          result[2] += 0;
          result[3] += 0.013761467889908258;
          result[4] += 0.5871559633027523;
          result[5] += 0.05963302752293578;
        } else {
          result[0] += 0.7070895522388059;
          result[1] += 0.015547263681592037;
          result[2] += 0.05161691542288556;
          result[3] += 0.0808457711442786;
          result[4] += 0.04601990049751243;
          result[5] += 0.09888059701492534;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
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
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9166666666666666;
          result[5] += 0.08333333333333333;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1864406779661017;
          result[3] += 0.11864406779661017;
          result[4] += 0.03389830508474576;
          result[5] += 0.6610169491525424;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
          result[0] += 0.02631578947368421;
          result[1] += 0.23684210526315788;
          result[2] += 0.02631578947368421;
          result[3] += 0.13157894736842105;
          result[4] += 0.05263157894736842;
          result[5] += 0.5263157894736842;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5149700598802396;
          result[3] += 0.4131736526946108;
          result[4] += 0;
          result[5] += 0.07185628742514971;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)72.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)109.5) ) ) {
          result[0] += 0.08695652173913043;
          result[1] += 0;
          result[2] += 0.8260869565217391;
          result[3] += 0.043478260869565216;
          result[4] += 0.043478260869565216;
          result[5] += 0;
        } else {
          result[0] += 0.875;
          result[1] += 0.125;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)105.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8389830508474576;
          result[3] += 0.1271186440677966;
          result[4] += 0;
          result[5] += 0.03389830508474576;
        } else {
          result[0] += 0.007342143906020558;
          result[1] += 0;
          result[2] += 0.9720998531571219;
          result[3] += 0.020558002936857563;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)85) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
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
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
          result[0] += 0.028925619834710745;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8966942148760331;
          result[5] += 0.0743801652892562;
        } else {
          result[0] += 0.0475396163469558;
          result[1] += 0.022518765638031693;
          result[2] += 0.0025020850708924102;
          result[3] += 0.15679733110925773;
          result[4] += 0.04837364470391994;
          result[5] += 0.7222685571309424;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0.7796610169491527;
          result[1] += 0.03905674281503317;
          result[2] += 0.003684598378776714;
          result[3] += 0.024318349299926312;
          result[4] += 0.13633014001473842;
          result[5] += 0.016949152542372885;
        } else {
          result[0] += 0.17478510028653296;
          result[1] += 0;
          result[2] += 0.15472779369627507;
          result[3] += 0.23209169054441262;
          result[4] += 0.08882521489971347;
          result[5] += 0.3495702005730659;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1111111111111111;
          result[3] += 0;
          result[4] += 0.18518518518518517;
          result[5] += 0.7037037037037037;
        } else {
          result[0] += 0;
          result[1] += 0.048;
          result[2] += 0.216;
          result[3] += 0.44;
          result[4] += 0.032;
          result[5] += 0.264;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
          result[0] += 0.39622641509433965;
          result[1] += 0.07547169811320754;
          result[2] += 0.3018867924528302;
          result[3] += 0.05660377358490566;
          result[4] += 0.018867924528301886;
          result[5] += 0.1509433962264151;
        } else {
          result[0] += 0.016877637130801686;
          result[1] += 0;
          result[2] += 0.7130801687763713;
          result[3] += 0.23628691983122363;
          result[4] += 0;
          result[5] += 0.03375527426160337;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)67.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
          result[0] += 0.0045662100456621;
          result[1] += 0;
          result[2] += 0.8858447488584474;
          result[3] += 0.0958904109589041;
          result[4] += 0;
          result[5] += 0.0136986301369863;
        } else {
          result[0] += 0.009074410163339383;
          result[1] += 0;
          result[2] += 0.9673321234119783;
          result[3] += 0.023593466424682397;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)67.5) ) ) {
          result[0] += 0.017391304347826087;
          result[1] += 0.005797101449275362;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9246376811594202;
          result[5] += 0.05217391304347826;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4117647058823529;
          result[3] += 0.058823529411764705;
          result[4] += 0.17647058823529413;
          result[5] += 0.35294117647058826;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)59.5) ) ) {
          result[0] += 0.8141592920353983;
          result[1] += 0.017699115044247787;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.08849557522123894;
          result[5] += 0.07964601769911504;
        } else {
          result[0] += 0.0019588638589618022;
          result[1] += 0.002938295788442703;
          result[2] += 0.0009794319294809011;
          result[3] += 0.07541625857002938;
          result[4] += 0.07737512242899118;
          result[5] += 0.8413320274240941;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)54.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9935622317596566;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.006437768240343348;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8201144726083403;
          result[1] += 0.051512673753066236;
          result[2] += 0.0008176614881439086;
          result[3] += 0.026982829108748982;
          result[4] += 0.07522485690923959;
          result[5] += 0.025347506132461166;
        } else {
          result[0] += 0.1436265709156194;
          result[1] += 0.005385996409335727;
          result[2] += 0.21543985637342908;
          result[3] += 0.3464991023339318;
          result[4] += 0.03770197486535009;
          result[5] += 0.2513464991023339;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0;
          result[1] += 0.07142857142857142;
          result[2] += 0;
          result[3] += 0.07142857142857142;
          result[4] += 0;
          result[5] += 0.8571428571428571;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4214285714285715;
          result[3] += 0.4571428571428572;
          result[4] += 0.014285714285714287;
          result[5] += 0.10714285714285715;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08333333333333333;
          result[3] += 0.08333333333333333;
          result[4] += 0;
          result[5] += 0.8333333333333334;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9318181818181819;
          result[3] += 0.02272727272727273;
          result[4] += 0;
          result[5] += 0.04545454545454546;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)94) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5882352941176471;
          result[3] += 0.14705882352941177;
          result[4] += 0.08823529411764706;
          result[5] += 0.17647058823529413;
        } else {
          result[0] += 0.5555555555555556;
          result[1] += 0.4444444444444444;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9304703476482618;
          result[3] += 0.05930470347648262;
          result[4] += 0;
          result[5] += 0.010224948875255624;
        } else {
          result[0] += 0.008849557522123894;
          result[1] += 0;
          result[2] += 0.9852507374631269;
          result[3] += 0.0058997050147492625;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.01904761904761905;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9619047619047619;
          result[5] += 0.01904761904761905;
        } else {
          result[0] += 0.08;
          result[1] += 0.013333333333333334;
          result[2] += 0;
          result[3] += 0.02666666666666667;
          result[4] += 0.6;
          result[5] += 0.28;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)67.5) ) ) {
          result[0] += 0.0037974683544303796;
          result[1] += 0.002531645569620253;
          result[2] += 0.0037974683544303796;
          result[3] += 0.056962025316455694;
          result[4] += 0.04177215189873418;
          result[5] += 0.8911392405063291;
        } else {
          result[0] += 0.118491921005386;
          result[1] += 0.00718132854578097;
          result[2] += 0.04847396768402154;
          result[3] += 0.35727109515260325;
          result[4] += 0.12028725314183124;
          result[5] += 0.348294434470377;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)69) ) ) {
          result[0] += 0;
          result[1] += 0.14285714285714285;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8571428571428571;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9952830188679245;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0047169811320754715;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)66.5) ) ) {
          result[0] += 0.07947019867549669;
          result[1] += 0.19205298013245034;
          result[2] += 0.026490066225165563;
          result[3] += 0.052980132450331126;
          result[4] += 0.6490066225165563;
          result[5] += 0;
        } else {
          result[0] += 0.7152317880794702;
          result[1] += 0.025827814569536423;
          result[2] += 0.05496688741721854;
          result[3] += 0.07218543046357616;
          result[4] += 0.052980132450331126;
          result[5] += 0.07880794701986756;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3125;
          result[3] += 0.484375;
          result[4] += 0;
          result[5] += 0.203125;
        } else {
          result[0] += 0;
          result[1] += 0.09803921568627451;
          result[2] += 0.2549019607843137;
          result[3] += 0.13725490196078433;
          result[4] += 0;
          result[5] += 0.5098039215686274;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0.6666666666666666;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9375;
          result[3] += 0.0625;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
          result[0] += 0.10526315789473684;
          result[1] += 0.15789473684210525;
          result[2] += 0.15789473684210525;
          result[3] += 0.21052631578947367;
          result[4] += 0;
          result[5] += 0.3684210526315789;
        } else {
          result[0] += 0.02734375;
          result[1] += 0;
          result[2] += 0.8125;
          result[3] += 0.1328125;
          result[4] += 0;
          result[5] += 0.02734375;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)98.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.46153846153846156;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.5384615384615384;
        } else {
          result[0] += 0.0015060240963855422;
          result[1] += 0;
          result[2] += 0.9713855421686747;
          result[3] += 0.02710843373493976;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
          result[0] += 0.01282051282051282;
          result[1] += 0.04700854700854701;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9358974358974359;
          result[5] += 0.004273504273504274;
        } else {
          result[0] += 0.42735042735042733;
          result[1] += 0.06837606837606838;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2222222222222222;
          result[5] += 0.28205128205128205;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0011890606420927466;
          result[3] += 0.054696789536266346;
          result[4] += 0.04280618311533888;
          result[5] += 0.901307966706302;
        } else {
          result[0] += 0.02601156069364162;
          result[1] += 0.02601156069364162;
          result[2] += 0.03468208092485549;
          result[3] += 0.44508670520231214;
          result[4] += 0.05202312138728324;
          result[5] += 0.4161849710982659;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
          result[0] += 0.014598540145985401;
          result[1] += 0.20437956204379562;
          result[2] += 0.014598540145985401;
          result[3] += 0.058394160583941604;
          result[4] += 0.656934306569343;
          result[5] += 0.051094890510948905;
        } else {
          result[0] += 0;
          result[1] += 0.9830866807610994;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.016913319238900635;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          result[0] += 0.8027048528241846;
          result[1] += 0.015910898965791568;
          result[2] += 0;
          result[3] += 0.03420843277645187;
          result[4] += 0.10898965791567224;
          result[5] += 0.03818615751789976;
        } else {
          result[0] += 0.21823204419889503;
          result[1] += 0;
          result[2] += 0.27348066298342544;
          result[3] += 0.2292817679558011;
          result[4] += 0.027624309392265192;
          result[5] += 0.2513812154696133;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)91) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05;
          result[3] += 0;
          result[4] += 0.05;
          result[5] += 0.9;
        } else {
          result[0] += 0;
          result[1] += 0.13793103448275862;
          result[2] += 0;
          result[3] += 0.5172413793103449;
          result[4] += 0.034482758620689655;
          result[5] += 0.3103448275862069;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)70.5) ) ) {
          result[0] += 0.4230769230769231;
          result[1] += 0.2692307692307692;
          result[2] += 0.07692307692307693;
          result[3] += 0;
          result[4] += 0.15384615384615385;
          result[5] += 0.07692307692307693;
        } else {
          result[0] += 0.047244094488188976;
          result[1] += 0.007874015748031496;
          result[2] += 0.49606299212598426;
          result[3] += 0.29133858267716534;
          result[4] += 0.03937007874015748;
          result[5] += 0.11811023622047244;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5789473684210527;
          result[3] += 0.39473684210526316;
          result[4] += 0;
          result[5] += 0.02631578947368421;
        } else {
          result[0] += 0.009259259259259259;
          result[1] += 0;
          result[2] += 0.8518518518518519;
          result[3] += 0.125;
          result[4] += 0;
          result[5] += 0.013888888888888888;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.625;
          result[3] += 0.375;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0016806722689075631;
          result[1] += 0;
          result[2] += 0.973109243697479;
          result[3] += 0.025210084033613446;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)95) ) ) {
          result[0] += 0.011111111111111112;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9407407407407408;
          result[5] += 0.04814814814814815;
        } else {
          result[0] += 0;
          result[1] += 0.5;
          result[2] += 0;
          result[3] += 0.25;
          result[4] += 0.25;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
          result[0] += 0.03665521191294387;
          result[1] += 0;
          result[2] += 0.001145475372279496;
          result[3] += 0.026345933562428408;
          result[4] += 0.07101947308132875;
          result[5] += 0.8648339060710195;
        } else {
          result[0] += 0.03937007874015748;
          result[1] += 0;
          result[2] += 0.0026246719160104987;
          result[3] += 0.4356955380577428;
          result[4] += 0.047244094488188976;
          result[5] += 0.47506561679790027;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7425018288222385;
          result[1] += 0.06071689831748354;
          result[2] += 0.001463057790782736;
          result[3] += 0.024140453547915143;
          result[4] += 0.14118507681053402;
          result[5] += 0.029992684711046085;
        } else {
          result[0] += 0.15365239294710328;
          result[1] += 0.0327455919395466;
          result[2] += 0.27455919395465994;
          result[3] += 0.2871536523929471;
          result[4] += 0.06801007556675064;
          result[5] += 0.18387909319899245;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)68) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.5;
          result[1] += 0.5;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08163265306122448;
          result[3] += 0.5510204081632653;
          result[4] += 0.04081632653061224;
          result[5] += 0.32653061224489793;
        } else {
          result[0] += 0.11111111111111112;
          result[1] += 0;
          result[2] += 0.6666666666666667;
          result[3] += 0.22222222222222224;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)72.5) ) ) {
          result[0] += 0.38461538461538464;
          result[1] += 0.2692307692307692;
          result[2] += 0.11538461538461539;
          result[3] += 0.07692307692307693;
          result[4] += 0.038461538461538464;
          result[5] += 0.11538461538461539;
        } else {
          result[0] += 0.025806451612903226;
          result[1] += 0;
          result[2] += 0.7483870967741936;
          result[3] += 0.16129032258064516;
          result[4] += 0;
          result[5] += 0.06451612903225806;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8755020080321285;
          result[3] += 0.11244979919678715;
          result[4] += 0;
          result[5] += 0.012048192771084338;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0016129032258064516;
          result[1] += 0;
          result[2] += 0.9838709677419355;
          result[3] += 0.014516129032258065;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)94) ) ) {
          result[0] += 0.00904977375565611;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.004524886877828055;
          result[4] += 0.9366515837104072;
          result[5] += 0.049773755656108594;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
          result[0] += 0.04696132596685083;
          result[1] += 0.007366482504604052;
          result[2] += 0;
          result[3] += 0.056169429097605895;
          result[4] += 0.058931860036832415;
          result[5] += 0.8305709023941068;
        } else {
          result[0] += 0;
          result[1] += 0.004608294930875576;
          result[2] += 0.02304147465437788;
          result[3] += 0.6543778801843319;
          result[4] += 0.009216589861751152;
          result[5] += 0.3087557603686636;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85) ) ) {
          result[0] += 0;
          result[1] += 0.35;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6;
          result[5] += 0.05;
        } else {
          result[0] += 0;
          result[1] += 0.9954128440366973;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0045871559633027525;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
          result[0] += 0.11403508771929824;
          result[1] += 0.05263157894736842;
          result[2] += 0.021929824561403508;
          result[3] += 0.19736842105263158;
          result[4] += 0.33771929824561403;
          result[5] += 0.27631578947368424;
        } else {
          result[0] += 0.7538569424964937;
          result[1] += 0.02244039270687237;
          result[2] += 0.037868162692847124;
          result[3] += 0.04908835904628331;
          result[4] += 0.10098176718092566;
          result[5] += 0.03576437587657784;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)68.5) ) ) {
          result[0] += 0;
          result[1] += 0.3333333333333333;
          result[2] += 0.20833333333333334;
          result[3] += 0.08333333333333333;
          result[4] += 0.375;
          result[5] += 0;
        } else {
          result[0] += 0.047619047619047616;
          result[1] += 0;
          result[2] += 0.015873015873015872;
          result[3] += 0.2698412698412698;
          result[4] += 0.047619047619047616;
          result[5] += 0.6190476190476191;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.11267605633802819;
          result[3] += 0.6901408450704226;
          result[4] += 0;
          result[5] += 0.1971830985915493;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6621621621621622;
          result[3] += 0.25675675675675674;
          result[4] += 0;
          result[5] += 0.08108108108108109;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)102.5) ) ) {
          result[0] += 0.1724137931034483;
          result[1] += 0.13793103448275862;
          result[2] += 0.6206896551724138;
          result[3] += 0;
          result[4] += 0.034482758620689655;
          result[5] += 0.034482758620689655;
        } else {
          result[0] += 0.7272727272727273;
          result[1] += 0;
          result[2] += 0.2727272727272727;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
          result[0] += 0.0064308681672025705;
          result[1] += 0;
          result[2] += 0.8167202572347265;
          result[3] += 0.16077170418006428;
          result[4] += 0;
          result[5] += 0.016077170418006426;
        } else {
          result[0] += 0.0051635111876075735;
          result[1] += 0;
          result[2] += 0.9759036144578314;
          result[3] += 0.01549053356282272;
          result[4] += 0;
          result[5] += 0.0034423407917383822;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)68.5) ) ) {
          result[0] += 0.01968503937007874;
          result[1] += 0;
          result[2] += 0.007874015748031496;
          result[3] += 0.011811023622047244;
          result[4] += 0.8031496062992126;
          result[5] += 0.15748031496062992;
        } else {
          result[0] += 0.5390946502057613;
          result[1] += 0.13168724279835392;
          result[2] += 0;
          result[3] += 0.06584362139917696;
          result[4] += 0.26337448559670784;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          result[0] += 0.013360739979445015;
          result[1] += 0.006166495375128468;
          result[2] += 0;
          result[3] += 0.05447070914696814;
          result[4] += 0.09969167523124357;
          result[5] += 0.8263103802672148;
        } else {
          result[0] += 0.04611650485436893;
          result[1] += 0;
          result[2] += 0.024271844660194174;
          result[3] += 0.5606796116504854;
          result[4] += 0.019417475728155338;
          result[5] += 0.34951456310679613;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)54) ) ) {
          result[0] += 0;
          result[1] += 0.9975550122249389;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0024449877750611247;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.42857142857142855;
          result[2] += 0;
          result[3] += 0.125;
          result[4] += 0.23214285714285715;
          result[5] += 0.21428571428571427;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)75.5) ) ) {
          result[0] += 0.8367346938775511;
          result[1] += 0.030612244897959183;
          result[2] += 0.0037105751391465678;
          result[3] += 0.016697588126159554;
          result[4] += 0.10296846011131726;
          result[5] += 0.00927643784786642;
        } else {
          result[0] += 0.16433566433566432;
          result[1] += 0.03146853146853147;
          result[2] += 0.3951048951048951;
          result[3] += 0.11538461538461539;
          result[4] += 0.038461538461538464;
          result[5] += 0.25524475524475526;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0;
          result[4] += 0.5;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.034482758620689655;
          result[5] += 0.9655172413793104;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)39.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.011904761904761904;
          result[1] += 0.005952380952380952;
          result[2] += 0.43452380952380953;
          result[3] += 0.4166666666666667;
          result[4] += 0.041666666666666664;
          result[5] += 0.08928571428571429;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6111111111111112;
          result[3] += 0.35185185185185186;
          result[4] += 0;
          result[5] += 0.037037037037037035;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8647058823529412;
          result[3] += 0.12941176470588237;
          result[4] += 0;
          result[5] += 0.0058823529411764705;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)90.5) ) ) {
          result[0] += 0.011111111111111112;
          result[1] += 0;
          result[2] += 0.9377777777777778;
          result[3] += 0.051111111111111114;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0044444444444444444;
          result[1] += 0;
          result[2] += 0.9955555555555555;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)81.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)44) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.16666666666666666;
          result[4] += 0;
          result[5] += 0.8333333333333334;
        } else {
          result[0] += 0.013215859030837005;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.030837004405286344;
          result[4] += 0.933920704845815;
          result[5] += 0.022026431718061675;
        }
      } else {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
          result[0] += 0.734375;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.015625;
          result[4] += 0.15625;
          result[5] += 0.09375;
        } else {
          result[0] += 0.005341880341880342;
          result[1] += 0.005341880341880342;
          result[2] += 0;
          result[3] += 0.06196581196581197;
          result[4] += 0.053418803418803416;
          result[5] += 0.8739316239316239;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)86) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.017699115044247787;
          result[3] += 0.36283185840707965;
          result[4] += 0.05309734513274336;
          result[5] += 0.5663716814159292;
        } else {
          result[0] += 0;
          result[1] += 0.007936507936507936;
          result[2] += 0;
          result[3] += 0.7619047619047619;
          result[4] += 0.023809523809523808;
          result[5] += 0.20634920634920634;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0.2857142857142857;
          result[2] += 0;
          result[3] += 0.04285714285714286;
          result[4] += 0.6714285714285714;
          result[5] += 0;
        } else {
          result[0] += 0.010141987829614604;
          result[1] += 0.9817444219066938;
          result[2] += 0;
          result[3] += 0.002028397565922921;
          result[4] += 0.006085192697768763;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          result[0] += 0.8477157360406091;
          result[1] += 0.025380710659898477;
          result[2] += 0.005076142131979695;
          result[3] += 0.021150592216582064;
          result[4] += 0.0922165820642978;
          result[5] += 0.008460236886632826;
        } else {
          result[0] += 0.26436781609195403;
          result[1] += 0.017241379310344827;
          result[2] += 0.21551724137931033;
          result[3] += 0.22988505747126436;
          result[4] += 0.08045977011494253;
          result[5] += 0.1925287356321839;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0.01875;
          result[2] += 0.19375;
          result[3] += 0.5;
          result[4] += 0.06875;
          result[5] += 0.21875;
        } else {
          result[0] += 0.02857142857142857;
          result[1] += 0;
          result[2] += 0.6952380952380952;
          result[3] += 0.20952380952380953;
          result[4] += 0.05714285714285714;
          result[5] += 0.009523809523809525;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1724137931034483;
          result[3] += 0.5172413793103449;
          result[4] += 0;
          result[5] += 0.3103448275862069;
        } else {
          result[0] += 0.014675052410901468;
          result[1] += 0.0010482180293501049;
          result[2] += 0.9025157232704403;
          result[3] += 0.057651991614255764;
          result[4] += 0.005241090146750524;
          result[5] += 0.018867924528301886;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)47) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)96) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.0021008403361344537;
          result[1] += 0.9978991596638656;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
          result[0] += 0.03672316384180792;
          result[1] += 0.09887005649717516;
          result[2] += 0;
          result[3] += 0.008474576271186442;
          result[4] += 0.7740112994350283;
          result[5] += 0.08192090395480227;
        } else {
          result[0] += 0.8038379530916843;
          result[1] += 0.006396588486140723;
          result[2] += 0.012793176972281446;
          result[3] += 0.014925373134328354;
          result[4] += 0.11513859275053302;
          result[5] += 0.04690831556503197;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.004120879120879121;
          result[3] += 0.020604395604395604;
          result[4] += 0.024725274725274724;
          result[5] += 0.9505494505494505;
        } else {
          result[0] += 0.1139122315592904;
          result[1] += 0.052287581699346414;
          result[2] += 0.05788982259570496;
          result[3] += 0.29691876750700286;
          result[4] += 0.1316526610644258;
          result[5] += 0.34733893557422973;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)81) ) ) {
          result[0] += 0.2857142857142857;
          result[1] += 0;
          result[2] += 0.5714285714285714;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.14285714285714285;
        } else {
          result[0] += 0.9914821124361158;
          result[1] += 0;
          result[2] += 0.0017035775127768314;
          result[3] += 0.0017035775127768314;
          result[4] += 0.005110732538330494;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)108.5) ) ) {
          result[0] += 0.07692307692307693;
          result[1] += 0;
          result[2] += 0.8076923076923077;
          result[3] += 0.11538461538461539;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.8333333333333334;
          result[1] += 0;
          result[2] += 0.16666666666666666;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)74.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2222222222222222;
          result[3] += 0.6666666666666666;
          result[4] += 0;
          result[5] += 0.1111111111111111;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7461538461538462;
          result[3] += 0.18846153846153846;
          result[4] += 0;
          result[5] += 0.06538461538461539;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)123.5) ) ) {
          result[0] += 0.011936339522546418;
          result[1] += 0;
          result[2] += 0.9482758620689655;
          result[3] += 0.03713527851458886;
          result[4] += 0;
          result[5] += 0.002652519893899204;
        } else {
          result[0] += 0.3611111111111111;
          result[1] += 0;
          result[2] += 0.6388888888888888;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)92) ) ) {
          result[0] += 0;
          result[1] += 0.0044444444444444444;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9466666666666667;
          result[5] += 0.04888888888888889;
        } else {
          result[0] += 0;
          result[1] += 0.9;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.1;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.024853801169590642;
          result[4] += 0.02046783625730994;
          result[5] += 0.9546783625730995;
        } else {
          result[0] += 0.09913043478260869;
          result[1] += 0.036521739130434785;
          result[2] += 0.019130434782608695;
          result[3] += 0.3095652173913043;
          result[4] += 0.07304347826086957;
          result[5] += 0.46260869565217394;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)49.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)81) ) ) {
          result[0] += 0.6896551724137931;
          result[1] += 0.2413793103448276;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.06896551724137931;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9973890339425587;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0026109660574412533;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)68.5) ) ) {
          result[0] += 0.05371900826446281;
          result[1] += 0.3760330578512397;
          result[2] += 0;
          result[3] += 0.004132231404958678;
          result[4] += 0.5454545454545454;
          result[5] += 0.02066115702479339;
        } else {
          result[0] += 0.7077344284736482;
          result[1] += 0.009582477754962354;
          result[2] += 0.045174537987679675;
          result[3] += 0.08213552361396304;
          result[4] += 0.06913073237508556;
          result[5] += 0.08624229979466119;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)88) ) ) {
          result[0] += 0.029411764705882353;
          result[1] += 0.029411764705882353;
          result[2] += 0.058823529411764705;
          result[3] += 0.029411764705882353;
          result[4] += 0.14705882352941177;
          result[5] += 0.7058823529411765;
        } else {
          result[0] += 0.05405405405405406;
          result[1] += 0.08108108108108109;
          result[2] += 0.02702702702702703;
          result[3] += 0.47297297297297297;
          result[4] += 0.14864864864864866;
          result[5] += 0.21621621621621623;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)88) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.08695652173913043;
          result[1] += 0;
          result[2] += 0.8260869565217391;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.08695652173913043;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          result[0] += 0.010416666666666666;
          result[1] += 0.052083333333333336;
          result[2] += 0.3541666666666667;
          result[3] += 0.4895833333333333;
          result[4] += 0;
          result[5] += 0.09375;
        } else {
          result[0] += 0.0594059405940594;
          result[1] += 0;
          result[2] += 0.801980198019802;
          result[3] += 0.10891089108910891;
          result[4] += 0;
          result[5] += 0.0297029702970297;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
          result[0] += 0.38095238095238093;
          result[1] += 0;
          result[2] += 0.6190476190476191;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.005924170616113744;
          result[1] += 0;
          result[2] += 0.9277251184834123;
          result[3] += 0.06279620853080568;
          result[4] += 0;
          result[5] += 0.0035545023696682463;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)71.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
          result[0] += 0.00980392156862745;
          result[1] += 0.004901960784313725;
          result[2] += 0.00980392156862745;
          result[3] += 0;
          result[4] += 0.9607843137254902;
          result[5] += 0.014705882352941176;
        } else {
          result[0] += 0;
          result[1] += 0.2391304347826087;
          result[2] += 0.10869565217391304;
          result[3] += 0.021739130434782608;
          result[4] += 0.34782608695652173;
          result[5] += 0.2826086956521739;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
          result[0] += 0.015081206496519721;
          result[1] += 0.001160092807424594;
          result[2] += 0;
          result[3] += 0.04640371229698376;
          result[4] += 0.048723897911832945;
          result[5] += 0.888631090487239;
        } else {
          result[0] += 0.03597122302158273;
          result[1] += 0.10431654676258993;
          result[2] += 0.09712230215827339;
          result[3] += 0.4064748201438849;
          result[4] += 0.01079136690647482;
          result[5] += 0.34532374100719426;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)91) ) ) {
          result[0] += 0;
          result[1] += 0.2727272727272727;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7272727272727273;
          result[5] += 0;
        } else {
          result[0] += 0.002079002079002079;
          result[1] += 0.9958419958419958;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002079002079002079;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7569099929128278;
          result[1] += 0.029057406094968107;
          result[2] += 0.011339475549255847;
          result[3] += 0.041105598866052445;
          result[4] += 0.13678242381289865;
          result[5] += 0.024805102763997167;
        } else {
          result[0] += 0.1607843137254902;
          result[1] += 0.01764705882352941;
          result[2] += 0.19019607843137254;
          result[3] += 0.25098039215686274;
          result[4] += 0.08431372549019608;
          result[5] += 0.296078431372549;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0.6666666666666666;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3333333333333333;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.047619047619047616;
          result[3] += 0.21428571428571427;
          result[4] += 0.023809523809523808;
          result[5] += 0.7142857142857143;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)93) ) ) {
          result[0] += 0.007936507936507936;
          result[1] += 0;
          result[2] += 0.5634920634920635;
          result[3] += 0.30158730158730157;
          result[4] += 0;
          result[5] += 0.12698412698412698;
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
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7168141592920354;
          result[3] += 0.23893805309734514;
          result[4] += 0;
          result[5] += 0.04424778761061947;
        } else {
          result[0] += 0.005128205128205129;
          result[1] += 0;
          result[2] += 0.9128205128205129;
          result[3] += 0.0717948717948718;
          result[4] += 0;
          result[5] += 0.010256410256410258;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9279279279279279;
          result[3] += 0.07207207207207207;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9926650366748166;
          result[3] += 0.007334963325183374;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)94) ) ) {
          result[0] += 0.011152416356877325;
          result[1] += 0.003717472118959108;
          result[2] += 0;
          result[3] += 0.007434944237918216;
          result[4] += 0.9182156133828997;
          result[5] += 0.05947955390334573;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0.002770083102493075;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.018005540166204988;
          result[4] += 0.04155124653739612;
          result[5] += 0.9376731301939059;
        } else {
          result[0] += 0.10927835051546392;
          result[1] += 0.024742268041237112;
          result[2] += 0.002061855670103093;
          result[3] += 0.3422680412371134;
          result[4] += 0.06391752577319587;
          result[5] += 0.4577319587628866;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
          result[0] += 0.08745247148288973;
          result[1] += 0.26996197718631176;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.623574144486692;
          result[5] += 0.019011406844106463;
        } else {
          result[0] += 0.7137883008356546;
          result[1] += 0.00766016713091922;
          result[2] += 0.04805013927576602;
          result[3] += 0.08286908077994429;
          result[4] += 0.06545961002785515;
          result[5] += 0.08217270194986072;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5;
          result[5] += 0.5;
        } else {
          result[0] += 0.0044444444444444444;
          result[1] += 0.9911111111111112;
          result[2] += 0;
          result[3] += 0.0044444444444444444;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)102.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)123) ) ) {
          result[0] += 0.008196721311475412;
          result[1] += 0.008196721311475412;
          result[2] += 0.09836065573770493;
          result[3] += 0.4508196721311476;
          result[4] += 0.05737704918032788;
          result[5] += 0.3770491803278689;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
          result[0] += 0.043478260869565216;
          result[1] += 0.13043478260869565;
          result[2] += 0.21739130434782608;
          result[3] += 0.08695652173913043;
          result[4] += 0.13043478260869565;
          result[5] += 0.391304347826087;
        } else {
          result[0] += 0.2307692307692308;
          result[1] += 0;
          result[2] += 0.7307692307692308;
          result[3] += 0;
          result[4] += 0.03846153846153847;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1875;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0.3125;
        } else {
          result[0] += 0.016304347826086956;
          result[1] += 0;
          result[2] += 0.7282608695652174;
          result[3] += 0.20652173913043478;
          result[4] += 0;
          result[5] += 0.04891304347826087;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
          result[0] += 0.05818181818181818;
          result[1] += 0;
          result[2] += 0.8436363636363636;
          result[3] += 0.09818181818181818;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.007393715341959335;
          result[1] += 0;
          result[2] += 0.9704251386321627;
          result[3] += 0.022181146025878007;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
          result[0] += 0.009389671361502348;
          result[1] += 0.014084507042253521;
          result[2] += 0;
          result[3] += 0.009389671361502348;
          result[4] += 0.9248826291079812;
          result[5] += 0.04225352112676056;
        } else {
          result[0] += 0.42696629213483145;
          result[1] += 0.02247191011235955;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2247191011235955;
          result[5] += 0.3258426966292135;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0.0012165450121654502;
          result[1] += 0.009732360097323601;
          result[2] += 0;
          result[3] += 0.0364963503649635;
          result[4] += 0.0705596107055961;
          result[5] += 0.8819951338199513;
        } else {
          result[0] += 0;
          result[1] += 0.013392857142857142;
          result[2] += 0;
          result[3] += 0.44642857142857145;
          result[4] += 0.03571428571428571;
          result[5] += 0.5044642857142857;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)96.5) ) ) {
          result[0] += 0.019230769230769235;
          result[1] += 0.33333333333333337;
          result[2] += 0;
          result[3] += 0.019230769230769235;
          result[4] += 0.6025641025641026;
          result[5] += 0.025641025641025644;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          result[0] += 0.8681229773462783;
          result[1] += 0.025889967637540454;
          result[2] += 0;
          result[3] += 0.021844660194174758;
          result[4] += 0.07362459546925566;
          result[5] += 0.010517799352750809;
        } else {
          result[0] += 0.20526315789473684;
          result[1] += 0.05;
          result[2] += 0.15526315789473685;
          result[3] += 0.23684210526315788;
          result[4] += 0.0868421052631579;
          result[5] += 0.2657894736842105;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)94.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.041666666666666664;
          result[4] += 0;
          result[5] += 0.9583333333333334;
        } else {
          result[0] += 0.009174311926605505;
          result[1] += 0.01834862385321101;
          result[2] += 0.12844036697247707;
          result[3] += 0.5137614678899083;
          result[4] += 0;
          result[5] += 0.3302752293577982;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0.5454545454545454;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2727272727272727;
          result[5] += 0.18181818181818182;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7906976744186046;
          result[3] += 0.09302325581395349;
          result[4] += 0;
          result[5] += 0.11627906976744186;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.375;
          result[3] += 0.55;
          result[4] += 0;
          result[5] += 0.075;
        } else {
          result[0] += 0.03521126760563381;
          result[1] += 0;
          result[2] += 0.7640845070422536;
          result[3] += 0.16197183098591553;
          result[4] += 0.003521126760563381;
          result[5] += 0.03521126760563381;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)62) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.00903225806451613;
          result[1] += 0;
          result[2] += 0.9432258064516129;
          result[3] += 0.04645161290322581;
          result[4] += 0;
          result[5] += 0.0012903225806451613;
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)34) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)67.5) ) ) {
          result[0] += 0.01893939393939394;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9507575757575758;
          result[5] += 0.030303030303030304;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2857142857142857;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.7142857142857143;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2702702702702703;
          result[5] += 0.7297297297297297;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.01592356687898089;
          result[4] += 0.007961783439490446;
          result[5] += 0.9761146496815286;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)84.5) ) ) {
          result[0] += 0.09619686800894854;
          result[1] += 0.03355704697986577;
          result[2] += 0.0022371364653243847;
          result[3] += 0.14093959731543623;
          result[4] += 0.14093959731543623;
          result[5] += 0.5861297539149888;
        } else {
          result[0] += 0.004807692307692308;
          result[1] += 0.004807692307692308;
          result[2] += 0.08653846153846154;
          result[3] += 0.625;
          result[4] += 0.014423076923076924;
          result[5] += 0.2644230769230769;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
          result[0] += 0.02631578947368421;
          result[1] += 0.14912280701754385;
          result[2] += 0.03508771929824561;
          result[3] += 0.043859649122807015;
          result[4] += 0.7368421052631579;
          result[5] += 0.008771929824561403;
        } else {
          result[0] += 0;
          result[1] += 0.9892008639308856;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.01079913606911447;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
          result[0] += 0.24401913875598086;
          result[1] += 0.05741626794258373;
          result[2] += 0.03349282296650718;
          result[3] += 0.18660287081339713;
          result[4] += 0.14354066985645933;
          result[5] += 0.3349282296650718;
        } else {
          result[0] += 0.8226837060702876;
          result[1] += 0.02236421725239617;
          result[2] += 0.015175718849840257;
          result[3] += 0.05191693290734825;
          result[4] += 0.059904153354632596;
          result[5] += 0.02795527156549521;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
          result[0] += 0.019801980198019802;
          result[1] += 0.10891089108910891;
          result[2] += 0.039603960396039604;
          result[3] += 0.2376237623762376;
          result[4] += 0.019801980198019802;
          result[5] += 0.5742574257425742;
        } else {
          result[0] += 0.3867924528301887;
          result[1] += 0;
          result[2] += 0.4339622641509434;
          result[3] += 0.14150943396226415;
          result[4] += 0;
          result[5] += 0.03773584905660377;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
          result[0] += 0.006711409395973154;
          result[1] += 0;
          result[2] += 0.7281879194630873;
          result[3] += 0.20469798657718122;
          result[4] += 0.006711409395973154;
          result[5] += 0.053691275167785234;
        } else {
          result[0] += 0.010309278350515465;
          result[1] += 0;
          result[2] += 0.9440353460972019;
          result[3] += 0.04418262150220914;
          result[4] += 0;
          result[5] += 0.0014727540500736379;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
          result[0] += 0.004219409282700422;
          result[1] += 0.05485232067510549;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9156118143459916;
          result[5] += 0.02531645569620253;
        } else {
          result[0] += 0.50920245398773;
          result[1] += 0;
          result[2] += 0.018404907975460124;
          result[3] += 0.024539877300613498;
          result[4] += 0.294478527607362;
          result[5] += 0.15337423312883436;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.004103967168262654;
          result[3] += 0.04103967168262654;
          result[4] += 0.03146374829001368;
          result[5] += 0.9233926128590971;
        } else {
          result[0] += 0.009259259259259259;
          result[1] += 0.018518518518518517;
          result[2] += 0.046296296296296294;
          result[3] += 0.4166666666666667;
          result[4] += 0.10555555555555556;
          result[5] += 0.40370370370370373;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)95) ) ) {
          result[0] += 0;
          result[1] += 0.3333333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6666666666666666;
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
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)75.5) ) ) {
          result[0] += 0.2549019607843137;
          result[1] += 0.11764705882352941;
          result[2] += 0.01568627450980392;
          result[3] += 0.24705882352941178;
          result[4] += 0.09019607843137255;
          result[5] += 0.27450980392156865;
        } else {
          result[0] += 0.7595712098009189;
          result[1] += 0.009188361408882083;
          result[2] += 0.08192955589586524;
          result[3] += 0.04670750382848392;
          result[4] += 0.08346094946401225;
          result[5] += 0.01914241960183767;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)50) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
          result[0] += 0.058823529411764705;
          result[1] += 0.058823529411764705;
          result[2] += 0;
          result[3] += 0.058823529411764705;
          result[4] += 0.058823529411764705;
          result[5] += 0.7647058823529411;
        } else {
          result[0] += 0.017391304347826087;
          result[1] += 0;
          result[2] += 0.3130434782608696;
          result[3] += 0.41739130434782606;
          result[4] += 0.034782608695652174;
          result[5] += 0.21739130434782608;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8873239436619719;
          result[3] += 0.028169014084507043;
          result[4] += 0;
          result[5] += 0.08450704225352113;
        } else {
          result[0] += 0.013986013986013986;
          result[1] += 0;
          result[2] += 0.7132867132867133;
          result[3] += 0.2727272727272727;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)70.5) ) ) {
          result[0] += 0.8181818181818182;
          result[1] += 0;
          result[2] += 0.13636363636363635;
          result[3] += 0.045454545454545456;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.004451038575667656;
          result[1] += 0;
          result[2] += 0.9688427299703264;
          result[3] += 0.02373887240356083;
          result[4] += 0;
          result[5] += 0.002967359050445104;
        }
      }
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)94.5) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          result[0] += 0.034482758620689655;
          result[1] += 0.058355437665782495;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8859416445623343;
          result[5] += 0.021220159151193633;
        } else {
          result[0] += 0.8759493670886076;
          result[1] += 0.005063291139240506;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.06329113924050633;
          result[5] += 0.05569620253164557;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)57) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.05263157894736842;
          result[1] += 0.3157894736842105;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.631578947368421;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)67.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.017432646592709985;
          result[4] += 0.022187004754358162;
          result[5] += 0.9603803486529319;
        } else {
          result[0] += 0.005128205128205128;
          result[1] += 0.005128205128205128;
          result[2] += 0.020512820512820513;
          result[3] += 0.20512820512820512;
          result[4] += 0.07692307692307693;
          result[5] += 0.6871794871794872;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
          result[0] += 0.030063291139240507;
          result[1] += 0.02531645569620253;
          result[2] += 0.0189873417721519;
          result[3] += 0.3860759493670886;
          result[4] += 0.11867088607594936;
          result[5] += 0.4208860759493671;
        } else {
          result[0] += 0.45454545454545453;
          result[1] += 0.09090909090909091;
          result[2] += 0.11742424242424243;
          result[3] += 0.07196969696969698;
          result[4] += 0.21212121212121213;
          result[5] += 0.05303030303030303;
        }
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)93) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)90.5) ) ) {
          result[0] += 0.038461538461538464;
          result[1] += 0;
          result[2] += 0.23076923076923078;
          result[3] += 0.038461538461538464;
          result[4] += 0.15384615384615385;
          result[5] += 0.5384615384615384;
        } else {
          result[0] += 0.9469387755102041;
          result[1] += 0;
          result[2] += 0.00816326530612245;
          result[3] += 0.0163265306122449;
          result[4] += 0.02857142857142857;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          result[0] += 0.02564102564102564;
          result[1] += 0.020512820512820513;
          result[2] += 0.3333333333333333;
          result[3] += 0.4;
          result[4] += 0.035897435897435895;
          result[5] += 0.18461538461538463;
        } else {
          result[0] += 0.014563106796116505;
          result[1] += 0;
          result[2] += 0.8859223300970874;
          result[3] += 0.08859223300970874;
          result[4] += 0;
          result[5] += 0.010922330097087379;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)83) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)80) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.9813333333333334;
          result[1] += 0.005333333333333334;
          result[2] += 0.005333333333333334;
          result[3] += 0;
          result[4] += 0.008000000000000002;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
          result[0] += 0.5454545454545454;
          result[1] += 0;
          result[2] += 0.45454545454545453;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.013245033112582783;
          result[1] += 0;
          result[2] += 0.9735099337748345;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.013245033112582783;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
          result[0] += 0.01834862385321101;
          result[1] += 0.03211009174311927;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.944954128440367;
          result[5] += 0.0045871559633027525;
        } else {
          result[0] += 0.28205128205128205;
          result[1] += 0.10256410256410256;
          result[2] += 0;
          result[3] += 0.02564102564102564;
          result[4] += 0.21367521367521367;
          result[5] += 0.37606837606837606;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05304010349288486;
          result[4] += 0.06727037516170763;
          result[5] += 0.8796895213454075;
        } else {
          result[0] += 0.002976190476190476;
          result[1] += 0.008928571428571428;
          result[2] += 0.01488095238095238;
          result[3] += 0.4880952380952381;
          result[4] += 0.0625;
          result[5] += 0.4226190476190476;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)89.5) ) ) {
          result[0] += 0.06521739130434782;
          result[1] += 0.09782608695652174;
          result[2] += 0;
          result[3] += 0.10869565217391304;
          result[4] += 0.717391304347826;
          result[5] += 0.010869565217391304;
        } else {
          result[0] += 0.008438818565400843;
          result[1] += 0.9683544303797469;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.023206751054852322;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.8545310015898252;
          result[1] += 0.03259141494435613;
          result[2] += 0.0007949125596184421;
          result[3] += 0.010333863275039747;
          result[4] += 0.08187599364069954;
          result[5] += 0.019872813990461053;
        } else {
          result[0] += 0.14285714285714285;
          result[1] += 0.018367346938775512;
          result[2] += 0.2653061224489796;
          result[3] += 0.22857142857142856;
          result[4] += 0.04897959183673469;
          result[5] += 0.29591836734693877;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
          result[0] += 0.043478260869565216;
          result[1] += 0.021739130434782608;
          result[2] += 0.10869565217391304;
          result[3] += 0.021739130434782608;
          result[4] += 0.17391304347826086;
          result[5] += 0.6304347826086957;
        } else {
          result[0] += 0.16666666666666666;
          result[1] += 0.7777777777777778;
          result[2] += 0;
          result[3] += 0.05555555555555555;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)86) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3046875;
          result[3] += 0.4921875;
          result[4] += 0;
          result[5] += 0.203125;
        } else {
          result[0] += 0.04;
          result[1] += 0;
          result[2] += 0.96;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)69.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6;
          result[3] += 0.2923076923076923;
          result[4] += 0;
          result[5] += 0.1076923076923077;
        } else {
          result[0] += 0.007702182284980745;
          result[1] += 0;
          result[2] += 0.9319640564826701;
          result[3] += 0.06033376123234917;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)42.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.14285714285714285;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8571428571428571;
          result[5] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
          result[0] += 0.29540481400437635;
          result[1] += 0.002188183807439825;
          result[2] += 0;
          result[3] += 0.0087527352297593;
          result[4] += 0.6345733041575492;
          result[5] += 0.05908096280087528;
        } else {
          result[0] += 0.015086206896551725;
          result[1] += 0.009339080459770116;
          result[2] += 0.02514367816091954;
          result[3] += 0.1997126436781609;
          result[4] += 0.08045977011494253;
          result[5] += 0.6702586206896551;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
          result[0] += 0.4500723589001448;
          result[1] += 0.09696092619392187;
          result[2] += 0.05643994211287989;
          result[3] += 0.09696092619392187;
          result[4] += 0.14471780028943562;
          result[5] += 0.15484804630969612;
        } else {
          result[0] += 0.9056356487549148;
          result[1] += 0.014416775884665793;
          result[2] += 0.023591087811271297;
          result[3] += 0.00655307994757536;
          result[4] += 0.047182175622542594;
          result[5] += 0.002621231979030144;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)77) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)66) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.37037037037037035;
          result[3] += 0;
          result[4] += 0.037037037037037035;
          result[5] += 0.5925925925925926;
        } else {
          result[0] += 0.02127659574468085;
          result[1] += 0;
          result[2] += 0.6063829787234043;
          result[3] += 0.3404255319148936;
          result[4] += 0;
          result[5] += 0.031914893617021274;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09090909090909091;
          result[3] += 0.18181818181818182;
          result[4] += 0;
          result[5] += 0.7272727272727273;
        } else {
          result[0] += 0.14516129032258068;
          result[1] += 0;
          result[2] += 0.7580645161290324;
          result[3] += 0.048387096774193554;
          result[4] += 0;
          result[5] += 0.048387096774193554;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8327272727272728;
          result[3] += 0.15272727272727274;
          result[4] += 0;
          result[5] += 0.014545454545454545;
        } else {
          result[0] += 0.00505902192242833;
          result[1] += 0;
          result[2] += 0.954468802698145;
          result[3] += 0.04047217537942664;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)73) ) ) {
          result[0] += 0;
          result[1] += 0.018604651162790697;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9720930232558139;
          result[5] += 0.009302325581395349;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
          result[0] += 0.02902055622732769;
          result[1] += 0.0036275695284159614;
          result[2] += 0;
          result[3] += 0.03990326481257558;
          result[4] += 0.060459492140266025;
          result[5] += 0.8669891172914147;
        } else {
          result[0] += 0.08492569002123142;
          result[1] += 0.036093418259023353;
          result[2] += 0.010615711252653927;
          result[3] += 0.36942675159235666;
          result[4] += 0.06369426751592357;
          result[5] += 0.43524416135881105;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)52.5) ) ) {
          result[0] += 0.0021598272138228943;
          result[1] += 0.9719222462203023;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.02591792656587473;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.41975308641975306;
          result[2] += 0.024691358024691357;
          result[3] += 0;
          result[4] += 0.5555555555555556;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)70.5) ) ) {
          result[0] += 0.16042780748663102;
          result[1] += 0.20320855614973263;
          result[2] += 0.0106951871657754;
          result[3] += 0.0053475935828877;
          result[4] += 0.5614973262032086;
          result[5] += 0.058823529411764705;
        } else {
          result[0] += 0.7428366762177651;
          result[1] += 0.00501432664756447;
          result[2] += 0.025071633237822348;
          result[3] += 0.08667621776504297;
          result[4] += 0.06876790830945559;
          result[5] += 0.07163323782234957;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)98) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06976744186046512;
          result[3] += 0.7209302325581395;
          result[4] += 0;
          result[5] += 0.20930232558139536;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14285714285714285;
          result[3] += 0.14285714285714285;
          result[4] += 0;
          result[5] += 0.7142857142857143;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.13333333333333333;
          result[4] += 0;
          result[5] += 0.8666666666666667;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5774647887323944;
          result[3] += 0.36619718309859156;
          result[4] += 0;
          result[5] += 0.056338028169014086;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
          result[0] += 0.016129032258064516;
          result[1] += 0;
          result[2] += 0.4838709677419355;
          result[3] += 0.14516129032258066;
          result[4] += 0.04838709677419355;
          result[5] += 0.3064516129032258;
        } else {
          result[0] += 0.03603603603603604;
          result[1] += 0;
          result[2] += 0.8288288288288289;
          result[3] += 0.11411411411411412;
          result[4] += 0;
          result[5] += 0.021021021021021026;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85.5) ) ) {
          result[0] += 0.012195121951219513;
          result[1] += 0;
          result[2] += 0.8048780487804879;
          result[3] += 0.18292682926829268;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.007017543859649123;
          result[1] += 0;
          result[2] += 0.9789473684210527;
          result[3] += 0.010526315789473684;
          result[4] += 0;
          result[5] += 0.0035087719298245615;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)86) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)104) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78) ) ) {
          result[0] += 0;
          result[1] += 0.3333333333333333;
          result[2] += 0;
          result[3] += 0.3333333333333333;
          result[4] += 0.3333333333333333;
          result[5] += 0;
        } else {
          result[0] += 0.0022573363431151244;
          result[1] += 0.9954853273137698;
          result[2] += 0;
          result[3] += 0.0022573363431151244;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
          result[0] += 0.3755868544600939;
          result[1] += 0.003129890453834116;
          result[2] += 0.003129890453834116;
          result[3] += 0.006259780907668232;
          result[4] += 0.5336463223787168;
          result[5] += 0.0782472613458529;
        } else {
          result[0] += 0.02991162474507138;
          result[1] += 0.024473147518694765;
          result[2] += 0.009517335146159076;
          result[3] += 0.19714479945615226;
          result[4] += 0.07273963290278722;
          result[5] += 0.6662134602311353;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)75.5) ) ) {
          result[0] += 0.8532008830022076;
          result[1] += 0.05960264900662252;
          result[2] += 0.011037527593818987;
          result[3] += 0.012141280353200884;
          result[4] += 0.05960264900662252;
          result[5] += 0.004415011037527595;
        } else {
          result[0] += 0.09885931558935362;
          result[1] += 0.0532319391634981;
          result[2] += 0.5019011406844107;
          result[3] += 0.1787072243346008;
          result[4] += 0.03422053231939164;
          result[5] += 0.13307984790874527;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5789473684210527;
          result[5] += 0.42105263157894735;
        } else {
          result[0] += 0;
          result[1] += 0.03333333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.9666666666666667;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)83) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.09523809523809523;
          result[1] += 0.09523809523809523;
          result[2] += 0.09523809523809523;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0.21428571428571427;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.375;
          result[3] += 0.3888888888888889;
          result[4] += 0;
          result[5] += 0.2361111111111111;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8333333333333334;
          result[3] += 0.1568627450980392;
          result[4] += 0;
          result[5] += 0.00980392156862745;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
          result[0] += 0.6666666666666666;
          result[1] += 0.11764705882352941;
          result[2] += 0.17647058823529413;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.0392156862745098;
        } else {
          result[0] += 0.010540184453227932;
          result[1] += 0;
          result[2] += 0.9512516469038208;
          result[3] += 0.03820816864295125;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)64.5) ) ) {
          result[0] += 0.004273504273504274;
          result[1] += 0.029914529914529916;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9444444444444444;
          result[5] += 0.021367521367521368;
        } else {
          result[0] += 0.4536082474226804;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.030927835051546393;
          result[4] += 0.12371134020618557;
          result[5] += 0.3917525773195876;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)84.5) ) ) {
          result[0] += 0.0021668472372697724;
          result[1] += 0.023835319609967497;
          result[2] += 0;
          result[3] += 0.06933911159263272;
          result[4] += 0.04550379198266522;
          result[5] += 0.8591549295774648;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.65625;
          result[4] += 0.025;
          result[5] += 0.31875;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.05263157894736842;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9473684210526315;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9935064935064936;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.006493506493506494;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7656967840735069;
          result[1] += 0.02909647779479326;
          result[2] += 0;
          result[3] += 0.016845329249617153;
          result[4] += 0.15237366003062788;
          result[5] += 0.03598774885145482;
        } else {
          result[0] += 0.22959183673469388;
          result[1] += 0.015306122448979591;
          result[2] += 0.20918367346938777;
          result[3] += 0.2576530612244898;
          result[4] += 0.05357142857142857;
          result[5] += 0.23469387755102042;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
          result[0] += 0.03125;
          result[1] += 0.015625;
          result[2] += 0.03125;
          result[3] += 0.03125;
          result[4] += 0.109375;
          result[5] += 0.78125;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.875;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.125;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
          result[0] += 0.014492753623188406;
          result[1] += 0.014492753623188406;
          result[2] += 0.2318840579710145;
          result[3] += 0.5797101449275363;
          result[4] += 0.057971014492753624;
          result[5] += 0.10144927536231885;
        } else {
          result[0] += 0.13178294573643412;
          result[1] += 0.06976744186046512;
          result[2] += 0.5968992248062015;
          result[3] += 0.11627906976744186;
          result[4] += 0.015503875968992248;
          result[5] += 0.06976744186046512;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)68.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)88.5) ) ) {
          result[0] += 0.9583333333333334;
          result[1] += 0;
          result[2] += 0.041666666666666664;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.45454545454545453;
          result[3] += 0.4090909090909091;
          result[4] += 0;
          result[5] += 0.13636363636363635;
        } else {
          result[0] += 0.0035545023696682463;
          result[1] += 0;
          result[2] += 0.943127962085308;
          result[3] += 0.04976303317535545;
          result[4] += 0;
          result[5] += 0.0035545023696682463;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)71.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9888888888888889;
          result[5] += 0.011111111111111112;
        } else {
          result[0] += 0.03773584905660377;
          result[1] += 0.03773584905660377;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6981132075471698;
          result[5] += 0.22641509433962265;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0.0024783147459727386;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.01982651796778191;
          result[4] += 0.0322180916976456;
          result[5] += 0.9454770755885997;
        } else {
          result[0] += 0.05653710247349823;
          result[1] += 0.10247349823321555;
          result[2] += 0.0035335689045936395;
          result[3] += 0.3674911660777385;
          result[4] += 0.053003533568904596;
          result[5] += 0.4169611307420495;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0.5606060606060607;
          result[2] += 0.04545454545454546;
          result[3] += 0.09090909090909093;
          result[4] += 0.27272727272727276;
          result[5] += 0.030303030303030307;
        } else {
          result[0] += 0.007575757575757576;
          result[1] += 0.9848484848484849;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.007575757575757576;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.7607758620689655;
          result[1] += 0.028017241379310345;
          result[2] += 0.0014367816091954023;
          result[3] += 0.033764367816091954;
          result[4] += 0.1372126436781609;
          result[5] += 0.03879310344827586;
        } else {
          result[0] += 0.10817307692307693;
          result[1] += 0.007211538461538462;
          result[2] += 0.17548076923076922;
          result[3] += 0.33653846153846156;
          result[4] += 0.055288461538461536;
          result[5] += 0.3173076923076923;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)68.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)54) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6666666666666666;
          result[3] += 0;
          result[4] += 0.3333333333333333;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.03125;
          result[2] += 0;
          result[3] += 0.09375;
          result[4] += 0.0625;
          result[5] += 0.8125;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0.014084507042253523;
          result[2] += 0.028169014084507046;
          result[3] += 0.6478873239436621;
          result[4] += 0.04225352112676057;
          result[5] += 0.26760563380281693;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4528301886792453;
          result[3] += 0.24528301886792453;
          result[4] += 0;
          result[5] += 0.3018867924528302;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)105.5) ) ) {
          result[0] += 0;
          result[1] += 0.022988505747126436;
          result[2] += 0.45977011494252873;
          result[3] += 0.4367816091954023;
          result[4] += 0;
          result[5] += 0.08045977011494253;
        } else {
          result[0] += 0.07894736842105263;
          result[1] += 0;
          result[2] += 0.7236842105263158;
          result[3] += 0.10526315789473684;
          result[4] += 0.05263157894736842;
          result[5] += 0.039473684210526314;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
          result[0] += 0.7333333333333333;
          result[1] += 0.26666666666666666;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.011198208286674132;
          result[1] += 0;
          result[2] += 0.9305711086226204;
          result[3] += 0.05263157894736842;
          result[4] += 0;
          result[5] += 0.005599104143337066;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0.01702127659574468;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9574468085106383;
          result[5] += 0.02553191489361702;
        } else {
          result[0] += 0;
          result[1] += 0.15151515151515152;
          result[2] += 0;
          result[3] += 0.18181818181818182;
          result[4] += 0.30303030303030304;
          result[5] += 0.36363636363636365;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)65.5) ) ) {
          result[0] += 0.001430615164520744;
          result[1] += 0.004291845493562232;
          result[2] += 0;
          result[3] += 0.030042918454935622;
          result[4] += 0.06294706723891273;
          result[5] += 0.9012875536480687;
        } else {
          result[0] += 0.08301158301158301;
          result[1] += 0.003861003861003861;
          result[2] += 0.0019305019305019305;
          result[3] += 0.25868725868725867;
          result[4] += 0.0888030888030888;
          result[5] += 0.5637065637065637;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)45.5) ) ) {
          result[0] += 0;
          result[1] += 0.9951456310679612;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0048543689320388345;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.5058823529411764;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.49411764705882355;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7982171799027554;
          result[1] += 0.026742301458670993;
          result[2] += 0.008103727714748786;
          result[3] += 0.036466774716369534;
          result[4] += 0.11345218800648299;
          result[5] += 0.01701782820097245;
        } else {
          result[0] += 0.24128686327077747;
          result[1] += 0.040214477211796246;
          result[2] += 0.225201072386059;
          result[3] += 0.2386058981233244;
          result[4] += 0.040214477211796246;
          result[5] += 0.21447721179624665;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.16666666666666666;
          result[5] += 0.8333333333333334;
        } else {
          result[0] += 0.0625;
          result[1] += 0.015625;
          result[2] += 0.0859375;
          result[3] += 0.3984375;
          result[4] += 0.1171875;
          result[5] += 0.3203125;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0.014492753623188406;
          result[2] += 0.2608695652173913;
          result[3] += 0.4782608695652174;
          result[4] += 0.043478260869565216;
          result[5] += 0.2028985507246377;
        } else {
          result[0] += 0.01388888888888889;
          result[1] += 0;
          result[2] += 0.7916666666666667;
          result[3] += 0.12500000000000003;
          result[4] += 0.01388888888888889;
          result[5] += 0.05555555555555556;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
          result[0] += 0.006172839506172839;
          result[1] += 0;
          result[2] += 0.6666666666666666;
          result[3] += 0.2839506172839506;
          result[4] += 0;
          result[5] += 0.043209876543209874;
        } else {
          result[0] += 0.017142857142857144;
          result[1] += 0;
          result[2] += 0.9371428571428572;
          result[3] += 0.045714285714285714;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8428571428571429;
          result[3] += 0.15714285714285714;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9866666666666667;
          result[3] += 0.013333333333333334;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)102) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.16666666666666666;
          result[4] += 0.8333333333333334;
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
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)66) ) ) {
          result[0] += 0;
          result[1] += 0.9954545454545455;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004545454545454545;
          result[5] += 0;
        } else {
          result[0] += 0.2857142857142857;
          result[1] += 0.7142857142857143;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)99) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          result[0] += 0.0031645569620253164;
          result[1] += 0.028481012658227847;
          result[2] += 0;
          result[3] += 0.012658227848101266;
          result[4] += 0.8987341772151899;
          result[5] += 0.056962025316455694;
        } else {
          result[0] += 0.16283292978208233;
          result[1] += 0.007263922518159807;
          result[2] += 0.010290556900726392;
          result[3] += 0.17130750605326878;
          result[4] += 0.07808716707021791;
          result[5] += 0.5702179176755447;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
          result[0] += 0.856989247311828;
          result[1] += 0.05376344086021506;
          result[2] += 0.0010752688172043013;
          result[3] += 0.012903225806451615;
          result[4] += 0.06559139784946239;
          result[5] += 0.009677419354838712;
        } else {
          result[0] += 0.11170212765957446;
          result[1] += 0.03723404255319149;
          result[2] += 0.3776595744680851;
          result[3] += 0.17553191489361702;
          result[4] += 0.0425531914893617;
          result[5] += 0.2553191489361702;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)50.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0;
          result[4] += 0.7333333333333333;
          result[5] += 0.06666666666666667;
        } else {
          result[0] += 0.014084507042253521;
          result[1] += 0;
          result[2] += 0.028169014084507043;
          result[3] += 0.07042253521126761;
          result[4] += 0.07042253521126761;
          result[5] += 0.8169014084507042;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)89.5) ) ) {
          result[0] += 0.04090909090909091;
          result[1] += 0.045454545454545456;
          result[2] += 0.4409090909090909;
          result[3] += 0.36818181818181817;
          result[4] += 0.004545454545454545;
          result[5] += 0.1;
        } else {
          result[0] += 0.7317073170731707;
          result[1] += 0.024390243902439025;
          result[2] += 0.21951219512195122;
          result[3] += 0;
          result[4] += 0.024390243902439025;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2;
          result[4] += 0.3;
          result[5] += 0.5;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.26666666666666666;
          result[3] += 0.7333333333333333;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.006688963210702341;
          result[1] += 0;
          result[2] += 0.9163879598662207;
          result[3] += 0.06465997770345597;
          result[4] += 0;
          result[5] += 0.012263099219620958;
        }
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
    

    FILE* file = fopen("./codegen/dataset_146/split_4/test_data.csv", "r");
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
