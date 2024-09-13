
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
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.0033333333333333335;
        result[2] += 0;
        result[3] += 0.04666666666666667;
        result[4] += 0.88;
        result[5] += 0.07;
      } else {
        result[0] += 0.03680501174628034;
        result[1] += 0.0023492560689115116;
        result[2] += 0;
        result[3] += 0.15505090054815976;
        result[4] += 0.05324980422866092;
        result[5] += 0.7525450274079875;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)52.5) ) ) {
        result[0] += 0.002109704641350211;
        result[1] += 0.9662447257383966;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.03164556962025317;
        result[5] += 0;
      } else {
        result[0] += 0.6394472361809045;
        result[1] += 0.028266331658291458;
        result[2] += 0.06846733668341709;
        result[3] += 0.0885678391959799;
        result[4] += 0.11118090452261306;
        result[5] += 0.06407035175879397;
      }
    }
  } else {
    if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
      if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)71.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.015384615384615385;
        result[3] += 0.15384615384615385;
        result[4] += 0;
        result[5] += 0.8307692307692308;
      } else {
        result[0] += 0;
        result[1] += 0.012578616352201259;
        result[2] += 0.4276729559748428;
        result[3] += 0.42138364779874216;
        result[4] += 0.006289308176100629;
        result[5] += 0.1320754716981132;
      }
    } else {
      if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)54.5) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.016877637130801686;
        result[1] += 0;
        result[2] += 0.8765822784810127;
        result[3] += 0.07278481012658228;
        result[4] += 0.0010548523206751054;
        result[5] += 0.03270042194092827;
      }
    }
  }
  if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)63.5) ) ) {
        result[0] += 0.012552301255230125;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9456066945606695;
        result[5] += 0.04184100418410042;
      } else {
        result[0] += 0.47761194029850745;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.31343283582089554;
        result[5] += 0.208955223880597;
      }
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
        result[0] += 0;
        result[1] += 0.005197505197505198;
        result[2] += 0;
        result[3] += 0.06756756756756757;
        result[4] += 0.06756756756756757;
        result[5] += 0.8596673596673596;
      } else {
        result[0] += 0.006191950464396285;
        result[1] += 0;
        result[2] += 0.015479876160990712;
        result[3] += 0.5294117647058824;
        result[4] += 0.034055727554179564;
        result[5] += 0.4148606811145511;
      }
    }
  } else {
    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)53.5) ) ) {
      if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)87.5) ) ) {
        result[0] += 0;
        result[1] += 0.07142857142857142;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9285714285714286;
        result[5] += 0;
      } else {
        result[0] += 0.002347417840375587;
        result[1] += 0.9859154929577465;
        result[2] += 0;
        result[3] += 0.002347417840375587;
        result[4] += 0.009389671361502348;
        result[5] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)74.5) ) ) {
        result[0] += 0.7480798771121352;
        result[1] += 0.042242703533026116;
        result[2] += 0.029953917050691243;
        result[3] += 0.03533026113671275;
        result[4] += 0.11597542242703533;
        result[5] += 0.028417818740399385;
      } else {
        result[0] += 0.06451612903225806;
        result[1] += 0.021739130434782608;
        result[2] += 0.6879382889200562;
        result[3] += 0.15568022440392706;
        result[4] += 0.016129032258064516;
        result[5] += 0.05399719495091164;
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.007246376811594203;
        result[1] += 0.010869565217391304;
        result[2] += 0.007246376811594203;
        result[3] += 0.018115942028985508;
        result[4] += 0.9202898550724637;
        result[5] += 0.036231884057971016;
      } else {
        result[0] += 0.04202334630350195;
        result[1] += 0.014785992217898832;
        result[2] += 0.0031128404669260703;
        result[3] += 0.16653696498054474;
        result[4] += 0.04824902723735409;
        result[5] += 0.7252918287937743;
      }
    } else {
      if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        result[0] += 0.0036429872495446266;
        result[1] += 0.8032786885245902;
        result[2] += 0;
        result[3] += 0.023679417122040074;
        result[4] += 0.1621129326047359;
        result[5] += 0.007285974499089253;
      } else {
        result[0] += 0.6666666666666666;
        result[1] += 0.01345565749235474;
        result[2] += 0.06483180428134556;
        result[3] += 0.0837920489296636;
        result[4] += 0.08318042813455657;
        result[5] += 0.08807339449541285;
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)92.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.038461538461538464;
        result[3] += 0.11538461538461539;
        result[4] += 0;
        result[5] += 0.8461538461538461;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.45714285714285713;
        result[3] += 0.3619047619047619;
        result[4] += 0.01904761904761905;
        result[5] += 0.1619047619047619;
      }
    } else {
      if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)95) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.3333333333333333;
        result[3] += 0.5333333333333333;
        result[4] += 0;
        result[5] += 0.13333333333333333;
      } else {
        result[0] += 0.0106951871657754;
        result[1] += 0;
        result[2] += 0.9240641711229947;
        result[3] += 0.057754010695187166;
        result[4] += 0;
        result[5] += 0.0074866310160427805;
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.058558558558558564;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8963963963963965;
        result[5] += 0.04504504504504505;
      } else {
        result[0] += 0.030708661417322834;
        result[1] += 0.0015748031496062992;
        result[2] += 0.008661417322834646;
        result[3] += 0.15669291338582678;
        result[4] += 0.06535433070866142;
        result[5] += 0.7370078740157481;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.00686106346483705;
        result[1] += 0.8216123499142367;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.16981132075471697;
        result[5] += 0.0017152658662092624;
      } else {
        result[0] += 0.6607036374478236;
        result[1] += 0.025044722719141328;
        result[2] += 0.054263565891472874;
        result[3] += 0.08646392367322601;
        result[4] += 0.06678592725104354;
        result[5] += 0.1067382230172928;
      }
    }
  } else {
    if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
      if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)83.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.1016949152542373;
        result[3] += 0.7288135593220338;
        result[4] += 0;
        result[5] += 0.1694915254237288;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.8;
        result[3] += 0.16363636363636364;
        result[4] += 0;
        result[5] += 0.03636363636363636;
      }
    } else {
      if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)87.5) ) ) {
        result[0] += 0.028846153846153848;
        result[1] += 0;
        result[2] += 0.7788461538461539;
        result[3] += 0.1466346153846154;
        result[4] += 0.002403846153846154;
        result[5] += 0.04326923076923077;
      } else {
        result[0] += 0.003676470588235294;
        result[1] += 0;
        result[2] += 0.9705882352941176;
        result[3] += 0.01838235294117647;
        result[4] += 0;
        result[5] += 0.007352941176470588;
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        result[0] += 0.010909090909090912;
        result[1] += 0.003636363636363637;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9745454545454546;
        result[5] += 0.010909090909090912;
      } else {
        result[0] += 0.0449358059914408;
        result[1] += 0.0028530670470756064;
        result[2] += 0.003566333808844508;
        result[3] += 0.16833095577746077;
        result[4] += 0.06276747503566334;
        result[5] += 0.717546362339515;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
        result[0] += 0.011824324324324325;
        result[1] += 0.8378378378378378;
        result[2] += 0;
        result[3] += 0.005067567567567568;
        result[4] += 0.14527027027027026;
        result[5] += 0;
      } else {
        result[0] += 0.718707015130674;
        result[1] += 0.016506189821182942;
        result[2] += 0.06740027510316368;
        result[3] += 0.08253094910591471;
        result[4] += 0.05295735900962861;
        result[5] += 0.061898211829436035;
      }
    }
  } else {
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)104.5) ) ) {
        result[0] += 0.0425531914893617;
        result[1] += 0;
        result[2] += 0.2127659574468085;
        result[3] += 0.5425531914893617;
        result[4] += 0;
        result[5] += 0.20212765957446807;
      } else {
        result[0] += 0.015384615384615387;
        result[1] += 0;
        result[2] += 0.7538461538461539;
        result[3] += 0.1384615384615385;
        result[4] += 0;
        result[5] += 0.09230769230769233;
      }
    } else {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)87.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.48148148148148145;
        result[3] += 0.37037037037037035;
        result[4] += 0;
        result[5] += 0.14814814814814814;
      } else {
        result[0] += 0.014176663031624863;
        result[1] += 0;
        result[2] += 0.9334787350054525;
        result[3] += 0.04034896401308615;
        result[4] += 0;
        result[5] += 0.011995637949836423;
      }
    }
  }
  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)41) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.012987012987012988;
        result[1] += 0.008658008658008658;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.961038961038961;
        result[5] += 0.017316017316017316;
      }
    } else {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
        result[0] += 0.04473438956197577;
        result[1] += 0.012115563839701771;
        result[2] += 0.001863932898415657;
        result[3] += 0.045666356011183594;
        result[4] += 0.08574091332712022;
        result[5] += 0.809878844361603;
      } else {
        result[0] += 0.012779552715654952;
        result[1] += 0;
        result[2] += 0.08306709265175719;
        result[3] += 0.4984025559105431;
        result[4] += 0.025559105431309903;
        result[5] += 0.3801916932907348;
      }
    }
  } else {
    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)51.5) ) ) {
      if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)92) ) ) {
        result[0] += 0;
        result[1] += 0.4571428571428572;
        result[2] += 0;
        result[3] += 0.05714285714285715;
        result[4] += 0.4571428571428572;
        result[5] += 0.028571428571428574;
      } else {
        result[0] += 0.002386634844868735;
        result[1] += 0.9856801909307876;
        result[2] += 0;
        result[3] += 0.00954653937947494;
        result[4] += 0.002386634844868735;
        result[5] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        result[0] += 0.4119106699751861;
        result[1] += 0.05293631100082713;
        result[2] += 0.08188585607940446;
        result[3] += 0.16377171215880892;
        result[4] += 0.15715467328370555;
        result[5] += 0.13234077750206782;
      } else {
        result[0] += 0.35616438356164387;
        result[1] += 0.0026092628832354863;
        result[2] += 0.568819308545336;
        result[3] += 0.0528375733855186;
        result[4] += 0.001956947162426615;
        result[5] += 0.017612524461839533;
      }
    }
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
        result[0] += 0.1314878892733564;
        result[1] += 0.01384083044982699;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8166089965397924;
        result[5] += 0.03806228373702422;
      } else {
        result[0] += 0.0016835016835016834;
        result[1] += 0.010101010101010102;
        result[2] += 0.004208754208754209;
        result[3] += 0.15824915824915825;
        result[4] += 0.07323232323232323;
        result[5] += 0.7525252525252525;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)50) ) ) {
        result[0] += 0;
        result[1] += 0.9886363636363636;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.011363636363636364;
        result[5] += 0;
      } else {
        result[0] += 0.6168168168168169;
        result[1] += 0.04264264264264265;
        result[2] += 0.04864864864864866;
        result[3] += 0.0888888888888889;
        result[4] += 0.10330330330330331;
        result[5] += 0.09969969969969972;
      }
    }
  } else {
    if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
      if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
        result[0] += 0;
        result[1] += 0.010471204188481676;
        result[2] += 0.2094240837696335;
        result[3] += 0.5130890052356021;
        result[4] += 0.020942408376963352;
        result[5] += 0.24607329842931938;
      } else {
        result[0] += 0;
        result[1] += 0.06329113924050633;
        result[2] += 0.689873417721519;
        result[3] += 0.10759493670886076;
        result[4] += 0;
        result[5] += 0.13924050632911392;
      }
    } else {
      if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
        result[0] += 0.2558139534883721;
        result[1] += 0;
        result[2] += 0.5465116279069767;
        result[3] += 0.10465116279069768;
        result[4] += 0;
        result[5] += 0.09302325581395349;
      } else {
        result[0] += 0.009888751545117428;
        result[1] += 0.0012360939431396785;
        result[2] += 0.9258343634116193;
        result[3] += 0.048207663782447466;
        result[4] += 0;
        result[5] += 0.014833127317676144;
      }
    }
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        result[0] += 0.0035460992907801418;
        result[1] += 0.05319148936170213;
        result[2] += 0;
        result[3] += 0.02127659574468085;
        result[4] += 0.8829787234042553;
        result[5] += 0.03900709219858156;
      } else {
        result[0] += 0.0499603489294211;
        result[1] += 0.011895321173671689;
        result[2] += 0.008723235527359239;
        result[3] += 0.15384615384615385;
        result[4] += 0.07057890563045202;
        result[5] += 0.7049960348929422;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)51.5) ) ) {
        result[0] += 0.006535947712418302;
        result[1] += 0.962962962962963;
        result[2] += 0;
        result[3] += 0.006535947712418302;
        result[4] += 0.021786492374727674;
        result[5] += 0.0021786492374727675;
      } else {
        result[0] += 0.6434331797235023;
        result[1] += 0.02880184331797235;
        result[2] += 0.06105990783410138;
        result[3] += 0.08294930875576037;
        result[4] += 0.0956221198156682;
        result[5] += 0.08813364055299538;
      }
    }
  } else {
    if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)90.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.038461538461538464;
        result[4] += 0.07692307692307693;
        result[5] += 0.8846153846153846;
      } else {
        result[0] += 0.09815950920245399;
        result[1] += 0.05521472392638037;
        result[2] += 0.43558282208588955;
        result[3] += 0.2883435582822086;
        result[4] += 0.012269938650306749;
        result[5] += 0.11042944785276074;
      }
    } else {
      if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        result[0] += 0.02523659305993691;
        result[1] += 0;
        result[2] += 0.801261829652997;
        result[3] += 0.14826498422712936;
        result[4] += 0;
        result[5] += 0.02523659305993691;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9742268041237113;
        result[3] += 0.02577319587628866;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        result[0] += 0.007246376811594203;
        result[1] += 0.014492753623188406;
        result[2] += 0;
        result[3] += 0.0036231884057971015;
        result[4] += 0.9021739130434783;
        result[5] += 0.07246376811594203;
      } else {
        result[0] += 0.046456692913385826;
        result[1] += 0.025196850393700787;
        result[2] += 0.0007874015748031496;
        result[3] += 0.16535433070866143;
        result[4] += 0.046456692913385826;
        result[5] += 0.715748031496063;
      }
    } else {
      if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)102.5) ) ) {
        result[0] += 0.6012658227848101;
        result[1] += 0.03567318757192175;
        result[2] += 0.06098964326812428;
        result[3] += 0.07537399309551208;
        result[4] += 0.1334867663981588;
        result[5] += 0.09321058688147296;
      } else {
        result[0] += 0.019230769230769232;
        result[1] += 0.9735576923076923;
        result[2] += 0.007211538461538462;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.11320754716981132;
        result[3] += 0.3490566037735849;
        result[4] += 0.03773584905660377;
        result[5] += 0.5;
      } else {
        result[0] += 0.01639344262295082;
        result[1] += 0.08196721311475409;
        result[2] += 0.5;
        result[3] += 0.32786885245901637;
        result[4] += 0.02459016393442623;
        result[5] += 0.04918032786885246;
      }
    } else {
      if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.23333333333333334;
        result[3] += 0.2;
        result[4] += 0;
        result[5] += 0.5666666666666667;
      } else {
        result[0] += 0.027649769585253458;
        result[1] += 0.002304147465437788;
        result[2] += 0.8951612903225806;
        result[3] += 0.059907834101382486;
        result[4] += 0;
        result[5] += 0.014976958525345621;
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)75.5) ) ) {
      if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)59.5) ) ) {
        result[0] += 0.21774193548387097;
        result[1] += 0.021505376344086023;
        result[2] += 0.002688172043010753;
        result[3] += 0.04032258064516129;
        result[4] += 0.6747311827956989;
        result[5] += 0.043010752688172046;
      } else {
        result[0] += 0.006245662734212352;
        result[1] += 0.011103400416377515;
        result[2] += 0.020818875780707843;
        result[3] += 0.20680083275503122;
        result[4] += 0.07425399028452463;
        result[5] += 0.6807772380291465;
      }
    } else {
      if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)104.5) ) ) {
        result[0] += 0.635956493921945;
        result[1] += 0.07741522712731926;
        result[2] += 0.05438259756877799;
        result[3] += 0.06397952655150352;
        result[4] += 0.11324376199616124;
        result[5] += 0.05502239283429303;
      } else {
        result[0] += 0.009779951100244499;
        result[1] += 0.9828850855745721;
        result[2] += 0.0024449877750611247;
        result[3] += 0;
        result[4] += 0.004889975550122249;
        result[5] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.7741935483870968;
        result[4] += 0;
        result[5] += 0.22580645161290322;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5064935064935064;
        result[3] += 0.19480519480519481;
        result[4] += 0;
        result[5] += 0.2987012987012987;
      }
    } else {
      if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
        result[0] += 0.00546448087431694;
        result[1] += 0.03825136612021858;
        result[2] += 0.73224043715847;
        result[3] += 0.20218579234972678;
        result[4] += 0;
        result[5] += 0.02185792349726776;
      } else {
        result[0] += 0.006666666666666667;
        result[1] += 0;
        result[2] += 0.9506666666666667;
        result[3] += 0.03333333333333333;
        result[4] += 0.0013333333333333333;
        result[5] += 0.008;
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.00425531914893617;
        result[1] += 0.00851063829787234;
        result[2] += 0.00851063829787234;
        result[3] += 0.01276595744680851;
        result[4] += 0.9319148936170213;
        result[5] += 0.03404255319148936;
      } else {
        result[0] += 0.03504482477587612;
        result[1] += 0.018744906275468622;
        result[2] += 0.0016299918500407497;
        result[3] += 0.1491442542787286;
        result[4] += 0.04156479217603912;
        result[5] += 0.7538712306438468;
      }
    } else {
      if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)103.5) ) ) {
        result[0] += 0.5601108033240996;
        result[1] += 0.05318559556786702;
        result[2] += 0.043767313019390575;
        result[3] += 0.09529085872576175;
        result[4] += 0.15124653739612184;
        result[5] += 0.09639889196675898;
      } else {
        result[0] += 0.004618937644341802;
        result[1] += 0.9722863741339492;
        result[2] += 0;
        result[3] += 0.011547344110854505;
        result[4] += 0.011547344110854505;
        result[5] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
      if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.04819277108433735;
        result[3] += 0.13253012048192772;
        result[4] += 0;
        result[5] += 0.8192771084337349;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.21621621621621623;
        result[3] += 0.43243243243243246;
        result[4] += 0;
        result[5] += 0.35135135135135137;
      }
    } else {
      if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)72.5) ) ) {
        result[0] += 0.4081632653061225;
        result[1] += 0.38775510204081637;
        result[2] += 0.14285714285714288;
        result[3] += 0.06122448979591837;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.005224660397074191;
        result[1] += 0.0020898641588296767;
        result[2] += 0.8819226750261234;
        result[3] += 0.08254963427377222;
        result[4] += 0.0010449320794148384;
        result[5] += 0.02716823406478579;
      }
    }
  }
  if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)95) ) ) {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
        result[0] += 0.022364217252396165;
        result[1] += 0.08626198083067092;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8817891373801917;
        result[5] += 0.009584664536741214;
      } else {
        result[0] += 0.6563706563706564;
        result[1] += 0.019305019305019305;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.21621621621621623;
        result[5] += 0.10810810810810811;
      }
    } else {
      if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
        result[0] += 0.001095290251916758;
        result[1] += 0;
        result[2] += 0.001095290251916758;
        result[3] += 0.05257393209200438;
        result[4] += 0.06681270536692223;
        result[5] += 0.8784227820372399;
      } else {
        result[0] += 0.05434782608695652;
        result[1] += 0.030434782608695653;
        result[2] += 0.034782608695652174;
        result[3] += 0.40217391304347827;
        result[4] += 0.07391304347826087;
        result[5] += 0.4043478260869565;
      }
    }
  } else {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)69.5) ) ) {
        result[0] += 0.027777777777777776;
        result[1] += 0.8293650793650794;
        result[2] += 0;
        result[3] += 0.00992063492063492;
        result[4] += 0.1111111111111111;
        result[5] += 0.021825396825396824;
      } else {
        result[0] += 0.8093106535362579;
        result[1] += 0.02775290957923008;
        result[2] += 0.022381378692927483;
        result[3] += 0.052820053715308866;
        result[4] += 0.03401969561324977;
        result[5] += 0.05371530886302596;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)98.5) ) ) {
        result[0] += 0.014134275618374558;
        result[1] += 0.045936395759717315;
        result[2] += 0.37809187279151946;
        result[3] += 0.4204946996466431;
        result[4] += 0.007067137809187279;
        result[5] += 0.13427561837455831;
      } else {
        result[0] += 0.019447287615148412;
        result[1] += 0.0040941658137154556;
        result[2] += 0.8996929375639714;
        result[3] += 0.05322415557830092;
        result[4] += 0.0030706243602865915;
        result[5] += 0.02047082906857728;
      }
    }
  }
  if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9921568627450981;
        result[5] += 0.00784313725490196;
      } else {
        result[0] += 0;
        result[1] += 0.019230769230769232;
        result[2] += 0;
        result[3] += 0.15384615384615385;
        result[4] += 0.4423076923076923;
        result[5] += 0.38461538461538464;
      }
    } else {
      if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
        result[0] += 0.04117108874656908;
        result[1] += 0.0036596523330283625;
        result[2] += 0.0036596523330283625;
        result[3] += 0.06953339432753888;
        result[4] += 0.0677035681610247;
        result[5] += 0.8142726440988106;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.6648936170212766;
        result[4] += 0.010638297872340425;
        result[5] += 0.324468085106383;
      }
    }
  } else {
    if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)57.5) ) ) {
      if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)90.5) ) ) {
        result[0] += 0;
        result[1] += 0.11627906976744186;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8837209302325582;
        result[5] += 0;
      } else {
        result[0] += 0.004545454545454545;
        result[1] += 0.9863636363636363;
        result[2] += 0.0022727272727272726;
        result[3] += 0.004545454545454545;
        result[4] += 0.0022727272727272726;
        result[5] += 0;
      }
    } else {
      if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
        result[0] += 0.7341944255608429;
        result[1] += 0.038069340584636305;
        result[2] += 0.024473147518694765;
        result[3] += 0.05710401087695445;
        result[4] += 0.10061182868796736;
        result[5] += 0.045547246770904146;
      } else {
        result[0] += 0.04906542056074766;
        result[1] += 0.014797507788161994;
        result[2] += 0.7461059190031153;
        result[3] += 0.13161993769470404;
        result[4] += 0.008566978193146417;
        result[5] += 0.04984423676012461;
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)71.5) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.045454545454545456;
        result[2] += 0;
        result[3] += 0.004545454545454545;
        result[4] += 0.8954545454545455;
        result[5] += 0.05454545454545454;
      } else {
        result[0] += 0.014143094841930116;
        result[1] += 0.014143094841930116;
        result[2] += 0.0008319467554076539;
        result[3] += 0.1480865224625624;
        result[4] += 0.059900166389351084;
        result[5] += 0.7628951747088186;
      }
    } else {
      if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)103.5) ) ) {
        result[0] += 0.5498154981549815;
        result[1] += 0.04217185028993147;
        result[2] += 0.04691618344754876;
        result[3] += 0.10384818133895625;
        result[4] += 0.14443858724301528;
        result[5] += 0.11280969952556669;
      } else {
        result[0] += 0.01182033096926714;
        result[1] += 0.9881796690307328;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
      if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.29069767441860467;
        result[3] += 0.5232558139534884;
        result[4] += 0;
        result[5] += 0.18604651162790697;
      } else {
        result[0] += 0.0625;
        result[1] += 0;
        result[2] += 0.78125;
        result[3] += 0.03125;
        result[4] += 0;
        result[5] += 0.125;
      }
    } else {
      if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
        result[0] += 0.033707865168539325;
        result[1] += 0;
        result[2] += 0.5955056179775281;
        result[3] += 0.2696629213483146;
        result[4] += 0;
        result[5] += 0.10112359550561797;
      } else {
        result[0] += 0.008284023668639054;
        result[1] += 0;
        result[2] += 0.9396449704142011;
        result[3] += 0.046153846153846156;
        result[4] += 0;
        result[5] += 0.005917159763313609;
      }
    }
  }
  if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
      if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
        result[0] += 0.006688963210702341;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.919732441471572;
        result[5] += 0.07357859531772576;
      } else {
        result[0] += 0;
        result[1] += 0.9166666666666666;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.08333333333333333;
        result[5] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)85.5) ) ) {
        result[0] += 0.031862745098039214;
        result[1] += 0.004901960784313725;
        result[2] += 0.0012254901960784314;
        result[3] += 0.03799019607843137;
        result[4] += 0.028186274509803922;
        result[5] += 0.8958333333333334;
      } else {
        result[0] += 0.04918032786885246;
        result[1] += 0.00936768149882904;
        result[2] += 0.00702576112412178;
        result[3] += 0.43559718969555034;
        result[4] += 0.0351288056206089;
        result[5] += 0.4637002341920375;
      }
    }
  } else {
    if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        result[0] += 0.003418803418803419;
        result[1] += 0.8188034188034188;
        result[2] += 0;
        result[3] += 0.0017094017094017094;
        result[4] += 0.17264957264957265;
        result[5] += 0.003418803418803419;
      } else {
        result[0] += 0.7473604826546003;
        result[1] += 0.038461538461538464;
        result[2] += 0.010558069381598794;
        result[3] += 0.06033182503770739;
        result[4] += 0.08823529411764706;
        result[5] += 0.05505279034690799;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
        result[0] += 0.017543859649122806;
        result[1] += 0.010526315789473684;
        result[2] += 0.3157894736842105;
        result[3] += 0.4456140350877193;
        result[4] += 0.007017543859649123;
        result[5] += 0.20350877192982456;
      } else {
        result[0] += 0.02602230483271376;
        result[1] += 0.000929368029739777;
        result[2] += 0.8726765799256506;
        result[3] += 0.0734200743494424;
        result[4] += 0;
        result[5] += 0.026951672862453535;
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.08235294117647059;
        result[2] += 0;
        result[3] += 0.011764705882352941;
        result[4] += 0.8627450980392157;
        result[5] += 0.043137254901960784;
      } else {
        result[0] += 0.031862745098039214;
        result[1] += 0.0032679738562091504;
        result[2] += 0.005718954248366013;
        result[3] += 0.17238562091503268;
        result[4] += 0.0718954248366013;
        result[5] += 0.7148692810457516;
      }
    } else {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)50) ) ) {
        result[0] += 0.01152073732718894;
        result[1] += 0.9700460829493087;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.018433179723502304;
        result[5] += 0;
      } else {
        result[0] += 0.6075327510917031;
        result[1] += 0.040938864628820966;
        result[2] += 0.049126637554585156;
        result[3] += 0.08133187772925765;
        result[4] += 0.12500000000000003;
        result[5] += 0.0960698689956332;
      }
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)99.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.15853658536585366;
        result[3] += 0.5487804878048781;
        result[4] += 0.012195121951219513;
        result[5] += 0.2804878048780488;
      } else {
        result[0] += 0.06756756756756759;
        result[1] += 0;
        result[2] += 0.5810810810810811;
        result[3] += 0.2567567567567568;
        result[4] += 0;
        result[5] += 0.09459459459459461;
      }
    } else {
      if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.8229665071770336;
        result[3] += 0.15789473684210528;
        result[4] += 0;
        result[5] += 0.019138755980861247;
      } else {
        result[0] += 0.013966480446927373;
        result[1] += 0;
        result[2] += 0.9413407821229051;
        result[3] += 0.04189944134078212;
        result[4] += 0;
        result[5] += 0.002793296089385475;
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
        result[0] += 0.10174418604651163;
        result[1] += 0.02616279069767442;
        result[2] += 0.023255813953488372;
        result[3] += 0.01744186046511628;
        result[4] += 0.7122093023255814;
        result[5] += 0.11918604651162791;
      } else {
        result[0] += 0.0031323414252153485;
        result[1] += 0.0031323414252153485;
        result[2] += 0.00548159749412686;
        result[3] += 0.15035238841033674;
        result[4] += 0.08535630383711824;
        result[5] += 0.7525450274079875;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        result[0] += 0.002109704641350211;
        result[1] += 0.9556962025316456;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.04219409282700422;
        result[5] += 0;
      } else {
        result[0] += 0.627906976744186;
        result[1] += 0.024448419797257006;
        result[2] += 0.0727489564698867;
        result[3] += 0.09421586165772212;
        result[4] += 0.09958258795468097;
        result[5] += 0.08109719737626714;
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)88) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.05714285714285714;
        result[3] += 0.02857142857142857;
        result[4] += 0.02857142857142857;
        result[5] += 0.8857142857142857;
      } else {
        result[0] += 0.014814814814814815;
        result[1] += 0.13333333333333333;
        result[2] += 0.34814814814814815;
        result[3] += 0.3111111111111111;
        result[4] += 0;
        result[5] += 0.1925925925925926;
      }
    } else {
      if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
        result[0] += 0.02127659574468085;
        result[1] += 0;
        result[2] += 0.776595744680851;
        result[3] += 0.18085106382978725;
        result[4] += 0;
        result[5] += 0.02127659574468085;
      } else {
        result[0] += 0.01293103448275862;
        result[1] += 0;
        result[2] += 0.9540229885057471;
        result[3] += 0.027298850574712645;
        result[4] += 0;
        result[5] += 0.005747126436781609;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        result[0] += 0.003968253968253968;
        result[1] += 0.015873015873015872;
        result[2] += 0;
        result[3] += 0.007936507936507936;
        result[4] += 0.9325396825396826;
        result[5] += 0.03968253968253968;
      } else {
        result[0] += 0.028363047001620744;
        result[1] += 0.011345218800648298;
        result[2] += 0.009724473257698542;
        result[3] += 0.16045380875202594;
        result[4] += 0.06726094003241491;
        result[5] += 0.7228525121555915;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)53.5) ) ) {
        result[0] += 0.0019569471624266144;
        result[1] += 0.9432485322896281;
        result[2] += 0;
        result[3] += 0.005870841487279843;
        result[4] += 0.046966731898238745;
        result[5] += 0.0019569471624266144;
      } else {
        result[0] += 0.6031081888822475;
        result[1] += 0.031081888822474597;
        result[2] += 0.06933652121936641;
        result[3] += 0.1022115959354453;
        result[4] += 0.0986252241482367;
        result[5] += 0.09563658099222953;
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.043478260869565216;
        result[3] += 0.08695652173913043;
        result[4] += 0.15942028985507245;
        result[5] += 0.7101449275362319;
      } else {
        result[0] += 0.04411764705882354;
        result[1] += 0.05147058823529412;
        result[2] += 0.42647058823529416;
        result[3] += 0.3823529411764706;
        result[4] += 0.007352941176470589;
        result[5] += 0.08823529411764708;
      }
    } else {
      if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
        result[0] += 0.23728813559322035;
        result[1] += 0;
        result[2] += 0.6016949152542372;
        result[3] += 0.13559322033898305;
        result[4] += 0;
        result[5] += 0.025423728813559324;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9375750300120048;
        result[3] += 0.058823529411764705;
        result[4] += 0;
        result[5] += 0.003601440576230492;
      }
    }
  }
  if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0.011320754716981131;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9622641509433962;
        result[5] += 0.026415094339622643;
      } else {
        result[0] += 0.03732503888024884;
        result[1] += 0.006998444790046656;
        result[2] += 0.0007776049766718507;
        result[3] += 0.17107309486780714;
        result[4] += 0.052099533437014;
        result[5] += 0.7317262830482115;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)54.5) ) ) {
        result[0] += 0.012195121951219513;
        result[1] += 0.9207317073170732;
        result[2] += 0;
        result[3] += 0.0020325203252032522;
        result[4] += 0.06504065040650407;
        result[5] += 0;
      } else {
        result[0] += 0.6322505800464038;
        result[1] += 0.03712296983758701;
        result[2] += 0.07540603248259863;
        result[3] += 0.08526682134570768;
        result[4] += 0.10034802784222739;
        result[5] += 0.06960556844547565;
      }
    }
  } else {
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)75.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.23255813953488372;
        result[3] += 0.023255813953488372;
        result[4] += 0.11627906976744186;
        result[5] += 0.627906976744186;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.2380952380952381;
        result[3] += 0.6666666666666667;
        result[4] += 0;
        result[5] += 0.09523809523809525;
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0.04545454545454546;
        result[2] += 0.4242424242424243;
        result[3] += 0.33333333333333337;
        result[4] += 0.04545454545454546;
        result[5] += 0.15151515151515155;
      } else {
        result[0] += 0.012114537444933921;
        result[1] += 0;
        result[2] += 0.9140969162995595;
        result[3] += 0.0671806167400881;
        result[4] += 0;
        result[5] += 0.006607929515418502;
      }
    }
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        result[0] += 0.15915119363395225;
        result[1] += 0.034482758620689655;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.6896551724137931;
        result[5] += 0.11671087533156499;
      } else {
        result[0] += 0.0069767441860465115;
        result[1] += 0.002325581395348837;
        result[2] += 0.005426356589147287;
        result[3] += 0.18604651162790697;
        result[4] += 0.05736434108527132;
        result[5] += 0.7418604651162791;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
        result[0] += 0;
        result[1] += 0.9096509240246407;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.09034907597535935;
        result[5] += 0;
      } else {
        result[0] += 0.6606182795698925;
        result[1] += 0.02956989247311828;
        result[2] += 0.06922043010752688;
        result[3] += 0.07526881720430108;
        result[4] += 0.10551075268817205;
        result[5] += 0.05981182795698925;
      }
    }
  } else {
    if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
        result[0] += 0.06716417910447761;
        result[1] += 0.07462686567164178;
        result[2] += 0.16417910447761194;
        result[3] += 0.27611940298507465;
        result[4] += 0.04477611940298507;
        result[5] += 0.373134328358209;
      } else {
        result[0] += 0.05737704918032787;
        result[1] += 0;
        result[2] += 0.7336065573770492;
        result[3] += 0.18442622950819673;
        result[4] += 0;
        result[5] += 0.02459016393442623;
      }
    } else {
      if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.71875;
        result[3] += 0.171875;
        result[4] += 0;
        result[5] += 0.109375;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9649595687331537;
        result[3] += 0.03504043126684636;
        result[4] += 0;
        result[5] += 0;
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
    

    FILE* file = fopen("./codegen_small/dataset_146/split_1/test_data.csv", "r");
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
