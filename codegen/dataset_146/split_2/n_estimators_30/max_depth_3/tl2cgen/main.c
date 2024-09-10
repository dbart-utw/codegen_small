
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
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.0784313725490196;
        result[2] += 0.00392156862745098;
        result[3] += 0;
        result[4] += 0.9058823529411765;
        result[5] += 0.011764705882352941;
      } else {
        result[0] += 0.03918495297805643;
        result[1] += 0.018808777429467086;
        result[2] += 0.013322884012539185;
        result[3] += 0.12225705329153605;
        result[4] += 0.06191222570532915;
        result[5] += 0.7445141065830722;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        result[0] += 0;
        result[1] += 0.8178506375227687;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.18214936247723132;
        result[5] += 0;
      } else {
        result[0] += 0.7304116865869854;
        result[1] += 0.014608233731739707;
        result[2] += 0.028552456839309428;
        result[3] += 0.07901726427622842;
        result[4] += 0.06839309428950863;
        result[5] += 0.07901726427622842;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)71.5) ) ) {
        result[0] += 0;
        result[1] += 0.015625;
        result[2] += 0.03125;
        result[3] += 0.03125;
        result[4] += 0.234375;
        result[5] += 0.6875;
      } else {
        result[0] += 0.007905138339920948;
        result[1] += 0.023715415019762844;
        result[2] += 0.31620553359683795;
        result[3] += 0.4505928853754941;
        result[4] += 0.007905138339920948;
        result[5] += 0.19367588932806323;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
        result[0] += 0.08;
        result[1] += 0;
        result[2] += 0.5;
        result[3] += 0.2;
        result[4] += 0.04;
        result[5] += 0.18;
      } else {
        result[0] += 0.018327605956471937;
        result[1] += 0;
        result[2] += 0.9117983963344788;
        result[3] += 0.05956471935853379;
        result[4] += 0;
        result[5] += 0.010309278350515464;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)65) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)93.5) ) ) {
        result[0] += 0.0037735849056603774;
        result[1] += 0.011320754716981131;
        result[2] += 0;
        result[3] += 0.01509433962264151;
        result[4] += 0.8830188679245283;
        result[5] += 0.08679245283018867;
      } else {
        result[0] += 0;
        result[1] += 0.7586206896551724;
        result[2] += 0;
        result[3] += 0.05172413793103448;
        result[4] += 0.1206896551724138;
        result[5] += 0.06896551724137931;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
        result[0] += 0.8446601941747572;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.019417475728155338;
        result[4] += 0.11650485436893204;
        result[5] += 0.019417475728155338;
      } else {
        result[0] += 0.010502625656414103;
        result[1] += 0.00450112528132033;
        result[2] += 0.016504126031507877;
        result[3] += 0.18304576144036008;
        result[4] += 0.042010502625656414;
        result[5] += 0.7434358589647412;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)103.5) ) ) {
        result[0] += 0.7046384720327421;
        result[1] += 0.038881309686221006;
        result[2] += 0.0286493860845839;
        result[3] += 0.045020463847203276;
        result[4] += 0.1296043656207367;
        result[5] += 0.05320600272851296;
      } else {
        result[0] += 0.005;
        result[1] += 0.98;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.015;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
        result[0] += 0.09387755102040818;
        result[1] += 0.04489795918367347;
        result[2] += 0.41224489795918373;
        result[3] += 0.28979591836734697;
        result[4] += 0.028571428571428574;
        result[5] += 0.13061224489795922;
      } else {
        result[0] += 0.005230125523012553;
        result[1] += 0;
        result[2] += 0.9184100418410043;
        result[3] += 0.06799163179916319;
        result[4] += 0;
        result[5] += 0.008368200836820085;
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
        result[0] += 0.46153846153846156;
        result[1] += 0.04838709677419355;
        result[2] += 0.0024813895781637717;
        result[3] += 0.01240694789081886;
        result[4] += 0.4057071960297767;
        result[5] += 0.06947890818858561;
      } else {
        result[0] += 0.0650887573964497;
        result[1] += 0.016675632060247445;
        result[2] += 0.03442711135018827;
        result[3] += 0.19419042495965572;
        result[4] += 0.10166756320602474;
        result[5] += 0.5879505110274341;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        result[0] += 0.0024154589371980675;
        result[1] += 0.9855072463768116;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.012077294685990338;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
        result[0] += 0.968944099378882;
        result[1] += 0;
        result[2] += 0.013975155279503106;
        result[3] += 0.003105590062111801;
        result[4] += 0.012422360248447204;
        result[5] += 0.0015527950310559005;
      } else {
        result[0] += 0.21818181818181817;
        result[1] += 0;
        result[2] += 0.5454545454545454;
        result[3] += 0.2;
        result[4] += 0;
        result[5] += 0.03636363636363636;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
        result[0] += 0.6862745098039216;
        result[1] += 0;
        result[2] += 0.19607843137254902;
        result[3] += 0.11764705882352941;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.008040201005025126;
        result[1] += 0;
        result[2] += 0.8834170854271357;
        result[3] += 0.09748743718592964;
        result[4] += 0;
        result[5] += 0.011055276381909548;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        result[0] += 0.004694835680751174;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9624413145539906;
        result[5] += 0.03286384976525822;
      } else {
        result[0] += 0.03343465045592705;
        result[1] += 0.0022796352583586625;
        result[2] += 0.00303951367781155;
        result[3] += 0.128419452887538;
        result[4] += 0.06306990881458967;
        result[5] += 0.7697568389057751;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.974304068522484;
        result[2] += 0.0021413276231263384;
        result[3] += 0.004282655246252677;
        result[4] += 0.019271948608137045;
        result[5] += 0;
      } else {
        result[0] += 0.641395908543923;
        result[1] += 0.057160048134777375;
        result[2] += 0.028279181708784597;
        result[3] += 0.07160048134777376;
        result[4] += 0.13176895306859207;
        result[5] += 0.06979542719614922;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.09174311926605505;
        result[3] += 0.7155963302752294;
        result[4] += 0;
        result[5] += 0.1926605504587156;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5147058823529411;
        result[3] += 0.3088235294117647;
        result[4] += 0;
        result[5] += 0.17647058823529413;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        result[0] += 0.05053191489361702;
        result[1] += 0;
        result[2] += 0.7632978723404256;
        result[3] += 0.13829787234042554;
        result[4] += 0.0026595744680851063;
        result[5] += 0.04521276595744681;
      } else {
        result[0] += 0.0016260162601626016;
        result[1] += 0;
        result[2] += 0.9642276422764228;
        result[3] += 0.030894308943089432;
        result[4] += 0;
        result[5] += 0.0032520325203252032;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)71.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.044715447154471545;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8739837398373984;
        result[5] += 0.08130081300813008;
      } else {
        result[0] += 0.017587939698492462;
        result[1] += 0.0041876046901172526;
        result[2] += 0.010887772194304857;
        result[3] += 0.11474036850921274;
        result[4] += 0.07202680067001675;
        result[5] += 0.7805695142378559;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        result[0] += 0.0017605633802816902;
        result[1] += 0.7940140845070423;
        result[2] += 0;
        result[3] += 0.0017605633802816902;
        result[4] += 0.1936619718309859;
        result[5] += 0.008802816901408451;
      } else {
        result[0] += 0.6445201590005678;
        result[1] += 0.016467915956842702;
        result[2] += 0.049403747870528106;
        result[3] += 0.1084611016467916;
        result[4] += 0.07382169222032936;
        result[5] += 0.10732538330494037;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)85.5) ) ) {
        result[0] += 0.01769911504424779;
        result[1] += 0;
        result[2] += 0.44690265486725667;
        result[3] += 0.44690265486725667;
        result[4] += 0;
        result[5] += 0.08849557522123895;
      } else {
        result[0] += 0.05747126436781609;
        result[1] += 0;
        result[2] += 0.8850574712643678;
        result[3] += 0.05747126436781609;
        result[4] += 0;
        result[5] += 0;
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
        result[0] += 0.006738544474393531;
        result[1] += 0;
        result[2] += 0.931266846361186;
        result[3] += 0.04986522911051213;
        result[4] += 0;
        result[5] += 0.012129380053908356;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.03383458646616541;
        result[2] += 0;
        result[3] += 0.0037593984962406013;
        result[4] += 0.8796992481203008;
        result[5] += 0.08270676691729323;
      } else {
        result[0] += 0.03528468323977546;
        result[1] += 0.0016038492381716118;
        result[2] += 0;
        result[3] += 0.15557337610264635;
        result[4] += 0.053728949478749;
        result[5] += 0.7538091419406576;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
        result[0] += 0.0074487895716946;
        result[1] += 0.8175046554934823;
        result[2] += 0.0037243947858473;
        result[3] += 0;
        result[4] += 0.16945996275605213;
        result[5] += 0.00186219739292365;
      } else {
        result[0] += 0.6636308439587129;
        result[1] += 0.026108075288403157;
        result[2] += 0.06982392228293868;
        result[3] += 0.09107468123861566;
        result[4] += 0.07650273224043716;
        result[5] += 0.07285974499089254;
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0.06451612903225806;
        result[2] += 0.07526881720430108;
        result[3] += 0.22580645161290322;
        result[4] += 0.043010752688172046;
        result[5] += 0.5913978494623656;
      } else {
        result[0] += 0.13095238095238096;
        result[1] += 0;
        result[2] += 0.5714285714285714;
        result[3] += 0.21428571428571427;
        result[4] += 0.023809523809523808;
        result[5] += 0.05952380952380952;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        result[0] += 0.06389776357827476;
        result[1] += 0.003194888178913738;
        result[2] += 0.7156549520766773;
        result[3] += 0.18849840255591055;
        result[4] += 0;
        result[5] += 0.02875399361022364;
      } else {
        result[0] += 0.003129890453834116;
        result[1] += 0;
        result[2] += 0.9530516431924883;
        result[3] += 0.03912363067292645;
        result[4] += 0;
        result[5] += 0.004694835680751174;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)115.5) ) ) {
        result[0] += 0.004048582995951417;
        result[1] += 0.012145748987854251;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9595141700404858;
        result[5] += 0.024291497975708502;
      } else {
        result[0] += 0;
        result[1] += 0.875;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.125;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.044213263979193757;
        result[4] += 0.044213263979193757;
        result[5] += 0.9115734720416124;
      } else {
        result[0] += 0.11311475409836066;
        result[1] += 0.008196721311475412;
        result[2] += 0.006557377049180329;
        result[3] += 0.3672131147540984;
        result[4] += 0.05737704918032788;
        result[5] += 0.4475409836065574;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        result[0] += 0.0037950664136622396;
        result[1] += 0.7817836812144213;
        result[2] += 0.007590132827324479;
        result[3] += 0.005692599620493359;
        result[4] += 0.1821631878557875;
        result[5] += 0.018975332068311198;
      } else {
        result[0] += 0.7770750988142292;
        result[1] += 0.03320158102766799;
        result[2] += 0.030039525691699605;
        result[3] += 0.052964426877470355;
        result[4] += 0.07509881422924901;
        result[5] += 0.03162055335968379;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0.007547169811320755;
        result[1] += 0.04150943396226415;
        result[2] += 0.2641509433962264;
        result[3] += 0.39245283018867927;
        result[4] += 0.022641509433962263;
        result[5] += 0.27169811320754716;
      } else {
        result[0] += 0.050220264317180616;
        result[1] += 0;
        result[2] += 0.8669603524229075;
        result[3] += 0.06607929515418502;
        result[4] += 0.003524229074889868;
        result[5] += 0.013215859030837005;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)107.5) ) ) {
        result[0] += 0.011278195488721804;
        result[1] += 0.0037593984962406013;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9022556390977443;
        result[5] += 0.08270676691729323;
      } else {
        result[0] += 0;
        result[1] += 0.8888888888888888;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.1111111111111111;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
        result[0] += 0.022964509394572025;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.061586638830897704;
        result[4] += 0.0511482254697286;
        result[5] += 0.8643006263048016;
      } else {
        result[0] += 0.12959381044487428;
        result[1] += 0.013539651837524178;
        result[2] += 0.017408123791102514;
        result[3] += 0.3984526112185687;
        result[4] += 0.05029013539651837;
        result[5] += 0.390715667311412;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)59.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)91) ) ) {
        result[0] += 0;
        result[1] += 0.47887323943661975;
        result[2] += 0.028169014084507046;
        result[3] += 0.04225352112676057;
        result[4] += 0.4225352112676057;
        result[5] += 0.028169014084507046;
      } else {
        result[0] += 0;
        result[1] += 0.9976076555023924;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.0023923444976076554;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)97.5) ) ) {
        result[0] += 0.48217821782178216;
        result[1] += 0.039603960396039604;
        result[2] += 0.14455445544554454;
        result[3] += 0.13960396039603962;
        result[4] += 0.11782178217821782;
        result[5] += 0.07623762376237624;
      } else {
        result[0] += 0.35827520608750796;
        result[1] += 0.0025364616360177557;
        result[2] += 0.5592897907419151;
        result[3] += 0.057070386810399505;
        result[4] += 0.006975269499048828;
        result[5] += 0.015852885225110972;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.11782477341389729;
        result[1] += 0.05740181268882175;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.676737160120846;
        result[5] += 0.14803625377643503;
      } else {
        result[0] += 0;
        result[1] += 0.010978956999085087;
        result[2] += 0.007319304666056725;
        result[3] += 0.16193961573650503;
        result[4] += 0.04574565416285453;
        result[5] += 0.7740164684354987;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)104.5) ) ) {
        result[0] += 0.5747246984792869;
        result[1] += 0.048243314105925535;
        result[2] += 0.05663345568956476;
        result[3] += 0.10225485055060304;
        result[4] += 0.13686418458311483;
        result[5] += 0.08127949659150498;
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
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
        result[0] += 0;
        result[1] += 0.02272727272727273;
        result[2] += 0.27272727272727276;
        result[3] += 0.27272727272727276;
        result[4] += 0.04545454545454546;
        result[5] += 0.3863636363636364;
      } else {
        result[0] += 0.016666666666666666;
        result[1] += 0;
        result[2] += 0.7666666666666667;
        result[3] += 0.2;
        result[4] += 0;
        result[5] += 0.016666666666666666;
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
        result[0] += 0.05084745762711865;
        result[1] += 0;
        result[2] += 0.6101694915254238;
        result[3] += 0.288135593220339;
        result[4] += 0;
        result[5] += 0.05084745762711865;
      } else {
        result[0] += 0.0036319612590799033;
        result[1] += 0;
        result[2] += 0.9309927360774818;
        result[3] += 0.05690072639225181;
        result[4] += 0;
        result[5] += 0.00847457627118644;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
        result[0] += 0.012145748987854253;
        result[1] += 0.06072874493927126;
        result[2] += 0;
        result[3] += 0.004048582995951418;
        result[4] += 0.8906882591093118;
        result[5] += 0.03238866396761134;
      } else {
        result[0] += 0.02951096121416526;
        result[1] += 0.012647554806070826;
        result[2] += 0.0042158516020236085;
        result[3] += 0.12900505902192244;
        result[4] += 0.07925801011804384;
        result[5] += 0.7453625632377741;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)63.5) ) ) {
        result[0] += 0.010362694300518135;
        result[1] += 0.7979274611398963;
        result[2] += 0;
        result[3] += 0.025906735751295335;
        result[4] += 0.15025906735751296;
        result[5] += 0.015544041450777202;
      } else {
        result[0] += 0.7380170715692712;
        result[1] += 0.036769533814839134;
        result[2] += 0.011818778726198293;
        result[3] += 0.05909389363099146;
        result[4] += 0.0623768877216021;
        result[5] += 0.09192383453709783;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.08227848101265822;
        result[3] += 0.689873417721519;
        result[4] += 0;
        result[5] += 0.22784810126582278;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5480769230769231;
        result[3] += 0.2692307692307692;
        result[4] += 0;
        result[5] += 0.18269230769230768;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)86.5) ) ) {
        result[0] += 0.05673758865248227;
        result[1] += 0;
        result[2] += 0.7777777777777778;
        result[3] += 0.14893617021276595;
        result[4] += 0;
        result[5] += 0.016548463356973995;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9587458745874587;
        result[3] += 0.03135313531353135;
        result[4] += 0;
        result[5] += 0.009900990099009901;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.0379746835443038;
        result[2] += 0.016877637130801686;
        result[3] += 0;
        result[4] += 0.9324894514767933;
        result[5] += 0.012658227848101266;
      } else {
        result[0] += 0.031013615733736764;
        result[1] += 0.01739788199697428;
        result[2] += 0.009077155824508321;
        result[3] += 0.1573373676248109;
        result[4] += 0.049167927382753406;
        result[5] += 0.7360060514372163;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.950354609929078;
        result[2] += 0.009456264775413711;
        result[3] += 0.01182033096926714;
        result[4] += 0.028368794326241134;
        result[5] += 0;
      } else {
        result[0] += 0.607854297097325;
        result[1] += 0.033010813887307915;
        result[2] += 0.048377916903813316;
        result[3] += 0.08195788275469551;
        result[4] += 0.11724530449630051;
        result[5] += 0.11155378486055777;
      }
    }
  } else {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)103) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
        result[0] += 0.02272727272727273;
        result[1] += 0;
        result[2] += 0.33333333333333337;
        result[3] += 0.5530303030303031;
        result[4] += 0;
        result[5] += 0.09090909090909093;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.8241758241758242;
        result[3] += 0.1318681318681319;
        result[4] += 0;
        result[5] += 0.043956043956043966;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
        result[0] += 0.01092896174863388;
        result[1] += 0;
        result[2] += 0.7431693989071039;
        result[3] += 0.20765027322404372;
        result[4] += 0;
        result[5] += 0.03825136612021858;
      } else {
        result[0] += 0.010279001468428781;
        result[1] += 0;
        result[2] += 0.9662261380323054;
        result[3] += 0.020558002936857563;
        result[4] += 0;
        result[5] += 0.002936857562408223;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)65) ) ) {
        result[0] += 0;
        result[1] += 0.08620689655172414;
        result[2] += 0;
        result[3] += 0.006896551724137931;
        result[4] += 0.7793103448275862;
        result[5] += 0.12758620689655173;
      } else {
        result[0] += 0.043089430894308944;
        result[1] += 0.0032520325203252032;
        result[2] += 0.013008130081300813;
        result[3] += 0.13170731707317074;
        result[4] += 0.04796747967479675;
        result[5] += 0.7609756097560976;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6697645600991325;
        result[1] += 0.05390334572490706;
        result[2] += 0.03469640644361834;
        result[3] += 0.06815365551425032;
        result[4] += 0.11152416356877323;
        result[5] += 0.061957868649318466;
      } else {
        result[0] += 0.007712082262210797;
        result[1] += 0.9922879177377892;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)89.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.05263157894736842;
        result[3] += 0.02631578947368421;
        result[4] += 0.05263157894736842;
        result[5] += 0.868421052631579;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.38436482084690554;
        result[3] += 0.46905537459283386;
        result[4] += 0.006514657980456026;
        result[5] += 0.14006514657980457;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
        result[0] += 0.21311475409836064;
        result[1] += 0.09836065573770492;
        result[2] += 0.19672131147540983;
        result[3] += 0.03278688524590164;
        result[4] += 0.2459016393442623;
        result[5] += 0.21311475409836064;
      } else {
        result[0] += 0.004459308807134895;
        result[1] += 0;
        result[2] += 0.931995540691193;
        result[3] += 0.05574136008918618;
        result[4] += 0;
        result[5] += 0.007803790412486066;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
        result[0] += 0.23229461756373937;
        result[1] += 0.0113314447592068;
        result[2] += 0.0084985835694051;
        result[3] += 0;
        result[4] += 0.7110481586402266;
        result[5] += 0.036827195467422094;
      } else {
        result[0] += 0.005319148936170213;
        result[1] += 0.0062056737588652485;
        result[2] += 0;
        result[3] += 0.0726950354609929;
        result[4] += 0.10549645390070922;
        result[5] += 0.8102836879432624;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.9068825910931174;
        result[2] += 0;
        result[3] += 0.010121457489878543;
        result[4] += 0.08299595141700405;
        result[5] += 0;
      } else {
        result[0] += 0.5806270996640539;
        result[1] += 0.03023516237402016;
        result[2] += 0.07726763717805153;
        result[3] += 0.15789473684210528;
        result[4] += 0.0503919372900336;
        result[5] += 0.10358342665173574;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.047619047619047616;
        result[3] += 0.6190476190476191;
        result[4] += 0.023809523809523808;
        result[5] += 0.30952380952380953;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5375000000000001;
        result[3] += 0.07500000000000001;
        result[4] += 0.037500000000000006;
        result[5] += 0.35000000000000003;
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
        result[0] += 0.006535947712418299;
        result[1] += 0.019607843137254898;
        result[2] += 0.7385620915032679;
        result[3] += 0.19934640522875813;
        result[4] += 0;
        result[5] += 0.035947712418300644;
      } else {
        result[0] += 0.0031397174254317113;
        result[1] += 0;
        result[2] += 0.9607535321821036;
        result[3] += 0.03296703296703297;
        result[4] += 0;
        result[5] += 0.0031397174254317113;
      }
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)97.5) ) ) {
        result[0] += 0.010714285714285714;
        result[1] += 0.0035714285714285713;
        result[2] += 0;
        result[3] += 0.0035714285714285713;
        result[4] += 0.9142857142857143;
        result[5] += 0.06785714285714285;
      } else {
        result[0] += 0;
        result[1] += 0.7575757575757576;
        result[2] += 0;
        result[3] += 0.06060606060606061;
        result[4] += 0.12121212121212122;
        result[5] += 0.06060606060606061;
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)67.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.002554278416347382;
        result[3] += 0.04597701149425287;
        result[4] += 0.04597701149425287;
        result[5] += 0.9054916985951469;
      } else {
        result[0] += 0.11952861952861953;
        result[1] += 0.0016835016835016834;
        result[2] += 0.04713804713804714;
        result[3] += 0.3114478114478115;
        result[4] += 0.1026936026936027;
        result[5] += 0.4175084175084175;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
        result[0] += 0.005964214711729622;
        result[1] += 0.856858846918489;
        result[2] += 0;
        result[3] += 0.0019880715705765406;
        result[4] += 0.1312127236580517;
        result[5] += 0.003976143141153081;
      } else {
        result[0] += 0.7747005988023953;
        result[1] += 0.044161676646706595;
        result[2] += 0.014970059880239523;
        result[3] += 0.04940119760479043;
        result[4] += 0.07634730538922158;
        result[5] += 0.04041916167664671;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)93) ) ) {
        result[0] += 0.029535864978902954;
        result[1] += 0.05907172995780591;
        result[2] += 0.2489451476793249;
        result[3] += 0.21518987341772153;
        result[4] += 0.04219409282700422;
        result[5] += 0.4050632911392405;
      } else {
        result[0] += 0.026415094339622643;
        result[1] += 0;
        result[2] += 0.8490566037735849;
        result[3] += 0.09811320754716982;
        result[4] += 0;
        result[5] += 0.026415094339622643;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        result[0] += 0.003937007874015748;
        result[1] += 0.011811023622047244;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9212598425196851;
        result[5] += 0.06299212598425197;
      } else {
        result[0] += 0.030564263322884012;
        result[1] += 0.004702194357366771;
        result[2] += 0;
        result[3] += 0.14655172413793102;
        result[4] += 0.07601880877742946;
        result[5] += 0.7421630094043887;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9780701754385965;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.021929824561403508;
        result[5] += 0;
      } else {
        result[0] += 0.6233624454148472;
        result[1] += 0.03711790393013101;
        result[2] += 0.0638646288209607;
        result[3] += 0.09443231441048035;
        result[4] += 0.11408296943231441;
        result[5] += 0.06713973799126638;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0.05263157894736842;
        result[2] += 0.05263157894736842;
        result[3] += 0.6578947368421053;
        result[4] += 0;
        result[5] += 0.23684210526315788;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6538461538461539;
        result[3] += 0.19230769230769232;
        result[4] += 0;
        result[5] += 0.15384615384615385;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
        result[0] += 0;
        result[1] += 0.05747126436781609;
        result[2] += 0.40229885057471265;
        result[3] += 0.09195402298850575;
        result[4] += 0.08045977011494253;
        result[5] += 0.367816091954023;
      } else {
        result[0] += 0.005834305717619604;
        result[1] += 0;
        result[2] += 0.9241540256709453;
        result[3] += 0.06417736289381565;
        result[4] += 0;
        result[5] += 0.005834305717619604;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        result[0] += 0.0037313432835820895;
        result[1] += 0.026119402985074626;
        result[2] += 0;
        result[3] += 0.018656716417910446;
        result[4] += 0.9067164179104478;
        result[5] += 0.04477611940298507;
      } else {
        result[0] += 0.04026294165981923;
        result[1] += 0.007395234182415777;
        result[2] += 0;
        result[3] += 0.12489728841413311;
        result[4] += 0.0780608052588332;
        result[5] += 0.7493837304847987;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)56.5) ) ) {
        result[0] += 0;
        result[1] += 0.9132420091324203;
        result[2] += 0;
        result[3] += 0.004566210045662101;
        result[4] += 0.07762557077625572;
        result[5] += 0.004566210045662101;
      } else {
        result[0] += 0.6824324324324325;
        result[1] += 0.036855036855036855;
        result[2] += 0.05221130221130221;
        result[3] += 0.07493857493857493;
        result[4] += 0.0945945945945946;
        result[5] += 0.05896805896805897;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)88.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.05454545454545454;
        result[3] += 0.03636363636363636;
        result[4] += 0.16363636363636364;
        result[5] += 0.7454545454545455;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.12790697674418605;
        result[3] += 0.563953488372093;
        result[4] += 0.03488372093023256;
        result[5] += 0.27325581395348836;
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5436241610738255;
        result[3] += 0.3959731543624161;
        result[4] += 0.020134228187919462;
        result[5] += 0.040268456375838924;
      } else {
        result[0] += 0.012235817575083427;
        result[1] += 0.002224694104560623;
        result[2] += 0.9065628476084538;
        result[3] += 0.05672969966629588;
        result[4] += 0.013348164627363738;
        result[5] += 0.008898776418242492;
      }
    }
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)44) ) ) {
        result[0] += 0;
        result[1] += 0.7222222222222222;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.027777777777777776;
        result[5] += 0.25;
      } else {
        result[0] += 0.004310344827586207;
        result[1] += 0.017241379310344827;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9353448275862069;
        result[5] += 0.04310344827586207;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)86.5) ) ) {
        result[0] += 0.01664932362122789;
        result[1] += 0;
        result[2] += 0.005202913631633715;
        result[3] += 0.062434963579604576;
        result[4] += 0.061394380853277836;
        result[5] += 0.854318418314256;
      } else {
        result[0] += 0.08900523560209424;
        result[1] += 0.002617801047120419;
        result[2] += 0.049738219895287955;
        result[3] += 0.44502617801047123;
        result[4] += 0.03664921465968586;
        result[5] += 0.3769633507853403;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)104.5) ) ) {
        result[0] += 0.6557680444170265;
        result[1] += 0.05367057371992597;
        result[2] += 0.025293028994447873;
        result[3] += 0.05983960518198643;
        result[4] += 0.13448488587291796;
        result[5] += 0.07094386181369525;
      } else {
        result[0] += 0.002487562189054726;
        result[1] += 0.9776119402985073;
        result[2] += 0.002487562189054726;
        result[3] += 0.004975124378109452;
        result[4] += 0.012437810945273629;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)78.5) ) ) {
        result[0] += 0.1925133689839572;
        result[1] += 0.058823529411764705;
        result[2] += 0.1711229946524064;
        result[3] += 0.3315508021390374;
        result[4] += 0.06417112299465241;
        result[5] += 0.18181818181818182;
      } else {
        result[0] += 0.01691542288557214;
        result[1] += 0.0009950248756218905;
        result[2] += 0.8507462686567164;
        result[3] += 0.11044776119402985;
        result[4] += 0;
        result[5] += 0.020895522388059702;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        result[0] += 0.013333333333333334;
        result[1] += 0.056;
        result[2] += 0;
        result[3] += 0.0026666666666666666;
        result[4] += 0.8586666666666667;
        result[5] += 0.06933333333333333;
      } else {
        result[0] += 0.0968944099378882;
        result[1] += 0.011180124223602485;
        result[2] += 0.011180124223602485;
        result[3] += 0.1906832298136646;
        result[4] += 0.07018633540372671;
        result[5] += 0.6198757763975156;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6792179580014482;
        result[1] += 0.0666183924692252;
        result[2] += 0.06879073135409124;
        result[3] += 0.044170890658942794;
        result[4] += 0.09630702389572773;
        result[5] += 0.04489500362056481;
      } else {
        result[0] += 0.007936507936507936;
        result[1] += 0.9682539682539683;
        result[2] += 0;
        result[3] += 0.010582010582010581;
        result[4] += 0.013227513227513227;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
        result[0] += 0;
        result[1] += 0.008849557522123894;
        result[2] += 0.2743362831858407;
        result[3] += 0.40707964601769914;
        result[4] += 0.035398230088495575;
        result[5] += 0.2743362831858407;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6607142857142857;
        result[3] += 0.33035714285714285;
        result[4] += 0;
        result[5] += 0.008928571428571428;
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)65.5) ) ) {
        result[0] += 0.36363636363636365;
        result[1] += 0.36363636363636365;
        result[2] += 0.2727272727272727;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.015366430260047281;
        result[1] += 0.001182033096926714;
        result[2] += 0.933806146572104;
        result[3] += 0.04491725768321513;
        result[4] += 0;
        result[5] += 0.004728132387706856;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.029900332225913623;
        result[2] += 0;
        result[3] += 0.023255813953488372;
        result[4] += 0.9069767441860465;
        result[5] += 0.03986710963455149;
      } else {
        result[0] += 0.08060654429369513;
        result[1] += 0.0023942537909018356;
        result[2] += 0.0007980845969672786;
        result[3] += 0.09098164405426976;
        result[4] += 0.0893854748603352;
        result[5] += 0.7358339984038308;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0.975669099756691;
        result[2] += 0.004866180048661801;
        result[3] += 0;
        result[4] += 0.019464720194647202;
        result[5] += 0;
      } else {
        result[0] += 0.5839041095890412;
        result[1] += 0.03196347031963471;
        result[2] += 0.07477168949771691;
        result[3] += 0.12671232876712332;
        result[4] += 0.08561643835616439;
        result[5] += 0.09703196347031966;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        result[0] += 0.009174311926605505;
        result[1] += 0.027522935779816515;
        result[2] += 0.11009174311926606;
        result[3] += 0.43119266055045874;
        result[4] += 0.11926605504587157;
        result[5] += 0.30275229357798167;
      } else {
        result[0] += 0.06666666666666667;
        result[1] += 0;
        result[2] += 0.8;
        result[3] += 0.1;
        result[4] += 0;
        result[5] += 0.03333333333333333;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
        result[0] += 0.052173913043478265;
        result[1] += 0.052173913043478265;
        result[2] += 0.6434782608695653;
        result[3] += 0.07826086956521741;
        result[4] += 0.026086956521739132;
        result[5] += 0.14782608695652177;
      } else {
        result[0] += 0.0023391812865497076;
        result[1] += 0;
        result[2] += 0.9368421052631579;
        result[3] += 0.05964912280701754;
        result[4] += 0;
        result[5] += 0.0011695906432748538;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)84.5) ) ) {
        result[0] += 0.01509433962264151;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8641509433962264;
        result[5] += 0.12075471698113208;
      } else {
        result[0] += 0.43283582089552236;
        result[1] += 0.08955223880597014;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.4626865671641791;
        result[5] += 0.014925373134328358;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)90.5) ) ) {
        result[0] += 0.0048543689320388345;
        result[1] += 0.000970873786407767;
        result[2] += 0.000970873786407767;
        result[3] += 0.06019417475728155;
        result[4] += 0.05242718446601942;
        result[5] += 0.8805825242718447;
      } else {
        result[0] += 0.009216589861751152;
        result[1] += 0;
        result[2] += 0.004608294930875576;
        result[3] += 0.5529953917050692;
        result[4] += 0.03225806451612903;
        result[5] += 0.4009216589861751;
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.007142857142857143;
        result[1] += 0.8035714285714286;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.18571428571428572;
        result[5] += 0.0035714285714285713;
      } else {
        result[0] += 0.7222222222222222;
        result[1] += 0.023148148148148147;
        result[2] += 0.047619047619047616;
        result[3] += 0.07473544973544974;
        result[4] += 0.07275132275132275;
        result[5] += 0.05952380952380952;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0.004424778761061947;
        result[1] += 0.0752212389380531;
        result[2] += 0.26548672566371684;
        result[3] += 0.3407079646017699;
        result[4] += 0.030973451327433628;
        result[5] += 0.2831858407079646;
      } else {
        result[0] += 0.03582718651211802;
        result[1] += 0;
        result[2] += 0.8883034773445733;
        result[3] += 0.06954689146469968;
        result[4] += 0;
        result[5] += 0.006322444678609062;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
        result[0] += 0.11650485436893204;
        result[1] += 0.07766990291262135;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7669902912621359;
        result[5] += 0.038834951456310676;
      } else {
        result[0] += 0.0016433853738701725;
        result[1] += 0.01314708299096138;
        result[2] += 0.027115858668857847;
        result[3] += 0.1552999178307313;
        result[4] += 0.05834018077239113;
        result[5] += 0.7444535743631882;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)50) ) ) {
        result[0] += 0;
        result[1] += 0.9862385321100917;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.013761467889908258;
        result[5] += 0;
      } else {
        result[0] += 0.6129741616272677;
        result[1] += 0.02034084661902144;
        result[2] += 0.06432105552501374;
        result[3] += 0.08466190214403518;
        result[4] += 0.11929631665750412;
        result[5] += 0.09840571742715779;
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0.07407407407407407;
        result[2] += 0.05555555555555555;
        result[3] += 0.35185185185185186;
        result[4] += 0.09259259259259259;
        result[5] += 0.42592592592592593;
      } else {
        result[0] += 0.027777777777777776;
        result[1] += 0.006944444444444444;
        result[2] += 0.5972222222222222;
        result[3] += 0.24305555555555555;
        result[4] += 0.027777777777777776;
        result[5] += 0.09722222222222222;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.06666666666666667;
        result[3] += 0.7333333333333333;
        result[4] += 0;
        result[5] += 0.2;
      } else {
        result[0] += 0.001201923076923077;
        result[1] += 0;
        result[2] += 0.9242788461538461;
        result[3] += 0.06490384615384616;
        result[4] += 0;
        result[5] += 0.009615384615384616;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.010526315789473684;
        result[2] += 0.0035087719298245615;
        result[3] += 0.028070175438596492;
        result[4] += 0.8807017543859649;
        result[5] += 0.07719298245614035;
      } else {
        result[0] += 0.03486529318541997;
        result[1] += 0.000792393026941363;
        result[2] += 0.002377179080824089;
        result[3] += 0.1576862123613312;
        result[4] += 0.058637083993660855;
        result[5] += 0.7456418383518225;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)53.5) ) ) {
        result[0] += 0.004524886877828056;
        result[1] += 0.9502262443438915;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.04524886877828055;
        result[5] += 0;
      } else {
        result[0] += 0.6197654941373535;
        result[1] += 0.0379676158570631;
        result[2] += 0.0692350642099386;
        result[3] += 0.09324399776661084;
        result[4] += 0.10831937465103296;
        result[5] += 0.07146845337800113;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)85.5) ) ) {
        result[0] += 0;
        result[1] += 0.04761904761904762;
        result[2] += 0.3154761904761905;
        result[3] += 0.41071428571428575;
        result[4] += 0.011904761904761906;
        result[5] += 0.2142857142857143;
      } else {
        result[0] += 0.21505376344086022;
        result[1] += 0.021505376344086023;
        result[2] += 0.6881720430107527;
        result[3] += 0.021505376344086023;
        result[4] += 0.010752688172043012;
        result[5] += 0.043010752688172046;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5652173913043478;
        result[3] += 0.43478260869565216;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9488188976377953;
        result[3] += 0.045931758530183726;
        result[4] += 0;
        result[5] += 0.005249343832020997;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        result[0] += 0.2196261682242991;
        result[1] += 0.04672897196261683;
        result[2] += 0;
        result[3] += 0.01635514018691589;
        result[4] += 0.6285046728971964;
        result[5] += 0.08878504672897197;
      } else {
        result[0] += 0.0052585451358457495;
        result[1] += 0.0026292725679228747;
        result[2] += 0.0035056967572304996;
        result[3] += 0.07800175284837861;
        result[4] += 0.07537248028045573;
        result[5] += 0.8352322524101665;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)50) ) ) {
        result[0] += 0;
        result[1] += 0.9880952380952381;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.011904761904761904;
        result[5] += 0;
      } else {
        result[0] += 0.5653179190751445;
        result[1] += 0.04393063583815029;
        result[2] += 0.04797687861271676;
        result[3] += 0.1601156069364162;
        result[4] += 0.08728323699421965;
        result[5] += 0.0953757225433526;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.15625;
        result[3] += 0.6458333333333334;
        result[4] += 0;
        result[5] += 0.19791666666666666;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.78;
        result[3] += 0.14;
        result[4] += 0;
        result[5] += 0.08;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
        result[0] += 0.04693140794223827;
        result[1] += 0;
        result[2] += 0.8050541516245487;
        result[3] += 0.1444043321299639;
        result[4] += 0;
        result[5] += 0.0036101083032490976;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9692982456140351;
        result[3] += 0.027777777777777776;
        result[4] += 0;
        result[5] += 0.0029239766081871343;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.04310344827586207;
        result[2] += 0.004310344827586207;
        result[3] += 0.004310344827586207;
        result[4] += 0.9439655172413793;
        result[5] += 0.004310344827586207;
      } else {
        result[0] += 0.03167062549485352;
        result[1] += 0.014251781472684086;
        result[2] += 0.0055423594615993665;
        result[3] += 0.14014251781472684;
        result[4] += 0.056215360253365;
        result[5] += 0.7521773555027712;
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)104.5) ) ) {
        result[0] += 0.5683491062039958;
        result[1] += 0.052576235541535225;
        result[2] += 0.06992639327024185;
        result[3] += 0.09516298633017876;
        result[4] += 0.13038906414300735;
        result[5] += 0.083596214511041;
      } else {
        result[0] += 0.011461318051575931;
        result[1] += 0.9742120343839542;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.011461318051575931;
        result[5] += 0.0028653295128939827;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61) ) ) {
        result[0] += 0;
        result[1] += 0.96;
        result[2] += 0.04;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.06779661016949153;
        result[1] += 0;
        result[2] += 0.2937853107344633;
        result[3] += 0.2768361581920904;
        result[4] += 0.01694915254237288;
        result[5] += 0.3446327683615819;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.48484848484848486;
        result[3] += 0.18181818181818182;
        result[4] += 0;
        result[5] += 0.3333333333333333;
      } else {
        result[0] += 0.005917159763313609;
        result[1] += 0;
        result[2] += 0.927810650887574;
        result[3] += 0.06035502958579882;
        result[4] += 0;
        result[5] += 0.005917159763313609;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.1675;
        result[1] += 0.0625;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.6875;
        result[5] += 0.0825;
      } else {
        result[0] += 0.007334963325183374;
        result[1] += 0.0032599837000814994;
        result[2] += 0.03178484107579462;
        result[3] += 0.1687041564792176;
        result[4] += 0.059494702526487364;
        result[5] += 0.7294213528932355;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.0019157088122605363;
        result[1] += 0.8582375478927203;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.13793103448275862;
        result[5] += 0.0019157088122605363;
      } else {
        result[0] += 0.7560262965668372;
        result[1] += 0.020452885317750188;
        result[2] += 0.030679327976625276;
        result[3] += 0.06866325785244705;
        result[4] += 0.06720233747260776;
        result[5] += 0.05697589481373266;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)90.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.17525773195876287;
        result[3] += 0.13402061855670103;
        result[4] += 0.05154639175257732;
        result[5] += 0.6391752577319587;
      } else {
        result[0] += 0;
        result[1] += 0.012195121951219513;
        result[2] += 0.22560975609756098;
        result[3] += 0.5548780487804879;
        result[4] += 0.024390243902439025;
        result[5] += 0.18292682926829268;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
        result[0] += 0;
        result[1] += 0.4411764705882353;
        result[2] += 0.14705882352941177;
        result[3] += 0.11764705882352941;
        result[4] += 0.058823529411764705;
        result[5] += 0.23529411764705882;
      } else {
        result[0] += 0.03751233958538993;
        result[1] += 0;
        result[2] += 0.8667324777887463;
        result[3] += 0.0769990128331688;
        result[4] += 0.0029615004935834156;
        result[5] += 0.01579466929911155;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.06808510638297872;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9191489361702128;
        result[5] += 0.01276595744680851;
      } else {
        result[0] += 0.031409168081494056;
        result[1] += 0.011035653650254669;
        result[2] += 0.005942275042444821;
        result[3] += 0.15959252971137522;
        result[4] += 0.05432937181663837;
        result[5] += 0.7376910016977929;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)103.5) ) ) {
        result[0] += 0.5781495033978045;
        result[1] += 0.04913748039728175;
        result[2] += 0.07213800313643493;
        result[3] += 0.09409304756926294;
        result[4] += 0.10507056978567694;
        result[5] += 0.10141139571353894;
      } else {
        result[0] += 0.019851116625310174;
        result[1] += 0.9578163771712159;
        result[2] += 0;
        result[3] += 0.004962779156327543;
        result[4] += 0.004962779156327543;
        result[5] += 0.01240694789081886;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
        result[0] += 0;
        result[1] += 0.06060606060606061;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.5757575757575758;
        result[5] += 0.36363636363636365;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.125;
        result[3] += 0.5;
        result[4] += 0;
        result[5] += 0.375;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)99) ) ) {
        result[0] += 0.011363636363636364;
        result[1] += 0.03409090909090909;
        result[2] += 0.26136363636363635;
        result[3] += 0.5227272727272727;
        result[4] += 0.011363636363636364;
        result[5] += 0.1590909090909091;
      } else {
        result[0] += 0.019230769230769232;
        result[1] += 0.005341880341880342;
        result[2] += 0.8985042735042735;
        result[3] += 0.07371794871794872;
        result[4] += 0;
        result[5] += 0.003205128205128205;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
        result[0] += 0.002976190476190476;
        result[1] += 0.0744047619047619;
        result[2] += 0.005952380952380952;
        result[3] += 0.03273809523809524;
        result[4] += 0.7916666666666666;
        result[5] += 0.09226190476190477;
      } else {
        result[0] += 0.04020100502512563;
        result[1] += 0;
        result[2] += 0.020938023450586266;
        result[3] += 0.1541038525963149;
        result[4] += 0.05527638190954774;
        result[5] += 0.7294807370184254;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)58.5) ) ) {
        result[0] += 0.002183406113537118;
        result[1] += 0.888646288209607;
        result[2] += 0;
        result[3] += 0.008733624454148471;
        result[4] += 0.09606986899563319;
        result[5] += 0.004366812227074236;
      } else {
        result[0] += 0.6374201045903545;
        result[1] += 0.04764671702498547;
        result[2] += 0.04009296920395119;
        result[3] += 0.07321324811156305;
        result[4] += 0.09413131900058105;
        result[5] += 0.10749564206856478;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)101.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.3545454545454546;
        result[3] += 0.5090909090909091;
        result[4] += 0;
        result[5] += 0.13636363636363638;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.78;
        result[3] += 0.14;
        result[4] += 0;
        result[5] += 0.08;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.005257623554153523;
        result[1] += 0;
        result[2] += 0.9242902208201893;
        result[3] += 0.06729758149316509;
        result[4] += 0;
        result[5] += 0.0031545741324921135;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        result[0] += 0.2328767123287671;
        result[1] += 0.02054794520547945;
        result[2] += 0;
        result[3] += 0.01598173515981735;
        result[4] += 0.636986301369863;
        result[5] += 0.09360730593607305;
      } else {
        result[0] += 0.0022813688212927757;
        result[1] += 0.0038022813688212928;
        result[2] += 0.00532319391634981;
        result[3] += 0.18859315589353612;
        result[4] += 0.06539923954372624;
        result[5] += 0.7346007604562738;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)58.5) ) ) {
        result[0] += 0.0019267822736030828;
        result[1] += 0.9267822736030829;
        result[2] += 0;
        result[3] += 0.0019267822736030828;
        result[4] += 0.06936416184971098;
        result[5] += 0;
      } else {
        result[0] += 0.7318941504178273;
        result[1] += 0.04944289693593315;
        result[2] += 0.036211699164345405;
        result[3] += 0.04596100278551532;
        result[4] += 0.0967966573816156;
        result[5] += 0.03969359331476323;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.25196850393700787;
        result[3] += 0.5354330708661418;
        result[4] += 0;
        result[5] += 0.2125984251968504;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7272727272727273;
        result[3] += 0.1919191919191919;
        result[4] += 0.010101010101010102;
        result[5] += 0.0707070707070707;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
        result[0] += 0.29032258064516137;
        result[1] += 0;
        result[2] += 0.5483870967741936;
        result[3] += 0.12903225806451615;
        result[4] += 0;
        result[5] += 0.03225806451612904;
      } else {
        result[0] += 0.003484320557491289;
        result[1] += 0;
        result[2] += 0.9198606271777003;
        result[3] += 0.06736353077816493;
        result[4] += 0;
        result[5] += 0.009291521486643438;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        result[0] += 0.0071174377224199285;
        result[1] += 0.028469750889679714;
        result[2] += 0.014234875444839857;
        result[3] += 0.0035587188612099642;
        result[4] += 0.9252669039145908;
        result[5] += 0.021352313167259787;
      } else {
        result[0] += 0.07849550286181521;
        result[1] += 0.0024529844644317253;
        result[2] += 0;
        result[3] += 0.0874897792313982;
        result[4] += 0.08503679476696648;
        result[5] += 0.7465249386753884;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)56.5) ) ) {
        result[0] += 0;
        result[1] += 0.9783132530120482;
        result[2] += 0;
        result[3] += 0.0024096385542168677;
        result[4] += 0.01927710843373494;
        result[5] += 0;
      } else {
        result[0] += 0.5727019498607242;
        result[1] += 0.03788300835654596;
        result[2] += 0.08133704735376045;
        result[3] += 0.14930362116991644;
        result[4] += 0.07075208913649025;
        result[5] += 0.08802228412256267;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)87.5) ) ) {
        result[0] += 0;
        result[1] += 0.07142857142857142;
        result[2] += 0.047619047619047616;
        result[3] += 0.07142857142857142;
        result[4] += 0.047619047619047616;
        result[5] += 0.7619047619047619;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.27941176470588236;
        result[3] += 0.4411764705882353;
        result[4] += 0;
        result[5] += 0.27941176470588236;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
        result[0] += 0.1111111111111111;
        result[1] += 0.10185185185185185;
        result[2] += 0.5092592592592593;
        result[3] += 0.25;
        result[4] += 0;
        result[5] += 0.027777777777777776;
      } else {
        result[0] += 0.0022371364653243847;
        result[1] += 0;
        result[2] += 0.9261744966442953;
        result[3] += 0.05480984340044743;
        result[4] += 0;
        result[5] += 0.016778523489932886;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        result[0] += 0.006920415224913495;
        result[1] += 0.08304498269896193;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8408304498269896;
        result[5] += 0.06920415224913495;
      } else {
        result[0] += 0.03481012658227848;
        result[1] += 0.007120253164556962;
        result[2] += 0.003955696202531646;
        result[3] += 0.15822784810126583;
        result[4] += 0.030063291139240507;
        result[5] += 0.7658227848101266;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)55.5) ) ) {
        result[0] += 0;
        result[1] += 0.9311111111111111;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.06888888888888889;
        result[5] += 0;
      } else {
        result[0] += 0.6272674078408426;
        result[1] += 0.018139262726740785;
        result[2] += 0.060854300760678756;
        result[3] += 0.08835576360444705;
        result[4] += 0.1088355763604447;
        result[5] += 0.0965476887068461;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)94.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
        result[0] += 0.15;
        result[1] += 0.1;
        result[2] += 0.08333333333333333;
        result[3] += 0.08333333333333333;
        result[4] += 0.06666666666666667;
        result[5] += 0.5166666666666667;
      } else {
        result[0] += 0.04225352112676056;
        result[1] += 0;
        result[2] += 0.39436619718309857;
        result[3] += 0.39436619718309857;
        result[4] += 0;
        result[5] += 0.16901408450704225;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)101) ) ) {
        result[0] += 0.028225806451612902;
        result[1] += 0;
        result[2] += 0.7379032258064516;
        result[3] += 0.21370967741935484;
        result[4] += 0;
        result[5] += 0.020161290322580645;
      } else {
        result[0] += 0.00816326530612245;
        result[1] += 0;
        result[2] += 0.9496598639455782;
        result[3] += 0.04081632653061224;
        result[4] += 0;
        result[5] += 0.0013605442176870747;
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 30;
  result[1] /= 30;
  result[2] /= 30;
  result[3] /= 30;
  result[4] /= 30;
  result[5] /= 30;
  
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
    

    FILE* file = fopen("./codegen/dataset_146/split_2/test_data.csv", "r");
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
