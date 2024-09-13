
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
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        result[0] += 0.10422535211267606;
        result[1] += 0.016901408450704224;
        result[2] += 0.014084507042253521;
        result[3] += 0.036619718309859155;
        result[4] += 0.7183098591549296;
        result[5] += 0.10985915492957747;
      } else {
        result[0] += 0.0017953321364452424;
        result[1] += 0.009874326750448833;
        result[2] += 0.004488330341113106;
        result[3] += 0.15350089766606823;
        result[4] += 0.05206463195691203;
        result[5] += 0.7782764811490126;
      }
    } else {
      if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)53.5) ) ) {
        result[0] += 0.004329004329004329;
        result[1] += 0.9285714285714286;
        result[2] += 0.012987012987012988;
        result[3] += 0.004329004329004329;
        result[4] += 0.049783549783549784;
        result[5] += 0;
      } else {
        result[0] += 0.626101321585903;
        result[1] += 0.037995594713656385;
        result[2] += 0.05726872246696035;
        result[3] += 0.08094713656387666;
        result[4] += 0.11013215859030837;
        result[5] += 0.08755506607929515;
      }
    }
  } else {
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.10679611650485438;
        result[3] += 0.5631067961165049;
        result[4] += 0.01941747572815534;
        result[5] += 0.31067961165048547;
      } else {
        result[0] += 0.04;
        result[1] += 0;
        result[2] += 0.64;
        result[3] += 0.16;
        result[4] += 0.03;
        result[5] += 0.13;
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0.18421052631578946;
        result[2] += 0.42105263157894735;
        result[3] += 0.13157894736842105;
        result[4] += 0;
        result[5] += 0.2631578947368421;
      } else {
        result[0] += 0.025059665871121718;
        result[1] += 0;
        result[2] += 0.9260143198090692;
        result[3] += 0.04892601431980907;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)92.5) ) ) {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
        result[0] += 0.016260162601626018;
        result[1] += 0.07046070460704607;
        result[2] += 0.008130081300813009;
        result[3] += 0.02168021680216802;
        result[4] += 0.8048780487804879;
        result[5] += 0.07859078590785908;
      } else {
        result[0] += 0.10141685309470544;
        result[1] += 0.005965697240865026;
        result[2] += 0.01267710663683818;
        result[3] += 0.11782252050708426;
        result[4] += 0.09992542878448919;
        result[5] += 0.6621923937360179;
      }
    } else {
      if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        result[0] += 0.011406844106463879;
        result[1] += 0.876425855513308;
        result[2] += 0;
        result[3] += 0.0038022813688212928;
        result[4] += 0.10836501901140684;
        result[5] += 0;
      } else {
        result[0] += 0.7165413533834587;
        result[1] += 0.038345864661654135;
        result[2] += 0.02857142857142857;
        result[3] += 0.0962406015037594;
        result[4] += 0.06616541353383458;
        result[5] += 0.05413533834586466;
      }
    }
  } else {
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
      if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)86) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.12962962962962962;
        result[3] += 0.14814814814814814;
        result[4] += 0.10185185185185185;
        result[5] += 0.6203703703703703;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.2635135135135135;
        result[3] += 0.5743243243243243;
        result[4] += 0;
        result[5] += 0.16216216216216217;
      }
    } else {
      if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
        result[0] += 0.3076923076923077;
        result[1] += 0.042735042735042736;
        result[2] += 0.36752136752136755;
        result[3] += 0.1282051282051282;
        result[4] += 0.03418803418803419;
        result[5] += 0.11965811965811966;
      } else {
        result[0] += 0.015783540022547914;
        result[1] += 0.002254791431792559;
        result[2] += 0.9052987598647125;
        result[3] += 0.06989853438556934;
        result[4] += 0;
        result[5] += 0.006764374295377677;
      }
    }
  }
  if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)81.5) ) ) {
        result[0] += 0;
        result[1] += 0.004201680672268907;
        result[2] += 0;
        result[3] += 0.004201680672268907;
        result[4] += 0.9453781512605042;
        result[5] += 0.046218487394957986;
      } else {
        result[0] += 0;
        result[1] += 0.25;
        result[2] += 0;
        result[3] += 0.4375;
        result[4] += 0.125;
        result[5] += 0.1875;
      }
    } else {
      if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)67.5) ) ) {
        result[0] += 0.003355704697986577;
        result[1] += 0;
        result[2] += 0.0022371364653243847;
        result[3] += 0.06040268456375839;
        result[4] += 0.04809843400447427;
        result[5] += 0.8859060402684564;
      } else {
        result[0] += 0.15055467511885895;
        result[1] += 0.012678288431061807;
        result[2] += 0.025356576862123614;
        result[3] += 0.312202852614897;
        result[4] += 0.1109350237717908;
        result[5] += 0.38827258320126784;
      }
    }
  } else {
    if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)56.5) ) ) {
      if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)88.5) ) ) {
        result[0] += 0;
        result[1] += 0.32;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.68;
        result[5] += 0;
      } else {
        result[0] += 0.0022271714922048997;
        result[1] += 0.9665924276169265;
        result[2] += 0.017817371937639197;
        result[3] += 0.0022271714922048997;
        result[4] += 0.011135857461024499;
        result[5] += 0;
      }
    } else {
      if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
        result[0] += 0.7716827279466272;
        result[1] += 0.061527057079318014;
        result[2] += 0.011860637509266123;
        result[3] += 0.03261675315048184;
        result[4] += 0.09488510007412898;
        result[5] += 0.02742772424017791;
      } else {
        result[0] += 0.03104575163398693;
        result[1] += 0.0008169934640522876;
        result[2] += 0.7892156862745098;
        result[3] += 0.11683006535947713;
        result[4] += 0.0024509803921568627;
        result[5] += 0.059640522875817;
      }
    }
  }
  if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
      if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)67.5) ) ) {
        result[0] += 0.0036363636363636364;
        result[1] += 0.01090909090909091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9818181818181818;
        result[5] += 0.0036363636363636364;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.4;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
        result[0] += 0.017584994138335287;
        result[1] += 0;
        result[2] += 0.0035169988276670576;
        result[3] += 0.04689331770222743;
        result[4] += 0.05509964830011723;
        result[5] += 0.876905041031653;
      } else {
        result[0] += 0.05764411027568922;
        result[1] += 0.017543859649122806;
        result[2] += 0.012531328320802004;
        result[3] += 0.42857142857142855;
        result[4] += 0.05263157894736842;
        result[5] += 0.43107769423558895;
      }
    }
  } else {
    if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)51.5) ) ) {
        result[0] += 0.013636363636363636;
        result[1] += 0.9545454545454546;
        result[2] += 0;
        result[3] += 0.006818181818181818;
        result[4] += 0.025;
        result[5] += 0;
      } else {
        result[0] += 0.7003968253968255;
        result[1] += 0.0548941798941799;
        result[2] += 0.009920634920634922;
        result[3] += 0.05158730158730159;
        result[4] += 0.13029100529100532;
        result[5] += 0.052910052910052914;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
        result[0] += 0;
        result[1] += 0.004651162790697674;
        result[2] += 0.17674418604651163;
        result[3] += 0.48372093023255813;
        result[4] += 0.009302325581395349;
        result[5] += 0.32558139534883723;
      } else {
        result[0] += 0.025846702317290554;
        result[1] += 0;
        result[2] += 0.8556149732620321;
        result[3] += 0.09803921568627451;
        result[4] += 0.00089126559714795;
        result[5] += 0.0196078431372549;
      }
    }
  }
  if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
    if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)74.5) ) ) {
      if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
        result[0] += 0.01724137931034483;
        result[1] += 0.010344827586206898;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9241379310344828;
        result[5] += 0.048275862068965524;
      } else {
        result[0] += 0.04788961038961039;
        result[1] += 0.022727272727272728;
        result[2] += 0.030032467532467532;
        result[3] += 0.12012987012987013;
        result[4] += 0.05438311688311688;
        result[5] += 0.7248376623376623;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        result[0] += 0;
        result[1] += 0.8479087452471483;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.15019011406844107;
        result[5] += 0.0019011406844106464;
      } else {
        result[0] += 0.7805044308111794;
        result[1] += 0.0245398773006135;
        result[2] += 0.021131561008861627;
        result[3] += 0.053851397409679626;
        result[4] += 0.07293796864349013;
        result[5] += 0.04703476482617588;
      }
    }
  } else {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)83.5) ) ) {
        result[0] += 0;
        result[1] += 0.009615384615384616;
        result[2] += 0.038461538461538464;
        result[3] += 0.0673076923076923;
        result[4] += 0.3173076923076923;
        result[5] += 0.5673076923076923;
      } else {
        result[0] += 0;
        result[1] += 0.0050251256281407045;
        result[2] += 0.19095477386934676;
        result[3] += 0.5276381909547739;
        result[4] += 0;
        result[5] += 0.2763819095477387;
      }
    } else {
      if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)94.5) ) ) {
        result[0] += 0.014925373134328358;
        result[1] += 0.029850746268656716;
        result[2] += 0.373134328358209;
        result[3] += 0.19402985074626866;
        result[4] += 0.05970149253731343;
        result[5] += 0.3283582089552239;
      } else {
        result[0] += 0.01700318809776833;
        result[1] += 0;
        result[2] += 0.895855472901169;
        result[3] += 0.07970244420828905;
        result[4] += 0.0010626992561105207;
        result[5] += 0.006376195536663124;
      }
    }
  }
  if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
    if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
      if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0.0037174721189591076;
        result[1] += 0.040892193308550186;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9479553903345725;
        result[5] += 0.007434944237918215;
      } else {
        result[0] += 0.6490066225165563;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.09271523178807947;
        result[5] += 0.2582781456953642;
      }
    } else {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
        result[0] += 0;
        result[1] += 0.009404388714733543;
        result[2] += 0;
        result[3] += 0.04075235109717868;
        result[4] += 0.06060606060606061;
        result[5] += 0.8892371995820272;
      } else {
        result[0] += 0.0069767441860465115;
        result[1] += 0.020930232558139535;
        result[2] += 0.027906976744186046;
        result[3] += 0.5162790697674419;
        result[4] += 0.020930232558139535;
        result[5] += 0.4069767441860465;
      }
    }
  } else {
    if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
      if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        result[0] += 0.003766478342749529;
        result[1] += 0.864406779661017;
        result[2] += 0;
        result[3] += 0.0018832391713747645;
        result[4] += 0.12429378531073447;
        result[5] += 0.005649717514124294;
      } else {
        result[0] += 0.7844217151848938;
        result[1] += 0.03697875688434304;
        result[2] += 0.01809598741148702;
        result[3] += 0.045633359559402044;
        result[4] += 0.0920535011801731;
        result[5] += 0.022816679779701022;
      }
    } else {
      if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
        result[0] += 0.20873786407766992;
        result[1] += 0.03883495145631068;
        result[2] += 0.30582524271844663;
        result[3] += 0.1504854368932039;
        result[4] += 0.07281553398058253;
        result[5] += 0.22330097087378645;
      } else {
        result[0] += 0.004945598417408506;
        result[1] += 0.0019782393669634025;
        result[2] += 0.8555885262116716;
        result[3] += 0.11177052423343224;
        result[4] += 0;
        result[5] += 0.025717111770524232;
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
        result[0] += 0.14417177914110432;
        result[1] += 0.0245398773006135;
        result[2] += 0;
        result[3] += 0.027607361963190188;
        result[4] += 0.6809815950920246;
        result[5] += 0.1226993865030675;
      } else {
        result[0] += 0.007582139848357203;
        result[1] += 0.006739679865206402;
        result[2] += 0.0016849199663016006;
        result[3] += 0.14995787700084245;
        result[4] += 0.05644481887110362;
        result[5] += 0.7775905644481887;
      }
    } else {
      if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0.951276102088167;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.04640371229698376;
        result[5] += 0.002320185614849188;
      } else {
        result[0] += 0.6239766081871345;
        result[1] += 0.044444444444444446;
        result[2] += 0.05789473684210526;
        result[3] += 0.07368421052631578;
        result[4] += 0.13567251461988303;
        result[5] += 0.06432748538011696;
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
      if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
        result[0] += 0;
        result[1] += 0.1590909090909091;
        result[2] += 0;
        result[3] += 0.14772727272727273;
        result[4] += 0.045454545454545456;
        result[5] += 0.6477272727272727;
      } else {
        result[0] += 0.008264462809917356;
        result[1] += 0;
        result[2] += 0.36363636363636365;
        result[3] += 0.36363636363636365;
        result[4] += 0.03305785123966942;
        result[5] += 0.23140495867768596;
      }
    } else {
      if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)101) ) ) {
        result[0] += 0.06751054852320676;
        result[1] += 0;
        result[2] += 0.6877637130801689;
        result[3] += 0.21940928270042198;
        result[4] += 0.0042194092827004225;
        result[5] += 0.021097046413502112;
      } else {
        result[0] += 0.009641873278236913;
        result[1] += 0;
        result[2] += 0.9393939393939392;
        result[3] += 0.04683195592286501;
        result[4] += 0;
        result[5] += 0.004132231404958677;
      }
    }
  }
  if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)80) ) ) {
        result[0] += 0;
        result[1] += 0.004048582995951417;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9676113360323887;
        result[5] += 0.02834008097165992;
      } else {
        result[0] += 0;
        result[1] += 0.31578947368421056;
        result[2] += 0;
        result[3] += 0.368421052631579;
        result[4] += 0;
        result[5] += 0.31578947368421056;
      }
    } else {
      if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
        result[0] += 0.002635046113306983;
        result[1] += 0;
        result[2] += 0.005270092226613966;
        result[3] += 0.01844532279314888;
        result[4] += 0.05533596837944664;
        result[5] += 0.9183135704874835;
      } else {
        result[0] += 0.06019417475728155;
        result[1] += 0.005825242718446602;
        result[2] += 0.011650485436893204;
        result[3] += 0.3611650485436893;
        result[4] += 0.0854368932038835;
        result[5] += 0.47572815533980584;
      }
    }
  } else {
    if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        result[0] += 0;
        result[1] += 0.8840864440078585;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.11591355599214145;
        result[5] += 0;
      } else {
        result[0] += 0.7572559366754618;
        result[1] += 0.032321899736147755;
        result[2] += 0.005277044854881266;
        result[3] += 0.05474934036939314;
        result[4] += 0.10488126649076517;
        result[5] += 0.04551451187335093;
      }
    } else {
      if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.3056768558951965;
        result[3] += 0.4410480349344978;
        result[4] += 0;
        result[5] += 0.25327510917030566;
      } else {
        result[0] += 0.02616279069767442;
        result[1] += 0;
        result[2] += 0.8401162790697675;
        result[3] += 0.10271317829457365;
        result[4] += 0.0048449612403100775;
        result[5] += 0.02616279069767442;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.01020408163265306;
        result[1] += 0.09183673469387756;
        result[2] += 0.013605442176870748;
        result[3] += 0.003401360544217687;
        result[4] += 0.8435374149659864;
        result[5] += 0.03741496598639456;
      } else {
        result[0] += 0.05229283990345937;
        result[1] += 0.0008045052292839903;
        result[2] += 0.0056315366049879325;
        result[3] += 0.13998390989541432;
        result[4] += 0.05711987127916331;
        result[5] += 0.7441673370876911;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)59.5) ) ) {
        result[0] += 0;
        result[1] += 0.9004149377593361;
        result[2] += 0.002074688796680498;
        result[3] += 0.016597510373443983;
        result[4] += 0.07261410788381743;
        result[5] += 0.008298755186721992;
      } else {
        result[0] += 0.7258848022206802;
        result[1] += 0.025676613462873008;
        result[2] += 0.03955586398334491;
        result[3] += 0.05204718945176961;
        result[4] += 0.09368494101318531;
        result[5] += 0.06315058986814713;
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        result[0] += 0.016260162601626018;
        result[1] += 0.02032520325203252;
        result[2] += 0.10975609756097561;
        result[3] += 0.483739837398374;
        result[4] += 0.04065040650406504;
        result[5] += 0.32926829268292684;
      } else {
        result[0] += 0.03260869565217391;
        result[1] += 0.14130434782608695;
        result[2] += 0.6086956521739131;
        result[3] += 0.09782608695652174;
        result[4] += 0.010869565217391304;
        result[5] += 0.10869565217391304;
      }
    } else {
      if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
        result[0] += 0.7441860465116279;
        result[1] += 0;
        result[2] += 0.16279069767441862;
        result[3] += 0.06976744186046512;
        result[4] += 0.023255813953488372;
        result[5] += 0;
      } else {
        result[0] += 0.011167512690355331;
        result[1] += 0;
        result[2] += 0.9055837563451777;
        result[3] += 0.07411167512690357;
        result[4] += 0;
        result[5] += 0.009137055837563454;
      }
    }
  }
  if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)89.5) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.00980392156862745;
        result[1] += 0.05228758169934641;
        result[2] += 0;
        result[3] += 0.0032679738562091504;
        result[4] += 0.9117647058823529;
        result[5] += 0.02287581699346405;
      } else {
        result[0] += 0.09838846480067855;
        result[1] += 0.009329940627650551;
        result[2] += 0.010178117048346057;
        result[3] += 0.0720949957591179;
        result[4] += 0.0729431721798134;
        result[5] += 0.7370653095843935;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)68.5) ) ) {
        result[0] += 0.012048192771084338;
        result[1] += 0.8382099827882961;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.13941480206540446;
        result[5] += 0.010327022375215147;
      } else {
        result[0] += 0.7133802816901409;
        result[1] += 0.014084507042253521;
        result[2] += 0.030985915492957747;
        result[3] += 0.11056338028169015;
        result[4] += 0.06267605633802817;
        result[5] += 0.06830985915492958;
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)101.5) ) ) {
        result[0] += 0;
        result[1] += 0.004081632653061225;
        result[2] += 0.11836734693877551;
        result[3] += 0.5795918367346938;
        result[4] += 0.012244897959183673;
        result[5] += 0.2857142857142857;
      } else {
        result[0] += 0.035398230088495575;
        result[1] += 0.04424778761061947;
        result[2] += 0.336283185840708;
        result[3] += 0.10619469026548672;
        result[4] += 0.17699115044247787;
        result[5] += 0.3008849557522124;
      }
    } else {
      if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6037735849056604;
        result[3] += 0.39622641509433965;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.015069967707212056;
        result[1] += 0;
        result[2] += 0.9041980624327234;
        result[3] += 0.062432723358449946;
        result[4] += 0;
        result[5] += 0.01829924650161464;
      }
    }
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
    if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        result[0] += 0.1048158640226629;
        result[1] += 0.06232294617563739;
        result[2] += 0;
        result[3] += 0.0169971671388102;
        result[4] += 0.6883852691218131;
        result[5] += 0.1274787535410765;
      } else {
        result[0] += 0.01011029411764706;
        result[1] += 0.0055147058823529415;
        result[2] += 0.0027573529411764708;
        result[3] += 0.1479779411764706;
        result[4] += 0.0625;
        result[5] += 0.7711397058823529;
      }
    } else {
      if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)104.5) ) ) {
        result[0] += 0.6450471698113208;
        result[1] += 0.05247641509433963;
        result[2] += 0.0277122641509434;
        result[3] += 0.07016509433962266;
        result[4] += 0.10672169811320756;
        result[5] += 0.09787735849056606;
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
    if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
      if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.12299465240641712;
        result[3] += 0.5775401069518716;
        result[4] += 0.03208556149732621;
        result[5] += 0.26737967914438504;
      } else {
        result[0] += 0.020202020202020204;
        result[1] += 0.010101010101010102;
        result[2] += 0.696969696969697;
        result[3] += 0.18181818181818182;
        result[4] += 0;
        result[5] += 0.09090909090909091;
      }
    } else {
      if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
        result[0] += 0.6521739130434783;
        result[1] += 0.06521739130434782;
        result[2] += 0.13043478260869565;
        result[3] += 0.021739130434782608;
        result[4] += 0.043478260869565216;
        result[5] += 0.08695652173913043;
      } else {
        result[0] += 0.016563146997929608;
        result[1] += 0.0010351966873706005;
        result[2] += 0.8840579710144928;
        result[3] += 0.07763975155279502;
        result[4] += 0.005175983436853002;
        result[5] += 0.015527950310559006;
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)59.5) ) ) {
        result[0] += 0.17434210526315788;
        result[1] += 0.006578947368421052;
        result[2] += 0.023026315789473683;
        result[3] += 0.019736842105263157;
        result[4] += 0.6973684210526315;
        result[5] += 0.07894736842105263;
      } else {
        result[0] += 0.0007818608287724785;
        result[1] += 0.0023455824863174357;
        result[2] += 0.004691164972634871;
        result[3] += 0.14698983580922595;
        result[4] += 0.09225957779515247;
        result[5] += 0.7529319781078968;
      }
    } else {
      if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9800443458980045;
        result[2] += 0;
        result[3] += 0.004434589800443459;
        result[4] += 0.015521064301552107;
        result[5] += 0;
      } else {
        result[0] += 0.658183921341816;
        result[1] += 0.031231925968768073;
        result[2] += 0.05725853094274147;
        result[3] += 0.08733371891266628;
        result[4] += 0.10699826489300174;
        result[5] += 0.058993637941006365;
      }
    }
  } else {
    if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)79.5) ) ) {
      if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)80.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.14492753623188406;
        result[3] += 0.5362318840579711;
        result[4] += 0;
        result[5] += 0.3188405797101449;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.65;
        result[3] += 0.15;
        result[4] += 0.025;
        result[5] += 0.175;
      }
    } else {
      if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)114.5) ) ) {
        result[0] += 0.0022050716648291074;
        result[1] += 0;
        result[2] += 0.9106945975744213;
        result[3] += 0.07717750826901876;
        result[4] += 0.0022050716648291074;
        result[5] += 0.007717750826901875;
      } else {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
    if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.014705882352941176;
        result[4] += 0.8713235294117647;
        result[5] += 0.11397058823529412;
      } else {
        result[0] += 0.0392;
        result[1] += 0.0048;
        result[2] += 0.0088;
        result[3] += 0.1288;
        result[4] += 0.068;
        result[5] += 0.7504;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        result[0] += 0;
        result[1] += 0.8452611218568665;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.1528046421663443;
        result[5] += 0.0019342359767891683;
      } else {
        result[0] += 0.6816199376947041;
        result[1] += 0.03364485981308411;
        result[2] += 0.056074766355140186;
        result[3] += 0.08847352024922119;
        result[4] += 0.07725856697819315;
        result[5] += 0.06292834890965732;
      }
    }
  } else {
    if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)84.5) ) ) {
        result[0] += 0;
        result[1] += 0.06;
        result[2] += 0.04;
        result[3] += 0.1;
        result[4] += 0.12;
        result[5] += 0.68;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.1388888888888889;
        result[3] += 0.6805555555555556;
        result[4] += 0.027777777777777776;
        result[5] += 0.1527777777777778;
      }
    } else {
      if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        result[0] += 0.010416666666666668;
        result[1] += 0.010416666666666668;
        result[2] += 0.42708333333333337;
        result[3] += 0.37500000000000006;
        result[4] += 0.07291666666666669;
        result[5] += 0.10416666666666669;
      } else {
        result[0] += 0.007261410788381743;
        result[1] += 0;
        result[2] += 0.9273858921161826;
        result[3] += 0.0508298755186722;
        result[4] += 0.0031120331950207467;
        result[5] += 0.011410788381742738;
      }
    }
  }
  if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        result[0] += 0.0029069767441860465;
        result[1] += 0.02616279069767442;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9244186046511628;
        result[5] += 0.046511627906976744;
      } else {
        result[0] += 0.07022900763358779;
        result[1] += 0.011450381679389313;
        result[2] += 0.006870229007633588;
        result[3] += 0.14427480916030536;
        result[4] += 0.04732824427480916;
        result[5] += 0.7198473282442748;
      }
    } else {
      if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        result[0] += 0.0025839793281653752;
        result[1] += 0.9689922480620156;
        result[2] += 0;
        result[3] += 0.0025839793281653752;
        result[4] += 0.02583979328165375;
        result[5] += 0;
      } else {
        result[0] += 0.6976109215017064;
        result[1] += 0.03890784982935153;
        result[2] += 0.04505119453924915;
        result[3] += 0.04709897610921502;
        result[4] += 0.12354948805460751;
        result[5] += 0.04778156996587031;
      }
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        result[0] += 0.00909090909090909;
        result[1] += 0.01818181818181818;
        result[2] += 0.1318181818181818;
        result[3] += 0.4681818181818182;
        result[4] += 0.06818181818181818;
        result[5] += 0.30454545454545456;
      } else {
        result[0] += 0.1165644171779141;
        result[1] += 0.012269938650306749;
        result[2] += 0.6319018404907976;
        result[3] += 0.147239263803681;
        result[4] += 0.018404907975460124;
        result[5] += 0.0736196319018405;
      }
    } else {
      if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)87.5) ) ) {
        result[0] += 0.005763688760806916;
        result[1] += 0;
        result[2] += 0.7838616714697406;
        result[3] += 0.16138328530259366;
        result[4] += 0.002881844380403458;
        result[5] += 0.04610951008645533;
      } else {
        result[0] += 0.008474576271186442;
        result[1] += 0;
        result[2] += 0.9745762711864407;
        result[3] += 0.013559322033898306;
        result[4] += 0;
        result[5] += 0.0033898305084745766;
      }
    }
  }
  if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.006779661016949152;
        result[1] += 0.02711864406779661;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8779661016949153;
        result[5] += 0.08813559322033898;
      } else {
        result[0] += 0.0387263339070568;
        result[1] += 0.006024096385542169;
        result[2] += 0.004302925989672977;
        result[3] += 0.153184165232358;
        result[4] += 0.03270223752151463;
        result[5] += 0.7650602409638554;
      }
    } else {
      if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)66.5) ) ) {
        result[0] += 0.001834862385321101;
        result[1] += 0.8146788990825689;
        result[2] += 0;
        result[3] += 0.01651376146788991;
        result[4] += 0.1669724770642202;
        result[5] += 0;
      } else {
        result[0] += 0.6926859250153657;
        result[1] += 0.02089735709895513;
        result[2] += 0.0645359557467732;
        result[3] += 0.07498463429625077;
        result[4] += 0.07498463429625077;
        result[5] += 0.07191149354640443;
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
        result[0] += 0.021505376344086023;
        result[1] += 0.043010752688172046;
        result[2] += 0.06451612903225806;
        result[3] += 0.06451612903225806;
        result[4] += 0.23655913978494625;
        result[5] += 0.5698924731182796;
      } else {
        result[0] += 0.011764705882352941;
        result[1] += 0.0058823529411764705;
        result[2] += 0.3411764705882353;
        result[3] += 0.4;
        result[4] += 0.023529411764705882;
        result[5] += 0.21764705882352942;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
        result[0] += 0.3125;
        result[1] += 0;
        result[2] += 0.625;
        result[3] += 0.020833333333333332;
        result[4] += 0;
        result[5] += 0.041666666666666664;
      } else {
        result[0] += 0.0056433408577878106;
        result[1] += 0;
        result[2] += 0.9119638826185101;
        result[3] += 0.07900677200902935;
        result[4] += 0;
        result[5] += 0.003386004514672686;
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        result[0] += 0.022641509433962263;
        result[1] += 0.04905660377358491;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8905660377358491;
        result[5] += 0.03773584905660377;
      } else {
        result[0] += 0.07638402242466713;
        result[1] += 0.012613875262789068;
        result[2] += 0.004204625087596356;
        result[3] += 0.18500350385423966;
        result[4] += 0.06867554309740714;
        result[5] += 0.6531184302733006;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0.9347368421052632;
        result[2] += 0;
        result[3] += 0.002105263157894737;
        result[4] += 0.061052631578947365;
        result[5] += 0.002105263157894737;
      } else {
        result[0] += 0.6303225806451613;
        result[1] += 0.032903225806451615;
        result[2] += 0.09096774193548388;
        result[3] += 0.07419354838709677;
        result[4] += 0.12516129032258064;
        result[5] += 0.04645161290322581;
      }
    }
  } else {
    if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
      if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)108) ) ) {
        result[0] += 0.13013698630136986;
        result[1] += 0;
        result[2] += 0.3287671232876712;
        result[3] += 0.1917808219178082;
        result[4] += 0.0273972602739726;
        result[5] += 0.3219178082191781;
      } else {
        result[0] += 0;
        result[1] += 0.95;
        result[2] += 0.05;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.4936708860759494;
        result[3] += 0.3291139240506329;
        result[4] += 0;
        result[5] += 0.17721518987341772;
      } else {
        result[0] += 0.0023148148148148147;
        result[1] += 0;
        result[2] += 0.9247685185185185;
        result[3] += 0.07175925925925926;
        result[4] += 0;
        result[5] += 0.0011574074074074073;
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
        result[0] += 0.16262975778546715;
        result[1] += 0.024221453287197235;
        result[2] += 0.013840830449826992;
        result[3] += 0;
        result[4] += 0.7508650519031143;
        result[5] += 0.04844290657439447;
      } else {
        result[0] += 0;
        result[1] += 0.010771992818671455;
        result[2] += 0.01436265709156194;
        result[3] += 0.15080789946140036;
        result[4] += 0.05655296229802514;
        result[5] += 0.7675044883303411;
      }
    } else {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)53.5) ) ) {
        result[0] += 0.006756756756756757;
        result[1] += 0.9301801801801802;
        result[2] += 0.0022522522522522522;
        result[3] += 0.02702702702702703;
        result[4] += 0.033783783783783786;
        result[5] += 0;
      } else {
        result[0] += 0.6261930010604455;
        result[1] += 0.03393425238600213;
        result[2] += 0.06733828207847298;
        result[3] += 0.0821845174973489;
        result[4] += 0.11293743372216332;
        result[5] += 0.07741251325556735;
      }
    }
  } else {
    if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
      if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)70.5) ) ) {
        result[0] += 0;
        result[1] += 0.44;
        result[2] += 0;
        result[3] += 0.12;
        result[4] += 0.44;
        result[5] += 0;
      } else {
        result[0] += 0.11578947368421053;
        result[1] += 0;
        result[2] += 0.21052631578947367;
        result[3] += 0.12631578947368421;
        result[4] += 0.010526315789473684;
        result[5] += 0.5368421052631579;
      }
    } else {
      if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
        result[0] += 0.0070921985815602835;
        result[1] += 0;
        result[2] += 0.6347517730496454;
        result[3] += 0.28368794326241137;
        result[4] += 0;
        result[5] += 0.07446808510638298;
      } else {
        result[0] += 0.013024602026049206;
        result[1] += 0;
        result[2] += 0.930535455861071;
        result[3] += 0.04920405209840811;
        result[4] += 0;
        result[5] += 0.007235890014471781;
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.0037735849056603774;
        result[1] += 0.04905660377358491;
        result[2] += 0.01509433962264151;
        result[3] += 0.01509433962264151;
        result[4] += 0.9018867924528302;
        result[5] += 0.01509433962264151;
      } else {
        result[0] += 0.021739130434782608;
        result[1] += 0.014492753623188406;
        result[2] += 0.007246376811594203;
        result[3] += 0.15458937198067632;
        result[4] += 0.0499194847020934;
        result[5] += 0.7520128824476651;
      }
    } else {
      if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        result[0] += 0.5837451949478308;
        result[1] += 0.03844041735310269;
        result[2] += 0.054914881933003847;
        result[3] += 0.09884678747940692;
        result[4] += 0.12959912136188906;
        result[5] += 0.09445359692476661;
      } else {
        result[0] += 0.009070294784580499;
        result[1] += 0.9909297052154195;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.25333333333333335;
        result[3] += 0.44;
        result[4] += 0;
        result[5] += 0.30666666666666664;
      } else {
        result[0] += 0.16666666666666666;
        result[1] += 0;
        result[2] += 0.8095238095238095;
        result[3] += 0;
        result[4] += 0.023809523809523808;
        result[5] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        result[0] += 0.03785488958990537;
        result[1] += 0;
        result[2] += 0.77602523659306;
        result[3] += 0.16719242902208203;
        result[4] += 0;
        result[5] += 0.018927444794952685;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9630818619582665;
        result[3] += 0.03691813804173355;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)88.5) ) ) {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
        result[0] += 0.012738853503184714;
        result[1] += 0.03821656050955414;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8598726114649682;
        result[5] += 0.08917197452229299;
      } else {
        result[0] += 0.07088846880907372;
        result[1] += 0.001890359168241966;
        result[2] += 0;
        result[3] += 0.07939508506616257;
        result[4] += 0.07088846880907372;
        result[5] += 0.776937618147448;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.9043824701195219;
        result[2] += 0.0099601593625498;
        result[3] += 0;
        result[4] += 0.08565737051792828;
        result[5] += 0;
      } else {
        result[0] += 0.5663764961915125;
        result[1] += 0.023939064200217627;
        result[2] += 0.08378672470076169;
        result[3] += 0.1425462459194777;
        result[4] += 0.07889009793253536;
        result[5] += 0.1044613710554951;
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)90.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.08333333333333333;
        result[3] += 0.041666666666666664;
        result[4] += 0.125;
        result[5] += 0.75;
      } else {
        result[0] += 0.042735042735042736;
        result[1] += 0.11965811965811966;
        result[2] += 0.23931623931623933;
        result[3] += 0.37606837606837606;
        result[4] += 0;
        result[5] += 0.2222222222222222;
      }
    } else {
      if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        result[0] += 0.04519774011299435;
        result[1] += 0;
        result[2] += 0.7824858757062146;
        result[3] += 0.15254237288135594;
        result[4] += 0;
        result[5] += 0.01977401129943503;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.973109243697479;
        result[3] += 0.02689075630252101;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
        result[0] += 0.12624584717607973;
        result[1] += 0.006644518272425249;
        result[2] += 0;
        result[3] += 0.019933554817275746;
        result[4] += 0.7375415282392026;
        result[5] += 0.10963455149501661;
      } else {
        result[0] += 0.0016090104585679806;
        result[1] += 0.0056315366049879325;
        result[2] += 0.008045052292839904;
        result[3] += 0.16090104585679807;
        result[4] += 0.06918744971842317;
        result[5] += 0.7546259050683829;
      }
    } else {
      if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6202247191011236;
        result[1] += 0.058426966292134834;
        result[2] += 0.044382022471910115;
        result[3] += 0.08876404494382023;
        result[4] += 0.12134831460674157;
        result[5] += 0.06685393258426967;
      } else {
        result[0] += 0.006711409395973154;
        result[1] += 0.9932885906040269;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
      if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.2391304347826087;
        result[3] += 0.5760869565217391;
        result[4] += 0;
        result[5] += 0.18478260869565216;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7635135135135135;
        result[3] += 0.19594594594594594;
        result[4] += 0;
        result[5] += 0.04054054054054054;
      }
    } else {
      if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        result[0] += 0.1;
        result[1] += 0;
        result[2] += 0.6;
        result[3] += 0.2833333333333333;
        result[4] += 0;
        result[5] += 0.016666666666666666;
      } else {
        result[0] += 0.011920529801324504;
        result[1] += 0;
        result[2] += 0.9430463576158941;
        result[3] += 0.04370860927152318;
        result[4] += 0;
        result[5] += 0.0013245033112582781;
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
    

    FILE* file = fopen("./codegen_small/dataset_146/split_0/test_data.csv", "r");
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
