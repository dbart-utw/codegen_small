
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
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
        result[0] += 0.012448132780082987;
        result[1] += 0.02074688796680498;
        result[2] += 0.008298755186721992;
        result[3] += 0.029045643153526972;
        result[4] += 0.8796680497925311;
        result[5] += 0.04979253112033195;
      } else {
        result[0] += 0.032407407407407406;
        result[1] += 0.0007716049382716049;
        result[2] += 0.0023148148148148147;
        result[3] += 0.12885802469135801;
        result[4] += 0.06867283950617284;
        result[5] += 0.7669753086419753;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)56.5) ) ) {
        result[0] += 0;
        result[1] += 0.9270386266094421;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.06866952789699572;
        result[5] += 0.004291845493562233;
      } else {
        result[0] += 0.6158192090395481;
        result[1] += 0.0440677966101695;
        result[2] += 0.06723163841807911;
        result[3] += 0.09096045197740114;
        result[4] += 0.10000000000000002;
        result[5] += 0.08192090395480227;
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
        result[0] += 0;
        result[1] += 0.08196721311475409;
        result[2] += 0.13934426229508196;
        result[3] += 0.4344262295081967;
        result[4] += 0.01639344262295082;
        result[5] += 0.32786885245901637;
      } else {
        result[0] += 0.09803921568627452;
        result[1] += 0;
        result[2] += 0.7843137254901962;
        result[3] += 0.07843137254901962;
        result[4] += 0;
        result[5] += 0.03921568627450981;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
        result[0] += 0.08;
        result[1] += 0.04;
        result[2] += 0.2;
        result[3] += 0.48;
        result[4] += 0;
        result[5] += 0.2;
      } else {
        result[0] += 0.010526315789473684;
        result[1] += 0;
        result[2] += 0.9076023391812865;
        result[3] += 0.07368421052631578;
        result[4] += 0;
        result[5] += 0.008187134502923977;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.06181818181818182;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8981818181818182;
        result[5] += 0.04;
      } else {
        result[0] += 0.03333333333333333;
        result[1] += 0.005982905982905983;
        result[2] += 0.021367521367521368;
        result[3] += 0.14444444444444443;
        result[4] += 0.062393162393162394;
        result[5] += 0.7324786324786324;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.0056925996204933585;
        result[1] += 0.8292220113851992;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.16318785578747627;
        result[5] += 0.0018975332068311196;
      } else {
        result[0] += 0.6816455696202532;
        result[1] += 0.023417721518987345;
        result[2] += 0.04303797468354431;
        result[3] += 0.07658227848101268;
        result[4] += 0.07215189873417722;
        result[5] += 0.10316455696202532;
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
        result[0] += 0.005076142131979695;
        result[1] += 0.02030456852791878;
        result[2] += 0.1218274111675127;
        result[3] += 0.39086294416243655;
        result[4] += 0.04568527918781726;
        result[5] += 0.41624365482233505;
      } else {
        result[0] += 0.05263157894736842;
        result[1] += 0.06140350877192982;
        result[2] += 0.6403508771929824;
        result[3] += 0.11403508771929824;
        result[4] += 0;
        result[5] += 0.13157894736842105;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85.5) ) ) {
        result[0] += 0.048543689320388356;
        result[1] += 0;
        result[2] += 0.7572815533980584;
        result[3] += 0.17152103559870552;
        result[4] += 0;
        result[5] += 0.0226537216828479;
      } else {
        result[0] += 0.012232415902140675;
        result[1] += 0;
        result[2] += 0.9495412844036698;
        result[3] += 0.03822629969418961;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        result[0] += 0.007575757575757576;
        result[1] += 0.05303030303030303;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9015151515151515;
        result[5] += 0.03787878787878788;
      } else {
        result[0] += 0.05426917510853835;
        result[1] += 0.007959479015918957;
        result[2] += 0.010130246020260492;
        result[3] += 0.15267727930535455;
        result[4] += 0.06801736613603473;
        result[5] += 0.7069464544138929;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)58.5) ) ) {
        result[0] += 0.006289308176100629;
        result[1] += 0.9140461215932913;
        result[2] += 0;
        result[3] += 0.0020964360587002098;
        result[4] += 0.07127882599580712;
        result[5] += 0.006289308176100629;
      } else {
        result[0] += 0.6629491945477076;
        result[1] += 0.04584882280049567;
        result[2] += 0.05142503097893433;
        result[3] += 0.058859975216852545;
        result[4] += 0.08364312267657995;
        result[5] += 0.09727385377943;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.1;
        result[3] += 0.625;
        result[4] += 0.0125;
        result[5] += 0.2625;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.8181818181818182;
        result[3] += 0.11363636363636363;
        result[4] += 0;
        result[5] += 0.06818181818181818;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
        result[0] += 0.03571428571428571;
        result[1] += 0;
        result[2] += 0.7564935064935064;
        result[3] += 0.18181818181818182;
        result[4] += 0;
        result[5] += 0.025974025974025976;
      } else {
        result[0] += 0.0030441400304414;
        result[1] += 0;
        result[2] += 0.974124809741248;
        result[3] += 0.0228310502283105;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        result[0] += 0.15705128205128208;
        result[1] += 0.04487179487179488;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.6955128205128206;
        result[5] += 0.10256410256410257;
      } else {
        result[0] += 0.0035971223021582736;
        result[1] += 0.017985611510791366;
        result[2] += 0.0017985611510791368;
        result[3] += 0.14298561151079137;
        result[4] += 0.045863309352517985;
        result[5] += 0.7877697841726619;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9732739420935412;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.026726057906458798;
        result[5] += 0;
      } else {
        result[0] += 0.6170921198668147;
        result[1] += 0.02719200887902331;
        result[2] += 0.05715871254162042;
        result[3] += 0.09877913429522753;
        result[4] += 0.13374028856825748;
        result[5] += 0.0660377358490566;
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
        result[0] += 0.010526315789473684;
        result[1] += 0.15789473684210525;
        result[2] += 0.08421052631578947;
        result[3] += 0.21052631578947367;
        result[4] += 0.031578947368421054;
        result[5] += 0.5052631578947369;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6481481481481481;
        result[3] += 0.26851851851851855;
        result[4] += 0;
        result[5] += 0.08333333333333333;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
        result[0] += 0.15;
        result[1] += 0;
        result[2] += 0.35;
        result[3] += 0.125;
        result[4] += 0.15;
        result[5] += 0.225;
      } else {
        result[0] += 0.003303964757709251;
        result[1] += 0;
        result[2] += 0.9063876651982379;
        result[3] += 0.08590308370044053;
        result[4] += 0;
        result[5] += 0.004405286343612335;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.0423728813559322;
        result[2] += 0;
        result[3] += 0.012711864406779662;
        result[4] += 0.8983050847457628;
        result[5] += 0.046610169491525424;
      } else {
        result[0] += 0.03802588996763754;
        result[1] += 0.009708737864077669;
        result[2] += 0.016181229773462782;
        result[3] += 0.17475728155339806;
        result[4] += 0.08171521035598706;
        result[5] += 0.6796116504854369;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0.9754464285714286;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.024553571428571428;
        result[5] += 0;
      } else {
        result[0] += 0.6131639722863741;
        result[1] += 0.03926096997690531;
        result[2] += 0.06293302540415704;
        result[3] += 0.07736720554272518;
        result[4] += 0.10103926096997691;
        result[5] += 0.10623556581986143;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.03571428571428571;
        result[3] += 0.22321428571428573;
        result[4] += 0.10714285714285714;
        result[5] += 0.6339285714285714;
      } else {
        result[0] += 0.26573426573426573;
        result[1] += 0.04195804195804196;
        result[2] += 0.4195804195804196;
        result[3] += 0.24475524475524477;
        result[4] += 0.006993006993006993;
        result[5] += 0.02097902097902098;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
        result[0] += 0.01834862385321101;
        result[1] += 0;
        result[2] += 0.7003058103975535;
        result[3] += 0.22324159021406728;
        result[4] += 0;
        result[5] += 0.0581039755351682;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9628378378378378;
        result[3] += 0.037162162162162164;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)67.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9936305732484076;
        result[5] += 0.006369426751592357;
      } else {
        result[0] += 0.001053740779768177;
        result[1] += 0;
        result[2] += 0.002107481559536354;
        result[3] += 0.05268703898840885;
        result[4] += 0.08851422550052687;
        result[5] += 0.8556375131717597;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)63.5) ) ) {
        result[0] += 0.4824561403508771;
        result[1] += 0.035087719298245605;
        result[2] += 0;
        result[3] += 0.017543859649122803;
        result[4] += 0.4166666666666666;
        result[5] += 0.0482456140350877;
      } else {
        result[0] += 0.0023148148148148147;
        result[1] += 0.02546296296296296;
        result[2] += 0.023148148148148147;
        result[3] += 0.42592592592592593;
        result[4] += 0.037037037037037035;
        result[5] += 0.4861111111111111;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)58.5) ) ) {
        result[0] += 0.006172839506172837;
        result[1] += 0.9032921810699587;
        result[2] += 0;
        result[3] += 0.0020576131687242796;
        result[4] += 0.08436213991769546;
        result[5] += 0.004115226337448559;
      } else {
        result[0] += 0.7807283763277695;
        result[1] += 0.033383915022761765;
        result[2] += 0.022761760242792112;
        result[3] += 0.037177541729893786;
        result[4] += 0.1031866464339909;
        result[5] += 0.022761760242792112;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0.012448132780082987;
        result[1] += 0.04564315352697095;
        result[2] += 0.3112033195020747;
        result[3] += 0.34024896265560167;
        result[4] += 0.04149377593360996;
        result[5] += 0.24896265560165975;
      } else {
        result[0] += 0.03842364532019705;
        result[1] += 0;
        result[2] += 0.8798029556650248;
        result[3] += 0.07487684729064041;
        result[4] += 0.0009852216748768474;
        result[5] += 0.005911330049261085;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.008620689655172414;
        result[2] += 0.021551724137931036;
        result[3] += 0;
        result[4] += 0.9396551724137931;
        result[5] += 0.03017241379310345;
      } else {
        result[0] += 0.0361890694239291;
        result[1] += 0.012555391432791729;
        result[2] += 0.0103397341211226;
        result[3] += 0.17725258493353027;
        result[4] += 0.051698670605613;
        result[5] += 0.7119645494830132;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)58.5) ) ) {
        result[0] += 0;
        result[1] += 0.9221556886227545;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.07784431137724551;
        result[5] += 0;
      } else {
        result[0] += 0.6568796776050663;
        result[1] += 0.025906735751295342;
        result[2] += 0.058721934369602775;
        result[3] += 0.08520437535981579;
        result[4] += 0.08808290155440415;
        result[5] += 0.08520437535981579;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)84.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.34545454545454546;
        result[3] += 0.4909090909090909;
        result[4] += 0;
        result[5] += 0.16363636363636364;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9;
        result[3] += 0.1;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)94.5) ) ) {
        result[0] += 0;
        result[1] += 0.03508771929824561;
        result[2] += 0.5789473684210527;
        result[3] += 0;
        result[4] += 0.08771929824561403;
        result[5] += 0.2982456140350877;
      } else {
        result[0] += 0.007547169811320755;
        result[1] += 0.005031446540880503;
        result[2] += 0.9006289308176101;
        result[3] += 0.0779874213836478;
        result[4] += 0;
        result[5] += 0.00880503144654088;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88) ) ) {
        result[0] += 0;
        result[1] += 0.15789473684210525;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8421052631578947;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.9899497487437187;
        result[2] += 0;
        result[3] += 0.007537688442211056;
        result[4] += 0.0025125628140703522;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        result[0] += 0.08691043985161633;
        result[1] += 0.011128775834658187;
        result[2] += 0.012188659247482777;
        result[3] += 0.16322204557498676;
        result[4] += 0.1897191308956015;
        result[5] += 0.5368309485956545;
      } else {
        result[0] += 0.7048022598870056;
        result[1] += 0.0635593220338983;
        result[2] += 0.05296610169491525;
        result[3] += 0.041666666666666664;
        result[4] += 0.1016949152542373;
        result[5] += 0.03531073446327684;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.24210526315789474;
        result[3] += 0.5368421052631579;
        result[4] += 0;
        result[5] += 0.22105263157894736;
      } else {
        result[0] += 0.030303030303030307;
        result[1] += 0;
        result[2] += 0.7575757575757577;
        result[3] += 0.16666666666666669;
        result[4] += 0;
        result[5] += 0.04545454545454546;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        result[0] += 0.02523659305993691;
        result[1] += 0;
        result[2] += 0.744479495268139;
        result[3] += 0.2050473186119874;
        result[4] += 0;
        result[5] += 0.02523659305993691;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.964968152866242;
        result[3] += 0.03343949044585987;
        result[4] += 0;
        result[5] += 0.0015923566878980893;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
        result[0] += 0.008695652173913044;
        result[1] += 0.017391304347826087;
        result[2] += 0;
        result[3] += 0.017391304347826087;
        result[4] += 0.8652173913043478;
        result[5] += 0.09130434782608696;
      } else {
        result[0] += 0.04564315352697095;
        result[1] += 0.011618257261410789;
        result[2] += 0.0033195020746887966;
        result[3] += 0.15186721991701244;
        result[4] += 0.056431535269709544;
        result[5] += 0.7311203319502074;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        result[0] += 0.5888051668460711;
        result[1] += 0.04951560818083961;
        result[2] += 0.05597416576964478;
        result[3] += 0.08503767491926803;
        result[4] += 0.12055974165769645;
        result[5] += 0.10010764262648009;
      } else {
        result[0] += 0.009009009009009009;
        result[1] += 0.990990990990991;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)97.5) ) ) {
        result[0] += 0.0078125;
        result[1] += 0.0546875;
        result[2] += 0.1875;
        result[3] += 0.4140625;
        result[4] += 0.0234375;
        result[5] += 0.3125;
      } else {
        result[0] += 0.03954802259887006;
        result[1] += 0.02824858757062147;
        result[2] += 0.6949152542372882;
        result[3] += 0.20903954802259886;
        result[4] += 0;
        result[5] += 0.02824858757062147;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.8112449799196787;
        result[3] += 0.17670682730923695;
        result[4] += 0;
        result[5] += 0.012048192771084338;
      } else {
        result[0] += 0.003738317757009346;
        result[1] += 0;
        result[2] += 0.9682242990654205;
        result[3] += 0.028037383177570093;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)82.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.007692307692307693;
        result[2] += 0.0038461538461538464;
        result[3] += 0.038461538461538464;
        result[4] += 0.8961538461538462;
        result[5] += 0.05384615384615385;
      } else {
        result[0] += 0.03346613545816733;
        result[1] += 0.009561752988047808;
        result[2] += 0.006374501992031873;
        result[3] += 0.15219123505976095;
        result[4] += 0.04860557768924303;
        result[5] += 0.749800796812749;
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)104.5) ) ) {
        result[0] += 0.5653292181069959;
        result[1] += 0.05709876543209876;
        result[2] += 0.06532921810699588;
        result[3] += 0.10133744855967078;
        result[4] += 0.10185185185185185;
        result[5] += 0.10905349794238683;
      } else {
        result[0] += 0.016706443914081145;
        result[1] += 0.9689737470167065;
        result[2] += 0;
        result[3] += 0.00477326968973747;
        result[4] += 0.00954653937947494;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
        result[0] += 0.007874015748031496;
        result[1] += 0.047244094488188976;
        result[2] += 0.29133858267716534;
        result[3] += 0.41732283464566927;
        result[4] += 0.007874015748031496;
        result[5] += 0.2283464566929134;
      } else {
        result[0] += 0.15625;
        result[1] += 0;
        result[2] += 0.8125;
        result[3] += 0.03125;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6904761904761905;
        result[3] += 0.30952380952380953;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.012048192771084338;
        result[1] += 0;
        result[2] += 0.9263721552878179;
        result[3] += 0.05622489959839357;
        result[4] += 0;
        result[5] += 0.00535475234270415;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
        result[0] += 0;
        result[1] += 0.0037735849056603774;
        result[2] += 0;
        result[3] += 0.0037735849056603774;
        result[4] += 0.8679245283018868;
        result[5] += 0.12452830188679245;
      } else {
        result[0] += 0.028764805414551606;
        result[1] += 0.024534686971235193;
        result[2] += 0.0008460236886632825;
        result[3] += 0.15313028764805414;
        result[4] += 0.03299492385786802;
        result[5] += 0.7597292724196277;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
        result[0] += 0.006872852233676977;
        result[1] += 0.8075601374570448;
        result[2] += 0.006872852233676977;
        result[3] += 0.0034364261168384883;
        result[4] += 0.16666666666666669;
        result[5] += 0.008591065292096222;
      } else {
        result[0] += 0.656794425087108;
        result[1] += 0.02961672473867595;
        result[2] += 0.04703832752613239;
        result[3] += 0.0952380952380952;
        result[4] += 0.07549361207897792;
        result[5] += 0.09581881533101043;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.11475409836065574;
        result[3] += 0.7540983606557377;
        result[4] += 0;
        result[5] += 0.13114754098360656;
      } else {
        result[0] += 0.020618556701030927;
        result[1] += 0;
        result[2] += 0.7216494845360825;
        result[3] += 0.15463917525773196;
        result[4] += 0.010309278350515464;
        result[5] += 0.09278350515463918;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
        result[0] += 0.015873015873015872;
        result[1] += 0;
        result[2] += 0.7817460317460317;
        result[3] += 0.18253968253968253;
        result[4] += 0;
        result[5] += 0.01984126984126984;
      } else {
        result[0] += 0.004511278195488723;
        result[1] += 0;
        result[2] += 0.9578947368421054;
        result[3] += 0.03458646616541354;
        result[4] += 0;
        result[5] += 0.003007518796992482;
      }
    }
  }
  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
        result[0] += 0.10817307692307693;
        result[1] += 0.03365384615384615;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8100961538461539;
        result[5] += 0.04807692307692308;
      } else {
        result[0] += 0.9069767441860466;
        result[1] += 0.0038759689922480624;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.04651162790697675;
        result[5] += 0.04263565891472869;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
        result[0] += 0.0063119927862939585;
        result[1] += 0.015329125338142471;
        result[2] += 0.0009017132551848512;
        result[3] += 0.08205590622182146;
        result[4] += 0.08476104598737602;
        result[5] += 0.8106402164111812;
      } else {
        result[0] += 0.00975609756097561;
        result[1] += 0.026829268292682926;
        result[2] += 0.05365853658536585;
        result[3] += 0.5780487804878048;
        result[4] += 0.04878048780487805;
        result[5] += 0.28292682926829266;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)58.5) ) ) {
        result[0] += 0.0023094688221709007;
        result[1] += 0.9930715935334873;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.004618937644341801;
        result[5] += 0;
      } else {
        result[0] += 0.7656826568265683;
        result[1] += 0.04612546125461255;
        result[2] += 0.04243542435424355;
        result[3] += 0.02583025830258303;
        result[4] += 0.07564575645756459;
        result[5] += 0.04428044280442805;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)98.5) ) ) {
        result[0] += 0.034653465346534656;
        result[1] += 0.0049504950495049506;
        result[2] += 0.599009900990099;
        result[3] += 0.18811881188118812;
        result[4] += 0.009900990099009901;
        result[5] += 0.16336633663366337;
      } else {
        result[0] += 0.030634573304157548;
        result[1] += 0.0010940919037199124;
        result[2] += 0.8807439824945296;
        result[3] += 0.0787746170678337;
        result[4] += 0.002188183807439825;
        result[5] += 0.006564551422319475;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.24864864864864866;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.6756756756756757;
        result[5] += 0.07567567567567568;
      } else {
        result[0] += 0.0014738393515106854;
        result[1] += 0.008106116433308769;
        result[2] += 0.006632277081798084;
        result[3] += 0.20117907148120856;
        result[4] += 0.056742815033161385;
        result[5] += 0.7258658806190126;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)66.5) ) ) {
        result[0] += 0.0019083969465648856;
        result[1] += 0.8454198473282444;
        result[2] += 0.0019083969465648856;
        result[3] += 0.0019083969465648856;
        result[4] += 0.14503816793893132;
        result[5] += 0.0038167938931297713;
      } else {
        result[0] += 0.7071611253196931;
        result[1] += 0.04092071611253197;
        result[2] += 0.0741687979539642;
        result[3] += 0.06457800511508952;
        result[4] += 0.06713554987212277;
        result[5] += 0.04603580562659847;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.1875;
        result[3] += 0.28125;
        result[4] += 0;
        result[5] += 0.53125;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.72;
        result[3] += 0.06;
        result[4] += 0;
        result[5] += 0.22;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
        result[0] += 0;
        result[1] += 0.6666666666666666;
        result[2] += 0;
        result[3] += 0.3333333333333333;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.00903954802259887;
        result[1] += 0;
        result[2] += 0.9050847457627119;
        result[3] += 0.08135593220338982;
        result[4] += 0;
        result[5] += 0.004519774011299435;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        result[0] += 0.00816326530612245;
        result[1] += 0.08163265306122448;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8693877551020408;
        result[5] += 0.04081632653061224;
      } else {
        result[0] += 0.042692939244663386;
        result[1] += 0.012315270935960592;
        result[2] += 0.0008210180623973727;
        result[3] += 0.13711001642036125;
        result[4] += 0.05993431855500821;
        result[5] += 0.7471264367816092;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.8717948717948718;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.12454212454212454;
        result[5] += 0.003663003663003663;
      } else {
        result[0] += 0.710594315245478;
        result[1] += 0.01808785529715762;
        result[2] += 0.020025839793281652;
        result[3] += 0.06976744186046512;
        result[4] += 0.09754521963824289;
        result[5] += 0.08397932816537468;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        result[0] += 0.0045045045045045045;
        result[1] += 0;
        result[2] += 0.2072072072072072;
        result[3] += 0.5495495495495496;
        result[4] += 0;
        result[5] += 0.23873873873873874;
      } else {
        result[0] += 0.017543859649122806;
        result[1] += 0;
        result[2] += 0.7192982456140351;
        result[3] += 0.18421052631578946;
        result[4] += 0.03508771929824561;
        result[5] += 0.043859649122807015;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
        result[0] += 0.7272727272727273;
        result[1] += 0;
        result[2] += 0.18181818181818182;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.09090909090909091;
      } else {
        result[0] += 0.006507592190889371;
        result[1] += 0.0010845986984815619;
        result[2] += 0.8969631236442517;
        result[3] += 0.0770065075921909;
        result[4] += 0;
        result[5] += 0.01843817787418655;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
        result[0] += 0.012987012987012988;
        result[1] += 0.008658008658008658;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.935064935064935;
        result[5] += 0.04329004329004329;
      } else {
        result[0] += 0.03341288782816229;
        result[1] += 0.011137629276054098;
        result[2] += 0.0007955449482895784;
        result[3] += 0.1511535401750199;
        result[4] += 0.060461416070007955;
        result[5] += 0.7430389817024662;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6409652736904062;
        result[1] += 0.04414361389052385;
        result[2] += 0.05120659211300766;
        result[3] += 0.0723955267804591;
        result[4] += 0.13949381989405535;
        result[5] += 0.051795173631547974;
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
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)111.5) ) ) {
        result[0] += 0.05439330543933055;
        result[1] += 0.04184100418410042;
        result[2] += 0.17154811715481172;
        result[3] += 0.29707112970711297;
        result[4] += 0.06276150627615062;
        result[5] += 0.3723849372384937;
      } else {
        result[0] += 0.025;
        result[1] += 0.075;
        result[2] += 0.85;
        result[3] += 0.05;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
        result[0] += 0.2777777777777778;
        result[1] += 0;
        result[2] += 0.4074074074074074;
        result[3] += 0.2777777777777778;
        result[4] += 0;
        result[5] += 0.037037037037037035;
      } else {
        result[0] += 0.015659955257270698;
        result[1] += 0;
        result[2] += 0.9026845637583893;
        result[3] += 0.07718120805369129;
        result[4] += 0;
        result[5] += 0.00447427293064877;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
        result[0] += 0.003875968992248062;
        result[1] += 0.015503875968992248;
        result[2] += 0;
        result[3] += 0.027131782945736434;
        result[4] += 0.8837209302325582;
        result[5] += 0.06976744186046512;
      } else {
        result[0] += 0.03268482490272374;
        result[1] += 0.004669260700389105;
        result[2] += 0.012451361867704281;
        result[3] += 0.1649805447470817;
        result[4] += 0.06381322957198443;
        result[5] += 0.7214007782101167;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9635535307517085;
        result[2] += 0;
        result[3] += 0.00683371298405467;
        result[4] += 0.029612756264236904;
        result[5] += 0;
      } else {
        result[0] += 0.6184649610678532;
        result[1] += 0.03781979977753059;
        result[2] += 0.07119021134593993;
        result[3] += 0.0867630700778643;
        result[4] += 0.1017797552836485;
        result[5] += 0.08398220244716352;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)77) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)91) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.13043478260869565;
        result[3] += 0.2608695652173913;
        result[4] += 0.06521739130434782;
        result[5] += 0.5434782608695652;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
        result[0] += 0;
        result[1] += 0.5789473684210527;
        result[2] += 0;
        result[3] += 0.21052631578947367;
        result[4] += 0;
        result[5] += 0.21052631578947367;
      } else {
        result[0] += 0.014145810663764961;
        result[1] += 0;
        result[2] += 0.8944504896626768;
        result[3] += 0.07616974972796518;
        result[4] += 0;
        result[5] += 0.015233949945593036;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)44) ) ) {
        result[0] += 0;
        result[1] += 0.8;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.2;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.975103734439834;
        result[5] += 0.024896265560165973;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.030303030303030304;
        result[4] += 0.02904040404040404;
        result[5] += 0.9406565656565656;
      } else {
        result[0] += 0.09811320754716982;
        result[1] += 0.01509433962264151;
        result[2] += 0.005660377358490566;
        result[3] += 0.33584905660377357;
        result[4] += 0.07169811320754717;
        result[5] += 0.47358490566037736;
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)53.5) ) ) {
        result[0] += 0.004424778761061947;
        result[1] += 0.9557522123893806;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.03761061946902655;
        result[5] += 0.0022123893805309734;
      } else {
        result[0] += 0.7172322022621423;
        result[1] += 0.043912175648702596;
        result[2] += 0.021956087824351298;
        result[3] += 0.037258815701929474;
        result[4] += 0.1377245508982036;
        result[5] += 0.041916167664670656;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
        result[0] += 0.10144927536231885;
        result[1] += 0.07004830917874397;
        result[2] += 0.2922705314009662;
        result[3] += 0.26811594202898553;
        result[4] += 0.09420289855072464;
        result[5] += 0.17391304347826086;
      } else {
        result[0] += 0.003374578177727784;
        result[1] += 0;
        result[2] += 0.8886389201349831;
        result[3] += 0.08886389201349831;
        result[4] += 0.0022497187851518562;
        result[5] += 0.01687289088863892;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)61.5) ) ) {
        result[0] += 0.009433962264150943;
        result[1] += 0.014150943396226415;
        result[2] += 0;
        result[3] += 0.018867924528301886;
        result[4] += 0.8632075471698113;
        result[5] += 0.09433962264150944;
      } else {
        result[0] += 0.03028009084027252;
        result[1] += 0.00757002271006813;
        result[2] += 0.006056018168054504;
        result[3] += 0.14155942467827404;
        result[4] += 0.080999242997729;
        result[5] += 0.7335352006056018;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        result[0] += 0.006276150627615063;
        result[1] += 0.9748953974895398;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.01882845188284519;
        result[5] += 0;
      } else {
        result[0] += 0.6192109777015438;
        result[1] += 0.03773584905660377;
        result[2] += 0.07604345340194396;
        result[3] += 0.0903373356203545;
        result[4] += 0.09834190966266437;
        result[5] += 0.07833047455688966;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)64.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0967741935483871;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.9032258064516129;
      } else {
        result[0] += 0.043209876543209874;
        result[1] += 0.043209876543209874;
        result[2] += 0.47530864197530864;
        result[3] += 0.2839506172839506;
        result[4] += 0.012345679012345678;
        result[5] += 0.1419753086419753;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97.5) ) ) {
        result[0] += 0.011494252873563218;
        result[1] += 0;
        result[2] += 0.5402298850574713;
        result[3] += 0.3563218390804598;
        result[4] += 0;
        result[5] += 0.09195402298850575;
      } else {
        result[0] += 0.001272264631043257;
        result[1] += 0;
        result[2] += 0.9389312977099237;
        result[3] += 0.05725190839694656;
        result[4] += 0;
        result[5] += 0.002544529262086514;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9897435897435898;
        result[5] += 0.010256410256410256;
      } else {
        result[0] += 0.047058823529411764;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.047058823529411764;
        result[4] += 0.5647058823529412;
        result[5] += 0.3411764705882353;
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86.5) ) ) {
        result[0] += 0.015053763440860216;
        result[1] += 0.021505376344086023;
        result[2] += 0.002150537634408602;
        result[3] += 0.05161290322580645;
        result[4] += 0.02043010752688172;
        result[5] += 0.889247311827957;
      } else {
        result[0] += 0.06722689075630252;
        result[1] += 0.04201680672268908;
        result[2] += 0.0056022408963585435;
        result[3] += 0.42016806722689076;
        result[4] += 0.04201680672268908;
        result[5] += 0.42296918767507;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)104.5) ) ) {
        result[0] += 0.6110134739308729;
        result[1] += 0.07908611599297012;
        result[2] += 0.0351493848857645;
        result[3] += 0.06502636203866433;
        result[4] += 0.1347393087287639;
        result[5] += 0.07498535442296426;
      } else {
        result[0] += 0.009803921568627453;
        result[1] += 0.965686274509804;
        result[2] += 0;
        result[3] += 0.012254901960784315;
        result[4] += 0.012254901960784315;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        result[0] += 0.009345794392523364;
        result[1] += 0;
        result[2] += 0.3878504672897196;
        result[3] += 0.45794392523364486;
        result[4] += 0.014018691588785047;
        result[5] += 0.1308411214953271;
      } else {
        result[0] += 0.03655913978494624;
        result[1] += 0.015053763440860216;
        result[2] += 0.8548387096774194;
        result[3] += 0.07204301075268817;
        result[4] += 0.007526881720430108;
        result[5] += 0.013978494623655914;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        result[0] += 0.008771929824561403;
        result[1] += 0.043859649122807015;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9166666666666666;
        result[5] += 0.03070175438596491;
      } else {
        result[0] += 0.024057738572574178;
        result[1] += 0.0056134723336006415;
        result[2] += 0.0136327185244587;
        result[3] += 0.14434643143544507;
        result[4] += 0.07377706495589414;
        result[5] += 0.7385725741780272;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9885057471264368;
        result[2] += 0;
        result[3] += 0.0022988505747126436;
        result[4] += 0.009195402298850575;
        result[5] += 0;
      } else {
        result[0] += 0.626461211477152;
        result[1] += 0.04782146652497343;
        result[2] += 0.04303931987247609;
        result[3] += 0.07917109458023379;
        result[4] += 0.0951115834218916;
        result[5] += 0.10839532412327312;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8372093023255814;
        result[4] += 0;
        result[5] += 0.16279069767441862;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.11764705882352941;
        result[3] += 0.4117647058823529;
        result[4] += 0;
        result[5] += 0.47058823529411764;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5957446808510638;
        result[3] += 0.30851063829787234;
        result[4] += 0;
        result[5] += 0.09574468085106383;
      } else {
        result[0] += 0.014772727272727272;
        result[1] += 0;
        result[2] += 0.9159090909090909;
        result[3] += 0.0625;
        result[4] += 0;
        result[5] += 0.006818181818181818;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)69.5) ) ) {
        result[0] += 0.008130081300813009;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8211382113821138;
        result[5] += 0.17073170731707318;
      } else {
        result[0] += 0.5136612021857923;
        result[1] += 0.04371584699453551;
        result[2] += 0;
        result[3] += 0.02732240437158469;
        result[4] += 0.360655737704918;
        result[5] += 0.05464480874316938;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
        result[0] += 0.0009354536950420954;
        result[1] += 0.0009354536950420954;
        result[2] += 0.0018709073900841909;
        result[3] += 0.0617399438727783;
        result[4] += 0.08699719363891488;
        result[5] += 0.8475210477081384;
      } else {
        result[0] += 0.006060606060606061;
        result[1] += 0.015151515151515152;
        result[2] += 0.048484848484848485;
        result[3] += 0.593939393939394;
        result[4] += 0.03636363636363636;
        result[5] += 0.3;
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)67.5) ) ) {
        result[0] += 0.01936619718309859;
        result[1] += 0.7711267605633803;
        result[2] += 0.02112676056338028;
        result[3] += 0.017605633802816902;
        result[4] += 0.16549295774647887;
        result[5] += 0.00528169014084507;
      } else {
        result[0] += 0.8118022328548644;
        result[1] += 0.03827751196172249;
        result[2] += 0.028708133971291867;
        result[3] += 0.030303030303030304;
        result[4] += 0.06220095693779904;
        result[5] += 0.028708133971291867;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)82.5) ) ) {
        result[0] += 0.08641975308641976;
        result[1] += 0.03703703703703704;
        result[2] += 0.4598765432098766;
        result[3] += 0.22530864197530867;
        result[4] += 0.0154320987654321;
        result[5] += 0.17592592592592596;
      } else {
        result[0] += 0.0011737089201877935;
        result[1] += 0;
        result[2] += 0.8943661971830986;
        result[3] += 0.09507042253521127;
        result[4] += 0;
        result[5] += 0.009389671361502348;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        result[0] += 0.009063444108761332;
        result[1] += 0.0785498489425982;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8459214501510575;
        result[5] += 0.0664652567975831;
      } else {
        result[0] += 0.05311973018549747;
        result[1] += 0.0016863406408094434;
        result[2] += 0.003372681281618887;
        result[3] += 0.15008431703204048;
        result[4] += 0.048060708263069137;
        result[5] += 0.7436762225969646;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)49.5) ) ) {
        result[0] += 0.056511056511056514;
        result[1] += 0.9213759213759214;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.022113022113022112;
        result[5] += 0;
      } else {
        result[0] += 0.6037514654161782;
        result[1] += 0.059788980070339975;
        result[2] += 0.032825322391559206;
        result[3] += 0.07620164126611957;
        result[4] += 0.12368112543962485;
        result[5] += 0.10375146541617819;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
        result[0] += 0.008928571428571428;
        result[1] += 0;
        result[2] += 0.32142857142857145;
        result[3] += 0.5;
        result[4] += 0.004464285714285714;
        result[5] += 0.16517857142857142;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.803921568627451;
        result[3] += 0.1568627450980392;
        result[4] += 0;
        result[5] += 0.0392156862745098;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)94.5) ) ) {
        result[0] += 0.04411764705882354;
        result[1] += 0;
        result[2] += 0.661764705882353;
        result[3] += 0.0735294117647059;
        result[4] += 0.029411764705882356;
        result[5] += 0.1911764705882353;
      } else {
        result[0] += 0.007481296758104738;
        result[1] += 0;
        result[2] += 0.9301745635910225;
        result[3] += 0.06234413965087282;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
        result[0] += 0.014218009478672985;
        result[1] += 0.023696682464454975;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9478672985781991;
        result[5] += 0.014218009478672985;
      } else {
        result[0] += 0;
        result[1] += 0.06060606060606061;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.5757575757575758;
        result[5] += 0.36363636363636365;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)67.5) ) ) {
        result[0] += 0.002421307506053269;
        result[1] += 0;
        result[2] += 0.0036319612590799033;
        result[3] += 0.031476997578692496;
        result[4] += 0.05690072639225181;
        result[5] += 0.9055690072639225;
      } else {
        result[0] += 0.1053864168618267;
        result[1] += 0.00936768149882904;
        result[2] += 0.0117096018735363;
        result[3] += 0.351288056206089;
        result[4] += 0.07259953161592506;
        result[5] += 0.4496487119437939;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        result[0] += 0.00718132854578097;
        result[1] += 0.8258527827648114;
        result[2] += 0.00718132854578097;
        result[3] += 0.00718132854578097;
        result[4] += 0.14542190305206462;
        result[5] += 0.00718132854578097;
      } else {
        result[0] += 0.7461103253182461;
        result[1] += 0.027581329561527583;
        result[2] += 0.024045261669024046;
        result[3] += 0.05586987270155587;
        result[4] += 0.08345120226308345;
        result[5] += 0.06294200848656294;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
        result[0] += 0.009771986970684038;
        result[1] += 0.029315960912052116;
        result[2] += 0.3485342019543974;
        result[3] += 0.2996742671009772;
        result[4] += 0.05537459283387622;
        result[5] += 0.25732899022801303;
      } else {
        result[0] += 0.03615604186489058;
        result[1] += 0;
        result[2] += 0.8801141769743102;
        result[3] += 0.07326355851569934;
        result[4] += 0;
        result[5] += 0.010466222645099905;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
        result[0] += 0.00909090909090909;
        result[1] += 0.04090909090909091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8909090909090909;
        result[5] += 0.05909090909090909;
      } else {
        result[0] += 0.029505582137161084;
        result[1] += 0.012759170653907496;
        result[2] += 0.015151515151515152;
        result[3] += 0.14274322169059012;
        result[4] += 0.08213716108452951;
        result[5] += 0.7177033492822966;
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6765983860955928;
        result[1] += 0.06517690875232775;
        result[2] += 0.024829298572315334;
        result[3] += 0.06579764121663563;
        result[4] += 0.11607697082557418;
        result[5] += 0.051520794537554315;
      } else {
        result[0] += 0.004987531172069825;
        result[1] += 0.9925187032418953;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.0024937655860349127;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)69.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.109375;
        result[3] += 0.09375;
        result[4] += 0.1875;
        result[5] += 0.609375;
      } else {
        result[0] += 0.041379310344827586;
        result[1] += 0.04827586206896552;
        result[2] += 0.08275862068965517;
        result[3] += 0.5310344827586206;
        result[4] += 0.013793103448275862;
        result[5] += 0.2827586206896552;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.2808988764044944;
        result[3] += 0.3707865168539326;
        result[4] += 0;
        result[5] += 0.34831460674157305;
      } else {
        result[0] += 0.04030710172744722;
        result[1] += 0.005758157389635317;
        result[2] += 0.8646833013435701;
        result[3] += 0.08253358925143954;
        result[4] += 0.0009596928982725527;
        result[5] += 0.005758157389635317;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)91.5) ) ) {
        result[0] += 0.004784688995215311;
        result[1] += 0.009569377990430622;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9617224880382775;
        result[5] += 0.023923444976076555;
      } else {
        result[0] += 0;
        result[1] += 0.38461538461538464;
        result[2] += 0;
        result[3] += 0.15384615384615385;
        result[4] += 0.07692307692307693;
        result[5] += 0.38461538461538464;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
        result[0] += 0.03946102021174206;
        result[1] += 0.0019249278152069298;
        result[2] += 0;
        result[3] += 0.05101058710298364;
        result[4] += 0.0712223291626564;
        result[5] += 0.836381135707411;
      } else {
        result[0] += 0;
        result[1] += 0.007662835249042146;
        result[2] += 0.026819923371647514;
        result[3] += 0.5785440613026821;
        result[4] += 0.03448275862068966;
        result[5] += 0.35249042145593873;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)93.5) ) ) {
        result[0] += 0;
        result[1] += 0.23529411764705882;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7529411764705882;
        result[5] += 0.011764705882352941;
      } else {
        result[0] += 0;
        result[1] += 0.9438669438669439;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.056133056133056136;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
        result[0] += 0.8264910921766073;
        result[1] += 0.020914020139426802;
        result[2] += 0.013942680092951201;
        result[3] += 0.026336173508907823;
        result[4] += 0.08133230054221534;
        result[5] += 0.030983733539891558;
      } else {
        result[0] += 0.053213545266067724;
        result[1] += 0.01243953006219765;
        result[2] += 0.6565307532826538;
        result[3] += 0.16447823082239116;
        result[4] += 0.014512785072563926;
        result[5] += 0.09882515549412578;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        result[0] += 0.01509433962264151;
        result[1] += 0.06037735849056604;
        result[2] += 0;
        result[3] += 0.011320754716981131;
        result[4] += 0.8452830188679246;
        result[5] += 0.06792452830188679;
      } else {
        result[0] += 0.06682389937106918;
        result[1] += 0.003930817610062893;
        result[2] += 0.008647798742138365;
        result[3] += 0.1540880503144654;
        result[4] += 0.06367924528301887;
        result[5] += 0.7028301886792453;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)104.5) ) ) {
        result[0] += 0.6229977116704806;
        result[1] += 0.04805491990846682;
        result[2] += 0.06922196796338673;
        result[3] += 0.06292906178489703;
        result[4] += 0.12013729977116705;
        result[5] += 0.07665903890160183;
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
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)99.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        result[0] += 0;
        result[1] += 0.02564102564102564;
        result[2] += 0.43162393162393164;
        result[3] += 0.33760683760683763;
        result[4] += 0.02564102564102564;
        result[5] += 0.1794871794871795;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.967741935483871;
        result[3] += 0.03225806451612903;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77.5) ) ) {
        result[0] += 0.5;
        result[1] += 0.25;
        result[2] += 0.16666666666666666;
        result[3] += 0;
        result[4] += 0.08333333333333333;
        result[5] += 0;
      } else {
        result[0] += 0.007416563658838072;
        result[1] += 0;
        result[2] += 0.9147095179233622;
        result[3] += 0.07292954264524104;
        result[4] += 0;
        result[5] += 0.004944375772558714;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.025;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9541666666666667;
        result[5] += 0.020833333333333332;
      } else {
        result[0] += 0.029339853300733496;
        result[1] += 0.019559902200488997;
        result[2] += 0.013039934800325998;
        result[3] += 0.14995925020374898;
        result[4] += 0.03667481662591687;
        result[5] += 0.7514262428687857;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        result[0] += 0.003787878787878788;
        result[1] += 0.884469696969697;
        result[2] += 0.005681818181818182;
        result[3] += 0;
        result[4] += 0.10606060606060606;
        result[5] += 0;
      } else {
        result[0] += 0.6475595913734393;
        result[1] += 0.021566401816118047;
        result[2] += 0.06867196367763904;
        result[3] += 0.08456299659477866;
        result[4] += 0.094211123723042;
        result[5] += 0.08342792281498297;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)42.5) ) ) {
        result[0] += 0;
        result[1] += 0.9090909090909091;
        result[2] += 0;
        result[3] += 0.09090909090909091;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.008695652173913044;
        result[1] += 0;
        result[2] += 0.3565217391304348;
        result[3] += 0.16521739130434782;
        result[4] += 0.06956521739130435;
        result[5] += 0.4;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
        result[0] += 0.020958083832335328;
        result[1] += 0;
        result[2] += 0.7245508982035929;
        result[3] += 0.2215568862275449;
        result[4] += 0;
        result[5] += 0.03293413173652695;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9671592775041051;
        result[3] += 0.029556650246305417;
        result[4] += 0;
        result[5] += 0.003284072249589491;
      }
    }
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
        result[0] += 0.009259259259259259;
        result[1] += 0.004629629629629629;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9259259259259259;
        result[5] += 0.06018518518518518;
      } else {
        result[0] += 0;
        result[1] += 0.9259259259259259;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.07407407407407407;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
        result[0] += 0.04756871035940803;
        result[1] += 0.009513742071881607;
        result[2] += 0;
        result[3] += 0.03276955602536998;
        result[4] += 0.049682875264270614;
        result[5] += 0.8604651162790697;
      } else {
        result[0] += 0;
        result[1] += 0.014534883720930232;
        result[2] += 0.0377906976744186;
        result[3] += 0.4680232558139535;
        result[4] += 0.014534883720930232;
        result[5] += 0.46511627906976744;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)104.5) ) ) {
        result[0] += 0.6356589147286822;
        result[1] += 0.04114490161001789;
        result[2] += 0.02802623732856291;
        result[3] += 0.05426356589147287;
        result[4] += 0.13893858079904592;
        result[5] += 0.10196779964221825;
      } else {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
        result[0] += 0.04225352112676056;
        result[1] += 0.08098591549295775;
        result[2] += 0.27816901408450706;
        result[3] += 0.397887323943662;
        result[4] += 0.035211267605633804;
        result[5] += 0.16549295774647887;
      } else {
        result[0] += 0.037433155080213894;
        result[1] += 0.0032085561497326195;
        result[2] += 0.8631016042780747;
        result[3] += 0.07807486631016042;
        result[4] += 0.00106951871657754;
        result[5] += 0.01711229946524064;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        result[0] += 0.010869565217391304;
        result[1] += 0.0036231884057971015;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9311594202898551;
        result[5] += 0.05434782608695652;
      } else {
        result[0] += 0.04916897506925208;
        result[1] += 0.0034626038781163434;
        result[2] += 0.012465373961218837;
        result[3] += 0.16689750692520774;
        result[4] += 0.04986149584487535;
        result[5] += 0.7181440443213296;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)104.5) ) ) {
        result[0] += 0.6318615751789977;
        result[1] += 0.06980906921241051;
        result[2] += 0.053102625298329355;
        result[3] += 0.06861575178997613;
        result[4] += 0.10978520286396182;
        result[5] += 0.06682577565632458;
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
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)70.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.07142857142857142;
        result[4] += 0;
        result[5] += 0.9285714285714286;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.358695652173913;
        result[3] += 0.5;
        result[4] += 0;
        result[5] += 0.14130434782608695;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        result[0] += 0.03237410071942447;
        result[1] += 0;
        result[2] += 0.7553956834532375;
        result[3] += 0.18705035971223025;
        result[4] += 0;
        result[5] += 0.025179856115107917;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.960960960960961;
        result[3] += 0.03753753753753754;
        result[4] += 0;
        result[5] += 0.0015015015015015015;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.05755395683453238;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9244604316546763;
        result[5] += 0.017985611510791366;
      } else {
        result[0] += 0.052370842179759375;
        result[1] += 0.0021231422505307855;
        result[2] += 0.01910828025477707;
        result[3] += 0.16985138004246284;
        result[4] += 0.06227883934890304;
        result[5] += 0.6942675159235668;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)58.5) ) ) {
        result[0] += 0.007889546351084813;
        result[1] += 0.8954635108481263;
        result[2] += 0.0019723865877712033;
        result[3] += 0.03155818540433925;
        result[4] += 0.0611439842209073;
        result[5] += 0.0019723865877712033;
      } else {
        result[0] += 0.6660401002506267;
        result[1] += 0.028822055137844613;
        result[2] += 0.04761904761904762;
        result[3] += 0.06704260651629074;
        result[4] += 0.08458646616541354;
        result[5] += 0.10588972431077695;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)87.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.15625;
        result[3] += 0.0625;
        result[4] += 0.0625;
        result[5] += 0.71875;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.49586776859504134;
        result[3] += 0.4214876033057851;
        result[4] += 0;
        result[5] += 0.08264462809917356;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)77) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.25;
        result[3] += 0.5;
        result[4] += 0;
        result[5] += 0.25;
      } else {
        result[0] += 0.008073817762399077;
        result[1] += 0.002306805074971165;
        result[2] += 0.9181084198385236;
        result[3] += 0.06228373702422145;
        result[4] += 0.002306805074971165;
        result[5] += 0.006920415224913495;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.003745318352059925;
        result[2] += 0.00749063670411985;
        result[3] += 0.03745318352059925;
        result[4] += 0.8576779026217228;
        result[5] += 0.09363295880149813;
      } else {
        result[0] += 0.034045922406967535;
        result[1] += 0.004750593824228029;
        result[2] += 0.0023752969121140144;
        result[3] += 0.15122723673792557;
        result[4] += 0.056215360253365;
        result[5] += 0.7513855898653998;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9732142857142857;
        result[2] += 0;
        result[3] += 0.008928571428571428;
        result[4] += 0.017857142857142856;
        result[5] += 0;
      } else {
        result[0] += 0.6355455568053994;
        result[1] += 0.04161979752530934;
        result[2] += 0.047244094488188976;
        result[3] += 0.07930258717660292;
        result[4] += 0.11698537682789652;
        result[5] += 0.07930258717660292;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.25274725274725274;
        result[3] += 0.5274725274725275;
        result[4] += 0;
        result[5] += 0.21978021978021978;
      } else {
        result[0] += 0.020202020202020204;
        result[1] += 0;
        result[2] += 0.7171717171717171;
        result[3] += 0.20202020202020202;
        result[4] += 0;
        result[5] += 0.06060606060606061;
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)69.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.16666666666666666;
        result[3] += 0.3333333333333333;
        result[4] += 0;
        result[5] += 0.5;
      } else {
        result[0] += 0.013729977116704806;
        result[1] += 0;
        result[2] += 0.9302059496567506;
        result[3] += 0.04691075514874143;
        result[4] += 0;
        result[5] += 0.009153318077803205;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
        result[0] += 0.007194244604316547;
        result[1] += 0.039568345323741004;
        result[2] += 0;
        result[3] += 0.046762589928057555;
        result[4] += 0.8561151079136691;
        result[5] += 0.050359712230215826;
      } else {
        result[0] += 0.03833605220228385;
        result[1] += 0.004893964110929853;
        result[2] += 0.0016313213703099511;
        result[3] += 0.16150081566068517;
        result[4] += 0.04567699836867863;
        result[5] += 0.7479608482871125;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)56.5) ) ) {
        result[0] += 0;
        result[1] += 0.924892703862661;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.07510729613733906;
        result[5] += 0;
      } else {
        result[0] += 0.6254180602006689;
        result[1] += 0.033444816053511704;
        result[2] += 0.061872909698996656;
        result[3] += 0.0802675585284281;
        result[4] += 0.11872909698996656;
        result[5] += 0.0802675585284281;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.29347826086956524;
        result[3] += 0.41304347826086957;
        result[4] += 0.021739130434782608;
        result[5] += 0.2717391304347826;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9130434782608695;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.08695652173913043;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
        result[0] += 0.032467532467532464;
        result[1] += 0;
        result[2] += 0.8051948051948052;
        result[3] += 0.1461038961038961;
        result[4] += 0;
        result[5] += 0.016233766233766232;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9671361502347418;
        result[3] += 0.025039123630672927;
        result[4] += 0;
        result[5] += 0.00782472613458529;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
        result[0] += 0.01948051948051948;
        result[1] += 0.003246753246753247;
        result[2] += 0.00974025974025974;
        result[3] += 0.003246753246753247;
        result[4] += 0.8928571428571429;
        result[5] += 0.07142857142857142;
      } else {
        result[0] += 0.05368589743589743;
        result[1] += 0.008012820512820512;
        result[2] += 0.00641025641025641;
        result[3] += 0.14903846153846154;
        result[4] += 0.04487179487179487;
        result[5] += 0.7379807692307693;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69.5) ) ) {
        result[0] += 0.00970873786407767;
        result[1] += 0.7572815533980584;
        result[2] += 0.008090614886731393;
        result[3] += 0.008090614886731393;
        result[4] += 0.20550161812297738;
        result[5] += 0.01132686084142395;
      } else {
        result[0] += 0.7650602409638555;
        result[1] += 0.02484939759036145;
        result[2] += 0.03990963855421687;
        result[3] += 0.05873493975903615;
        result[4] += 0.054216867469879526;
        result[5] += 0.057228915662650606;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
        result[0] += 0;
        result[1] += 0.01639344262295082;
        result[2] += 0.08743169398907104;
        result[3] += 0.3989071038251366;
        result[4] += 0.03825136612021858;
        result[5] += 0.45901639344262296;
      } else {
        result[0] += 0.0048543689320388345;
        result[1] += 0.009708737864077669;
        result[2] += 0.5728155339805825;
        result[3] += 0.2961165048543689;
        result[4] += 0;
        result[5] += 0.11650485436893204;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)91.5) ) ) {
        result[0] += 0.02985074626865672;
        result[1] += 0.11940298507462688;
        result[2] += 0.4477611940298508;
        result[3] += 0.10447761194029852;
        result[4] += 0.10447761194029852;
        result[5] += 0.1940298507462687;
      } else {
        result[0] += 0.021889400921658985;
        result[1] += 0;
        result[2] += 0.9043778801843319;
        result[3] += 0.07373271889400922;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        result[0] += 0.10632183908045977;
        result[1] += 0.05459770114942529;
        result[2] += 0.005747126436781609;
        result[3] += 0;
        result[4] += 0.7385057471264368;
        result[5] += 0.09482758620689655;
      } else {
        result[0] += 0.0025974025974025974;
        result[1] += 0.0008658008658008658;
        result[2] += 0.003463203463203463;
        result[3] += 0.14112554112554113;
        result[4] += 0.05627705627705628;
        result[5] += 0.7956709956709956;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)102.5) ) ) {
        result[0] += 0.6381880733944953;
        result[1] += 0.0470183486238532;
        result[2] += 0.028669724770642196;
        result[3] += 0.06594036697247704;
        result[4] += 0.11697247706422016;
        result[5] += 0.1032110091743119;
      } else {
        result[0] += 0.027210884353741496;
        result[1] += 0.9682539682539683;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.0045351473922902496;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)99.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.1346153846153846;
        result[3] += 0.6346153846153846;
        result[4] += 0.019230769230769232;
        result[5] += 0.21153846153846154;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7126436781609196;
        result[3] += 0.1839080459770115;
        result[4] += 0;
        result[5] += 0.10344827586206896;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)87.5) ) ) {
        result[0] += 0.022988505747126436;
        result[1] += 0;
        result[2] += 0.7724137931034483;
        result[3] += 0.16551724137931034;
        result[4] += 0.0022988505747126436;
        result[5] += 0.0367816091954023;
      } else {
        result[0] += 0.0078125;
        result[1] += 0;
        result[2] += 0.955078125;
        result[3] += 0.03515625;
        result[4] += 0;
        result[5] += 0.001953125;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.28110599078341014;
        result[1] += 0.03456221198156682;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.6152073732718893;
        result[5] += 0.06912442396313365;
      } else {
        result[0] += 0.012522361359570662;
        result[1] += 0.008944543828264758;
        result[2] += 0.0017889087656529517;
        result[3] += 0.09391771019677997;
        result[4] += 0.07155635062611806;
        result[5] += 0.8112701252236136;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
        result[0] += 0;
        result[1] += 0.9469026548672567;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.05309734513274336;
        result[5] += 0;
      } else {
        result[0] += 0.5943181818181819;
        result[1] += 0.023863636363636365;
        result[2] += 0.053409090909090906;
        result[3] += 0.13011363636363638;
        result[4] += 0.08181818181818182;
        result[5] += 0.11647727272727272;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.2054794520547945;
        result[3] += 0.6438356164383562;
        result[4] += 0;
        result[5] += 0.1506849315068493;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7111111111111111;
        result[3] += 0.23333333333333334;
        result[4] += 0;
        result[5] += 0.05555555555555555;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        result[0] += 0.030927835051546393;
        result[1] += 0;
        result[2] += 0.8109965635738832;
        result[3] += 0.13058419243986255;
        result[4] += 0;
        result[5] += 0.027491408934707903;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.962171052631579;
        result[3] += 0.03782894736842105;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        result[0] += 0.20246913580246914;
        result[1] += 0.04938271604938271;
        result[2] += 0.007407407407407408;
        result[3] += 0.0024691358024691358;
        result[4] += 0.6246913580246913;
        result[5] += 0.11358024691358025;
      } else {
        result[0] += 0.0015232292460015233;
        result[1] += 0.020563594821020565;
        result[2] += 0.00913937547600914;
        result[3] += 0.1782178217821782;
        result[4] += 0.07996953541507996;
        result[5] += 0.7105864432597105;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)58.5) ) ) {
        result[0] += 0;
        result[1] += 0.9119496855345912;
        result[2] += 0.0020964360587002098;
        result[3] += 0.012578616352201259;
        result[4] += 0.05241090146750524;
        result[5] += 0.020964360587002098;
      } else {
        result[0] += 0.6503856041131104;
        result[1] += 0.03213367609254498;
        result[2] += 0.06940874035989716;
        result[3] += 0.07904884318766066;
        result[4] += 0.08547557840616965;
        result[5] += 0.08354755784061696;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.19047619047619047;
        result[3] += 0.2976190476190476;
        result[4] += 0.03571428571428571;
        result[5] += 0.47619047619047616;
      } else {
        result[0] += 0.1724137931034483;
        result[1] += 0.02586206896551724;
        result[2] += 0.5431034482758621;
        result[3] += 0.16379310344827586;
        result[4] += 0.02586206896551724;
        result[5] += 0.06896551724137931;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)72) ) ) {
        result[0] += 0.1;
        result[1] += 0.7;
        result[2] += 0.2;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.004624277456647399;
        result[1] += 0;
        result[2] += 0.9098265895953758;
        result[3] += 0.07283236994219654;
        result[4] += 0;
        result[5] += 0.012716763005780347;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        result[0] += 0.1416184971098266;
        result[1] += 0.07514450867052024;
        result[2] += 0;
        result[3] += 0.008670520231213872;
        result[4] += 0.6473988439306358;
        result[5] += 0.12716763005780346;
      } else {
        result[0] += 0.0008613264427217916;
        result[1] += 0.004306632213608958;
        result[2] += 0.026701119724375538;
        result[3] += 0.15417743324720068;
        result[4] += 0.05254091300602928;
        result[5] += 0.7614125753660638;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0.9537815126050421;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.046218487394957986;
        result[5] += 0;
      } else {
        result[0] += 0.6119977985690699;
        result[1] += 0.030820033021463952;
        result[2] += 0.06274078150798018;
        result[3] += 0.10071546505228399;
        result[4] += 0.11612548156301596;
        result[5] += 0.07760044028618603;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)102.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.08823529411764706;
        result[3] += 0.47058823529411764;
        result[4] += 0.029411764705882353;
        result[5] += 0.4117647058823529;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 1;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        result[0] += 0;
        result[1] += 0.006211180124223602;
        result[2] += 0.5838509316770186;
        result[3] += 0.3416149068322981;
        result[4] += 0.024844720496894408;
        result[5] += 0.043478260869565216;
      } else {
        result[0] += 0.011097410604192353;
        result[1] += 0.0012330456226880393;
        result[2] += 0.9247842170160294;
        result[3] += 0.04808877928483352;
        result[4] += 0.0024660912453760785;
        result[5] += 0.012330456226880391;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        result[0] += 0.003937007874015748;
        result[1] += 0.051181102362204724;
        result[2] += 0;
        result[3] += 0.003937007874015748;
        result[4] += 0.8937007874015748;
        result[5] += 0.047244094488188976;
      } else {
        result[0] += 0.027303754266211604;
        result[1] += 0.013651877133105802;
        result[2] += 0.00938566552901024;
        result[3] += 0.1348122866894198;
        result[4] += 0.07337883959044368;
        result[5] += 0.7414675767918089;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6203090507726269;
        result[1] += 0.04746136865342163;
        result[2] += 0.04304635761589404;
        result[3] += 0.08112582781456953;
        result[4] += 0.10485651214128035;
        result[5] += 0.1032008830022075;
      } else {
        result[0] += 0.010638297872340425;
        result[1] += 0.9893617021276596;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)80.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.19230769230769232;
        result[3] += 0.4076923076923077;
        result[4] += 0;
        result[5] += 0.4;
      } else {
        result[0] += 0.07339449541284404;
        result[1] += 0.06422018348623854;
        result[2] += 0.5688073394495413;
        result[3] += 0.05504587155963303;
        result[4] += 0.08256880733944955;
        result[5] += 0.1559633027522936;
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7532467532467533;
        result[3] += 0.21212121212121213;
        result[4] += 0;
        result[5] += 0.03463203463203463;
      } else {
        result[0] += 0.0030864197530864196;
        result[1] += 0;
        result[2] += 0.9459876543209876;
        result[3] += 0.043209876543209874;
        result[4] += 0;
        result[5] += 0.007716049382716049;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
        result[0] += 0.0038022813688212928;
        result[1] += 0.0038022813688212928;
        result[2] += 0.0038022813688212928;
        result[3] += 0.0076045627376425855;
        result[4] += 0.9049429657794676;
        result[5] += 0.07604562737642585;
      } else {
        result[0] += 0.034454470877768664;
        result[1] += 0.01394585726004922;
        result[2] += 0.01066447908121411;
        result[3] += 0.10418375717801477;
        result[4] += 0.04019688269073011;
        result[5] += 0.7965545529122231;
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6575498575498575;
        result[1] += 0.05584045584045584;
        result[2] += 0.02905982905982906;
        result[3] += 0.06951566951566951;
        result[4] += 0.1225071225071225;
        result[5] += 0.06552706552706553;
      } else {
        result[0] += 0.015748031496062992;
        result[1] += 0.931758530183727;
        result[2] += 0.026246719160104987;
        result[3] += 0.005249343832020997;
        result[4] += 0.02099737532808399;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)71.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.027777777777777776;
        result[3] += 0.1111111111111111;
        result[4] += 0.16666666666666666;
        result[5] += 0.6944444444444444;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.21428571428571427;
        result[3] += 0.5844155844155844;
        result[4] += 0.01948051948051948;
        result[5] += 0.18181818181818182;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)94.5) ) ) {
        result[0] += 0.018691588785046728;
        result[1] += 0.018691588785046728;
        result[2] += 0.4672897196261682;
        result[3] += 0.102803738317757;
        result[4] += 0.06542056074766354;
        result[5] += 0.32710280373831774;
      } else {
        result[0] += 0.019758507135016465;
        result[1] += 0;
        result[2] += 0.8858397365532382;
        result[3] += 0.08122941822173436;
        result[4] += 0.0021953896816684962;
        result[5] += 0.010976948408342482;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9428571428571428;
        result[5] += 0.05714285714285714;
      } else {
        result[0] += 0;
        result[1] += 0.85;
        result[2] += 0;
        result[3] += 0.05;
        result[4] += 0.1;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
        result[0] += 0.04580896686159844;
        result[1] += 0.0009746588693957114;
        result[2] += 0;
        result[3] += 0.0594541910331384;
        result[4] += 0.05458089668615984;
        result[5] += 0.8391812865497076;
      } else {
        result[0] += 0.027777777777777776;
        result[1] += 0;
        result[2] += 0.023148148148148147;
        result[3] += 0.5833333333333334;
        result[4] += 0.013888888888888888;
        result[5] += 0.35185185185185186;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        result[0] += 0.0022271714922048997;
        result[1] += 0.9599109131403119;
        result[2] += 0;
        result[3] += 0.0022271714922048997;
        result[4] += 0.035634743875278395;
        result[5] += 0;
      } else {
        result[0] += 0.7061093247588425;
        result[1] += 0.03987138263665595;
        result[2] += 0.026366559485530548;
        result[3] += 0.05659163987138264;
        result[4] += 0.13054662379421222;
        result[5] += 0.04051446945337621;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
        result[0] += 0.027777777777777776;
        result[1] += 0.022222222222222223;
        result[2] += 0.11666666666666667;
        result[3] += 0.36666666666666664;
        result[4] += 0.03333333333333333;
        result[5] += 0.43333333333333335;
      } else {
        result[0] += 0.03876651982378855;
        result[1] += 0.007929515418502205;
        result[2] += 0.8352422907488988;
        result[3] += 0.08810572687224671;
        result[4] += 0.0017621145374449342;
        result[5] += 0.028193832599118947;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        result[0] += 0.00784313725490196;
        result[1] += 0.058823529411764705;
        result[2] += 0;
        result[3] += 0.011764705882352941;
        result[4] += 0.8666666666666667;
        result[5] += 0.054901960784313725;
      } else {
        result[0] += 0.031096563011456628;
        result[1] += 0.01309328968903437;
        result[2] += 0.006546644844517185;
        result[3] += 0.1497545008183306;
        result[4] += 0.038461538461538464;
        result[5] += 0.7610474631751227;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
        result[0] += 0;
        result[1] += 0.8976833976833977;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.10231660231660232;
        result[5] += 0;
      } else {
        result[0] += 0.6784643071385723;
        result[1] += 0.015596880623875225;
        result[2] += 0.04619076184763048;
        result[3] += 0.07738452309538092;
        result[4] += 0.09538092381523695;
        result[5] += 0.08698260347930414;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)89.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.05128205128205128;
        result[3] += 0.07692307692307693;
        result[4] += 0.10256410256410256;
        result[5] += 0.7692307692307693;
      } else {
        result[0] += 0;
        result[1] += 0.07291666666666667;
        result[2] += 0.10416666666666667;
        result[3] += 0.5416666666666666;
        result[4] += 0.07291666666666667;
        result[5] += 0.20833333333333334;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        result[0] += 0.027190332326283987;
        result[1] += 0.0030211480362537764;
        result[2] += 0.6706948640483383;
        result[3] += 0.23564954682779457;
        result[4] += 0.0030211480362537764;
        result[5] += 0.06042296072507553;
      } else {
        result[0] += 0.0071633237822349575;
        result[1] += 0;
        result[2] += 0.9426934097421203;
        result[3] += 0.04871060171919771;
        result[4] += 0;
        result[5] += 0.0014326647564469914;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
        result[0] += 0.01762114537444934;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8854625550660793;
        result[5] += 0.09691629955947137;
      } else {
        result[0] += 0.04804560260586319;
        result[1] += 0.025244299674267102;
        result[2] += 0.004885993485342019;
        result[3] += 0.1270358306188925;
        result[4] += 0.0496742671009772;
        result[5] += 0.745114006514658;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)58) ) ) {
        result[0] += 0;
        result[1] += 0.9119373776908023;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.08806262230919765;
        result[5] += 0;
      } else {
        result[0] += 0.6823457544288332;
        result[1] += 0.031154551007941348;
        result[2] += 0.02015882712278558;
        result[3] += 0.057422113622480134;
        result[4] += 0.12034208918753815;
        result[5] += 0.08857666463042149;
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)80.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.11965811965811966;
        result[3] += 0.6752136752136753;
        result[4] += 0;
        result[5] += 0.20512820512820512;
      } else {
        result[0] += 0.022988505747126436;
        result[1] += 0;
        result[2] += 0.5632183908045977;
        result[3] += 0.3103448275862069;
        result[4] += 0.034482758620689655;
        result[5] += 0.06896551724137931;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)94.5) ) ) {
        result[0] += 0.009708737864077669;
        result[1] += 0;
        result[2] += 0.5242718446601942;
        result[3] += 0.27184466019417475;
        result[4] += 0;
        result[5] += 0.1941747572815534;
      } else {
        result[0] += 0.018558951965065504;
        result[1] += 0;
        result[2] += 0.8962882096069869;
        result[3] += 0.07423580786026202;
        result[4] += 0.001091703056768559;
        result[5] += 0.009825327510917031;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        result[0] += 0.16612377850162866;
        result[1] += 0.009771986970684038;
        result[2] += 0;
        result[3] += 0.013029315960912053;
        result[4] += 0.6970684039087948;
        result[5] += 0.11400651465798045;
      } else {
        result[0] += 0.0008382229673093043;
        result[1] += 0.004191114836546521;
        result[2] += 0.004191114836546521;
        result[3] += 0.14333612740989102;
        result[4] += 0.06454316848281642;
        result[5] += 0.7829002514668902;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.001841620626151013;
        result[1] += 0.8324125230202578;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.16574585635359115;
        result[5] += 0;
      } else {
        result[0] += 0.720444154147616;
        result[1] += 0.024167210973220117;
        result[2] += 0.038536903984323974;
        result[3] += 0.07576747224036577;
        result[4] += 0.06727629000653168;
        result[5] += 0.07380796864794252;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
        result[0] += 0.0038910505836575876;
        result[1] += 0.01556420233463035;
        result[2] += 0.16342412451361868;
        result[3] += 0.45136186770428016;
        result[4] += 0.0622568093385214;
        result[5] += 0.3035019455252918;
      } else {
        result[0] += 0.011904761904761904;
        result[1] += 0.047619047619047616;
        result[2] += 0.7142857142857143;
        result[3] += 0.13095238095238096;
        result[4] += 0;
        result[5] += 0.09523809523809523;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
        result[0] += 0.04189944134078212;
        result[1] += 0;
        result[2] += 0.7541899441340782;
        result[3] += 0.16201117318435754;
        result[4] += 0;
        result[5] += 0.04189944134078212;
      } else {
        result[0] += 0.007233273056057866;
        result[1] += 0;
        result[2] += 0.9566003616636528;
        result[3] += 0.0325497287522604;
        result[4] += 0;
        result[5] += 0.003616636528028933;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)62.5) ) ) {
        result[0] += 0.008658008658008658;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.012987012987012988;
        result[4] += 0.8658008658008658;
        result[5] += 0.11255411255411256;
      } else {
        result[0] += 0.05657492354740061;
        result[1] += 0.00382262996941896;
        result[2] += 0.005351681957186544;
        result[3] += 0.14908256880733944;
        result[4] += 0.07568807339449542;
        result[5] += 0.709480122324159;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)65) ) ) {
        result[0] += 0.003289473684210526;
        result[1] += 0.8256578947368421;
        result[2] += 0.006578947368421052;
        result[3] += 0;
        result[4] += 0.16447368421052633;
        result[5] += 0;
      } else {
        result[0] += 0.7255689424364125;
        result[1] += 0.024765729585006696;
        result[2] += 0.04953145917001339;
        result[3] += 0.07161981258366802;
        result[4] += 0.06894243641231594;
        result[5] += 0.05957161981258367;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.02;
        result[4] += 0.2;
        result[5] += 0.78;
      } else {
        result[0] += 0.12440191387559808;
        result[1] += 0.0430622009569378;
        result[2] += 0.3684210526315789;
        result[3] += 0.2966507177033493;
        result[4] += 0.009569377990430622;
        result[5] += 0.15789473684210525;
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
        result[0] += 0.012711864406779662;
        result[1] += 0;
        result[2] += 0.7330508474576272;
        result[3] += 0.2033898305084746;
        result[4] += 0;
        result[5] += 0.05084745762711865;
      } else {
        result[0] += 0.010144927536231883;
        result[1] += 0;
        result[2] += 0.9492753623188406;
        result[3] += 0.04057971014492753;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.05423728813559322;
        result[2] += 0.003389830508474576;
        result[3] += 0.01694915254237288;
        result[4] += 0.888135593220339;
        result[5] += 0.03728813559322034;
      } else {
        result[0] += 0.05800865800865801;
        result[1] += 0;
        result[2] += 0.0017316017316017316;
        result[3] += 0.1316017316017316;
        result[4] += 0.06060606060606061;
        result[5] += 0.7480519480519481;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        result[0] += 0.00546448087431694;
        result[1] += 0.8670309653916212;
        result[2] += 0.0018214936247723133;
        result[3] += 0.00546448087431694;
        result[4] += 0.11839708561020036;
        result[5] += 0.0018214936247723133;
      } else {
        result[0] += 0.7044718081659106;
        result[1] += 0.028515878159429683;
        result[2] += 0.04018146467919637;
        result[3] += 0.050550874918988985;
        result[4] += 0.07906675307841866;
        result[5] += 0.09721322099805574;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0.04316546762589928;
        result[2] += 0.07913669064748201;
        result[3] += 0.6258992805755396;
        result[4] += 0.03597122302158273;
        result[5] += 0.2158273381294964;
      } else {
        result[0] += 0;
        result[1] += 0.04054054054054054;
        result[2] += 0.22972972972972974;
        result[3] += 0.1891891891891892;
        result[4] += 0.05405405405405406;
        result[5] += 0.4864864864864865;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
        result[0] += 0.3023255813953488;
        result[1] += 0.023255813953488372;
        result[2] += 0.4418604651162791;
        result[3] += 0.10465116279069768;
        result[4] += 0;
        result[5] += 0.12790697674418605;
      } else {
        result[0] += 0.0040609137055837565;
        result[1] += 0.0040609137055837565;
        result[2] += 0.8954314720812183;
        result[3] += 0.08629441624365482;
        result[4] += 0;
        result[5] += 0.01015228426395939;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9950738916256158;
        result[5] += 0.0049261083743842365;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.1111111111111111;
        result[3] += 0.022222222222222223;
        result[4] += 0.4666666666666667;
        result[5] += 0.4;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)86.5) ) ) {
        result[0] += 0.008820286659316428;
        result[1] += 0.002205071664829107;
        result[2] += 0;
        result[3] += 0.047409040793825796;
        result[4] += 0.05622932745314223;
        result[5] += 0.8853362734288864;
      } else {
        result[0] += 0.04787234042553192;
        result[1] += 0.01595744680851064;
        result[2] += 0.0053191489361702135;
        result[3] += 0.38031914893617025;
        result[4] += 0.05851063829787235;
        result[5] += 0.49202127659574474;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
        result[0] += 0.005597014925373134;
        result[1] += 0.8507462686567164;
        result[2] += 0.0018656716417910447;
        result[3] += 0.0018656716417910447;
        result[4] += 0.13619402985074627;
        result[5] += 0.0037313432835820895;
      } else {
        result[0] += 0.7124352331606217;
        result[1] += 0.042746113989637305;
        result[2] += 0.027849740932642485;
        result[3] += 0.06541450777202072;
        result[4] += 0.08808290155440414;
        result[5] += 0.06347150259067358;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
        result[0] += 0.10175438596491228;
        result[1] += 0.031578947368421054;
        result[2] += 0.45964912280701753;
        result[3] += 0.2578947368421053;
        result[4] += 0.028070175438596492;
        result[5] += 0.12105263157894737;
      } else {
        result[0] += 0.001550387596899225;
        result[1] += 0;
        result[2] += 0.9503875968992249;
        result[3] += 0.04651162790697675;
        result[4] += 0;
        result[5] += 0.001550387596899225;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)95) ) ) {
        result[0] += 0.008108108108108109;
        result[1] += 0.0918918918918919;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8432432432432433;
        result[5] += 0.05675675675675676;
      } else {
        result[0] += 0.0019230769230769232;
        result[1] += 0.948076923076923;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.04807692307692308;
        result[5] += 0.0019230769230769232;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
        result[0] += 0.03418054338299737;
        result[1] += 0.006134969325153374;
        result[2] += 0.0043821209465381246;
        result[3] += 0.1481156879929886;
        result[4] += 0.04820333041191937;
        result[5] += 0.7589833479404031;
      } else {
        result[0] += 0.7034617896799478;
        result[1] += 0.024167210973220117;
        result[2] += 0.03527106466361855;
        result[3] += 0.0868713259307642;
        result[4] += 0.07511430437622468;
        result[5] += 0.07511430437622468;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)101.5) ) ) {
        result[0] += 0.00558659217877095;
        result[1] += 0.0223463687150838;
        result[2] += 0.12290502793296089;
        result[3] += 0.6368715083798883;
        result[4] += 0.0223463687150838;
        result[5] += 0.18994413407821228;
      } else {
        result[0] += 0.04972375690607733;
        result[1] += 0.016574585635359112;
        result[2] += 0.5580110497237568;
        result[3] += 0.07734806629834252;
        result[4] += 0.07182320441988949;
        result[5] += 0.22651933701657453;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
        result[0] += 0.04176334106728538;
        result[1] += 0;
        result[2] += 0.7842227378190255;
        result[3] += 0.15777262180974477;
        result[4] += 0.002320185614849188;
        result[5] += 0.013921113689095127;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.985200845665962;
        result[3] += 0.014799154334038054;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)90.5) ) ) {
        result[0] += 0.012106537530266344;
        result[1] += 0.08958837772397095;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8547215496368039;
        result[5] += 0.043583535108958835;
      } else {
        result[0] += 0;
        result[1] += 0.9815195071868583;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.018480492813141684;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
        result[0] += 0.037267080745341616;
        result[1] += 0.00354924578527063;
        result[2] += 0.0044365572315882874;
        result[3] += 0.15173025732031944;
        result[4] += 0.04525288376220053;
        result[5] += 0.7577639751552795;
      } else {
        result[0] += 0.6651216685979142;
        result[1] += 0.016222479721900347;
        result[2] += 0.05214368482039398;
        result[3] += 0.08111239860950174;
        result[4] += 0.08053302433371959;
        result[5] += 0.10486674391657011;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.16417910447761194;
        result[3] += 0.7014925373134329;
        result[4] += 0;
        result[5] += 0.13432835820895522;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.711864406779661;
        result[3] += 0.13559322033898305;
        result[4] += 0;
        result[5] += 0.15254237288135594;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
        result[0] += 0.018867924528301886;
        result[1] += 0;
        result[2] += 0.7216981132075472;
        result[3] += 0.19339622641509435;
        result[4] += 0;
        result[5] += 0.0660377358490566;
      } else {
        result[0] += 0.0163265306122449;
        result[1] += 0;
        result[2] += 0.9360544217687075;
        result[3] += 0.03945578231292517;
        result[4] += 0.004081632653061225;
        result[5] += 0.004081632653061225;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.007575757575757577;
        result[1] += 0;
        result[2] += 0.02651515151515152;
        result[3] += 0.011363636363636366;
        result[4] += 0.9053030303030304;
        result[5] += 0.04924242424242425;
      } else {
        result[0] += 0.03076923076923077;
        result[1] += 0.004048582995951417;
        result[2] += 0.004858299595141701;
        result[3] += 0.151417004048583;
        result[4] += 0.04939271255060729;
        result[5] += 0.7595141700404858;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        result[0] += 0;
        result[1] += 0.8516483516483516;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.1446886446886447;
        result[5] += 0.003663003663003663;
      } else {
        result[0] += 0.6674584323040381;
        result[1] += 0.023752969121140145;
        result[2] += 0.054631828978622336;
        result[3] += 0.09026128266033255;
        result[4] += 0.07482185273159146;
        result[5] += 0.08907363420427555;
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)104.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        result[0] += 0.005405405405405406;
        result[1] += 0;
        result[2] += 0.43783783783783786;
        result[3] += 0.3945945945945946;
        result[4] += 0;
        result[5] += 0.16216216216216217;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.8272727272727273;
        result[3] += 0.13636363636363635;
        result[4] += 0;
        result[5] += 0.03636363636363636;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)88.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.3333333333333333;
        result[5] += 0.6666666666666666;
      } else {
        result[0] += 0.006257822277847309;
        result[1] += 0;
        result[2] += 0.934918648310388;
        result[3] += 0.05506883604505632;
        result[4] += 0;
        result[5] += 0.0037546933667083854;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.0037735849056603774;
        result[1] += 0.06037735849056604;
        result[2] += 0.0037735849056603774;
        result[3] += 0;
        result[4] += 0.909433962264151;
        result[5] += 0.022641509433962263;
      } else {
        result[0] += 0.02997502081598668;
        result[1] += 0.004995836802664446;
        result[2] += 0.01665278934221482;
        result[3] += 0.1398834304746045;
        result[4] += 0.06078268109908409;
        result[5] += 0.7477102414654455;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9741935483870968;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.025806451612903226;
        result[5] += 0;
      } else {
        result[0] += 0.5975541967759866;
        result[1] += 0.033351862145636464;
        result[2] += 0.05391884380211229;
        result[3] += 0.09282934963868816;
        result[4] += 0.11839911061700945;
        result[5] += 0.10394663702056699;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.2054794520547945;
        result[3] += 0.1506849315068493;
        result[4] += 0.0547945205479452;
        result[5] += 0.589041095890411;
      } else {
        result[0] += 0.10526315789473684;
        result[1] += 0.12280701754385964;
        result[2] += 0.3157894736842105;
        result[3] += 0.3508771929824561;
        result[4] += 0.017543859649122806;
        result[5] += 0.08771929824561403;
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)85.5) ) ) {
        result[0] += 0.010582010582010581;
        result[1] += 0;
        result[2] += 0.7777777777777778;
        result[3] += 0.19047619047619047;
        result[4] += 0;
        result[5] += 0.021164021164021163;
      } else {
        result[0] += 0.011904761904761906;
        result[1] += 0;
        result[2] += 0.9523809523809524;
        result[3] += 0.030612244897959186;
        result[4] += 0;
        result[5] += 0.005102040816326531;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        result[0] += 0.006514657980456026;
        result[1] += 0.006514657980456026;
        result[2] += 0;
        result[3] += 0.03908794788273615;
        result[4] += 0.8501628664495114;
        result[5] += 0.09771986970684039;
      } else {
        result[0] += 0.0481283422459893;
        result[1] += 0.0030557677616501145;
        result[2] += 0.0053475935828877;
        result[3] += 0.16195569136745608;
        result[4] += 0.061879297173414824;
        result[5] += 0.719633307868602;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        result[0] += 0;
        result[1] += 0.8576512455516014;
        result[2] += 0.0071174377224199285;
        result[3] += 0.0035587188612099642;
        result[4] += 0.13167259786476868;
        result[5] += 0;
      } else {
        result[0] += 0.7003154574132492;
        result[1] += 0.03659305993690852;
        result[2] += 0.06435331230283911;
        result[3] += 0.08391167192429022;
        result[4] += 0.05615141955835962;
        result[5] += 0.05867507886435331;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
        result[0] += 0.05263157894736842;
        result[1] += 0.042105263157894736;
        result[2] += 0.23157894736842105;
        result[3] += 0.3894736842105263;
        result[4] += 0.010526315789473684;
        result[5] += 0.2736842105263158;
      } else {
        result[0] += 0.05396825396825397;
        result[1] += 0;
        result[2] += 0.6857142857142857;
        result[3] += 0.18095238095238095;
        result[4] += 0;
        result[5] += 0.07936507936507936;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.5;
        result[4] += 0;
        result[5] += 0.5;
      } else {
        result[0] += 0.0030816640986132517;
        result[1] += 0.0015408320493066258;
        result[2] += 0.9476117103235748;
        result[3] += 0.044684129429892146;
        result[4] += 0;
        result[5] += 0.0030816640986132517;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        result[0] += 0.10434782608695652;
        result[1] += 0.014492753623188406;
        result[2] += 0.017391304347826087;
        result[3] += 0;
        result[4] += 0.7681159420289855;
        result[5] += 0.09565217391304348;
      } else {
        result[0] += 0;
        result[1] += 0.012955465587044534;
        result[2] += 0.012955465587044534;
        result[3] += 0.15951417004048582;
        result[4] += 0.042105263157894736;
        result[5] += 0.7724696356275303;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        result[0] += 0.0037735849056603774;
        result[1] += 0.8566037735849057;
        result[2] += 0;
        result[3] += 0.0037735849056603774;
        result[4] += 0.1339622641509434;
        result[5] += 0.0018867924528301887;
      } else {
        result[0] += 0.6372721928277484;
        result[1] += 0.02586713697824809;
        result[2] += 0.06760728982951206;
        result[3] += 0.0975896531452087;
        result[4] += 0.08348030570252793;
        result[5] += 0.08818342151675485;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.23711340206185566;
        result[3] += 0.44329896907216493;
        result[4] += 0.05154639175257732;
        result[5] += 0.26804123711340205;
      } else {
        result[0] += 0.01762114537444934;
        result[1] += 0;
        result[2] += 0.7929515418502202;
        result[3] += 0.16299559471365638;
        result[4] += 0.004405286343612335;
        result[5] += 0.022026431718061675;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
        result[0] += 0;
        result[1] += 0.3333333333333333;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.6666666666666666;
      } else {
        result[0] += 0.00583941605839416;
        result[1] += 0;
        result[2] += 0.9372262773722628;
        result[3] += 0.04817518248175182;
        result[4] += 0;
        result[5] += 0.008759124087591242;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.0411522633744856;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8930041152263375;
        result[5] += 0.06584362139917696;
      } else {
        result[0] += 0.027953110910730387;
        result[1] += 0.0063119927862939585;
        result[2] += 0.0009017132551848512;
        result[3] += 0.1442741208295762;
        result[4] += 0.07844905320108206;
        result[5] += 0.7421100090171325;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)58.5) ) ) {
        result[0] += 0.01642710472279261;
        result[1] += 0.8521560574948666;
        result[2] += 0;
        result[3] += 0.018480492813141684;
        result[4] += 0.10882956878850103;
        result[5] += 0.004106776180698152;
      } else {
        result[0] += 0.6383954154727794;
        result[1] += 0.030372492836676222;
        result[2] += 0.04641833810888253;
        result[3] += 0.08080229226361033;
        result[4] += 0.08309455587392552;
        result[5] += 0.12091690544412609;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        result[0] += 0.009389671361502348;
        result[1] += 0.023474178403755867;
        result[2] += 0.1784037558685446;
        result[3] += 0.3004694835680751;
        result[4] += 0.10328638497652583;
        result[5] += 0.38497652582159625;
      } else {
        result[0] += 0.051282051282051266;
        result[1] += 0.025641025641025633;
        result[2] += 0.641025641025641;
        result[3] += 0.15384615384615383;
        result[4] += 0.025641025641025633;
        result[5] += 0.10256410256410253;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.0040774719673802255;
        result[1] += 0;
        result[2] += 0.925586136595311;
        result[3] += 0.06727828746177371;
        result[4] += 0;
        result[5] += 0.0030581039755351687;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9658119658119658;
        result[5] += 0.03418803418803419;
      } else {
        result[0] += 0.036605657237936774;
        result[1] += 0.005823627287853577;
        result[2] += 0.0024958402662229617;
        result[3] += 0.1605657237936772;
        result[4] += 0.04658901830282862;
        result[5] += 0.7479201331114809;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6338341680578742;
        result[1] += 0.07679465776293823;
        result[2] += 0.04062326099053979;
        result[3] += 0.06844741235392321;
        result[4] += 0.10795770728992765;
        result[5] += 0.07234279354479689;
      } else {
        result[0] += 0.015544041450777202;
        result[1] += 0.9766839378238342;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.007772020725388601;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)104.5) ) ) {
        result[0] += 0;
        result[1] += 0.12605042016806722;
        result[2] += 0.05042016806722689;
        result[3] += 0.4957983193277311;
        result[4] += 0.03361344537815126;
        result[5] += 0.29411764705882354;
      } else {
        result[0] += 0.014705882352941178;
        result[1] += 0;
        result[2] += 0.5000000000000001;
        result[3] += 0.10294117647058824;
        result[4] += 0.04411764705882354;
        result[5] += 0.33823529411764713;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
        result[0] += 0.004694835680751174;
        result[1] += 0;
        result[2] += 0.6619718309859155;
        result[3] += 0.25821596244131456;
        result[4] += 0;
        result[5] += 0.07511737089201878;
      } else {
        result[0] += 0.012391573729863693;
        result[1] += 0;
        result[2] += 0.9330855018587361;
        result[3] += 0.04708798017348203;
        result[4] += 0;
        result[5] += 0.007434944237918215;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
        result[0] += 0.006825938566552901;
        result[1] += 0;
        result[2] += 0.017064846416382253;
        result[3] += 0;
        result[4] += 0.8464163822525598;
        result[5] += 0.1296928327645051;
      } else {
        result[0] += 0.03753127606338615;
        result[1] += 0.02418682235195997;
        result[2] += 0.02418682235195997;
        result[3] += 0.16013344453711426;
        result[4] += 0.0316930775646372;
        result[5] += 0.7222685571309424;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        result[0] += 0.0035460992907801418;
        result[1] += 0.7943262411347518;
        result[2] += 0;
        result[3] += 0.012411347517730497;
        result[4] += 0.18439716312056736;
        result[5] += 0.005319148936170213;
      } else {
        result[0] += 0.6557377049180328;
        result[1] += 0.02656868287167892;
        result[2] += 0.061616732617297915;
        result[3] += 0.09157716223855288;
        result[4] += 0.07292255511588469;
        result[5] += 0.09157716223855288;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
        result[0] += 0;
        result[1] += 0.016666666666666666;
        result[2] += 0;
        result[3] += 0.18333333333333332;
        result[4] += 0.15;
        result[5] += 0.65;
      } else {
        result[0] += 0.025;
        result[1] += 0;
        result[2] += 0.575;
        result[3] += 0.225;
        result[4] += 0;
        result[5] += 0.175;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.2647058823529412;
        result[3] += 0.6176470588235294;
        result[4] += 0;
        result[5] += 0.11764705882352941;
      } else {
        result[0] += 0.004613610149942331;
        result[1] += 0;
        result[2] += 0.9100346020761246;
        result[3] += 0.0738177623990773;
        result[4] += 0.0023068050749711654;
        result[5] += 0.009227220299884662;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.0823045267489712;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8559670781893004;
        result[5] += 0.06172839506172839;
      } else {
        result[0] += 0.03577235772357724;
        result[1] += 0.0024390243902439024;
        result[2] += 0.005691056910569106;
        result[3] += 0.14715447154471545;
        result[4] += 0.06016260162601626;
        result[5] += 0.748780487804878;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)53.5) ) ) {
        result[0] += 0.0040650406504065045;
        result[1] += 0.9491869918699187;
        result[2] += 0;
        result[3] += 0.008130081300813009;
        result[4] += 0.03861788617886179;
        result[5] += 0;
      } else {
        result[0] += 0.6383981154299175;
        result[1] += 0.044169611307420496;
        result[2] += 0.030624263839811542;
        result[3] += 0.06890459363957598;
        result[4] += 0.1254416961130742;
        result[5] += 0.09246171967020024;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)80.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.3333333333333333;
        result[3] += 0.4032258064516129;
        result[4] += 0;
        result[5] += 0.26344086021505375;
      } else {
        result[0] += 0.0683453237410072;
        result[1] += 0;
        result[2] += 0.7517985611510791;
        result[3] += 0.1474820143884892;
        result[4] += 0;
        result[5] += 0.03237410071942446;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.3333333333333333;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.6666666666666666;
      } else {
        result[0] += 0.0014367816091954023;
        result[1] += 0;
        result[2] += 0.9640804597701149;
        result[3] += 0.031609195402298854;
        result[4] += 0;
        result[5] += 0.0028735632183908046;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        result[0] += 0.2106537530266344;
        result[1] += 0.026634382566585957;
        result[2] += 0;
        result[3] += 0.012106537530266344;
        result[4] += 0.6634382566585957;
        result[5] += 0.08716707021791767;
      } else {
        result[0] += 0;
        result[1] += 0.007073386383731211;
        result[2] += 0.004420866489832007;
        result[3] += 0.10167992926613616;
        result[4] += 0.08841732979664015;
        result[5] += 0.7984084880636605;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        result[0] += 0.006342494714587738;
        result[1] += 0.959830866807611;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.03382663847780127;
        result[5] += 0;
      } else {
        result[0] += 0.5851125216387767;
        result[1] += 0.026543566070398154;
        result[2] += 0.06924408540103866;
        result[3] += 0.15060588574725908;
        result[4] += 0.061165608770917486;
        result[5] += 0.10732833237160992;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)77) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.02127659574468085;
        result[3] += 0.2127659574468085;
        result[4] += 0.1276595744680851;
        result[5] += 0.6382978723404256;
      } else {
        result[0] += 0.05172413793103448;
        result[1] += 0.05172413793103448;
        result[2] += 0.1896551724137931;
        result[3] += 0.43103448275862066;
        result[4] += 0.017241379310344827;
        result[5] += 0.25862068965517243;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
        result[0] += 0.05958549222797927;
        result[1] += 0.02849740932642487;
        result[2] += 0.6917098445595855;
        result[3] += 0.17875647668393782;
        result[4] += 0;
        result[5] += 0.04145077720207254;
      } else {
        result[0] += 0.003418803418803419;
        result[1] += 0;
        result[2] += 0.9572649572649573;
        result[3] += 0.039316239316239315;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.0576923076923077;
        result[2] += 0.004807692307692309;
        result[3] += 0.009615384615384618;
        result[4] += 0.9134615384615385;
        result[5] += 0.014423076923076926;
      } else {
        result[0] += 0.029635901778154106;
        result[1] += 0.015241320914479255;
        result[2] += 0.002540220152413209;
        result[3] += 0.15918712955122777;
        result[4] += 0.05165114309906858;
        result[5] += 0.7417442845046571;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9772727272727273;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.022727272727272728;
        result[5] += 0;
      } else {
        result[0] += 0.575207468879668;
        result[1] += 0.026452282157676348;
        result[2] += 0.07728215767634855;
        result[3] += 0.09232365145228216;
        result[4] += 0.13900414937759337;
        result[5] += 0.08973029045643154;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)86) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.06451612903225806;
        result[4] += 0.06451612903225806;
        result[5] += 0.8709677419354839;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.2;
        result[3] += 0.2714285714285714;
        result[4] += 0.02857142857142857;
        result[5] += 0.5;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)83.5) ) ) {
        result[0] += 0.11538461538461539;
        result[1] += 0.34615384615384615;
        result[2] += 0.19230769230769232;
        result[3] += 0.038461538461538464;
        result[4] += 0;
        result[5] += 0.3076923076923077;
      } else {
        result[0] += 0.011135857461024499;
        result[1] += 0;
        result[2] += 0.89086859688196;
        result[3] += 0.08685968819599109;
        result[4] += 0;
        result[5] += 0.011135857461024499;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
        result[0] += 0.1783783783783784;
        result[1] += 0.010810810810810811;
        result[2] += 0.010810810810810811;
        result[3] += 0.021621621621621623;
        result[4] += 0.654054054054054;
        result[5] += 0.12432432432432433;
      } else {
        result[0] += 0.0030935808197989174;
        result[1] += 0.0038669760247486465;
        result[2] += 0.0030935808197989174;
        result[3] += 0.17246713070378963;
        result[4] += 0.0843000773395205;
        result[5] += 0.7331786542923434;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        result[0] += 0.626491646778043;
        result[1] += 0.057875894988066834;
        result[2] += 0.0554892601431981;
        result[3] += 0.0668257756563246;
        result[4] += 0.11634844868735085;
        result[5] += 0.07696897374701672;
      } else {
        result[0] += 0.007125890736342043;
        result[1] += 0.9928741092636579;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.02127659574468085;
        result[3] += 0.6170212765957447;
        result[4] += 0;
        result[5] += 0.3617021276595745;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6444444444444445;
        result[3] += 0.34444444444444444;
        result[4] += 0;
        result[5] += 0.011111111111111112;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        result[0] += 0.018867924528301886;
        result[1] += 0;
        result[2] += 0.7962264150943397;
        result[3] += 0.15849056603773584;
        result[4] += 0.0037735849056603774;
        result[5] += 0.022641509433962263;
      } else {
        result[0] += 0.004518072289156626;
        result[1] += 0;
        result[2] += 0.9683734939759037;
        result[3] += 0.024096385542168676;
        result[4] += 0;
        result[5] += 0.0030120481927710845;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
        result[0] += 0.003745318352059925;
        result[1] += 0.026217228464419477;
        result[2] += 0;
        result[3] += 0.018726591760299626;
        result[4] += 0.9101123595505618;
        result[5] += 0.04119850187265917;
      } else {
        result[0] += 0.007984031936127742;
        result[1] += 0.9221556886227543;
        result[2] += 0.0019960079840319355;
        result[3] += 0.005988023952095807;
        result[4] += 0.05788423153692614;
        result[5] += 0.003992015968063871;
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)88.5) ) ) {
        result[0] += 0.0907488986784141;
        result[1] += 0.006167400881057269;
        result[2] += 0.00881057268722467;
        result[3] += 0.05726872246696035;
        result[4] += 0.07577092511013216;
        result[5] += 0.7612334801762115;
      } else {
        result[0] += 0.6490147783251232;
        result[1] += 0.033251231527093604;
        result[2] += 0.023399014778325126;
        result[3] += 0.11884236453201971;
        result[4] += 0.07142857142857144;
        result[5] += 0.104064039408867;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)98.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.08053691275167785;
        result[3] += 0.5234899328859061;
        result[4] += 0.020134228187919462;
        result[5] += 0.37583892617449666;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5043478260869565;
        result[3] += 0.1826086956521739;
        result[4] += 0.09565217391304348;
        result[5] += 0.21739130434782608;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)87.5) ) ) {
        result[0] += 0.033613445378151266;
        result[1] += 0.02521008403361345;
        result[2] += 0.6932773109243698;
        result[3] += 0.19747899159663868;
        result[4] += 0.010504201680672271;
        result[5] += 0.039915966386554626;
      } else {
        result[0] += 0.001788908765652952;
        result[1] += 0;
        result[2] += 0.9409660107334527;
        result[3] += 0.042933810375670844;
        result[4] += 0.001788908765652952;
        result[5] += 0.012522361359570664;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        result[0] += 0.0078125;
        result[1] += 0.08984375;
        result[2] += 0;
        result[3] += 0.0234375;
        result[4] += 0.82421875;
        result[5] += 0.0546875;
      } else {
        result[0] += 0.0539568345323741;
        result[1] += 0.0017985611510791368;
        result[2] += 0.0035971223021582736;
        result[3] += 0.1393884892086331;
        result[4] += 0.06744604316546762;
        result[5] += 0.7338129496402878;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9908256880733946;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.009174311926605505;
        result[5] += 0;
      } else {
        result[0] += 0.6387921022067363;
        result[1] += 0.04006968641114982;
        result[2] += 0.03716608594657375;
        result[3] += 0.06678281068524972;
        result[4] += 0.11788617886178862;
        result[5] += 0.09930313588850175;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)88) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.07317073170731707;
        result[3] += 0;
        result[4] += 0.17073170731707318;
        result[5] += 0.7560975609756098;
      } else {
        result[0] += 0.008097165991902834;
        result[1] += 0.04048582995951417;
        result[2] += 0.26720647773279355;
        result[3] += 0.43724696356275305;
        result[4] += 0.032388663967611336;
        result[5] += 0.2145748987854251;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
        result[0] += 0.2558139534883721;
        result[1] += 0;
        result[2] += 0.4883720930232558;
        result[3] += 0.16279069767441862;
        result[4] += 0;
        result[5] += 0.09302325581395349;
      } else {
        result[0] += 0.0041279669762641896;
        result[1] += 0;
        result[2] += 0.9019607843137255;
        result[3] += 0.0804953560371517;
        result[4] += 0;
        result[5] += 0.013415892672858616;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        result[0] += 0.0036900369003690036;
        result[1] += 0.05166051660516605;
        result[2] += 0;
        result[3] += 0.04797047970479705;
        result[4] += 0.8044280442804428;
        result[5] += 0.09225092250922509;
      } else {
        result[0] += 0.049886621315192746;
        result[1] += 0.0022675736961451248;
        result[2] += 0.0015117157974300832;
        result[3] += 0.1473922902494331;
        result[4] += 0.061224489795918366;
        result[5] += 0.7377173091458806;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)57.5) ) ) {
        result[0] += 0;
        result[1] += 0.9326315789473685;
        result[2] += 0.006315789473684211;
        result[3] += 0;
        result[4] += 0.05894736842105264;
        result[5] += 0.0021052631578947372;
      } else {
        result[0] += 0.6642111724984653;
        result[1] += 0.030079803560466543;
        result[2] += 0.06998158379373849;
        result[3] += 0.07427869858809086;
        result[4] += 0.10251688152240639;
        result[5] += 0.058931860036832415;
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
        result[0] += 0.026143790849673196;
        result[1] += 0.09150326797385619;
        result[2] += 0.2745098039215686;
        result[3] += 0.326797385620915;
        result[4] += 0.05228758169934639;
        result[5] += 0.22875816993464046;
      } else {
        result[0] += 0.037940379403794036;
        result[1] += 0;
        result[2] += 0.7371273712737128;
        result[3] += 0.1978319783197832;
        result[4] += 0;
        result[5] += 0.02710027100271003;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)98) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 1;
      } else {
        result[0] += 0.0033167495854063023;
        result[1] += 0;
        result[2] += 0.9618573797678276;
        result[3] += 0.03482587064676618;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)95) ) ) {
        result[0] += 0.012987012987012988;
        result[1] += 0.008658008658008658;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9307359307359307;
        result[5] += 0.047619047619047616;
      } else {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)65.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.030390738060781478;
        result[4] += 0.03183791606367583;
        result[5] += 0.9377713458755427;
      } else {
        result[0] += 0.0673076923076923;
        result[1] += 0.019230769230769232;
        result[2] += 0.02564102564102564;
        result[3] += 0.30128205128205127;
        result[4] += 0.07051282051282051;
        result[5] += 0.5160256410256411;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)56.5) ) ) {
        result[0] += 0;
        result[1] += 0.9523809523809523;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.047619047619047616;
        result[5] += 0;
      } else {
        result[0] += 0.71419185282523;
        result[1] += 0.02759526938239159;
        result[2] += 0.012483574244415242;
        result[3] += 0.059789750328515114;
        result[4] += 0.1202365308804205;
        result[5] += 0.0657030223390276;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0.011406844106463879;
        result[2] += 0.26996197718631176;
        result[3] += 0.4068441064638783;
        result[4] += 0.011406844106463879;
        result[5] += 0.30038022813688214;
      } else {
        result[0] += 0.033299697275479316;
        result[1] += 0;
        result[2] += 0.8869828456104945;
        result[3] += 0.06357214934409687;
        result[4] += 0.0020181634712411706;
        result[5] += 0.014127144298688193;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.003816793893129771;
        result[1] += 0.06870229007633588;
        result[2] += 0;
        result[3] += 0.003816793893129771;
        result[4] += 0.8893129770992366;
        result[5] += 0.03435114503816794;
      } else {
        result[0] += 0.03279938977879481;
        result[1] += 0.0015255530129672007;
        result[2] += 0.0038138825324180014;
        result[3] += 0.18001525553012968;
        result[4] += 0.04500381388253242;
        result[5] += 0.7368421052631579;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9584295612009238;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.04157043879907621;
        result[5] += 0;
      } else {
        result[0] += 0.6179966044142615;
        result[1] += 0.03848330503678552;
        result[2] += 0.06677985285795135;
        result[3] += 0.09224674589700058;
        result[4] += 0.12733446519524622;
        result[5] += 0.05715902659875496;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
        result[0] += 0.00909090909090909;
        result[1] += 0.05454545454545454;
        result[2] += 0.17272727272727273;
        result[3] += 0.38181818181818183;
        result[4] += 0.03636363636363636;
        result[5] += 0.34545454545454546;
      } else {
        result[0] += 0.24705882352941178;
        result[1] += 0.023529411764705882;
        result[2] += 0.6235294117647059;
        result[3] += 0.10588235294117647;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6701030927835051;
        result[3] += 0.26804123711340205;
        result[4] += 0;
        result[5] += 0.061855670103092786;
      } else {
        result[0] += 0.00657030223390276;
        result[1] += 0;
        result[2] += 0.9264126149802892;
        result[3] += 0.0630749014454665;
        result[4] += 0;
        result[5] += 0.003942181340341656;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
        result[0] += 0.007067137809187279;
        result[1] += 0.06007067137809187;
        result[2] += 0;
        result[3] += 0.03180212014134275;
        result[4] += 0.8445229681978799;
        result[5] += 0.05653710247349823;
      } else {
        result[0] += 0.06611570247933884;
        result[1] += 0.002253944402704733;
        result[2] += 0.0015026296018031556;
        result[3] += 0.15326821938392185;
        result[4] += 0.0608564988730278;
        result[5] += 0.7160030052592036;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59) ) ) {
        result[0] += 0;
        result[1] += 0.9227722772277228;
        result[2] += 0;
        result[3] += 0.0019801980198019802;
        result[4] += 0.07326732673267326;
        result[5] += 0.0019801980198019802;
      } else {
        result[0] += 0.6327142001198323;
        result[1] += 0.035949670461354104;
        result[2] += 0.1012582384661474;
        result[3] += 0.07789095266626722;
        result[4] += 0.08148591971240264;
        result[5] += 0.07070101857399641;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.029411764705882353;
        result[3] += 0;
        result[4] += 0.029411764705882353;
        result[5] += 0.9411764705882353;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.22727272727272727;
        result[3] += 0.5;
        result[4] += 0;
        result[5] += 0.2727272727272727;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)95.5) ) ) {
        result[0] += 0.020833333333333332;
        result[1] += 0.010416666666666666;
        result[2] += 0.5520833333333334;
        result[3] += 0.19791666666666666;
        result[4] += 0.11458333333333333;
        result[5] += 0.10416666666666667;
      } else {
        result[0] += 0.010688836104513063;
        result[1] += 0;
        result[2] += 0.9251781472684085;
        result[3] += 0.060570071258907364;
        result[4] += 0;
        result[5] += 0.0035629453681710215;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.31798245614035087;
        result[1] += 0.021929824561403508;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.5964912280701754;
        result[5] += 0.06359649122807018;
      } else {
        result[0] += 0.006211180124223602;
        result[1] += 0.005323868677905945;
        result[2] += 0.0044365572315882874;
        result[3] += 0.11180124223602485;
        result[4] += 0.050576752440106475;
        result[5] += 0.8216503992901508;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6516089108910892;
        result[1] += 0.04331683168316832;
        result[2] += 0.05878712871287129;
        result[3] += 0.10272277227722773;
        result[4] += 0.07301980198019803;
        result[5] += 0.07054455445544555;
      } else {
        result[0] += 0.014457831325301205;
        result[1] += 0.9855421686746988;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
        result[0] += 0.038461538461538464;
        result[1] += 0;
        result[2] += 0.15384615384615385;
        result[3] += 0;
        result[4] += 0.19230769230769232;
        result[5] += 0.6153846153846154;
      } else {
        result[0] += 0.0196078431372549;
        result[1] += 0;
        result[2] += 0.3202614379084967;
        result[3] += 0.45751633986928103;
        result[4] += 0.0196078431372549;
        result[5] += 0.1830065359477124;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)75.5) ) ) {
        result[0] += 0.2682926829268293;
        result[1] += 0.21951219512195122;
        result[2] += 0.17073170731707318;
        result[3] += 0.12195121951219512;
        result[4] += 0;
        result[5] += 0.21951219512195122;
      } else {
        result[0] += 0.005175983436853002;
        result[1] += 0;
        result[2] += 0.8861283643892339;
        result[3] += 0.09006211180124224;
        result[4] += 0.0010351966873706005;
        result[5] += 0.017598343685300208;
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)83.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.9976689976689976;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.002331002331002331;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        result[0] += 0.45813953488372094;
        result[1] += 0.07441860465116279;
        result[2] += 0.00813953488372093;
        result[3] += 0;
        result[4] += 0.4046511627906977;
        result[5] += 0.05465116279069768;
      } else {
        result[0] += 0.06147986942328618;
        result[1] += 0.027747551686615888;
        result[2] += 0.030467899891186073;
        result[3] += 0.20620239390642003;
        result[4] += 0.0941240478781284;
        result[5] += 0.5799782372143635;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)82.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.9728;
        result[1] += 0;
        result[2] += 0.016;
        result[3] += 0.0032;
        result[4] += 0.008;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)85.5) ) ) {
        result[0] += 0.052109181141439205;
        result[1] += 0;
        result[2] += 0.6923076923076923;
        result[3] += 0.21588089330024815;
        result[4] += 0;
        result[5] += 0.03970223325062035;
      } else {
        result[0] += 0.014992503748125939;
        result[1] += 0;
        result[2] += 0.9415292353823089;
        result[3] += 0.040479760119940034;
        result[4] += 0;
        result[5] += 0.0029985007496251877;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.008403361344537815;
        result[3] += 0.008403361344537815;
        result[4] += 0.8949579831932774;
        result[5] += 0.08823529411764706;
      } else {
        result[0] += 0.027280477408354646;
        result[1] += 0.02557544757033248;
        result[2] += 0.0017050298380221654;
        result[3] += 0.15004262574595056;
        result[4] += 0.05115089514066496;
        result[5] += 0.7442455242966752;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9698924731182795;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.030107526881720432;
        result[5] += 0;
      } else {
        result[0] += 0.5854978354978355;
        result[1] += 0.02813852813852814;
        result[2] += 0.06764069264069264;
        result[3] += 0.08333333333333333;
        result[4] += 0.13582251082251082;
        result[5] += 0.09956709956709957;
      }
    }
  } else {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
        result[0] += 0.02197802197802198;
        result[1] += 0.054945054945054944;
        result[2] += 0.06593406593406594;
        result[3] += 0.27472527472527475;
        result[4] += 0.10989010989010989;
        result[5] += 0.4725274725274725;
      } else {
        result[0] += 0.03947368421052631;
        result[1] += 0;
        result[2] += 0.513157894736842;
        result[3] += 0.38157894736842096;
        result[4] += 0;
        result[5] += 0.06578947368421051;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0.02298850574712644;
        result[1] += 0.0574712643678161;
        result[2] += 0.48275862068965525;
        result[3] += 0.2183908045977012;
        result[4] += 0.02298850574712644;
        result[5] += 0.19540229885057475;
      } else {
        result[0] += 0.02830188679245283;
        result[1] += 0;
        result[2] += 0.9209905660377359;
        result[3] += 0.05070754716981132;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        result[0] += 0.09763313609467456;
        result[1] += 0.01775147928994083;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7633136094674556;
        result[5] += 0.12130177514792899;
      } else {
        result[0] += 0.001597444089456869;
        result[1] += 0.003194888178913738;
        result[2] += 0.001597444089456869;
        result[3] += 0.16613418530351437;
        result[4] += 0.04073482428115016;
        result[5] += 0.786741214057508;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        result[0] += 0.002183406113537118;
        result[1] += 0.9759825327510917;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.021834061135371178;
        result[5] += 0;
      } else {
        result[0] += 0.6108882521489972;
        result[1] += 0.035530085959885396;
        result[2] += 0.07106017191977079;
        result[3] += 0.08767908309455588;
        result[4] += 0.11575931232091692;
        result[5] += 0.07908309455587394;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)57.5) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.04838709677419355;
        result[1] += 0;
        result[2] += 0.24193548387096775;
        result[3] += 0.20967741935483872;
        result[4] += 0.03225806451612903;
        result[5] += 0.46774193548387094;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
        result[0] += 0.00847457627118644;
        result[1] += 0;
        result[2] += 0.7259887005649718;
        result[3] += 0.2231638418079096;
        result[4] += 0;
        result[5] += 0.0423728813559322;
      } else {
        result[0] += 0.003305785123966942;
        result[1] += 0;
        result[2] += 0.9454545454545454;
        result[3] += 0.049586776859504134;
        result[4] += 0;
        result[5] += 0.001652892561983471;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
        result[0] += 0.007142857142857143;
        result[1] += 0.06428571428571428;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8464285714285714;
        result[5] += 0.08214285714285714;
      } else {
        result[0] += 0.05877742946708464;
        result[1] += 0.004702194357366771;
        result[2] += 0.008620689655172414;
        result[3] += 0.14184952978056425;
        result[4] += 0.07053291536050156;
        result[5] += 0.7155172413793104;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.865234375;
        result[2] += 0.005859375;
        result[3] += 0.001953125;
        result[4] += 0.115234375;
        result[5] += 0.01171875;
      } else {
        result[0] += 0.7216699801192844;
        result[1] += 0.03114645460569914;
        result[2] += 0.015241882041086815;
        result[3] += 0.047713717693836984;
        result[4] += 0.07952286282306165;
        result[5] += 0.10470510271703116;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.12650602409638553;
        result[3] += 0.6265060240963856;
        result[4] += 0;
        result[5] += 0.2469879518072289;
      } else {
        result[0] += 0;
        result[1] += 0.014598540145985401;
        result[2] += 0.5328467153284672;
        result[3] += 0.2846715328467153;
        result[4] += 0;
        result[5] += 0.1678832116788321;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
        result[0] += 0.17808219178082194;
        result[1] += 0;
        result[2] += 0.5753424657534247;
        result[3] += 0.08219178082191782;
        result[4] += 0.027397260273972605;
        result[5] += 0.13698630136986303;
      } else {
        result[0] += 0.013745704467353953;
        result[1] += 0;
        result[2] += 0.9095074455899199;
        result[3] += 0.06643757159221078;
        result[4] += 0.0011454753722794963;
        result[5] += 0.00916380297823597;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.07462686567164178;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8955223880597015;
        result[5] += 0.029850746268656716;
      } else {
        result[0] += 0.05856832971800434;
        result[1] += 0.004338394793926247;
        result[2] += 0.007953723788864787;
        result[3] += 0.16847433116413593;
        result[4] += 0.08098336948662328;
        result[5] += 0.6796818510484454;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        result[0] += 0.001996007984031936;
        result[1] += 0.8902195608782435;
        result[2] += 0;
        result[3] += 0.001996007984031936;
        result[4] += 0.09580838323353294;
        result[5] += 0.00998003992015968;
      } else {
        result[0] += 0.6832694763729247;
        result[1] += 0.031928480204342274;
        result[2] += 0.040229885057471264;
        result[3] += 0.06577266922094509;
        result[4] += 0.07407407407407407;
        result[5] += 0.10472541507024266;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.15625;
        result[3] += 0.671875;
        result[4] += 0;
        result[5] += 0.171875;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5769230769230769;
        result[3] += 0.11538461538461539;
        result[4] += 0;
        result[5] += 0.3076923076923077;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
        result[0] += 0.018617021276595747;
        result[1] += 0;
        result[2] += 0.7632978723404257;
        result[3] += 0.1648936170212766;
        result[4] += 0.0026595744680851068;
        result[5] += 0.050531914893617025;
      } else {
        result[0] += 0.009345794392523366;
        result[1] += 0;
        result[2] += 0.9563862928348911;
        result[3] += 0.03271028037383178;
        result[4] += 0;
        result[5] += 0.0015576323987538943;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.011267605633802818;
        result[1] += 0.05352112676056338;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8732394366197183;
        result[5] += 0.061971830985915494;
      } else {
        result[0] += 0.10124223602484472;
        result[1] += 0.004347826086956522;
        result[2] += 0.031677018633540374;
        result[3] += 0.19440993788819877;
        result[4] += 0.049689440993788817;
        result[5] += 0.6186335403726708;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)57) ) ) {
        result[0] += 0.006802721088435374;
        result[1] += 0.9455782312925171;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.047619047619047616;
        result[5] += 0;
      } else {
        result[0] += 0.7179856115107913;
        result[1] += 0.050359712230215826;
        result[2] += 0.0618705035971223;
        result[3] += 0.051798561151079135;
        result[4] += 0.08129496402877698;
        result[5] += 0.03669064748201439;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.02;
        result[3] += 0.14;
        result[4] += 0.06;
        result[5] += 0.78;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.47619047619047616;
        result[3] += 0.2619047619047619;
        result[4] += 0;
        result[5] += 0.2619047619047619;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85.5) ) ) {
        result[0] += 0.03146853146853147;
        result[1] += 0.03496503496503497;
        result[2] += 0.6888111888111889;
        result[3] += 0.18181818181818182;
        result[4] += 0;
        result[5] += 0.06293706293706294;
      } else {
        result[0] += 0.004601226993865031;
        result[1] += 0;
        result[2] += 0.9539877300613497;
        result[3] += 0.03680981595092025;
        result[4] += 0;
        result[5] += 0.004601226993865031;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63) ) ) {
        result[0] += 0;
        result[1] += 0.037383177570093455;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9439252336448598;
        result[5] += 0.018691588785046728;
      } else {
        result[0] += 0.07142857142857142;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.21428571428571427;
        result[5] += 0.7142857142857143;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)67.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0011792452830188679;
        result[3] += 0.0625;
        result[4] += 0.05070754716981132;
        result[5] += 0.8856132075471698;
      } else {
        result[0] += 0.1223175965665236;
        result[1] += 0.02145922746781116;
        result[2] += 0.012875536480686695;
        result[3] += 0.34763948497854075;
        result[4] += 0.04935622317596566;
        result[5] += 0.44635193133047213;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)104.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
        result[0] += 0.6465909090909091;
        result[1] += 0.058522727272727275;
        result[2] += 0.044886363636363634;
        result[3] += 0.07102272727272728;
        result[4] += 0.11704545454545455;
        result[5] += 0.061931818181818185;
      } else {
        result[0] += 0.020499108734402853;
        result[1] += 0.004456327985739751;
        result[2] += 0.7932263814616756;
        result[3] += 0.11764705882352941;
        result[4] += 0.011586452762923352;
        result[5] += 0.05258467023172905;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
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
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        result[0] += 0.008695652173913044;
        result[1] += 0.06956521739130435;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9;
        result[5] += 0.021739130434782608;
      } else {
        result[0] += 0.04095004095004095;
        result[1] += 0.004914004914004914;
        result[2] += 0.000819000819000819;
        result[3] += 0.1547911547911548;
        result[4] += 0.04832104832104832;
        result[5] += 0.7502047502047502;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        result[0] += 0.001858736059479554;
        result[1] += 0.8568773234200745;
        result[2] += 0.007434944237918216;
        result[3] += 0.001858736059479554;
        result[4] += 0.12639405204460968;
        result[5] += 0.005576208178438662;
      } else {
        result[0] += 0.6601466992665037;
        result[1] += 0.035452322738386305;
        result[2] += 0.06051344743276284;
        result[3] += 0.08740831295843521;
        result[4] += 0.097799511002445;
        result[5] += 0.05867970660146699;
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)99.5) ) ) {
        result[0] += 0.015384615384615385;
        result[1] += 0.06923076923076923;
        result[2] += 0.06153846153846154;
        result[3] += 0.3230769230769231;
        result[4] += 0.05384615384615385;
        result[5] += 0.47692307692307695;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.8085106382978723;
        result[3] += 0.10638297872340426;
        result[4] += 0;
        result[5] += 0.0851063829787234;
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.037037037037037035;
        result[3] += 0.2962962962962963;
        result[4] += 0;
        result[5] += 0.6666666666666666;
      } else {
        result[0] += 0.0160481444332999;
        result[1] += 0.0020060180541624875;
        result[2] += 0.8856569709127382;
        result[3] += 0.08726178535606821;
        result[4] += 0;
        result[5] += 0.009027081243731194;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        result[0] += 0.28599221789883267;
        result[1] += 0.04474708171206226;
        result[2] += 0.0019455252918287938;
        result[3] += 0.0311284046692607;
        result[4] += 0.5233463035019456;
        result[5] += 0.11284046692607004;
      } else {
        result[0] += 0.01494661921708185;
        result[1] += 0.002135231316725979;
        result[2] += 0.014234875444839857;
        result[3] += 0.21281138790035586;
        result[4] += 0.0797153024911032;
        result[5] += 0.6761565836298933;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)56.5) ) ) {
        result[0] += 0.002336448598130841;
        result[1] += 0.955607476635514;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.04205607476635514;
        result[5] += 0;
      } else {
        result[0] += 0.7208966015907448;
        result[1] += 0.028199566160520606;
        result[2] += 0.05712219812002892;
        result[3] += 0.0368763557483731;
        result[4] += 0.10267534345625452;
        result[5] += 0.05422993492407809;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.125;
        result[3] += 0.6964285714285714;
        result[4] += 0.03571428571428571;
        result[5] += 0.14285714285714285;
      } else {
        result[0] += 0.034013605442176874;
        result[1] += 0;
        result[2] += 0.5782312925170068;
        result[3] += 0.30612244897959184;
        result[4] += 0;
        result[5] += 0.08163265306122448;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.15384615384615385;
        result[3] += 0.38461538461538464;
        result[4] += 0;
        result[5] += 0.46153846153846156;
      } else {
        result[0] += 0.009090909090909092;
        result[1] += 0;
        result[2] += 0.9204545454545455;
        result[3] += 0.05795454545454546;
        result[4] += 0;
        result[5] += 0.012500000000000002;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        result[0] += 0.13312693498452013;
        result[1] += 0.030959752321981424;
        result[2] += 0.009287925696594427;
        result[3] += 0;
        result[4] += 0.6996904024767802;
        result[5] += 0.12693498452012383;
      } else {
        result[0] += 0.002827521206409048;
        result[1] += 0.003770028275212064;
        result[2] += 0.011310084825636193;
        result[3] += 0.1423185673892554;
        result[4] += 0.06220546654099906;
        result[5] += 0.7775683317624882;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)59.5) ) ) {
        result[0] += 0.0022271714922048997;
        result[1] += 0.89086859688196;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.10690423162583519;
        result[5] += 0;
      } else {
        result[0] += 0.6551724137931034;
        result[1] += 0.02863822326125073;
        result[2] += 0.058445353594389245;
        result[3] += 0.07071887784921099;
        result[4] += 0.08883693746347165;
        result[5] += 0.09818819403857393;
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        result[0] += 0.06818181818181818;
        result[1] += 0.03636363636363636;
        result[2] += 0.12272727272727273;
        result[3] += 0.3181818181818182;
        result[4] += 0.09090909090909091;
        result[5] += 0.36363636363636365;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.8571428571428571;
        result[3] += 0.09523809523809523;
        result[4] += 0;
        result[5] += 0.047619047619047616;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)74.5) ) ) {
        result[0] += 0.6538461538461539;
        result[1] += 0;
        result[2] += 0.34615384615384615;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.002066115702479339;
        result[1] += 0.0010330578512396695;
        result[2] += 0.8739669421487604;
        result[3] += 0.11363636363636363;
        result[4] += 0;
        result[5] += 0.009297520661157025;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.10150375939849623;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8345864661654135;
        result[5] += 0.06390977443609022;
      } else {
        result[0] += 0.03751914241960184;
        result[1] += 0.006125574272588055;
        result[2] += 0.002297090352220521;
        result[3] += 0.1562021439509954;
        result[4] += 0.05206738131699847;
        result[5] += 0.7457886676875957;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9323467230443975;
        result[2] += 0;
        result[3] += 0.016913319238900635;
        result[4] += 0.0507399577167019;
        result[5] += 0;
      } else {
        result[0] += 0.651780325890163;
        result[1] += 0.030175015087507542;
        result[2] += 0.036813518406759206;
        result[3] += 0.06940253470126735;
        result[4] += 0.12492456246228123;
        result[5] += 0.08690404345202173;
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)105) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.13;
        result[3] += 0.66;
        result[4] += 0;
        result[5] += 0.21;
      } else {
        result[0] += 0.15;
        result[1] += 0;
        result[2] += 0.85;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0.009433962264150943;
        result[1] += 0;
        result[2] += 0.5188679245283019;
        result[3] += 0.24528301886792453;
        result[4] += 0;
        result[5] += 0.22641509433962265;
      } else {
        result[0] += 0.01002227171492205;
        result[1] += 0;
        result[2] += 0.9064587973273942;
        result[3] += 0.07461024498886415;
        result[4] += 0;
        result[5] += 0.008908685968819599;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.00664451827242525;
        result[1] += 0.053156146179402;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8604651162790699;
        result[5] += 0.079734219269103;
      } else {
        result[0] += 0.06519967400162999;
        result[1] += 0.0024449877750611247;
        result[2] += 0.006519967400162999;
        result[3] += 0.15158924205378974;
        result[4] += 0.0488997555012225;
        result[5] += 0.7253463732681337;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        result[0] += 0.011627906976744186;
        result[1] += 0.9674418604651163;
        result[2] += 0.002325581395348837;
        result[3] += 0.0069767441860465115;
        result[4] += 0.011627906976744186;
        result[5] += 0;
      } else {
        result[0] += 0.6866791744840526;
        result[1] += 0.03627267041901188;
        result[2] += 0.04127579737335835;
        result[3] += 0.0525328330206379;
        result[4] += 0.10131332082551595;
        result[5] += 0.08192620387742339;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)92.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.21978021978021978;
        result[4] += 0.07692307692307693;
        result[5] += 0.7032967032967034;
      } else {
        result[0] += 0.008403361344537815;
        result[1] += 0.02100840336134454;
        result[2] += 0.28991596638655465;
        result[3] += 0.4411764705882353;
        result[4] += 0.046218487394957986;
        result[5] += 0.19327731092436976;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
        result[0] += 0.18571428571428572;
        result[1] += 0;
        result[2] += 0.5285714285714286;
        result[3] += 0.15714285714285714;
        result[4] += 0.014285714285714285;
        result[5] += 0.11428571428571428;
      } else {
        result[0] += 0.0011494252873563218;
        result[1] += 0;
        result[2] += 0.9333333333333333;
        result[3] += 0.06321839080459771;
        result[4] += 0;
        result[5] += 0.0022988505747126436;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.16209476309226933;
        result[1] += 0.05236907730673317;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.683291770573566;
        result[5] += 0.10224438902743142;
      } else {
        result[0] += 0.006971340046475601;
        result[1] += 0.006971340046475601;
        result[2] += 0.01471727343144849;
        result[3] += 0.19829589465530598;
        result[4] += 0.056545313710302095;
        result[5] += 0.7164988381099923;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)56.5) ) ) {
        result[0] += 0.0023923444976076554;
        result[1] += 0.9449760765550239;
        result[2] += 0;
        result[3] += 0.004784688995215311;
        result[4] += 0.04784688995215311;
        result[5] += 0;
      } else {
        result[0] += 0.6572966507177033;
        result[1] += 0.04605263157894736;
        result[2] += 0.06459330143540669;
        result[3] += 0.06459330143540669;
        result[4] += 0.09031100478468898;
        result[5] += 0.07715311004784688;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)93.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.14285714285714285;
        result[4] += 0.09523809523809523;
        result[5] += 0.7619047619047619;
      } else {
        result[0] += 0;
        result[1] += 0.05714285714285715;
        result[2] += 0.4071428571428572;
        result[3] += 0.3571428571428572;
        result[4] += 0.014285714285714287;
        result[5] += 0.1642857142857143;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
        result[0] += 0.23943661971830985;
        result[1] += 0.08450704225352113;
        result[2] += 0.4788732394366197;
        result[3] += 0.14084507042253522;
        result[4] += 0.014084507042253521;
        result[5] += 0.04225352112676056;
      } else {
        result[0] += 0.0012642225031605564;
        result[1] += 0;
        result[2] += 0.9127686472819216;
        result[3] += 0.07838179519595449;
        result[4] += 0;
        result[5] += 0.007585335018963337;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.04219409282700422;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9578059071729957;
        result[5] += 0;
      } else {
        result[0] += 0.040783034257748776;
        result[1] += 0.00734094616639478;
        result[2] += 0.0024469820554649264;
        result[3] += 0.13050570962479607;
        result[4] += 0.04730831973898858;
        result[5] += 0.7716150081566069;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.003597122302158274;
        result[1] += 0.8111510791366907;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.1852517985611511;
        result[5] += 0;
      } else {
        result[0] += 0.7404371584699454;
        result[1] += 0.023224043715846996;
        result[2] += 0.029371584699453553;
        result[3] += 0.060109289617486336;
        result[4] += 0.0744535519125683;
        result[5] += 0.07240437158469945;
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)80.5) ) ) {
        result[0] += 0;
        result[1] += 0.023809523809523808;
        result[2] += 0.07738095238095238;
        result[3] += 0.5297619047619048;
        result[4] += 0.05357142857142857;
        result[5] += 0.31547619047619047;
      } else {
        result[0] += 0.09166666666666666;
        result[1] += 0.03333333333333333;
        result[2] += 0.5166666666666667;
        result[3] += 0.175;
        result[4] += 0;
        result[5] += 0.18333333333333332;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0.049586776859504134;
        result[1] += 0;
        result[2] += 0.4380165289256198;
        result[3] += 0.34710743801652894;
        result[4] += 0.008264462809917356;
        result[5] += 0.15702479338842976;
      } else {
        result[0] += 0.02569593147751606;
        result[1] += 0;
        result[2] += 0.9089935760171306;
        result[3] += 0.06209850107066381;
        result[4] += 0;
        result[5] += 0.0032119914346895075;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        result[0] += 0.007142857142857143;
        result[1] += 0.0035714285714285713;
        result[2] += 0.007142857142857143;
        result[3] += 0.03571428571428571;
        result[4] += 0.8928571428571429;
        result[5] += 0.05357142857142857;
      } else {
        result[0] += 0.04094488188976378;
        result[1] += 0.012598425196850394;
        result[2] += 0.011811023622047244;
        result[3] += 0.15590551181102363;
        result[4] += 0.06456692913385827;
        result[5] += 0.7141732283464567;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0.9658848614072495;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.03411513859275053;
        result[5] += 0;
      } else {
        result[0] += 0.651685393258427;
        result[1] += 0.04376108811354228;
        result[2] += 0.03725606150206978;
        result[3] += 0.08219988172678888;
        result[4] += 0.1153163808397398;
        result[5] += 0.06978119455943228;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.15966386554621848;
        result[3] += 0.4117647058823529;
        result[4] += 0.025210084033613446;
        result[5] += 0.40336134453781514;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.671875;
        result[3] += 0.203125;
        result[4] += 0.015625;
        result[5] += 0.109375;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.25;
        result[3] += 0.3;
        result[4] += 0;
        result[5] += 0.45;
      } else {
        result[0] += 0.013143483023001095;
        result[1] += 0.00547645125958379;
        result[2] += 0.882803943044907;
        result[3] += 0.07886089813800658;
        result[4] += 0.00547645125958379;
        result[5] += 0.014238773274917854;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        result[0] += 0.17585301837270342;
        result[1] += 0.049868766404199474;
        result[2] += 0.010498687664041995;
        result[3] += 0;
        result[4] += 0.6561679790026247;
        result[5] += 0.10761154855643044;
      } else {
        result[0] += 0.006611570247933884;
        result[1] += 0;
        result[2] += 0.008264462809917356;
        result[3] += 0.18264462809917356;
        result[4] += 0.048760330578512395;
        result[5] += 0.7537190082644628;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        result[0] += 0.0021881838074398253;
        result[1] += 0.9868708971553611;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.010940919037199126;
        result[5] += 0;
      } else {
        result[0] += 0.6434991012582385;
        result[1] += 0.03235470341521869;
        result[2] += 0.05452366686638706;
        result[3] += 0.06710605152786099;
        result[4] += 0.10665068903535051;
        result[5] += 0.09586578789694428;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)75.5) ) ) {
        result[0] += 0;
        result[1] += 0.023809523809523808;
        result[2] += 0.07142857142857142;
        result[3] += 0.11904761904761904;
        result[4] += 0.17857142857142858;
        result[5] += 0.6071428571428571;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.27380952380952384;
        result[3] += 0.47619047619047616;
        result[4] += 0;
        result[5] += 0.25;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        result[0] += 0.009999999999999998;
        result[1] += 0.009999999999999998;
        result[2] += 0.5499999999999999;
        result[3] += 0.29999999999999993;
        result[4] += 0.029999999999999992;
        result[5] += 0.09999999999999998;
      } else {
        result[0] += 0.01070154577883472;
        result[1] += 0.0011890606420927466;
        result[2] += 0.9167657550535078;
        result[3] += 0.06183115338882283;
        result[4] += 0;
        result[5] += 0.009512485136741973;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        result[0] += 0.004166666666666667;
        result[1] += 0.020833333333333332;
        result[2] += 0;
        result[3] += 0.025;
        result[4] += 0.8791666666666667;
        result[5] += 0.07083333333333333;
      } else {
        result[0] += 0.023140495867768594;
        result[1] += 0.0049586776859504135;
        result[2] += 0.00743801652892562;
        result[3] += 0.1487603305785124;
        result[4] += 0.07190082644628099;
        result[5] += 0.743801652892562;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0.9553191489361702;
        result[2] += 0;
        result[3] += 0.00425531914893617;
        result[4] += 0.04042553191489362;
        result[5] += 0;
      } else {
        result[0] += 0.6151333696243876;
        result[1] += 0.045182362547632006;
        result[2] += 0.06205770277626565;
        result[3] += 0.10070767555797495;
        result[4] += 0.10724006532389765;
        result[5] += 0.06967882416984214;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0625;
        result[3] += 0.71875;
        result[4] += 0.03125;
        result[5] += 0.1875;
      } else {
        result[0] += 0.011904761904761906;
        result[1] += 0.02380952380952381;
        result[2] += 0.5535714285714287;
        result[3] += 0.2380952380952381;
        result[4] += 0.011904761904761906;
        result[5] += 0.16071428571428575;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        result[0] += 0.010830324909747292;
        result[1] += 0;
        result[2] += 0.776173285198556;
        result[3] += 0.17689530685920576;
        result[4] += 0;
        result[5] += 0.036101083032490974;
      } else {
        result[0] += 0.0016891891891891895;
        result[1] += 0;
        result[2] += 0.9797297297297298;
        result[3] += 0.018581081081081086;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.058823529411764705;
        result[2] += 0;
        result[3] += 0.025210084033613446;
        result[4] += 0.8529411764705882;
        result[5] += 0.06302521008403361;
      } else {
        result[0] += 0.04705003734129948;
        result[1] += 0.005227781926811053;
        result[2] += 0.0037341299477221808;
        result[3] += 0.15758028379387604;
        result[4] += 0.05750560119492158;
        result[5] += 0.7289021657953697;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0.9730337078651685;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.02696629213483146;
        result[5] += 0;
      } else {
        result[0] += 0.6583481877599526;
        result[1] += 0.04278074866310161;
        result[2] += 0.06238859180035651;
        result[3] += 0.07843137254901962;
        result[4] += 0.09863339275103983;
        result[5] += 0.05941770647653001;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
        result[0] += 0;
        result[1] += 0.013888888888888888;
        result[2] += 0.2222222222222222;
        result[3] += 0.4791666666666667;
        result[4] += 0.027777777777777776;
        result[5] += 0.2569444444444444;
      } else {
        result[0] += 0.1506849315068493;
        result[1] += 0.0684931506849315;
        result[2] += 0.6301369863013698;
        result[3] += 0.0547945205479452;
        result[4] += 0.0410958904109589;
        result[5] += 0.0547945205479452;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        result[0] += 0.024096385542168676;
        result[1] += 0;
        result[2] += 0.6867469879518072;
        result[3] += 0.2891566265060241;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.014616321559074299;
        result[1] += 0;
        result[2] += 0.9330085261875761;
        result[3] += 0.048721071863580996;
        result[4] += 0;
        result[5] += 0.0036540803897685747;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        result[0] += 0.13802816901408452;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.008450704225352112;
        result[4] += 0.6957746478873239;
        result[5] += 0.15774647887323945;
      } else {
        result[0] += 0.0008857395925597874;
        result[1] += 0.021257750221434897;
        result[2] += 0;
        result[3] += 0.1479185119574845;
        result[4] += 0.046944198405668734;
        result[5] += 0.7829937998228521;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)51.5) ) ) {
        result[0] += 0.013245033112582781;
        result[1] += 0.9470198675496688;
        result[2] += 0;
        result[3] += 0.008830022075055188;
        result[4] += 0.03090507726269316;
        result[5] += 0;
      } else {
        result[0] += 0.6285878300803674;
        result[1] += 0.04707233065442021;
        result[2] += 0.04133180252583238;
        result[3] += 0.08151549942594719;
        result[4] += 0.12112514351320322;
        result[5] += 0.08036739380022963;
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.11764705882352941;
        result[3] += 0.058823529411764705;
        result[4] += 0.16176470588235295;
        result[5] += 0.6617647058823529;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.16831683168316833;
        result[3] += 0.504950495049505;
        result[4] += 0;
        result[5] += 0.32673267326732675;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
        result[0] += 0.4482758620689655;
        result[1] += 0.06896551724137931;
        result[2] += 0.20689655172413793;
        result[3] += 0.08620689655172414;
        result[4] += 0.05172413793103448;
        result[5] += 0.13793103448275862;
      } else {
        result[0] += 0.007608695652173913;
        result[1] += 0.009782608695652175;
        result[2] += 0.875;
        result[3] += 0.09239130434782608;
        result[4] += 0;
        result[5] += 0.015217391304347827;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)66.5) ) ) {
        result[0] += 0.03162055335968379;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9288537549407114;
        result[5] += 0.039525691699604744;
      } else {
        result[0] += 0.4437869822485207;
        result[1] += 0;
        result[2] += 0.023668639053254437;
        result[3] += 0.005917159763313609;
        result[4] += 0.2958579881656805;
        result[5] += 0.23076923076923078;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)83.5) ) ) {
        result[0] += 0.001091703056768559;
        result[1] += 0.0032751091703056767;
        result[2] += 0.002183406113537118;
        result[3] += 0.036026200873362446;
        result[4] += 0.08624454148471616;
        result[5] += 0.87117903930131;
      } else {
        result[0] += 0;
        result[1] += 0.026954177897574125;
        result[2] += 0.013477088948787063;
        result[3] += 0.48787061994609165;
        result[4] += 0.029649595687331536;
        result[5] += 0.4420485175202156;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)96.5) ) ) {
        result[0] += 0.0234375;
        result[1] += 0.328125;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.6484375;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.9933920704845814;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.006607929515418502;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
        result[0] += 0.8171206225680934;
        result[1] += 0.019455252918287938;
        result[2] += 0.024902723735408562;
        result[3] += 0.03501945525291829;
        result[4] += 0.07237354085603113;
        result[5] += 0.0311284046692607;
      } else {
        result[0] += 0.0192;
        result[1] += 0.0064;
        result[2] += 0.784;
        result[3] += 0.12;
        result[4] += 0.0064;
        result[5] += 0.064;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        result[0] += 0.01910828025477707;
        result[1] += 0.09872611464968153;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.821656050955414;
        result[5] += 0.06050955414012739;
      } else {
        result[0] += 0.040584415584415584;
        result[1] += 0;
        result[2] += 0.008116883116883116;
        result[3] += 0.1444805194805195;
        result[4] += 0.044642857142857144;
        result[5] += 0.7621753246753247;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        result[0] += 0.009765625;
        result[1] += 0.890625;
        result[2] += 0.001953125;
        result[3] += 0;
        result[4] += 0.09765625;
        result[5] += 0;
      } else {
        result[0] += 0.6575342465753425;
        result[1] += 0.03216200119118524;
        result[2] += 0.05300774270399048;
        result[3] += 0.09469922572960096;
        result[4] += 0.07861822513400835;
        result[5] += 0.08397855866587256;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.036585365853658534;
        result[3] += 0.32926829268292684;
        result[4] += 0.07317073170731707;
        result[5] += 0.5609756097560976;
      } else {
        result[0] += 0.027777777777777776;
        result[1] += 0;
        result[2] += 0.6388888888888888;
        result[3] += 0.25;
        result[4] += 0;
        result[5] += 0.08333333333333333;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)72.5) ) ) {
        result[0] += 0.2941176470588235;
        result[1] += 0.25490196078431365;
        result[2] += 0.23529411764705876;
        result[3] += 0.1764705882352941;
        result[4] += 0;
        result[5] += 0.039215686274509796;
      } else {
        result[0] += 0.005434782608695653;
        result[1] += 0.0010869565217391307;
        result[2] += 0.898913043478261;
        result[3] += 0.07826086956521741;
        result[4] += 0;
        result[5] += 0.01630434782608696;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.045112781954887216;
        result[2] += 0;
        result[3] += 0.041353383458646614;
        result[4] += 0.8345864661654135;
        result[5] += 0.07894736842105263;
      } else {
        result[0] += 0.03538461538461538;
        result[1] += 0.004615384615384616;
        result[2] += 0.0015384615384615385;
        result[3] += 0.14384615384615385;
        result[4] += 0.046153846153846156;
        result[5] += 0.7684615384615384;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)53.5) ) ) {
        result[0] += 0.014457831325301205;
        result[1] += 0.9204819277108434;
        result[2] += 0.014457831325301205;
        result[3] += 0.007228915662650603;
        result[4] += 0.043373493975903614;
        result[5] += 0;
      } else {
        result[0] += 0.6254199328107503;
        result[1] += 0.04703247480403135;
        result[2] += 0.0593505039193729;
        result[3] += 0.0940649496080627;
        result[4] += 0.10694288913773796;
        result[5] += 0.0671892497200448;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)94.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)85.5) ) ) {
        result[0] += 0.025;
        result[1] += 0.025;
        result[2] += 0.225;
        result[3] += 0;
        result[4] += 0.1;
        result[5] += 0.625;
      } else {
        result[0] += 0.06504065040650407;
        result[1] += 0.06504065040650407;
        result[2] += 0.3333333333333333;
        result[3] += 0.43089430894308944;
        result[4] += 0.016260162601626018;
        result[5] += 0.08943089430894309;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)84) ) ) {
        result[0] += 0.0149812734082397;
        result[1] += 0;
        result[2] += 0.7752808988764045;
        result[3] += 0.1647940074906367;
        result[4] += 0;
        result[5] += 0.0449438202247191;
      } else {
        result[0] += 0.009538950715421303;
        result[1] += 0;
        result[2] += 0.9538950715421304;
        result[3] += 0.03656597774244833;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)93.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        result[0] += 0.33849129593810445;
        result[1] += 0.02321083172147002;
        result[2] += 0.0038684719535783366;
        result[3] += 0;
        result[4] += 0.5725338491295938;
        result[5] += 0.061895551257253385;
      } else {
        result[0] += 0.0032520325203252032;
        result[1] += 0.011382113821138212;
        result[2] += 0.0016260162601626016;
        result[3] += 0.16341463414634147;
        result[4] += 0.07723577235772358;
        result[5] += 0.7430894308943089;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)70.5) ) ) {
        result[0] += 0.016791044776119403;
        result[1] += 0.8824626865671642;
        result[2] += 0;
        result[3] += 0.014925373134328358;
        result[4] += 0.08022388059701492;
        result[5] += 0.005597014925373134;
      } else {
        result[0] += 0.74251968503937;
        result[1] += 0.025984251968503937;
        result[2] += 0.03779527559055118;
        result[3] += 0.07637795275590552;
        result[4] += 0.046456692913385826;
        result[5] += 0.07086614173228346;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)93.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.11450381679389313;
        result[3] += 0.22137404580152673;
        result[4] += 0.11450381679389313;
        result[5] += 0.549618320610687;
      } else {
        result[0] += 0.004132231404958679;
        result[1] += 0;
        result[2] += 0.5123966942148761;
        result[3] += 0.37603305785123975;
        result[4] += 0.004132231404958679;
        result[5] += 0.10330578512396696;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0.3043478260869566;
        result[2] += 0.2173913043478261;
        result[3] += 0.26086956521739135;
        result[4] += 0;
        result[5] += 0.2173913043478261;
      } else {
        result[0] += 0.02394526795895097;
        result[1] += 0.0011402508551881414;
        result[2] += 0.9007981755986317;
        result[3] += 0.052451539338654506;
        result[4] += 0.005701254275940707;
        result[5] += 0.01596351197263398;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
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
        result[3] += 0.09259259259259259;
        result[4] += 0.5370370370370371;
        result[5] += 0.37037037037037035;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)85.5) ) ) {
        result[0] += 0.012448132780082987;
        result[1] += 0.004149377593360996;
        result[2] += 0;
        result[3] += 0.02351313969571231;
        result[4] += 0.040110650069156296;
        result[5] += 0.9197786998616874;
      } else {
        result[0] += 0.07088122605363985;
        result[1] += 0.04980842911877394;
        result[2] += 0.032567049808429116;
        result[3] += 0.30268199233716475;
        result[4] += 0.05555555555555555;
        result[5] += 0.4885057471264368;
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0.9606003752345216;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.039399624765478425;
        result[5] += 0;
      } else {
        result[0] += 0.7011265738899933;
        result[1] += 0.030483764082173626;
        result[2] += 0.026507620941020542;
        result[3] += 0.054340622929092114;
        result[4] += 0.1411530815109344;
        result[5] += 0.04638833664678595;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0.021212121212121213;
        result[1] += 0.051515151515151514;
        result[2] += 0.22727272727272727;
        result[3] += 0.3090909090909091;
        result[4] += 0.08181818181818182;
        result[5] += 0.3090909090909091;
      } else {
        result[0] += 0.029136316337148804;
        result[1] += 0;
        result[2] += 0.8720083246618107;
        result[3] += 0.08532778355879292;
        result[4] += 0;
        result[5] += 0.013527575442247659;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
        result[0] += 0.13220338983050847;
        result[1] += 0.013559322033898305;
        result[2] += 0;
        result[3] += 0.02711864406779661;
        result[4] += 0.7389830508474576;
        result[5] += 0.08813559322033898;
      } else {
        result[0] += 0.005439005439005439;
        result[1] += 0.017871017871017872;
        result[2] += 0.004662004662004662;
        result[3] += 0.16627816627816627;
        result[4] += 0.06837606837606838;
        result[5] += 0.7373737373737373;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
        result[0] += 0.014466546112115732;
        result[1] += 0.840867992766727;
        result[2] += 0.003616636528028933;
        result[3] += 0.0018083182640144665;
        result[4] += 0.13381555153707053;
        result[5] += 0.0054249547920434;
      } else {
        result[0] += 0.6712158808933003;
        result[1] += 0.035980148883374696;
        result[2] += 0.04838709677419356;
        result[3] += 0.07692307692307694;
        result[4] += 0.07009925558312656;
        result[5] += 0.09739454094292807;
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.4457831325301205;
        result[3] += 0.41566265060240964;
        result[4] += 0.018072289156626505;
        result[5] += 0.12048192771084337;
      } else {
        result[0] += 0.008771929824561403;
        result[1] += 0;
        result[2] += 0.8070175438596491;
        result[3] += 0.16666666666666666;
        result[4] += 0;
        result[5] += 0.017543859649122806;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)70.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.005865102639296188;
        result[1] += 0;
        result[2] += 0.9486803519061584;
        result[3] += 0.03812316715542522;
        result[4] += 0;
        result[5] += 0.007331378299120235;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.13149847094801223;
        result[1] += 0.07339449541284404;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.6666666666666666;
        result[5] += 0.12844036697247707;
      } else {
        result[0] += 0;
        result[1] += 0.013192612137203167;
        result[2] += 0.014951627088830254;
        result[3] += 0.1706244503078276;
        result[4] += 0.0395778364116095;
        result[5] += 0.7616534740545294;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        result[0] += 0.004338394793926247;
        result[1] += 0.9631236442516269;
        result[2] += 0;
        result[3] += 0.008676789587852495;
        result[4] += 0.02386117136659436;
        result[5] += 0;
      } else {
        result[0] += 0.6052072263549415;
        result[1] += 0.02922422954303932;
        result[2] += 0.07120085015940489;
        result[3] += 0.08554729011689692;
        result[4] += 0.12274176408076515;
        result[5] += 0.08607863974495218;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
        result[0] += 0.0784313725490196;
        result[1] += 0.17647058823529413;
        result[2] += 0.1568627450980392;
        result[3] += 0.058823529411764705;
        result[4] += 0.11764705882352941;
        result[5] += 0.4117647058823529;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.42990654205607476;
        result[3] += 0.4672897196261682;
        result[4] += 0;
        result[5] += 0.102803738317757;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6886792452830188;
        result[3] += 0.27358490566037735;
        result[4] += 0;
        result[5] += 0.03773584905660377;
      } else {
        result[0] += 0.010596026490066227;
        result[1] += 0;
        result[2] += 0.9271523178807948;
        result[3] += 0.05960264900662252;
        result[4] += 0;
        result[5] += 0.0026490066225165567;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.0963855421686747;
        result[1] += 0.05120481927710843;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7168674698795181;
        result[5] += 0.1355421686746988;
      } else {
        result[0] += 0.0009149130832570906;
        result[1] += 0.010978956999085087;
        result[2] += 0.006404391582799634;
        result[3] += 0.1747483989021043;
        result[4] += 0.04666056724611162;
        result[5] += 0.7602927721866423;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        result[0] += 0;
        result[1] += 0.8529980657640233;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.14313346228239845;
        result[5] += 0.0038684719535783366;
      } else {
        result[0] += 0.6608896591565568;
        result[1] += 0.024263431542460998;
        result[2] += 0.058347775852108597;
        result[3] += 0.08838821490467937;
        result[4] += 0.06990179087232812;
        result[5] += 0.09820912767186595;
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
        result[0] += 0;
        result[1] += 0.13114754098360656;
        result[2] += 0.03278688524590164;
        result[3] += 0.06557377049180328;
        result[4] += 0.19672131147540983;
        result[5] += 0.5737704918032787;
      } else {
        result[0] += 0.15652173913043482;
        result[1] += 0;
        result[2] += 0.44347826086956527;
        result[3] += 0.2869565217391305;
        result[4] += 0.008695652173913045;
        result[5] += 0.10434782608695653;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
        result[0] += 0;
        result[1] += 0.0038910505836575876;
        result[2] += 0.6614785992217899;
        result[3] += 0.2840466926070039;
        result[4] += 0;
        result[5] += 0.05058365758754864;
      } else {
        result[0] += 0.004166666666666667;
        result[1] += 0;
        result[2] += 0.9430555555555555;
        result[3] += 0.04722222222222222;
        result[4] += 0;
        result[5] += 0.005555555555555556;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
        result[0] += 0.10191082802547773;
        result[1] += 0.05732484076433122;
        result[2] += 0;
        result[3] += 0.015923566878980895;
        result[4] += 0.713375796178344;
        result[5] += 0.11146496815286626;
      } else {
        result[0] += 0.0017035775127768314;
        result[1] += 0.014480408858603067;
        result[2] += 0.00596252129471891;
        result[3] += 0.14054514480408858;
        result[4] += 0.07240204429301533;
        result[5] += 0.7649063032367973;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        result[0] += 0;
        result[1] += 0.889763779527559;
        result[2] += 0;
        result[3] += 0.005905511811023622;
        result[4] += 0.09448818897637795;
        result[5] += 0.00984251968503937;
      } else {
        result[0] += 0.6392877656519241;
        result[1] += 0.02986789201608271;
        result[2] += 0.0511200459506031;
        result[3] += 0.07869040781160253;
        result[4] += 0.09592188397472717;
        result[5] += 0.10511200459506032;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.18571428571428572;
        result[3] += 0.6857142857142857;
        result[4] += 0;
        result[5] += 0.12857142857142856;
      } else {
        result[0] += 0.04938271604938271;
        result[1] += 0;
        result[2] += 0.5555555555555556;
        result[3] += 0.2222222222222222;
        result[4] += 0.037037037037037035;
        result[5] += 0.13580246913580246;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
        result[0] += 0.030769230769230774;
        result[1] += 0;
        result[2] += 0.7476923076923078;
        result[3] += 0.17230769230769233;
        result[4] += 0;
        result[5] += 0.04923076923076924;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9755301794453507;
        result[3] += 0.024469820554649267;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        result[0] += 0.005555555555555556;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9888888888888889;
        result[5] += 0.005555555555555556;
      } else {
        result[0] += 0.36036036036036034;
        result[1] += 0.018018018018018018;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.3963963963963964;
        result[5] += 0.22522522522522523;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
        result[0] += 0;
        result[1] += 0.001142857142857143;
        result[2] += 0.001142857142857143;
        result[3] += 0.053714285714285714;
        result[4] += 0.04342857142857143;
        result[5] += 0.9005714285714286;
      } else {
        result[0] += 0.006230529595015576;
        result[1] += 0.024922118380062305;
        result[2] += 0.009345794392523364;
        result[3] += 0.48598130841121495;
        result[4] += 0.03115264797507788;
        result[5] += 0.4423676012461059;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)53.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)89) ) ) {
        result[0] += 0;
        result[1] += 0.3157894736842105;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.6842105263157895;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.9956616052060737;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.004338394793926247;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
        result[0] += 0.7008069522036002;
        result[1] += 0.0297951582867784;
        result[2] += 0.024829298572315334;
        result[3] += 0.05772811918063315;
        result[4] += 0.12725015518311608;
        result[5] += 0.0595903165735568;
      } else {
        result[0] += 0.020833333333333332;
        result[1] += 0.01201923076923077;
        result[2] += 0.7900641025641025;
        result[3] += 0.12580128205128205;
        result[4] += 0.003205128205128205;
        result[5] += 0.04807692307692308;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        result[0] += 0.5193370165745858;
        result[1] += 0.06077348066298343;
        result[2] += 0;
        result[3] += 0.044198895027624314;
        result[4] += 0.14364640883977903;
        result[5] += 0.23204419889502764;
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)88.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.04385026737967915;
        result[4] += 0.07700534759358289;
        result[5] += 0.879144385026738;
      } else {
        result[0] += 0.012077294685990338;
        result[1] += 0.014492753623188406;
        result[2] += 0.03140096618357488;
        result[3] += 0.5024154589371981;
        result[4] += 0.04830917874396135;
        result[5] += 0.391304347826087;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
        result[0] += 0.00850340136054422;
        result[1] += 0.8197278911564627;
        result[2] += 0.00850340136054422;
        result[3] += 0;
        result[4] += 0.16156462585034018;
        result[5] += 0.0017006802721088437;
      } else {
        result[0] += 0.8047430830039526;
        result[1] += 0.026877470355731226;
        result[2] += 0.03162055335968379;
        result[3] += 0.045059288537549404;
        result[4] += 0.0616600790513834;
        result[5] += 0.030039525691699605;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
        result[0] += 0.17972350230414746;
        result[1] += 0.03686635944700461;
        result[2] += 0.3548387096774194;
        result[3] += 0.2073732718894009;
        result[4] += 0.013824884792626729;
        result[5] += 0.2073732718894009;
      } else {
        result[0] += 0.006054490413723511;
        result[1] += 0;
        result[2] += 0.8708375378405651;
        result[3] += 0.10393541876892028;
        result[4] += 0.0010090817356205853;
        result[5] += 0.018163471241170535;
      }
    }
  }
  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99) ) ) {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        result[0] += 0.0030864197530864196;
        result[1] += 0.09259259259259259;
        result[2] += 0.0030864197530864196;
        result[3] += 0.015432098765432098;
        result[4] += 0.8302469135802469;
        result[5] += 0.05555555555555555;
      } else {
        result[0] += 0.7725947521865889;
        result[1] += 0.0029154518950437317;
        result[2] += 0.023323615160349854;
        result[3] += 0.026239067055393587;
        result[4] += 0.08454810495626822;
        result[5] += 0.09037900874635568;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
        result[0] += 0.005488474204171241;
        result[1] += 0.0021953896816684962;
        result[2] += 0.0010976948408342481;
        result[3] += 0.05598243688254665;
        result[4] += 0.0801317233809001;
        result[5] += 0.8551042810098792;
      } else {
        result[0] += 0.05132450331125828;
        result[1] += 0.024834437086092714;
        result[2] += 0.03145695364238411;
        result[3] += 0.4205298013245033;
        result[4] += 0.08609271523178808;
        result[5] += 0.38576158940397354;
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)58.5) ) ) {
        result[0] += 0.0045351473922902496;
        result[1] += 0.9863945578231292;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.009070294784580499;
        result[5] += 0;
      } else {
        result[0] += 0.7612208258527825;
        result[1] += 0.057450628366247744;
        result[2] += 0.07001795332136444;
        result[3] += 0.022441651705565526;
        result[4] += 0.07450628366247754;
        result[5] += 0.014362657091561936;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)84.5) ) ) {
        result[0] += 0.048426150121065374;
        result[1] += 0.009685230024213076;
        result[2] += 0.6634382566585957;
        result[3] += 0.18886198547215496;
        result[4] += 0.026634382566585957;
        result[5] += 0.06295399515738499;
      } else {
        result[0] += 0.0014792899408284023;
        result[1] += 0.0014792899408284023;
        result[2] += 0.9275147928994083;
        result[3] += 0.06360946745562131;
        result[4] += 0;
        result[5] += 0.005917159763313609;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
        result[0] += 0.014234875444839857;
        result[1] += 0;
        result[2] += 0.0035587188612099642;
        result[3] += 0;
        result[4] += 0.9039145907473309;
        result[5] += 0.07829181494661921;
      } else {
        result[0] += 0.02712160979877515;
        result[1] += 0.003499562554680665;
        result[2] += 0.0008748906386701663;
        result[3] += 0.14610673665791776;
        result[4] += 0.03762029746281715;
        result[5] += 0.7847769028871391;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)54.5) ) ) {
        result[0] += 0;
        result[1] += 0.9389473684210526;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.061052631578947365;
        result[5] += 0;
      } else {
        result[0] += 0.6575028636884308;
        result[1] += 0.031500572737686146;
        result[2] += 0.04238258877434136;
        result[3] += 0.06930126002290952;
        result[4] += 0.10538373424971365;
        result[5] += 0.09392898052691868;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)66) ) ) {
        result[0] += 0;
        result[1] += 0.125;
        result[2] += 0.20833333333333334;
        result[3] += 0;
        result[4] += 0.08333333333333333;
        result[5] += 0.5833333333333334;
      } else {
        result[0] += 0;
        result[1] += 0.04201680672268908;
        result[2] += 0.12605042016806722;
        result[3] += 0.5126050420168067;
        result[4] += 0.05042016806722689;
        result[5] += 0.2689075630252101;
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
        result[0] += 0;
        result[1] += 0.017699115044247787;
        result[2] += 0.7227138643067846;
        result[3] += 0.19469026548672566;
        result[4] += 0.0029498525073746312;
        result[5] += 0.061946902654867256;
      } else {
        result[0] += 0.0357653791130186;
        result[1] += 0;
        result[2] += 0.9213161659513591;
        result[3] += 0.03862660944206009;
        result[4] += 0;
        result[5] += 0.004291845493562232;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        result[0] += 0.11824324324324324;
        result[1] += 0.006756756756756757;
        result[2] += 0.013513513513513514;
        result[3] += 0;
        result[4] += 0.7297297297297297;
        result[5] += 0.13175675675675674;
      } else {
        result[0] += 0;
        result[1] += 0.010247651579846286;
        result[2] += 0.0025619128949615714;
        result[3] += 0.15286080273270708;
        result[4] += 0.04611443210930828;
        result[5] += 0.7882152006831767;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)48.5) ) ) {
        result[0] += 0.004962779156327543;
        result[1] += 0.9751861042183623;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.019851116625310174;
        result[5] += 0;
      } else {
        result[0] += 0.6567871962062833;
        result[1] += 0.05038529934795495;
        result[2] += 0.01896858328393598;
        result[3] += 0.04742145820983995;
        result[4] += 0.13218731475992887;
        result[5] += 0.0942501481920569;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.16184971098265896;
        result[3] += 0.6069364161849711;
        result[4] += 0;
        result[5] += 0.23121387283236994;
      } else {
        result[0] += 0.027210884353741496;
        result[1] += 0;
        result[2] += 0.6666666666666666;
        result[3] += 0.19047619047619047;
        result[4] += 0.006802721088435374;
        result[5] += 0.10884353741496598;
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.14285714285714285;
        result[3] += 0.21428571428571427;
        result[4] += 0;
        result[5] += 0.6428571428571429;
      } else {
        result[0] += 0.014973262032085563;
        result[1] += 0.0021390374331550807;
        result[2] += 0.9133689839572193;
        result[3] += 0.06096256684491979;
        result[4] += 0;
        result[5] += 0.008556149732620323;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.11144578313253012;
        result[1] += 0.06325301204819277;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7259036144578314;
        result[5] += 0.09939759036144578;
      } else {
        result[0] += 0.0008305647840531562;
        result[1] += 0.01079734219269103;
        result[2] += 0.009136212624584718;
        result[3] += 0.15199335548172757;
        result[4] += 0.05813953488372093;
        result[5] += 0.7691029900332226;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)56.5) ) ) {
        result[0] += 0.0019267822736030828;
        result[1] += 0.9248554913294798;
        result[2] += 0;
        result[3] += 0.007707129094412331;
        result[4] += 0.05394990366088632;
        result[5] += 0.011560693641618497;
      } else {
        result[0] += 0.6670854271356784;
        result[1] += 0.038316582914572864;
        result[2] += 0.032035175879396985;
        result[3] += 0.0722361809045226;
        result[4] += 0.10175879396984924;
        result[5] += 0.0885678391959799;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
        result[0] += 0.00625;
        result[1] += 0;
        result[2] += 0.2375;
        result[3] += 0.51875;
        result[4] += 0.00625;
        result[5] += 0.23125;
      } else {
        result[0] += 0.03738317757009346;
        result[1] += 0;
        result[2] += 0.6728971962616823;
        result[3] += 0.26168224299065423;
        result[4] += 0;
        result[5] += 0.028037383177570097;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.4358974358974359;
        result[3] += 0.10256410256410256;
        result[4] += 0;
        result[5] += 0.46153846153846156;
      } else {
        result[0] += 0.014891179839633447;
        result[1] += 0;
        result[2] += 0.9221076746849943;
        result[3] += 0.061855670103092786;
        result[4] += 0;
        result[5] += 0.001145475372279496;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_3/test_data.csv", "r");
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
