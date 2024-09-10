
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
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)69.5) ) ) {
    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)99) ) ) {
        result[0] += 0.004878048780487805;
        result[1] += 0.00975609756097561;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9560975609756097;
        result[5] += 0.02926829268292683;
      } else {
        result[0] += 0;
        result[1] += 0.8888888888888888;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.1111111111111111;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)65.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.02021772939346812;
        result[4] += 0.03576982892690513;
        result[5] += 0.9440124416796267;
      } else {
        result[0] += 0.014285714285714285;
        result[1] += 0.022857142857142857;
        result[2] += 0.03142857142857143;
        result[3] += 0.1657142857142857;
        result[4] += 0.12857142857142856;
        result[5] += 0.6371428571428571;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6066597294484911;
        result[1] += 0.045785639958376693;
        result[2] += 0.01716961498439126;
        result[3] += 0.09781477627471384;
        result[4] += 0.12903225806451613;
        result[5] += 0.10353798126951093;
      } else {
        result[0] += 0.002398081534772182;
        result[1] += 0.9784172661870504;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.009592326139088728;
        result[5] += 0.009592326139088728;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        result[0] += 0.003875968992248062;
        result[1] += 0.015503875968992248;
        result[2] += 0.17829457364341086;
        result[3] += 0.5503875968992248;
        result[4] += 0.05426356589147287;
        result[5] += 0.19767441860465115;
      } else {
        result[0] += 0.029354207436399216;
        result[1] += 0;
        result[2] += 0.8767123287671232;
        result[3] += 0.07729941291585127;
        result[4] += 0.0019569471624266144;
        result[5] += 0.014677103718199608;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.02586206896551724;
        result[2] += 0.008620689655172414;
        result[3] += 0.008620689655172414;
        result[4] += 0.9008620689655172;
        result[5] += 0.05603448275862069;
      } else {
        result[0] += 0.030976965845909452;
        result[1] += 0.011119936457505957;
        result[2] += 0.007942811755361398;
        result[3] += 0.17315329626687848;
        result[4] += 0.05877680698967434;
        result[5] += 0.7180301826846703;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)104.5) ) ) {
        result[0] += 0.6033402922755741;
        result[1] += 0.04592901878914405;
        result[2] += 0.07933194154488518;
        result[3] += 0.07933194154488518;
        result[4] += 0.11638830897703549;
        result[5] += 0.075678496868476;
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
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)67) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8333333333333334;
        result[5] += 0.16666666666666666;
      } else {
        result[0] += 0.06666666666666667;
        result[1] += 0;
        result[2] += 0.18666666666666668;
        result[3] += 0.3466666666666667;
        result[4] += 0.013333333333333334;
        result[5] += 0.38666666666666666;
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
        result[0] += 0.02608695652173913;
        result[1] += 0;
        result[2] += 0.5217391304347826;
        result[3] += 0.40869565217391307;
        result[4] += 0;
        result[5] += 0.043478260869565216;
      } else {
        result[0] += 0.004878048780487805;
        result[1] += 0;
        result[2] += 0.9292682926829269;
        result[3] += 0.0524390243902439;
        result[4] += 0;
        result[5] += 0.013414634146341463;
      }
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        result[0] += 0.4440389294403893;
        result[1] += 0.06204379562043796;
        result[2] += 0;
        result[3] += 0.0170316301703163;
        result[4] += 0.41605839416058393;
        result[5] += 0.06082725060827251;
      } else {
        result[0] += 0.0702280912364946;
        result[1] += 0.02040816326530612;
        result[2] += 0.030012004801920768;
        result[3] += 0.18067226890756302;
        result[4] += 0.09423769507803122;
        result[5] += 0.6044417767106842;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)67) ) ) {
        result[0] += 0;
        result[1] += 0.9976525821596244;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.002347417840375587;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.35;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.65;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75.5) ) ) {
        result[0] += 0.9729299363057324;
        result[1] += 0.0031847133757961785;
        result[2] += 0.004777070063694267;
        result[3] += 0.009554140127388535;
        result[4] += 0.009554140127388535;
        result[5] += 0;
      } else {
        result[0] += 0.18181818181818182;
        result[1] += 0;
        result[2] += 0.4214876033057851;
        result[3] += 0.1652892561983471;
        result[4] += 0.03305785123966942;
        result[5] += 0.19834710743801653;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
        result[0] += 0.26612903225806456;
        result[1] += 0;
        result[2] += 0.33870967741935487;
        result[3] += 0.20967741935483875;
        result[4] += 0.040322580645161296;
        result[5] += 0.14516129032258068;
      } else {
        result[0] += 0.003925417075564278;
        result[1] += 0;
        result[2] += 0.8822374877330716;
        result[3] += 0.09813542688910697;
        result[4] += 0;
        result[5] += 0.015701668302257114;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)85.5) ) ) {
        result[0] += 0.05776173285198556;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8411552346570397;
        result[5] += 0.10108303249097472;
      } else {
        result[0] += 0.417910447761194;
        result[1] += 0.014925373134328358;
        result[2] += 0.05970149253731343;
        result[3] += 0;
        result[4] += 0.417910447761194;
        result[5] += 0.08955223880597014;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
        result[0] += 0;
        result[1] += 0.004956629491945477;
        result[2] += 0.0037174721189591076;
        result[3] += 0.03593556381660471;
        result[4] += 0.061957868649318466;
        result[5] += 0.8934324659231723;
      } else {
        result[0] += 0;
        result[1] += 0.012690355329949238;
        result[2] += 0.007614213197969543;
        result[3] += 0.4746192893401015;
        result[4] += 0.05583756345177665;
        result[5] += 0.44923857868020306;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0;
        result[1] += 0.823943661971831;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.176056338028169;
        result[5] += 0;
      } else {
        result[0] += 0.7537473233404711;
        result[1] += 0.018558172733761598;
        result[2] += 0.037116345467523196;
        result[3] += 0.05281941470378301;
        result[4] += 0.07637401855817273;
        result[5] += 0.06138472519628837;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)83.5) ) ) {
        result[0] += 0.14410480349344978;
        result[1] += 0.03056768558951965;
        result[2] += 0.4039301310043668;
        result[3] += 0.2576419213973799;
        result[4] += 0.017467248908296942;
        result[5] += 0.1462882096069869;
      } else {
        result[0] += 0.00117096018735363;
        result[1] += 0.00468384074941452;
        result[2] += 0.9098360655737705;
        result[3] += 0.08430913348946135;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        result[0] += 0.014336917562724014;
        result[1] += 0.007168458781362007;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9175627240143369;
        result[5] += 0.06093189964157706;
      } else {
        result[0] += 0.038619556285949055;
        result[1] += 0.004108463434675432;
        result[2] += 0.014790468364831553;
        result[3] += 0.15283483976992604;
        result[4] += 0.05258833196384552;
        result[5] += 0.7370583401807724;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)56.5) ) ) {
        result[0] += 0.0021321961620469083;
        result[1] += 0.9402985074626866;
        result[2] += 0;
        result[3] += 0.0042643923240938165;
        result[4] += 0.053304904051172705;
        result[5] += 0;
      } else {
        result[0] += 0.6277128547579299;
        result[1] += 0.038953811908736785;
        result[2] += 0.06900389538119088;
        result[3] += 0.0879243183082916;
        result[4] += 0.10740122426266;
        result[5] += 0.06900389538119088;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)103.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.1234567901234568;
        result[3] += 0.45679012345679015;
        result[4] += 0;
        result[5] += 0.4197530864197531;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.8421052631578948;
        result[3] += 0.052631578947368425;
        result[4] += 0;
        result[5] += 0.10526315789473685;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        result[0] += 0.035608308605341255;
        result[1] += 0.0029673590504451044;
        result[2] += 0.7863501483679526;
        result[3] += 0.1305637982195846;
        result[4] += 0.011869436201780418;
        result[5] += 0.03264094955489615;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9665071770334926;
        result[3] += 0.02870813397129186;
        result[4] += 0.0015948963317384366;
        result[5] += 0.003189792663476873;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0.008032128514056224;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9437751004016064;
        result[5] += 0.04819277108433735;
      } else {
        result[0] += 0.03366174055829228;
        result[1] += 0.0008210180623973727;
        result[2] += 0.004105090311986864;
        result[3] += 0.14203612479474548;
        result[4] += 0.054187192118226604;
        result[5] += 0.7651888341543513;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        result[0] += 0.006493506493506494;
        result[1] += 0.9805194805194806;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.012987012987012988;
        result[5] += 0;
      } else {
        result[0] += 0.6233839235525577;
        result[1] += 0.0359752670039348;
        result[2] += 0.07138842046093312;
        result[3] += 0.0781337830241709;
        result[4] += 0.12535132096683532;
        result[5] += 0.06576728499156831;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)95) ) ) {
        result[0] += 0;
        result[1] += 0.21428571428571427;
        result[2] += 0.07142857142857142;
        result[3] += 0.047619047619047616;
        result[4] += 0.047619047619047616;
        result[5] += 0.6190476190476191;
      } else {
        result[0] += 0.03076923076923077;
        result[1] += 0.007692307692307693;
        result[2] += 0.3923076923076923;
        result[3] += 0.3769230769230769;
        result[4] += 0.05384615384615385;
        result[5] += 0.13846153846153847;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7661691542288558;
        result[3] += 0.19900497512437815;
        result[4] += 0;
        result[5] += 0.03482587064676618;
      } else {
        result[0] += 0.004026845637583893;
        result[1] += 0;
        result[2] += 0.9557046979865772;
        result[3] += 0.03758389261744966;
        result[4] += 0;
        result[5] += 0.0026845637583892616;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        result[0] += 0.003521126760563381;
        result[1] += 0.07746478873239437;
        result[2] += 0.010563380281690142;
        result[3] += 0.003521126760563381;
        result[4] += 0.8661971830985916;
        result[5] += 0.03873239436619719;
      } else {
        result[0] += 0.03784693019343986;
        result[1] += 0.001682085786375105;
        result[2] += 0.017661900756938603;
        result[3] += 0.159798149705635;
        result[4] += 0.07317073170731707;
        result[5] += 0.7098402018502944;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)104.5) ) ) {
        result[0] += 0.6500867553499132;
        result[1] += 0.05725853094274147;
        result[2] += 0.04569115095430885;
        result[3] += 0.07171775592828225;
        result[4] += 0.10931174089068826;
        result[5] += 0.06593406593406594;
      } else {
        result[0] += 0;
        result[1] += 0.9791666666666666;
        result[2] += 0;
        result[3] += 0.011574074074074073;
        result[4] += 0.004629629629629629;
        result[5] += 0.004629629629629629;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0.005847953216374269;
        result[2] += 0.13450292397660818;
        result[3] += 0.5087719298245614;
        result[4] += 0.017543859649122806;
        result[5] += 0.3333333333333333;
      } else {
        result[0] += 0.033333333333333326;
        result[1] += 0;
        result[2] += 0.6416666666666666;
        result[3] += 0.29999999999999993;
        result[4] += 0.016666666666666663;
        result[5] += 0.008333333333333331;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
        result[0] += 0.21311475409836064;
        result[1] += 0.04918032786885246;
        result[2] += 0.36065573770491804;
        result[3] += 0.04918032786885246;
        result[4] += 0.03278688524590164;
        result[5] += 0.29508196721311475;
      } else {
        result[0] += 0.009523809523809526;
        result[1] += 0;
        result[2] += 0.9142857142857144;
        result[3] += 0.06904761904761907;
        result[4] += 0;
        result[5] += 0.0071428571428571435;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.0234375;
        result[1] += 0;
        result[2] += 0.01953125;
        result[3] += 0;
        result[4] += 0.9296875;
        result[5] += 0.02734375;
      } else {
        result[0] += 0.0321285140562249;
        result[1] += 0.0024096385542168677;
        result[2] += 0.004819277108433735;
        result[3] += 0.13654618473895583;
        result[4] += 0.061847389558232935;
        result[5] += 0.7622489959839357;
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)104.5) ) ) {
        result[0] += 0.6730196545562835;
        result[1] += 0.07385348421679572;
        result[2] += 0.03513996426444312;
        result[3] += 0.05896366885050625;
        result[4] += 0.12030970815961882;
        result[5] += 0.03871351995235259;
      } else {
        result[0] += 0;
        result[1] += 0.9927710843373494;
        result[2] += 0;
        result[3] += 0.007228915662650603;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)86) ) ) {
        result[0] += 0;
        result[1] += 0.10714285714285714;
        result[2] += 0.10714285714285714;
        result[3] += 0.08928571428571429;
        result[4] += 0.125;
        result[5] += 0.5714285714285714;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.275;
        result[3] += 0.525;
        result[4] += 0.05625;
        result[5] += 0.14375;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.714765100671141;
        result[3] += 0.23154362416107382;
        result[4] += 0;
        result[5] += 0.053691275167785234;
      } else {
        result[0] += 0.026499302649930265;
        result[1] += 0;
        result[2] += 0.9121338912133892;
        result[3] += 0.058577405857740586;
        result[4] += 0.001394700139470014;
        result[5] += 0.001394700139470014;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.02643171806167401;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.933920704845815;
        result[5] += 0.039647577092511016;
      } else {
        result[0] += 0;
        result[1] += 0.125;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.20833333333333334;
        result[5] += 0.6666666666666666;
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)87.5) ) ) {
        result[0] += 0.020674646354733407;
        result[1] += 0.001088139281828074;
        result[2] += 0;
        result[3] += 0.05331882480957562;
        result[4] += 0.09684439608269858;
        result[5] += 0.8280739934711643;
      } else {
        result[0] += 0.07444168734491315;
        result[1] += 0.034739454094292806;
        result[2] += 0.04962779156327544;
        result[3] += 0.4267990074441687;
        result[4] += 0.06699751861042183;
        result[5] += 0.34739454094292804;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9891304347826086;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.010869565217391304;
        result[5] += 0;
      } else {
        result[0] += 0.685678859268444;
        result[1] += 0.030378177309361442;
        result[2] += 0.018598884066955985;
        result[3] += 0.05207687538747676;
        result[4] += 0.13143211407315564;
        result[5] += 0.08183508989460633;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        result[0] += 0.013574660633484163;
        result[1] += 0;
        result[2] += 0.39819004524886875;
        result[3] += 0.3936651583710407;
        result[4] += 0.03167420814479638;
        result[5] += 0.16289592760180996;
      } else {
        result[0] += 0.056308654848800835;
        result[1] += 0.006256517205422315;
        result[2] += 0.8581856100104275;
        result[3] += 0.06256517205422316;
        result[4] += 0;
        result[5] += 0.016684045881126174;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.03629032258064517;
        result[2] += 0;
        result[3] += 0.03225806451612904;
        result[4] += 0.8790322580645162;
        result[5] += 0.052419354838709686;
      } else {
        result[0] += 0.052125100240577385;
        result[1] += 0.008821170809943865;
        result[2] += 0.0008019246190858059;
        result[3] += 0.1475541299117883;
        result[4] += 0.06415396952686447;
        result[5] += 0.7265437048917401;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9746543778801844;
        result[2] += 0;
        result[3] += 0.004608294930875576;
        result[4] += 0.020737327188940093;
        result[5] += 0;
      } else {
        result[0] += 0.6217532467532467;
        result[1] += 0.04004329004329004;
        result[2] += 0.0633116883116883;
        result[3] += 0.08116883116883117;
        result[4] += 0.12175324675324675;
        result[5] += 0.07196969696969698;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
        result[0] += 0;
        result[1] += 0.0375;
        result[2] += 0.125;
        result[3] += 0.325;
        result[4] += 0.0375;
        result[5] += 0.475;
      } else {
        result[0] += 0;
        result[1] += 0.030303030303030304;
        result[2] += 0.696969696969697;
        result[3] += 0.15151515151515152;
        result[4] += 0;
        result[5] += 0.12121212121212122;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7361111111111112;
        result[3] += 0.25462962962962965;
        result[4] += 0;
        result[5] += 0.009259259259259259;
      } else {
        result[0] += 0.011111111111111113;
        result[1] += 0;
        result[2] += 0.9444444444444445;
        result[3] += 0.04166666666666667;
        result[4] += 0;
        result[5] += 0.0027777777777777783;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0033112582781456954;
        result[3] += 0;
        result[4] += 0.9039735099337748;
        result[5] += 0.09271523178807947;
      } else {
        result[0] += 0.06733393994540492;
        result[1] += 0.025477707006369428;
        result[2] += 0.00545950864422202;
        result[3] += 0.08098271155595996;
        result[4] += 0.06005459508644222;
        result[5] += 0.7606915377616015;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)58.5) ) ) {
        result[0] += 0;
        result[1] += 0.945770065075922;
        result[2] += 0;
        result[3] += 0.019522776572668116;
        result[4] += 0.03253796095444686;
        result[5] += 0.002169197396963124;
      } else {
        result[0] += 0.577209797657082;
        result[1] += 0.023429179978700747;
        result[2] += 0.05324813631522897;
        result[3] += 0.14110756123535675;
        result[4] += 0.09424920127795527;
        result[5] += 0.11075612353567625;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
        result[0] += 0.0196078431372549;
        result[1] += 0.00980392156862745;
        result[2] += 0.19607843137254902;
        result[3] += 0.5392156862745098;
        result[4] += 0.049019607843137254;
        result[5] += 0.18627450980392157;
      } else {
        result[0] += 0;
        result[1] += 0.06185567010309279;
        result[2] += 0.597938144329897;
        result[3] += 0.2371134020618557;
        result[4] += 0;
        result[5] += 0.10309278350515465;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0.10714285714285715;
        result[1] += 0;
        result[2] += 0.5357142857142858;
        result[3] += 0.3214285714285715;
        result[4] += 0;
        result[5] += 0.03571428571428572;
      } else {
        result[0] += 0.027939464493597205;
        result[1] += 0;
        result[2] += 0.9068684516880093;
        result[3] += 0.059371362048894066;
        result[4] += 0;
        result[5] += 0.005820721769499418;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
        result[0] += 0.0030959752321981426;
        result[1] += 0.0030959752321981426;
        result[2] += 0;
        result[3] += 0.018575851393188854;
        result[4] += 0.8668730650154799;
        result[5] += 0.10835913312693499;
      } else {
        result[0] += 0.03228410008071025;
        result[1] += 0.004842615012106538;
        result[2] += 0.00887812752219532;
        result[3] += 0.1549636803874092;
        result[4] += 0.05649717514124294;
        result[5] += 0.7425343018563357;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        result[0] += 0.011695906432748537;
        result[1] += 0.8518518518518519;
        result[2] += 0;
        result[3] += 0.003898635477582846;
        result[4] += 0.13255360623781676;
        result[5] += 0;
      } else {
        result[0] += 0.6763142350856468;
        result[1] += 0.02598936798582398;
        result[2] += 0.07088009450679268;
        result[3] += 0.09096278795038393;
        result[4] += 0.07147076196101594;
        result[5] += 0.06438275251033668;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.10344827586206896;
        result[3] += 0.3448275862068966;
        result[4] += 0.017241379310344827;
        result[5] += 0.5344827586206896;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.61139896373057;
        result[3] += 0.2901554404145078;
        result[4] += 0.010362694300518137;
        result[5] += 0.08808290155440415;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)76) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        result[0] += 0.010037641154328732;
        result[1] += 0.002509410288582183;
        result[2] += 0.9222082810539524;
        result[3] += 0.05520702634880803;
        result[4] += 0;
        result[5] += 0.010037641154328732;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.03076923076923077;
        result[2] += 0;
        result[3] += 0.03461538461538462;
        result[4] += 0.8923076923076924;
        result[5] += 0.04230769230769231;
      } else {
        result[0] += 0.048859934853420196;
        result[1] += 0.004071661237785016;
        result[2] += 0.0016286644951140066;
        result[3] += 0.15228013029315962;
        result[4] += 0.059446254071661236;
        result[5] += 0.7337133550488599;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0.9634703196347032;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.0365296803652968;
        result[5] += 0;
      } else {
        result[0] += 0.6685150955021565;
        result[1] += 0.02649414664202095;
        result[2] += 0.04374614910659273;
        result[3] += 0.08379544054220579;
        result[4] += 0.11583487369069624;
        result[5] += 0.061614294516327786;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0.011834319526627219;
        result[2] += 0.14792899408284024;
        result[3] += 0.5207100591715976;
        result[4] += 0.029585798816568046;
        result[5] += 0.28994082840236685;
      } else {
        result[0] += 0.007352941176470589;
        result[1] += 0;
        result[2] += 0.6911764705882354;
        result[3] += 0.26470588235294124;
        result[4] += 0;
        result[5] += 0.03676470588235295;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
        result[0] += 0.3333333333333333;
        result[1] += 0.14285714285714285;
        result[2] += 0.2857142857142857;
        result[3] += 0.09523809523809523;
        result[4] += 0;
        result[5] += 0.14285714285714285;
      } else {
        result[0] += 0.016129032258064516;
        result[1] += 0;
        result[2] += 0.9193548387096774;
        result[3] += 0.06236559139784946;
        result[4] += 0;
        result[5] += 0.002150537634408602;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.16434540389972147;
        result[1] += 0.0055710306406685246;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7242339832869081;
        result[5] += 0.10584958217270196;
      } else {
        result[0] += 0;
        result[1] += 0.010353753235547885;
        result[2] += 0.012079378774805867;
        result[3] += 0.16824849007765316;
        result[4] += 0.04745470232959448;
        result[5] += 0.7618636755823986;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
        result[0] += 0.009328358208955223;
        result[1] += 0.8526119402985075;
        result[2] += 0;
        result[3] += 0.007462686567164179;
        result[4] += 0.13059701492537312;
        result[5] += 0;
      } else {
        result[0] += 0.7263969171483622;
        result[1] += 0.0340398201669878;
        result[2] += 0.05908798972382787;
        result[3] += 0.06294155427103404;
        result[4] += 0.07064868336544637;
        result[5] += 0.046885035324341684;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)94.5) ) ) {
        result[0] += 0;
        result[1] += 0.022099447513812154;
        result[2] += 0.04419889502762431;
        result[3] += 0.3867403314917127;
        result[4] += 0.09944751381215469;
        result[5] += 0.44751381215469616;
      } else {
        result[0] += 0.015625;
        result[1] += 0;
        result[2] += 0.53125;
        result[3] += 0.3984375;
        result[4] += 0;
        result[5] += 0.0546875;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
        result[0] += 0.4782608695652174;
        result[1] += 0;
        result[2] += 0.17391304347826086;
        result[3] += 0;
        result[4] += 0.30434782608695654;
        result[5] += 0.043478260869565216;
      } else {
        result[0] += 0.0033975084937712344;
        result[1] += 0;
        result[2] += 0.8958097395243488;
        result[3] += 0.08833522083805209;
        result[4] += 0.0011325028312570782;
        result[5] += 0.011325028312570781;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        result[0] += 0.12103746397694524;
        result[1] += 0.002881844380403458;
        result[2] += 0.008645533141210375;
        result[3] += 0;
        result[4] += 0.7723342939481268;
        result[5] += 0.09510086455331412;
      } else {
        result[0] += 0;
        result[1] += 0.00422654268808115;
        result[2] += 0.0008453085376162299;
        result[3] += 0.16568047337278108;
        result[4] += 0.049873203719357564;
        result[5] += 0.779374471682164;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)54.5) ) ) {
        result[0] += 0;
        result[1] += 0.9665271966527197;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.03347280334728033;
        result[5] += 0;
      } else {
        result[0] += 0.6171786120591581;
        result[1] += 0.0335608646188851;
        result[2] += 0.07849829351535836;
        result[3] += 0.09158134243458475;
        result[4] += 0.10978384527872583;
        result[5] += 0.06939704209328783;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)87.5) ) ) {
        result[0] += 0;
        result[1] += 0.014492753623188406;
        result[2] += 0.028985507246376812;
        result[3] += 0.10144927536231885;
        result[4] += 0.14492753623188406;
        result[5] += 0.7101449275362319;
      } else {
        result[0] += 0;
        result[1] += 0.056818181818181816;
        result[2] += 0.42045454545454547;
        result[3] += 0.3977272727272727;
        result[4] += 0;
        result[5] += 0.125;
      }
    } else {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
        result[0] += 0.07142857142857142;
        result[1] += 0;
        result[2] += 0.5535714285714286;
        result[3] += 0.35714285714285715;
        result[4] += 0.017857142857142856;
        result[5] += 0;
      } else {
        result[0] += 0.01652892561983471;
        result[1] += 0;
        result[2] += 0.9279811097992916;
        result[3] += 0.05076741440377804;
        result[4] += 0;
        result[5] += 0.004722550177095631;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90) ) ) {
        result[0] += 0;
        result[1] += 0.29411764705882354;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.5882352941176471;
        result[5] += 0.11764705882352941;
      } else {
        result[0] += 0;
        result[1] += 0.9976689976689976;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.002331002331002331;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
        result[0] += 0.03754266211604096;
        result[1] += 0.017064846416382253;
        result[2] += 0.0013651877133105802;
        result[3] += 0.1372013651877133;
        result[4] += 0.1931740614334471;
        result[5] += 0.6136518771331058;
      } else {
        result[0] += 0.6411290322580645;
        result[1] += 0.05011520737327189;
        result[2] += 0.03571428571428571;
        result[3] += 0.06970046082949309;
        result[4] += 0.1336405529953917;
        result[5] += 0.06970046082949309;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.18633540372670807;
        result[3] += 0.4658385093167702;
        result[4] += 0.012422360248447204;
        result[5] += 0.33540372670807456;
      } else {
        result[0] += 0.06906906906906907;
        result[1] += 0;
        result[2] += 0.7417417417417418;
        result[3] += 0.17717717717717718;
        result[4] += 0;
        result[5] += 0.012012012012012012;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)99.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7647058823529411;
        result[3] += 0.18823529411764706;
        result[4] += 0;
        result[5] += 0.047058823529411764;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9550000000000001;
        result[3] += 0.04166666666666667;
        result[4] += 0;
        result[5] += 0.003333333333333334;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.09055118110236221;
        result[2] += 0;
        result[3] += 0.027559055118110236;
        result[4] += 0.8543307086614174;
        result[5] += 0.027559055118110236;
      } else {
        result[0] += 0.02707581227436823;
        result[1] += 0.004512635379061372;
        result[2] += 0.010830324909747292;
        result[3] += 0.11732851985559567;
        result[4] += 0.05415162454873646;
        result[5] += 0.7861010830324909;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)53.5) ) ) {
        result[0] += 0.0041237113402061865;
        result[1] += 0.9216494845360825;
        result[2] += 0.014432989690721652;
        result[3] += 0.0041237113402061865;
        result[4] += 0.053608247422680416;
        result[5] += 0.0020618556701030933;
      } else {
        result[0] += 0.6076020122973729;
        result[1] += 0.03018446059250978;
        result[2] += 0.046953605366126326;
        result[3] += 0.09949692565679151;
        result[4] += 0.11514812744550028;
        result[5] += 0.10061486864169927;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
        result[0] += 0.006060606060606061;
        result[1] += 0.04242424242424243;
        result[2] += 0.1393939393939394;
        result[3] += 0.4121212121212121;
        result[4] += 0.06060606060606061;
        result[5] += 0.3393939393939394;
      } else {
        result[0] += 0.022556390977443608;
        result[1] += 0.03007518796992481;
        result[2] += 0.5864661654135338;
        result[3] += 0.15037593984962405;
        result[4] += 0.03007518796992481;
        result[5] += 0.18045112781954886;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
        result[0] += 0.7272727272727273;
        result[1] += 0;
        result[2] += 0.2727272727272727;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.0056753688989784334;
        result[1] += 0;
        result[2] += 0.9035187287173666;
        result[3] += 0.07604994324631101;
        result[4] += 0.0011350737797956867;
        result[5] += 0.01362088535754824;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.046762589928057555;
        result[2] += 0.017985611510791366;
        result[3] += 0.0035971223021582736;
        result[4] += 0.8561151079136691;
        result[5] += 0.07553956834532374;
      } else {
        result[0] += 0.02972749793559042;
        result[1] += 0.00990916597853014;
        result[2] += 0.006606110652353427;
        result[3] += 0.15606936416184972;
        result[4] += 0.08918249380677126;
        result[5] += 0.708505367464905;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)49.5) ) ) {
        result[0] += 0.06730769230769232;
        result[1] += 0.920673076923077;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.012019230769230772;
        result[5] += 0;
      } else {
        result[0] += 0.583969465648855;
        result[1] += 0.06543075245365322;
        result[2] += 0.04907306434023991;
        result[3] += 0.08505997818974918;
        result[4] += 0.1134133042529989;
        result[5] += 0.10305343511450382;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)83.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.41379310344827586;
        result[3] += 0.45689655172413796;
        result[4] += 0;
        result[5] += 0.12931034482758622;
      } else {
        result[0] += 0.08403361344537816;
        result[1] += 0;
        result[2] += 0.7563025210084033;
        result[3] += 0.12605042016806722;
        result[4] += 0;
        result[5] += 0.03361344537815126;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
        result[0] += 0.006968641114982578;
        result[1] += 0;
        result[2] += 0.8501742160278746;
        result[3] += 0.1254355400696864;
        result[4] += 0;
        result[5] += 0.017421602787456445;
      } else {
        result[0] += 0.0035398230088495575;
        result[1] += 0;
        result[2] += 0.9734513274336283;
        result[3] += 0.019469026548672566;
        result[4] += 0;
        result[5] += 0.0035398230088495575;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.03414634146341464;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9365853658536586;
        result[5] += 0.02926829268292683;
      } else {
        result[0] += 0.025848142164781908;
        result[1] += 0.009693053311793215;
        result[2] += 0.015347334410339256;
        result[3] += 0.154281098546042;
        result[4] += 0.04281098546042003;
        result[5] += 0.7520193861066236;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)103.5) ) ) {
        result[0] += 0.5849639546858909;
        result[1] += 0.05458290422245109;
        result[2] += 0.06745623069001032;
        result[3] += 0.08290422245108138;
        result[4] += 0.13079299691040167;
        result[5] += 0.0792996910401648;
      } else {
        result[0] += 0.006944444444444445;
        result[1] += 0.9907407407407408;
        result[2] += 0.002314814814814815;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 1;
      } else {
        result[0] += 0.006756756756756757;
        result[1] += 0;
        result[2] += 0.41216216216216217;
        result[3] += 0.38513513513513514;
        result[4] += 0.013513513513513514;
        result[5] += 0.18243243243243243;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
        result[0] += 0.21052631578947367;
        result[1] += 0.15789473684210525;
        result[2] += 0.21052631578947367;
        result[3] += 0;
        result[4] += 0.3157894736842105;
        result[5] += 0.10526315789473684;
      } else {
        result[0] += 0.007281553398058253;
        result[1] += 0;
        result[2] += 0.9150485436893204;
        result[3] += 0.06674757281553398;
        result[4] += 0;
        result[5] += 0.010922330097087379;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)64.5) ) ) {
        result[0] += 0;
        result[1] += 0.009708737864077669;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9757281553398058;
        result[5] += 0.014563106796116505;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.043478260869565216;
        result[3] += 0.08695652173913043;
        result[4] += 0.5217391304347826;
        result[5] += 0.34782608695652173;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
        result[0] += 0.04801670146137787;
        result[1] += 0.012526096033402923;
        result[2] += 0.0010438413361169101;
        result[3] += 0.022964509394572025;
        result[4] += 0.059498956158663886;
        result[5] += 0.8559498956158664;
      } else {
        result[0] += 0.005571030640668524;
        result[1] += 0.008356545961002786;
        result[2] += 0.04735376044568245;
        result[3] += 0.5069637883008357;
        result[4] += 0.016713091922005572;
        result[5] += 0.415041782729805;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0.9634703196347032;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.0365296803652968;
        result[5] += 0;
      } else {
        result[0] += 0.680837954405422;
        result[1] += 0.0474430067775724;
        result[2] += 0.006777572396796057;
        result[3] += 0.06469500924214418;
        result[4] += 0.14171287738755392;
        result[5] += 0.0585335797905114;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
        result[0] += 0.015105740181268885;
        result[1] += 0;
        result[2] += 0.4682779456193354;
        result[3] += 0.32024169184290036;
        result[4] += 0.006042296072507554;
        result[5] += 0.19033232628398794;
      } else {
        result[0] += 0.03265765765765766;
        result[1] += 0;
        result[2] += 0.8986486486486487;
        result[3] += 0.05067567567567568;
        result[4] += 0.0033783783783783786;
        result[5] += 0.01463963963963964;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        result[0] += 0.003663003663003663;
        result[1] += 0.029304029304029304;
        result[2] += 0;
        result[3] += 0.003663003663003663;
        result[4] += 0.9157509157509157;
        result[5] += 0.047619047619047616;
      } else {
        result[0] += 0.032062391681109186;
        result[1] += 0.011265164644714038;
        result[2] += 0.005199306759098787;
        result[3] += 0.1438474870017331;
        result[4] += 0.07885615251299827;
        result[5] += 0.7287694974003466;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.005338078291814947;
        result[1] += 0.8416370106761566;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.15302491103202848;
        result[5] += 0;
      } else {
        result[0] += 0.6869618696186962;
        result[1] += 0.015990159901599015;
        result[2] += 0.047355473554735544;
        result[3] += 0.08118081180811808;
        result[4] += 0.06642066420664207;
        result[5] += 0.10209102091020911;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)83.5) ) ) {
        result[0] += 0;
        result[1] += 0.1724137931034483;
        result[2] += 0.1724137931034483;
        result[3] += 0.034482758620689655;
        result[4] += 0.034482758620689655;
        result[5] += 0.5862068965517241;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.17777777777777778;
        result[3] += 0.5111111111111111;
        result[4] += 0.014814814814814815;
        result[5] += 0.2962962962962963;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
        result[0] += 0.03225806451612903;
        result[1] += 0;
        result[2] += 0.6359447004608295;
        result[3] += 0.2857142857142857;
        result[4] += 0;
        result[5] += 0.04608294930875576;
      } else {
        result[0] += 0.03132530120481928;
        result[1] += 0;
        result[2] += 0.9168674698795181;
        result[3] += 0.05060240963855422;
        result[4] += 0;
        result[5] += 0.0012048192771084338;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        result[0] += 0.13296398891966763;
        result[1] += 0.04709141274238228;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7119113573407203;
        result[5] += 0.10803324099722993;
      } else {
        result[0] += 0.0035650623885918;
        result[1] += 0.0017825311942959;
        result[2] += 0.00267379679144385;
        result[3] += 0.16934046345811052;
        result[4] += 0.05614973262032086;
        result[5] += 0.7664884135472371;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)48.5) ) ) {
        result[0] += 0.04;
        result[1] += 0.952;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.008;
        result[5] += 0;
      } else {
        result[0] += 0.6011652542372882;
        result[1] += 0.07997881355932203;
        result[2] += 0.04978813559322034;
        result[3] += 0.07627118644067797;
        result[4] += 0.12870762711864406;
        result[5] += 0.06408898305084745;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.1;
        result[3] += 0.54;
        result[4] += 0;
        result[5] += 0.36;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6095238095238096;
        result[3] += 0.3333333333333333;
        result[4] += 0;
        result[5] += 0.05714285714285714;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)86.5) ) ) {
        result[0] += 0.04918032786885246;
        result[1] += 0;
        result[2] += 0.8032786885245902;
        result[3] += 0.11748633879781421;
        result[4] += 0.00273224043715847;
        result[5] += 0.0273224043715847;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9677996422182469;
        result[3] += 0.03220035778175313;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
        result[0] += 0.12962962962962962;
        result[1] += 0.040740740740740744;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7851851851851852;
        result[5] += 0.044444444444444446;
      } else {
        result[0] += 0;
        result[1] += 0.014678899082568808;
        result[2] += 0.010091743119266056;
        result[3] += 0.14128440366972478;
        result[4] += 0.05779816513761468;
        result[5] += 0.7761467889908257;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)47) ) ) {
        result[0] += 0;
        result[1] += 0.9543478260869566;
        result[2] += 0;
        result[3] += 0.02608695652173913;
        result[4] += 0.01956521739130435;
        result[5] += 0;
      } else {
        result[0] += 0.650137741046832;
        result[1] += 0.023691460055096418;
        result[2] += 0.0440771349862259;
        result[3] += 0.08760330578512397;
        result[4] += 0.1118457300275482;
        result[5] += 0.08264462809917356;
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        result[0] += 0.017543859649122806;
        result[1] += 0.021929824561403508;
        result[2] += 0.25;
        result[3] += 0.33771929824561403;
        result[4] += 0.10087719298245613;
        result[5] += 0.2719298245614035;
      } else {
        result[0] += 0.05154639175257732;
        result[1] += 0.07216494845360824;
        result[2] += 0.7525773195876289;
        result[3] += 0.10309278350515463;
        result[4] += 0.020618556701030927;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)97.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.16666666666666666;
        result[3] += 0.08333333333333333;
        result[4] += 0;
        result[5] += 0.75;
      } else {
        result[0] += 0.00936768149882904;
        result[1] += 0;
        result[2] += 0.9215456674473068;
        result[3] += 0.06440281030444965;
        result[4] += 0;
        result[5] += 0.00468384074941452;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        result[0] += 0.0035460992907801418;
        result[1] += 0.08865248226950355;
        result[2] += 0;
        result[3] += 0.03900709219858156;
        result[4] += 0.8262411347517731;
        result[5] += 0.0425531914893617;
      } else {
        result[0] += 0.047285464098073555;
        result[1] += 0.0070052539404553416;
        result[2] += 0.009632224168126095;
        result[3] += 0.15499124343257442;
        result[4] += 0.053415061295971976;
        result[5] += 0.7276707530647986;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
        result[0] += 0.006259780907668233;
        result[1] += 0.7730829420970267;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.2128325508607199;
        result[5] += 0.007824726134585291;
      } else {
        result[0] += 0.7120921305182342;
        result[1] += 0.01215611004478567;
        result[2] += 0.026871401151631478;
        result[3] += 0.07421625079974409;
        result[4] += 0.08573256557901472;
        result[5] += 0.08893154190658989;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.1592920353982301;
        result[3] += 0.672566371681416;
        result[4] += 0;
        result[5] += 0.168141592920354;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5897435897435898;
        result[3] += 0.23076923076923078;
        result[4] += 0;
        result[5] += 0.1794871794871795;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)93.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.3448275862068966;
        result[3] += 0.3103448275862069;
        result[4] += 0;
        result[5] += 0.3448275862068966;
      } else {
        result[0] += 0.019387755102040816;
        result[1] += 0;
        result[2] += 0.8877551020408163;
        result[3] += 0.07448979591836735;
        result[4] += 0.004081632653061225;
        result[5] += 0.014285714285714285;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
        result[0] += 0.29014084507042254;
        result[1] += 0.008450704225352112;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.6591549295774648;
        result[5] += 0.04225352112676056;
      } else {
        result[0] += 0.002631578947368421;
        result[1] += 0.005263157894736842;
        result[2] += 0.0017543859649122807;
        result[3] += 0.09473684210526316;
        result[4] += 0.11315789473684211;
        result[5] += 0.7824561403508772;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0;
        result[1] += 0.9115384615384615;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.08846153846153847;
        result[5] += 0;
      } else {
        result[0] += 0.6731898238747553;
        result[1] += 0.010437051532941943;
        result[2] += 0.05675146771037182;
        result[3] += 0.12133072407045009;
        result[4] += 0.051532941943900845;
        result[5] += 0.0867579908675799;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)87) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.075;
        result[4] += 0.25;
        result[5] += 0.675;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.1787709497206704;
        result[3] += 0.5363128491620112;
        result[4] += 0.01675977653631285;
        result[5] += 0.2681564245810056;
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
        result[0] += 0.016393442622950824;
        result[1] += 0.027322404371584702;
        result[2] += 0.5573770491803279;
        result[3] += 0.33333333333333337;
        result[4] += 0;
        result[5] += 0.0655737704918033;
      } else {
        result[0] += 0.0228310502283105;
        result[1] += 0;
        result[2] += 0.8938356164383562;
        result[3] += 0.05707762557077625;
        result[4] += 0.012557077625570776;
        result[5] += 0.0136986301369863;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)77.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.9977628635346756;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.0022371364653243847;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)70.5) ) ) {
        result[0] += 0.014705882352941176;
        result[1] += 0.0032679738562091504;
        result[2] += 0.005718954248366013;
        result[3] += 0.09640522875816994;
        result[4] += 0.21650326797385622;
        result[5] += 0.6633986928104575;
      } else {
        result[0] += 0.5468524747717444;
        result[1] += 0.04565112926477655;
        result[2] += 0.06967803940413263;
        result[3] += 0.13166746756367131;
        result[4] += 0.11677078327727054;
        result[5] += 0.08938010571840461;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8125;
        result[4] += 0;
        result[5] += 0.1875;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.28846153846153844;
        result[3] += 0.23076923076923078;
        result[4] += 0;
        result[5] += 0.4807692307692308;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        result[0] += 0.02801120448179272;
        result[1] += 0.011204481792717089;
        result[2] += 0.7338935574229692;
        result[3] += 0.17647058823529416;
        result[4] += 0.01400560224089636;
        result[5] += 0.03641456582633054;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9508716323296355;
        result[3] += 0.04120443740095087;
        result[4] += 0;
        result[5] += 0.00792393026941363;
      }
    }
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
        result[0] += 0.004464285714285714;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9732142857142857;
        result[5] += 0.022321428571428572;
      } else {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)84.5) ) ) {
        result[0] += 0.025280898876404494;
        result[1] += 0.015917602996254682;
        result[2] += 0.018726591760299626;
        result[3] += 0.06928838951310862;
        result[4] += 0.04681647940074907;
        result[5] += 0.8239700374531835;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.021582733812949645;
        result[3] += 0.683453237410072;
        result[4] += 0.007194244604316548;
        result[5] += 0.2877697841726619;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)88) ) ) {
        result[0] += 0;
        result[1] += 0.45454545454545453;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.5454545454545454;
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
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
        result[0] += 0.6784409257003655;
        result[1] += 0.032277710109622416;
        result[2] += 0.015834348355663826;
        result[3] += 0.05663824604141292;
        result[4] += 0.1419001218026797;
        result[5] += 0.0749086479902558;
      } else {
        result[0] += 0.04677914110429448;
        result[1] += 0.006901840490797546;
        result[2] += 0.7354294478527608;
        result[3] += 0.147239263803681;
        result[4] += 0.006901840490797546;
        result[5] += 0.05674846625766871;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)71.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.09426229508196722;
        result[2] += 0.03278688524590165;
        result[3] += 0;
        result[4] += 0.8155737704918034;
        result[5] += 0.05737704918032788;
      } else {
        result[0] += 0.027678571428571427;
        result[1] += 0.009821428571428571;
        result[2] += 0.00625;
        result[3] += 0.14107142857142857;
        result[4] += 0.0625;
        result[5] += 0.7526785714285714;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)52.5) ) ) {
        result[0] += 0;
        result[1] += 0.9472573839662447;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.052742616033755275;
        result[5] += 0;
      } else {
        result[0] += 0.5795856493178374;
        result[1] += 0.022738756947953517;
        result[2] += 0.04345629105608894;
        result[3] += 0.10560889338049521;
        result[4] += 0.1364325416877211;
        result[5] += 0.112177867609904;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)85.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
        result[0] += 0.0078125;
        result[1] += 0;
        result[2] += 0.3046875;
        result[3] += 0.5546875;
        result[4] += 0;
        result[5] += 0.1328125;
      } else {
        result[0] += 0.025423728813559324;
        result[1] += 0;
        result[2] += 0.809322033898305;
        result[3] += 0.1440677966101695;
        result[4] += 0;
        result[5] += 0.0211864406779661;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
        result[0] += 0.15384615384615385;
        result[1] += 0;
        result[2] += 0.5384615384615384;
        result[3] += 0.19230769230769232;
        result[4] += 0;
        result[5] += 0.11538461538461539;
      } else {
        result[0] += 0.004846526655896607;
        result[1] += 0;
        result[2] += 0.962843295638126;
        result[3] += 0.03231017770597738;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.007352941176470588;
        result[1] += 0.03676470588235294;
        result[2] += 0.003676470588235294;
        result[3] += 0.014705882352941176;
        result[4] += 0.9007352941176471;
        result[5] += 0.03676470588235294;
      } else {
        result[0] += 0.04683648315529992;
        result[1] += 0.016433853738701727;
        result[2] += 0.0008216926869350862;
        result[3] += 0.15447822514379622;
        result[4] += 0.04847986852917009;
        result[5] += 0.7329498767460969;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)59.5) ) ) {
        result[0] += 0.007920792079207921;
        result[1] += 0.8772277227722772;
        result[2] += 0;
        result[3] += 0.009900990099009901;
        result[4] += 0.10495049504950495;
        result[5] += 0;
      } else {
        result[0] += 0.6472583380440928;
        result[1] += 0.02204635387224421;
        result[2] += 0.06331260599208594;
        result[3] += 0.08422837761447147;
        result[4] += 0.08875070661390617;
        result[5] += 0.09440361786319956;
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        result[0] += 0.04672897196261682;
        result[1] += 0.028037383177570093;
        result[2] += 0.14018691588785046;
        result[3] += 0.3177570093457944;
        result[4] += 0.04672897196261682;
        result[5] += 0.4205607476635514;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7941176470588235;
        result[3] += 0.14705882352941177;
        result[4] += 0;
        result[5] += 0.058823529411764705;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
        result[0] += 0.03341288782816229;
        result[1] += 0.007159904534606206;
        result[2] += 0.7780429594272077;
        result[3] += 0.17422434367541767;
        result[4] += 0;
        result[5] += 0.007159904534606206;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9860834990059643;
        result[3] += 0.013916500994035786;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
        result[0] += 0.17771084337349397;
        result[1] += 0.012048192771084338;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7439759036144579;
        result[5] += 0.06626506024096386;
      } else {
        result[0] += 0.003987240829346092;
        result[1] += 0.005582137161084529;
        result[2] += 0;
        result[3] += 0.16507177033492823;
        result[4] += 0.07097288676236045;
        result[5] += 0.7543859649122807;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0.953020134228188;
        result[2] += 0;
        result[3] += 0.00447427293064877;
        result[4] += 0.03803131991051455;
        result[5] += 0.00447427293064877;
      } else {
        result[0] += 0.6391494684177611;
        result[1] += 0.06128830519074421;
        result[2] += 0.04878048780487805;
        result[3] += 0.06378986866791744;
        result[4] += 0.1294559099437148;
        result[5] += 0.05753595997498437;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)97) ) ) {
        result[0] += 0.016;
        result[1] += 0.056;
        result[2] += 0.08;
        result[3] += 0.368;
        result[4] += 0.04;
        result[5] += 0.44;
      } else {
        result[0] += 0.2755102040816326;
        result[1] += 0;
        result[2] += 0.5408163265306123;
        result[3] += 0.05102040816326531;
        result[4] += 0.02040816326530612;
        result[5] += 0.11224489795918367;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
        result[0] += 0.05014749262536873;
        result[1] += 0;
        result[2] += 0.7020648967551623;
        result[3] += 0.20353982300884957;
        result[4] += 0;
        result[5] += 0.04424778761061947;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9525316455696202;
        result[3] += 0.04746835443037975;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
        result[0] += 0.17557251908396945;
        result[1] += 0.04834605597964377;
        result[2] += 0;
        result[3] += 0.017811704834605598;
        result[4] += 0.6234096692111959;
        result[5] += 0.13486005089058525;
      } else {
        result[0] += 0.009109311740890687;
        result[1] += 0.0010121457489878543;
        result[2] += 0.0020242914979757085;
        result[3] += 0.06376518218623482;
        result[4] += 0.09412955465587045;
        result[5] += 0.8299595141700404;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)56.5) ) ) {
        result[0] += 0.006711409395973154;
        result[1] += 0.9217002237136466;
        result[2] += 0;
        result[3] += 0.015659955257270694;
        result[4] += 0.049217002237136466;
        result[5] += 0.006711409395973154;
      } else {
        result[0] += 0.6127037661607645;
        result[1] += 0.03316469926925239;
        result[2] += 0.04440697020798201;
        result[3] += 0.11973018549747048;
        result[4] += 0.09387296233839236;
        result[5] += 0.09612141652613827;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
        result[0] += 0;
        result[1] += 0.005050505050505051;
        result[2] += 0.1111111111111111;
        result[3] += 0.494949494949495;
        result[4] += 0.07575757575757576;
        result[5] += 0.31313131313131315;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.65625;
        result[3] += 0.09375;
        result[4] += 0.140625;
        result[5] += 0.109375;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)96.5) ) ) {
        result[0] += 0.008333333333333333;
        result[1] += 0.041666666666666664;
        result[2] += 0.6;
        result[3] += 0.225;
        result[4] += 0.016666666666666666;
        result[5] += 0.10833333333333334;
      } else {
        result[0] += 0.010752688172043012;
        result[1] += 0;
        result[2] += 0.9032258064516129;
        result[3] += 0.07765830346475508;
        result[4] += 0.0023894862604540022;
        result[5] += 0.005973715651135006;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.007168458781362007;
        result[2] += 0;
        result[3] += 0.02867383512544803;
        result[4] += 0.921146953405018;
        result[5] += 0.043010752688172046;
      } else {
        result[0] += 0.045133991537376586;
        result[1] += 0.0021156558533145277;
        result[2] += 0.009167842031029619;
        result[3] += 0.17842031029619182;
        result[4] += 0.0535966149506347;
        result[5] += 0.7115655853314528;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)55.5) ) ) {
        result[0] += 0;
        result[1] += 0.9659367396593674;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.0340632603406326;
        result[5] += 0;
      } else {
        result[0] += 0.6457345971563981;
        result[1] += 0.04028436018957346;
        result[2] += 0.07464454976303317;
        result[3] += 0.08590047393364929;
        result[4] += 0.10485781990521327;
        result[5] += 0.0485781990521327;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)104.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
        result[0] += 0;
        result[1] += 0.06060606060606061;
        result[2] += 0.12121212121212122;
        result[3] += 0.21212121212121213;
        result[4] += 0.06060606060606061;
        result[5] += 0.5454545454545454;
      } else {
        result[0] += 0.008928571428571428;
        result[1] += 0;
        result[2] += 0.7008928571428571;
        result[3] += 0.25892857142857145;
        result[4] += 0;
        result[5] += 0.03125;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)83.5) ) ) {
        result[0] += 0.08333333333333333;
        result[1] += 0;
        result[2] += 0.25;
        result[3] += 0.25;
        result[4] += 0;
        result[5] += 0.4166666666666667;
      } else {
        result[0] += 0.005494505494505495;
        result[1] += 0.005494505494505495;
        result[2] += 0.9258241758241759;
        result[3] += 0.057692307692307696;
        result[4] += 0.0013736263736263737;
        result[5] += 0.004120879120879121;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)71.5) ) ) {
        result[0] += 0.00625;
        result[1] += 0.034375;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.909375;
        result[5] += 0.05;
      } else {
        result[0] += 0;
        result[1] += 0.12195121951219512;
        result[2] += 0;
        result[3] += 0.2682926829268293;
        result[4] += 0.0975609756097561;
        result[5] += 0.5121951219512195;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)58) ) ) {
        result[0] += 0.8859649122807018;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.08771929824561404;
        result[5] += 0.026315789473684213;
      } else {
        result[0] += 0.01141552511415525;
        result[1] += 0.00989345509893455;
        result[2] += 0.00228310502283105;
        result[3] += 0.2085235920852359;
        result[4] += 0.04794520547945205;
        result[5] += 0.7199391171993912;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.8869936034115139;
        result[2] += 0.0042643923240938165;
        result[3] += 0.008528784648187633;
        result[4] += 0.08955223880597014;
        result[5] += 0.010660980810234541;
      } else {
        result[0] += 0.758099352051836;
        result[1] += 0.03527717782577394;
        result[2] += 0.015118790496760261;
        result[3] += 0.04751619870410368;
        result[4] += 0.10007199424046077;
        result[5] += 0.04391648668106552;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
        result[0] += 0.012422360248447204;
        result[1] += 0;
        result[2] += 0.40372670807453415;
        result[3] += 0.37267080745341613;
        result[4] += 0;
        result[5] += 0.2111801242236025;
      } else {
        result[0] += 0.03045186640471513;
        result[1] += 0;
        result[2] += 0.8673870333988213;
        result[3] += 0.07170923379174854;
        result[4] += 0.003929273084479372;
        result[5] += 0.02652259332023576;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
        result[0] += 0.012552301255230127;
        result[1] += 0.008368200836820085;
        result[2] += 0.008368200836820085;
        result[3] += 0.01673640167364017;
        result[4] += 0.8786610878661089;
        result[5] += 0.07531380753138077;
      } else {
        result[0] += 0.03035413153456998;
        result[1] += 0.0008431703204047217;
        result[2] += 0.0016863406408094434;
        result[3] += 0.16779089376053963;
        result[4] += 0.07925801011804384;
        result[5] += 0.7200674536256324;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9751131221719457;
        result[2] += 0;
        result[3] += 0.006787330316742082;
        result[4] += 0.01809954751131222;
        result[5] += 0;
      } else {
        result[0] += 0.6474777448071217;
        result[1] += 0.051038575667655794;
        result[2] += 0.05222551928783384;
        result[3] += 0.06587537091988133;
        result[4] += 0.1080118694362018;
        result[5] += 0.07537091988130565;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.05194805194805195;
        result[3] += 0.03896103896103896;
        result[4] += 0.05194805194805195;
        result[5] += 0.8571428571428571;
      } else {
        result[0] += 0.014018691588785047;
        result[1] += 0.014018691588785047;
        result[2] += 0.35046728971962615;
        result[3] += 0.45794392523364486;
        result[4] += 0.02336448598130841;
        result[5] += 0.14018691588785046;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)105.5) ) ) {
        result[0] += 0.005263157894736842;
        result[1] += 0;
        result[2] += 0.7421052631578947;
        result[3] += 0.17894736842105263;
        result[4] += 0;
        result[5] += 0.07368421052631578;
      } else {
        result[0] += 0.049180327868852465;
        result[1] += 0.005044136191677176;
        result[2] += 0.896595208070618;
        result[3] += 0.046658259773013876;
        result[4] += 0.002522068095838588;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.04700854700854701;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9230769230769231;
        result[5] += 0.029914529914529916;
      } else {
        result[0] += 0.03527481542247744;
        result[1] += 0.008203445447087777;
        result[2] += 0.003281378178835111;
        result[3] += 0.1501230516817063;
        result[4] += 0.045118949958982774;
        result[5] += 0.7579983593109105;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
        result[0] += 0.008960573476702509;
        result[1] += 0.7974910394265233;
        result[2] += 0.005376344086021506;
        result[3] += 0.005376344086021506;
        result[4] += 0.17383512544802868;
        result[5] += 0.008960573476702509;
      } else {
        result[0] += 0.7410256410256412;
        result[1] += 0.012820512820512822;
        result[2] += 0.030128205128205132;
        result[3] += 0.07435897435897437;
        result[4] += 0.07115384615384616;
        result[5] += 0.07051282051282053;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96) ) ) {
        result[0] += 0;
        result[1] += 0.06349206349206349;
        result[2] += 0.07142857142857142;
        result[3] += 0.3492063492063492;
        result[4] += 0.11904761904761904;
        result[5] += 0.3968253968253968;
      } else {
        result[0] += 0.2;
        result[1] += 0;
        result[2] += 0.475;
        result[3] += 0.125;
        result[4] += 0.0625;
        result[5] += 0.1375;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
        result[0] += 0;
        result[1] += 0.007575757575757576;
        result[2] += 0.5643939393939394;
        result[3] += 0.3106060606060606;
        result[4] += 0;
        result[5] += 0.11742424242424243;
      } else {
        result[0] += 0.02038216560509554;
        result[1] += 0;
        result[2] += 0.9197452229299363;
        result[3] += 0.05859872611464968;
        result[4] += 0;
        result[5] += 0.0012738853503184713;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.08482142857142858;
        result[2] += 0;
        result[3] += 0.013392857142857142;
        result[4] += 0.84375;
        result[5] += 0.05803571428571429;
      } else {
        result[0] += 0.030025020850708923;
        result[1] += 0;
        result[2] += 0.01751459549624687;
        result[3] += 0.1451209341117598;
        result[4] += 0.05337781484570475;
        result[5] += 0.7539616346955796;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0.9489559164733179;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.05104408352668213;
        result[5] += 0;
      } else {
        result[0] += 0.6456692913385826;
        result[1] += 0.02924634420697413;
        result[2] += 0.052868391451068614;
        result[3] += 0.07311586051743532;
        result[4] += 0.13667041619797526;
        result[5] += 0.06242969628796401;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
        result[0] += 0.006622516556291391;
        result[1] += 0.019867549668874173;
        result[2] += 0.11920529801324503;
        result[3] += 0.4105960264900662;
        result[4] += 0.0728476821192053;
        result[5] += 0.3708609271523179;
      } else {
        result[0] += 0;
        result[1] += 0.01818181818181818;
        result[2] += 0.5454545454545454;
        result[3] += 0.2818181818181818;
        result[4] += 0.00909090909090909;
        result[5] += 0.14545454545454545;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)96.5) ) ) {
        result[0] += 0.06578947368421054;
        result[1] += 0;
        result[2] += 0.5789473684210528;
        result[3] += 0.15789473684210528;
        result[4] += 0.026315789473684213;
        result[5] += 0.1710526315789474;
      } else {
        result[0] += 0.01866977829638273;
        result[1] += 0.002333722287047841;
        result[2] += 0.9043173862310385;
        result[3] += 0.06884480746791131;
        result[4] += 0;
        result[5] += 0.005834305717619603;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
        result[0] += 0.17801047120418848;
        result[1] += 0.04712041884816754;
        result[2] += 0;
        result[3] += 0.015706806282722512;
        result[4] += 0.6780104712041884;
        result[5] += 0.08115183246073299;
      } else {
        result[0] += 0.007322175732217573;
        result[1] += 0.005230125523012552;
        result[2] += 0.0031380753138075313;
        result[3] += 0.06903765690376569;
        result[4] += 0.08263598326359832;
        result[5] += 0.8326359832635983;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0.9778270509977827;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.022172949002217297;
        result[5] += 0;
      } else {
        result[0] += 0.61340206185567;
        result[1] += 0.02863688430698739;
        result[2] += 0.02348224513172966;
        result[3] += 0.11454753722794957;
        result[4] += 0.11683848797250856;
        result[5] += 0.1030927835051546;
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
        result[0] += 0.008695652173913044;
        result[1] += 0.043478260869565216;
        result[2] += 0.15217391304347827;
        result[3] += 0.5130434782608696;
        result[4] += 0.05217391304347826;
        result[5] += 0.23043478260869565;
      } else {
        result[0] += 0.08421052631578947;
        result[1] += 0.06315789473684211;
        result[2] += 0.7368421052631579;
        result[3] += 0.05263157894736842;
        result[4] += 0;
        result[5] += 0.06315789473684211;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
        result[0] += 0.825;
        result[1] += 0.025;
        result[2] += 0.125;
        result[3] += 0;
        result[4] += 0.025;
        result[5] += 0;
      } else {
        result[0] += 0.004319654427645789;
        result[1] += 0;
        result[2] += 0.8952483801295896;
        result[3] += 0.08531317494600432;
        result[4] += 0;
        result[5] += 0.01511879049676026;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.008064516129032258;
        result[1] += 0.008064516129032258;
        result[2] += 0.012096774193548387;
        result[3] += 0;
        result[4] += 0.9435483870967742;
        result[5] += 0.028225806451612902;
      } else {
        result[0] += 0.034252297410192145;
        result[1] += 0.01086048454469507;
        result[2] += 0.003341687552213868;
        result[3] += 0.1336675020885547;
        result[4] += 0.05430242272347535;
        result[5] += 0.7635756056808688;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
        result[0] += 0.003316749585406302;
        result[1] += 0.8407960199004975;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.1558872305140962;
        result[5] += 0;
      } else {
        result[0] += 0.7167553191489363;
        result[1] += 0.011303191489361705;
        result[2] += 0.048537234042553196;
        result[3] += 0.07779255319148938;
        result[4] += 0.08776595744680853;
        result[5] += 0.05784574468085107;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)88) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.15873015873015872;
        result[3] += 0.07936507936507936;
        result[4] += 0.12698412698412698;
        result[5] += 0.6349206349206349;
      } else {
        result[0] += 0.025316455696202535;
        result[1] += 0.01687763713080169;
        result[2] += 0.29113924050632917;
        result[3] += 0.5316455696202532;
        result[4] += 0.008438818565400845;
        result[5] += 0.1265822784810127;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)75.5) ) ) {
        result[0] += 0.3373493975903614;
        result[1] += 0.13253012048192772;
        result[2] += 0.2891566265060241;
        result[3] += 0.04819277108433735;
        result[4] += 0.03614457831325301;
        result[5] += 0.1566265060240964;
      } else {
        result[0] += 0.005611672278338945;
        result[1] += 0;
        result[2] += 0.8956228956228957;
        result[3] += 0.08080808080808081;
        result[4] += 0.001122334455667789;
        result[5] += 0.016835016835016835;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
        result[0] += 0.12459016393442623;
        result[1] += 0.04590163934426229;
        result[2] += 0;
        result[3] += 0.013114754098360656;
        result[4] += 0.6852459016393443;
        result[5] += 0.13114754098360656;
      } else {
        result[0] += 0;
        result[1] += 0.009233610341643583;
        result[2] += 0.009233610341643583;
        result[3] += 0.15604801477377656;
        result[4] += 0.05817174515235457;
        result[5] += 0.7673130193905817;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0.9549356223175965;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.045064377682403435;
        result[5] += 0;
      } else {
        result[0] += 0.6234504132231407;
        result[1] += 0.0237603305785124;
        result[2] += 0.06250000000000001;
        result[3] += 0.1069214876033058;
        result[4] += 0.11570247933884299;
        result[5] += 0.06766528925619836;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)87.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.041666666666666664;
        result[3] += 0;
        result[4] += 0.08333333333333333;
        result[5] += 0.875;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.38095238095238093;
        result[3] += 0.5714285714285714;
        result[4] += 0;
        result[5] += 0.047619047619047616;
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.08;
        result[3] += 0.48;
        result[4] += 0;
        result[5] += 0.44;
      } else {
        result[0] += 0.007246376811594204;
        result[1] += 0.0031055900621118015;
        result[2] += 0.880952380952381;
        result[3] += 0.08902691511387165;
        result[4] += 0.0031055900621118015;
        result[5] += 0.01656314699792961;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)70.5) ) ) {
        result[0] += 0;
        result[1] += 0.9726027397260274;
        result[2] += 0;
        result[3] += 0.00228310502283105;
        result[4] += 0.02511415525114155;
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
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
        result[0] += 0.04956085319949812;
        result[1] += 0.015683814303638646;
        result[2] += 0.015056461731493099;
        result[3] += 0.12797992471769135;
        result[4] += 0.18946047678795483;
        result[5] += 0.6022584692597239;
      } else {
        result[0] += 0.6471990464839095;
        result[1] += 0.04529201430274136;
        result[2] += 0.05542312276519666;
        result[3] += 0.07091775923718713;
        result[4] += 0.1299165673420739;
        result[5] += 0.05125148986889154;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0.023255813953488372;
        result[2] += 0.12790697674418605;
        result[3] += 0.3488372093023256;
        result[4] += 0.08139534883720931;
        result[5] += 0.4186046511627907;
      } else {
        result[0] += 0.012345679012345678;
        result[1] += 0.018518518518518517;
        result[2] += 0.6790123456790124;
        result[3] += 0.2222222222222222;
        result[4] += 0.006172839506172839;
        result[5] += 0.06172839506172839;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)69.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.1111111111111111;
        result[3] += 0;
        result[4] += 0.8888888888888888;
        result[5] += 0;
      } else {
        result[0] += 0.008206330597889801;
        result[1] += 0.0023446658851113715;
        result[2] += 0.9191090269636577;
        result[3] += 0.06330597889800703;
        result[4] += 0;
        result[5] += 0.007033997655334115;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
        result[0] += 0.15363881401617252;
        result[1] += 0.04582210242587601;
        result[2] += 0;
        result[3] += 0.013477088948787063;
        result[4] += 0.6819407008086253;
        result[5] += 0.10512129380053908;
      } else {
        result[0] += 0.0048543689320388345;
        result[1] += 0.006472491909385114;
        result[2] += 0.0186084142394822;
        result[3] += 0.16747572815533981;
        result[4] += 0.07281553398058252;
        result[5] += 0.7297734627831716;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
        result[0] += 0.003603603603603604;
        result[1] += 0.8270270270270271;
        result[2] += 0;
        result[3] += 0.005405405405405407;
        result[4] += 0.16396396396396398;
        result[5] += 0;
      } else {
        result[0] += 0.7494824016563147;
        result[1] += 0.04209799861973775;
        result[2] += 0.023464458247066944;
        result[3] += 0.05728088336783989;
        result[4] += 0.07936507936507936;
        result[5] += 0.04830917874396135;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)80.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.08088235294117647;
        result[3] += 0.5367647058823529;
        result[4] += 0;
        result[5] += 0.38235294117647056;
      } else {
        result[0] += 0.012658227848101266;
        result[1] += 0.08860759493670886;
        result[2] += 0.43037974683544306;
        result[3] += 0.189873417721519;
        result[4] += 0.08860759493670886;
        result[5] += 0.189873417721519;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
        result[0] += 0.0272108843537415;
        result[1] += 0;
        result[2] += 0.7755102040816327;
        result[3] += 0.15646258503401364;
        result[4] += 0.00453514739229025;
        result[5] += 0.036281179138322;
      } else {
        result[0] += 0.007155635062611807;
        result[1] += 0;
        result[2] += 0.9588550983899821;
        result[3] += 0.03041144901610018;
        result[4] += 0;
        result[5] += 0.0035778175313059034;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        result[0] += 0.15489130434782608;
        result[1] += 0.010869565217391304;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7228260869565217;
        result[5] += 0.11141304347826086;
      } else {
        result[0] += 0.0008503401360544217;
        result[1] += 0.017006802721088437;
        result[2] += 0.007653061224489796;
        result[3] += 0.179421768707483;
        result[4] += 0.05442176870748299;
        result[5] += 0.7406462585034014;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6328815556865056;
        result[1] += 0.05951679434295816;
        result[2] += 0.05951679434295816;
        result[3] += 0.06776664702416028;
        result[4] += 0.10076605774896877;
        result[5] += 0.07955215085444903;
      } else {
        result[0] += 0.009732360097323601;
        result[1] += 0.9829683698296837;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.0072992700729927005;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)87.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.05263157894736842;
        result[3] += 0.02631578947368421;
        result[4] += 0.3157894736842105;
        result[5] += 0.6052631578947368;
      } else {
        result[0] += 0;
        result[1] += 0.010582010582010581;
        result[2] += 0.37566137566137564;
        result[3] += 0.4126984126984127;
        result[4] += 0.026455026455026454;
        result[5] += 0.1746031746031746;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)72.5) ) ) {
        result[0] += 0.48717948717948717;
        result[1] += 0.1794871794871795;
        result[2] += 0.2564102564102564;
        result[3] += 0;
        result[4] += 0.05128205128205128;
        result[5] += 0.02564102564102564;
      } else {
        result[0] += 0.005506607929515419;
        result[1] += 0.004405286343612335;
        result[2] += 0.9085903083700441;
        result[3] += 0.06167400881057269;
        result[4] += 0.004405286343612335;
        result[5] += 0.015418502202643172;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        result[0] += 0.010948905109489052;
        result[1] += 0.05474452554744526;
        result[2] += 0;
        result[3] += 0.014598540145985401;
        result[4] += 0.8613138686131386;
        result[5] += 0.058394160583941604;
      } else {
        result[0] += 0.05057803468208093;
        result[1] += 0.010115606936416185;
        result[2] += 0.002167630057803468;
        result[3] += 0.15823699421965318;
        result[4] += 0.06141618497109826;
        result[5] += 0.7174855491329479;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9906103286384976;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.009389671361502348;
        result[5] += 0;
      } else {
        result[0] += 0.6638924455825865;
        result[1] += 0.05889884763124201;
        result[2] += 0.0326504481434059;
        result[3] += 0.060819462227912936;
        result[4] += 0.12804097311139567;
        result[5] += 0.055697823303457114;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)107) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.2670807453416149;
        result[3] += 0.5093167701863354;
        result[4] += 0;
        result[5] += 0.2236024844720497;
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
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5;
        result[3] += 0.3448275862068966;
        result[4] += 0;
        result[5] += 0.15517241379310345;
      } else {
        result[0] += 0.016042780748663103;
        result[1] += 0;
        result[2] += 0.8973262032085562;
        result[3] += 0.08021390374331551;
        result[4] += 0;
        result[5] += 0.006417112299465241;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.01652892561983471;
        result[2] += 0;
        result[3] += 0.01652892561983471;
        result[4] += 0.9132231404958677;
        result[5] += 0.05371900826446281;
      } else {
        result[0] += 0.038237738985868665;
        result[1] += 0.01662510390689942;
        result[2] += 0;
        result[3] += 0.16043225270157938;
        result[4] += 0.04239401496259352;
        result[5] += 0.742310889443059;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)50) ) ) {
        result[0] += 0;
        result[1] += 0.9642857142857143;
        result[2] += 0;
        result[3] += 0.013392857142857142;
        result[4] += 0.022321428571428572;
        result[5] += 0;
      } else {
        result[0] += 0.571731074642668;
        result[1] += 0.039174166225516144;
        result[2] += 0.08734780307040763;
        result[3] += 0.08893594494441504;
        result[4] += 0.142932768660667;
        result[5] += 0.0698782424563261;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
        result[0] += 0;
        result[1] += 0.011627906976744186;
        result[2] += 0.09302325581395349;
        result[3] += 0.2558139534883721;
        result[4] += 0.06976744186046512;
        result[5] += 0.5697674418604651;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5625;
        result[3] += 0.34375;
        result[4] += 0;
        result[5] += 0.09375;
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
        result[0] += 0.022935779816513763;
        result[1] += 0.022935779816513763;
        result[2] += 0.7018348623853211;
        result[3] += 0.21559633027522937;
        result[4] += 0;
        result[5] += 0.03669724770642202;
      } else {
        result[0] += 0.022598870056497175;
        result[1] += 0.0014124293785310734;
        result[2] += 0.9138418079096046;
        result[3] += 0.0480225988700565;
        result[4] += 0;
        result[5] += 0.014124293785310734;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.017482517482517484;
        result[2] += 0;
        result[3] += 0.04195804195804196;
        result[4] += 0.8636363636363636;
        result[5] += 0.07692307692307693;
      } else {
        result[0] += 0.06429070580013976;
        result[1] += 0.0069881201956673656;
        result[2] += 0.005590496156533892;
        result[3] += 0.18029350104821804;
        result[4] += 0.06359189378057302;
        result[5] += 0.6792452830188679;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
        result[0] += 0.0055658627087198514;
        result[1] += 0.8682745825602969;
        result[2] += 0;
        result[3] += 0.0037105751391465678;
        result[4] += 0.11688311688311688;
        result[5] += 0.0055658627087198514;
      } else {
        result[0] += 0.7590007347538574;
        result[1] += 0.01689933872152829;
        result[2] += 0.041146216017634095;
        result[3] += 0.06465833945628215;
        result[4] += 0.07788390889052167;
        result[5] += 0.04041146216017634;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)90.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.125;
        result[3] += 0.041666666666666664;
        result[4] += 0;
        result[5] += 0.8333333333333334;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.3548387096774194;
        result[3] += 0.5096774193548387;
        result[4] += 0;
        result[5] += 0.13548387096774195;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
        result[0] += 0.04431599229287091;
        result[1] += 0;
        result[2] += 0.8015414258188824;
        result[3] += 0.1233140655105973;
        result[4] += 0.0038535645472061657;
        result[5] += 0.02697495183044316;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.974559686888454;
        result[3] += 0.019569471624266144;
        result[4] += 0;
        result[5] += 0.005870841487279843;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.10566037735849057;
        result[2] += 0;
        result[3] += 0.026415094339622643;
        result[4] += 0.8226415094339623;
        result[5] += 0.045283018867924525;
      } else {
        result[0] += 0.04015748031496063;
        result[1] += 0.0007874015748031496;
        result[2] += 0.012598425196850394;
        result[3] += 0.13543307086614173;
        result[4] += 0.06614173228346457;
        result[5] += 0.7448818897637796;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)54.5) ) ) {
        result[0] += 0;
        result[1] += 0.9192825112107623;
        result[2] += 0;
        result[3] += 0.020179372197309416;
        result[4] += 0.053811659192825115;
        result[5] += 0.006726457399103139;
      } else {
        result[0] += 0.6208072768618533;
        result[1] += 0.021034678794769755;
        result[2] += 0.07390562819783968;
        result[3] += 0.10346787947697555;
        result[4] += 0.10176236498010233;
        result[5] += 0.07902217168845935;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)86) ) ) {
        result[0] += 0;
        result[1] += 0.044444444444444446;
        result[2] += 0.17777777777777778;
        result[3] += 0.1111111111111111;
        result[4] += 0.08888888888888889;
        result[5] += 0.5777777777777777;
      } else {
        result[0] += 0.0375;
        result[1] += 0;
        result[2] += 0.475;
        result[3] += 0.425;
        result[4] += 0;
        result[5] += 0.0625;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
        result[0] += 0;
        result[1] += 0.3;
        result[2] += 0.1;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.6;
      } else {
        result[0] += 0.01951779563719862;
        result[1] += 0;
        result[2] += 0.9184845005740528;
        result[3] += 0.05855338691159587;
        result[4] += 0;
        result[5] += 0.003444316877152698;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)47) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)80) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        result[0] += 0.006369426751592357;
        result[1] += 0.9660297239915074;
        result[2] += 0.010615711252653927;
        result[3] += 0.010615711252653927;
        result[4] += 0.006369426751592357;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
        result[0] += 0.04057591623036649;
        result[1] += 0.003926701570680628;
        result[2] += 0.004581151832460733;
        result[3] += 0.13089005235602094;
        result[4] += 0.19829842931937172;
        result[5] += 0.6217277486910995;
      } else {
        result[0] += 0.5980834272829764;
        result[1] += 0.0467869222096956;
        result[2] += 0.0636978579481398;
        result[3] += 0.08117249154453213;
        result[4] += 0.14205186020293123;
        result[5] += 0.06820744081172492;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0.05714285714285714;
        result[2] += 0.2;
        result[3] += 0.24285714285714285;
        result[4] += 0;
        result[5] += 0.5;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.625;
        result[3] += 0.28804347826086957;
        result[4] += 0.005434782608695652;
        result[5] += 0.08152173913043478;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
        result[0] += 0.01818181818181818;
        result[1] += 0.03636363636363636;
        result[2] += 0.5818181818181818;
        result[3] += 0.2;
        result[4] += 0.01818181818181818;
        result[5] += 0.14545454545454545;
      } else {
        result[0] += 0.005442176870748299;
        result[1] += 0;
        result[2] += 0.9496598639455782;
        result[3] += 0.04353741496598639;
        result[4] += 0;
        result[5] += 0.0013605442176870747;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
        result[0] += 0.1317365269461078;
        result[1] += 0.08682634730538923;
        result[2] += 0;
        result[3] += 0.005988023952095809;
        result[4] += 0.6766467065868264;
        result[5] += 0.09880239520958084;
      } else {
        result[0] += 0.0025974025974025974;
        result[1] += 0.004329004329004329;
        result[2] += 0.019913419913419914;
        result[3] += 0.15497835497835497;
        result[4] += 0.06666666666666667;
        result[5] += 0.7515151515151515;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        result[0] += 0.0022271714922049;
        result[1] += 0.9554565701559021;
        result[2] += 0;
        result[3] += 0.0066815144766147;
        result[4] += 0.0267260579064588;
        result[5] += 0.0089086859688196;
      } else {
        result[0] += 0.6813996316758748;
        result[1] += 0.019643953345610803;
        result[2] += 0.022713321055862493;
        result[3] += 0.06813996316758748;
        result[4] += 0.13505217925107427;
        result[5] += 0.07305095150399017;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.08571428571428572;
        result[3] += 0;
        result[4] += 0.08571428571428572;
        result[5] += 0.8285714285714286;
      } else {
        result[0] += 0.0036231884057971015;
        result[1] += 0.018115942028985508;
        result[2] += 0.30434782608695654;
        result[3] += 0.4927536231884058;
        result[4] += 0.03985507246376811;
        result[5] += 0.14130434782608695;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
        result[0] += 0.03140096618357488;
        result[1] += 0;
        result[2] += 0.8140096618357487;
        result[3] += 0.12560386473429952;
        result[4] += 0.007246376811594203;
        result[5] += 0.021739130434782608;
      } else {
        result[0] += 0.003745318352059925;
        result[1] += 0;
        result[2] += 0.9737827715355806;
        result[3] += 0.02247191011235955;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        result[0] += 0.20842572062084258;
        result[1] += 0.0022172949002217295;
        result[2] += 0;
        result[3] += 0.028824833702882482;
        result[4] += 0.6518847006651884;
        result[5] += 0.10864745011086474;
      } else {
        result[0] += 0.0022935779816513763;
        result[1] += 0.0061162079510703364;
        result[2] += 0.009174311926605505;
        result[3] += 0.19342507645259938;
        result[4] += 0.07033639143730887;
        result[5] += 0.7186544342507645;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)56.5) ) ) {
        result[0] += 0.004228329809725159;
        result[1] += 0.9471458773784355;
        result[2] += 0;
        result[3] += 0.004228329809725159;
        result[4] += 0.04439746300211417;
        result[5] += 0;
      } else {
        result[0] += 0.7265135699373695;
        result[1] += 0.05219206680584551;
        result[2] += 0.027139874739039668;
        result[3] += 0.06332637439109255;
        result[4] += 0.09116214335421016;
        result[5] += 0.03966597077244259;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.18705035971223022;
        result[3] += 0.460431654676259;
        result[4] += 0.007194244604316547;
        result[5] += 0.34532374100719426;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.76;
        result[3] += 0.04;
        result[4] += 0;
        result[5] += 0.2;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
        result[0] += 0.04093567251461988;
        result[1] += 0;
        result[2] += 0.7777777777777778;
        result[3] += 0.15789473684210525;
        result[4] += 0;
        result[5] += 0.023391812865497075;
      } else {
        result[0] += 0.004608294930875576;
        result[1] += 0;
        result[2] += 0.9431643625192012;
        result[3] += 0.0445468509984639;
        result[4] += 0;
        result[5] += 0.007680491551459293;
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
        result[0] += 0.00398406374501992;
        result[1] += 0.043824701195219126;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9402390438247012;
        result[5] += 0.01195219123505976;
      } else {
        result[0] += 0.559375;
        result[1] += 0.025;
        result[2] += 0;
        result[3] += 0.03125;
        result[4] += 0.24375;
        result[5] += 0.140625;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)85.5) ) ) {
        result[0] += 0;
        result[1] += 0.004807692307692308;
        result[2] += 0.001201923076923077;
        result[3] += 0.037259615384615384;
        result[4] += 0.08173076923076923;
        result[5] += 0.875;
      } else {
        result[0] += 0.04904051172707889;
        result[1] += 0.008528784648187633;
        result[2] += 0.0042643923240938165;
        result[3] += 0.37100213219616207;
        result[4] += 0.0767590618336887;
        result[5] += 0.4904051172707889;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        result[0] += 0.008196721311475409;
        result[1] += 0.9241803278688523;
        result[2] += 0;
        result[3] += 0.0061475409836065555;
        result[4] += 0.059426229508196704;
        result[5] += 0.002049180327868852;
      } else {
        result[0] += 0.7973799126637554;
        result[1] += 0.03318777292576419;
        result[2] += 0.020087336244541485;
        result[3] += 0.059388646288209605;
        result[4] += 0.0611353711790393;
        result[5] += 0.028820960698689956;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
        result[0] += 0.056105610561056105;
        result[1] += 0.0462046204620462;
        result[2] += 0.28052805280528054;
        result[3] += 0.33993399339933994;
        result[4] += 0.036303630363036306;
        result[5] += 0.24092409240924093;
      } else {
        result[0] += 0.04223968565815324;
        result[1] += 0.0019646365422396855;
        result[2] += 0.8467583497053045;
        result[3] += 0.08742632612966601;
        result[4] += 0.0009823182711198428;
        result[5] += 0.0206286836935167;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.0812720848056537;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9045936395759717;
        result[5] += 0.014134275618374558;
      } else {
        result[0] += 0.03480475382003396;
        result[1] += 0.004244482173174873;
        result[2] += 0.001697792869269949;
        result[3] += 0.14261460101867574;
        result[4] += 0.0636672325976231;
        result[5] += 0.7529711375212224;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9708029197080292;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.029197080291970802;
        result[5] += 0;
      } else {
        result[0] += 0.664126611957796;
        result[1] += 0.028722157092614303;
        result[2] += 0.04044548651817116;
        result[3] += 0.06506447831184056;
        result[4] += 0.11664712778429073;
        result[5] += 0.08499413833528723;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.010101010101010102;
        result[3] += 0.42424242424242425;
        result[4] += 0.050505050505050504;
        result[5] += 0.5151515151515151;
      } else {
        result[0] += 0;
        result[1] += 0.018181818181818184;
        result[2] += 0.4000000000000001;
        result[3] += 0.4363636363636364;
        result[4] += 0.030303030303030307;
        result[5] += 0.11515151515151517;
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)65.5) ) ) {
        result[0] += 0.12;
        result[1] += 0;
        result[2] += 0.2;
        result[3] += 0.04;
        result[4] += 0.56;
        result[5] += 0.08;
      } else {
        result[0] += 0.010427528675703858;
        result[1] += 0.0010427528675703858;
        result[2] += 0.8800834202294057;
        result[3] += 0.09280500521376434;
        result[4] += 0;
        result[5] += 0.01564129301355579;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
        result[0] += 0.1895910780669145;
        result[1] += 0.01486988847583643;
        result[2] += 0.01858736059479554;
        result[3] += 0;
        result[4] += 0.7360594795539034;
        result[5] += 0.040892193308550186;
      } else {
        result[0] += 0;
        result[1] += 0.01170046801872075;
        result[2] += 0.01794071762870515;
        result[3] += 0.17160686427457097;
        result[4] += 0.062402496099843996;
        result[5] += 0.7363494539781591;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)50) ) ) {
        result[0] += 0;
        result[1] += 0.9753086419753086;
        result[2] += 0;
        result[3] += 0.014814814814814815;
        result[4] += 0.009876543209876543;
        result[5] += 0;
      } else {
        result[0] += 0.6007838745800672;
        result[1] += 0.0341545352743561;
        result[2] += 0.054871220604703244;
        result[3] += 0.08790593505039193;
        result[4] += 0.14613661814109744;
        result[5] += 0.0761478163493841;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)99) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.10606060606060606;
        result[3] += 0.3333333333333333;
        result[4] += 0;
        result[5] += 0.5606060606060606;
      } else {
        result[0] += 0.008771929824561405;
        result[1] += 0.008771929824561405;
        result[2] += 0.6754385964912282;
        result[3] += 0.2105263157894737;
        result[4] += 0.03508771929824562;
        result[5] += 0.06140350877192983;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
        result[0] += 0.1;
        result[1] += 0.13333333333333333;
        result[2] += 0.4;
        result[3] += 0.13333333333333333;
        result[4] += 0;
        result[5] += 0.23333333333333334;
      } else {
        result[0] += 0.002288329519450801;
        result[1] += 0;
        result[2] += 0.9302059496567505;
        result[3] += 0.06636155606407322;
        result[4] += 0;
        result[5] += 0.0011441647597254005;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
        result[0] += 0.012096774193548387;
        result[1] += 0.07258064516129033;
        result[2] += 0;
        result[3] += 0.020161290322580645;
        result[4] += 0.8548387096774194;
        result[5] += 0.04032258064516129;
      } else {
        result[0] += 0.0336;
        result[1] += 0.0008;
        result[2] += 0.0048;
        result[3] += 0.1448;
        result[4] += 0.06;
        result[5] += 0.756;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9640449438202248;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.035955056179775284;
        result[5] += 0;
      } else {
        result[0] += 0.6306852637962401;
        result[1] += 0.020618556701030927;
        result[2] += 0.04790782292298363;
        result[3] += 0.06913280776228017;
        result[4] += 0.15524560339599758;
        result[5] += 0.07640994542146756;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0.006369426751592357;
        result[2] += 0.1337579617834395;
        result[3] += 0.5159235668789809;
        result[4] += 0.03821656050955414;
        result[5] += 0.3057324840764331;
      } else {
        result[0] += 0.009174311926605505;
        result[1] += 0;
        result[2] += 0.7706422018348624;
        result[3] += 0.1651376146788991;
        result[4] += 0;
        result[5] += 0.05504587155963303;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)89) ) ) {
        result[0] += 0.42105263157894735;
        result[1] += 0.3684210526315789;
        result[2] += 0.10526315789473684;
        result[3] += 0.10526315789473684;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.023182297154899896;
        result[1] += 0;
        result[2] += 0.9135932560590094;
        result[3] += 0.059009483667017915;
        result[4] += 0;
        result[5] += 0.004214963119072708;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        result[0] += 0.17434210526315788;
        result[1] += 0.006578947368421052;
        result[2] += 0.006578947368421052;
        result[3] += 0.009868421052631578;
        result[4] += 0.7072368421052632;
        result[5] += 0.09539473684210527;
      } else {
        result[0] += 0.007550335570469799;
        result[1] += 0.015939597315436243;
        result[2] += 0.015939597315436243;
        result[3] += 0.15855704697986578;
        result[4] += 0.04614093959731544;
        result[5] += 0.7558724832214765;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9641148325358851;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.03588516746411483;
        result[5] += 0;
      } else {
        result[0] += 0.6246529705719045;
        result[1] += 0.03164908384230983;
        result[2] += 0.06440866185452526;
        result[3] += 0.07828983897834536;
        result[4] += 0.12159911160466408;
        result[5] += 0.07940033314825097;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)86.5) ) ) {
        result[0] += 0;
        result[1] += 0.029411764705882353;
        result[2] += 0.4117647058823529;
        result[3] += 0.375;
        result[4] += 0.022058823529411766;
        result[5] += 0.16176470588235295;
      } else {
        result[0] += 0.047619047619047616;
        result[1] += 0.027210884353741496;
        result[2] += 0.782312925170068;
        result[3] += 0.07482993197278912;
        result[4] += 0.04081632653061224;
        result[5] += 0.027210884353741496;
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.879746835443038;
        result[3] += 0.12025316455696203;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.0018726591760299626;
        result[1] += 0;
        result[2] += 0.9756554307116105;
        result[3] += 0.02247191011235955;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
        result[0] += 0.17142857142857143;
        result[1] += 0.007142857142857143;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7821428571428571;
        result[5] += 0.039285714285714285;
      } else {
        result[0] += 0;
        result[1] += 0.005770816158285243;
        result[2] += 0.0008244023083264633;
        result[3] += 0.1442704039571311;
        result[4] += 0.06347897774113767;
        result[5] += 0.7856553998351196;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)53.5) ) ) {
        result[0] += 0.012195121951219513;
        result[1] += 0.9451219512195121;
        result[2] += 0;
        result[3] += 0.008130081300813009;
        result[4] += 0.034552845528455285;
        result[5] += 0;
      } else {
        result[0] += 0.6546511627906978;
        result[1] += 0.042441860465116284;
        result[2] += 0.04825581395348839;
        result[3] += 0.0808139534883721;
        result[4] += 0.11220930232558142;
        result[5] += 0.0616279069767442;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)77) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.05940594059405941;
        result[3] += 0.5841584158415842;
        result[4] += 0.009900990099009903;
        result[5] += 0.34653465346534656;
      } else {
        result[0] += 0.006802721088435374;
        result[1] += 0.02040816326530612;
        result[2] += 0.6190476190476191;
        result[3] += 0.23809523809523808;
        result[4] += 0;
        result[5] += 0.11564625850340136;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)87.5) ) ) {
        result[0] += 0.21428571428571427;
        result[1] += 0.03571428571428571;
        result[2] += 0.4642857142857143;
        result[3] += 0.10714285714285714;
        result[4] += 0.03571428571428571;
        result[5] += 0.14285714285714285;
      } else {
        result[0] += 0.022031823745410038;
        result[1] += 0;
        result[2] += 0.9069767441860465;
        result[3] += 0.06364749082007344;
        result[4] += 0;
        result[5] += 0.0073439412484700125;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)41) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.016597510373443983;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9294605809128631;
        result[5] += 0.05394190871369295;
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)65.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.001402524544179523;
        result[3] += 0.037868162692847124;
        result[4] += 0.04067321178120617;
        result[5] += 0.9200561009817672;
      } else {
        result[0] += 0.08130081300813008;
        result[1] += 0.024390243902439025;
        result[2] += 0.027642276422764227;
        result[3] += 0.2845528455284553;
        result[4] += 0.0959349593495935;
        result[5] += 0.4861788617886179;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0.966824644549763;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.03317535545023697;
        result[5] += 0;
      } else {
        result[0] += 0.704617330803289;
        result[1] += 0.038583175205566096;
        result[2] += 0.017077798861480076;
        result[3] += 0.06261859582542695;
        result[4] += 0.10499683744465528;
        result[5] += 0.07210626185958255;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        result[0] += 0.0074074074074074086;
        result[1] += 0;
        result[2] += 0.3703703703703704;
        result[3] += 0.4444444444444445;
        result[4] += 0.011111111111111113;
        result[5] += 0.16666666666666669;
      } else {
        result[0] += 0.03877551020408163;
        result[1] += 0.0020408163265306124;
        result[2] += 0.8622448979591837;
        result[3] += 0.07857142857142857;
        result[4] += 0.0010204081632653062;
        result[5] += 0.017346938775510204;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.10882352941176471;
        result[1] += 0.026470588235294117;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7470588235294118;
        result[5] += 0.11764705882352941;
      } else {
        result[0] += 0.007104795737122558;
        result[1] += 0.007992895204262877;
        result[2] += 0.011545293072824156;
        result[3] += 0.18383658969804617;
        result[4] += 0.0630550621669627;
        result[5] += 0.7264653641207816;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)51.5) ) ) {
        result[0] += 0.002169197396963124;
        result[1] += 0.9436008676789589;
        result[2] += 0;
        result[3] += 0.02169197396963124;
        result[4] += 0.03253796095444686;
        result[5] += 0;
      } else {
        result[0] += 0.6192584394023243;
        result[1] += 0.030437188710570006;
        result[2] += 0.059767570558937465;
        result[3] += 0.07470946319867183;
        result[4] += 0.10902047592695074;
        result[5] += 0.10680686220254565;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)94.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)103) ) ) {
        result[0] += 0;
        result[1] += 0.06557377049180328;
        result[2] += 0.08196721311475409;
        result[3] += 0.5573770491803278;
        result[4] += 0.04918032786885246;
        result[5] += 0.2459016393442623;
      } else {
        result[0] += 0.07407407407407408;
        result[1] += 0;
        result[2] += 0.46913580246913583;
        result[3] += 0.1851851851851852;
        result[4] += 0;
        result[5] += 0.271604938271605;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)87.5) ) ) {
        result[0] += 0.037037037037037035;
        result[1] += 0;
        result[2] += 0.7685185185185185;
        result[3] += 0.18518518518518517;
        result[4] += 0;
        result[5] += 0.009259259259259259;
      } else {
        result[0] += 0.003861003861003861;
        result[1] += 0;
        result[2] += 0.9594594594594594;
        result[3] += 0.03088803088803089;
        result[4] += 0;
        result[5] += 0.005791505791505791;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
        result[0] += 0.0047169811320754715;
        result[1] += 0.0589622641509434;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8773584905660378;
        result[5] += 0.0589622641509434;
      } else {
        result[0] += 0;
        result[1] += 0.9891774891774892;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.010822510822510822;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)71.5) ) ) {
        result[0] += 0.024208566108007448;
        result[1] += 0.000931098696461825;
        result[2] += 0.015828677839851025;
        result[3] += 0.12569832402234637;
        result[4] += 0.049348230912476726;
        result[5] += 0.7839851024208566;
      } else {
        result[0] += 0.6355979786636721;
        result[1] += 0.015721504772599662;
        result[2] += 0.06232453677709152;
        result[3] += 0.12071869736103313;
        result[4] += 0.06625491297024144;
        result[5] += 0.09938236945536216;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.08333333333333333;
        result[3] += 0.375;
        result[4] += 0.09375;
        result[5] += 0.4479166666666667;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7226277372262774;
        result[3] += 0.20437956204379562;
        result[4] += 0;
        result[5] += 0.072992700729927;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
        result[0] += 0.6;
        result[1] += 0.125;
        result[2] += 0.225;
        result[3] += 0.025;
        result[4] += 0.025;
        result[5] += 0;
      } else {
        result[0] += 0.016009852216748773;
        result[1] += 0;
        result[2] += 0.8990147783251232;
        result[3] += 0.08128078817733991;
        result[4] += 0;
        result[5] += 0.0036945812807881776;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)65) ) ) {
        result[0] += 0.01904761904761905;
        result[1] += 0.05396825396825397;
        result[2] += 0;
        result[3] += 0.015873015873015872;
        result[4] += 0.8317460317460318;
        result[5] += 0.07936507936507936;
      } else {
        result[0] += 0.7786885245901639;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.07377049180327869;
        result[5] += 0.14754098360655737;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
        result[0] += 0.0011337868480725624;
        result[1] += 0.006802721088435374;
        result[2] += 0.0045351473922902496;
        result[3] += 0.03968253968253968;
        result[4] += 0.06235827664399093;
        result[5] += 0.8854875283446711;
      } else {
        result[0] += 0.018947368421052633;
        result[1] += 0.010526315789473684;
        result[2] += 0.021052631578947368;
        result[3] += 0.4673684210526316;
        result[4] += 0.05473684210526316;
        result[5] += 0.42736842105263156;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        result[0] += 0.008097165991902834;
        result[1] += 0.8623481781376519;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.12753036437246965;
        result[5] += 0.0020242914979757085;
      } else {
        result[0] += 0.7825396825396825;
        result[1] += 0.026984126984126985;
        result[2] += 0.027777777777777776;
        result[3] += 0.04365079365079365;
        result[4] += 0.0865079365079365;
        result[5] += 0.03253968253968254;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
        result[0] += 0.31746031746031744;
        result[1] += 0.07407407407407407;
        result[2] += 0.17989417989417988;
        result[3] += 0.14285714285714285;
        result[4] += 0.06878306878306878;
        result[5] += 0.21693121693121692;
      } else {
        result[0] += 0.012855831037649219;
        result[1] += 0;
        result[2] += 0.8282828282828283;
        result[3] += 0.12029384756657484;
        result[4] += 0.0009182736455463728;
        result[5] += 0.03764921946740129;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.049107142857142856;
        result[2] += 0;
        result[3] += 0.044642857142857144;
        result[4] += 0.8660714285714286;
        result[5] += 0.04017857142857143;
      } else {
        result[0] += 0.0421216848673947;
        result[1] += 0.0046801872074883;
        result[2] += 0;
        result[3] += 0.14040561622464898;
        result[4] += 0.05694227769110764;
        result[5] += 0.7558502340093604;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.971252566735113;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.028747433264887063;
        result[5] += 0;
      } else {
        result[0] += 0.6058688147295743;
        result[1] += 0.03624856156501727;
        result[2] += 0.07307249712313005;
        result[3] += 0.094361334867664;
        result[4] += 0.11680092059838897;
        result[5] += 0.07364787111622556;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)101.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.09090909090909091;
        result[3] += 0.38181818181818183;
        result[4] += 0.01818181818181818;
        result[5] += 0.509090909090909;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6470588235294118;
        result[3] += 0.14705882352941177;
        result[4] += 0;
        result[5] += 0.20588235294117646;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.38235294117647056;
        result[3] += 0.5294117647058824;
        result[4] += 0;
        result[5] += 0.08823529411764706;
      } else {
        result[0] += 0.01337448559670782;
        result[1] += 0.0051440329218107005;
        result[2] += 0.9094650205761318;
        result[3] += 0.06481481481481483;
        result[4] += 0.0020576131687242804;
        result[5] += 0.0051440329218107005;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
        result[0] += 0.30823117338003503;
        result[1] += 0.0297723292469352;
        result[2] += 0;
        result[3] += 0.021015761821366025;
        result[4] += 0.5709281961471103;
        result[5] += 0.07005253940455342;
      } else {
        result[0] += 0.01927525057825752;
        result[1] += 0.013107170393215111;
        result[2] += 0.0030840400925212026;
        result[3] += 0.13261372397841173;
        result[4] += 0.08635312259059368;
        result[5] += 0.7455666923670008;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        result[0] += 0.006578947368421053;
        result[1] += 0.9210526315789475;
        result[2] += 0;
        result[3] += 0.006578947368421053;
        result[4] += 0.06140350877192983;
        result[5] += 0.004385964912280702;
      } else {
        result[0] += 0.7087452471482889;
        result[1] += 0.028897338403041817;
        result[2] += 0.0638783269961977;
        result[3] += 0.08136882129277564;
        result[4] += 0.06844106463878326;
        result[5] += 0.04866920152091253;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0.03902439024390244;
        result[1] += 0.014634146341463415;
        result[2] += 0.1951219512195122;
        result[3] += 0.4585365853658537;
        result[4] += 0.014634146341463415;
        result[5] += 0.2780487804878049;
      } else {
        result[0] += 0.14093959731543623;
        result[1] += 0;
        result[2] += 0.6912751677852349;
        result[3] += 0.14093959731543623;
        result[4] += 0;
        result[5] += 0.026845637583892617;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5277777777777778;
        result[3] += 0.4722222222222222;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.011292346298619825;
        result[1] += 0;
        result[2] += 0.9284818067754078;
        result[3] += 0.05144291091593475;
        result[4] += 0;
        result[5] += 0.00878293601003764;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        result[0] += 0;
        result[1] += 0.004201680672268907;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.957983193277311;
        result[5] += 0.037815126050420166;
      } else {
        result[0] += 0.42241379310344834;
        result[1] += 0.008620689655172415;
        result[2] += 0.01724137931034483;
        result[3] += 0.060344827586206906;
        result[4] += 0.16379310344827588;
        result[5] += 0.32758620689655177;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0028530670470756064;
        result[3] += 0.025677603423680456;
        result[4] += 0.03138373751783167;
        result[5] += 0.9400855920114123;
      } else {
        result[0] += 0;
        result[1] += 0.015841584158415842;
        result[2] += 0.009900990099009901;
        result[3] += 0.3405940594059406;
        result[4] += 0.10891089108910891;
        result[5] += 0.5247524752475248;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6935380678182982;
        result[1] += 0.07421625079974409;
        result[2] += 0.008957133717210493;
        result[3] += 0.04926423544465771;
        result[4] += 0.13755598208573255;
        result[5] += 0.036468330134357005;
      } else {
        result[0] += 0.009950248756218905;
        result[1] += 0.9751243781094527;
        result[2] += 0;
        result[3] += 0.0024875621890547263;
        result[4] += 0.012437810945273632;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)83.5) ) ) {
        result[0] += 0.05482456140350877;
        result[1] += 0.0021929824561403508;
        result[2] += 0.4583333333333333;
        result[3] += 0.3355263157894737;
        result[4] += 0.006578947368421052;
        result[5] += 0.1425438596491228;
      } else {
        result[0] += 0.0035502958579881655;
        result[1] += 0;
        result[2] += 0.8923076923076924;
        result[3] += 0.08284023668639054;
        result[4] += 0;
        result[5] += 0.021301775147928994;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.011764705882352941;
        result[2] += 0;
        result[3] += 0.00784313725490196;
        result[4] += 0.8901960784313725;
        result[5] += 0.09019607843137255;
      } else {
        result[0] += 0.0405616224648986;
        result[1] += 0.01326053042121685;
        result[2] += 0.01170046801872075;
        result[3] += 0.14742589703588144;
        result[4] += 0.04914196567862714;
        result[5] += 0.7379095163806553;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)59.5) ) ) {
        result[0] += 0;
        result[1] += 0.8937007874015748;
        result[2] += 0;
        result[3] += 0.005905511811023622;
        result[4] += 0.10039370078740158;
        result[5] += 0;
      } else {
        result[0] += 0.6392479435957696;
        result[1] += 0.03290246768507638;
        result[2] += 0.06345475910693302;
        result[3] += 0.08225616921269095;
        result[4] += 0.10869565217391304;
        result[5] += 0.07344300822561692;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.19834710743801653;
        result[3] += 0.5371900826446281;
        result[4] += 0.05785123966942149;
        result[5] += 0.2066115702479339;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.64;
        result[3] += 0.22;
        result[4] += 0.01;
        result[5] += 0.13;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
        result[0] += 0;
        result[1] += 0.42105263157894735;
        result[2] += 0.10526315789473684;
        result[3] += 0;
        result[4] += 0.10526315789473684;
        result[5] += 0.3684210526315789;
      } else {
        result[0] += 0.02026221692491061;
        result[1] += 0;
        result[2] += 0.9058402860548271;
        result[3] += 0.06912991656734208;
        result[4] += 0;
        result[5] += 0.004767580452920143;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
        result[0] += 0.16615384615384615;
        result[1] += 0.021538461538461538;
        result[2] += 0.006153846153846154;
        result[3] += 0.04;
        result[4] += 0.68;
        result[5] += 0.08615384615384615;
      } else {
        result[0] += 0.0008517887563884157;
        result[1] += 0.0068143100511073255;
        result[2] += 0.0034071550255536627;
        result[3] += 0.16098807495741055;
        result[4] += 0.06047700170357751;
        result[5] += 0.7674616695059625;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)55.5) ) ) {
        result[0] += 0;
        result[1] += 0.926;
        result[2] += 0;
        result[3] += 0.01;
        result[4] += 0.06;
        result[5] += 0.004;
      } else {
        result[0] += 0.6315172817809022;
        result[1] += 0.033391915641476276;
        result[2] += 0.07439953134153486;
        result[3] += 0.08142940831868775;
        result[4] += 0.10251903925014645;
        result[5] += 0.07674282366725249;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75.5) ) ) {
        result[0] += 0;
        result[1] += 0.058823529411764705;
        result[2] += 0.029411764705882353;
        result[3] += 0.058823529411764705;
        result[4] += 0.23529411764705882;
        result[5] += 0.6176470588235294;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.3793103448275862;
        result[3] += 0.4482758620689655;
        result[4] += 0;
        result[5] += 0.1724137931034483;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)87.5) ) ) {
        result[0] += 0.011764705882352943;
        result[1] += 0.0029411764705882357;
        result[2] += 0.761764705882353;
        result[3] += 0.17941176470588238;
        result[4] += 0.011764705882352943;
        result[5] += 0.0323529411764706;
      } else {
        result[0] += 0.0033277870216306157;
        result[1] += 0;
        result[2] += 0.9600665557404326;
        result[3] += 0.028286189683860232;
        result[4] += 0.0016638935108153079;
        result[5] += 0.0066555740432612314;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.007352941176470588;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9595588235294118;
        result[5] += 0.03308823529411765;
      } else {
        result[0] += 0.04251839738348324;
        result[1] += 0.027800490596892886;
        result[2] += 0.013900245298446443;
        result[3] += 0.1561733442354865;
        result[4] += 0.044971381847914965;
        result[5] += 0.7146361406377759;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)104.5) ) ) {
        result[0] += 0.6411130039750141;
        result[1] += 0.0499716070414537;
        result[2] += 0.047700170357751266;
        result[3] += 0.0664395229982964;
        result[4] += 0.13628620102214647;
        result[5] += 0.05848949460533786;
      } else {
        result[0] += 0.005050505050505051;
        result[1] += 0.9949494949494949;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)87.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.12727272727272726;
        result[3] += 0.01818181818181818;
        result[4] += 0.21818181818181817;
        result[5] += 0.6363636363636364;
      } else {
        result[0] += 0;
        result[1] += 0.041666666666666664;
        result[2] += 0.2638888888888889;
        result[3] += 0.5972222222222222;
        result[4] += 0;
        result[5] += 0.09722222222222222;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.3859649122807018;
        result[3] += 0.2105263157894737;
        result[4] += 0.01754385964912281;
        result[5] += 0.3859649122807018;
      } else {
        result[0] += 0.021212121212121213;
        result[1] += 0.00101010101010101;
        result[2] += 0.8838383838383839;
        result[3] += 0.08383838383838384;
        result[4] += 0;
        result[5] += 0.010101010101010102;
      }
    }
  }
  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)92.5) ) ) {
        result[0] += 0;
        result[1] += 0.00819672131147541;
        result[2] += 0;
        result[3] += 0.00819672131147541;
        result[4] += 0.930327868852459;
        result[5] += 0.05327868852459016;
      } else {
        result[0] += 0;
        result[1] += 0.6;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.4;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
        result[0] += 0.06020408163265306;
        result[1] += 0.015306122448979591;
        result[2] += 0.0020408163265306124;
        result[3] += 0.04693877551020408;
        result[4] += 0.07244897959183673;
        result[5] += 0.8030612244897959;
      } else {
        result[0] += 0.03333333333333333;
        result[1] += 0.00909090909090909;
        result[2] += 0.12727272727272726;
        result[3] += 0.5181818181818182;
        result[4] += 0.030303030303030304;
        result[5] += 0.2818181818181818;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)54.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)88) ) ) {
        result[0] += 0;
        result[1] += 0.08;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.92;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.9586956521739132;
        result[2] += 0;
        result[3] += 0.008695652173913045;
        result[4] += 0.023913043478260874;
        result[5] += 0.008695652173913045;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
        result[0] += 0.7422748191978962;
        result[1] += 0.030243261012491782;
        result[2] += 0.011834319526627219;
        result[3] += 0.05062458908612755;
        result[4] += 0.09598948060486522;
        result[5] += 0.06903353057199212;
      } else {
        result[0] += 0.023089171974522295;
        result[1] += 0.009554140127388536;
        result[2] += 0.7683121019108281;
        result[3] += 0.11783439490445861;
        result[4] += 0.008757961783439492;
        result[5] += 0.07245222929936307;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)93.5) ) ) {
        result[0] += 0.01358695652173913;
        result[1] += 0.07336956521739131;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8586956521739131;
        result[5] += 0.05434782608695652;
      } else {
        result[0] += 0;
        result[1] += 0.9562363238512035;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.0437636761487965;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
        result[0] += 0.04239401496259352;
        result[1] += 0.00914380714879468;
        result[2] += 0.014131338320864505;
        result[3] += 0.15295095594347466;
        result[4] += 0.07564422277639235;
        result[5] += 0.7057356608478803;
      } else {
        result[0] += 0.6339080459770114;
        result[1] += 0.01896551724137931;
        result[2] += 0.0706896551724138;
        result[3] += 0.09770114942528736;
        result[4] += 0.07413793103448275;
        result[5] += 0.10459770114942529;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)83.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0.00909090909090909;
        result[1] += 0;
        result[2] += 0.18181818181818182;
        result[3] += 0.4090909090909091;
        result[4] += 0.045454545454545456;
        result[5] += 0.35454545454545455;
      } else {
        result[0] += 0.0975609756097561;
        result[1] += 0;
        result[2] += 0.7621951219512195;
        result[3] += 0.1402439024390244;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        result[0] += 0.009090909090909092;
        result[1] += 0;
        result[2] += 0.7863636363636365;
        result[3] += 0.15454545454545457;
        result[4] += 0.009090909090909092;
        result[5] += 0.040909090909090916;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9716312056737589;
        result[3] += 0.026595744680851068;
        result[4] += 0;
        result[5] += 0.001773049645390071;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        result[0] += 0.011494252873563218;
        result[1] += 0.05747126436781609;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8773946360153256;
        result[5] += 0.05363984674329502;
      } else {
        result[0] += 0.03442622950819672;
        result[1] += 0.009016393442622951;
        result[2] += 0.002459016393442623;
        result[3] += 0.15081967213114755;
        result[4] += 0.07131147540983607;
        result[5] += 0.7319672131147541;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)55.5) ) ) {
        result[0] += 0.006741573033707865;
        result[1] += 0.9146067415730337;
        result[2] += 0;
        result[3] += 0.008988764044943821;
        result[4] += 0.0696629213483146;
        result[5] += 0;
      } else {
        result[0] += 0.5880380100614868;
        result[1] += 0.03577417551704863;
        result[2] += 0.07825600894354388;
        result[3] += 0.10061486864169927;
        result[4] += 0.09949692565679151;
        result[5] += 0.09782001117942984;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0.04895104895104895;
        result[1] += 0.06293706293706294;
        result[2] += 0.20279720279720279;
        result[3] += 0.2727272727272727;
        result[4] += 0.11188811188811189;
        result[5] += 0.3006993006993007;
      } else {
        result[0] += 0.013513513513513514;
        result[1] += 0;
        result[2] += 0.8378378378378378;
        result[3] += 0.08108108108108109;
        result[4] += 0;
        result[5] += 0.06756756756756757;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
        result[0] += 0.010344827586206896;
        result[1] += 0;
        result[2] += 0.7413793103448276;
        result[3] += 0.23103448275862068;
        result[4] += 0;
        result[5] += 0.017241379310344827;
      } else {
        result[0] += 0.003311258278145696;
        result[1] += 0;
        result[2] += 0.9586092715231789;
        result[3] += 0.036423841059602655;
        result[4] += 0;
        result[5] += 0.001655629139072848;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)71.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.007168458781362007;
        result[1] += 0.05734767025089606;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8494623655913979;
        result[5] += 0.08602150537634409;
      } else {
        result[0] += 0.02064896755162242;
        result[1] += 0.0029498525073746312;
        result[2] += 0.0029498525073746312;
        result[3] += 0.11897738446411013;
        result[4] += 0.048180924287118974;
        result[5] += 0.8062930186823992;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6227738801942796;
        result[1] += 0.05018888289260658;
        result[2] += 0.024284943335132217;
        result[3] += 0.07825148407987048;
        result[4] += 0.13275769023205614;
        result[5] += 0.09174311926605505;
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
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0.03508771929824562;
        result[2] += 0.1345029239766082;
        result[3] += 0.5555555555555557;
        result[4] += 0.029239766081871347;
        result[5] += 0.2456140350877193;
      } else {
        result[0] += 0.06134969325153374;
        result[1] += 0.024539877300613498;
        result[2] += 0.6196319018404908;
        result[3] += 0.15337423312883436;
        result[4] += 0.03067484662576687;
        result[5] += 0.11042944785276074;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
        result[0] += 0.030303030303030304;
        result[1] += 0;
        result[2] += 0.3333333333333333;
        result[3] += 0.24242424242424243;
        result[4] += 0.030303030303030304;
        result[5] += 0.36363636363636365;
      } else {
        result[0] += 0.043869516310461196;
        result[1] += 0;
        result[2] += 0.8683914510686164;
        result[3] += 0.0764904386951631;
        result[4] += 0;
        result[5] += 0.01124859392575928;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)59.5) ) ) {
        result[0] += 0;
        result[1] += 0.021929824561403508;
        result[2] += 0.008771929824561403;
        result[3] += 0.021929824561403508;
        result[4] += 0.9254385964912281;
        result[5] += 0.021929824561403508;
      } else {
        result[0] += 0.030418250950570342;
        result[1] += 0.01064638783269962;
        result[2] += 0.02053231939163498;
        result[3] += 0.1467680608365019;
        result[4] += 0.06768060836501902;
        result[5] += 0.7239543726235741;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        result[0] += 0;
        result[1] += 0.9118852459016393;
        result[2] += 0;
        result[3] += 0.0020491803278688526;
        result[4] += 0.0860655737704918;
        result[5] += 0;
      } else {
        result[0] += 0.6584938704028022;
        result[1] += 0.015178050204319908;
        result[2] += 0.060712200817279634;
        result[3] += 0.0834792761237595;
        result[4] += 0.09748978400467018;
        result[5] += 0.08464681844716872;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)107) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.1320754716981132;
        result[3] += 0.4528301886792453;
        result[4] += 0.05660377358490566;
        result[5] += 0.3584905660377358;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.673469387755102;
        result[3] += 0.061224489795918366;
        result[4] += 0;
        result[5] += 0.2653061224489796;
      }
    } else {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)93.5) ) ) {
        result[0] += 0.045454545454545456;
        result[1] += 0;
        result[2] += 0.3181818181818182;
        result[3] += 0.5;
        result[4] += 0.13636363636363635;
        result[5] += 0;
      } else {
        result[0] += 0.007306889352818371;
        result[1] += 0.0020876826722338203;
        result[2] += 0.907098121085595;
        result[3] += 0.0709812108559499;
        result[4] += 0;
        result[5] += 0.012526096033402923;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)70.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.04504504504504504;
        result[2] += 0.013513513513513514;
        result[3] += 0.0045045045045045045;
        result[4] += 0.8558558558558559;
        result[5] += 0.08108108108108109;
      } else {
        result[0] += 0.011235955056179775;
        result[1] += 0.010299625468164793;
        result[2] += 0.0046816479400749065;
        result[3] += 0.10861423220973783;
        result[4] += 0.07584269662921349;
        result[5] += 0.7893258426966292;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)54.5) ) ) {
        result[0] += 0;
        result[1] += 0.911522633744856;
        result[2] += 0;
        result[3] += 0.01646090534979424;
        result[4] += 0.06995884773662552;
        result[5] += 0.00205761316872428;
      } else {
        result[0] += 0.5821428571428571;
        result[1] += 0.03418367346938775;
        result[2] += 0.04999999999999999;
        result[3] += 0.11428571428571425;
        result[4] += 0.11326530612244895;
        result[5] += 0.1061224489795918;
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        result[0] += 0.04430379746835443;
        result[1] += 0.0189873417721519;
        result[2] += 0.2468354430379747;
        result[3] += 0.4177215189873418;
        result[4] += 0.03164556962025317;
        result[5] += 0.24050632911392406;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)74.5) ) ) {
        result[0] += 0.34042553191489366;
        result[1] += 0;
        result[2] += 0.4468085106382979;
        result[3] += 0.08510638297872342;
        result[4] += 0;
        result[5] += 0.12765957446808512;
      } else {
        result[0] += 0.0035087719298245615;
        result[1] += 0;
        result[2] += 0.9064327485380117;
        result[3] += 0.08538011695906433;
        result[4] += 0;
        result[5] += 0.004678362573099415;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        result[0] += 0.21397379912663755;
        result[1] += 0.004366812227074236;
        result[2] += 0;
        result[3] += 0.006550218340611353;
        result[4] += 0.6703056768558951;
        result[5] += 0.10480349344978165;
      } else {
        result[0] += 0.0054249547920434;
        result[1] += 0.0027124773960217;
        result[2] += 0.003616636528028933;
        result[3] += 0.09132007233273057;
        result[4] += 0.08951175406871609;
        result[5] += 0.8074141048824593;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)58.5) ) ) {
        result[0] += 0;
        result[1] += 0.9368191721132898;
        result[2] += 0.006535947712418301;
        result[3] += 0.017429193899782137;
        result[4] += 0.0392156862745098;
        result[5] += 0;
      } else {
        result[0] += 0.5916856492027335;
        result[1] += 0.03132118451025057;
        result[2] += 0.06662870159453303;
        result[3] += 0.14123006833712984;
        result[4] += 0.07574031890660592;
        result[5] += 0.09339407744874716;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
        result[0] += 0;
        result[1] += 0.09375;
        result[2] += 0.109375;
        result[3] += 0.328125;
        result[4] += 0.09375;
        result[5] += 0.375;
      } else {
        result[0] += 0.018518518518518517;
        result[1] += 0;
        result[2] += 0.8518518518518519;
        result[3] += 0.07407407407407407;
        result[4] += 0;
        result[5] += 0.05555555555555555;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        result[0] += 0.00823045267489712;
        result[1] += 0;
        result[2] += 0.7242798353909465;
        result[3] += 0.20987654320987653;
        result[4] += 0;
        result[5] += 0.05761316872427984;
      } else {
        result[0] += 0.0029154518950437317;
        result[1] += 0;
        result[2] += 0.9548104956268222;
        result[3] += 0.04227405247813411;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.017316017316017316;
        result[2] += 0.008658008658008658;
        result[3] += 0.008658008658008658;
        result[4] += 0.9264069264069265;
        result[5] += 0.03896103896103896;
      } else {
        result[0] += 0.03459637561779242;
        result[1] += 0.018121911037891267;
        result[2] += 0.004118616144975288;
        result[3] += 0.1326194398682043;
        result[4] += 0.05518945634266886;
        result[5] += 0.7553542009884678;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6022187004754358;
        result[1] += 0.047015319598520865;
        result[2] += 0.044374009508716325;
        result[3] += 0.08821975699947174;
        result[4] += 0.13629160063391443;
        result[5] += 0.08188061278394083;
      } else {
        result[0] += 0.007228915662650603;
        result[1] += 0.9927710843373494;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
        result[0] += 0.009615384615384618;
        result[1] += 0;
        result[2] += 0.31730769230769235;
        result[3] += 0.5000000000000001;
        result[4] += 0.009615384615384618;
        result[5] += 0.1634615384615385;
      } else {
        result[0] += 0.1095890410958904;
        result[1] += 0;
        result[2] += 0.6712328767123288;
        result[3] += 0.1095890410958904;
        result[4] += 0;
        result[5] += 0.1095890410958904;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        result[0] += 0.027777777777777776;
        result[1] += 0;
        result[2] += 0.8117283950617284;
        result[3] += 0.1419753086419753;
        result[4] += 0;
        result[5] += 0.018518518518518517;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9685314685314685;
        result[3] += 0.027972027972027972;
        result[4] += 0;
        result[5] += 0.0034965034965034965;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.09016393442622951;
        result[2] += 0;
        result[3] += 0.012295081967213115;
        result[4] += 0.8729508196721312;
        result[5] += 0.02459016393442623;
      } else {
        result[0] += 0.03686274509803922;
        result[1] += 0.002352941176470588;
        result[2] += 0.004705882352941176;
        result[3] += 0.16;
        result[4] += 0.05568627450980392;
        result[5] += 0.7403921568627451;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)55.5) ) ) {
        result[0] += 0;
        result[1] += 0.9177215189873418;
        result[2] += 0;
        result[3] += 0.004219409282700422;
        result[4] += 0.07805907172995781;
        result[5] += 0;
      } else {
        result[0] += 0.6161007667031764;
        result[1] += 0.038335158817086525;
        result[2] += 0.05805038335158817;
        result[3] += 0.09802847754654984;
        result[4] += 0.11117196056955093;
        result[5] += 0.0783132530120482;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0.08888888888888889;
        result[2] += 0.044444444444444446;
        result[3] += 0.3333333333333333;
        result[4] += 0.022222222222222223;
        result[5] += 0.5111111111111111;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.550561797752809;
        result[3] += 0.4157303370786517;
        result[4] += 0;
        result[5] += 0.033707865168539325;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.3181818181818182;
        result[3] += 0.2727272727272727;
        result[4] += 0;
        result[5] += 0.4090909090909091;
      } else {
        result[0] += 0.01645123384253819;
        result[1] += 0.0023501762632197414;
        result[2] += 0.9095182138660399;
        result[3] += 0.05992949471210341;
        result[4] += 0.0011750881316098707;
        result[5] += 0.010575793184488837;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)65) ) ) {
        result[0] += 0;
        result[1] += 0.0297029702970297;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9603960396039604;
        result[5] += 0.009900990099009901;
      } else {
        result[0] += 0.3153153153153153;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.3063063063063063;
        result[5] += 0.3783783783783784;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.02170767004341534;
        result[4] += 0.023154848046309694;
        result[5] += 0.9551374819102749;
      } else {
        result[0] += 0;
        result[1] += 0.041916167664670656;
        result[2] += 0.031936127744510975;
        result[3] += 0.36127744510978044;
        result[4] += 0.0499001996007984;
        result[5] += 0.5149700598802395;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        result[0] += 0.0036496350364963502;
        result[1] += 0.7718978102189781;
        result[2] += 0;
        result[3] += 0.012773722627737226;
        result[4] += 0.1897810218978102;
        result[5] += 0.021897810218978103;
      } else {
        result[0] += 0.7418278852568378;
        result[1] += 0.03602401601067378;
        result[2] += 0.02068045363575717;
        result[3] += 0.06070713809206137;
        result[4] += 0.08805870580386925;
        result[5] += 0.052701801200800535;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)100.5) ) ) {
        result[0] += 0.009316770186335404;
        result[1] += 0.006211180124223602;
        result[2] += 0.30745341614906835;
        result[3] += 0.2857142857142857;
        result[4] += 0.09627329192546584;
        result[5] += 0.2950310559006211;
      } else {
        result[0] += 0.022058823529411766;
        result[1] += 0.0010504201680672268;
        result[2] += 0.8676470588235294;
        result[3] += 0.0861344537815126;
        result[4] += 0.0031512605042016808;
        result[5] += 0.01995798319327731;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.011152416356877323;
        result[1] += 0.0037174721189591076;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.929368029739777;
        result[5] += 0.055762081784386616;
      } else {
        result[0] += 0.03727714748784441;
        result[1] += 0.006482982171799027;
        result[2] += 0.0008103727714748784;
        result[3] += 0.14829821717990274;
        result[4] += 0.05348460291734198;
        result[5] += 0.7536466774716369;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)55.5) ) ) {
        result[0] += 0.006250000000000001;
        result[1] += 0.9083333333333334;
        result[2] += 0.0041666666666666675;
        result[3] += 0.008333333333333335;
        result[4] += 0.07291666666666669;
        result[5] += 0;
      } else {
        result[0] += 0.6566978193146418;
        result[1] += 0.04299065420560748;
        result[2] += 0.05046728971962617;
        result[3] += 0.0735202492211838;
        result[4] += 0.1133956386292835;
        result[5] += 0.06292834890965732;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)101.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.2153846153846154;
        result[3] += 0.5692307692307692;
        result[4] += 0.023076923076923078;
        result[5] += 0.19230769230769232;
      } else {
        result[0] += 0.0111731843575419;
        result[1] += 0;
        result[2] += 0.553072625698324;
        result[3] += 0.25139664804469275;
        result[4] += 0.01675977653631285;
        result[5] += 0.16759776536312848;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
        result[0] += 0.30337078651685395;
        result[1] += 0;
        result[2] += 0.5730337078651685;
        result[3] += 0.10112359550561797;
        result[4] += 0;
        result[5] += 0.02247191011235955;
      } else {
        result[0] += 0.005952380952380952;
        result[1] += 0.004761904761904762;
        result[2] += 0.9297619047619048;
        result[3] += 0.05357142857142857;
        result[4] += 0;
        result[5] += 0.005952380952380952;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)99) ) ) {
        result[0] += 0.012077294685990338;
        result[1] += 0.06280193236714976;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.857487922705314;
        result[5] += 0.06763285024154589;
      } else {
        result[0] += 0;
        result[1] += 0.9667359667359667;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.033264033264033266;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)72.5) ) ) {
        result[0] += 0.030357142857142857;
        result[1] += 0.0008928571428571428;
        result[2] += 0.009821428571428571;
        result[3] += 0.15625;
        result[4] += 0.05;
        result[5] += 0.7526785714285714;
      } else {
        result[0] += 0.6876876876876877;
        result[1] += 0.01921921921921922;
        result[2] += 0.026426426426426425;
        result[3] += 0.08168168168168168;
        result[4] += 0.07627627627627627;
        result[5] += 0.1087087087087087;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)80.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.1276595744680851;
        result[3] += 0.6702127659574468;
        result[4] += 0;
        result[5] += 0.20212765957446807;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6875;
        result[3] += 0.125;
        result[4] += 0;
        result[5] += 0.1875;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.51;
        result[3] += 0.35;
        result[4] += 0;
        result[5] += 0.14;
      } else {
        result[0] += 0.025442477876106196;
        result[1] += 0;
        result[2] += 0.9059734513274337;
        result[3] += 0.06084070796460177;
        result[4] += 0.0055309734513274336;
        result[5] += 0.0022123893805309734;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.03937007874015748;
        result[2] += 0;
        result[3] += 0.011811023622047244;
        result[4] += 0.8740157480314961;
        result[5] += 0.07480314960629922;
      } else {
        result[0] += 0.03916866506794564;
        result[1] += 0.003996802557953637;
        result[2] += 0.0031974420463629096;
        result[3] += 0.15667466027178256;
        result[4] += 0.051159072741806554;
        result[5] += 0.7458033573141487;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0.9632034632034632;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.0367965367965368;
        result[5] += 0;
      } else {
        result[0] += 0.6059085841694537;
        result[1] += 0.03121516164994426;
        result[2] += 0.07803790412486064;
        result[3] += 0.08862876254180602;
        result[4] += 0.12597547380156077;
        result[5] += 0.07023411371237458;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)94.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)86) ) ) {
        result[0] += 0;
        result[1] += 0.043010752688172046;
        result[2] += 0.08602150537634409;
        result[3] += 0.3870967741935484;
        result[4] += 0.021505376344086023;
        result[5] += 0.46236559139784944;
      } else {
        result[0] += 0.08333333333333333;
        result[1] += 0;
        result[2] += 0.6944444444444444;
        result[3] += 0;
        result[4] += 0.19444444444444445;
        result[5] += 0.027777777777777776;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
        result[0] += 0.01444043321299639;
        result[1] += 0;
        result[2] += 0.6895306859205776;
        result[3] += 0.24548736462093862;
        result[4] += 0.0036101083032490976;
        result[5] += 0.04693140794223827;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9514415781487102;
        result[3] += 0.04704097116843703;
        result[4] += 0;
        result[5] += 0.0015174506828528073;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        result[0] += 0.11144578313253012;
        result[1] += 0.0572289156626506;
        result[2] += 0;
        result[3] += 0.018072289156626505;
        result[4] += 0.7259036144578314;
        result[5] += 0.08734939759036145;
      } else {
        result[0] += 0.0025795356835769563;
        result[1] += 0.0017196904557179708;
        result[2] += 0.009458297506448839;
        result[3] += 0.16680997420464316;
        result[4] += 0.04987102321582115;
        result[5] += 0.7695614789337919;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9400428265524625;
        result[2] += 0;
        result[3] += 0.019271948608137045;
        result[4] += 0.04068522483940043;
        result[5] += 0;
      } else {
        result[0] += 0.588203167667941;
        result[1] += 0.034953577280174765;
        result[2] += 0.05243036592026215;
        result[3] += 0.10212998361551065;
        result[4] += 0.12834516657564174;
        result[5] += 0.0939377389404697;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)80) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.22727272727272727;
        result[3] += 0.5795454545454546;
        result[4] += 0.011363636363636364;
        result[5] += 0.18181818181818182;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5918367346938775;
        result[3] += 0.22448979591836735;
        result[4] += 0;
        result[5] += 0.1836734693877551;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
        result[0] += 0.0418848167539267;
        result[1] += 0;
        result[2] += 0.7853403141361255;
        result[3] += 0.14921465968586384;
        result[4] += 0;
        result[5] += 0.023560209424083763;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9708171206225681;
        result[3] += 0.029182879377431907;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
        result[0] += 0.012084592145015106;
        result[1] += 0.08157099697885196;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8277945619335347;
        result[5] += 0.07854984894259819;
      } else {
        result[0] += 0.05113160100586756;
        result[1] += 0.006705783738474434;
        result[2] += 0.0016764459346186086;
        result[3] += 0.1601005867560771;
        result[4] += 0.09471919530595138;
        result[5] += 0.6856663872590109;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)69.5) ) ) {
        result[0] += 0.00980392156862745;
        result[1] += 0.7728758169934641;
        result[2] += 0;
        result[3] += 0.013071895424836602;
        result[4] += 0.17973856209150327;
        result[5] += 0.024509803921568627;
      } else {
        result[0] += 0.7379310344827587;
        result[1] += 0.019310344827586208;
        result[2] += 0.043448275862068966;
        result[3] += 0.06206896551724138;
        result[4] += 0.05862068965517241;
        result[5] += 0.07862068965517241;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.05263157894736842;
        result[3] += 0.17543859649122806;
        result[4] += 0.10526315789473684;
        result[5] += 0.6666666666666666;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.39823008849557523;
        result[3] += 0.4778761061946903;
        result[4] += 0;
        result[5] += 0.12389380530973451;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
        result[0] += 0.22;
        result[1] += 0.12;
        result[2] += 0.2;
        result[3] += 0.04;
        result[4] += 0.24;
        result[5] += 0.18;
      } else {
        result[0] += 0.012127894156560088;
        result[1] += 0;
        result[2] += 0.9029768467475193;
        result[3] += 0.07276736493936053;
        result[4] += 0;
        result[5] += 0.012127894156560088;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.01090909090909091;
        result[1] += 0;
        result[2] += 0.0036363636363636364;
        result[3] += 0;
        result[4] += 0.9527272727272728;
        result[5] += 0.03272727272727273;
      } else {
        result[0] += 0.030807660283097418;
        result[1] += 0.002497918401332223;
        result[2] += 0.005828476269775187;
        result[3] += 0.14071606994171523;
        result[4] += 0.06328059950041633;
        result[5] += 0.7568692756036636;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0.9533333333333334;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.04666666666666667;
        result[5] += 0;
      } else {
        result[0] += 0.6821360457724095;
        result[1] += 0.03432930705657979;
        result[2] += 0.038143674507310876;
        result[3] += 0.06738715829624922;
        result[4] += 0.11824539097266372;
        result[5] += 0.05975842339478704;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
        result[0] += 0.03571428571428571;
        result[1] += 0.023809523809523808;
        result[2] += 0.09523809523809523;
        result[3] += 0.011904761904761904;
        result[4] += 0.25;
        result[5] += 0.5833333333333334;
      } else {
        result[0] += 0.009302325581395349;
        result[1] += 0.004651162790697674;
        result[2] += 0.3209302325581395;
        result[3] += 0.4604651162790698;
        result[4] += 0.027906976744186046;
        result[5] += 0.17674418604651163;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)74.5) ) ) {
        result[0] += 0.8333333333333334;
        result[1] += 0;
        result[2] += 0.08333333333333333;
        result[3] += 0.08333333333333333;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.011811023622047246;
        result[1] += 0;
        result[2] += 0.9045275590551182;
        result[3] += 0.07480314960629923;
        result[4] += 0;
        result[5] += 0.008858267716535435;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        result[0] += 0.023333333333333334;
        result[1] += 0;
        result[2] += 0.01;
        result[3] += 0.0033333333333333335;
        result[4] += 0.89;
        result[5] += 0.07333333333333333;
      } else {
        result[0] += 0.025869037995149554;
        result[1] += 0.008084074373484237;
        result[2] += 0.002425222312045271;
        result[3] += 0.15117219078415522;
        result[4] += 0.041228779304769606;
        result[5] += 0.7712206952303962;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
        result[0] += 0.0064516129032258064;
        result[1] += 0.8048387096774193;
        result[2] += 0;
        result[3] += 0.0032258064516129032;
        result[4] += 0.1774193548387097;
        result[5] += 0.008064516129032258;
      } else {
        result[0] += 0.7629578438147893;
        result[1] += 0.03800967519004837;
        result[2] += 0.017277125086385625;
        result[3] += 0.055286800276434005;
        result[4] += 0.07394609536973047;
        result[5] += 0.0525224602626123;
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)85.5) ) ) {
        result[0] += 0.018018018018018018;
        result[1] += 0;
        result[2] += 0.24774774774774774;
        result[3] += 0.527027027027027;
        result[4] += 0.018018018018018018;
        result[5] += 0.1891891891891892;
      } else {
        result[0] += 0.1111111111111111;
        result[1] += 0;
        result[2] += 0.7407407407407407;
        result[3] += 0.04938271604938271;
        result[4] += 0;
        result[5] += 0.09876543209876543;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.3484848484848485;
        result[3] += 0.3787878787878788;
        result[4] += 0.07575757575757576;
        result[5] += 0.19696969696969696;
      } else {
        result[0] += 0.028135990621336465;
        result[1] += 0;
        result[2] += 0.8944900351699884;
        result[3] += 0.06916764361078548;
        result[4] += 0;
        result[5] += 0.008206330597889803;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)81.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.9860465116279068;
        result[2] += 0;
        result[3] += 0.0023255813953488367;
        result[4] += 0.00697674418604651;
        result[5] += 0.0046511627906976735;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)92.5) ) ) {
        result[0] += 0.08221680876979294;
        result[1] += 0.01705237515225335;
        result[2] += 0.010353227771010963;
        result[3] += 0.0925700365408039;
        result[4] += 0.26431181485992694;
        result[5] += 0.5334957369062119;
      } else {
        result[0] += 0.6428106701366298;
        result[1] += 0.03708523096942095;
        result[2] += 0.05204944697462589;
        result[3] += 0.10800260247234873;
        result[4] += 0.08718282368249837;
        result[5] += 0.07286922576447626;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)88.5) ) ) {
        result[0] += 0.02857142857142857;
        result[1] += 0.05714285714285714;
        result[2] += 0.0761904761904762;
        result[3] += 0.14285714285714285;
        result[4] += 0.10476190476190476;
        result[5] += 0.5904761904761905;
      } else {
        result[0] += 0.018633540372670808;
        result[1] += 0.006211180124223602;
        result[2] += 0.37267080745341613;
        result[3] += 0.4161490683229814;
        result[4] += 0;
        result[5] += 0.18633540372670807;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)119.5) ) ) {
        result[0] += 0.018957345971563982;
        result[1] += 0;
        result[2] += 0.8957345971563981;
        result[3] += 0.08175355450236967;
        result[4] += 0.001184834123222749;
        result[5] += 0.002369668246445498;
      } else {
        result[0] += 0.297029702970297;
        result[1] += 0;
        result[2] += 0.6633663366336634;
        result[3] += 0.009900990099009901;
        result[4] += 0;
        result[5] += 0.0297029702970297;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)45.5) ) ) {
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
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
        result[0] += 0.02252252252252252;
        result[1] += 0.005148005148005148;
        result[2] += 0.0045045045045045045;
        result[3] += 0.13063063063063063;
        result[4] += 0.2072072072072072;
        result[5] += 0.62998712998713;
      } else {
        result[0] += 0.6299885974914482;
        result[1] += 0.045610034207525664;
        result[2] += 0.04732041049030788;
        result[3] += 0.0877993158494869;
        result[4] += 0.12428734321550743;
        result[5] += 0.06499429874572407;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)102.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.2111111111111111;
        result[3] += 0.6555555555555556;
        result[4] += 0.011111111111111112;
        result[5] += 0.12222222222222222;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.8125;
        result[3] += 0.0625;
        result[4] += 0;
        result[5] += 0.125;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7794871794871795;
        result[3] += 0.18974358974358974;
        result[4] += 0;
        result[5] += 0.03076923076923077;
      } else {
        result[0] += 0.026595744680851064;
        result[1] += 0;
        result[2] += 0.9428191489361702;
        result[3] += 0.02925531914893617;
        result[4] += 0;
        result[5] += 0.0013297872340425532;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69.5) ) ) {
        result[0] += 0;
        result[1] += 0.015789473684210527;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9789473684210527;
        result[5] += 0.005263157894736842;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.08823529411764706;
        result[3] += 0.17647058823529413;
        result[4] += 0.4411764705882353;
        result[5] += 0.29411764705882354;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.01772525849335303;
        result[4] += 0.0310192023633678;
        result[5] += 0.9512555391432792;
      } else {
        result[0] += 0.06174957118353345;
        result[1] += 0.018867924528301886;
        result[2] += 0.05317324185248713;
        result[3] += 0.30360205831903947;
        result[4] += 0.07890222984562607;
        result[5] += 0.483704974271012;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
        result[0] += 0;
        result[1] += 0.07142857142857142;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9285714285714286;
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
        result[0] += 0.7736111111111111;
        result[1] += 0.034722222222222224;
        result[2] += 0.021527777777777778;
        result[3] += 0.029166666666666667;
        result[4] += 0.1111111111111111;
        result[5] += 0.029861111111111113;
      } else {
        result[0] += 0.04252400548696845;
        result[1] += 0.006172839506172839;
        result[2] += 0.6378600823045267;
        result[3] += 0.1831275720164609;
        result[4] += 0.037037037037037035;
        result[5] += 0.09327846364883402;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.006666666666666668;
        result[1] += 0.060000000000000005;
        result[2] += 0.003333333333333334;
        result[3] += 0.006666666666666668;
        result[4] += 0.8966666666666667;
        result[5] += 0.026666666666666672;
      } else {
        result[0] += 0.06761565836298933;
        result[1] += 0.0056939501779359435;
        result[2] += 0.0014234875444839859;
        result[3] += 0.1807829181494662;
        result[4] += 0.04555160142348755;
        result[5] += 0.698932384341637;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.8693957115009746;
        result[2] += 0.001949317738791423;
        result[3] += 0;
        result[4] += 0.1189083820662768;
        result[5] += 0.009746588693957114;
      } else {
        result[0] += 0.6751754945756222;
        result[1] += 0.04020421186981493;
        result[2] += 0.05998723675813657;
        result[3] += 0.07019783024888322;
        result[4] += 0.10082961072112316;
        result[5] += 0.053605615826419914;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.18055555555555555;
        result[3] += 0.6805555555555556;
        result[4] += 0;
        result[5] += 0.1388888888888889;
      } else {
        result[0] += 0.07339449541284404;
        result[1] += 0;
        result[2] += 0.6972477064220184;
        result[3] += 0.1651376146788991;
        result[4] += 0.01834862385321101;
        result[5] += 0.045871559633027525;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        result[0] += 0.04123711340206186;
        result[1] += 0;
        result[2] += 0.7628865979381444;
        result[3] += 0.1701030927835052;
        result[4] += 0;
        result[5] += 0.025773195876288662;
      } else {
        result[0] += 0.009009009009009009;
        result[1] += 0;
        result[2] += 0.9474474474474475;
        result[3] += 0.04354354354354354;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.011152416356877323;
        result[2] += 0;
        result[3] += 0.026022304832713755;
        result[4] += 0.8996282527881041;
        result[5] += 0.06319702602230483;
      } else {
        result[0] += 0.028782894736842105;
        result[1] += 0.0024671052631578946;
        result[2] += 0.005756578947368421;
        result[3] += 0.14473684210526316;
        result[4] += 0.0649671052631579;
        result[5] += 0.7532894736842105;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6715715126545025;
        result[1] += 0.056503825779870495;
        result[2] += 0.029429075927015883;
        result[3] += 0.06533254855797527;
        result[4] += 0.12831077104178926;
        result[5] += 0.04885226603884637;
      } else {
        result[0] += 0.0024271844660194173;
        result[1] += 0.9975728155339806;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        result[0] += 0;
        result[1] += 0.01764705882352941;
        result[2] += 0.11176470588235295;
        result[3] += 0.5352941176470588;
        result[4] += 0.01764705882352941;
        result[5] += 0.3176470588235294;
      } else {
        result[0] += 0.013605442176870748;
        result[1] += 0.047619047619047616;
        result[2] += 0.5374149659863946;
        result[3] += 0.08843537414965986;
        result[4] += 0.047619047619047616;
        result[5] += 0.2653061224489796;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        result[0] += 0.06666666666666668;
        result[1] += 0;
        result[2] += 0.7176470588235295;
        result[3] += 0.17254901960784316;
        result[4] += 0.003921568627450981;
        result[5] += 0.03921568627450981;
      } else {
        result[0] += 0.012158054711246202;
        result[1] += 0;
        result[2] += 0.9300911854103344;
        result[3] += 0.05471124620060791;
        result[4] += 0;
        result[5] += 0.0030395136778115506;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)84.5) ) ) {
        result[0] += 0;
        result[1] += 0.5;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.5;
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
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
        result[0] += 0.05764563106796117;
        result[1] += 0.007888349514563107;
        result[2] += 0.0024271844660194173;
        result[3] += 0.1407766990291262;
        result[4] += 0.1862864077669903;
        result[5] += 0.6049757281553398;
      } else {
        result[0] += 0.6897880539499037;
        result[1] += 0.05073859987154786;
        result[2] += 0.032755298651252415;
        result[3] += 0.0456005138086063;
        result[4] += 0.13166345536287735;
        result[5] += 0.04945407835581247;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)96.5) ) ) {
        result[0] += 0.0078125;
        result[1] += 0;
        result[2] += 0.171875;
        result[3] += 0.6171875;
        result[4] += 0;
        result[5] += 0.203125;
      } else {
        result[0] += 0.020833333333333332;
        result[1] += 0;
        result[2] += 0.5833333333333334;
        result[3] += 0.3194444444444444;
        result[4] += 0;
        result[5] += 0.0763888888888889;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
        result[0] += 0.1864406779661017;
        result[1] += 0;
        result[2] += 0.5084745762711864;
        result[3] += 0.11864406779661017;
        result[4] += 0;
        result[5] += 0.1864406779661017;
      } else {
        result[0] += 0.0035460992907801418;
        result[1] += 0;
        result[2] += 0.9267139479905437;
        result[3] += 0.06264775413711583;
        result[4] += 0;
        result[5] += 0.0070921985815602835;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.021551724137931036;
        result[1] += 0.008620689655172414;
        result[2] += 0.017241379310344827;
        result[3] += 0.004310344827586207;
        result[4] += 0.9310344827586207;
        result[5] += 0.017241379310344827;
      } else {
        result[0] += 0.03445512820512821;
        result[1] += 0.008012820512820512;
        result[2] += 0.004006410256410256;
        result[3] += 0.14102564102564102;
        result[4] += 0.05608974358974359;
        result[5] += 0.7564102564102564;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.8966861598440545;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.10331384015594541;
        result[5] += 0;
      } else {
        result[0] += 0.6849067949488875;
        result[1] += 0.02826217678893566;
        result[2] += 0.04690318701142514;
        result[3] += 0.07997594708358388;
        result[4] += 0.09801563439567047;
        result[5] += 0.0619362597714973;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
        result[0] += 0;
        result[1] += 0.02564102564102564;
        result[2] += 0.05128205128205128;
        result[3] += 0.07692307692307693;
        result[4] += 0.28205128205128205;
        result[5] += 0.5641025641025641;
      } else {
        result[0] += 0.012048192771084338;
        result[1] += 0.024096385542168676;
        result[2] += 0.4036144578313253;
        result[3] += 0.4397590361445783;
        result[4] += 0;
        result[5] += 0.12048192771084337;
      }
    } else {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)113.5) ) ) {
        result[0] += 0.008210180623973728;
        result[1] += 0;
        result[2] += 0.8653530377668309;
        result[3] += 0.1116584564860427;
        result[4] += 0;
        result[5] += 0.014778325123152709;
      } else {
        result[0] += 0.012618296529968454;
        result[1] += 0;
        result[2] += 0.9747634069400631;
        result[3] += 0.012618296529968454;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)99.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        result[0] += 0.46044864226682414;
        result[1] += 0.046044864226682414;
        result[2] += 0.007083825265643448;
        result[3] += 0.020070838252656438;
        result[4] += 0.40141676505312873;
        result[5] += 0.06493506493506494;
      } else {
        result[0] += 0.06267029972752043;
        result[1] += 0.02670299727520436;
        result[2] += 0.037057220708446865;
        result[3] += 0.22070844686648503;
        result[4] += 0.08010899182561308;
        result[5] += 0.5727520435967303;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)93) ) ) {
        result[0] += 0.0023094688221709007;
        result[1] += 0.9884526558891455;
        result[2] += 0;
        result[3] += 0.004618937644341801;
        result[4] += 0.004618937644341801;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.3333333333333333;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.6666666666666666;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85) ) ) {
        result[0] += 0.9686567164179105;
        result[1] += 0;
        result[2] += 0.01492537313432836;
        result[3] += 0.008955223880597017;
        result[4] += 0.005970149253731344;
        result[5] += 0.001492537313432836;
      } else {
        result[0] += 0.22580645161290322;
        result[1] += 0;
        result[2] += 0.7419354838709677;
        result[3] += 0.03225806451612903;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
        result[0] += 0.04148471615720524;
        result[1] += 0;
        result[2] += 0.7729257641921398;
        result[3] += 0.16375545851528384;
        result[4] += 0;
        result[5] += 0.021834061135371178;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9688644688644689;
        result[3] += 0.023809523809523808;
        result[4] += 0;
        result[5] += 0.007326007326007326;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        result[0] += 0.17357512953367876;
        result[1] += 0.04145077720207254;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.6632124352331606;
        result[5] += 0.12176165803108809;
      } else {
        result[0] += 0.008285004142502071;
        result[1] += 0.0033140016570008283;
        result[2] += 0.0033140016570008283;
        result[3] += 0.1855840927920464;
        result[4] += 0.05302402651201325;
        result[5] += 0.7464788732394366;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        result[0] += 0;
        result[1] += 0.8949416342412452;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.10505836575875487;
        result[5] += 0;
      } else {
        result[0] += 0.6448362720403024;
        result[1] += 0.03148614609571789;
        result[2] += 0.08249370277078087;
        result[3] += 0.06612090680100757;
        result[4] += 0.09823677581863981;
        result[5] += 0.07682619647355166;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
        result[0] += 0.05952380952380952;
        result[1] += 0.03571428571428571;
        result[2] += 0.16666666666666666;
        result[3] += 0.08333333333333333;
        result[4] += 0.2619047619047619;
        result[5] += 0.39285714285714285;
      } else {
        result[0] += 0.06153846153846154;
        result[1] += 0;
        result[2] += 0.3230769230769231;
        result[3] += 0.47692307692307695;
        result[4] += 0;
        result[5] += 0.13846153846153847;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0.04444444444444445;
        result[1] += 0;
        result[2] += 0.6333333333333334;
        result[3] += 0.23333333333333336;
        result[4] += 0;
        result[5] += 0.0888888888888889;
      } else {
        result[0] += 0.005605381165919282;
        result[1] += 0;
        result[2] += 0.9417040358744395;
        result[3] += 0.04708520179372197;
        result[4] += 0;
        result[5] += 0.005605381165919282;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)92.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.006134969325153374;
        result[1] += 0.0736196319018405;
        result[2] += 0.003067484662576687;
        result[3] += 0;
        result[4] += 0.8987730061349694;
        result[5] += 0.018404907975460124;
      } else {
        result[0] += 0.09829059829059829;
        result[1] += 0.0014245014245014246;
        result[2] += 0.007834757834757835;
        result[3] += 0.11538461538461539;
        result[4] += 0.0876068376068376;
        result[5] += 0.6894586894586895;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        result[0] += 0;
        result[1] += 0.904950495049505;
        result[2] += 0.0039603960396039604;
        result[3] += 0.011881188118811881;
        result[4] += 0.0594059405940594;
        result[5] += 0.019801980198019802;
      } else {
        result[0] += 0.7197400487408612;
        result[1] += 0.03168155970755484;
        result[2] += 0.023558082859463855;
        result[3] += 0.09504467912266451;
        result[4] += 0.08042242079610075;
        result[5] += 0.049553208773355;
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.06451612903225806;
        result[3] += 0.13978494623655913;
        result[4] += 0.11827956989247312;
        result[5] += 0.6774193548387096;
      } else {
        result[0] += 0.05649717514124294;
        result[1] += 0.00847457627118644;
        result[2] += 0.3898305084745763;
        result[3] += 0.3954802259887006;
        result[4] += 0.00847457627118644;
        result[5] += 0.14124293785310735;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
        result[0] += 0.2596153846153847;
        result[1] += 0.019230769230769235;
        result[2] += 0.4903846153846154;
        result[3] += 0.13461538461538464;
        result[4] += 0.009615384615384618;
        result[5] += 0.08653846153846155;
      } else {
        result[0] += 0.018541409147095175;
        result[1] += 0;
        result[2] += 0.8974042027194065;
        result[3] += 0.08158220024721878;
        result[4] += 0;
        result[5] += 0.0024721878862793566;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.08680555555555557;
        result[2] += 0;
        result[3] += 0.020833333333333336;
        result[4] += 0.8541666666666667;
        result[5] += 0.038194444444444454;
      } else {
        result[0] += 0.041084634346754315;
        result[1] += 0;
        result[2] += 0.009860312243221035;
        result[3] += 0.15447822514379622;
        result[4] += 0.05012325390304026;
        result[5] += 0.7444535743631882;
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)104.5) ) ) {
        result[0] += 0.6617473435655253;
        result[1] += 0.03955135773317592;
        result[2] += 0.048996458087367176;
        result[3] += 0.07497048406139316;
        result[4] += 0.13282172373081463;
        result[5] += 0.04191263282172373;
      } else {
        result[0] += 0;
        result[1] += 0.9911504424778762;
        result[2] += 0;
        result[3] += 0.006637168141592921;
        result[4] += 0.002212389380530974;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.13559322033898305;
        result[3] += 0.03389830508474576;
        result[4] += 0.2033898305084746;
        result[5] += 0.6271186440677966;
      } else {
        result[0] += 0.00975609756097561;
        result[1] += 0;
        result[2] += 0.44390243902439025;
        result[3] += 0.4585365853658537;
        result[4] += 0;
        result[5] += 0.08780487804878048;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
        result[0] += 0.2;
        result[1] += 0.125;
        result[2] += 0.3625;
        result[3] += 0.025;
        result[4] += 0.1625;
        result[5] += 0.125;
      } else {
        result[0] += 0.007220216606498195;
        result[1] += 0;
        result[2] += 0.9290012033694344;
        result[3] += 0.05776173285198556;
        result[4] += 0;
        result[5] += 0.006016847172081829;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        result[0] += 0.14153846153846153;
        result[1] += 0.04923076923076923;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7138461538461538;
        result[5] += 0.09538461538461539;
      } else {
        result[0] += 0.0018587360594795538;
        result[1] += 0.0027881040892193307;
        result[2] += 0.0018587360594795538;
        result[3] += 0.1607806691449814;
        result[4] += 0.05483271375464684;
        result[5] += 0.7778810408921933;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)55.5) ) ) {
        result[0] += 0.008676789587852497;
        result[1] += 0.9305856832971802;
        result[2] += 0;
        result[3] += 0.008676789587852497;
        result[4] += 0.05206073752711497;
        result[5] += 0;
      } else {
        result[0] += 0.6724969843184561;
        result[1] += 0.03377563329312425;
        result[2] += 0.041616405307599524;
        result[3] += 0.07358262967430641;
        result[4] += 0.0916767189384801;
        result[5] += 0.08685162846803379;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)84.5) ) ) {
        result[0] += 0;
        result[1] += 0.010416666666666666;
        result[2] += 0.13541666666666666;
        result[3] += 0.10416666666666667;
        result[4] += 0.1875;
        result[5] += 0.5625;
      } else {
        result[0] += 0.0037174721189591068;
        result[1] += 0;
        result[2] += 0.33457249070631967;
        result[3] += 0.5241635687732341;
        result[4] += 0.0074349442379182135;
        result[5] += 0.13011152416356875;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)67) ) ) {
        result[0] += 0;
        result[1] += 0.5;
        result[2] += 0.08333333333333333;
        result[3] += 0.16666666666666666;
        result[4] += 0.25;
        result[5] += 0;
      } else {
        result[0] += 0.023991275899672846;
        result[1] += 0;
        result[2] += 0.8920392584514721;
        result[3] += 0.06543075245365322;
        result[4] += 0.0010905125408942203;
        result[5] += 0.017448200654307525;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
        result[0] += 0.01606425702811245;
        result[1] += 0.01606425702811245;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9236947791164659;
        result[5] += 0.04417670682730924;
      } else {
        result[0] += 0.07147814018043026;
        result[1] += 0.01179736294240111;
        result[2] += 0.009021512838306732;
        result[3] += 0.1589174184594032;
        result[4] += 0.06384455239417071;
        result[5] += 0.684941013185288;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        result[0] += 0;
        result[1] += 0.8711538461538462;
        result[2] += 0.0038461538461538464;
        result[3] += 0.0019230769230769232;
        result[4] += 0.11538461538461539;
        result[5] += 0.007692307692307693;
      } else {
        result[0] += 0.7266993693062369;
        result[1] += 0.03363700070077085;
        result[2] += 0.051156271899089;
        result[3] += 0.05746320953048353;
        result[4] += 0.09810791871058164;
        result[5] += 0.032936229852838124;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.05263157894736842;
        result[3] += 0.618421052631579;
        result[4] += 0.02631578947368421;
        result[5] += 0.3026315789473684;
      } else {
        result[0] += 0;
        result[1] += 0.026315789473684213;
        result[2] += 0.2894736842105264;
        result[3] += 0.2368421052631579;
        result[4] += 0.026315789473684213;
        result[5] += 0.4210526315789474;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
        result[0] += 0.6;
        result[1] += 0.03333333333333333;
        result[2] += 0.13333333333333333;
        result[3] += 0.23333333333333334;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.013902681231380337;
        result[1] += 0;
        result[2] += 0.8917576961271102;
        result[3] += 0.07845084409136048;
        result[4] += 0;
        result[5] += 0.015888778550148957;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        result[0] += 0.12672176308539945;
        result[1] += 0.008264462809917356;
        result[2] += 0.013774104683195593;
        result[3] += 0;
        result[4] += 0.768595041322314;
        result[5] += 0.08264462809917356;
      } else {
        result[0] += 0.00264783759929391;
        result[1] += 0.01412180052956752;
        result[2] += 0.01588702559576346;
        result[3] += 0.16063548102383055;
        result[4] += 0.05472197705207414;
        result[5] += 0.7519858781994704;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        result[0] += 0.0016750418760469012;
        result[1] += 0.8525963149078727;
        result[2] += 0;
        result[3] += 0.006700167504187605;
        result[4] += 0.1390284757118928;
        result[5] += 0;
      } else {
        result[0] += 0.7527322404371586;
        result[1] += 0.026639344262295084;
        result[2] += 0.02595628415300547;
        result[3] += 0.0655737704918033;
        result[4] += 0.07445355191256832;
        result[5] += 0.054644808743169404;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)92.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.2857142857142857;
        result[4] += 0.06493506493506493;
        result[5] += 0.6493506493506493;
      } else {
        result[0] += 0;
        result[1] += 0.04568527918781726;
        result[2] += 0.3197969543147208;
        result[3] += 0.4467005076142132;
        result[4] += 0.05583756345177665;
        result[5] += 0.1319796954314721;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
        result[0] += 0.03278688524590164;
        result[1] += 0;
        result[2] += 0.7728337236533958;
        result[3] += 0.16159250585480095;
        result[4] += 0.00468384074941452;
        result[5] += 0.02810304449648712;
      } else {
        result[0] += 0.01232394366197183;
        result[1] += 0;
        result[2] += 0.9559859154929577;
        result[3] += 0.028169014084507043;
        result[4] += 0;
        result[5] += 0.0035211267605633804;
      }
    }
  }
  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)65) ) ) {
        result[0] += 0.035175879396984924;
        result[1] += 0.09045226130653267;
        result[2] += 0;
        result[3] += 0.03015075376884422;
        result[4] += 0.7839195979899497;
        result[5] += 0.06030150753768844;
      } else {
        result[0] += 0.89568345323741;
        result[1] += 0;
        result[2] += 0.0035971223021582736;
        result[3] += 0;
        result[4] += 0.046762589928057555;
        result[5] += 0.0539568345323741;
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
        result[0] += 0.00322234156820623;
        result[1] += 0.004296455424274973;
        result[2] += 0.0021482277121374865;
        result[3] += 0.06015037593984962;
        result[4] += 0.08055853920515575;
        result[5] += 0.849624060150376;
      } else {
        result[0] += 0.047619047619047616;
        result[1] += 0.03015873015873016;
        result[2] += 0.04126984126984127;
        result[3] += 0.45714285714285713;
        result[4] += 0.0873015873015873;
        result[5] += 0.33650793650793653;
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)66.5) ) ) {
        result[0] += 0.002288329519450801;
        result[1] += 0.9839816933638444;
        result[2] += 0;
        result[3] += 0.002288329519450801;
        result[4] += 0.011441647597254004;
        result[5] += 0;
      } else {
        result[0] += 0.8763213530655392;
        result[1] += 0.005285412262156448;
        result[2] += 0.039112050739957716;
        result[3] += 0.019027484143763214;
        result[4] += 0.04756871035940803;
        result[5] += 0.012684989429175475;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        result[0] += 0.07818930041152264;
        result[1] += 0.030864197530864196;
        result[2] += 0.5802469135802469;
        result[3] += 0.18106995884773663;
        result[4] += 0.037037037037037035;
        result[5] += 0.09259259259259259;
      } else {
        result[0] += 0.002777777777777778;
        result[1] += 0.004166666666666667;
        result[2] += 0.9319444444444445;
        result[3] += 0.04722222222222222;
        result[4] += 0;
        result[5] += 0.013888888888888888;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        result[0] += 0.1111111111111111;
        result[1] += 0.03333333333333333;
        result[2] += 0.011111111111111112;
        result[3] += 0;
        result[4] += 0.725;
        result[5] += 0.11944444444444445;
      } else {
        result[0] += 0.012808783165599268;
        result[1] += 0.0054894784995425435;
        result[2] += 0.0192131747483989;
        result[3] += 0.15827996340347666;
        result[4] += 0.05763952424519671;
        result[5] += 0.7465690759377859;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9800884955752213;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.01991150442477876;
        result[5] += 0;
      } else {
        result[0] += 0.683552220137586;
        result[1] += 0.035021888680425266;
        result[2] += 0.02564102564102564;
        result[3] += 0.06941838649155722;
        result[4] += 0.11507191994996874;
        result[5] += 0.07129455909943715;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)88.5) ) ) {
        result[0] += 0;
        result[1] += 0.13675213675213677;
        result[2] += 0.017094017094017096;
        result[3] += 0.27350427350427353;
        result[4] += 0.09401709401709402;
        result[5] += 0.47863247863247865;
      } else {
        result[0] += 0.04395604395604396;
        result[1] += 0.016483516483516484;
        result[2] += 0.33516483516483514;
        result[3] += 0.4725274725274725;
        result[4] += 0;
        result[5] += 0.13186813186813187;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)66.5) ) ) {
        result[0] += 0.8484848484848485;
        result[1] += 0;
        result[2] += 0.15151515151515152;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.013131313131313131;
        result[1] += 0;
        result[2] += 0.8868686868686869;
        result[3] += 0.09191919191919191;
        result[4] += 0;
        result[5] += 0.00808080808080808;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.014925373134328358;
        result[2] += 0;
        result[3] += 0.026119402985074626;
        result[4] += 0.8843283582089553;
        result[5] += 0.07462686567164178;
      } else {
        result[0] += 0.046063651591289785;
        result[1] += 0.0033500837520938024;
        result[2] += 0.002512562814070352;
        result[3] += 0.12814070351758794;
        result[4] += 0.0745393634840871;
        result[5] += 0.7453936348408711;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0.9655172413793104;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.034482758620689655;
        result[5] += 0;
      } else {
        result[0] += 0.6365227537922988;
        result[1] += 0.033255542590431744;
        result[2] += 0.058926487747958;
        result[3] += 0.0869311551925321;
        result[4] += 0.11551925320886816;
        result[5] += 0.06884480746791133;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
        result[0] += 0.009523809523809525;
        result[1] += 0.0380952380952381;
        result[2] += 0.05714285714285714;
        result[3] += 0.19047619047619047;
        result[4] += 0.13333333333333333;
        result[5] += 0.5714285714285714;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.39634146341463417;
        result[3] += 0.47560975609756095;
        result[4] += 0;
        result[5] += 0.12804878048780488;
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
        result[0] += 0.02631578947368421;
        result[1] += 0.017543859649122806;
        result[2] += 0.7587719298245614;
        result[3] += 0.14473684210526316;
        result[4] += 0;
        result[5] += 0.05263157894736842;
      } else {
        result[0] += 0.03193033381712627;
        result[1] += 0;
        result[2] += 0.9259796806966618;
        result[3] += 0.040638606676342524;
        result[4] += 0.001451378809869376;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)61.5) ) ) {
        result[0] += 0.13559322033898305;
        result[1] += 0.06779661016949153;
        result[2] += 0;
        result[3] += 0.005649717514124294;
        result[4] += 0.6299435028248588;
        result[5] += 0.16101694915254236;
      } else {
        result[0] += 0.006363636363636364;
        result[1] += 0.0009090909090909091;
        result[2] += 0.0036363636363636364;
        result[3] += 0.18181818181818182;
        result[4] += 0.08272727272727273;
        result[5] += 0.7245454545454545;
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)103.5) ) ) {
        result[0] += 0.5893769152196118;
        result[1] += 0.0546475995914198;
        result[2] += 0.07201225740551583;
        result[3] += 0.08988764044943819;
        result[4] += 0.10674157303370783;
        result[5] += 0.08733401430030642;
      } else {
        result[0] += 0.025839793281653745;
        result[1] += 0.9509043927648578;
        result[2] += 0.00516795865633075;
        result[3] += 0;
        result[4] += 0.01808785529715762;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)98.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.02040816326530612;
        result[3] += 0.673469387755102;
        result[4] += 0.02040816326530612;
        result[5] += 0.2857142857142857;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5555555555555556;
        result[3] += 0.08333333333333333;
        result[4] += 0;
        result[5] += 0.3611111111111111;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
        result[0] += 0.035143769968051124;
        result[1] += 0.006389776357827477;
        result[2] += 0.7827476038338659;
        result[3] += 0.1405750798722045;
        result[4] += 0.0031948881789137383;
        result[5] += 0.031948881789137386;
      } else {
        result[0] += 0.003179650238473768;
        result[1] += 0;
        result[2] += 0.958664546899841;
        result[3] += 0.03815580286168521;
        result[4] += 0;
        result[5] += 0;
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
