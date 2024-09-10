
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
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0.0035971223021582736;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9748201438848921;
        result[5] += 0.02158273381294964;
      } else {
        result[0] += 0.6209677419354839;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.1532258064516129;
        result[5] += 0.22580645161290322;
      }
    } else {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)85.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0034802784222737818;
        result[3] += 0.06380510440835267;
        result[4] += 0.052204176334106726;
        result[5] += 0.8805104408352669;
      } else {
        result[0] += 0;
        result[1] += 0.008264462809917356;
        result[2] += 0.002066115702479339;
        result[3] += 0.39462809917355374;
        result[4] += 0.07644628099173553;
        result[5] += 0.518595041322314;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)68.5) ) ) {
        result[0] += 0.02112676056338028;
        result[1] += 0.7869718309859155;
        result[2] += 0;
        result[3] += 0.00528169014084507;
        result[4] += 0.1795774647887324;
        result[5] += 0.007042253521126761;
      } else {
        result[0] += 0.7884914463452566;
        result[1] += 0.027993779160186624;
        result[2] += 0.03421461897356143;
        result[3] += 0.042768273716951785;
        result[4] += 0.07231726283048212;
        result[5] += 0.03421461897356143;
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
        result[0] += 0.006968641114982578;
        result[1] += 0.003484320557491289;
        result[2] += 0.41114982578397213;
        result[3] += 0.3310104529616725;
        result[4] += 0.003484320557491289;
        result[5] += 0.24390243902439024;
      } else {
        result[0] += 0.02454642475987193;
        result[1] += 0.0064034151547491995;
        result[2] += 0.8751334044823906;
        result[3] += 0.06937033084311633;
        result[4] += 0.0096051227321238;
        result[5] += 0.014941302027748132;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        result[0] += 0.08146067415730338;
        result[1] += 0.008426966292134831;
        result[2] += 0.0028089887640449437;
        result[3] += 0.03089887640449438;
        result[4] += 0.7612359550561798;
        result[5] += 0.1151685393258427;
      } else {
        result[0] += 0;
        result[1] += 0.004448398576512456;
        result[2] += 0.0026690391459074734;
        result[3] += 0.1708185053380783;
        result[4] += 0.045373665480427046;
        result[5] += 0.7766903914590747;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0.9585921325051759;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.041407867494824016;
        result[5] += 0;
      } else {
        result[0] += 0.6777014366021237;
        result[1] += 0.03622735790131168;
        result[2] += 0.05059337913803873;
        result[3] += 0.08619612742036227;
        result[4] += 0.09681449094316052;
        result[5] += 0.05246720799500312;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.08474576271186442;
        result[3] += 0.44067796610169496;
        result[4] += 0.050847457627118654;
        result[5] += 0.42372881355932207;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0.019801980198019802;
        result[1] += 0.009900990099009901;
        result[2] += 0.42574257425742573;
        result[3] += 0.27722772277227725;
        result[4] += 0.15841584158415842;
        result[5] += 0.10891089108910891;
      } else {
        result[0] += 0.009268795056642637;
        result[1] += 0;
        result[2] += 0.9248197734294542;
        result[3] += 0.05870236869207003;
        result[4] += 0.0010298661174047373;
        result[5] += 0.006179196704428424;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.17788461538461536;
        result[1] += 0.08173076923076922;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.6442307692307692;
        result[5] += 0.09615384615384613;
      } else {
        result[0] += 0.00586756077116513;
        result[1] += 0.003352891869237217;
        result[2] += 0.01760268231349539;
        result[3] += 0.1777032690695725;
        result[4] += 0.07124895222129086;
        result[5] += 0.7242246437552389;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.8653061224489796;
        result[2] += 0.004081632653061225;
        result[3] += 0.018367346938775512;
        result[4] += 0.09795918367346938;
        result[5] += 0.014285714285714285;
      } else {
        result[0] += 0.7154639175257732;
        result[1] += 0.02542955326460481;
        result[2] += 0.04329896907216495;
        result[3] += 0.07491408934707904;
        result[4] += 0.07835051546391752;
        result[5] += 0.06254295532646048;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.19658119658119658;
        result[4] += 0.02564102564102564;
        result[5] += 0.7777777777777778;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.27631578947368424;
        result[3] += 0.5;
        result[4] += 0;
        result[5] += 0.2236842105263158;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
        result[0] += 0.39344262295081966;
        result[1] += 0.26229508196721313;
        result[2] += 0.18032786885245902;
        result[3] += 0.06557377049180328;
        result[4] += 0.04918032786885246;
        result[5] += 0.04918032786885246;
      } else {
        result[0] += 0.00982318271119843;
        result[1] += 0.002946954813359529;
        result[2] += 0.8664047151277015;
        result[3] += 0.09724950884086446;
        result[4] += 0.001964636542239686;
        result[5] += 0.021611001964636545;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
        result[0] += 0.009036144578313253;
        result[1] += 0.030120481927710843;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9307228915662651;
        result[5] += 0.030120481927710843;
      } else {
        result[0] += 0;
        result[1] += 0.9909706546275395;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.009029345372460496;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
        result[0] += 0.03291139240506329;
        result[1] += 0.005063291139240506;
        result[2] += 0;
        result[3] += 0.1518987341772152;
        result[4] += 0.06751054852320675;
        result[5] += 0.7426160337552743;
      } else {
        result[0] += 0.7031454783748362;
        result[1] += 0.026867627785058978;
        result[2] += 0.028833551769331587;
        result[3] += 0.062254259501965926;
        result[4] += 0.07667103538663171;
        result[5] += 0.10222804718217562;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
        result[0] += 0;
        result[1] += 0.03296703296703297;
        result[2] += 0.02197802197802198;
        result[3] += 0.2087912087912088;
        result[4] += 0.15384615384615385;
        result[5] += 0.5824175824175825;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.20491803278688525;
        result[3] += 0.6311475409836066;
        result[4] += 0;
        result[5] += 0.16393442622950818;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
        result[0] += 0.38888888888888895;
        result[1] += 0.05555555555555556;
        result[2] += 0.38888888888888895;
        result[3] += 0.08333333333333334;
        result[4] += 0.01851851851851852;
        result[5] += 0.06481481481481483;
      } else {
        result[0] += 0.003925417075564278;
        result[1] += 0.0009813542688910696;
        result[2] += 0.8979391560353287;
        result[3] += 0.08537782139352307;
        result[4] += 0.001962708537782139;
        result[5] += 0.009813542688910697;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        result[0] += 0.010169491525423728;
        result[1] += 0.02711864406779661;
        result[2] += 0.003389830508474576;
        result[3] += 0.010169491525423728;
        result[4] += 0.9016949152542373;
        result[5] += 0.04745762711864407;
      } else {
        result[0] += 0.04350828729281768;
        result[1] += 0.0020718232044198894;
        result[2] += 0.0013812154696132596;
        result[3] += 0.16367403314917128;
        result[4] += 0.08218232044198895;
        result[5] += 0.7071823204419889;
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6341772151898735;
        result[1] += 0.06139240506329114;
        result[2] += 0.06518987341772152;
        result[3] += 0.08734177215189873;
        result[4] += 0.09873417721518987;
        result[5] += 0.053164556962025315;
      } else {
        result[0] += 0.0070921985815602835;
        result[1] += 0.9810874704491725;
        result[2] += 0.004728132387706856;
        result[3] += 0.0070921985815602835;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.041666666666666664;
        result[3] += 0.08333333333333333;
        result[4] += 0;
        result[5] += 0.875;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.36;
        result[3] += 0.49333333333333335;
        result[4] += 0;
        result[5] += 0.14666666666666667;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.45901639344262296;
        result[3] += 0.45901639344262296;
        result[4] += 0;
        result[5] += 0.08196721311475409;
      } else {
        result[0] += 0.007608695652173913;
        result[1] += 0.003260869565217391;
        result[2] += 0.9184782608695652;
        result[3] += 0.05652173913043478;
        result[4] += 0.003260869565217391;
        result[5] += 0.010869565217391304;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
        result[0] += 0.10780669144981413;
        result[1] += 0.03717472118959108;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8104089219330854;
        result[5] += 0.04460966542750929;
      } else {
        result[0] += 0.0008271298593879239;
        result[1] += 0.0206782464846981;
        result[2] += 0.006617038875103391;
        result[3] += 0.1381306865177833;
        result[4] += 0.05624483043837883;
        result[5] += 0.7775020678246485;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9763593380614657;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.02364066193853428;
        result[5] += 0;
      } else {
        result[0] += 0.5453629032258066;
        result[1] += 0.032762096774193554;
        result[2] += 0.07963709677419356;
        result[3] += 0.10987903225806453;
        result[4] += 0.13760080645161293;
        result[5] += 0.09475806451612905;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8666666666666667;
        result[4] += 0;
        result[5] += 0.13333333333333333;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.3939393939393939;
        result[3] += 0.030303030303030304;
        result[4] += 0.09090909090909091;
        result[5] += 0.48484848484848486;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
        result[0] += 0.038461538461538464;
        result[1] += 0.11538461538461539;
        result[2] += 0.3076923076923077;
        result[3] += 0.23076923076923078;
        result[4] += 0;
        result[5] += 0.3076923076923077;
      } else {
        result[0] += 0.0057670126874279125;
        result[1] += 0;
        result[2] += 0.9204152249134948;
        result[3] += 0.0657439446366782;
        result[4] += 0;
        result[5] += 0.008073817762399077;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        result[0] += 0.013071895424836602;
        result[1] += 0.10457516339869281;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8300653594771242;
        result[5] += 0.05228758169934641;
      } else {
        result[0] += 0.04398340248962656;
        result[1] += 0;
        result[2] += 0.004979253112033195;
        result[3] += 0.15601659751037344;
        result[4] += 0.048132780082987554;
        result[5] += 0.7468879668049793;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)56.5) ) ) {
        result[0] += 0;
        result[1] += 0.9244897959183673;
        result[2] += 0;
        result[3] += 0.0020408163265306124;
        result[4] += 0.07346938775510205;
        result[5] += 0;
      } else {
        result[0] += 0.6195965417867435;
        result[1] += 0.02881844380403458;
        result[2] += 0.08357348703170028;
        result[3] += 0.0893371757925072;
        result[4] += 0.08414985590778098;
        result[5] += 0.09452449567723344;
      }
    }
  } else {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)106.5) ) ) {
        result[0] += 0.009174311926605505;
        result[1] += 0.11009174311926606;
        result[2] += 0.1834862385321101;
        result[3] += 0.44036697247706424;
        result[4] += 0.01834862385321101;
        result[5] += 0.23853211009174313;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9302325581395349;
        result[3] += 0.06976744186046512;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
        result[0] += 0;
        result[1] += 0.041666666666666664;
        result[2] += 0.3125;
        result[3] += 0.08333333333333333;
        result[4] += 0.125;
        result[5] += 0.4375;
      } else {
        result[0] += 0.012359550561797756;
        result[1] += 0.0022471910112359557;
        result[2] += 0.9247191011235957;
        result[3] += 0.05168539325842698;
        result[4] += 0.0022471910112359557;
        result[5] += 0.006741573033707867;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)70.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.0034602076124567475;
        result[1] += 0.04498269896193772;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8512110726643599;
        result[5] += 0.10034602076124567;
      } else {
        result[0] += 0.010064043915827997;
        result[1] += 0.010978956999085087;
        result[2] += 0.021043000914913082;
        result[3] += 0.13906678865507777;
        result[4] += 0.039341262580054895;
        result[5] += 0.7795059469350412;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        result[0] += 0.002197802197802198;
        result[1] += 0.9604395604395605;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.03736263736263736;
        result[5] += 0;
      } else {
        result[0] += 0.5541666666666668;
        result[1] += 0.022395833333333337;
        result[2] += 0.06250000000000001;
        result[3] += 0.11718750000000001;
        result[4] += 0.13593750000000002;
        result[5] += 0.10781250000000002;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
        result[0] += 0.017543859649122806;
        result[1] += 0.19298245614035087;
        result[2] += 0;
        result[3] += 0.07017543859649122;
        result[4] += 0.10526315789473684;
        result[5] += 0.6140350877192983;
      } else {
        result[0] += 0.038461538461538464;
        result[1] += 0;
        result[2] += 0.6410256410256411;
        result[3] += 0.2692307692307692;
        result[4] += 0;
        result[5] += 0.05128205128205128;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.53125;
        result[3] += 0.34375;
        result[4] += 0;
        result[5] += 0.125;
      } else {
        result[0] += 0.0011494252873563218;
        result[1] += 0;
        result[2] += 0.9413793103448276;
        result[3] += 0.054022988505747126;
        result[4] += 0;
        result[5] += 0.0034482758620689655;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
        result[0] += 0.1942257217847769;
        result[1] += 0.010498687664041995;
        result[2] += 0.0026246719160104987;
        result[3] += 0.005249343832020997;
        result[4] += 0.6614173228346457;
        result[5] += 0.12598425196850394;
      } else {
        result[0] += 0.004149377593360996;
        result[1] += 0.013278008298755186;
        result[2] += 0;
        result[3] += 0.16597510373443983;
        result[4] += 0.07551867219917012;
        result[5] += 0.7410788381742739;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)51.5) ) ) {
        result[0] += 0.014583333333333334;
        result[1] += 0.9333333333333333;
        result[2] += 0.004166666666666667;
        result[3] += 0.01875;
        result[4] += 0.029166666666666667;
        result[5] += 0;
      } else {
        result[0] += 0.6874585268745854;
        result[1] += 0.04114134041141341;
        result[2] += 0.029197080291970805;
        result[3] += 0.04578633045786331;
        result[4] += 0.13005972130059723;
        result[5] += 0.06635700066357002;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)98.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)94.5) ) ) {
        result[0] += 0;
        result[1] += 0.050724637681159424;
        result[2] += 0.043478260869565216;
        result[3] += 0.5072463768115942;
        result[4] += 0.050724637681159424;
        result[5] += 0.34782608695652173;
      } else {
        result[0] += 0;
        result[1] += 0.005681818181818182;
        result[2] += 0.5284090909090909;
        result[3] += 0.36363636363636365;
        result[4] += 0.011363636363636364;
        result[5] += 0.09090909090909091;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
        result[0] += 0.13131313131313133;
        result[1] += 0.04040404040404041;
        result[2] += 0.42424242424242425;
        result[3] += 0.13131313131313133;
        result[4] += 0.06060606060606061;
        result[5] += 0.21212121212121213;
      } else {
        result[0] += 0.009523809523809525;
        result[1] += 0;
        result[2] += 0.9345238095238095;
        result[3] += 0.04880952380952381;
        result[4] += 0;
        result[5] += 0.007142857142857143;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        result[0] += 0.013937282229965157;
        result[1] += 0.04529616724738676;
        result[2] += 0.006968641114982578;
        result[3] += 0.010452961672473868;
        result[4] += 0.867595818815331;
        result[5] += 0.05574912891986063;
      } else {
        result[0] += 0.7916666666666666;
        result[1] += 0.004166666666666667;
        result[2] += 0.020833333333333332;
        result[3] += 0.025;
        result[4] += 0.07916666666666666;
        result[5] += 0.07916666666666666;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
        result[0] += 0.0029211295034079843;
        result[1] += 0.010710808179162609;
        result[2] += 0;
        result[3] += 0.04868549172346641;
        result[4] += 0.11002921129503408;
        result[5] += 0.8276533592989289;
      } else {
        result[0] += 0.022598870056497175;
        result[1] += 0;
        result[2] += 0.10357815442561205;
        result[3] += 0.5800376647834274;
        result[4] += 0.003766478342749529;
        result[5] += 0.2900188323917137;
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)66.5) ) ) {
        result[0] += 0.002178649237472767;
        result[1] += 0.8976034858387799;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.09803921568627451;
        result[5] += 0.002178649237472767;
      } else {
        result[0] += 0.8251318101933216;
        result[1] += 0.03602811950790861;
        result[2] += 0.03690685413005272;
        result[3] += 0.026362038664323375;
        result[4] += 0.048330404217926184;
        result[5] += 0.027240773286467488;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
        result[0] += 0.022099447513812157;
        result[1] += 0.022099447513812157;
        result[2] += 0.3204419889502763;
        result[3] += 0.25414364640883985;
        result[4] += 0.11049723756906078;
        result[5] += 0.2707182320441989;
      } else {
        result[0] += 0.009345794392523364;
        result[1] += 0;
        result[2] += 0.9252336448598131;
        result[3] += 0.06230529595015576;
        result[4] += 0;
        result[5] += 0.003115264797507788;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        result[0] += 0;
        result[1] += 0.06722689075630252;
        result[2] += 0.0028011204481792717;
        result[3] += 0.03081232492997199;
        result[4] += 0.7787114845938375;
        result[5] += 0.12044817927170869;
      } else {
        result[0] += 0.04222972972972973;
        result[1] += 0;
        result[2] += 0.0033783783783783786;
        result[3] += 0.16300675675675674;
        result[4] += 0.057432432432432436;
        result[5] += 0.7339527027027027;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)57.5) ) ) {
        result[0] += 0.002074688796680498;
        result[1] += 0.9107883817427386;
        result[2] += 0.002074688796680498;
        result[3] += 0;
        result[4] += 0.08506224066390042;
        result[5] += 0;
      } else {
        result[0] += 0.6267143709004174;
        result[1] += 0.043530113297555156;
        result[2] += 0.05247465712581992;
        result[3] += 0.07871198568872988;
        result[4] += 0.08527131782945736;
        result[5] += 0.11329755515802027;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.19791666666666666;
        result[3] += 0.625;
        result[4] += 0;
        result[5] += 0.17708333333333334;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.8125;
        result[3] += 0.09375;
        result[4] += 0;
        result[5] += 0.09375;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)82.5) ) ) {
        result[0] += 0.11612903225806452;
        result[1] += 0;
        result[2] += 0.7161290322580646;
        result[3] += 0.12903225806451613;
        result[4] += 0;
        result[5] += 0.03870967741935484;
      } else {
        result[0] += 0.004744958481613286;
        result[1] += 0;
        result[2] += 0.9347568208778173;
        result[3] += 0.054567022538552785;
        result[4] += 0;
        result[5] += 0.005931198102016607;
      }
    }
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)94.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        result[0] += 0.006237006237006237;
        result[1] += 0.14137214137214138;
        result[2] += 0.004158004158004158;
        result[3] += 0.037422037422037424;
        result[4] += 0.7297297297297297;
        result[5] += 0.08108108108108109;
      } else {
        result[0] += 0.23415841584158417;
        result[1] += 0.007425742574257425;
        result[2] += 0.020297029702970298;
        result[3] += 0.1599009900990099;
        result[4] += 0.0702970297029703;
        result[5] += 0.5079207920792079;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)99.5) ) ) {
        result[0] += 0.08333333333333333;
        result[1] += 0.7;
        result[2] += 0.05;
        result[3] += 0.03333333333333333;
        result[4] += 0.13333333333333333;
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
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
        result[0] += 0.985981308411215;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.006230529595015576;
        result[4] += 0.004672897196261682;
        result[5] += 0.003115264797507788;
      } else {
        result[0] += 0.5405405405405406;
        result[1] += 0;
        result[2] += 0.35135135135135137;
        result[3] += 0.05405405405405406;
        result[4] += 0.02702702702702703;
        result[5] += 0.02702702702702703;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
        result[0] += 0.07692307692307693;
        result[1] += 0.06593406593406594;
        result[2] += 0.31868131868131866;
        result[3] += 0.22527472527472528;
        result[4] += 0.054945054945054944;
        result[5] += 0.25824175824175827;
      } else {
        result[0] += 0.00785854616895874;
        result[1] += 0;
        result[2] += 0.9047151277013751;
        result[3] += 0.07760314341846757;
        result[4] += 0;
        result[5] += 0.009823182711198426;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)71.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.024896265560165973;
        result[2] += 0;
        result[3] += 0.016597510373443983;
        result[4] += 0.8796680497925311;
        result[5] += 0.07883817427385892;
      } else {
        result[0] += 0.015530629853321829;
        result[1] += 0.010353753235547885;
        result[2] += 0.003451251078515962;
        result[3] += 0.12424503882657463;
        result[4] += 0.062122519413287315;
        result[5] += 0.7842968075927523;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9581497797356828;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.04185022026431718;
        result[5] += 0;
      } else {
        result[0] += 0.5795698924731183;
        result[1] += 0.03387096774193549;
        result[2] += 0.0532258064516129;
        result[3] += 0.0978494623655914;
        result[4] += 0.12903225806451613;
        result[5] += 0.1064516129032258;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)102.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.1891891891891892;
        result[3] += 0.49324324324324326;
        result[4] += 0.02702702702702703;
        result[5] += 0.2905405405405405;
      } else {
        result[0] += 0.0392156862745098;
        result[1] += 0.0392156862745098;
        result[2] += 0.6862745098039216;
        result[3] += 0.21568627450980393;
        result[4] += 0.0196078431372549;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)72.5) ) ) {
        result[0] += 0.631578947368421;
        result[1] += 0.15789473684210525;
        result[2] += 0.21052631578947367;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.012304250559284118;
        result[1] += 0;
        result[2] += 0.9272930648769576;
        result[3] += 0.04921700223713647;
        result[4] += 0;
        result[5] += 0.011185682326621926;
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)99.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
        result[0] += 0.014373716632443531;
        result[1] += 0.1437371663244353;
        result[2] += 0.002053388090349076;
        result[3] += 0.022587268993839837;
        result[4] += 0.7371663244353183;
        result[5] += 0.08008213552361396;
      } else {
        result[0] += 0.21602434077079108;
        result[1] += 0.011156186612576065;
        result[2] += 0.015720081135902637;
        result[3] += 0.14553752535496958;
        result[4] += 0.08924949290060852;
        result[5] += 0.5223123732251521;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)98.5) ) ) {
        result[0] += 0;
        result[1] += 0.9930232558139535;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.0069767441860465115;
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
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.9541420118343196;
        result[1] += 0;
        result[2] += 0.022189349112426034;
        result[3] += 0.0029585798816568047;
        result[4] += 0.019230769230769232;
        result[5] += 0.0014792899408284023;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)96.5) ) ) {
        result[0] += 0.01673640167364017;
        result[1] += 0;
        result[2] += 0.4644351464435147;
        result[3] += 0.3138075313807532;
        result[4] += 0.004184100418410042;
        result[5] += 0.20083682008368203;
      } else {
        result[0] += 0.021912350597609563;
        result[1] += 0;
        result[2] += 0.8864541832669323;
        result[3] += 0.08067729083665338;
        result[4] += 0;
        result[5] += 0.010956175298804782;
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)93.5) ) ) {
        result[0] += 0.008875739644970414;
        result[1] += 0.08579881656804733;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.893491124260355;
        result[5] += 0.011834319526627219;
      } else {
        result[0] += 0;
        result[1] += 0.9692982456140351;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.03070175438596491;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
        result[0] += 0.7723970944309927;
        result[1] += 0.07506053268765134;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.1162227602905569;
        result[5] += 0.03631961259079903;
      } else {
        result[0] += 0.0634828188701223;
        result[1] += 0.019801980198019802;
        result[2] += 0.013395457192778102;
        result[3] += 0.18986604542807223;
        result[4] += 0.07920792079207921;
        result[5] += 0.6342457775189284;
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)74.5) ) ) {
        result[0] += 0.9696509863429439;
        result[1] += 0;
        result[2] += 0.015174506828528073;
        result[3] += 0.010622154779969651;
        result[4] += 0.0030349013657056147;
        result[5] += 0.0015174506828528073;
      } else {
        result[0] += 0.3333333333333333;
        result[1] += 0;
        result[2] += 0.34210526315789475;
        result[3] += 0.17543859649122806;
        result[4] += 0.03508771929824561;
        result[5] += 0.11403508771929824;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        result[0] += 0.005;
        result[1] += 0;
        result[2] += 0.515;
        result[3] += 0.365;
        result[4] += 0.01;
        result[5] += 0.105;
      } else {
        result[0] += 0.008611410118406888;
        result[1] += 0;
        result[2] += 0.9214208826695371;
        result[3] += 0.05166846071044134;
        result[4] += 0;
        result[5] += 0.01829924650161464;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        result[0] += 0.003937007874015748;
        result[1] += 0.011811023622047244;
        result[2] += 0;
        result[3] += 0.01968503937007874;
        result[4] += 0.8937007874015748;
        result[5] += 0.07086614173228346;
      } else {
        result[0] += 0.0256;
        result[1] += 0.0144;
        result[2] += 0.0096;
        result[3] += 0.1424;
        result[4] += 0.0664;
        result[5] += 0.7416;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        result[0] += 0.005154639175257732;
        result[1] += 0.7972508591065293;
        result[2] += 0;
        result[3] += 0.003436426116838488;
        result[4] += 0.19415807560137457;
        result[5] += 0;
      } else {
        result[0] += 0.7325049051667757;
        result[1] += 0.01896664486592544;
        result[2] += 0.04316546762589928;
        result[3] += 0.06671026814911707;
        result[4] += 0.06474820143884892;
        result[5] += 0.07390451275343361;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)101.5) ) ) {
        result[0] += 0;
        result[1] += 0.021505376344086023;
        result[2] += 0.0913978494623656;
        result[3] += 0.4838709677419355;
        result[4] += 0.043010752688172046;
        result[5] += 0.3602150537634409;
      } else {
        result[0] += 0.03676470588235294;
        result[1] += 0;
        result[2] += 0.5955882352941176;
        result[3] += 0.16176470588235295;
        result[4] += 0.058823529411764705;
        result[5] += 0.14705882352941177;
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)82.5) ) ) {
        result[0] += 0.014084507042253523;
        result[1] += 0;
        result[2] += 0.6901408450704226;
        result[3] += 0.16197183098591553;
        result[4] += 0.014084507042253523;
        result[5] += 0.11971830985915494;
      } else {
        result[0] += 0.002677376171352075;
        result[1] += 0;
        result[2] += 0.9504685408299867;
        result[3] += 0.03614457831325301;
        result[4] += 0;
        result[5] += 0.0107095046854083;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0.007142857142857143;
        result[1] += 0.05357142857142857;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9107142857142857;
        result[5] += 0.02857142857142857;
      } else {
        result[0] += 0.04042715484363082;
        result[1] += 0.012967200610221205;
        result[2] += 0.006864988558352402;
        result[3] += 0.18840579710144928;
        result[4] += 0.06102212051868802;
        result[5] += 0.6903127383676583;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)55.5) ) ) {
        result[0] += 0.0021834061135371182;
        result[1] += 0.9126637554585154;
        result[2] += 0;
        result[3] += 0.0021834061135371182;
        result[4] += 0.0829694323144105;
        result[5] += 0;
      } else {
        result[0] += 0.6183894230769231;
        result[1] += 0.025841346153846152;
        result[2] += 0.0703125;
        result[3] += 0.07992788461538461;
        result[4] += 0.11538461538461539;
        result[5] += 0.09014423076923077;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        result[0] += 0.02040816326530612;
        result[1] += 0.013605442176870748;
        result[2] += 0.2585034013605442;
        result[3] += 0.3945578231292517;
        result[4] += 0.034013605442176874;
        result[5] += 0.2789115646258503;
      } else {
        result[0] += 0.029411764705882353;
        result[1] += 0;
        result[2] += 0.8235294117647058;
        result[3] += 0.11764705882352941;
        result[4] += 0;
        result[5] += 0.029411764705882353;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
        result[0] += 0.21428571428571427;
        result[1] += 0.05357142857142857;
        result[2] += 0.48214285714285715;
        result[3] += 0.05357142857142857;
        result[4] += 0;
        result[5] += 0.19642857142857142;
      } else {
        result[0] += 0.007990867579908675;
        result[1] += 0;
        result[2] += 0.9212328767123288;
        result[3] += 0.06506849315068493;
        result[4] += 0;
        result[5] += 0.005707762557077625;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)65) ) ) {
        result[0] += 0.02506963788300836;
        result[1] += 0.04735376044568246;
        result[2] += 0.0027855153203342623;
        result[3] += 0.022284122562674098;
        result[4] += 0.8050139275766017;
        result[5] += 0.09749303621169918;
      } else {
        result[0] += 0.07762180016515277;
        result[1] += 0.004128819157720892;
        result[2] += 0.014037985136251032;
        result[3] += 0.09331131296449216;
        result[4] += 0.07101568951279934;
        result[5] += 0.7398843930635838;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0.9892761394101877;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.010723860589812333;
        result[5] += 0;
      } else {
        result[0] += 0.5710161662817551;
        result[1] += 0.03175519630484988;
        result[2] += 0.06755196304849884;
        result[3] += 0.14549653579676672;
        result[4] += 0.07852193995381061;
        result[5] += 0.10565819861431867;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)54.5) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.33999999999999997;
        result[3] += 0.27999999999999997;
        result[4] += 0.006666666666666665;
        result[5] += 0.3733333333333333;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)86.5) ) ) {
        result[0] += 0.0440251572327044;
        result[1] += 0;
        result[2] += 0.7861635220125787;
        result[3] += 0.14150943396226415;
        result[4] += 0;
        result[5] += 0.02830188679245283;
      } else {
        result[0] += 0.0074962518740629685;
        result[1] += 0;
        result[2] += 0.9685157421289355;
        result[3] += 0.022488755622188907;
        result[4] += 0;
        result[5] += 0.0014992503748125937;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.007843137254901962;
        result[2] += 0;
        result[3] += 0.027450980392156866;
        result[4] += 0.8901960784313726;
        result[5] += 0.07450980392156864;
      } else {
        result[0] += 0.04419889502762431;
        result[1] += 0.0023677979479084454;
        result[2] += 0.0007892659826361484;
        result[3] += 0.1483820047355959;
        result[4] += 0.05367008681925809;
        result[5] += 0.7505919494869772;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)53.5) ) ) {
        result[0] += 0.0021276595744680856;
        result[1] += 0.9489361702127661;
        result[2] += 0;
        result[3] += 0.0021276595744680856;
        result[4] += 0.044680851063829796;
        result[5] += 0.0021276595744680856;
      } else {
        result[0] += 0.5997751545812255;
        result[1] += 0.03485103991006184;
        result[2] += 0.08825182686902756;
        result[3] += 0.10174255199550311;
        result[4] += 0.10399100618324902;
        result[5] += 0.07138842046093312;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.17857142857142858;
        result[3] += 0.03571428571428571;
        result[4] += 0.03571428571428571;
        result[5] += 0.75;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.27692307692307694;
        result[3] += 0.47692307692307695;
        result[4] += 0;
        result[5] += 0.24615384615384617;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
        result[0] += 0.125;
        result[1] += 0.6666666666666666;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.20833333333333334;
      } else {
        result[0] += 0.00959488272921109;
        result[1] += 0;
        result[2] += 0.9189765458422176;
        result[3] += 0.05437100213219617;
        result[4] += 0;
        result[5] += 0.01705756929637527;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.07473309608540926;
        result[2] += 0;
        result[3] += 0.007117437722419929;
        result[4] += 0.8754448398576513;
        result[5] += 0.04270462633451958;
      } else {
        result[0] += 0.033717105263157895;
        result[1] += 0.012335526315789474;
        result[2] += 0.017269736842105265;
        result[3] += 0.13322368421052633;
        result[4] += 0.06825657894736842;
        result[5] += 0.7351973684210527;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)58.5) ) ) {
        result[0] += 0;
        result[1] += 0.9064449064449065;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.09355509355509356;
        result[5] += 0;
      } else {
        result[0] += 0.6510940272028386;
        result[1] += 0.01714961561206387;
        result[2] += 0.05972797161442933;
        result[3] += 0.08515671200473093;
        result[4] += 0.09343583678296866;
        result[5] += 0.09343583678296866;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)89.5) ) ) {
        result[0] += 0.04081632653061224;
        result[1] += 0.12244897959183673;
        result[2] += 0.02040816326530612;
        result[3] += 0.04081632653061224;
        result[4] += 0.1836734693877551;
        result[5] += 0.5918367346938775;
      } else {
        result[0] += 0.026086956521739132;
        result[1] += 0.03478260869565218;
        result[2] += 0.4000000000000001;
        result[3] += 0.4347826086956522;
        result[4] += 0;
        result[5] += 0.10434782608695653;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
        result[0] += 0.02717391304347826;
        result[1] += 0;
        result[2] += 0.7391304347826086;
        result[3] += 0.20652173913043478;
        result[4] += 0;
        result[5] += 0.02717391304347826;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.965389369592089;
        result[3] += 0.029666254635352288;
        result[4] += 0;
        result[5] += 0.004944375772558714;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        result[0] += 0.012605042016806723;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.004201680672268907;
        result[4] += 0.9537815126050421;
        result[5] += 0.029411764705882353;
      } else {
        result[0] += 0.03712671509281679;
        result[1] += 0.013720742534301856;
        result[2] += 0.004035512510088781;
        result[3] += 0.15012106537530268;
        result[4] += 0.046811945117029866;
        result[5] += 0.7481840193704601;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0.9503105590062112;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.049689440993788817;
        result[5] += 0;
      } else {
        result[0] += 0.6173864894795127;
        result[1] += 0.024916943521594685;
        result[2] += 0.0636766334440753;
        result[3] += 0.08693244739756367;
        result[4] += 0.12624584717607973;
        result[5] += 0.08084163898117387;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0.014705882352941176;
        result[2] += 0.2647058823529412;
        result[3] += 0.5441176470588235;
        result[4] += 0;
        result[5] += 0.17647058823529413;
      } else {
        result[0] += 0;
        result[1] += 0.01282051282051282;
        result[2] += 0.5128205128205128;
        result[3] += 0.08974358974358974;
        result[4] += 0.05128205128205128;
        result[5] += 0.3333333333333333;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.75;
        result[3] += 0.19767441860465115;
        result[4] += 0;
        result[5] += 0.05232558139534884;
      } else {
        result[0] += 0.009433962264150943;
        result[1] += 0;
        result[2] += 0.9528301886792453;
        result[3] += 0.02830188679245283;
        result[4] += 0;
        result[5] += 0.009433962264150943;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        result[0] += 0.13445378151260506;
        result[1] += 0.002801120448179272;
        result[2] += 0.005602240896358544;
        result[3] += 0;
        result[4] += 0.7507002801120449;
        result[5] += 0.10644257703081234;
      } else {
        result[0] += 0;
        result[1] += 0.00657354149548069;
        result[2] += 0.0024650780608052587;
        result[3] += 0.1741988496302383;
        result[4] += 0.05094494658997535;
        result[5] += 0.7658175842235004;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)104.5) ) ) {
        result[0] += 0.6213921901528014;
        result[1] += 0.0650820599886814;
        result[2] += 0.062252405206564804;
        result[3] += 0.09111488398415395;
        result[4] += 0.10469722693831354;
        result[5] += 0.05546123372948501;
      } else {
        result[0] += 0;
        result[1] += 0.9947780678851175;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.005221932114882507;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.07142857142857142;
        result[3] += 0.21428571428571427;
        result[4] += 0;
        result[5] += 0.7142857142857143;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.2926829268292683;
        result[3] += 0.6585365853658537;
        result[4] += 0;
        result[5] += 0.04878048780487805;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
        result[0] += 0.014084507042253521;
        result[1] += 0.09859154929577464;
        result[2] += 0.4225352112676056;
        result[3] += 0.18309859154929578;
        result[4] += 0.07042253521126761;
        result[5] += 0.2112676056338028;
      } else {
        result[0] += 0.005197505197505198;
        result[1] += 0;
        result[2] += 0.9303534303534303;
        result[3] += 0.056133056133056136;
        result[4] += 0;
        result[5] += 0.008316008316008316;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.14893617021276598;
        result[1] += 0.04255319148936171;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7367021276595745;
        result[5] += 0.07180851063829789;
      } else {
        result[0] += 0.006639004149377593;
        result[1] += 0.005809128630705394;
        result[2] += 0.005809128630705394;
        result[3] += 0.18423236514522823;
        result[4] += 0.06804979253112033;
        result[5] += 0.729460580912863;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)53.5) ) ) {
        result[0] += 0.0021598272138228943;
        result[1] += 0.9481641468682506;
        result[2] += 0;
        result[3] += 0.012958963282937365;
        result[4] += 0.032397408207343416;
        result[5] += 0.004319654427645789;
      } else {
        result[0] += 0.6249254621347644;
        result[1] += 0.03756708407871199;
        result[2] += 0.046511627906976744;
        result[3] += 0.08765652951699464;
        result[4] += 0.09719737626714371;
        result[5] += 0.10614192009540847;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)103) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.25;
        result[3] += 0.6764705882352942;
        result[4] += 0;
        result[5] += 0.07352941176470588;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6986301369863014;
        result[3] += 0.0821917808219178;
        result[4] += 0;
        result[5] += 0.2191780821917808;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
        result[0] += 0.015037593984962405;
        result[1] += 0;
        result[2] += 0.6691729323308271;
        result[3] += 0.24812030075187969;
        result[4] += 0.007518796992481203;
        result[5] += 0.06015037593984962;
      } else {
        result[0] += 0.00842358604091456;
        result[1] += 0;
        result[2] += 0.950661853188929;
        result[3] += 0.039711191335740074;
        result[4] += 0;
        result[5] += 0.0012033694344163659;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        result[0] += 0.004;
        result[1] += 0.028;
        result[2] += 0;
        result[3] += 0.024;
        result[4] += 0.868;
        result[5] += 0.076;
      } else {
        result[0] += 0.03488372093023256;
        result[1] += 0.004651162790697674;
        result[2] += 0.0007751937984496124;
        result[3] += 0.15426356589147286;
        result[4] += 0.07751937984496124;
        result[5] += 0.727906976744186;
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)102.5) ) ) {
        result[0] += 0.6144437973209086;
        result[1] += 0.052417006406523005;
        result[2] += 0.05998835177635411;
        result[3] += 0.0937682003494467;
        result[4] += 0.11357018054746651;
        result[5] += 0.06581246359930111;
      } else {
        result[0] += 0.015981735159817354;
        result[1] += 0.9771689497716896;
        result[2] += 0;
        result[3] += 0.004566210045662101;
        result[4] += 0.0022831050228310505;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.3174603174603175;
        result[3] += 0.33333333333333337;
        result[4] += 0.007936507936507938;
        result[5] += 0.34126984126984133;
      } else {
        result[0] += 0.05434782608695652;
        result[1] += 0.06521739130434782;
        result[2] += 0.782608695652174;
        result[3] += 0.09782608695652174;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)86.5) ) ) {
        result[0] += 0.012779552715654952;
        result[1] += 0;
        result[2] += 0.8626198083067093;
        result[3] += 0.10862619808306709;
        result[4] += 0;
        result[5] += 0.01597444089456869;
      } else {
        result[0] += 0.0016666666666666668;
        result[1] += 0;
        result[2] += 0.9683333333333334;
        result[3] += 0.023333333333333334;
        result[4] += 0;
        result[5] += 0.006666666666666667;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        result[0] += 0.009966777408637875;
        result[1] += 0.06976744186046513;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9069767441860466;
        result[5] += 0.0132890365448505;
      } else {
        result[0] += 0.0359375;
        result[1] += 0.0171875;
        result[2] += 0.01328125;
        result[3] += 0.15390625;
        result[4] += 0.06328125;
        result[5] += 0.71640625;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)67.5) ) ) {
        result[0] += 0.008944543828264758;
        result[1] += 0.7656529516994633;
        result[2] += 0;
        result[3] += 0.02146690518783542;
        result[4] += 0.19499105545617174;
        result[5] += 0.008944543828264758;
      } else {
        result[0] += 0.7208333333333333;
        result[1] += 0.01597222222222222;
        result[2] += 0.03333333333333333;
        result[3] += 0.06111111111111111;
        result[4] += 0.08402777777777778;
        result[5] += 0.08472222222222223;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0.010638297872340425;
        result[2] += 0.14361702127659576;
        result[3] += 0.6276595744680851;
        result[4] += 0.026595744680851064;
        result[5] += 0.19148936170212766;
      } else {
        result[0] += 0;
        result[1] += 0.01754385964912281;
        result[2] += 0.5964912280701755;
        result[3] += 0.11403508771929825;
        result[4] += 0.03508771929824562;
        result[5] += 0.2368421052631579;
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
        result[0] += 0;
        result[1] += 0.0625;
        result[2] += 0.5703125;
        result[3] += 0.28125;
        result[4] += 0;
        result[5] += 0.0859375;
      } else {
        result[0] += 0.02573529411764706;
        result[1] += 0.002450980392156863;
        result[2] += 0.9105392156862746;
        result[3] += 0.042892156862745105;
        result[4] += 0.0036764705882352945;
        result[5] += 0.014705882352941178;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
        result[0] += 0.25507900677200906;
        result[1] += 0.027088036117381493;
        result[2] += 0.004514672686230249;
        result[3] += 0.009029345372460498;
        result[4] += 0.6275395033860046;
        result[5] += 0.07674943566591423;
      } else {
        result[0] += 0.005847953216374269;
        result[1] += 0.001670843776106934;
        result[2] += 0;
        result[3] += 0.11445279866332497;
        result[4] += 0.0985797827903091;
        result[5] += 0.7794486215538847;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)71.5) ) ) {
        result[0] += 0.003603603603603604;
        result[1] += 0.8846846846846848;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.11171171171171172;
        result[5] += 0;
      } else {
        result[0] += 0.7058388765705839;
        result[1] += 0.015521064301552107;
        result[2] += 0.03399852180339985;
        result[3] += 0.1286031042128603;
        result[4] += 0.03917220990391722;
        result[5] += 0.07686622320768663;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        result[0] += 0;
        result[1] += 0.013071895424836602;
        result[2] += 0.16339869281045752;
        result[3] += 0.6470588235294118;
        result[4] += 0;
        result[5] += 0.17647058823529413;
      } else {
        result[0] += 0;
        result[1] += 0.09774436090225563;
        result[2] += 0.37593984962406013;
        result[3] += 0.12781954887218044;
        result[4] += 0.06015037593984962;
        result[5] += 0.3383458646616541;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        result[0] += 0.04859335038363171;
        result[1] += 0;
        result[2] += 0.7365728900255755;
        result[3] += 0.1636828644501279;
        result[4] += 0;
        result[5] += 0.05115089514066496;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.956738768718802;
        result[3] += 0.03993344425956739;
        result[4] += 0;
        result[5] += 0.0033277870216306157;
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)99.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
        result[0] += 0.4;
        result[1] += 0.0783132530120482;
        result[2] += 0;
        result[3] += 0.010843373493975903;
        result[4] += 0.4530120481927711;
        result[5] += 0.05783132530120482;
      } else {
        result[0] += 0.054827175208581644;
        result[1] += 0.01907032181168057;
        result[2] += 0.009535160905840286;
        result[3] += 0.17401668653158522;
        result[4] += 0.10965435041716329;
        result[5] += 0.6328963051251489;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)80) ) ) {
        result[0] += 0.00468384074941452;
        result[1] += 0.9929742388758782;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.00234192037470726;
        result[5] += 0;
      } else {
        result[0] += 0.125;
        result[1] += 0.5;
        result[2] += 0;
        result[3] += 0.125;
        result[4] += 0.25;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)85.5) ) ) {
        result[0] += 0.21621621621621623;
        result[1] += 0;
        result[2] += 0.20270270270270271;
        result[3] += 0.25675675675675674;
        result[4] += 0.02702702702702703;
        result[5] += 0.2972972972972973;
      } else {
        result[0] += 0.9595808383233533;
        result[1] += 0;
        result[2] += 0.020958083832335328;
        result[3] += 0.0074850299401197605;
        result[4] += 0.011976047904191617;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)98.5) ) ) {
        result[0] += 0.012048192771084338;
        result[1] += 0;
        result[2] += 0.4819277108433735;
        result[3] += 0.3614457831325301;
        result[4] += 0;
        result[5] += 0.14457831325301204;
      } else {
        result[0] += 0.021538461538461538;
        result[1] += 0;
        result[2] += 0.9015384615384615;
        result[3] += 0.06564102564102564;
        result[4] += 0;
        result[5] += 0.011282051282051283;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        result[0] += 0.20803782505910165;
        result[1] += 0.01182033096926714;
        result[2] += 0.002364066193853428;
        result[3] += 0.016548463356973995;
        result[4] += 0.6737588652482269;
        result[5] += 0.08747044917257683;
      } else {
        result[0] += 0.0009689922480620155;
        result[1] += 0.0048449612403100775;
        result[2] += 0.0009689922480620155;
        result[3] += 0.09302325581395349;
        result[4] += 0.08527131782945736;
        result[5] += 0.814922480620155;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)50) ) ) {
        result[0] += 0.009324009324009324;
        result[1] += 0.9790209790209791;
        result[2] += 0;
        result[3] += 0.006993006993006993;
        result[4] += 0.004662004662004662;
        result[5] += 0;
      } else {
        result[0] += 0.5766384778012685;
        result[1] += 0.046511627906976744;
        result[2] += 0.06501057082452431;
        result[3] += 0.13953488372093023;
        result[4] += 0.07135306553911205;
        result[5] += 0.10095137420718817;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
        result[0] += 0;
        result[1] += 0.16216216216216217;
        result[2] += 0.08108108108108109;
        result[3] += 0;
        result[4] += 0.08108108108108109;
        result[5] += 0.6756756756756757;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.41269841269841273;
        result[3] += 0.4920634920634921;
        result[4] += 0;
        result[5] += 0.09523809523809525;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
        result[0] += 0.03333333333333333;
        result[1] += 0;
        result[2] += 0.4;
        result[3] += 0;
        result[4] += 0.13333333333333333;
        result[5] += 0.43333333333333335;
      } else {
        result[0] += 0.003500583430571762;
        result[1] += 0;
        result[2] += 0.9323220536756126;
        result[3] += 0.060676779463243874;
        result[4] += 0;
        result[5] += 0.003500583430571762;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.0035714285714285713;
        result[1] += 0.05;
        result[2] += 0;
        result[3] += 0.007142857142857143;
        result[4] += 0.9;
        result[5] += 0.039285714285714285;
      } else {
        result[0] += 0.036947791164658635;
        result[1] += 0.011244979919678716;
        result[2] += 0.017670682730923693;
        result[3] += 0.13253012048192772;
        result[4] += 0.05060240963855422;
        result[5] += 0.751004016064257;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)50) ) ) {
        result[0] += 0.01839080459770115;
        result[1] += 0.967816091954023;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.013793103448275862;
        result[5] += 0;
      } else {
        result[0] += 0.6581795035009548;
        result[1] += 0.056015276893698285;
        result[2] += 0.036919159770846595;
        result[3] += 0.0732017823042648;
        result[4] += 0.11775938892425207;
        result[5] += 0.05792488860598345;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)89.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0547945205479452;
        result[3] += 0.1232876712328767;
        result[4] += 0.0684931506849315;
        result[5] += 0.7534246575342466;
      } else {
        result[0] += 0.020080321285140562;
        result[1] += 0.04819277108433735;
        result[2] += 0.3654618473895582;
        result[3] += 0.40963855421686746;
        result[4] += 0.0321285140562249;
        result[5] += 0.12449799196787148;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
        result[0] += 0.2608695652173913;
        result[1] += 0;
        result[2] += 0.30434782608695654;
        result[3] += 0;
        result[4] += 0.17391304347826086;
        result[5] += 0.2608695652173913;
      } else {
        result[0] += 0.007368421052631579;
        result[1] += 0;
        result[2] += 0.9136842105263158;
        result[3] += 0.07052631578947369;
        result[4] += 0;
        result[5] += 0.008421052631578947;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        result[0] += 0.020242914979757085;
        result[1] += 0.016194331983805668;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9595141700404858;
        result[5] += 0.004048582995951417;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.6727272727272727;
        result[5] += 0.32727272727272727;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0013812154696132596;
        result[3] += 0.024861878453038673;
        result[4] += 0.029005524861878452;
        result[5] += 0.9447513812154696;
      } else {
        result[0] += 0.13624338624338625;
        result[1] += 0.05555555555555555;
        result[2] += 0.03571428571428571;
        result[3] += 0.28703703703703703;
        result[4] += 0.08465608465608465;
        result[5] += 0.4007936507936508;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        result[0] += 0.0019305019305019305;
        result[1] += 0.9015444015444015;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.09652509652509653;
        result[5] += 0;
      } else {
        result[0] += 0.7119524870081663;
        result[1] += 0.026726057906458798;
        result[2] += 0.022271714922048998;
        result[3] += 0.05196733481811433;
        result[4] += 0.11878247958426132;
        result[5] += 0.06829992576095026;
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
        result[0] += 0.05882352941176472;
        result[1] += 0;
        result[2] += 0.4537815126050421;
        result[3] += 0.33193277310924374;
        result[4] += 0.012605042016806726;
        result[5] += 0.14285714285714288;
      } else {
        result[0] += 0.01381509032943677;
        result[1] += 0.0010626992561105207;
        result[2] += 0.8884165781083954;
        result[3] += 0.0871413390010627;
        result[4] += 0;
        result[5] += 0.009564293304994687;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)82.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        result[0] += 0.003484320557491289;
        result[1] += 0.04878048780487805;
        result[2] += 0;
        result[3] += 0.010452961672473868;
        result[4] += 0.8850174216027874;
        result[5] += 0.05226480836236934;
      } else {
        result[0] += 0.06675392670157068;
        result[1] += 0.014397905759162303;
        result[2] += 0.006544502617801047;
        result[3] += 0.20157068062827224;
        result[4] += 0.08835078534031414;
        result[5] += 0.6223821989528796;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        result[0] += 0.0026041666666666665;
        result[1] += 0.9817708333333334;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.015625;
        result[5] += 0;
      } else {
        result[0] += 0.6036092097075295;
        result[1] += 0.054138145612943375;
        result[2] += 0.07965152457996266;
        result[3] += 0.07591785936527691;
        result[4] += 0.10205351586807716;
        result[5] += 0.08462974486621033;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
        result[0] += 0;
        result[1] += 0.2;
        result[2] += 0.1;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.7;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.2413793103448276;
        result[3] += 0.5172413793103449;
        result[4] += 0;
        result[5] += 0.2413793103448276;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
        result[0] += 0.18181818181818182;
        result[1] += 0.05194805194805195;
        result[2] += 0.44155844155844154;
        result[3] += 0.23376623376623376;
        result[4] += 0;
        result[5] += 0.09090909090909091;
      } else {
        result[0] += 0.017897091722595078;
        result[1] += 0;
        result[2] += 0.9261744966442953;
        result[3] += 0.052572706935123045;
        result[4] += 0;
        result[5] += 0.003355704697986577;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        result[0] += 0.20155038759689922;
        result[1] += 0.00516795865633075;
        result[2] += 0.0103359173126615;
        result[3] += 0;
        result[4] += 0.6821705426356589;
        result[5] += 0.10077519379844961;
      } else {
        result[0] += 0.002407704654895666;
        result[1] += 0.004815409309791332;
        result[2] += 0.0008025682182985554;
        result[3] += 0.19823434991974317;
        result[4] += 0.058587479935794544;
        result[5] += 0.7351524879614767;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)52.5) ) ) {
        result[0] += 0.008438818565400845;
        result[1] += 0.938818565400844;
        result[2] += 0.0042194092827004225;
        result[3] += 0.012658227848101267;
        result[4] += 0.03586497890295359;
        result[5] += 0;
      } else {
        result[0] += 0.6031927023945269;
        result[1] += 0.049030786773090085;
        result[2] += 0.08551881413911062;
        result[3] += 0.10433295324971495;
        result[4] += 0.0935005701254276;
        result[5] += 0.06442417331813;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)75.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.2;
        result[3] += 0.12;
        result[4] += 0.04;
        result[5] += 0.64;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6829268292682927;
        result[3] += 0.2682926829268293;
        result[4] += 0;
        result[5] += 0.04878048780487805;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.639344262295082;
        result[3] += 0.2786885245901639;
        result[4] += 0;
        result[5] += 0.08196721311475409;
      } else {
        result[0] += 0.0059665871121718375;
        result[1] += 0.002386634844868735;
        result[2] += 0.9463007159904535;
        result[3] += 0.0405727923627685;
        result[4] += 0;
        result[5] += 0.00477326968973747;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        result[0] += 0.004310344827586207;
        result[1] += 0.008620689655172414;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9698275862068966;
        result[5] += 0.017241379310344827;
      } else {
        result[0] += 0.39344262295081966;
        result[1] += 0.10655737704918032;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.22950819672131148;
        result[5] += 0.27049180327868855;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0035502958579881655;
        result[3] += 0.04378698224852071;
        result[4] += 0.0378698224852071;
        result[5] += 0.914792899408284;
      } else {
        result[0] += 0;
        result[1] += 0.02743142144638404;
        result[2] += 0.034912718204488775;
        result[3] += 0.4239401496259352;
        result[4] += 0.05486284289276808;
        result[5] += 0.45885286783042395;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)51.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)91.5) ) ) {
        result[0] += 0;
        result[1] += 0.2;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.993006993006993;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.006993006993006993;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
        result[0] += 0.6480659480025365;
        result[1] += 0.03551046290424857;
        result[2] += 0.020291693088142042;
        result[3] += 0.07419150285351934;
        result[4] += 0.15472415979708307;
        result[5] += 0.06721623335447051;
      } else {
        result[0] += 0.0175;
        result[1] += 0.0008333333333333334;
        result[2] += 0.8083333333333333;
        result[3] += 0.12083333333333333;
        result[4] += 0.005;
        result[5] += 0.0475;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        result[0] += 0.01056338028169014;
        result[1] += 0.035211267605633804;
        result[2] += 0;
        result[3] += 0.007042253521126761;
        result[4] += 0.926056338028169;
        result[5] += 0.02112676056338028;
      } else {
        result[0] += 0.029173419773095625;
        result[1] += 0.012155591572123177;
        result[2] += 0.007293354943273906;
        result[3] += 0.1774716369529984;
        result[4] += 0.05429497568881685;
        result[5] += 0.7196110210696921;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)53.5) ) ) {
        result[0] += 0.008695652173913045;
        result[1] += 0.932608695652174;
        result[2] += 0;
        result[3] += 0.006521739130434783;
        result[4] += 0.05000000000000001;
        result[5] += 0.0021739130434782613;
      } else {
        result[0] += 0.6007950028392959;
        result[1] += 0.03861442362294151;
        result[2] += 0.06814310051107325;
        result[3] += 0.08063600227143668;
        result[4] += 0.12038614423622941;
        result[5] += 0.09142532651902328;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)63.5) ) ) {
        result[0] += 0;
        result[1] += 0.6875;
        result[2] += 0;
        result[3] += 0.0625;
        result[4] += 0.25;
        result[5] += 0;
      } else {
        result[0] += 0.05825242718446602;
        result[1] += 0.009708737864077669;
        result[2] += 0.2912621359223301;
        result[3] += 0.2524271844660194;
        result[4] += 0.019417475728155338;
        result[5] += 0.36893203883495146;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)75.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.3958333333333333;
        result[3] += 0.3541666666666667;
        result[4] += 0;
        result[5] += 0.25;
      } else {
        result[0] += 0.009782608695652175;
        result[1] += 0;
        result[2] += 0.9228260869565217;
        result[3] += 0.05434782608695652;
        result[4] += 0;
        result[5] += 0.013043478260869565;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)89) ) ) {
        result[0] += 0.007978723404255319;
        result[1] += 0.08244680851063829;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8909574468085106;
        result[5] += 0.018617021276595744;
      } else {
        result[0] += 0;
        result[1] += 0.9860788863109049;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.013921113689095127;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)86.5) ) ) {
        result[0] += 0.0669811320754717;
        result[1] += 0.009433962264150943;
        result[2] += 0.005660377358490566;
        result[3] += 0.06037735849056604;
        result[4] += 0.05377358490566038;
        result[5] += 0.8037735849056604;
      } else {
        result[0] += 0.5438972162740899;
        result[1] += 0.027837259100642397;
        result[2] += 0.05513918629550321;
        result[3] += 0.15524625267665954;
        result[4] += 0.07173447537473233;
        result[5] += 0.14614561027837258;
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.41496598639455784;
        result[3] += 0.47619047619047616;
        result[4] += 0;
        result[5] += 0.10884353741496598;
      } else {
        result[0] += 0.0967741935483871;
        result[1] += 0;
        result[2] += 0.8193548387096774;
        result[3] += 0.05806451612903226;
        result[4] += 0.012903225806451613;
        result[5] += 0.012903225806451613;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6296296296296297;
        result[3] += 0.2962962962962963;
        result[4] += 0;
        result[5] += 0.07407407407407407;
      } else {
        result[0] += 0.0026246719160104987;
        result[1] += 0;
        result[2] += 0.958005249343832;
        result[3] += 0.031496062992125984;
        result[4] += 0;
        result[5] += 0.007874015748031496;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        result[0] += 0.003703703703703704;
        result[1] += 0.06666666666666667;
        result[2] += 0;
        result[3] += 0.014814814814814815;
        result[4] += 0.8518518518518519;
        result[5] += 0.06296296296296296;
      } else {
        result[0] += 0.03585346843335931;
        result[1] += 0.004676539360872954;
        result[2] += 0.006235385814497272;
        result[3] += 0.16289945440374123;
        result[4] += 0.06391270459859703;
        result[5] += 0.7264224473889321;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)102.5) ) ) {
        result[0] += 0.5773140716960942;
        result[1] += 0.03317281968967362;
        result[2] += 0.07811663991439273;
        result[3] += 0.10968432316746923;
        result[4] += 0.11717495987158909;
        result[5] += 0.08453718566078117;
      } else {
        result[0] += 0.031630170316301706;
        result[1] += 0.9683698296836983;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.23529411764705882;
        result[3] += 0.3235294117647059;
        result[4] += 0;
        result[5] += 0.4411764705882353;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.736842105263158;
        result[3] += 0.13157894736842107;
        result[4] += 0;
        result[5] += 0.13157894736842107;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
        result[0] += 0.034482758620689655;
        result[1] += 0.27586206896551724;
        result[2] += 0.3793103448275862;
        result[3] += 0.13793103448275862;
        result[4] += 0;
        result[5] += 0.1724137931034483;
      } else {
        result[0] += 0.002242152466367713;
        result[1] += 0;
        result[2] += 0.945067264573991;
        result[3] += 0.04484304932735426;
        result[4] += 0;
        result[5] += 0.007847533632286996;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)82) ) ) {
        result[0] += 0;
        result[1] += 0.014814814814814815;
        result[2] += 0;
        result[3] += 0.011111111111111112;
        result[4] += 0.9222222222222223;
        result[5] += 0.05185185185185185;
      } else {
        result[0] += 0;
        result[1] += 0.4117647058823529;
        result[2] += 0;
        result[3] += 0.29411764705882354;
        result[4] += 0;
        result[5] += 0.29411764705882354;
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
        result[0] += 0.031313131313131314;
        result[1] += 0.00101010101010101;
        result[2] += 0.0030303030303030303;
        result[3] += 0.051515151515151514;
        result[4] += 0.08484848484848485;
        result[5] += 0.8282828282828283;
      } else {
        result[0] += 0.05793450881612091;
        result[1] += 0.012594458438287154;
        result[2] += 0.020151133501259445;
        result[3] += 0.4659949622166247;
        result[4] += 0.04534005037783375;
        result[5] += 0.3979848866498741;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)90.5) ) ) {
        result[0] += 0;
        result[1] += 0.30851063829787234;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.6914893617021277;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.9934497816593887;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.006550218340611353;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)75.5) ) ) {
        result[0] += 0.7655538694992413;
        result[1] += 0.02503793626707132;
        result[2] += 0.03186646433990895;
        result[3] += 0.04931714719271624;
        result[4] += 0.0834597875569044;
        result[5] += 0.044764795144157814;
      } else {
        result[0] += 0.030421216848673948;
        result[1] += 0.00546021840873635;
        result[2] += 0.766770670826833;
        result[3] += 0.12714508580343215;
        result[4] += 0.01014040561622465;
        result[5] += 0.06006240249609984;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.022988505747126436;
        result[2] += 0;
        result[3] += 0.019157088122605363;
        result[4] += 0.8812260536398467;
        result[5] += 0.07662835249042145;
      } else {
        result[0] += 0.035003977724741446;
        result[1] += 0.003977724741447892;
        result[2] += 0;
        result[3] += 0.16308671439936356;
        result[4] += 0.05250596658711217;
        result[5] += 0.745425616547335;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)56.5) ) ) {
        result[0] += 0;
        result[1] += 0.9112426035502958;
        result[2] += 0;
        result[3] += 0.005917159763313609;
        result[4] += 0.08086785009861933;
        result[5] += 0.0019723865877712033;
      } else {
        result[0] += 0.5958668197474167;
        result[1] += 0.04190585533869116;
        result[2] += 0.08495981630309989;
        result[3] += 0.09242250287026406;
        result[4] += 0.09586681974741676;
        result[5] += 0.08897818599311137;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)85.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.058823529411764705;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.9411764705882353;
      } else {
        result[0] += 0.006666666666666667;
        result[1] += 0.013333333333333334;
        result[2] += 0.32666666666666666;
        result[3] += 0.31333333333333335;
        result[4] += 0.10666666666666667;
        result[5] += 0.23333333333333334;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)105.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7764705882352941;
        result[3] += 0.2;
        result[4] += 0;
        result[5] += 0.023529411764705882;
      } else {
        result[0] += 0.00425531914893617;
        result[1] += 0;
        result[2] += 0.9588652482269504;
        result[3] += 0.031205673758865248;
        result[4] += 0.0014184397163120568;
        result[5] += 0.00425531914893617;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)92.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        result[0] += 0.2784090909090909;
        result[1] += 0.03409090909090909;
        result[2] += 0;
        result[3] += 0.017045454545454544;
        result[4] += 0.5909090909090909;
        result[5] += 0.07954545454545454;
      } else {
        result[0] += 0.008527131782945736;
        result[1] += 0.005426356589147287;
        result[2] += 0.0015503875968992248;
        result[3] += 0.12325581395348838;
        result[4] += 0.07131782945736434;
        result[5] += 0.789922480620155;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
        result[0] += 0.0038314176245210726;
        result[1] += 0.9042145593869731;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.08812260536398467;
        result[5] += 0.0038314176245210726;
      } else {
        result[0] += 0.6309103740296401;
        result[1] += 0.009174311926605505;
        result[2] += 0.09386026817219478;
        result[3] += 0.13832039520112915;
        result[4] += 0.051517290049400144;
        result[5] += 0.07621736062103035;
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)98.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
        result[0] += 0;
        result[1] += 0.05263157894736842;
        result[2] += 0.22105263157894736;
        result[3] += 0.30526315789473685;
        result[4] += 0.021052631578947368;
        result[5] += 0.4;
      } else {
        result[0] += 0.021739130434782608;
        result[1] += 0.07608695652173914;
        result[2] += 0.75;
        result[3] += 0.05434782608695652;
        result[4] += 0.010869565217391304;
        result[5] += 0.08695652173913043;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0.15384615384615385;
        result[2] += 0.3076923076923077;
        result[3] += 0.5384615384615384;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.02416570771001151;
        result[1] += 0;
        result[2] += 0.9275028768699656;
        result[3] += 0.04487917146144995;
        result[4] += 0;
        result[5] += 0.0034522439585730727;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        result[0] += 0.023076923076923078;
        result[1] += 0.0038461538461538464;
        result[2] += 0;
        result[3] += 0.007692307692307693;
        result[4] += 0.8923076923076924;
        result[5] += 0.07307692307692308;
      } else {
        result[0] += 0.03932151117964534;
        result[1] += 0.018504240555127217;
        result[2] += 0.014649190439475714;
        result[3] += 0.18504240555127216;
        result[4] += 0.04163454124903624;
        result[5] += 0.7008481110254433;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9734151329243353;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.026584867075664622;
        result[5] += 0;
      } else {
        result[0] += 0.637440758293839;
        result[1] += 0.02902843601895735;
        result[2] += 0.06338862559241708;
        result[3] += 0.07760663507109006;
        result[4] += 0.13092417061611378;
        result[5] += 0.06161137440758294;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
        result[0] += 0.03773584905660377;
        result[1] += 0.07547169811320754;
        result[2] += 0.07547169811320754;
        result[3] += 0.18867924528301888;
        result[4] += 0.20754716981132076;
        result[5] += 0.41509433962264153;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5449438202247191;
        result[3] += 0.3258426966292135;
        result[4] += 0;
        result[5] += 0.12921348314606743;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)91.5) ) ) {
        result[0] += 0.06666666666666667;
        result[1] += 0.4;
        result[2] += 0.2;
        result[3] += 0.2;
        result[4] += 0;
        result[5] += 0.13333333333333333;
      } else {
        result[0] += 0.0070921985815602835;
        result[1] += 0.002364066193853428;
        result[2] += 0.9184397163120568;
        result[3] += 0.05673758865248227;
        result[4] += 0;
        result[5] += 0.015366430260047281;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.037800687285223365;
        result[2] += 0;
        result[3] += 0.027491408934707903;
        result[4] += 0.8969072164948454;
        result[5] += 0.037800687285223365;
      } else {
        result[0] += 0.04816678648454349;
        result[1] += 0.002875629043853343;
        result[2] += 0.002875629043853343;
        result[3] += 0.1466570812365205;
        result[4] += 0.05751258087706686;
        result[5] += 0.7419122933141624;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)52.5) ) ) {
        result[0] += 0.02197802197802198;
        result[1] += 0.9384615384615385;
        result[2] += 0;
        result[3] += 0.01098901098901099;
        result[4] += 0.02857142857142857;
        result[5] += 0;
      } else {
        result[0] += 0.6341463414634148;
        result[1] += 0.03851091142490373;
        result[2] += 0.06867779204107832;
        result[3] += 0.07830551989730425;
        result[4] += 0.12387676508344032;
        result[5] += 0.0564826700898588;
      }
    }
  } else {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)82) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
        result[0] += 0.015748031496062992;
        result[1] += 0.023622047244094488;
        result[2] += 0.2125984251968504;
        result[3] += 0.4094488188976378;
        result[4] += 0.03937007874015748;
        result[5] += 0.2992125984251969;
      } else {
        result[0] += 0.0072992700729927005;
        result[1] += 0.043795620437956206;
        result[2] += 0.7299270072992701;
        result[3] += 0.19708029197080293;
        result[4] += 0;
        result[5] += 0.021897810218978103;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
        result[0] += 0.048859934853420196;
        result[1] += 0.003257328990228013;
        result[2] += 0.8241042345276873;
        result[3] += 0.10097719869706841;
        result[4] += 0;
        result[5] += 0.02280130293159609;
      } else {
        result[0] += 0.016071428571428566;
        result[1] += 0;
        result[2] += 0.9624999999999998;
        result[3] += 0.017857142857142853;
        result[4] += 0.0017857142857142852;
        result[5] += 0.0017857142857142852;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)95) ) ) {
        result[0] += 0.00425531914893617;
        result[1] += 0.01702127659574468;
        result[2] += 0;
        result[3] += 0.01276595744680851;
        result[4] += 0.9276595744680851;
        result[5] += 0.03829787234042553;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.1;
        result[4] += 0;
        result[5] += 0.9;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
        result[0] += 0.0362453531598513;
        result[1] += 0.0027881040892193307;
        result[2] += 0;
        result[3] += 0.06133828996282528;
        result[4] += 0.07806691449814127;
        result[5] += 0.8215613382899628;
      } else {
        result[0] += 0.035856573705179286;
        result[1] += 0;
        result[2] += 0.01593625498007968;
        result[3] += 0.6454183266932271;
        result[4] += 0;
        result[5] += 0.30278884462151395;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        result[0] += 0.0018315018315018315;
        result[1] += 0.8644688644688645;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.1336996336996337;
        result[5] += 0;
      } else {
        result[0] += 0.7287420941672523;
        result[1] += 0.036542515811665496;
        result[2] += 0.004216444132115249;
        result[3] += 0.07097680955727337;
        result[4] += 0.10681658468025299;
        result[5] += 0.05270555165144062;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
        result[0] += 0.02766798418972332;
        result[1] += 0.015810276679841896;
        result[2] += 0.2885375494071146;
        result[3] += 0.4150197628458498;
        result[4] += 0.011857707509881422;
        result[5] += 0.24110671936758893;
      } else {
        result[0] += 0.02422480620155039;
        result[1] += 0;
        result[2] += 0.8817829457364341;
        result[3] += 0.06589147286821706;
        result[4] += 0;
        result[5] += 0.02810077519379845;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        result[0] += 0.13402061855670103;
        result[1] += 0.005154639175257732;
        result[2] += 0;
        result[3] += 0.023195876288659795;
        result[4] += 0.711340206185567;
        result[5] += 0.12628865979381443;
      } else {
        result[0] += 0;
        result[1] += 0.001713796058269066;
        result[2] += 0.001713796058269066;
        result[3] += 0.14738646101113967;
        result[4] += 0.05312767780634105;
        result[5] += 0.7960582690659811;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)58.5) ) ) {
        result[0] += 0.004081632653061225;
        result[1] += 0.8714285714285714;
        result[2] += 0.018367346938775512;
        result[3] += 0;
        result[4] += 0.10612244897959183;
        result[5] += 0;
      } else {
        result[0] += 0.6371841155234657;
        result[1] += 0.039711191335740074;
        result[2] += 0.07521058965102287;
        result[3] += 0.0842358604091456;
        result[4] += 0.08844765342960288;
        result[5] += 0.07521058965102287;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0.09523809523809523;
        result[2] += 0.047619047619047616;
        result[3] += 0.19047619047619047;
        result[4] += 0.12698412698412698;
        result[5] += 0.5396825396825397;
      } else {
        result[0] += 0.11864406779661017;
        result[1] += 0.22033898305084745;
        result[2] += 0.3728813559322034;
        result[3] += 0.23728813559322035;
        result[4] += 0.03389830508474576;
        result[5] += 0.01694915254237288;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.636904761904762;
        result[3] += 0.255952380952381;
        result[4] += 0;
        result[5] += 0.10714285714285715;
      } else {
        result[0] += 0.0048250904704463205;
        result[1] += 0;
        result[2] += 0.9457177322074789;
        result[3] += 0.04825090470446321;
        result[4] += 0;
        result[5] += 0.0012062726176115801;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.013937282229965159;
        result[1] += 0.01742160278745645;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8954703832752614;
        result[5] += 0.07317073170731708;
      } else {
        result[0] += 0.03469210754553339;
        result[1] += 0.003469210754553339;
        result[2] += 0.003469210754553339;
        result[3] += 0.1595836947094536;
        result[4] += 0.046834345186470075;
        result[5] += 0.7519514310494363;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        result[0] += 0.012939001848428836;
        result[1] += 0.800369685767098;
        result[2] += 0.005545286506469501;
        result[3] += 0.0018484288354898336;
        result[4] += 0.17744916820702403;
        result[5] += 0.0018484288354898336;
      } else {
        result[0] += 0.7123197903014418;
        result[1] += 0.029488859764089125;
        result[2] += 0.03669724770642203;
        result[3] += 0.07863695937090434;
        result[4] += 0.07667103538663173;
        result[5] += 0.06618610747051115;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.12837837837837837;
        result[3] += 0.5540540540540541;
        result[4] += 0.006756756756756757;
        result[5] += 0.3108108108108108;
      } else {
        result[0] += 0;
        result[1] += 0.030303030303030304;
        result[2] += 0.5808080808080808;
        result[3] += 0.21717171717171718;
        result[4] += 0.015151515151515152;
        result[5] += 0.15656565656565657;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
        result[0] += 0.16666666666666666;
        result[1] += 0.05;
        result[2] += 0.5666666666666667;
        result[3] += 0.016666666666666666;
        result[4] += 0.08333333333333333;
        result[5] += 0.11666666666666667;
      } else {
        result[0] += 0.0065717415115005475;
        result[1] += 0.001095290251916758;
        result[2] += 0.932092004381161;
        result[3] += 0.056955093099671415;
        result[4] += 0;
        result[5] += 0.0032858707557502738;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0.0038461538461538464;
        result[1] += 0.06538461538461539;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9153846153846154;
        result[5] += 0.015384615384615385;
      } else {
        result[0] += 0.05114503816793893;
        result[1] += 0.012213740458015267;
        result[2] += 0.009923664122137405;
        result[3] += 0.18091603053435115;
        result[4] += 0.046564885496183206;
        result[5] += 0.6992366412213741;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)53.5) ) ) {
        result[0] += 0.002100840336134454;
        result[1] += 0.9516806722689076;
        result[2] += 0;
        result[3] += 0.002100840336134454;
        result[4] += 0.04411764705882354;
        result[5] += 0;
      } else {
        result[0] += 0.6369012418687168;
        result[1] += 0.03548196333530455;
        result[2] += 0.06150206978119456;
        result[3] += 0.08279124778237729;
        result[4] += 0.11117681845062094;
        result[5] += 0.07214665878178593;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)99) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.08695652173913043;
        result[3] += 0.2608695652173913;
        result[4] += 0;
        result[5] += 0.6521739130434783;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6721311475409837;
        result[3] += 0.1639344262295082;
        result[4] += 0;
        result[5] += 0.1639344262295082;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0.05681818181818182;
        result[2] += 0.5113636363636365;
        result[3] += 0.2954545454545455;
        result[4] += 0.04545454545454546;
        result[5] += 0.09090909090909093;
      } else {
        result[0] += 0.008948545861297539;
        result[1] += 0;
        result[2] += 0.9351230425055929;
        result[3] += 0.04809843400447427;
        result[4] += 0;
        result[5] += 0.007829977628635347;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)70.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        result[0] += 0.04727272727272727;
        result[1] += 0.0036363636363636364;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8290909090909091;
        result[5] += 0.12;
      } else {
        result[0] += 0.0028462998102466793;
        result[1] += 0;
        result[2] += 0.004743833017077799;
        result[3] += 0.1318785578747628;
        result[4] += 0.054079696394686905;
        result[5] += 0.8064516129032258;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.963265306122449;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.036734693877551024;
        result[5] += 0;
      } else {
        result[0] += 0.5613480779357557;
        result[1] += 0.037914691943127965;
        result[2] += 0.05845181674565561;
        result[3] += 0.11637704054765666;
        result[4] += 0.12848867825171142;
        result[5] += 0.09741969457609267;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)99) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)86.5) ) ) {
        result[0] += 0;
        result[1] += 0.018867924528301886;
        result[2] += 0.2169811320754717;
        result[3] += 0.37735849056603776;
        result[4] += 0.03773584905660377;
        result[5] += 0.3490566037735849;
      } else {
        result[0] += 0.025641025641025644;
        result[1] += 0;
        result[2] += 0.6666666666666667;
        result[3] += 0;
        result[4] += 0.20512820512820515;
        result[5] += 0.10256410256410257;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
        result[0] += 0.05555555555555555;
        result[1] += 0.16666666666666666;
        result[2] += 0.35185185185185186;
        result[3] += 0.3333333333333333;
        result[4] += 0.037037037037037035;
        result[5] += 0.05555555555555555;
      } else {
        result[0] += 0.005500550055005501;
        result[1] += 0;
        result[2] += 0.9284928492849285;
        result[3] += 0.056105610561056105;
        result[4] += 0;
        result[5] += 0.009900990099009901;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.1370262390670554;
        result[1] += 0.046647230320699715;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7026239067055394;
        result[5] += 0.11370262390670555;
      } else {
        result[0] += 0;
        result[1] += 0.008143322475570033;
        result[2] += 0.006514657980456026;
        result[3] += 0.17263843648208468;
        result[4] += 0.05537459283387622;
        result[5] += 0.757328990228013;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        result[0] += 0.005415162454873647;
        result[1] += 0.828519855595668;
        result[2] += 0;
        result[3] += 0.021660649819494587;
        result[4] += 0.13718411552346574;
        result[5] += 0.007220216606498196;
      } else {
        result[0] += 0.6539624924379915;
        result[1] += 0.021778584392014518;
        result[2] += 0.06594071385359952;
        result[3] += 0.08711433756805807;
        result[4] += 0.0822746521476104;
        result[5] += 0.08892921960072596;
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        result[0] += 0.021897810218978103;
        result[1] += 0.029197080291970802;
        result[2] += 0.3357664233576642;
        result[3] += 0.39416058394160586;
        result[4] += 0.021897810218978103;
        result[5] += 0.19708029197080293;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.8409090909090909;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.1590909090909091;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.4666666666666667;
        result[3] += 0.26666666666666666;
        result[4] += 0.06666666666666667;
        result[5] += 0.2;
      } else {
        result[0] += 0.0047789725209080045;
        result[1] += 0;
        result[2] += 0.94026284348865;
        result[3] += 0.05017921146953405;
        result[4] += 0;
        result[5] += 0.0047789725209080045;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        result[0] += 0.006920415224913495;
        result[1] += 0.11072664359861592;
        result[2] += 0;
        result[3] += 0.01384083044982699;
        result[4] += 0.7958477508650519;
        result[5] += 0.0726643598615917;
      } else {
        result[0] += 0.035130718954248366;
        result[1] += 0.004901960784313725;
        result[2] += 0.0032679738562091504;
        result[3] += 0.14787581699346405;
        result[4] += 0.05473856209150327;
        result[5] += 0.7540849673202614;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        result[0] += 0.0021231422505307855;
        result[1] += 0.9490445859872612;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.04883227176220807;
        result[5] += 0;
      } else {
        result[0] += 0.607909604519774;
        result[1] += 0.031073446327683617;
        result[2] += 0.05310734463276836;
        result[3] += 0.08926553672316384;
        result[4] += 0.12203389830508475;
        result[5] += 0.09661016949152543;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.23376623376623376;
        result[3] += 0.5974025974025974;
        result[4] += 0;
        result[5] += 0.16883116883116883;
      } else {
        result[0] += 0.15;
        result[1] += 0;
        result[2] += 0.65;
        result[3] += 0.05;
        result[4] += 0.025;
        result[5] += 0.125;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        result[0] += 0.031545741324921134;
        result[1] += 0;
        result[2] += 0.7318611987381703;
        result[3] += 0.20504731861198738;
        result[4] += 0;
        result[5] += 0.031545741324921134;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9780564263322884;
        result[3] += 0.017241379310344827;
        result[4] += 0;
        result[5] += 0.004702194357366771;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        result[0] += 0.20279720279720279;
        result[1] += 0.02097902097902098;
        result[2] += 0;
        result[3] += 0.004662004662004662;
        result[4] += 0.6526806526806527;
        result[5] += 0.11888111888111888;
      } else {
        result[0] += 0.006572769953051643;
        result[1] += 0.009389671361502348;
        result[2] += 0.004694835680751174;
        result[3] += 0.09859154929577464;
        result[4] += 0.07511737089201878;
        result[5] += 0.8056338028169014;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)56.5) ) ) {
        result[0] += 0;
        result[1] += 0.9765258215962441;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.023474178403755867;
        result[5] += 0;
      } else {
        result[0] += 0.563973063973064;
        result[1] += 0.026936026936026935;
        result[2] += 0.0712682379349046;
        result[3] += 0.1414141414141414;
        result[4] += 0.0819304152637486;
        result[5] += 0.11447811447811448;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)72.5) ) ) {
        result[0] += 0;
        result[1] += 0.09090909090909091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.09090909090909091;
        result[5] += 0.8181818181818182;
      } else {
        result[0] += 0.006493506493506494;
        result[1] += 0;
        result[2] += 0.44155844155844154;
        result[3] += 0.474025974025974;
        result[4] += 0;
        result[5] += 0.07792207792207792;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)67) ) ) {
        result[0] += 0;
        result[1] += 0.8181818181818182;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.18181818181818182;
        result[5] += 0;
      } else {
        result[0] += 0.0021598272138228943;
        result[1] += 0;
        result[2] += 0.91792656587473;
        result[3] += 0.06587473002159827;
        result[4] += 0;
        result[5] += 0.014038876889848811;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9551020408163265;
        result[5] += 0.044897959183673466;
      } else {
        result[0] += 0.04813664596273292;
        result[1] += 0.023291925465838508;
        result[2] += 0.014751552795031056;
        result[3] += 0.1638198757763975;
        result[4] += 0.049689440993788817;
        result[5] += 0.7003105590062112;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        result[0] += 0.00202020202020202;
        result[1] += 0.8242424242424242;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.1696969696969697;
        result[5] += 0.00404040404040404;
      } else {
        result[0] += 0.6523005241700641;
        result[1] += 0.03552708211997671;
        result[2] += 0.06348281887012232;
        result[3] += 0.09376820034944672;
        result[4] += 0.07687827606290042;
        result[5] += 0.07804309842748983;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)86) ) ) {
        result[0] += 0;
        result[1] += 0.09375;
        result[2] += 0;
        result[3] += 0.09375;
        result[4] += 0.03125;
        result[5] += 0.78125;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.3893805309734513;
        result[3] += 0.45132743362831856;
        result[4] += 0.02654867256637168;
        result[5] += 0.13274336283185842;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)85.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.8297101449275363;
        result[3] += 0.15942028985507245;
        result[4] += 0;
        result[5] += 0.010869565217391304;
      } else {
        result[0] += 0.012121212121212121;
        result[1] += 0.0015151515151515152;
        result[2] += 0.9424242424242424;
        result[3] += 0.03636363636363636;
        result[4] += 0.0030303030303030303;
        result[5] += 0.004545454545454545;
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
