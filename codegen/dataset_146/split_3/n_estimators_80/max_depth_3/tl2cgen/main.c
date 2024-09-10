
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
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        result[0] += 0.21717171717171718;
        result[1] += 0;
        result[2] += 0.015151515151515152;
        result[3] += 0;
        result[4] += 0.6742424242424242;
        result[5] += 0.09343434343434344;
      } else {
        result[0] += 0.0037174721189591076;
        result[1] += 0.008921933085501859;
        result[2] += 0.007434944237918215;
        result[3] += 0.2;
        result[4] += 0.04535315985130112;
        result[5] += 0.7345724907063197;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        result[0] += 0;
        result[1] += 0.8934280639431617;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.10657193605683836;
        result[5] += 0;
      } else {
        result[0] += 0.711681296421337;
        result[1] += 0.016880486158001355;
        result[2] += 0.06549628629304526;
        result[3] += 0.05604321404456449;
        result[4] += 0.08710330857528699;
        result[5] += 0.06279540850776504;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.3841059602649007;
        result[3] += 0.5364238410596026;
        result[4] += 0;
        result[5] += 0.07947019867549669;
      } else {
        result[0] += 0.014492753623188406;
        result[1] += 0;
        result[2] += 0.8019323671497585;
        result[3] += 0.1497584541062802;
        result[4] += 0;
        result[5] += 0.033816425120772944;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)76) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.014705882352941178;
        result[1] += 0;
        result[2] += 0.9470588235294118;
        result[3] += 0.03529411764705883;
        result[4] += 0;
        result[5] += 0.0029411764705882357;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)71.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        result[0] += 0.004761904761904763;
        result[1] += 0.009523809523809526;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9714285714285715;
        result[5] += 0.014285714285714287;
      } else {
        result[0] += 0.2619047619047619;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.023809523809523808;
        result[4] += 0.36904761904761907;
        result[5] += 0.34523809523809523;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
        result[0] += 0;
        result[1] += 0.0021253985122210413;
        result[2] += 0.0010626992561105207;
        result[3] += 0.05100956429330499;
        result[4] += 0.061636556854410204;
        result[5] += 0.8841657810839533;
      } else {
        result[0] += 0;
        result[1] += 0.009852216748768473;
        result[2] += 0.009852216748768473;
        result[3] += 0.4630541871921182;
        result[4] += 0.07881773399014778;
        result[5] += 0.43842364532019706;
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6425339366515838;
        result[1] += 0.049773755656108594;
        result[2] += 0.03506787330316742;
        result[3] += 0.08766968325791855;
        result[4] += 0.12839366515837103;
        result[5] += 0.05656108597285068;
      } else {
        result[0] += 0.00997506234413965;
        result[1] += 0.9900249376558603;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
        result[0] += 0.03215434083601286;
        result[1] += 0.06109324758842444;
        result[2] += 0.3183279742765273;
        result[3] += 0.3022508038585209;
        result[4] += 0.03215434083601286;
        result[5] += 0.2540192926045016;
      } else {
        result[0] += 0.005506607929515419;
        result[1] += 0;
        result[2] += 0.8711453744493393;
        result[3] += 0.09030837004405286;
        result[4] += 0;
        result[5] += 0.03303964757709251;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.047619047619047616;
        result[4] += 0.8681318681318682;
        result[5] += 0.08424908424908426;
      } else {
        result[0] += 0.03915171288743882;
        result[1] += 0.004893964110929853;
        result[2] += 0.0016313213703099511;
        result[3] += 0.15497553017944535;
        result[4] += 0.05301794453507341;
        result[5] += 0.7463295269168027;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)51.5) ) ) {
        result[0] += 0.0069124423963133645;
        result[1] += 0.9493087557603687;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.04377880184331797;
        result[5] += 0;
      } else {
        result[0] += 0.6354401805869075;
        result[1] += 0.043453724604966146;
        result[2] += 0.06264108352144471;
        result[3] += 0.08634311512415352;
        result[4] += 0.11512415349887134;
        result[5] += 0.05699774266365689;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)87.5) ) ) {
        result[0] += 0;
        result[1] += 0.06060606060606061;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.12121212121212122;
        result[5] += 0.8181818181818182;
      } else {
        result[0] += 0;
        result[1] += 0.02580645161290323;
        result[2] += 0.4322580645161291;
        result[3] += 0.39354838709677425;
        result[4] += 0.02580645161290323;
        result[5] += 0.12258064516129033;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
        result[0] += 0.0379746835443038;
        result[1] += 0.06329113924050633;
        result[2] += 0.4430379746835443;
        result[3] += 0.21518987341772153;
        result[4] += 0.0759493670886076;
        result[5] += 0.16455696202531644;
      } else {
        result[0] += 0.00819672131147541;
        result[1] += 0;
        result[2] += 0.9332552693208431;
        result[3] += 0.05737704918032787;
        result[4] += 0;
        result[5] += 0.00117096018735363;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)92.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
        result[0] += 0.00847457627118644;
        result[1] += 0.06497175141242938;
        result[2] += 0;
        result[3] += 0.03954802259887006;
        result[4] += 0.7966101694915254;
        result[5] += 0.0903954802259887;
      } else {
        result[0] += 0.11205673758865248;
        result[1] += 0.006382978723404255;
        result[2] += 0.0028368794326241137;
        result[3] += 0.11063829787234042;
        result[4] += 0.062411347517730496;
        result[5] += 0.7056737588652482;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        result[0] += 0.0021598272138228943;
        result[1] += 0.9503239740820735;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.047516198704103674;
        result[5] += 0;
      } else {
        result[0] += 0.6247594611930725;
        result[1] += 0.030788967286722257;
        result[2] += 0.0750481077613855;
        result[3] += 0.12892880051314945;
        result[4] += 0.059012187299550996;
        result[5] += 0.0814624759461193;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)87.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.09090909090909091;
        result[3] += 0.12121212121212122;
        result[4] += 0.06060606060606061;
        result[5] += 0.7272727272727273;
      } else {
        result[0] += 0;
        result[1] += 0.06666666666666667;
        result[2] += 0.23333333333333334;
        result[3] += 0.55;
        result[4] += 0.03333333333333333;
        result[5] += 0.11666666666666667;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
        result[0] += 0.2127659574468085;
        result[1] += 0.010638297872340425;
        result[2] += 0.46808510638297873;
        result[3] += 0.20212765957446807;
        result[4] += 0;
        result[5] += 0.10638297872340426;
      } else {
        result[0] += 0.007033997655334115;
        result[1] += 0;
        result[2] += 0.9003516998827668;
        result[3] += 0.08675263774912075;
        result[4] += 0;
        result[5] += 0.005861664712778429;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91) ) ) {
        result[0] += 0.0041666666666666675;
        result[1] += 0.9812500000000001;
        result[2] += 0;
        result[3] += 0.0020833333333333337;
        result[4] += 0.012500000000000002;
        result[5] += 0;
      } else {
        result[0] += 0.25;
        result[1] += 0;
        result[2] += 0.5;
        result[3] += 0.25;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
        result[0] += 0.018328445747800588;
        result[1] += 0.006598240469208211;
        result[2] += 0.010997067448680353;
        result[3] += 0.11950146627565983;
        result[4] += 0.21114369501466276;
        result[5] += 0.6334310850439883;
      } else {
        result[0] += 0.6144578313253012;
        result[1] += 0.04876649454962708;
        result[2] += 0.039586919104991396;
        result[3] += 0.07802639127940333;
        result[4] += 0.12162937464142283;
        result[5] += 0.09753298909925416;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)95) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.02830188679245283;
        result[3] += 0.2830188679245283;
        result[4] += 0.03773584905660377;
        result[5] += 0.6509433962264151;
      } else {
        result[0] += 0.011428571428571429;
        result[1] += 0.05714285714285714;
        result[2] += 0.3942857142857143;
        result[3] += 0.3942857142857143;
        result[4] += 0.005714285714285714;
        result[5] += 0.13714285714285715;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.33333333333333337;
        result[3] += 0.4444444444444445;
        result[4] += 0;
        result[5] += 0.22222222222222224;
      } else {
        result[0] += 0.02991452991452992;
        result[1] += 0.0032051282051282055;
        result[2] += 0.889957264957265;
        result[3] += 0.061965811965811975;
        result[4] += 0.006410256410256411;
        result[5] += 0.00854700854700855;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
        result[0] += 0.13309352517985612;
        result[1] += 0.03237410071942446;
        result[2] += 0;
        result[3] += 0.04316546762589928;
        result[4] += 0.6906474820143885;
        result[5] += 0.10071942446043165;
      } else {
        result[0] += 0.0072231139646869984;
        result[1] += 0.002407704654895666;
        result[2] += 0.0056179775280898875;
        result[3] += 0.15569823434991975;
        result[4] += 0.052969502407704656;
        result[5] += 0.776083467094703;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)58.5) ) ) {
        result[0] += 0.003629764065335753;
        result[1] += 0.8475499092558983;
        result[2] += 0;
        result[3] += 0.009074410163339383;
        result[4] += 0.12885662431941924;
        result[5] += 0.010889292196007259;
      } else {
        result[0] += 0.6227299355594611;
        result[1] += 0.03749267721148214;
        result[2] += 0.05916813122437025;
        result[3] += 0.07791446983011133;
        result[4] += 0.10837727006444055;
        result[5] += 0.09431751611013475;
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)75.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.28571428571428575;
        result[3] += 0.4285714285714286;
        result[4] += 0;
        result[5] += 0.28571428571428575;
      } else {
        result[0] += 0.016172506738544475;
        result[1] += 0;
        result[2] += 0.7762803234501348;
        result[3] += 0.18059299191374664;
        result[4] += 0.0026954177897574125;
        result[5] += 0.02425876010781671;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.896551724137931;
        result[3] += 0.09359605911330049;
        result[4] += 0;
        result[5] += 0.009852216748768473;
      } else {
        result[0] += 0.0025906735751295338;
        result[1] += 0;
        result[2] += 0.9948186528497409;
        result[3] += 0.0025906735751295338;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        result[0] += 0.007490636704119851;
        result[1] += 0;
        result[2] += 0.01872659176029963;
        result[3] += 0;
        result[4] += 0.8876404494382023;
        result[5] += 0.0861423220973783;
      } else {
        result[0] += 0.03553719008264463;
        result[1] += 0.006611570247933884;
        result[2] += 0.001652892561983471;
        result[3] += 0.17272727272727273;
        result[4] += 0.0371900826446281;
        result[5] += 0.7462809917355372;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)50) ) ) {
        result[0] += 0.008639308855291577;
        result[1] += 0.9460043196544277;
        result[2] += 0.008639308855291577;
        result[3] += 0.012958963282937365;
        result[4] += 0.023758099352051837;
        result[5] += 0;
      } else {
        result[0] += 0.6107123136388735;
        result[1] += 0.04141358365543898;
        result[2] += 0.07399226946438431;
        result[3] += 0.08724461623412477;
        result[4] += 0.11595803423522913;
        result[5] += 0.07067918277194919;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0.03278688524590164;
        result[2] += 0.01639344262295082;
        result[3] += 0.08196721311475409;
        result[4] += 0.03278688524590164;
        result[5] += 0.8360655737704918;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.43661971830985913;
        result[3] += 0.323943661971831;
        result[4] += 0;
        result[5] += 0.23943661971830985;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75.5) ) ) {
        result[0] += 0.07692307692307694;
        result[1] += 0.6923076923076924;
        result[2] += 0.03846153846153847;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.19230769230769235;
      } else {
        result[0] += 0.014176663031624863;
        result[1] += 0;
        result[2] += 0.8680479825517994;
        result[3] += 0.0970556161395856;
        result[4] += 0;
        result[5] += 0.020719738276990186;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        result[0] += 0.12461059190031153;
        result[1] += 0;
        result[2] += 0.006230529595015576;
        result[3] += 0;
        result[4] += 0.7570093457943925;
        result[5] += 0.11214953271028037;
      } else {
        result[0] += 0;
        result[1] += 0.006200177147918512;
        result[2] += 0.002657218777679362;
        result[3] += 0.1470327723649247;
        result[4] += 0.03985828166519043;
        result[5] += 0.804251550044287;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)52.5) ) ) {
        result[0] += 0;
        result[1] += 0.9695121951219512;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.03048780487804878;
        result[5] += 0;
      } else {
        result[0] += 0.671941570298235;
        result[1] += 0.04017041996348144;
        result[2] += 0.04077906269020085;
        result[3] += 0.0620815581253804;
        result[4] += 0.11199026171637248;
        result[5] += 0.07303712720632989;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)77) ) ) {
        result[0] += 0;
        result[1] += 0.021505376344086023;
        result[2] += 0.07526881720430108;
        result[3] += 0.3333333333333333;
        result[4] += 0.053763440860215055;
        result[5] += 0.5161290322580645;
      } else {
        result[0] += 0.07296137339055794;
        result[1] += 0.02145922746781116;
        result[2] += 0.5021459227467812;
        result[3] += 0.2532188841201717;
        result[4] += 0.05150214592274678;
        result[5] += 0.09871244635193133;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7239263803680982;
        result[3] += 0.2392638036809816;
        result[4] += 0;
        result[5] += 0.03680981595092025;
      } else {
        result[0] += 0.005319148936170213;
        result[1] += 0;
        result[2] += 0.9348404255319149;
        result[3] += 0.05585106382978723;
        result[4] += 0;
        result[5] += 0.003989361702127659;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.1375;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.76875;
        result[5] += 0.09375;
      } else {
        result[0] += 0.0016611295681063123;
        result[1] += 0.004152823920265781;
        result[2] += 0.0016611295681063123;
        result[3] += 0.15282392026578073;
        result[4] += 0.036544850498338874;
        result[5] += 0.803156146179402;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0.9769585253456221;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.02304147465437788;
        result[5] += 0;
      } else {
        result[0] += 0.6553398058252428;
        result[1] += 0.02912621359223301;
        result[2] += 0.05157766990291262;
        result[3] += 0.08131067961165049;
        result[4] += 0.11650485436893204;
        result[5] += 0.06614077669902912;
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
        result[0] += 0.03759398496240601;
        result[1] += 0.007518796992481203;
        result[2] += 0.09774436090225563;
        result[3] += 0.2556390977443609;
        result[4] += 0.05263157894736842;
        result[5] += 0.5488721804511278;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5555555555555556;
        result[3] += 0.2916666666666667;
        result[4] += 0;
        result[5] += 0.1527777777777778;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        result[0] += 0.05067567567567568;
        result[1] += 0.04054054054054054;
        result[2] += 0.6993243243243243;
        result[3] += 0.16554054054054054;
        result[4] += 0.010135135135135136;
        result[5] += 0.033783783783783786;
      } else {
        result[0] += 0.00927357032457496;
        result[1] += 0;
        result[2] += 0.9459041731066461;
        result[3] += 0.04482225656877898;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
        result[0] += 0.011857707509881422;
        result[1] += 0.007905138339920948;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9209486166007905;
        result[5] += 0.05928853754940711;
      } else {
        result[0] += 0.04775481111903065;
        result[1] += 0.0014255167498218105;
        result[2] += 0.004989308624376337;
        result[3] += 0.1518175338560228;
        result[4] += 0.07840342124019957;
        result[5] += 0.7156094084105489;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)66.5) ) ) {
        result[0] += 0;
        result[1] += 0.819366852886406;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.1750465549348231;
        result[5] += 0.00558659217877095;
      } else {
        result[0] += 0.6838046272493574;
        result[1] += 0.034704370179948596;
        result[2] += 0.06812339331619538;
        result[3] += 0.09061696658097687;
        result[4] += 0.06426735218508998;
        result[5] += 0.058483290488431885;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
        result[0] += 0;
        result[1] += 0.12903225806451615;
        result[2] += 0.16129032258064518;
        result[3] += 0;
        result[4] += 0.16129032258064518;
        result[5] += 0.5483870967741936;
      } else {
        result[0] += 0;
        result[1] += 0.04310344827586207;
        result[2] += 0.3620689655172414;
        result[3] += 0.4224137931034483;
        result[4] += 0;
        result[5] += 0.1724137931034483;
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)95) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.23076923076923078;
        result[3] += 0.6153846153846154;
        result[4] += 0;
        result[5] += 0.15384615384615385;
      } else {
        result[0] += 0.007633587786259542;
        result[1] += 0;
        result[2] += 0.9094874591057798;
        result[3] += 0.07851690294438386;
        result[4] += 0;
        result[5] += 0.004362050163576881;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        result[0] += 0.007220216606498195;
        result[1] += 0.09025270758122744;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8880866425992779;
        result[5] += 0.01444043321299639;
      } else {
        result[0] += 0.03307086614173228;
        result[1] += 0.012598425196850394;
        result[2] += 0.02283464566929134;
        result[3] += 0.131496062992126;
        result[4] += 0.04488188976377953;
        result[5] += 0.7551181102362204;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
        result[0] += 0.0037105751391465678;
        result[1] += 0.8033395176252319;
        result[2] += 0.0018552875695732839;
        result[3] += 0.00927643784786642;
        result[4] += 0.1725417439703154;
        result[5] += 0.00927643784786642;
      } else {
        result[0] += 0.6588957055214724;
        result[1] += 0.01717791411042945;
        result[2] += 0.050920245398773004;
        result[3] += 0.08220858895705521;
        result[4] += 0.09079754601226994;
        result[5] += 0.1;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)92) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.125;
        result[3] += 0.0625;
        result[4] += 0.10416666666666667;
        result[5] += 0.7083333333333334;
      } else {
        result[0] += 0;
        result[1] += 0.024242424242424242;
        result[2] += 0.4484848484848485;
        result[3] += 0.36363636363636365;
        result[4] += 0.024242424242424242;
        result[5] += 0.1393939393939394;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
        result[0] += 0.04081632653061225;
        result[1] += 0.010204081632653062;
        result[2] += 0.653061224489796;
        result[3] += 0.24489795918367352;
        result[4] += 0;
        result[5] += 0.05102040816326532;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9474342928660826;
        result[3] += 0.04380475594493116;
        result[4] += 0;
        result[5] += 0.008760951188986232;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)71.5) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)59.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.008928571428571428;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9330357142857143;
        result[5] += 0.05803571428571429;
      } else {
        result[0] += 0.47435897435897434;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.05128205128205128;
        result[4] += 0.19230769230769232;
        result[5] += 0.28205128205128205;
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)87.5) ) ) {
        result[0] += 0;
        result[1] += 0.010067114093959731;
        result[2] += 0.0022371364653243847;
        result[3] += 0.058165548098434;
        result[4] += 0.04586129753914989;
        result[5] += 0.883668903803132;
      } else {
        result[0] += 0.00851063829787234;
        result[1] += 0.00425531914893617;
        result[2] += 0.06808510638297872;
        result[3] += 0.4;
        result[4] += 0.10638297872340426;
        result[5] += 0.4127659574468085;
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)54.5) ) ) {
        result[0] += 0;
        result[1] += 0.9522727272727273;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.04772727272727273;
        result[5] += 0;
      } else {
        result[0] += 0.6439135381114903;
        result[1] += 0.026166097838452786;
        result[2] += 0.04152445961319681;
        result[3] += 0.08020477815699659;
        result[4] += 0.11035267349260523;
        result[5] += 0.09783845278725825;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
        result[0] += 0.0032679738562091504;
        result[1] += 0.026143790849673203;
        result[2] += 0.40522875816993464;
        result[3] += 0.3562091503267974;
        result[4] += 0.042483660130718956;
        result[5] += 0.16666666666666666;
      } else {
        result[0] += 0.02805836139169473;
        result[1] += 0.0033670033670033673;
        result[2] += 0.8787878787878789;
        result[3] += 0.07744107744107745;
        result[4] += 0.007856341189674525;
        result[5] += 0.004489337822671157;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)77) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
        result[0] += 0;
        result[1] += 0.004098360655737705;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9877049180327869;
        result[5] += 0.00819672131147541;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7631578947368421;
        result[5] += 0.23684210526315788;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)56.5) ) ) {
        result[0] += 0.9007633587786259;
        result[1] += 0.015267175572519083;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.05343511450381679;
        result[5] += 0.030534351145038167;
      } else {
        result[0] += 0.009453072248480757;
        result[1] += 0.008102633355840648;
        result[2] += 0.02160702228224173;
        result[3] += 0.1836596893990547;
        result[4] += 0.062120189061444966;
        result[5] += 0.7150573936529372;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)103.5) ) ) {
        result[0] += 0.7331821617535903;
        result[1] += 0.06500377928949358;
        result[2] += 0.034013605442176874;
        result[3] += 0.02947845804988662;
        result[4] += 0.10808767951625095;
        result[5] += 0.030234315948601664;
      } else {
        result[0] += 0.018276762402088774;
        result[1] += 0.97911227154047;
        result[2] += 0.0026109660574412533;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)80.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.4844444444444445;
        result[3] += 0.2977777777777778;
        result[4] += 0;
        result[5] += 0.2177777777777778;
      } else {
        result[0] += 0.03796203796203796;
        result[1] += 0.011988011988011988;
        result[2] += 0.8661338661338661;
        result[3] += 0.06493506493506493;
        result[4] += 0.004995004995004995;
        result[5] += 0.013986013986013986;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        result[0] += 0.24288840262582057;
        result[1] += 0.01312910284463895;
        result[2] += 0;
        result[3] += 0.006564551422319475;
        result[4] += 0.6411378555798687;
        result[5] += 0.0962800875273523;
      } else {
        result[0] += 0.0009718172983479105;
        result[1] += 0.007774538386783284;
        result[2] += 0.001943634596695821;
        result[3] += 0.10495626822157435;
        result[4] += 0.09037900874635568;
        result[5] += 0.793974732750243;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        result[0] += 0;
        result[1] += 0.9142857142857144;
        result[2] += 0.005714285714285715;
        result[3] += 0.001904761904761905;
        result[4] += 0.0780952380952381;
        result[5] += 0;
      } else {
        result[0] += 0.627906976744186;
        result[1] += 0.03220035778175313;
        result[2] += 0.05366726296958855;
        result[3] += 0.14788312462731068;
        result[4] += 0.046511627906976744;
        result[5] += 0.09183064997018485;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.1440677966101695;
        result[3] += 0.4745762711864407;
        result[4] += 0.01694915254237288;
        result[5] += 0.3644067796610169;
      } else {
        result[0] += 0;
        result[1] += 0.06097560975609756;
        result[2] += 0.5975609756097561;
        result[3] += 0.2926829268292683;
        result[4] += 0;
        result[5] += 0.04878048780487805;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)91.5) ) ) {
        result[0] += 0.03076923076923077;
        result[1] += 0.07692307692307693;
        result[2] += 0.46153846153846156;
        result[3] += 0.16923076923076924;
        result[4] += 0.015384615384615385;
        result[5] += 0.24615384615384617;
      } else {
        result[0] += 0.009163802978235968;
        result[1] += 0;
        result[2] += 0.9026345933562429;
        result[3] += 0.07674684994272624;
        result[4] += 0.004581901489117984;
        result[5] += 0.006872852233676976;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)92.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        result[0] += 0.01529051987767584;
        result[1] += 0.05198776758409786;
        result[2] += 0;
        result[3] += 0.01834862385321101;
        result[4] += 0.8807339449541285;
        result[5] += 0.03363914373088685;
      } else {
        result[0] += 0.10321100917431193;
        result[1] += 0.0007645259938837921;
        result[2] += 0;
        result[3] += 0.09174311926605505;
        result[4] += 0.08792048929663608;
        result[5] += 0.7163608562691132;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)58.5) ) ) {
        result[0] += 0;
        result[1] += 0.9575757575757575;
        result[2] += 0.00404040404040404;
        result[3] += 0.00808080808080808;
        result[4] += 0.030303030303030304;
        result[5] += 0;
      } else {
        result[0] += 0.6741889985895627;
        result[1] += 0.045839210155148094;
        result[2] += 0.04301833568406206;
        result[3] += 0.0923836389280677;
        result[4] += 0.08110014104372355;
        result[5] += 0.06346967559943582;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.013888888888888888;
        result[3] += 0.3819444444444444;
        result[4] += 0.020833333333333332;
        result[5] += 0.5833333333333334;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6170212765957447;
        result[3] += 0.2978723404255319;
        result[4] += 0;
        result[5] += 0.0851063829787234;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
        result[0] += 0.043478260869565216;
        result[1] += 0.059782608695652176;
        result[2] += 0.45108695652173914;
        result[3] += 0.30978260869565216;
        result[4] += 0.03260869565217391;
        result[5] += 0.10326086956521739;
      } else {
        result[0] += 0.012181616832779624;
        result[1] += 0.007751937984496124;
        result[2] += 0.9014396456256921;
        result[3] += 0.06755260243632337;
        result[4] += 0;
        result[5] += 0.01107419712070875;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
        result[0] += 0.22448979591836735;
        result[1] += 0.024943310657596373;
        result[2] += 0.0045351473922902496;
        result[3] += 0.013605442176870748;
        result[4] += 0.655328798185941;
        result[5] += 0.07709750566893424;
      } else {
        result[0] += 0.01415929203539823;
        result[1] += 0.006194690265486726;
        result[2] += 0.011504424778761062;
        result[3] += 0.09823008849557523;
        result[4] += 0.09734513274336283;
        result[5] += 0.772566371681416;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        result[0] += 0.009029345372460496;
        result[1] += 0.9683972911963883;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.022573363431151242;
        result[5] += 0;
      } else {
        result[0] += 0.6824512534818942;
        result[1] += 0.034818941504178275;
        result[2] += 0.04247910863509749;
        result[3] += 0.08913649025069638;
        result[4] += 0.06685236768802229;
        result[5] += 0.08426183844011143;
      }
    }
  } else {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)90) ) ) {
        result[0] += 0;
        result[1] += 0.05737704918032787;
        result[2] += 0;
        result[3] += 0.2786885245901639;
        result[4] += 0.12295081967213115;
        result[5] += 0.5409836065573771;
      } else {
        result[0] += 0.013513513513513514;
        result[1] += 0.0045045045045045045;
        result[2] += 0.40540540540540543;
        result[3] += 0.5045045045045045;
        result[4] += 0.009009009009009009;
        result[5] += 0.06306306306306306;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
        result[0] += 0.6;
        result[1] += 0.09333333333333334;
        result[2] += 0.16;
        result[3] += 0.04;
        result[4] += 0;
        result[5] += 0.10666666666666667;
      } else {
        result[0] += 0.008359456635318705;
        result[1] += 0.00522466039707419;
        result[2] += 0.8975966562173459;
        result[3] += 0.06374085684430512;
        result[4] += 0;
        result[5] += 0.025078369905956112;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)66.5) ) ) {
        result[0] += 0.014285714285714285;
        result[1] += 0.009523809523809525;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9571428571428572;
        result[5] += 0.01904761904761905;
      } else {
        result[0] += 0.32967032967032966;
        result[1] += 0.03296703296703297;
        result[2] += 0;
        result[3] += 0.06593406593406594;
        result[4] += 0.4175824175824176;
        result[5] += 0.15384615384615385;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)83.5) ) ) {
        result[0] += 0.002;
        result[1] += 0.002;
        result[2] += 0.003;
        result[3] += 0.066;
        result[4] += 0.066;
        result[5] += 0.861;
      } else {
        result[0] += 0.011406844106463879;
        result[1] += 0.030418250950570342;
        result[2] += 0.0076045627376425855;
        result[3] += 0.4828897338403042;
        result[4] += 0.019011406844106463;
        result[5] += 0.44866920152091255;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.00539568345323741;
        result[1] += 0.8309352517985612;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.1618705035971223;
        result[5] += 0.0017985611510791368;
      } else {
        result[0] += 0.7601374570446736;
        result[1] += 0.024742268041237116;
        result[2] += 0.015120274914089349;
        result[3] += 0.06185567010309279;
        result[4] += 0.07285223367697596;
        result[5] += 0.06529209621993129;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.3346613545816733;
        result[3] += 0.42231075697211157;
        result[4] += 0;
        result[5] += 0.24302788844621515;
      } else {
        result[0] += 0.021;
        result[1] += 0;
        result[2] += 0.877;
        result[3] += 0.089;
        result[4] += 0.002;
        result[5] += 0.011;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
        result[0] += 0.0036900369003690036;
        result[1] += 0.05166051660516605;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8523985239852399;
        result[5] += 0.09225092250922509;
      } else {
        result[0] += 0.03855050115651504;
        result[1] += 0.004626060138781804;
        result[2] += 0.018504240555127217;
        result[3] += 0.16808018504240554;
        result[4] += 0.07170393215111796;
        result[5] += 0.6985350809560524;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6070826306913997;
        result[1] += 0.035975267003934795;
        result[2] += 0.0713884204609331;
        result[3] += 0.08431703204047218;
        result[4] += 0.11579539066891512;
        result[5] += 0.08544125913434514;
      } else {
        result[0] += 0.007444168734491315;
        result[1] += 0.9925558312655087;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.037037037037037035;
        result[4] += 0.14814814814814814;
        result[5] += 0.8148148148148148;
      } else {
        result[0] += 0.02564102564102564;
        result[1] += 0.042735042735042736;
        result[2] += 0.38461538461538464;
        result[3] += 0.3504273504273504;
        result[4] += 0.017094017094017096;
        result[5] += 0.1794871794871795;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        result[0] += 0.05434782608695653;
        result[1] += 0.09782608695652176;
        result[2] += 0.4347826086956522;
        result[3] += 0.2173913043478261;
        result[4] += 0;
        result[5] += 0.19565217391304351;
      } else {
        result[0] += 0.005952380952380952;
        result[1] += 0;
        result[2] += 0.9345238095238095;
        result[3] += 0.05952380952380952;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0.003937007874015749;
        result[1] += 0.02362204724409449;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9527559055118111;
        result[5] += 0.019685039370078743;
      } else {
        result[0] += 0.014925373134328358;
        result[1] += 0.07462686567164178;
        result[2] += 0;
        result[3] += 0.05970149253731343;
        result[4] += 0.44776119402985076;
        result[5] += 0.40298507462686567;
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)85.5) ) ) {
        result[0] += 0.012658227848101266;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.043037974683544304;
        result[4] += 0.03164556962025317;
        result[5] += 0.9126582278481012;
      } else {
        result[0] += 0.08082706766917294;
        result[1] += 0.015037593984962407;
        result[2] += 0.005639097744360903;
        result[3] += 0.3402255639097745;
        result[4] += 0.06203007518796993;
        result[5] += 0.4962406015037594;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        result[0] += 0.0018115942028985507;
        result[1] += 0.8804347826086957;
        result[2] += 0;
        result[3] += 0.0018115942028985507;
        result[4] += 0.1068840579710145;
        result[5] += 0.009057971014492754;
      } else {
        result[0] += 0.751840942562592;
        result[1] += 0.03240058910162003;
        result[2] += 0.030927835051546393;
        result[3] += 0.0508100147275405;
        result[4] += 0.09499263622974963;
        result[5] += 0.0390279823269514;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
        result[0] += 0.09192200557103064;
        result[1] += 0.022284122562674095;
        result[2] += 0.40947075208913647;
        result[3] += 0.2841225626740947;
        result[4] += 0.019498607242339833;
        result[5] += 0.17270194986072424;
      } else {
        result[0] += 0.00437636761487965;
        result[1] += 0.00437636761487965;
        result[2] += 0.8829321663019694;
        result[3] += 0.09409190371991247;
        result[4] += 0;
        result[5] += 0.014223194748358862;
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)87.5) ) ) {
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
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        result[0] += 0.49760191846522783;
        result[1] += 0.07074340527577938;
        result[2] += 0.0035971223021582736;
        result[3] += 0;
        result[4] += 0.3908872901678657;
        result[5] += 0.03717026378896882;
      } else {
        result[0] += 0.0672358591248666;
        result[1] += 0.026680896478121666;
        result[2] += 0.0368196371398079;
        result[3] += 0.20490928495197439;
        result[4] += 0.08911419423692636;
        result[5] += 0.575240128068303;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.9829351535836177;
        result[1] += 0;
        result[2] += 0.010238907849829351;
        result[3] += 0.0034129692832764505;
        result[4] += 0.0034129692832764505;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85.5) ) ) {
        result[0] += 0.06824146981627296;
        result[1] += 0;
        result[2] += 0.7007874015748031;
        result[3] += 0.2020997375328084;
        result[4] += 0.0026246719160104987;
        result[5] += 0.026246719160104987;
      } else {
        result[0] += 0.008759124087591242;
        result[1] += 0;
        result[2] += 0.9430656934306569;
        result[3] += 0.043795620437956206;
        result[4] += 0;
        result[5] += 0.004379562043795621;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0.010344827586206896;
        result[1] += 0.04827586206896552;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9103448275862069;
        result[5] += 0.03103448275862069;
      } else {
        result[0] += 0.04153354632587859;
        result[1] += 0.01597444089456869;
        result[2] += 0.0007987220447284345;
        result[3] += 0.14616613418530353;
        result[4] += 0.039936102236421724;
        result[5] += 0.755591054313099;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0.941908713692946;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.058091286307053944;
        result[5] += 0;
      } else {
        result[0] += 0.6219303255282697;
        result[1] += 0.029126213592233014;
        result[2] += 0.05139920045688179;
        result[3] += 0.09080525414049116;
        result[4] += 0.12221587664191892;
        result[5] += 0.08452312964020561;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)82.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.21666666666666667;
        result[3] += 0.6666666666666666;
        result[4] += 0;
        result[5] += 0.11666666666666667;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5764705882352941;
        result[3] += 0.23529411764705882;
        result[4] += 0;
        result[5] += 0.18823529411764706;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
        result[0] += 0.14285714285714288;
        result[1] += 0;
        result[2] += 0.6373626373626374;
        result[3] += 0.1318681318681319;
        result[4] += 0.021978021978021983;
        result[5] += 0.06593406593406595;
      } else {
        result[0] += 0.00736196319018405;
        result[1] += 0;
        result[2] += 0.9312883435582823;
        result[3] += 0.060122699386503074;
        result[4] += 0;
        result[5] += 0.0012269938650306751;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        result[0] += 0.15000000000000002;
        result[1] += 0.014705882352941178;
        result[2] += 0;
        result[3] += 0.0029411764705882357;
        result[4] += 0.7323529411764707;
        result[5] += 0.10000000000000002;
      } else {
        result[0] += 0.003355704697986577;
        result[1] += 0.008389261744966443;
        result[2] += 0.003355704697986577;
        result[3] += 0.14681208053691275;
        result[4] += 0.07130872483221476;
        result[5] += 0.7667785234899329;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)61.5) ) ) {
        result[0] += 0.001890359168241966;
        result[1] += 0.8714555765595463;
        result[2] += 0;
        result[3] += 0.00945179584120983;
        result[4] += 0.10207939508506617;
        result[5] += 0.015122873345935728;
      } else {
        result[0] += 0.6496777973052138;
        result[1] += 0.029291154071470416;
        result[2] += 0.0638547158758055;
        result[3] += 0.08142940831868775;
        result[4] += 0.07147041593438781;
        result[5] += 0.10427650849443468;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)84) ) ) {
        result[0] += 0;
        result[1] += 0.10810810810810811;
        result[2] += 0.21621621621621623;
        result[3] += 0;
        result[4] += 0.16216216216216217;
        result[5] += 0.5135135135135135;
      } else {
        result[0] += 0;
        result[1] += 0.03225806451612903;
        result[2] += 0.1774193548387097;
        result[3] += 0.5483870967741935;
        result[4] += 0.016129032258064516;
        result[5] += 0.22580645161290322;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)87.5) ) ) {
        result[0] += 0.0275;
        result[1] += 0.0175;
        result[2] += 0.735;
        result[3] += 0.1975;
        result[4] += 0;
        result[5] += 0.0225;
      } else {
        result[0] += 0.0035778175313059034;
        result[1] += 0;
        result[2] += 0.9516994633273703;
        result[3] += 0.04114490161001789;
        result[4] += 0;
        result[5] += 0.0035778175313059034;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)71.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.08636363636363636;
        result[2] += 0.00909090909090909;
        result[3] += 0.013636363636363636;
        result[4] += 0.85;
        result[5] += 0.04090909090909091;
      } else {
        result[0] += 0.019861830742659757;
        result[1] += 0.009499136442141624;
        result[2] += 0.012089810017271158;
        result[3] += 0.1303972366148532;
        result[4] += 0.05872193436960276;
        result[5] += 0.7694300518134715;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)104.5) ) ) {
        result[0] += 0.5671717171717172;
        result[1] += 0.03838383838383838;
        result[2] += 0.048484848484848485;
        result[3] += 0.11666666666666667;
        result[4] += 0.1383838383838384;
        result[5] += 0.09090909090909091;
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
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)91.5) ) ) {
        result[0] += 0;
        result[1] += 0.14705882352941177;
        result[2] += 0.10294117647058823;
        result[3] += 0.19117647058823528;
        result[4] += 0.014705882352941176;
        result[5] += 0.5441176470588235;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.59375;
        result[3] += 0.21875;
        result[4] += 0.020833333333333332;
        result[5] += 0.16666666666666666;
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
        result[0] += 0.004651162790697675;
        result[1] += 0;
        result[2] += 0.7488372093023257;
        result[3] += 0.23255813953488375;
        result[4] += 0;
        result[5] += 0.013953488372093025;
      } else {
        result[0] += 0.0075872534142640375;
        result[1] += 0;
        result[2] += 0.945371775417299;
        result[3] += 0.039453717754172994;
        result[4] += 0;
        result[5] += 0.0075872534142640375;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
        result[0] += 0.00997506234413965;
        result[1] += 0.02743142144638404;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9002493765586035;
        result[5] += 0.06234413965087282;
      } else {
        result[0] += 0;
        result[1] += 0.9658848614072495;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.03411513859275053;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
        result[0] += 0.034482758620689655;
        result[1] += 0.01345668629100084;
        result[2] += 0.001682085786375105;
        result[3] += 0.14465937762825903;
        result[4] += 0.03868797308662742;
        result[5] += 0.767031118587048;
      } else {
        result[0] += 0.6596923076923077;
        result[1] += 0.01353846153846154;
        result[2] += 0.06153846153846154;
        result[3] += 0.10523076923076922;
        result[4] += 0.07323076923076922;
        result[5] += 0.08676923076923077;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.1111111111111111;
        result[3] += 0.17777777777777778;
        result[4] += 0;
        result[5] += 0.7111111111111111;
      } else {
        result[0] += 0.13043478260869565;
        result[1] += 0.10144927536231885;
        result[2] += 0.2753623188405797;
        result[3] += 0.34782608695652173;
        result[4] += 0;
        result[5] += 0.14492753623188406;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        result[0] += 0.007692307692307693;
        result[1] += 0;
        result[2] += 0.6846153846153846;
        result[3] += 0.27692307692307694;
        result[4] += 0;
        result[5] += 0.03076923076923077;
      } else {
        result[0] += 0.013363028953229399;
        result[1] += 0;
        result[2] += 0.923162583518931;
        result[3] += 0.05456570155902005;
        result[4] += 0;
        result[5] += 0.008908685968819599;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        result[0] += 0.16558441558441558;
        result[1] += 0.012987012987012988;
        result[2] += 0;
        result[3] += 0.006493506493506494;
        result[4] += 0.6883116883116883;
        result[5] += 0.1266233766233766;
      } else {
        result[0] += 0.0008403361344537816;
        result[1] += 0.004201680672268907;
        result[2] += 0.0016806722689075631;
        result[3] += 0.14873949579831933;
        result[4] += 0.052941176470588235;
        result[5] += 0.7915966386554621;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.8823529411764706;
        result[2] += 0;
        result[3] += 0.006085192697768763;
        result[4] += 0.1075050709939148;
        result[5] += 0.004056795131845842;
      } else {
        result[0] += 0.6352739726027398;
        result[1] += 0.02682648401826484;
        result[2] += 0.07134703196347032;
        result[3] += 0.09646118721461187;
        result[4] += 0.09817351598173515;
        result[5] += 0.07191780821917808;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.3106060606060606;
        result[3] += 0.38636363636363635;
        result[4] += 0;
        result[5] += 0.30303030303030304;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.8470588235294118;
        result[3] += 0.10588235294117647;
        result[4] += 0;
        result[5] += 0.047058823529411764;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)72.5) ) ) {
        result[0] += 0;
        result[1] += 0.8333333333333334;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.16666666666666666;
        result[5] += 0;
      } else {
        result[0] += 0.009302325581395349;
        result[1] += 0;
        result[2] += 0.9313953488372093;
        result[3] += 0.05116279069767442;
        result[4] += 0.0011627906976744186;
        result[5] += 0.0069767441860465115;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.016736401673640166;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9330543933054394;
        result[5] += 0.0502092050209205;
      } else {
        result[0] += 0.0308300395256917;
        result[1] += 0.005533596837944664;
        result[2] += 0.003952569169960474;
        result[3] += 0.13122529644268774;
        result[4] += 0.04743083003952569;
        result[5] += 0.7810276679841898;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)53.5) ) ) {
        result[0] += 0.006276150627615063;
        result[1] += 0.9435146443514645;
        result[2] += 0;
        result[3] += 0.0020920502092050207;
        result[4] += 0.04811715481171548;
        result[5] += 0;
      } else {
        result[0] += 0.6524096385542169;
        result[1] += 0.0391566265060241;
        result[2] += 0.0427710843373494;
        result[3] += 0.07590361445783132;
        result[4] += 0.13373493975903614;
        result[5] += 0.05602409638554217;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0.0273224043715847;
        result[1] += 0;
        result[2] += 0.12568306010928962;
        result[3] += 0.48633879781420764;
        result[4] += 0.06557377049180328;
        result[5] += 0.29508196721311475;
      } else {
        result[0] += 0.05333333333333332;
        result[1] += 0;
        result[2] += 0.6799999999999999;
        result[3] += 0.2533333333333333;
        result[4] += 0;
        result[5] += 0.01333333333333333;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
        result[0] += 0.2916666666666667;
        result[1] += 0.375;
        result[2] += 0.20833333333333334;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.125;
      } else {
        result[0] += 0.006651884700665189;
        result[1] += 0;
        result[2] += 0.9057649667405766;
        result[3] += 0.07206208425720623;
        result[4] += 0;
        result[5] += 0.015521064301552109;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.06976744186046512;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8837209302325582;
        result[5] += 0.046511627906976744;
      } else {
        result[0] += 0.039250669045495096;
        result[1] += 0.008920606601248885;
        result[2] += 0.0044603033006244425;
        result[3] += 0.1471900089206066;
        result[4] += 0.04014272970561998;
        result[5] += 0.760035682426405;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)51.5) ) ) {
        result[0] += 0.013452914798206279;
        result[1] += 0.9596412556053812;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.026905829596412557;
        result[5] += 0;
      } else {
        result[0] += 0.6414772727272727;
        result[1] += 0.036931818181818184;
        result[2] += 0.03465909090909091;
        result[3] += 0.07556818181818181;
        result[4] += 0.12840909090909092;
        result[5] += 0.08295454545454546;
      }
    }
  } else {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)87.5) ) ) {
        result[0] += 0;
        result[1] += 0.03773584905660377;
        result[2] += 0.1320754716981132;
        result[3] += 0.11320754716981132;
        result[4] += 0.10377358490566038;
        result[5] += 0.6132075471698113;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.3900709219858156;
        result[3] += 0.44680851063829785;
        result[4] += 0;
        result[5] += 0.16312056737588654;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
        result[0] += 0.0625;
        result[1] += 0.0125;
        result[2] += 0.7041666666666667;
        result[3] += 0.1875;
        result[4] += 0.010416666666666666;
        result[5] += 0.022916666666666665;
      } else {
        result[0] += 0.0019455252918287938;
        result[1] += 0;
        result[2] += 0.9747081712062257;
        result[3] += 0.021400778210116732;
        result[4] += 0;
        result[5] += 0.0019455252918287938;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)82.5) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.1851063829787234;
        result[1] += 0.002127659574468085;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7170212765957447;
        result[5] += 0.09574468085106383;
      } else {
        result[0] += 0;
        result[1] += 0.0029702970297029703;
        result[2] += 0;
        result[3] += 0.08613861386138613;
        result[4] += 0.07722772277227723;
        result[5] += 0.8336633663366336;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        result[0] += 0.001945525291828794;
        result[1] += 0.906614785992218;
        result[2] += 0.011673151750972765;
        result[3] += 0.001945525291828794;
        result[4] += 0.07392996108949418;
        result[5] += 0.003891050583657588;
      } else {
        result[0] += 0.5561440677966102;
        result[1] += 0.02701271186440678;
        result[2] += 0.07627118644067797;
        result[3] += 0.16790254237288135;
        result[4] += 0.05985169491525424;
        result[5] += 0.1128177966101695;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)86) ) ) {
        result[0] += 0;
        result[1] += 0.03389830508474576;
        result[2] += 0.1864406779661017;
        result[3] += 0.3220338983050847;
        result[4] += 0;
        result[5] += 0.4576271186440678;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.76;
        result[3] += 0.04;
        result[4] += 0.08;
        result[5] += 0.12;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)41.5) ) ) {
        result[0] += 0;
        result[1] += 0.8;
        result[2] += 0;
        result[3] += 0.2;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.016374269005847954;
        result[1] += 0.0011695906432748538;
        result[2] += 0.9111111111111111;
        result[3] += 0.06432748538011696;
        result[4] += 0;
        result[5] += 0.007017543859649123;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0.007352941176470589;
        result[1] += 0.007352941176470589;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9705882352941178;
        result[5] += 0.014705882352941178;
      } else {
        result[0] += 0.06349206349206349;
        result[1] += 0.005291005291005291;
        result[2] += 0.004409171075837742;
        result[3] += 0.06261022927689594;
        result[4] += 0.07142857142857142;
        result[5] += 0.7927689594356261;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        result[0] += 0.0019342359767891683;
        result[1] += 0.9458413926499033;
        result[2] += 0;
        result[3] += 0.0038684719535783366;
        result[4] += 0.04642166344294004;
        result[5] += 0.0019342359767891683;
      } else {
        result[0] += 0.5605131065253764;
        result[1] += 0.04127161182375906;
        result[2] += 0.07529280535415504;
        result[3] += 0.1483547127718907;
        result[4] += 0.06748466257668712;
        result[5] += 0.10708310094813163;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.05714285714285714;
        result[3] += 0.05714285714285714;
        result[4] += 0.17142857142857143;
        result[5] += 0.7142857142857143;
      } else {
        result[0] += 0;
        result[1] += 0.024691358024691357;
        result[2] += 0.3950617283950617;
        result[3] += 0.36419753086419754;
        result[4] += 0.006172839506172839;
        result[5] += 0.20987654320987653;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        result[0] += 0.03731343283582089;
        result[1] += 0.007462686567164179;
        result[2] += 0.746268656716418;
        result[3] += 0.1791044776119403;
        result[4] += 0.0037313432835820895;
        result[5] += 0.026119402985074626;
      } else {
        result[0] += 0.0031007751937984496;
        result[1] += 0;
        result[2] += 0.937984496124031;
        result[3] += 0.04961240310077519;
        result[4] += 0.0031007751937984496;
        result[5] += 0.006201550387596899;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)47) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
        result[0] += 0;
        result[1] += 0.125;
        result[2] += 0;
        result[3] += 0.0625;
        result[4] += 0.5;
        result[5] += 0.3125;
      } else {
        result[0] += 0;
        result[1] += 0.9912472647702407;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.006564551422319475;
        result[5] += 0.002188183807439825;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
        result[0] += 0.02613941018766756;
        result[1] += 0.0160857908847185;
        result[2] += 0.004021447721179625;
        result[3] += 0.12198391420911528;
        result[4] += 0.217828418230563;
        result[5] += 0.613941018766756;
      } else {
        result[0] += 0.64407778432528;
        result[1] += 0.05480259281084266;
        result[2] += 0.04419563936358279;
        result[3] += 0.07365939893930465;
        result[4] += 0.10253388332351208;
        result[5] += 0.0807307012374779;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0.05;
        result[2] += 0.06666666666666667;
        result[3] += 0.55;
        result[4] += 0.05;
        result[5] += 0.2833333333333333;
      } else {
        result[0] += 0.12565445026178013;
        result[1] += 0.03141361256544503;
        result[2] += 0.5026178010471205;
        result[3] += 0.12565445026178013;
        result[4] += 0.015706806282722516;
        result[5] += 0.19895287958115185;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.3125;
        result[3] += 0.375;
        result[4] += 0;
        result[5] += 0.3125;
      } else {
        result[0] += 0.005973715651135006;
        result[1] += 0;
        result[2] += 0.929510155316607;
        result[3] += 0.05734767025089606;
        result[4] += 0;
        result[5] += 0.007168458781362007;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.03535353535353535;
        result[2] += 0;
        result[3] += 0.03535353535353535;
        result[4] += 0.9141414141414141;
        result[5] += 0.015151515151515152;
      } else {
        result[0] += 0.032034632034632034;
        result[1] += 0.004329004329004329;
        result[2] += 0.004329004329004329;
        result[3] += 0.129004329004329;
        result[4] += 0.07186147186147186;
        result[5] += 0.7584415584415585;
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)104.5) ) ) {
        result[0] += 0.6161725067385444;
        result[1] += 0.049595687331536374;
        result[2] += 0.05336927223719675;
        result[3] += 0.0857142857142857;
        result[4] += 0.12938005390835577;
        result[5] += 0.06576819407008085;
      } else {
        result[0] += 0.005025125628140704;
        result[1] += 0.9949748743718593;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)90.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.02666666666666667;
        result[3] += 0.13333333333333333;
        result[4] += 0.12;
        result[5] += 0.72;
      } else {
        result[0] += 0;
        result[1] += 0.02358490566037736;
        result[2] += 0.39622641509433965;
        result[3] += 0.41509433962264153;
        result[4] += 0;
        result[5] += 0.1650943396226415;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)57) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.015184381778741865;
        result[1] += 0;
        result[2] += 0.903470715835141;
        result[3] += 0.07483731019522777;
        result[4] += 0;
        result[5] += 0.006507592190889371;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        result[0] += 0.0061162079510703364;
        result[1] += 0.05198776758409786;
        result[2] += 0.012232415902140673;
        result[3] += 0.0061162079510703364;
        result[4] += 0.8562691131498471;
        result[5] += 0.0672782874617737;
      } else {
        result[0] += 0.04467912266450041;
        result[1] += 0.00487408610885459;
        result[2] += 0.01380991064175467;
        result[3] += 0.15353371242891958;
        result[4] += 0.056051990251827784;
        result[5] += 0.727051177904143;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        result[0] += 0.005454545454545455;
        result[1] += 0.8672727272727273;
        result[2] += 0.0018181818181818182;
        result[3] += 0;
        result[4] += 0.11272727272727273;
        result[5] += 0.012727272727272728;
      } else {
        result[0] += 0.656938653960691;
        result[1] += 0.03394877903513997;
        result[2] += 0.042287075640262066;
        result[3] += 0.0690887432995831;
        result[4] += 0.07504466944609889;
        result[5] += 0.12269207861822515;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.27631578947368424;
        result[3] += 0.6447368421052632;
        result[4] += 0;
        result[5] += 0.07894736842105263;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7294117647058824;
        result[3] += 0.18823529411764708;
        result[4] += 0.011764705882352943;
        result[5] += 0.07058823529411766;
      }
    } else {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)99) ) ) {
        result[0] += 0.04878048780487805;
        result[1] += 0;
        result[2] += 0.5853658536585366;
        result[3] += 0.21951219512195122;
        result[4] += 0;
        result[5] += 0.14634146341463414;
      } else {
        result[0] += 0.008363201911589008;
        result[1] += 0;
        result[2] += 0.9235364396654719;
        result[3] += 0.06451612903225806;
        result[4] += 0;
        result[5] += 0.0035842293906810036;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.05627705627705628;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9307359307359307;
        result[5] += 0.012987012987012988;
      } else {
        result[0] += 0.03051438535309503;
        result[1] += 0.015693112467306015;
        result[2] += 0.004359197907585004;
        result[3] += 0.13426329555361813;
        result[4] += 0.037489102005231034;
        result[5] += 0.7776809067131648;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        result[0] += 0.0022573363431151244;
        result[1] += 0.9571106094808127;
        result[2] += 0;
        result[3] += 0.0022573363431151244;
        result[4] += 0.03611738148984199;
        result[5] += 0.0022573363431151244;
      } else {
        result[0] += 0.6241095890410959;
        result[1] += 0.03780821917808219;
        result[2] += 0.05698630136986301;
        result[3] += 0.08493150684931507;
        result[4] += 0.12493150684931507;
        result[5] += 0.07123287671232877;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.109375;
        result[3] += 0.2265625;
        result[4] += 0.0390625;
        result[5] += 0.625;
      } else {
        result[0] += 0.04761904761904762;
        result[1] += 0;
        result[2] += 0.7142857142857144;
        result[3] += 0.07142857142857144;
        result[4] += 0;
        result[5] += 0.16666666666666669;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        result[0] += 0.011764705882352941;
        result[1] += 0.058823529411764705;
        result[2] += 0.32941176470588235;
        result[3] += 0.4823529411764706;
        result[4] += 0;
        result[5] += 0.11764705882352941;
      } else {
        result[0] += 0.01945945945945946;
        result[1] += 0.012972972972972972;
        result[2] += 0.8864864864864865;
        result[3] += 0.06702702702702702;
        result[4] += 0.003243243243243243;
        result[5] += 0.010810810810810811;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9873417721518988;
        result[5] += 0.012658227848101266;
      } else {
        result[0] += 0.03272450532724505;
        result[1] += 0.00837138508371385;
        result[2] += 0.00380517503805175;
        result[3] += 0.1582952815829528;
        result[4] += 0.0593607305936073;
        result[5] += 0.7374429223744292;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0.9574036511156186;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.04259634888438134;
        result[5] += 0;
      } else {
        result[0] += 0.6273397617697107;
        result[1] += 0.03743618831537152;
        result[2] += 0.05672149744753262;
        result[3] += 0.08508224617129892;
        result[4] += 0.11968235961429381;
        result[5] += 0.0737379466817924;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.1111111111111111;
        result[3] += 0.13333333333333333;
        result[4] += 0.044444444444444446;
        result[5] += 0.7111111111111111;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.3898305084745763;
        result[3] += 0.4745762711864407;
        result[4] += 0;
        result[5] += 0.13559322033898305;
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
        result[0] += 0.013215859030837005;
        result[1] += 0;
        result[2] += 0.8887665198237885;
        result[3] += 0.07709251101321586;
        result[4] += 0.004405286343612335;
        result[5] += 0.016519823788546256;
      }
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.012195121951219513;
        result[1] += 0.11707317073170732;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7926829268292683;
        result[5] += 0.07804878048780488;
      } else {
        result[0] += 0.220616570327553;
        result[1] += 0.011078998073217727;
        result[2] += 0.02119460500963391;
        result[3] += 0.1579961464354528;
        result[4] += 0.06888246628131021;
        result[5] += 0.5202312138728323;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)72) ) ) {
        result[0] += 0;
        result[1] += 0.9931662870159453;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.00683371298405467;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.3333333333333333;
        result[2] += 0.08333333333333333;
        result[3] += 0;
        result[4] += 0.5833333333333334;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)69) ) ) {
        result[0] += 0.7661290322580646;
        result[1] += 0.028225806451612906;
        result[2] += 0.08467741935483872;
        result[3] += 0.028225806451612906;
        result[4] += 0.052419354838709686;
        result[5] += 0.040322580645161296;
      } else {
        result[0] += 0.006578947368421052;
        result[1] += 0.0021929824561403508;
        result[2] += 0.7532894736842105;
        result[3] += 0.18421052631578946;
        result[4] += 0.0021929824561403508;
        result[5] += 0.051535087719298246;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)82.5) ) ) {
        result[0] += 0.9452332657200812;
        result[1] += 0.006085192697768763;
        result[2] += 0.028397565922920892;
        result[3] += 0;
        result[4] += 0.02028397565922921;
        result[5] += 0;
      } else {
        result[0] += 0.029661016949152543;
        result[1] += 0;
        result[2] += 0.9661016949152542;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.00423728813559322;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.008298755186721992;
        result[1] += 0.012448132780082987;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9377593360995851;
        result[5] += 0.04149377593360996;
      } else {
        result[0] += 0.028547439126784216;
        result[1] += 0.010075566750629723;
        result[2] += 0.0008396305625524769;
        result[3] += 0.15365239294710328;
        result[4] += 0.054575986565911;
        result[5] += 0.7523089840470193;
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6051762114537445;
        result[1] += 0.04955947136563876;
        result[2] += 0.05781938325991189;
        result[3] += 0.08590308370044053;
        result[4] += 0.1183920704845815;
        result[5] += 0.08314977973568281;
      } else {
        result[0] += 0.011061946902654867;
        result[1] += 0.9800884955752213;
        result[2] += 0;
        result[3] += 0.004424778761061947;
        result[4] += 0.004424778761061947;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)86) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.07142857142857142;
        result[3] += 0;
        result[4] += 0.07142857142857142;
        result[5] += 0.8571428571428571;
      } else {
        result[0] += 0;
        result[1] += 0.06666666666666667;
        result[2] += 0.15;
        result[3] += 0.4666666666666667;
        result[4] += 0;
        result[5] += 0.31666666666666665;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        result[0] += 0.038277511961722493;
        result[1] += 0.04306220095693781;
        result[2] += 0.5454545454545455;
        result[3] += 0.29186602870813405;
        result[4] += 0.014354066985645935;
        result[5] += 0.06698564593301437;
      } else {
        result[0] += 0.008443908323281063;
        result[1] += 0;
        result[2] += 0.9324487334137517;
        result[3] += 0.056694813027744276;
        result[4] += 0.0012062726176115804;
        result[5] += 0.0012062726176115804;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9545454545454546;
        result[5] += 0.045454545454545456;
      } else {
        result[0] += 0.07241606319947334;
        result[1] += 0.009216589861751152;
        result[2] += 0.003949967083607637;
        result[3] += 0.17774851876234365;
        result[4] += 0.05200789993416721;
        result[5] += 0.684660961158657;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)102.5) ) ) {
        result[0] += 0.6536964980544747;
        result[1] += 0.061608300907911806;
        result[2] += 0.0654993514915694;
        result[3] += 0.046044098573281456;
        result[4] += 0.10959792477302205;
        result[5] += 0.06355382619974059;
      } else {
        result[0] += 0.03211009174311927;
        result[1] += 0.9678899082568807;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
        result[0] += 0.03968253968253969;
        result[1] += 0;
        result[2] += 0.3174603174603175;
        result[3] += 0.4682539682539683;
        result[4] += 0.007936507936507938;
        result[5] += 0.16666666666666669;
      } else {
        result[0] += 0.03070175438596491;
        result[1] += 0;
        result[2] += 0.8026315789473685;
        result[3] += 0.16228070175438597;
        result[4] += 0;
        result[5] += 0.0043859649122807015;
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)74.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.3333333333333333;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.6666666666666666;
      } else {
        result[0] += 0.0027397260273972607;
        result[1] += 0;
        result[2] += 0.9589041095890412;
        result[3] += 0.03561643835616439;
        result[4] += 0;
        result[5] += 0.0027397260273972607;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        result[0] += 0.003703703703703704;
        result[1] += 0.05925925925925926;
        result[2] += 0;
        result[3] += 0.003703703703703704;
        result[4] += 0.9111111111111111;
        result[5] += 0.022222222222222223;
      } else {
        result[0] += 0.03594771241830065;
        result[1] += 0.012254901960784314;
        result[2] += 0.0016339869281045752;
        result[3] += 0.16176470588235295;
        result[4] += 0.07679738562091504;
        result[5] += 0.7116013071895425;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0.9492273730684327;
        result[2] += 0;
        result[3] += 0.004415011037527595;
        result[4] += 0.03311258278145696;
        result[5] += 0.013245033112582783;
      } else {
        result[0] += 0.6139664804469274;
        result[1] += 0.030167597765363128;
        result[2] += 0.07039106145251396;
        result[3] += 0.08100558659217877;
        result[4] += 0.08994413407821229;
        result[5] += 0.11452513966480447;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
        result[0] += 0.031746031746031744;
        result[1] += 0;
        result[2] += 0.047619047619047616;
        result[3] += 0.14285714285714285;
        result[4] += 0.2222222222222222;
        result[5] += 0.5555555555555556;
      } else {
        result[0] += 0;
        result[1] += 0.05421686746987952;
        result[2] += 0.5;
        result[3] += 0.3373493975903614;
        result[4] += 0.006024096385542169;
        result[5] += 0.10240963855421686;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7748344370860927;
        result[3] += 0.18543046357615894;
        result[4] += 0.006622516556291391;
        result[5] += 0.033112582781456956;
      } else {
        result[0] += 0.014104372355430186;
        result[1] += 0.002820874471086037;
        result[2] += 0.9492242595204514;
        result[3] += 0.031029619181946407;
        result[4] += 0;
        result[5] += 0.002820874471086037;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.1037037037037037;
        result[2] += 0;
        result[3] += 0.007407407407407408;
        result[4] += 0.825925925925926;
        result[5] += 0.06296296296296296;
      } else {
        result[0] += 0.027983539094650206;
        result[1] += 0.0016460905349794238;
        result[2] += 0.006584362139917695;
        result[3] += 0.14897119341563786;
        result[4] += 0.05432098765432099;
        result[5] += 0.7604938271604939;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0.946067415730337;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.05393258426966292;
        result[5] += 0;
      } else {
        result[0] += 0.6392896781354052;
        result[1] += 0.018312985571587125;
        result[2] += 0.058268590455049944;
        result[3] += 0.08490566037735849;
        result[4] += 0.11320754716981132;
        result[5] += 0.08601553829078801;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)90.5) ) ) {
        result[0] += 0.02;
        result[1] += 0.1;
        result[2] += 0.18;
        result[3] += 0.1;
        result[4] += 0.06;
        result[5] += 0.54;
      } else {
        result[0] += 0.004901960784313725;
        result[1] += 0.00980392156862745;
        result[2] += 0.5490196078431373;
        result[3] += 0.35784313725490197;
        result[4] += 0;
        result[5] += 0.0784313725490196;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
        result[0] += 0.04721030042918455;
        result[1] += 0.012875536480686695;
        result[2] += 0.7296137339055794;
        result[3] += 0.1888412017167382;
        result[4] += 0.008583690987124463;
        result[5] += 0.012875536480686695;
      } else {
        result[0] += 0.0016474464579901153;
        result[1] += 0;
        result[2] += 0.9670510708401977;
        result[3] += 0.03130148270181219;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.01149425287356322;
        result[1] += 0.019157088122605366;
        result[2] += 0.003831417624521073;
        result[3] += 0;
        result[4] += 0.9310344827586208;
        result[5] += 0.03448275862068966;
      } else {
        result[0] += 0.038980509745127435;
        result[1] += 0.015742128935532233;
        result[2] += 0.011244377811094454;
        result[3] += 0.15292353823088456;
        result[4] += 0.050974512743628186;
        result[5] += 0.7301349325337332;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        result[0] += 0.0021551724137931034;
        result[1] += 0.9245689655172413;
        result[2] += 0;
        result[3] += 0.032327586206896554;
        result[4] += 0.040948275862068964;
        result[5] += 0;
      } else {
        result[0] += 0.6509648127128265;
        result[1] += 0.035187287173666294;
        result[2] += 0.05278093076049944;
        result[3] += 0.07150964812712828;
        result[4] += 0.11804767309875143;
        result[5] += 0.07150964812712828;
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)83.5) ) ) {
        result[0] += 0;
        result[1] += 0.014925373134328358;
        result[2] += 0.13432835820895522;
        result[3] += 0.4626865671641791;
        result[4] += 0.05970149253731343;
        result[5] += 0.3283582089552239;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7831325301204819;
        result[3] += 0.1686746987951807;
        result[4] += 0.012048192771084338;
        result[5] += 0.03614457831325301;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)88.5) ) ) {
        result[0] += 0.09375;
        result[1] += 0.125;
        result[2] += 0.5;
        result[3] += 0.125;
        result[4] += 0;
        result[5] += 0.15625;
      } else {
        result[0] += 0.006321112515802779;
        result[1] += 0;
        result[2] += 0.9178255372945636;
        result[3] += 0.06953223767383059;
        result[4] += 0.0012642225031605561;
        result[5] += 0.005056890012642225;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.1;
        result[2] += 0;
        result[3] += 0.05185185185185185;
        result[4] += 0.7777777777777778;
        result[5] += 0.07037037037037037;
      } else {
        result[0] += 0.04570970328789094;
        result[1] += 0.0016038492381716118;
        result[2] += 0.00400962309542903;
        result[3] += 0.136327185244587;
        result[4] += 0.048115477145148355;
        result[5] += 0.764234161988773;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)53.5) ) ) {
        result[0] += 0.00881057268722467;
        result[1] += 0.9317180616740088;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.05947136563876652;
        result[5] += 0;
      } else {
        result[0] += 0.6395418927064497;
        result[1] += 0.04822182037371911;
        result[2] += 0.0433996383363472;
        result[3] += 0.08318264014466546;
        result[4] += 0.11934900542495479;
        result[5] += 0.06630500301386377;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)101.5) ) ) {
        result[0] += 0.02040816326530612;
        result[1] += 0.07142857142857142;
        result[2] += 0.11224489795918367;
        result[3] += 0.3673469387755102;
        result[4] += 0.04081632653061224;
        result[5] += 0.3877551020408163;
      } else {
        result[0] += 0.08;
        result[1] += 0.18;
        result[2] += 0.38;
        result[3] += 0;
        result[4] += 0.1;
        result[5] += 0.26;
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)97.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.26086956521739135;
        result[3] += 0.3695652173913044;
        result[4] += 0.02173913043478261;
        result[5] += 0.3478260869565218;
      } else {
        result[0] += 0.009980039920159679;
        result[1] += 0;
        result[2] += 0.8882235528942114;
        result[3] += 0.08782435129740518;
        result[4] += 0.0019960079840319355;
        result[5] += 0.011976047904191614;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        result[0] += 0.1510574018126888;
        result[1] += 0.04229607250755287;
        result[2] += 0.006042296072507553;
        result[3] += 0.006042296072507553;
        result[4] += 0.7069486404833837;
        result[5] += 0.08761329305135952;
      } else {
        result[0] += 0.0056315366049879325;
        result[1] += 0.012872083668543845;
        result[2] += 0.0056315366049879325;
        result[3] += 0.1753821399839099;
        result[4] += 0.05953338696701529;
        result[5] += 0.7409493161705552;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)55.5) ) ) {
        result[0] += 0.011086474501108648;
        result[1] += 0.9490022172949002;
        result[2] += 0;
        result[3] += 0.011086474501108648;
        result[4] += 0.028824833702882482;
        result[5] += 0;
      } else {
        result[0] += 0.6305361305361306;
        result[1] += 0.04079254079254079;
        result[2] += 0.06818181818181818;
        result[3] += 0.07226107226107226;
        result[4] += 0.08741258741258741;
        result[5] += 0.10081585081585082;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)71.5) ) ) {
        result[0] += 0;
        result[1] += 0.07692307692307693;
        result[2] += 0.23076923076923078;
        result[3] += 0.05128205128205128;
        result[4] += 0.07692307692307693;
        result[5] += 0.5641025641025641;
      } else {
        result[0] += 0;
        result[1] += 0.0625;
        result[2] += 0.28125;
        result[3] += 0.453125;
        result[4] += 0.0625;
        result[5] += 0.140625;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        result[0] += 0.0392156862745098;
        result[1] += 0.012254901960784314;
        result[2] += 0.7328431372549019;
        result[3] += 0.19117647058823528;
        result[4] += 0;
        result[5] += 0.024509803921568627;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9703832752613241;
        result[3] += 0.029616724738675958;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.025547445255474453;
        result[2] += 0;
        result[3] += 0.010948905109489052;
        result[4] += 0.916058394160584;
        result[5] += 0.04744525547445255;
      } else {
        result[0] += 0.03597122302158273;
        result[1] += 0.01838529176658673;
        result[2] += 0.007194244604316547;
        result[3] += 0.12949640287769784;
        result[4] += 0.04636290967226219;
        result[5] += 0.762589928057554;
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6437069505322479;
        result[1] += 0.050093926111458985;
        result[2] += 0.024420788979336257;
        result[3] += 0.06261740763932373;
        result[4] += 0.14214151534126487;
        result[5] += 0.07701941139636818;
      } else {
        result[0] += 0.02102803738317757;
        result[1] += 0.9485981308411215;
        result[2] += 0.011682242990654205;
        result[3] += 0.007009345794392523;
        result[4] += 0.011682242990654205;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
        result[0] += 0;
        result[1] += 0.004784688995215311;
        result[2] += 0.11004784688995216;
        result[3] += 0.4784688995215311;
        result[4] += 0.05263157894736842;
        result[5] += 0.35406698564593303;
      } else {
        result[0] += 0.12727272727272726;
        result[1] += 0.21818181818181817;
        result[2] += 0.5454545454545454;
        result[3] += 0.10909090909090909;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        result[0] += 0.07951070336391437;
        result[1] += 0.009174311926605505;
        result[2] += 0.6788990825688074;
        result[3] += 0.16819571865443425;
        result[4] += 0.0061162079510703364;
        result[5] += 0.0581039755351682;
      } else {
        result[0] += 0.0072992700729927005;
        result[1] += 0;
        result[2] += 0.92992700729927;
        result[3] += 0.05401459854014599;
        result[4] += 0;
        result[5] += 0.008759124087591242;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.004464285714285715;
        result[1] += 0.06250000000000001;
        result[2] += 0;
        result[3] += 0.004464285714285715;
        result[4] += 0.8839285714285715;
        result[5] += 0.04464285714285715;
      } else {
        result[0] += 0.03577512776831346;
        result[1] += 0.014480408858603067;
        result[2] += 0.0034071550255536627;
        result[3] += 0.13458262350936967;
        result[4] += 0.03321976149914821;
        result[5] += 0.778534923339012;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)53.5) ) ) {
        result[0] += 0.004728132387706856;
        result[1] += 0.9527186761229315;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.0425531914893617;
        result[5] += 0;
      } else {
        result[0] += 0.6364168618266979;
        result[1] += 0.04742388758782201;
        result[2] += 0.03044496487119438;
        result[3] += 0.08489461358313817;
        result[4] += 0.12060889929742388;
        result[5] += 0.08021077283372366;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.05063291139240506;
        result[3] += 0.17721518987341772;
        result[4] += 0.0379746835443038;
        result[5] += 0.7341772151898734;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.16363636363636364;
        result[3] += 0.6909090909090909;
        result[4] += 0;
        result[5] += 0.14545454545454545;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
        result[0] += 0;
        result[1] += 0.011428571428571429;
        result[2] += 0.52;
        result[3] += 0.33714285714285713;
        result[4] += 0;
        result[5] += 0.13142857142857142;
      } else {
        result[0] += 0.01720647773279352;
        result[1] += 0.008097165991902834;
        result[2] += 0.8947368421052632;
        result[3] += 0.06174089068825911;
        result[4] += 0.006072874493927126;
        result[5] += 0.012145748987854251;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
        result[0] += 0.00746268656716418;
        result[1] += 0.0746268656716418;
        result[2] += 0.0373134328358209;
        result[3] += 0.01492537313432836;
        result[4] += 0.8171641791044777;
        result[5] += 0.04850746268656717;
      } else {
        result[0] += 0.038431372549019606;
        result[1] += 0.005490196078431373;
        result[2] += 0.005490196078431373;
        result[3] += 0.14823529411764705;
        result[4] += 0.06901960784313725;
        result[5] += 0.7333333333333333;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0.9606126914660832;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.03938730853391685;
        result[5] += 0;
      } else {
        result[0] += 0.6547269524368762;
        result[1] += 0.026423957721667647;
        result[2] += 0.045214327657075754;
        result[3] += 0.08455666470933648;
        result[4] += 0.11156782149148563;
        result[5] += 0.07751027598355845;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)87.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.10526315789473684;
        result[3] += 0.14035087719298245;
        result[4] += 0.07017543859649122;
        result[5] += 0.6842105263157895;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.2857142857142857;
        result[3] += 0.44155844155844154;
        result[4] += 0;
        result[5] += 0.2727272727272727;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        result[0] += 0.012461059190031152;
        result[1] += 0.021806853582554516;
        result[2] += 0.7227414330218068;
        result[3] += 0.1838006230529595;
        result[4] += 0.01557632398753894;
        result[5] += 0.04361370716510903;
      } else {
        result[0] += 0.005988023952095809;
        result[1] += 0.004491017964071856;
        result[2] += 0.9640718562874252;
        result[3] += 0.023952095808383235;
        result[4] += 0;
        result[5] += 0.0014970059880239522;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)89) ) ) {
        result[0] += 0.00904977375565611;
        result[1] += 0.00904977375565611;
        result[2] += 0;
        result[3] += 0.013574660633484163;
        result[4] += 0.9411764705882353;
        result[5] += 0.027149321266968326;
      } else {
        result[0] += 0;
        result[1] += 0.7083333333333334;
        result[2] += 0;
        result[3] += 0.20833333333333334;
        result[4] += 0;
        result[5] += 0.08333333333333333;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
        result[0] += 0.024870466321243522;
        result[1] += 0.002072538860103627;
        result[2] += 0.0031088082901554403;
        result[3] += 0.03419689119170984;
        result[4] += 0.08186528497409326;
        result[5] += 0.8538860103626943;
      } else {
        result[0] += 0.07865168539325842;
        result[1] += 0.011235955056179775;
        result[2] += 0.056179775280898875;
        result[3] += 0.4747191011235955;
        result[4] += 0.028089887640449437;
        result[5] += 0.351123595505618;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        result[0] += 0.002008032128514056;
        result[1] += 0.8875502008032129;
        result[2] += 0;
        result[3] += 0.006024096385542169;
        result[4] += 0.10441767068273092;
        result[5] += 0;
      } else {
        result[0] += 0.681443951868271;
        result[1] += 0.019632678910702975;
        result[2] += 0.04053198226725776;
        result[3] += 0.07346421785940468;
        result[4] += 0.10829639012032932;
        result[5] += 0.0766307789740342;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        result[0] += 0.012345679012345678;
        result[1] += 0.037037037037037035;
        result[2] += 0.37037037037037035;
        result[3] += 0.3292181069958848;
        result[4] += 0;
        result[5] += 0.25102880658436216;
      } else {
        result[0] += 0.023404255319148935;
        result[1] += 0.0010638297872340426;
        result[2] += 0.8829787234042553;
        result[3] += 0.07872340425531915;
        result[4] += 0.00425531914893617;
        result[5] += 0.009574468085106383;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        result[0] += 0.0058823529411764705;
        result[1] += 0.07941176470588235;
        result[2] += 0;
        result[3] += 0.03235294117647059;
        result[4] += 0.8382352941176471;
        result[5] += 0.04411764705882353;
      } else {
        result[0] += 0.13742494996664442;
        result[1] += 0.004002668445630421;
        result[2] += 0.0020013342228152103;
        result[3] += 0.12741827885256837;
        result[4] += 0.07605070046697798;
        result[5] += 0.6531020680453635;
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6895011169024572;
        result[1] += 0.06329113924050633;
        result[2] += 0.04393149664929263;
        result[3] += 0.08935219657483247;
        result[4] += 0.0759493670886076;
        result[5] += 0.0379746835443038;
      } else {
        result[0] += 0.009523809523809526;
        result[1] += 0.9785714285714286;
        result[2] += 0;
        result[3] += 0.0071428571428571435;
        result[4] += 0.004761904761904763;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0.0625;
        result[2] += 0.041666666666666664;
        result[3] += 0.4479166666666667;
        result[4] += 0.010416666666666666;
        result[5] += 0.4375;
      } else {
        result[0] += 0.034013605442176874;
        result[1] += 0.027210884353741496;
        result[2] += 0.40816326530612246;
        result[3] += 0.35374149659863946;
        result[4] += 0.04081632653061224;
        result[5] += 0.1360544217687075;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        result[0] += 0.007575757575757576;
        result[1] += 0;
        result[2] += 0.6515151515151515;
        result[3] += 0.2878787878787879;
        result[4] += 0;
        result[5] += 0.05303030303030303;
      } else {
        result[0] += 0.020023557126030624;
        result[1] += 0;
        result[2] += 0.9293286219081273;
        result[3] += 0.04946996466431095;
        result[4] += 0;
        result[5] += 0.001177856301531213;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.2135678391959799;
        result[1] += 0.05527638190954774;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.635678391959799;
        result[5] += 0.09547738693467336;
      } else {
        result[0] += 0.00791295746785361;
        result[1] += 0.0009891196834817012;
        result[2] += 0.009891196834817012;
        result[3] += 0.11473788328387735;
        result[4] += 0.0781404549950544;
        result[5] += 0.7883283877349159;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)58.5) ) ) {
        result[0] += 0;
        result[1] += 0.9112554112554112;
        result[2] += 0;
        result[3] += 0.004329004329004329;
        result[4] += 0.0735930735930736;
        result[5] += 0.010822510822510822;
      } else {
        result[0] += 0.6425452276980661;
        result[1] += 0.038053649407361195;
        result[2] += 0.040548970679975045;
        result[3] += 0.0991890205864005;
        result[4] += 0.066126013724267;
        result[5] += 0.11353711790393013;
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        result[0] += 0.010638297872340425;
        result[1] += 0.0070921985815602835;
        result[2] += 0.1276595744680851;
        result[3] += 0.38652482269503546;
        result[4] += 0.07446808510638298;
        result[5] += 0.39361702127659576;
      } else {
        result[0] += 0.10687022900763359;
        result[1] += 0.08396946564885496;
        result[2] += 0.5954198473282443;
        result[3] += 0.1297709923664122;
        result[4] += 0.007633587786259542;
        result[5] += 0.07633587786259542;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.008869179600886918;
        result[1] += 0;
        result[2] += 0.8991130820399114;
        result[3] += 0.08425720620842572;
        result[4] += 0.0022172949002217295;
        result[5] += 0.005543237250554324;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.013953488372093023;
        result[3] += 0.004651162790697674;
        result[4] += 0.9069767441860465;
        result[5] += 0.07441860465116279;
      } else {
        result[0] += 0.04211332312404288;
        result[1] += 0.01761102603369066;
        result[2] += 0.011485451761102604;
        result[3] += 0.17381316998468607;
        result[4] += 0.042879019908116385;
        result[5] += 0.7120980091883614;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)55.5) ) ) {
        result[0] += 0.0018975332068311191;
        result[1] += 0.9013282732447816;
        result[2] += 0;
        result[3] += 0.02277039848197343;
        result[4] += 0.07210626185958253;
        result[5] += 0.0018975332068311191;
      } else {
        result[0] += 0.6260920209668026;
        result[1] += 0.023296447291788;
        result[2] += 0.0634828188701223;
        result[3] += 0.08794408852649971;
        result[4] += 0.1025043680838672;
        result[5] += 0.09668025626092021;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)72.5) ) ) {
        result[0] += 0.1111111111111111;
        result[1] += 0.2222222222222222;
        result[2] += 0.027777777777777776;
        result[3] += 0;
        result[4] += 0.1388888888888889;
        result[5] += 0.5;
      } else {
        result[0] += 0.013761467889908258;
        result[1] += 0.03211009174311927;
        result[2] += 0.38073394495412843;
        result[3] += 0.43577981651376146;
        result[4] += 0;
        result[5] += 0.13761467889908258;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
        result[0] += 0.007352941176470588;
        result[1] += 0;
        result[2] += 0.8455882352941176;
        result[3] += 0.125;
        result[4] += 0;
        result[5] += 0.022058823529411766;
      } else {
        result[0] += 0.014953271028037384;
        result[1] += 0;
        result[2] += 0.9551401869158879;
        result[3] += 0.028037383177570093;
        result[4] += 0;
        result[5] += 0.001869158878504673;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.11912225705329153;
        result[1] += 0.009404388714733543;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.774294670846395;
        result[5] += 0.09717868338557993;
      } else {
        result[0] += 0.0009017132551848512;
        result[1] += 0.009918845807033363;
        result[2] += 0.0018034265103697023;
        result[3] += 0.17493237150586113;
        result[4] += 0.04959422903516682;
        result[5] += 0.7628494138863842;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        result[0] += 0.007407407407407408;
        result[1] += 0.8240740740740741;
        result[2] += 0.005555555555555556;
        result[3] += 0;
        result[4] += 0.16111111111111112;
        result[5] += 0.001851851851851852;
      } else {
        result[0] += 0.6569994422755159;
        result[1] += 0.02286670384829894;
        result[2] += 0.07417735638594534;
        result[3] += 0.10373675404350251;
        result[4] += 0.06636921360847742;
        result[5] += 0.0758505298382599;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.08333333333333333;
        result[3] += 0.75;
        result[4] += 0;
        result[5] += 0.16666666666666666;
      } else {
        result[0] += 0;
        result[1] += 0.014354066985645935;
        result[2] += 0.6076555023923446;
        result[3] += 0.2488038277511962;
        result[4] += 0.02870813397129187;
        result[5] += 0.10047846889952154;
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)64) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.009950248756218905;
        result[1] += 0.0024875621890547263;
        result[2] += 0.9378109452736318;
        result[3] += 0.04477611940298507;
        result[4] += 0;
        result[5] += 0.004975124378109453;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.003816793893129771;
        result[1] += 0.04198473282442748;
        result[2] += 0.015267175572519083;
        result[3] += 0.003816793893129771;
        result[4] += 0.916030534351145;
        result[5] += 0.019083969465648856;
      } else {
        result[0] += 0.03338391502276176;
        result[1] += 0.01896813353566009;
        result[2] += 0.027314112291350532;
        result[3] += 0.16009104704097116;
        result[4] += 0.0417298937784522;
        result[5] += 0.7185128983308042;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)106) ) ) {
        result[0] += 0.5793478260869566;
        result[1] += 0.0641304347826087;
        result[2] += 0.05217391304347826;
        result[3] += 0.07934782608695652;
        result[4] += 0.1298913043478261;
        result[5] += 0.09510869565217392;
      } else {
        result[0] += 0.008670520231213872;
        result[1] += 0.9624277456647399;
        result[2] += 0;
        result[3] += 0.014450867052023121;
        result[4] += 0.014450867052023121;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)88.5) ) ) {
        result[0] += 0;
        result[1] += 0.02127659574468085;
        result[2] += 0.06382978723404255;
        result[3] += 0.02127659574468085;
        result[4] += 0.19148936170212766;
        result[5] += 0.7021276595744681;
      } else {
        result[0] += 0.02564102564102564;
        result[1] += 0.019230769230769232;
        result[2] += 0.3974358974358974;
        result[3] += 0.3782051282051282;
        result[4] += 0.00641025641025641;
        result[5] += 0.17307692307692307;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
        result[0] += 0.012145748987854251;
        result[1] += 0;
        result[2] += 0.7327935222672065;
        result[3] += 0.24696356275303644;
        result[4] += 0;
        result[5] += 0.008097165991902834;
      } else {
        result[0] += 0.004918032786885246;
        result[1] += 0;
        result[2] += 0.9688524590163935;
        result[3] += 0.021311475409836064;
        result[4] += 0;
        result[5] += 0.004918032786885246;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)84.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        result[0] += 0.002178649237472767;
        result[1] += 0.9956427015250545;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.002178649237472767;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)88.5) ) ) {
        result[0] += 0.04782608695652174;
        result[1] += 0.005797101449275362;
        result[2] += 0.005797101449275362;
        result[3] += 0.06594202898550725;
        result[4] += 0.2644927536231884;
        result[5] += 0.6101449275362318;
      } else {
        result[0] += 0.5637966804979253;
        result[1] += 0.03941908713692946;
        result[2] += 0.04771784232365145;
        result[3] += 0.145746887966805;
        result[4] += 0.0762448132780083;
        result[5] += 0.1270746887966805;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)88.5) ) ) {
        result[0] += 0;
        result[1] += 0.15789473684210528;
        result[2] += 0.10526315789473685;
        result[3] += 0.2280701754385965;
        result[4] += 0.052631578947368425;
        result[5] += 0.456140350877193;
      } else {
        result[0] += 0.05982905982905982;
        result[1] += 0.017094017094017092;
        result[2] += 0.5384615384615383;
        result[3] += 0.29059829059829057;
        result[4] += 0.025641025641025633;
        result[5] += 0.06837606837606837;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6140350877192983;
        result[3] += 0.3508771929824561;
        result[4] += 0;
        result[5] += 0.03508771929824561;
      } else {
        result[0] += 0.00853658536585366;
        result[1] += 0;
        result[2] += 0.926829268292683;
        result[3] += 0.054878048780487805;
        result[4] += 0;
        result[5] += 0.00975609756097561;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.07692307692307693;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9076923076923077;
        result[5] += 0.015384615384615385;
      } else {
        result[0] += 0.0314410480349345;
        result[1] += 0.00960698689956332;
        result[2] += 0.008733624454148471;
        result[3] += 0.14585152838427948;
        result[4] += 0.056768558951965066;
        result[5] += 0.7475982532751092;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        result[0] += 0.004629629629629629;
        result[1] += 0.9768518518518519;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.018518518518518517;
        result[5] += 0;
      } else {
        result[0] += 0.6666666666666666;
        result[1] += 0.042540792540792544;
        result[2] += 0.02564102564102564;
        result[3] += 0.07575757575757576;
        result[4] += 0.10372960372960373;
        result[5] += 0.08566433566433566;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.06756756756756759;
        result[3] += 0.37162162162162166;
        result[4] += 0.013513513513513516;
        result[5] += 0.5472972972972974;
      } else {
        result[0] += 0;
        result[1] += 0.072;
        result[2] += 0.44;
        result[3] += 0.304;
        result[4] += 0.064;
        result[5] += 0.12;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
        result[0] += 0.07627118644067797;
        result[1] += 0;
        result[2] += 0.6186440677966102;
        result[3] += 0.2288135593220339;
        result[4] += 0.00847457627118644;
        result[5] += 0.06779661016949153;
      } else {
        result[0] += 0.009070294784580499;
        result[1] += 0;
        result[2] += 0.9251700680272109;
        result[3] += 0.05442176870748299;
        result[4] += 0;
        result[5] += 0.011337868480725623;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.03237410071942446;
        result[2] += 0;
        result[3] += 0.0035971223021582736;
        result[4] += 0.9028776978417267;
        result[5] += 0.06115107913669065;
      } else {
        result[0] += 0.027777777777777776;
        result[1] += 0.0030864197530864196;
        result[2] += 0.0015432098765432098;
        result[3] += 0.1558641975308642;
        result[4] += 0.036265432098765434;
        result[5] += 0.7754629629629629;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)50) ) ) {
        result[0] += 0.006726457399103139;
        result[1] += 0.968609865470852;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.02466367713004484;
        result[5] += 0;
      } else {
        result[0] += 0.6293302540415704;
        result[1] += 0.03579676674364896;
        result[2] += 0.05484988452655889;
        result[3] += 0.08371824480369515;
        result[4] += 0.12528868360277137;
        result[5] += 0.0710161662817552;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
        result[0] += 0;
        result[1] += 0.03389830508474576;
        result[2] += 0.1016949152542373;
        result[3] += 0.1864406779661017;
        result[4] += 0.06779661016949153;
        result[5] += 0.6101694915254238;
      } else {
        result[0] += 0;
        result[1] += 0.05660377358490566;
        result[2] += 0.18867924528301888;
        result[3] += 0.5471698113207547;
        result[4] += 0.018867924528301886;
        result[5] += 0.18867924528301888;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        result[0] += 0.07662835249042144;
        result[1] += 0.0076628352490421435;
        result[2] += 0.6590038314176244;
        result[3] += 0.2183908045977011;
        result[4] += 0.0038314176245210717;
        result[5] += 0.03448275862068965;
      } else {
        result[0] += 0.005706134094151213;
        result[1] += 0;
        result[2] += 0.9400855920114123;
        result[3] += 0.05135520684736091;
        result[4] += 0;
        result[5] += 0.0028530670470756064;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.06827309236947791;
        result[2] += 0.008032128514056224;
        result[3] += 0.04819277108433735;
        result[4] += 0.8112449799196787;
        result[5] += 0.0642570281124498;
      } else {
        result[0] += 0.03442622950819672;
        result[1] += 0.002459016393442623;
        result[2] += 0.018032786885245903;
        result[3] += 0.15491803278688523;
        result[4] += 0.0680327868852459;
        result[5] += 0.7221311475409836;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.001834862385321101;
        result[1] += 0.8532110091743119;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.14495412844036698;
        result[5] += 0;
      } else {
        result[0] += 0.7016393442622951;
        result[1] += 0.02360655737704918;
        result[2] += 0.02098360655737705;
        result[3] += 0.06754098360655737;
        result[4] += 0.08;
        result[5] += 0.1062295081967213;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0.10084033613445378;
        result[2] += 0.04201680672268908;
        result[3] += 0.2605042016806723;
        result[4] += 0.1092436974789916;
        result[5] += 0.48739495798319327;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.37209302325581395;
        result[3] += 0.4728682170542636;
        result[4] += 0;
        result[5] += 0.15503875968992248;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
        result[0] += 0.023696682464454975;
        result[1] += 0;
        result[2] += 0.7440758293838863;
        result[3] += 0.1848341232227488;
        result[4] += 0.002369668246445498;
        result[5] += 0.045023696682464455;
      } else {
        result[0] += 0.008103727714748784;
        result[1] += 0;
        result[2] += 0.9529983792544571;
        result[3] += 0.03403565640194489;
        result[4] += 0;
        result[5] += 0.004862236628849271;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        result[0] += 0;
        result[1] += 0.0038910505836575876;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9494163424124513;
        result[5] += 0.04669260700389105;
      } else {
        result[0] += 0.09302325581395349;
        result[1] += 0.4186046511627907;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.27906976744186046;
        result[5] += 0.20930232558139536;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
        result[0] += 0.0375;
        result[1] += 0.0010416666666666667;
        result[2] += 0.003125;
        result[3] += 0.03333333333333333;
        result[4] += 0.07395833333333333;
        result[5] += 0.8510416666666667;
      } else {
        result[0] += 0.09230769230769231;
        result[1] += 0.03076923076923077;
        result[2] += 0.03076923076923077;
        result[3] += 0.4065934065934066;
        result[4] += 0.046153846153846156;
        result[5] += 0.3934065934065934;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6985677083333334;
        result[1] += 0.047526041666666664;
        result[2] += 0.016927083333333332;
        result[3] += 0.043619791666666664;
        result[4] += 0.13020833333333334;
        result[5] += 0.06315104166666667;
      } else {
        result[0] += 0.0071428571428571435;
        result[1] += 0.9761904761904763;
        result[2] += 0;
        result[3] += 0.009523809523809526;
        result[4] += 0.0071428571428571435;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        result[0] += 0.004291845493562232;
        result[1] += 0.008583690987124463;
        result[2] += 0.4678111587982833;
        result[3] += 0.3776824034334764;
        result[4] += 0;
        result[5] += 0.14163090128755365;
      } else {
        result[0] += 0.024945770065075923;
        result[1] += 0;
        result[2] += 0.8893709327548807;
        result[3] += 0.06290672451193059;
        result[4] += 0.004338394793926247;
        result[5] += 0.01843817787418655;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
        result[0] += 0.004310344827586207;
        result[1] += 0.06896551724137931;
        result[2] += 0;
        result[3] += 0.017241379310344827;
        result[4] += 0.8577586206896551;
        result[5] += 0.05172413793103448;
      } else {
        result[0] += 0.03740648379052369;
        result[1] += 0.006650041562759767;
        result[2] += 0.00914380714879468;
        result[3] += 0.16375727348295926;
        result[4] += 0.06899418121363259;
        result[5] += 0.71404821280133;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        result[0] += 0.006872852233676976;
        result[1] += 0.8127147766323024;
        result[2] += 0;
        result[3] += 0.001718213058419244;
        result[4] += 0.17869415807560138;
        result[5] += 0;
      } else {
        result[0] += 0.7393899204244032;
        result[1] += 0.01856763925729443;
        result[2] += 0.035145888594164454;
        result[3] += 0.07228116710875332;
        result[4] += 0.07360742705570292;
        result[5] += 0.0610079575596817;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)75.5) ) ) {
        result[0] += 0.027522935779816515;
        result[1] += 0.027522935779816515;
        result[2] += 0.01834862385321101;
        result[3] += 0.11009174311926606;
        result[4] += 0.06422018348623854;
        result[5] += 0.7522935779816514;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.2773722627737226;
        result[3] += 0.5036496350364964;
        result[4] += 0.0072992700729927005;
        result[5] += 0.2116788321167883;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)56.5) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.014506769825918761;
        result[1] += 0;
        result[2] += 0.8723404255319149;
        result[3] += 0.08994197292069632;
        result[4] += 0.0009671179883945841;
        result[5] += 0.022243713733075435;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
        result[0] += 0;
        result[1] += 0.08333333333333333;
        result[2] += 0;
        result[3] += 0.08333333333333333;
        result[4] += 0.8333333333333334;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.993006993006993;
        result[2] += 0;
        result[3] += 0.006993006993006993;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
        result[0] += 0.03263888888888889;
        result[1] += 0.011805555555555555;
        result[2] += 0.011805555555555555;
        result[3] += 0.1361111111111111;
        result[4] += 0.19722222222222222;
        result[5] += 0.6104166666666667;
      } else {
        result[0] += 0.5809324253535882;
        result[1] += 0.044525929806181246;
        result[2] += 0.07333682556312206;
        result[3] += 0.09062336301728653;
        result[4] += 0.11000523834468308;
        result[5] += 0.10057621791513882;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.021052631578947368;
        result[3] += 0.2631578947368421;
        result[4] += 0.042105263157894736;
        result[5] += 0.6736842105263158;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.8260869565217391;
        result[3] += 0.043478260869565216;
        result[4] += 0;
        result[5] += 0.13043478260869565;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)98.5) ) ) {
        result[0] += 0;
        result[1] += 0.03571428571428571;
        result[2] += 0.2857142857142857;
        result[3] += 0.6428571428571429;
        result[4] += 0.03571428571428571;
        result[5] += 0;
      } else {
        result[0] += 0.0044943820224719105;
        result[1] += 0.0022471910112359553;
        result[2] += 0.9044943820224719;
        result[3] += 0.07752808988764046;
        result[4] += 0;
        result[5] += 0.011235955056179775;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        result[0] += 0.14985590778097985;
        result[1] += 0;
        result[2] += 0.011527377521613834;
        result[3] += 0;
        result[4] += 0.7204610951008646;
        result[5] += 0.1181556195965418;
      } else {
        result[0] += 0;
        result[1] += 0.007582139848357203;
        result[2] += 0;
        result[3] += 0.15248525695029486;
        result[4] += 0.04296545914069082;
        result[5] += 0.7969671440606572;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)60.5) ) ) {
        result[0] += 0.009652509652509652;
        result[1] += 0.833976833976834;
        result[2] += 0;
        result[3] += 0.011583011583011582;
        result[4] += 0.13706563706563707;
        result[5] += 0.007722007722007722;
      } else {
        result[0] += 0.7047872340425532;
        result[1] += 0.049867021276595744;
        result[2] += 0.036569148936170214;
        result[3] += 0.061835106382978726;
        result[4] += 0.07912234042553191;
        result[5] += 0.0678191489361702;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
        result[0] += 0.01932367149758454;
        result[1] += 0.024154589371980676;
        result[2] += 0.14492753623188406;
        result[3] += 0.5314009661835749;
        result[4] += 0.01932367149758454;
        result[5] += 0.2608695652173913;
      } else {
        result[0] += 0.022471910112359553;
        result[1] += 0;
        result[2] += 0.40449438202247195;
        result[3] += 0.08988764044943821;
        result[4] += 0.12359550561797754;
        result[5] += 0.35955056179775285;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
        result[0] += 0.0045871559633027525;
        result[1] += 0;
        result[2] += 0.6605504587155964;
        result[3] += 0.3211009174311927;
        result[4] += 0;
        result[5] += 0.013761467889908258;
      } else {
        result[0] += 0.01984126984126984;
        result[1] += 0;
        result[2] += 0.951058201058201;
        result[3] += 0.02513227513227513;
        result[4] += 0;
        result[5] += 0.003968253968253968;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        result[0] += 0.13855421686746988;
        result[1] += 0.006024096385542169;
        result[2] += 0.018072289156626505;
        result[3] += 0;
        result[4] += 0.7228915662650602;
        result[5] += 0.1144578313253012;
      } else {
        result[0] += 0;
        result[1] += 0.009157509157509158;
        result[2] += 0.00641025641025641;
        result[3] += 0.152014652014652;
        result[4] += 0.045787545787545784;
        result[5] += 0.7866300366300366;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        result[0] += 0.006711409395973154;
        result[1] += 0.8171140939597316;
        result[2] += 0.015100671140939598;
        result[3] += 0.010067114093959731;
        result[4] += 0.14597315436241612;
        result[5] += 0.0050335570469798654;
      } else {
        result[0] += 0.7255291005291006;
        result[1] += 0.021164021164021163;
        result[2] += 0.021825396825396824;
        result[3] += 0.0582010582010582;
        result[4] += 0.08597883597883597;
        result[5] += 0.0873015873015873;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)74.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.03361344537815126;
        result[3] += 0.33613445378151263;
        result[4] += 0.04201680672268908;
        result[5] += 0.5882352941176471;
      } else {
        result[0] += 0.006329113924050633;
        result[1] += 0.08860759493670886;
        result[2] += 0.27848101265822783;
        result[3] += 0.4240506329113924;
        result[4] += 0.0189873417721519;
        result[5] += 0.18354430379746836;
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7469512195121951;
        result[3] += 0.2225609756097561;
        result[4] += 0;
        result[5] += 0.03048780487804878;
      } else {
        result[0] += 0.0420899854862119;
        result[1] += 0;
        result[2] += 0.9201741654571843;
        result[3] += 0.036284470246734396;
        result[4] += 0.001451378809869376;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)78) ) ) {
        result[0] += 0;
        result[1] += 0.023715415019762848;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9486166007905139;
        result[5] += 0.027667984189723323;
      } else {
        result[0] += 0;
        result[1] += 0.6875;
        result[2] += 0;
        result[3] += 0.1875;
        result[4] += 0.0625;
        result[5] += 0.0625;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
        result[0] += 0.07622868605817452;
        result[1] += 0.003009027081243731;
        result[2] += 0;
        result[3] += 0.04312938816449348;
        result[4] += 0.0712136409227683;
        result[5] += 0.8064192577733199;
      } else {
        result[0] += 0.02030456852791878;
        result[1] += 0;
        result[2] += 0.012690355329949238;
        result[3] += 0.5406091370558376;
        result[4] += 0.005076142131979695;
        result[5] += 0.4213197969543147;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        result[0] += 0.0036764705882352945;
        result[1] += 0.818014705882353;
        result[2] += 0.0036764705882352945;
        result[3] += 0.005514705882352942;
        result[4] += 0.16176470588235298;
        result[5] += 0.007352941176470589;
      } else {
        result[0] += 0.7498228206945429;
        result[1] += 0.03897944720056697;
        result[2] += 0.023387668320340185;
        result[3] += 0.04961020552799433;
        result[4] += 0.08433734939759036;
        result[5] += 0.05386250885896527;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)94.5) ) ) {
        result[0] += 0.018292682926829267;
        result[1] += 0;
        result[2] += 0.3719512195121951;
        result[3] += 0.4329268292682927;
        result[4] += 0.012195121951219513;
        result[5] += 0.16463414634146342;
      } else {
        result[0] += 0.01623686723973257;
        result[1] += 0.0028653295128939827;
        result[2] += 0.8595988538681948;
        result[3] += 0.08787010506208214;
        result[4] += 0;
        result[5] += 0.033428844317096466;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
        result[0] += 0.13953488372093023;
        result[1] += 0.07267441860465117;
        result[2] += 0;
        result[3] += 0.011627906976744186;
        result[4] += 0.6453488372093024;
        result[5] += 0.1308139534883721;
      } else {
        result[0] += 0.004291845493562232;
        result[1] += 0.005150214592274678;
        result[2] += 0.005150214592274678;
        result[3] += 0.16051502145922747;
        result[4] += 0.06866952789699571;
        result[5] += 0.7562231759656652;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)49.5) ) ) {
        result[0] += 0.07511737089201878;
        result[1] += 0.9061032863849765;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.018779342723004695;
        result[5] += 0;
      } else {
        result[0] += 0.569748797434527;
        result[1] += 0.07161945483698556;
        result[2] += 0.0432923570283271;
        result[3] += 0.08177445216461784;
        result[4] += 0.13522180652057722;
        result[5] += 0.09834313201496526;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.22727272727272727;
        result[3] += 0.509090909090909;
        result[4] += 0;
        result[5] += 0.2636363636363636;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7419354838709677;
        result[3] += 0.21774193548387097;
        result[4] += 0;
        result[5] += 0.04032258064516129;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
        result[0] += 0.19047619047619047;
        result[1] += 0;
        result[2] += 0.42857142857142855;
        result[3] += 0.38095238095238093;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.01045751633986928;
        result[1] += 0;
        result[2] += 0.9267973856209151;
        result[3] += 0.05620915032679739;
        result[4] += 0.00130718954248366;
        result[5] += 0.00522875816993464;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        result[0] += 0.1298342541436464;
        result[1] += 0.03591160220994475;
        result[2] += 0;
        result[3] += 0.04419889502762431;
        result[4] += 0.6546961325966851;
        result[5] += 0.13535911602209943;
      } else {
        result[0] += 0.006329113924050633;
        result[1] += 0.0009041591320072332;
        result[2] += 0.0018083182640144665;
        result[3] += 0.15641952983725135;
        result[4] += 0.0433996383363472;
        result[5] += 0.7911392405063291;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)104.5) ) ) {
        result[0] += 0.617770767613039;
        result[1] += 0.054153522607781286;
        result[2] += 0.06729758149316509;
        result[3] += 0.07728706624605679;
        result[4] += 0.12092534174553102;
        result[5] += 0.06256572029442692;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0.08695652173913043;
        result[2] += 0.14492753623188406;
        result[3] += 0.21739130434782608;
        result[4] += 0.10144927536231885;
        result[5] += 0.4492753623188406;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5384615384615384;
        result[3] += 0.38461538461538464;
        result[4] += 0;
        result[5] += 0.07692307692307693;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7696078431372549;
        result[3] += 0.20588235294117646;
        result[4] += 0;
        result[5] += 0.024509803921568627;
      } else {
        result[0] += 0.010057471264367816;
        result[1] += 0;
        result[2] += 0.9367816091954023;
        result[3] += 0.040229885057471264;
        result[4] += 0;
        result[5] += 0.01293103448275862;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
        result[0] += 0.017196904557179708;
        result[1] += 0.0060189165950128975;
        result[2] += 0;
        result[3] += 0.0352536543422184;
        result[4] += 0.2622527944969905;
        result[5] += 0.6792777300085985;
      } else {
        result[0] += 0.04790419161676647;
        result[1] += 0.0718562874251497;
        result[2] += 0.014970059880239521;
        result[3] += 0.4491017964071856;
        result[4] += 0.10479041916167664;
        result[5] += 0.31137724550898205;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)56.5) ) ) {
        result[0] += 0;
        result[1] += 0.9425051334702259;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.057494866529774126;
        result[5] += 0;
      } else {
        result[0] += 0.6066017316017316;
        result[1] += 0.040584415584415584;
        result[2] += 0.08387445887445888;
        result[3] += 0.09090909090909091;
        result[4] += 0.08387445887445888;
        result[5] += 0.09415584415584416;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
        result[0] += 0.02912621359223301;
        result[1] += 0;
        result[2] += 0.08737864077669903;
        result[3] += 0.2912621359223301;
        result[4] += 0.07766990291262135;
        result[5] += 0.5145631067961165;
      } else {
        result[0] += 0;
        result[1] += 0.02702702702702703;
        result[2] += 0.6216216216216216;
        result[3] += 0.25675675675675674;
        result[4] += 0;
        result[5] += 0.0945945945945946;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)86.5) ) ) {
        result[0] += 0.016286644951140065;
        result[1] += 0;
        result[2] += 0.7850162866449512;
        result[3] += 0.18241042345276873;
        result[4] += 0.006514657980456026;
        result[5] += 0.009771986970684038;
      } else {
        result[0] += 0.00196078431372549;
        result[1] += 0;
        result[2] += 0.9627450980392157;
        result[3] += 0.029411764705882353;
        result[4] += 0;
        result[5] += 0.0058823529411764705;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)93.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.00821917808219178;
        result[1] += 0.06301369863013699;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8547945205479452;
        result[5] += 0.07397260273972603;
      } else {
        result[0] += 0.10746064339493498;
        result[1] += 0.002053388090349076;
        result[2] += 0.01574264202600958;
        result[3] += 0.1293634496919918;
        result[4] += 0.07255304585900069;
        result[5] += 0.6728268309377139;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        result[0] += 0.0022522522522522527;
        result[1] += 0.9256756756756758;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.06756756756756759;
        result[5] += 0.004504504504504505;
      } else {
        result[0] += 0.7310077519379845;
        result[1] += 0.047286821705426356;
        result[2] += 0.056589147286821705;
        result[3] += 0.07286821705426356;
        result[4] += 0.04263565891472868;
        result[5] += 0.04961240310077519;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)94.5) ) ) {
        result[0] += 0;
        result[1] += 0.12941176470588237;
        result[2] += 0.041176470588235294;
        result[3] += 0.27647058823529413;
        result[4] += 0.07058823529411765;
        result[5] += 0.4823529411764706;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.4409448818897638;
        result[3] += 0.31496062992125984;
        result[4] += 0;
        result[5] += 0.2440944881889764;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
        result[0] += 0.027027027027027032;
        result[1] += 0;
        result[2] += 0.7837837837837839;
        result[3] += 0.16839916839916844;
        result[4] += 0;
        result[5] += 0.020790020790020795;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9733606557377049;
        result[3] += 0.020491803278688523;
        result[4] += 0;
        result[5] += 0.006147540983606557;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)71.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        result[0] += 0.011538461538461539;
        result[1] += 0.06923076923076923;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8269230769230769;
        result[5] += 0.09230769230769231;
      } else {
        result[0] += 0.022577610536218252;
        result[1] += 0.0009407337723424271;
        result[2] += 0.010348071495766699;
        result[3] += 0.14111006585136407;
        result[4] += 0.043273753527751646;
        result[5] += 0.7817497648165569;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)51.5) ) ) {
        result[0] += 0.0021598272138228943;
        result[1] += 0.9546436285097192;
        result[2] += 0;
        result[3] += 0.004319654427645789;
        result[4] += 0.0367170626349892;
        result[5] += 0.0021598272138228943;
      } else {
        result[0] += 0.5870967741935484;
        result[1] += 0.03440860215053764;
        result[2] += 0.05483870967741937;
        result[3] += 0.11236559139784949;
        result[4] += 0.12580645161290324;
        result[5] += 0.08548387096774195;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)112.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.046153846153846156;
        result[3] += 0.2846153846153846;
        result[4] += 0.038461538461538464;
        result[5] += 0.6307692307692307;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6521739130434783;
        result[3] += 0.21739130434782608;
        result[4] += 0;
        result[5] += 0.13043478260869565;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        result[0] += 0.00574712643678161;
        result[1] += 0.04597701149425288;
        result[2] += 0.5229885057471265;
        result[3] += 0.33333333333333337;
        result[4] += 0;
        result[5] += 0.09195402298850576;
      } else {
        result[0] += 0.012895662368112544;
        result[1] += 0.004689331770222743;
        result[2] += 0.9273153575615475;
        result[3] += 0.04572098475967175;
        result[4] += 0.0011723329425556857;
        result[5] += 0.008206330597889801;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        result[0] += 0.012295081967213115;
        result[1] += 0.00819672131147541;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9180327868852459;
        result[5] += 0.06147540983606557;
      } else {
        result[0] += 0.03709810387469085;
        result[1] += 0.00494641384995878;
        result[2] += 0.009068425391591096;
        result[3] += 0.17230008244023085;
        result[4] += 0.06924979389942292;
        result[5] += 0.7073371805441055;
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)104.5) ) ) {
        result[0] += 0.6174863387978142;
        result[1] += 0.04918032786885246;
        result[2] += 0.06120218579234973;
        result[3] += 0.08196721311475409;
        result[4] += 0.11147540983606558;
        result[5] += 0.07868852459016394;
      } else {
        result[0] += 0.0023529411764705885;
        result[1] += 0.9952941176470589;
        result[2] += 0;
        result[3] += 0.0023529411764705885;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.08196721311475409;
        result[3] += 0.2786885245901639;
        result[4] += 0.04918032786885246;
        result[5] += 0.5901639344262295;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.43478260869565216;
        result[3] += 0.4782608695652174;
        result[4] += 0;
        result[5] += 0.08695652173913043;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0.03508771929824562;
        result[2] += 0.46491228070175444;
        result[3] += 0.33333333333333337;
        result[4] += 0;
        result[5] += 0.16666666666666669;
      } else {
        result[0] += 0.02292576419213974;
        result[1] += 0.007641921397379912;
        result[2] += 0.8973799126637555;
        result[3] += 0.06550218340611354;
        result[4] += 0.001091703056768559;
        result[5] += 0.0054585152838427945;
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)100) ) ) {
        result[0] += 0.006666666666666667;
        result[1] += 0.0033333333333333335;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.98;
        result[5] += 0.01;
      } else {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)59.5) ) ) {
        result[0] += 0.7191011235955057;
        result[1] += 0.03370786516853933;
        result[2] += 0;
        result[3] += 0.02808988764044944;
        result[4] += 0.11797752808988765;
        result[5] += 0.10112359550561799;
      } else {
        result[0] += 0.018596787827557058;
        result[1] += 0.0033812341504649195;
        result[2] += 0.0033812341504649195;
        result[3] += 0.11665257819103973;
        result[4] += 0.06339814032121724;
        result[5] += 0.7945900253592562;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)55.5) ) ) {
        result[0] += 0;
        result[1] += 0.9664570230607966;
        result[2] += 0;
        result[3] += 0.0020964360587002098;
        result[4] += 0.031446540880503145;
        result[5] += 0;
      } else {
        result[0] += 0.6698113207547169;
        result[1] += 0.04784366576819407;
        result[2] += 0.03369272237196765;
        result[3] += 0.0876010781671159;
        result[4] += 0.09164420485175202;
        result[5] += 0.06940700808625337;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0.004291845493562233;
        result[1] += 0.038626609442060096;
        result[2] += 0.313304721030043;
        result[3] += 0.4206008583690988;
        result[4] += 0.025751072961373394;
        result[5] += 0.19742489270386268;
      } else {
        result[0] += 0.01559251559251559;
        result[1] += 0;
        result[2] += 0.8898128898128896;
        result[3] += 0.08212058212058211;
        result[4] += 0.003118503118503118;
        result[5] += 0.009355509355509354;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        result[0] += 0.0037313432835820895;
        result[1] += 0.007462686567164179;
        result[2] += 0;
        result[3] += 0.0037313432835820895;
        result[4] += 0.8283582089552238;
        result[5] += 0.15671641791044777;
      } else {
        result[0] += 0.03415409054805401;
        result[1] += 0.013502779984114376;
        result[2] += 0.013502779984114376;
        result[3] += 0.15091342335186655;
        result[4] += 0.03177124702144559;
        result[5] += 0.756155679110405;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
        result[0] += 0.0036036036036036037;
        result[1] += 0.8126126126126126;
        result[2] += 0.0036036036036036037;
        result[3] += 0.018018018018018018;
        result[4] += 0.15315315315315314;
        result[5] += 0.009009009009009009;
      } else {
        result[0] += 0.7317725752508362;
        result[1] += 0.03076923076923077;
        result[2] += 0.024749163879598662;
        result[3] += 0.06020066889632107;
        result[4] += 0.0903010033444816;
        result[5] += 0.06220735785953177;
      }
    }
  } else {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)99) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)84.5) ) ) {
        result[0] += 0.008264462809917356;
        result[1] += 0;
        result[2] += 0.2066115702479339;
        result[3] += 0.14049586776859505;
        result[4] += 0.14049586776859505;
        result[5] += 0.5041322314049587;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.2014388489208633;
        result[3] += 0.6618705035971223;
        result[4] += 0;
        result[5] += 0.1366906474820144;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        result[0] += 0;
        result[1] += 0.06451612903225806;
        result[2] += 0.3978494623655914;
        result[3] += 0.3548387096774194;
        result[4] += 0;
        result[5] += 0.1827956989247312;
      } else {
        result[0] += 0.02455357142857143;
        result[1] += 0.004464285714285715;
        result[2] += 0.8962053571428572;
        result[3] += 0.06696428571428573;
        result[4] += 0;
        result[5] += 0.007812500000000002;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
        result[0] += 0.1423841059602649;
        result[1] += 0.006622516556291391;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7682119205298014;
        result[5] += 0.08278145695364239;
      } else {
        result[0] += 0.0008071025020177562;
        result[1] += 0.016142050040355124;
        result[2] += 0.008071025020177562;
        result[3] += 0.15334947538337368;
        result[4] += 0.05811138014527845;
        result[5] += 0.7635189669087974;
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)104.5) ) ) {
        result[0] += 0.6293302540415705;
        result[1] += 0.043302540415704395;
        result[2] += 0.05311778290993072;
        result[3] += 0.08083140877598154;
        result[4] += 0.1212471131639723;
        result[5] += 0.07217090069284066;
      } else {
        result[0] += 0.004545454545454545;
        result[1] += 0.9636363636363636;
        result[2] += 0.0022727272727272726;
        result[3] += 0.006818181818181818;
        result[4] += 0.015909090909090907;
        result[5] += 0.006818181818181818;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)75.5) ) ) {
        result[0] += 0.02;
        result[1] += 0.12;
        result[2] += 0.12;
        result[3] += 0.06;
        result[4] += 0.16;
        result[5] += 0.52;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.45;
        result[3] += 0.45;
        result[4] += 0;
        result[5] += 0.1;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)70.5) ) ) {
        result[0] += 0.3333333333333333;
        result[1] += 0.6666666666666666;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.007125890736342043;
        result[1] += 0;
        result[2] += 0.9097387173396675;
        result[3] += 0.060570071258907364;
        result[4] += 0.007125890736342043;
        result[5] += 0.015439429928741092;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)77) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)89.5) ) ) {
        result[0] += 0;
        result[1] += 0.004405286343612335;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9779735682819384;
        result[5] += 0.01762114537444934;
      } else {
        result[0] += 0;
        result[1] += 0.42857142857142855;
        result[2] += 0.42857142857142855;
        result[3] += 0;
        result[4] += 0.14285714285714285;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
        result[0] += 0.948905109489051;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.051094890510948905;
        result[5] += 0;
      } else {
        result[0] += 0.004857737682165163;
        result[1] += 0.006939625260235947;
        result[2] += 0.01457321304649549;
        result[3] += 0.1970853573907009;
        result[4] += 0.07425399028452463;
        result[5] += 0.7022900763358778;
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
        result[0] += 0.0036101083032490976;
        result[1] += 0.855595667870036;
        result[2] += 0;
        result[3] += 0.0036101083032490976;
        result[4] += 0.13357400722021662;
        result[5] += 0.0036101083032490976;
      } else {
        result[0] += 0.7990115321252059;
        result[1] += 0.039538714991762765;
        result[2] += 0.032948929159802305;
        result[3] += 0.03789126853377265;
        result[4] += 0.051894563426688634;
        result[5] += 0.03871499176276771;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        result[0] += 0.0091324200913242;
        result[1] += 0.0365296803652968;
        result[2] += 0.3744292237442922;
        result[3] += 0.365296803652968;
        result[4] += 0.0547945205479452;
        result[5] += 0.1598173515981735;
      } else {
        result[0] += 0.03992210321324245;
        result[1] += 0.011684518013631937;
        result[2] += 0.8558909444985394;
        result[3] += 0.0759493670886076;
        result[4] += 0.0029211295034079843;
        result[5] += 0.013631937682570594;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.2620545073375262;
        result[1] += 0.014675052410901468;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.6331236897274634;
        result[5] += 0.09014675052410902;
      } else {
        result[0] += 0.006029285099052541;
        result[1] += 0.0034453057708871662;
        result[2] += 0.004306632213608958;
        result[3] += 0.11800172265288544;
        result[4] += 0.06718346253229975;
        result[5] += 0.8010335917312662;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
        result[0] += 0;
        result[1] += 0.9109461966604824;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.08905380333951762;
        result[5] += 0;
      } else {
        result[0] += 0.6891711229946524;
        result[1] += 0.014037433155080214;
        result[2] += 0.053475935828877004;
        result[3] += 0.10227272727272728;
        result[4] += 0.051470588235294115;
        result[5] += 0.08957219251336898;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
        result[0] += 0.0547945205479452;
        result[1] += 0.0136986301369863;
        result[2] += 0.1232876712328767;
        result[3] += 0.0958904109589041;
        result[4] += 0.0547945205479452;
        result[5] += 0.6575342465753424;
      } else {
        result[0] += 0.007042253521126761;
        result[1] += 0.056338028169014086;
        result[2] += 0.33098591549295775;
        result[3] += 0.4295774647887324;
        result[4] += 0;
        result[5] += 0.176056338028169;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
        result[0] += 0.016203703703703703;
        result[1] += 0;
        result[2] += 0.7962962962962963;
        result[3] += 0.17592592592592593;
        result[4] += 0;
        result[5] += 0.011574074074074073;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9782608695652174;
        result[3] += 0.021739130434782608;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)88.5) ) ) {
        result[0] += 0.0031645569620253164;
        result[1] += 0.05379746835443038;
        result[2] += 0;
        result[3] += 0.0031645569620253164;
        result[4] += 0.9050632911392406;
        result[5] += 0.03481012658227848;
      } else {
        result[0] += 0.004040404040404041;
        result[1] += 0.9232323232323233;
        result[2] += 0;
        result[3] += 0.014141414141414144;
        result[4] += 0.04444444444444445;
        result[5] += 0.014141414141414144;
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
        result[0] += 0.02418682235195997;
        result[1] += 0.0050041701417848205;
        result[2] += 0.013344453711426188;
        result[3] += 0.1609674728940784;
        result[4] += 0.06755629691409508;
        result[5] += 0.7289407839866555;
      } else {
        result[0] += 0.6545454545454545;
        result[1] += 0.030113636363636363;
        result[2] += 0.060227272727272727;
        result[3] += 0.09545454545454546;
        result[4] += 0.07556818181818181;
        result[5] += 0.08409090909090909;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)64.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 1;
      } else {
        result[0] += 0.004694835680751174;
        result[1] += 0.018779342723004695;
        result[2] += 0.48826291079812206;
        result[3] += 0.3615023474178404;
        result[4] += 0.009389671361502348;
        result[5] += 0.11737089201877934;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
        result[0] += 0.25;
        result[1] += 0.6666666666666666;
        result[2] += 0;
        result[3] += 0.08333333333333333;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.01107011070110701;
        result[1] += 0;
        result[2] += 0.923739237392374;
        result[3] += 0.056580565805658053;
        result[4] += 0.0012300123001230013;
        result[5] += 0.007380073800738007;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.07746478873239436;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9190140845070423;
        result[5] += 0.0035211267605633804;
      } else {
        result[0] += 0.04656669297553275;
        result[1] += 0.007103393843725336;
        result[2] += 0.017363851617995266;
        result[3] += 0.1681136543014996;
        result[4] += 0.05445935280189424;
        result[5] += 0.7063930544593529;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        result[0] += 0.0074487895716946;
        result[1] += 0.9124767225325885;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.08007448789571694;
        result[5] += 0;
      } else {
        result[0] += 0.6512048192771084;
        result[1] += 0.02891566265060241;
        result[2] += 0.0572289156626506;
        result[3] += 0.07590361445783132;
        result[4] += 0.08132530120481928;
        result[5] += 0.10542168674698796;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)87.5) ) ) {
        result[0] += 0.029411764705882353;
        result[1] += 0;
        result[2] += 0.23529411764705882;
        result[3] += 0.30392156862745096;
        result[4] += 0.00980392156862745;
        result[5] += 0.4215686274509804;
      } else {
        result[0] += 0.0625;
        result[1] += 0.09375;
        result[2] += 0.6875;
        result[3] += 0;
        result[4] += 0.15625;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6263736263736264;
        result[3] += 0.3626373626373626;
        result[4] += 0;
        result[5] += 0.01098901098901099;
      } else {
        result[0] += 0.0035169988276670576;
        result[1] += 0;
        result[2] += 0.936694021101993;
        result[3] += 0.05158264947245018;
        result[4] += 0;
        result[5] += 0.008206330597889801;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0.004032258064516129;
        result[1] += 0.06048387096774194;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9112903225806451;
        result[5] += 0.024193548387096774;
      } else {
        result[0] += 0.04215116279069767;
        result[1] += 0.015261627906976744;
        result[2] += 0.010901162790697675;
        result[3] += 0.17805232558139536;
        result[4] += 0.04433139534883721;
        result[5] += 0.7093023255813954;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)104.5) ) ) {
        result[0] += 0.5981100611450806;
        result[1] += 0.06003335186214564;
        result[2] += 0.07392996108949416;
        result[3] += 0.07837687604224569;
        result[4] += 0.1150639244024458;
        result[5] += 0.0744858254585881;
      } else {
        result[0] += 0;
        result[1] += 0.989041095890411;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.010958904109589041;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.22077922077922077;
        result[3] += 0.2987012987012987;
        result[4] += 0.012987012987012988;
        result[5] += 0.4675324675324675;
      } else {
        result[0] += 0;
        result[1] += 0.06832298136645962;
        result[2] += 0.670807453416149;
        result[3] += 0.21118012422360244;
        result[4] += 0;
        result[5] += 0.0496894409937888;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
        result[0] += 0.06060606060606061;
        result[1] += 0.005050505050505051;
        result[2] += 0.7474747474747475;
        result[3] += 0.15656565656565657;
        result[4] += 0.005050505050505051;
        result[5] += 0.025252525252525252;
      } else {
        result[0] += 0.0016611295681063123;
        result[1] += 0;
        result[2] += 0.9667774086378738;
        result[3] += 0.024916943521594685;
        result[4] += 0;
        result[5] += 0.006644518272425249;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.97165991902834;
        result[5] += 0.02834008097165992;
      } else {
        result[0] += 0.030257186081694403;
        result[1] += 0.0037821482602118004;
        result[2] += 0.0037821482602118004;
        result[3] += 0.1573373676248109;
        result[4] += 0.04387291981845688;
        result[5] += 0.7609682299546142;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0.9829424307036247;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.017057569296375266;
        result[5] += 0;
      } else {
        result[0] += 0.6261467889908258;
        result[1] += 0.03325688073394496;
        result[2] += 0.06307339449541285;
        result[3] += 0.09346330275229359;
        result[4] += 0.10837155963302754;
        result[5] += 0.07568807339449543;
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
        result[0] += 0;
        result[1] += 0.018518518518518517;
        result[2] += 0.037037037037037035;
        result[3] += 0.2777777777777778;
        result[4] += 0.07407407407407407;
        result[5] += 0.5925925925925926;
      } else {
        result[0] += 0.07936507936507936;
        result[1] += 0.12698412698412698;
        result[2] += 0.47619047619047616;
        result[3] += 0.06349206349206349;
        result[4] += 0;
        result[5] += 0.25396825396825395;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97.5) ) ) {
        result[0] += 0.007874015748031498;
        result[1] += 0;
        result[2] += 0.5669291338582678;
        result[3] += 0.3464566929133859;
        result[4] += 0;
        result[5] += 0.07874015748031497;
      } else {
        result[0] += 0.01;
        result[1] += 0;
        result[2] += 0.94125;
        result[3] += 0.045;
        result[4] += 0;
        result[5] += 0.00375;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        result[0] += 0.01327433628318584;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.008849557522123894;
        result[4] += 0.9646017699115044;
        result[5] += 0.01327433628318584;
      } else {
        result[0] += 0.5343915343915344;
        result[1] += 0.037037037037037035;
        result[2] += 0.010582010582010581;
        result[3] += 0.015873015873015872;
        result[4] += 0.19576719576719576;
        result[5] += 0.20634920634920634;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
        result[0] += 0;
        result[1] += 0.0022026431718061676;
        result[2] += 0;
        result[3] += 0.03524229074889868;
        result[4] += 0.09030837004405286;
        result[5] += 0.8722466960352423;
      } else {
        result[0] += 0.0022522522522522522;
        result[1] += 0.0045045045045045045;
        result[2] += 0.03153153153153153;
        result[3] += 0.4864864864864865;
        result[4] += 0.033783783783783786;
        result[5] += 0.44144144144144143;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)57.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
        result[0] += 0;
        result[1] += 0.17142857142857143;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8285714285714286;
        result[5] += 0;
      } else {
        result[0] += 0.002036659877800407;
        result[1] += 0.9918533604887984;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.006109979633401222;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
        result[0] += 0.7689969604863222;
        result[1] += 0.034954407294832825;
        result[2] += 0.029635258358662615;
        result[3] += 0.03115501519756839;
        result[4] += 0.10258358662613981;
        result[5] += 0.03267477203647416;
      } else {
        result[0] += 0.016433853738701727;
        result[1] += 0.009038619556285949;
        result[2] += 0.7781429745275267;
        result[3] += 0.1199671322925226;
        result[4] += 0.007395234182415777;
        result[5] += 0.06902218570254724;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.016597510373443983;
        result[2] += 0;
        result[3] += 0.03319502074688797;
        result[4] += 0.8921161825726142;
        result[5] += 0.058091286307053944;
      } else {
        result[0] += 0.0426731078904992;
        result[1] += 0.0008051529790660225;
        result[2] += 0.004025764895330112;
        result[3] += 0.14251207729468598;
        result[4] += 0.06763285024154589;
        result[5] += 0.7423510466988728;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)53.5) ) ) {
        result[0] += 0.0043859649122807015;
        result[1] += 0.9583333333333334;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.03728070175438596;
        result[5] += 0;
      } else {
        result[0] += 0.6131549609810479;
        result[1] += 0.03678929765886288;
        result[2] += 0.06967670011148272;
        result[3] += 0.09531772575250837;
        result[4] += 0.1164994425863991;
        result[5] += 0.06856187290969899;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)90.5) ) ) {
        result[0] += 0.015873015873015872;
        result[1] += 0.015873015873015872;
        result[2] += 0.09523809523809523;
        result[3] += 0.031746031746031744;
        result[4] += 0.09523809523809523;
        result[5] += 0.746031746031746;
      } else {
        result[0] += 0.06622516556291391;
        result[1] += 0.019867549668874173;
        result[2] += 0.4304635761589404;
        result[3] += 0.39072847682119205;
        result[4] += 0;
        result[5] += 0.09271523178807947;
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
        result[0] += 0.006369426751592357;
        result[1] += 0;
        result[2] += 0.6878980891719745;
        result[3] += 0.2929936305732484;
        result[4] += 0;
        result[5] += 0.012738853503184714;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9501385041551247;
        result[3] += 0.04155124653739612;
        result[4] += 0;
        result[5] += 0.008310249307479225;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
        result[0] += 0.15068493150684933;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.0034246575342465756;
        result[4] += 0.7465753424657535;
        result[5] += 0.0993150684931507;
      } else {
        result[0] += 0;
        result[1] += 0.00427715996578272;
        result[2] += 0.0025662959794696323;
        result[3] += 0.15739948674080412;
        result[4] += 0.06501283147989735;
        result[5] += 0.7707442258340462;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)50) ) ) {
        result[0] += 0.006147540983606557;
        result[1] += 0.9651639344262295;
        result[2] += 0.006147540983606557;
        result[3] += 0.0020491803278688526;
        result[4] += 0.020491803278688523;
        result[5] += 0;
      } else {
        result[0] += 0.6328963051251489;
        result[1] += 0.04707985697258641;
        result[2] += 0.05363528009535161;
        result[3] += 0.07866507747318235;
        result[4] += 0.11144219308700834;
        result[5] += 0.07628128724672228;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.11267605633802817;
        result[3] += 0.2112676056338028;
        result[4] += 0.08450704225352113;
        result[5] += 0.5915492957746479;
      } else {
        result[0] += 0.04950495049504951;
        result[1] += 0.0462046204620462;
        result[2] += 0.49174917491749176;
        result[3] += 0.2376237623762376;
        result[4] += 0.026402640264026403;
        result[5] += 0.1485148514851485;
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)85.5) ) ) {
        result[0] += 0.0035211267605633804;
        result[1] += 0;
        result[2] += 0.8345070422535211;
        result[3] += 0.14788732394366197;
        result[4] += 0.0035211267605633804;
        result[5] += 0.01056338028169014;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.966728280961183;
        result[3] += 0.033271719038817;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.09473684210526317;
        result[2] += 0;
        result[3] += 0.003508771929824562;
        result[4] += 0.8421052631578948;
        result[5] += 0.05964912280701755;
      } else {
        result[0] += 0.03605015673981191;
        result[1] += 0.003134796238244514;
        result[2] += 0.011755485893416929;
        result[3] += 0.15203761755485892;
        result[4] += 0.07288401253918496;
        result[5] += 0.7241379310344828;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        result[0] += 0.004484304932735426;
        result[1] += 0.9798206278026906;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.01569506726457399;
        result[5] += 0;
      } else {
        result[0] += 0.6486332574031891;
        result[1] += 0.03644646924829157;
        result[2] += 0.05922551252847381;
        result[3] += 0.0746013667425968;
        result[4] += 0.10136674259681093;
        result[5] += 0.07972665148063782;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.10810810810810811;
        result[4] += 0.10810810810810811;
        result[5] += 0.7837837837837838;
      } else {
        result[0] += 0.11904761904761905;
        result[1] += 0.038095238095238106;
        result[2] += 0.4285714285714286;
        result[3] += 0.28571428571428575;
        result[4] += 0.014285714285714287;
        result[5] += 0.1142857142857143;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
        result[0] += 0;
        result[1] += 0.07142857142857142;
        result[2] += 0.5;
        result[3] += 0.16666666666666666;
        result[4] += 0;
        result[5] += 0.2619047619047619;
      } else {
        result[0] += 0.007751937984496124;
        result[1] += 0;
        result[2] += 0.9302325581395349;
        result[3] += 0.060723514211886306;
        result[4] += 0;
        result[5] += 0.0012919896640826874;
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
