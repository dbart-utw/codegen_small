
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
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        result[0] += 0.013513513513513514;
        result[1] += 0.060810810810810814;
        result[2] += 0;
        result[3] += 0.006756756756756757;
        result[4] += 0.8344594594594594;
        result[5] += 0.08445945945945946;
      } else {
        result[0] += 0.02698282910874898;
        result[1] += 0.01553556827473426;
        result[2] += 0.006541291905151268;
        result[3] += 0.17416189697465248;
        result[4] += 0.050695012264922325;
        result[5] += 0.7260834014717906;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        result[0] += 0.0033613445378151263;
        result[1] += 0.8117647058823529;
        result[2] += 0.0016806722689075631;
        result[3] += 0.010084033613445379;
        result[4] += 0.17142857142857143;
        result[5] += 0.0016806722689075631;
      } else {
        result[0] += 0.6436430317848412;
        result[1] += 0.01528117359413203;
        result[2] += 0.058068459657701715;
        result[3] += 0.10513447432762837;
        result[4] += 0.0880195599022005;
        result[5] += 0.08985330073349634;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)98.5) ) ) {
        result[0] += 0;
        result[1] += 0.02272727272727273;
        result[2] += 0.13636363636363638;
        result[3] += 0.5227272727272728;
        result[4] += 0.04545454545454546;
        result[5] += 0.27272727272727276;
      } else {
        result[0] += 0.11494252873563218;
        result[1] += 0.034482758620689655;
        result[2] += 0.6379310344827587;
        result[3] += 0.09770114942528736;
        result[4] += 0.011494252873563218;
        result[5] += 0.10344827586206896;
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.8289473684210527;
        result[3] += 0.15350877192982457;
        result[4] += 0;
        result[5] += 0.017543859649122806;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9607508532423209;
        result[3] += 0.027303754266211608;
        result[4] += 0;
        result[5] += 0.01194539249146758;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        result[0] += 0.011527377521613834;
        result[1] += 0.04322766570605188;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8530259365994237;
        result[5] += 0.09221902017291067;
      } else {
        result[0] += 0.04062229904926534;
        result[1] += 0.006050129645635264;
        result[2] += 0;
        result[3] += 0.1616248919619706;
        result[4] += 0.06395851339671564;
        result[5] += 0.7277441659464131;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        result[0] += 0.002386634844868735;
        result[1] += 0.9713603818615751;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.026252983293556086;
        result[5] += 0;
      } else {
        result[0] += 0.5902276513048307;
        result[1] += 0.03498056635202665;
        result[2] += 0.07107162687395892;
        result[3] += 0.0977234869516935;
        result[4] += 0.10882842865074958;
        result[5] += 0.0971682398667407;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)83.5) ) ) {
        result[0] += 0;
        result[1] += 0.1044776119402985;
        result[2] += 0.029850746268656716;
        result[3] += 0.04477611940298507;
        result[4] += 0.13432835820895522;
        result[5] += 0.6865671641791045;
      } else {
        result[0] += 0.008;
        result[1] += 0;
        result[2] += 0.44;
        result[3] += 0.464;
        result[4] += 0;
        result[5] += 0.088;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
        result[0] += 0.29545454545454547;
        result[1] += 0.11363636363636363;
        result[2] += 0.45454545454545453;
        result[3] += 0.022727272727272728;
        result[4] += 0.045454545454545456;
        result[5] += 0.06818181818181818;
      } else {
        result[0] += 0.0011547344110854503;
        result[1] += 0;
        result[2] += 0.9214780600461894;
        result[3] += 0.06581986143187067;
        result[4] += 0;
        result[5] += 0.011547344110854504;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
        result[0] += 0.19330855018587365;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7509293680297399;
        result[5] += 0.05576208178438662;
      } else {
        result[0] += 0;
        result[1] += 0.008384146341463415;
        result[2] += 0.0022865853658536584;
        result[3] += 0.1638719512195122;
        result[4] += 0.07926829268292683;
        result[5] += 0.7461890243902439;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        result[0] += 0;
        result[1] += 0.8345323741007195;
        result[2] += 0;
        result[3] += 0.008992805755395683;
        result[4] += 0.1528776978417266;
        result[5] += 0.0035971223021582736;
      } else {
        result[0] += 0.6734049273531271;
        result[1] += 0.0397978521794062;
        result[2] += 0.052432090966519275;
        result[3] += 0.08275426405559067;
        result[4] += 0.0795957043588124;
        result[5] += 0.07201516108654454;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)85) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.2857142857142857;
        result[3] += 0.5494505494505495;
        result[4] += 0;
        result[5] += 0.16483516483516483;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7647058823529411;
        result[3] += 0.08823529411764706;
        result[4] += 0;
        result[5] += 0.14705882352941177;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)94.5) ) ) {
        result[0] += 0.14705882352941177;
        result[1] += 0;
        result[2] += 0.4117647058823529;
        result[3] += 0.38235294117647056;
        result[4] += 0.029411764705882353;
        result[5] += 0.029411764705882353;
      } else {
        result[0] += 0.00547645125958379;
        result[1] += 0;
        result[2] += 0.9441401971522454;
        result[3] += 0.04928806133625411;
        result[4] += 0;
        result[5] += 0.001095290251916758;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
        result[0] += 0.22121896162528218;
        result[1] += 0.029345372460496615;
        result[2] += 0.002257336343115124;
        result[3] += 0.004514672686230248;
        result[4] += 0.6772009029345373;
        result[5] += 0.0654627539503386;
      } else {
        result[0] += 0.00267379679144385;
        result[1] += 0.011586452762923352;
        result[2] += 0.020499108734402853;
        result[3] += 0.10071301247771836;
        result[4] += 0.08199643493761141;
        result[5] += 0.7825311942959001;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)54.5) ) ) {
        result[0] += 0.01098901098901099;
        result[1] += 0.9604395604395605;
        result[2] += 0;
        result[3] += 0.004395604395604396;
        result[4] += 0.024175824175824177;
        result[5] += 0;
      } else {
        result[0] += 0.5925704014379868;
        result[1] += 0.035949670461354104;
        result[2] += 0.05991611743559017;
        result[3] += 0.1384062312762133;
        result[4] += 0.06411024565608149;
        result[5] += 0.10904733373277412;
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
        result[0] += 0;
        result[1] += 0.02702702702702703;
        result[2] += 0;
        result[3] += 0.13513513513513514;
        result[4] += 0.16216216216216217;
        result[5] += 0.6756756756756757;
      } else {
        result[0] += 0.04285714285714286;
        result[1] += 0;
        result[2] += 0.37142857142857144;
        result[3] += 0.5571428571428572;
        result[4] += 0;
        result[5] += 0.02857142857142857;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
        result[0] += 0.05962059620596206;
        result[1] += 0.016260162601626018;
        result[2] += 0.6747967479674797;
        result[3] += 0.15447154471544716;
        result[4] += 0;
        result[5] += 0.0948509485094851;
      } else {
        result[0] += 0;
        result[1] += 0.0015128593040847202;
        result[2] += 0.9712556732223904;
        result[3] += 0.018154311649016642;
        result[4] += 0;
        result[5] += 0.009077155824508321;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)99) ) ) {
        result[0] += 0;
        result[1] += 0.5333333333333333;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.4666666666666667;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.9900249376558603;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.00997506234413965;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
        result[0] += 0.05857230018303844;
        result[1] += 0.007321537522879805;
        result[2] += 0.0018303843807199512;
        result[3] += 0.1513117754728493;
        result[4] += 0.19646125686394142;
        result[5] += 0.5845027455765711;
      } else {
        result[0] += 0.6141592920353982;
        result[1] += 0.06312684365781711;
        result[2] += 0.05604719764011799;
        result[3] += 0.08672566371681416;
        result[4] += 0.11563421828908554;
        result[5] += 0.06430678466076696;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)84.5) ) ) {
        result[0] += 0;
        result[1] += 0.029126213592233014;
        result[2] += 0.24271844660194178;
        result[3] += 0.41747572815533984;
        result[4] += 0.01941747572815534;
        result[5] += 0.29126213592233013;
      } else {
        result[0] += 0;
        result[1] += 0.07407407407407407;
        result[2] += 0.7777777777777778;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.14814814814814814;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)88.5) ) ) {
        result[0] += 0.175;
        result[1] += 0;
        result[2] += 0.55;
        result[3] += 0.025;
        result[4] += 0;
        result[5] += 0.25;
      } else {
        result[0] += 0.0011037527593818985;
        result[1] += 0;
        result[2] += 0.9514348785871964;
        result[3] += 0.04304635761589404;
        result[4] += 0;
        result[5] += 0.004415011037527594;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        result[0] += 0.031141868512110725;
        result[1] += 0.02422145328719723;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8339100346020761;
        result[5] += 0.11072664359861592;
      } else {
        result[0] += 0.0328;
        result[1] += 0.0104;
        result[2] += 0.004;
        result[3] += 0.1576;
        result[4] += 0.0504;
        result[5] += 0.7448;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        result[0] += 0.010830324909747292;
        result[1] += 0.851985559566787;
        result[2] += 0;
        result[3] += 0.0018050541516245488;
        result[4] += 0.13537906137184116;
        result[5] += 0;
      } else {
        result[0] += 0.6510663507109005;
        result[1] += 0.03672985781990521;
        result[2] += 0.07227488151658767;
        result[3] += 0.09063981042654029;
        result[4] += 0.07997630331753554;
        result[5] += 0.0693127962085308;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)83.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.12903225806451613;
        result[3] += 0;
        result[4] += 0.03225806451612903;
        result[5] += 0.8387096774193549;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.47651006711409394;
        result[3] += 0.436241610738255;
        result[4] += 0;
        result[5] += 0.087248322147651;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)93.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.4666666666666667;
        result[3] += 0;
        result[4] += 0.13333333333333333;
        result[5] += 0.4;
      } else {
        result[0] += 0.008383233532934131;
        result[1] += 0.0023952095808383233;
        result[2] += 0.9245508982035928;
        result[3] += 0.059880239520958084;
        result[4] += 0;
        result[5] += 0.004790419161676647;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        result[0] += 0.10619469026548672;
        result[1] += 0.0855457227138643;
        result[2] += 0;
        result[3] += 0.014749262536873156;
        result[4] += 0.6873156342182891;
        result[5] += 0.10619469026548672;
      } else {
        result[0] += 0;
        result[1] += 0.008166969147005444;
        result[2] += 0.0018148820326678765;
        result[3] += 0.17150635208711434;
        result[4] += 0.04900181488203267;
        result[5] += 0.7695099818511797;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6074403109383676;
        result[1] += 0.0416435313714603;
        result[2] += 0.0277623542476402;
        result[3] += 0.0832870627429206;
        result[4] += 0.13714602998334258;
        result[5] += 0.10272071071626875;
      } else {
        result[0] += 0.017632241813602016;
        result[1] += 0.982367758186398;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.2662337662337662;
        result[3] += 0.577922077922078;
        result[4] += 0;
        result[5] += 0.15584415584415584;
      } else {
        result[0] += 0.20689655172413793;
        result[1] += 0;
        result[2] += 0.7068965517241379;
        result[3] += 0.017241379310344827;
        result[4] += 0.05172413793103448;
        result[5] += 0.017241379310344827;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
        result[0] += 0.049689440993788817;
        result[1] += 0;
        result[2] += 0.7888198757763976;
        result[3] += 0.13664596273291926;
        result[4] += 0;
        result[5] += 0.024844720496894408;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9724349157733537;
        result[3] += 0.026033690658499236;
        result[4] += 0;
        result[5] += 0.0015313935681470138;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.05204460966542751;
        result[2] += 0;
        result[3] += 0.022304832713754646;
        result[4] += 0.895910780669145;
        result[5] += 0.02973977695167286;
      } else {
        result[0] += 0.06737120211360634;
        result[1] += 0.021136063408190225;
        result[2] += 0.016512549537648614;
        result[3] += 0.16578599735799207;
        result[4] += 0.05085865257595773;
        result[5] += 0.678335535006605;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        result[0] += 0;
        result[1] += 0.8507751937984496;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.14728682170542637;
        result[5] += 0.001937984496124031;
      } else {
        result[0] += 0.7081850533807831;
        result[1] += 0.014234875444839859;
        result[2] += 0.07259786476868328;
        result[3] += 0.07829181494661923;
        result[4] += 0.06690391459074735;
        result[5] += 0.05978647686832741;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)87.5) ) ) {
        result[0] += 0.046511627906976744;
        result[1] += 0.2558139534883721;
        result[2] += 0;
        result[3] += 0.023255813953488372;
        result[4] += 0.20930232558139536;
        result[5] += 0.46511627906976744;
      } else {
        result[0] += 0.01282051282051282;
        result[1] += 0;
        result[2] += 0.44871794871794873;
        result[3] += 0.4166666666666667;
        result[4] += 0;
        result[5] += 0.12179487179487179;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)70.5) ) ) {
        result[0] += 0.5999999999999999;
        result[1] += 0.04999999999999999;
        result[2] += 0.19999999999999996;
        result[3] += 0.04999999999999999;
        result[4] += 0.09999999999999998;
        result[5] += 0;
      } else {
        result[0] += 0.004429678848283499;
        result[1] += 0;
        result[2] += 0.9125138427464009;
        result[3] += 0.07419712070874862;
        result[4] += 0;
        result[5] += 0.008859357696566999;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.18159806295399517;
        result[1] += 0.004842615012106538;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.6924939467312349;
        result[5] += 0.12106537530266344;
      } else {
        result[0] += 0.001976284584980237;
        result[1] += 0.005928853754940711;
        result[2] += 0.0009881422924901185;
        result[3] += 0.08992094861660078;
        result[4] += 0.06719367588932806;
        result[5] += 0.83399209486166;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        result[0] += 0.0056925996204933585;
        result[1] += 0.8861480075901328;
        result[2] += 0.003795066413662239;
        result[3] += 0.009487666034155597;
        result[4] += 0.09108159392789374;
        result[5] += 0.003795066413662239;
      } else {
        result[0] += 0.6100000000000001;
        result[1] += 0.021764705882352943;
        result[2] += 0.06411764705882354;
        result[3] += 0.14411764705882354;
        result[4] += 0.057647058823529426;
        result[5] += 0.10235294117647062;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)89.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.17567567567567569;
        result[3] += 0.08108108108108109;
        result[4] += 0.20270270270270271;
        result[5] += 0.5405405405405406;
      } else {
        result[0] += 0.047619047619047616;
        result[1] += 0.06666666666666667;
        result[2] += 0.3380952380952381;
        result[3] += 0.46190476190476193;
        result[4] += 0.014285714285714285;
        result[5] += 0.07142857142857142;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5227272727272727;
        result[3] += 0.1590909090909091;
        result[4] += 0;
        result[5] += 0.3181818181818182;
      } else {
        result[0] += 0.008274231678487;
        result[1] += 0;
        result[2] += 0.946808510638298;
        result[3] += 0.04491725768321514;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.047619047619047616;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9251700680272109;
        result[5] += 0.027210884353741496;
      } else {
        result[0] += 0.03912363067292645;
        result[1] += 0.007042253521126761;
        result[2] += 0.003912363067292645;
        result[3] += 0.1729264475743349;
        result[4] += 0.061815336463223784;
        result[5] += 0.7151799687010955;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)51.5) ) ) {
        result[0] += 0.002544529262086514;
        result[1] += 0.9541984732824428;
        result[2] += 0.01272264631043257;
        result[3] += 0;
        result[4] += 0.030534351145038167;
        result[5] += 0;
      } else {
        result[0] += 0.6079320113314447;
        result[1] += 0.05382436260623228;
        result[2] += 0.0668555240793201;
        result[3] += 0.08328611898016995;
        result[4] += 0.09405099150141641;
        result[5] += 0.09405099150141641;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)75.5) ) ) {
        result[0] += 0.029411764705882353;
        result[1] += 0.04411764705882353;
        result[2] += 0.19117647058823528;
        result[3] += 0.07352941176470588;
        result[4] += 0.11764705882352941;
        result[5] += 0.5441176470588235;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.45098039215686275;
        result[3] += 0.4215686274509804;
        result[4] += 0.0196078431372549;
        result[5] += 0.10784313725490197;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)85.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.8113879003558719;
        result[3] += 0.16370106761565836;
        result[4] += 0.0035587188612099642;
        result[5] += 0.021352313167259787;
      } else {
        result[0] += 0.007751937984496124;
        result[1] += 0;
        result[2] += 0.9658914728682171;
        result[3] += 0.021705426356589147;
        result[4] += 0;
        result[5] += 0.004651162790697674;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        result[0] += 0.13008130081300814;
        result[1] += 0.01084010840108401;
        result[2] += 0;
        result[3] += 0.01084010840108401;
        result[4] += 0.7235772357723578;
        result[5] += 0.12466124661246612;
      } else {
        result[0] += 0.001669449081803005;
        result[1] += 0.0025041736227045075;
        result[2] += 0;
        result[3] += 0.15609348914858096;
        result[4] += 0.05843071786310518;
        result[5] += 0.7813021702838063;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        result[0] += 0.0021141649048625794;
        result[1] += 0.9704016913319239;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.02748414376321353;
        result[5] += 0;
      } else {
        result[0] += 0.6083333333333334;
        result[1] += 0.04226190476190477;
        result[2] += 0.07142857142857144;
        result[3] += 0.09761904761904763;
        result[4] += 0.1142857142857143;
        result[5] += 0.06607142857142859;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)85.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.2845528455284553;
        result[3] += 0.43902439024390244;
        result[4] += 0;
        result[5] += 0.2764227642276423;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.8656716417910447;
        result[3] += 0.014925373134328358;
        result[4] += 0;
        result[5] += 0.11940298507462686;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)44.5) ) ) {
        result[0] += 0;
        result[1] += 0.6153846153846154;
        result[2] += 0.38461538461538464;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.005537098560354375;
        result[1] += 0;
        result[2] += 0.9235880398671097;
        result[3] += 0.058693244739756366;
        result[4] += 0.004429678848283499;
        result[5] += 0.007751937984496124;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0.008264462809917357;
        result[1] += 0.03305785123966943;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9462809917355373;
        result[5] += 0.012396694214876035;
      } else {
        result[0] += 0.05317460317460317;
        result[1] += 0.010317460317460317;
        result[2] += 0.006349206349206349;
        result[3] += 0.1626984126984127;
        result[4] += 0.05317460317460317;
        result[5] += 0.7142857142857143;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9816933638443935;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.018306636155606407;
        result[5] += 0;
      } else {
        result[0] += 0.6106442577030813;
        result[1] += 0.03697478991596639;
        result[2] += 0.0380952380952381;
        result[3] += 0.08795518207282914;
        result[4] += 0.13221288515406163;
        result[5] += 0.09411764705882353;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)103) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.14666666666666667;
        result[3] += 0.6933333333333334;
        result[4] += 0;
        result[5] += 0.16;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.675;
        result[3] += 0.125;
        result[4] += 0;
        result[5] += 0.2;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)87.5) ) ) {
        result[0] += 0.014;
        result[1] += 0;
        result[2] += 0.846;
        result[3] += 0.12;
        result[4] += 0;
        result[5] += 0.02;
      } else {
        result[0] += 0.01642710472279261;
        result[1] += 0;
        result[2] += 0.9753593429158111;
        result[3] += 0.006160164271047228;
        result[4] += 0;
        result[5] += 0.002053388090349076;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
        result[0] += 0.003257328990228013;
        result[1] += 0.026058631921824105;
        result[2] += 0;
        result[3] += 0.016286644951140065;
        result[4] += 0.8990228013029316;
        result[5] += 0.05537459283387622;
      } else {
        result[0] += 0.060266292922214436;
        result[1] += 0.00350385423966363;
        result[2] += 0.002803083391730904;
        result[3] += 0.17729502452697968;
        result[4] += 0.05536089698668535;
        result[5] += 0.700770847932726;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        result[0] += 0.0018181818181818182;
        result[1] += 0.8563636363636363;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.13636363636363635;
        result[5] += 0.005454545454545455;
      } else {
        result[0] += 0.6995768688293371;
        result[1] += 0.01904090267983075;
        result[2] += 0.06699576868829338;
        result[3] += 0.09379407616361073;
        result[4] += 0.06629055007052186;
        result[5] += 0.054301833568406205;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86.5) ) ) {
        result[0] += 0;
        result[1] += 0.05263157894736842;
        result[2] += 0.10526315789473684;
        result[3] += 0.02631578947368421;
        result[4] += 0.07894736842105263;
        result[5] += 0.7368421052631579;
      } else {
        result[0] += 0.04195804195804196;
        result[1] += 0.013986013986013986;
        result[2] += 0.3916083916083916;
        result[3] += 0.4405594405594406;
        result[4] += 0;
        result[5] += 0.11188811188811189;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
        result[0] += 0.1523809523809524;
        result[1] += 0.10476190476190476;
        result[2] += 0.5428571428571428;
        result[3] += 0.13333333333333333;
        result[4] += 0;
        result[5] += 0.06666666666666667;
      } else {
        result[0] += 0.007159904534606206;
        result[1] += 0;
        result[2] += 0.9355608591885441;
        result[3] += 0.04295942720763723;
        result[4] += 0;
        result[5] += 0.014319809069212411;
      }
    }
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)89.5) ) ) {
        result[0] += 0.006600660066006601;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9735973597359736;
        result[5] += 0.019801980198019802;
      } else {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
        result[0] += 0.03271537622682661;
        result[1] += 0;
        result[2] += 0.0010905125408942203;
        result[3] += 0.03707742639040349;
        result[4] += 0.04143947655398037;
        result[5] += 0.8876772082878953;
      } else {
        result[0] += 0.042682926829268296;
        result[1] += 0.03353658536585366;
        result[2] += 0.04573170731707317;
        result[3] += 0.4603658536585366;
        result[4] += 0.04573170731707317;
        result[5] += 0.3719512195121951;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        result[0] += 0;
        result[1] += 0.8142076502732241;
        result[2] += 0;
        result[3] += 0.00546448087431694;
        result[4] += 0.1766848816029144;
        result[5] += 0.0036429872495446266;
      } else {
        result[0] += 0.7320703653585927;
        result[1] += 0.03382949932341001;
        result[2] += 0.011502029769959404;
        result[3] += 0.06224627875507442;
        result[4] += 0.08660351826792964;
        result[5] += 0.07374830852503383;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        result[0] += 0.004098360655737705;
        result[1] += 0;
        result[2] += 0.4713114754098361;
        result[3] += 0.36475409836065575;
        result[4] += 0.01639344262295082;
        result[5] += 0.14344262295081966;
      } else {
        result[0] += 0.027135678391959798;
        result[1] += 0.004020100502512563;
        result[2] += 0.878391959798995;
        result[3] += 0.06532663316582915;
        result[4] += 0;
        result[5] += 0.02512562814070352;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)70.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.015810276679841896;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8893280632411067;
        result[5] += 0.09486166007905138;
      } else {
        result[0] += 0.013440860215053764;
        result[1] += 0.024193548387096774;
        result[2] += 0.013440860215053764;
        result[3] += 0.13082437275985664;
        result[4] += 0.04390681003584229;
        result[5] += 0.7741935483870968;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)102.5) ) ) {
        result[0] += 0.5490196078431373;
        result[1] += 0.042735042735042736;
        result[2] += 0.04625439919557567;
        result[3] += 0.11613876319758673;
        result[4] += 0.1322272498743087;
        result[5] += 0.11362493715434892;
      } else {
        result[0] += 0.019753086419753086;
        result[1] += 0.980246913580247;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.22413793103448276;
        result[3] += 0.5862068965517241;
        result[4] += 0;
        result[5] += 0.1896551724137931;
      } else {
        result[0] += 0.032520325203252036;
        result[1] += 0.04065040650406504;
        result[2] += 0.6178861788617886;
        result[3] += 0.08943089430894309;
        result[4] += 0.016260162601626018;
        result[5] += 0.2032520325203252;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6363636363636364;
        result[3] += 0.36363636363636365;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.006045949214026603;
        result[1] += 0;
        result[2] += 0.94316807738815;
        result[3] += 0.04232164449818622;
        result[4] += 0;
        result[5] += 0.008464328899637245;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0.004016064257028112;
        result[1] += 0.024096385542168676;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9156626506024096;
        result[5] += 0.05622489959839357;
      } else {
        result[0] += 0.02675059008654603;
        result[1] += 0.011014948859166011;
        result[2] += 0.011801730920535013;
        result[3] += 0.15342250196695514;
        result[4] += 0.044059795436664044;
        result[5] += 0.7529504327301337;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9829424307036247;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.017057569296375266;
        result[5] += 0;
      } else {
        result[0] += 0.6215116279069768;
        result[1] += 0.022093023255813953;
        result[2] += 0.06337209302325582;
        result[3] += 0.09127906976744186;
        result[4] += 0.11395348837209303;
        result[5] += 0.0877906976744186;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)93.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.05405405405405406;
        result[3] += 0.08108108108108109;
        result[4] += 0.13513513513513514;
        result[5] += 0.7297297297297297;
      } else {
        result[0] += 0;
        result[1] += 0.060000000000000005;
        result[2] += 0.3866666666666667;
        result[3] += 0.42666666666666675;
        result[4] += 0.013333333333333336;
        result[5] += 0.11333333333333334;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)83.5) ) ) {
        result[0] += 0.1904761904761905;
        result[1] += 0.4761904761904762;
        result[2] += 0.04761904761904762;
        result[3] += 0.04761904761904762;
        result[4] += 0.14285714285714288;
        result[5] += 0.09523809523809525;
      } else {
        result[0] += 0.0022002200220022005;
        result[1] += 0.0011001100110011003;
        result[2] += 0.9295929592959297;
        result[3] += 0.05280528052805281;
        result[4] += 0.0022002200220022005;
        result[5] += 0.012101210121012103;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
        result[0] += 0.15408805031446543;
        result[1] += 0.009433962264150945;
        result[2] += 0.00628930817610063;
        result[3] += 0.01886792452830189;
        result[4] += 0.6729559748427674;
        result[5] += 0.13836477987421386;
      } else {
        result[0] += 0.003352891869237217;
        result[1] += 0.004191114836546521;
        result[2] += 0;
        result[3] += 0.16177703269069574;
        result[4] += 0.06538139145012574;
        result[5] += 0.7652975691533948;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)65) ) ) {
        result[0] += 0.012727272727272728;
        result[1] += 0.7945454545454546;
        result[2] += 0;
        result[3] += 0.0036363636363636364;
        result[4] += 0.18181818181818182;
        result[5] += 0.007272727272727273;
      } else {
        result[0] += 0.7508698677800975;
        result[1] += 0.04523312456506611;
        result[2] += 0.018789144050104383;
        result[3] += 0.06332637439109255;
        result[4] += 0.06889352818371608;
        result[5] += 0.05288796102992345;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.058823529411764705;
        result[3] += 0.6764705882352942;
        result[4] += 0;
        result[5] += 0.2647058823529412;
      } else {
        result[0] += 0.01639344262295082;
        result[1] += 0;
        result[2] += 0.5355191256830601;
        result[3] += 0.29508196721311475;
        result[4] += 0.01092896174863388;
        result[5] += 0.14207650273224043;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)88.5) ) ) {
        result[0] += 0.07692307692307693;
        result[1] += 0.02564102564102564;
        result[2] += 0.4358974358974359;
        result[3] += 0.1794871794871795;
        result[4] += 0;
        result[5] += 0.28205128205128205;
      } else {
        result[0] += 0.018924302788844626;
        result[1] += 0;
        result[2] += 0.9282868525896415;
        result[3] += 0.04681274900398407;
        result[4] += 0;
        result[5] += 0.005976095617529881;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        result[0] += 0.004016064257028112;
        result[1] += 0.012048192771084338;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9236947791164659;
        result[5] += 0.060240963855421686;
      } else {
        result[0] += 0.054929577464788736;
        result[1] += 0.009154929577464789;
        result[2] += 0;
        result[3] += 0.1619718309859155;
        result[4] += 0.059154929577464786;
        result[5] += 0.7147887323943662;
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)102.5) ) ) {
        result[0] += 0.6127864897466827;
        result[1] += 0.05609167671893848;
        result[2] += 0.07237635705669482;
        result[3] += 0.07961399276236429;
        result[4] += 0.12424607961399277;
        result[5] += 0.0548854041013269;
      } else {
        result[0] += 0.014018691588785048;
        result[1] += 0.9813084112149534;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.004672897196261683;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        result[0] += 0;
        result[1] += 0.015625;
        result[2] += 0.140625;
        result[3] += 0.640625;
        result[4] += 0;
        result[5] += 0.203125;
      } else {
        result[0] += 0.020833333333333332;
        result[1] += 0.027777777777777776;
        result[2] += 0.6944444444444444;
        result[3] += 0.04861111111111111;
        result[4] += 0.034722222222222224;
        result[5] += 0.1736111111111111;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7565217391304347;
        result[3] += 0.16521739130434782;
        result[4] += 0;
        result[5] += 0.0782608695652174;
      } else {
        result[0] += 0.001336898395721925;
        result[1] += 0;
        result[2] += 0.9598930481283422;
        result[3] += 0.0374331550802139;
        result[4] += 0;
        result[5] += 0.001336898395721925;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.2028688524590164;
        result[1] += 0.0020491803278688526;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.6905737704918032;
        result[5] += 0.10450819672131148;
      } else {
        result[0] += 0;
        result[1] += 0.010845986984815618;
        result[2] += 0.004338394793926247;
        result[3] += 0.20607375271149675;
        result[4] += 0.05929139551699204;
        result[5] += 0.7194504699927693;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
        result[0] += 0.005535055350553505;
        result[1] += 0.7988929889298892;
        result[2] += 0;
        result[3] += 0.0018450184501845018;
        result[4] += 0.1937269372693727;
        result[5] += 0;
      } else {
        result[0] += 0.704579025110783;
        result[1] += 0.01255539143279173;
        result[2] += 0.08567208271787298;
        result[3] += 0.08124076809453473;
        result[4] += 0.06425406203840474;
        result[5] += 0.051698670605613006;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
        result[0] += 0;
        result[1] += 0.12195121951219512;
        result[2] += 0.0975609756097561;
        result[3] += 0.17073170731707318;
        result[4] += 0.07317073170731707;
        result[5] += 0.5365853658536586;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.625;
        result[3] += 0.25;
        result[4] += 0;
        result[5] += 0.125;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)85.5) ) ) {
        result[0] += 0.0033112582781456954;
        result[1] += 0;
        result[2] += 0.7748344370860927;
        result[3] += 0.17880794701986755;
        result[4] += 0;
        result[5] += 0.04304635761589404;
      } else {
        result[0] += 0.009090909090909092;
        result[1] += 0;
        result[2] += 0.9530303030303031;
        result[3] += 0.03333333333333334;
        result[4] += 0;
        result[5] += 0.004545454545454546;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
        result[0] += 0.006666666666666667;
        result[1] += 0.0033333333333333335;
        result[2] += 0.01;
        result[3] += 0.03333333333333333;
        result[4] += 0.8733333333333333;
        result[5] += 0.07333333333333333;
      } else {
        result[0] += 0.04827586206896552;
        result[1] += 0.005172413793103448;
        result[2] += 0.0017241379310344827;
        result[3] += 0.1560344827586207;
        result[4] += 0.05603448275862069;
        result[5] += 0.7327586206896551;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0.9558823529411765;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.04411764705882353;
        result[5] += 0;
      } else {
        result[0] += 0.680306905370844;
        result[1] += 0.03260869565217391;
        result[2] += 0.04411764705882353;
        result[3] += 0.079923273657289;
        result[4] += 0.11125319693094629;
        result[5] += 0.05179028132992328;
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)88.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.16304347826086957;
        result[3] += 0.08695652173913043;
        result[4] += 0.021739130434782608;
        result[5] += 0.7282608695652174;
      } else {
        result[0] += 0.04;
        result[1] += 0.10666666666666667;
        result[2] += 0.18666666666666668;
        result[3] += 0.43333333333333335;
        result[4] += 0.02666666666666667;
        result[5] += 0.20666666666666667;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
        result[0] += 0.04255319148936171;
        result[1] += 0;
        result[2] += 0.6761229314420805;
        result[3] += 0.22931442080378253;
        result[4] += 0;
        result[5] += 0.05200945626477542;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9485627836611196;
        result[3] += 0.04084720121028744;
        result[4] += 0;
        result[5] += 0.01059001512859304;
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)85.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        result[0] += 0.004319654427645789;
        result[1] += 0.9892008639308856;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.0064794816414686825;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        result[0] += 0.42804878048780487;
        result[1] += 0.07439024390243902;
        result[2] += 0;
        result[3] += 0.015853658536585366;
        result[4] += 0.4317073170731707;
        result[5] += 0.05;
      } else {
        result[0] += 0.07321041214750543;
        result[1] += 0.020607375271149676;
        result[2] += 0.033622559652928416;
        result[3] += 0.20227765726681127;
        result[4] += 0.0911062906724512;
        result[5] += 0.579175704989154;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
        result[0] += 0.7705882352941177;
        result[1] += 0;
        result[2] += 0.13529411764705881;
        result[3] += 0.06470588235294118;
        result[4] += 0;
        result[5] += 0.029411764705882353;
      } else {
        result[0] += 0.016189290161892904;
        result[1] += 0;
        result[2] += 0.854296388542964;
        result[3] += 0.10834371108343713;
        result[4] += 0;
        result[5] += 0.021170610211706107;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
        result[0] += 0.9665271966527197;
        result[1] += 0;
        result[2] += 0.02301255230125523;
        result[3] += 0;
        result[4] += 0.010460251046025104;
        result[5] += 0;
      } else {
        result[0] += 0.029045643153526972;
        result[1] += 0;
        result[2] += 0.970954356846473;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.003663003663003663;
        result[1] += 0.003663003663003663;
        result[2] += 0.01098901098901099;
        result[3] += 0.007326007326007326;
        result[4] += 0.9304029304029304;
        result[5] += 0.04395604395604396;
      } else {
        result[0] += 0.035338345864661655;
        result[1] += 0.005263157894736842;
        result[2] += 0;
        result[3] += 0.162406015037594;
        result[4] += 0.058646616541353384;
        result[5] += 0.7383458646616541;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)53.5) ) ) {
        result[0] += 0.006756756756756757;
        result[1] += 0.9324324324324325;
        result[2] += 0.0045045045045045045;
        result[3] += 0.0045045045045045045;
        result[4] += 0.0518018018018018;
        result[5] += 0;
      } else {
        result[0] += 0.6410105757931845;
        result[1] += 0.04524089306698003;
        result[2] += 0.05934195064629848;
        result[3] += 0.08578143360752058;
        result[4] += 0.10810810810810813;
        result[5] += 0.06051703877790835;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)97.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.020833333333333332;
        result[3] += 0.3958333333333333;
        result[4] += 0;
        result[5] += 0.5833333333333334;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.8;
        result[3] += 0.06666666666666667;
        result[4] += 0;
        result[5] += 0.13333333333333333;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97.5) ) ) {
        result[0] += 0;
        result[1] += 0.04444444444444445;
        result[2] += 0.5333333333333334;
        result[3] += 0.3444444444444445;
        result[4] += 0.011111111111111113;
        result[5] += 0.06666666666666668;
      } else {
        result[0] += 0.015151515151515152;
        result[1] += 0.004329004329004329;
        result[2] += 0.9231601731601732;
        result[3] += 0.047619047619047616;
        result[4] += 0.0010822510822510823;
        result[5] += 0.008658008658008658;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        result[0] += 0.0031645569620253164;
        result[1] += 0.022151898734177215;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9556962025316456;
        result[5] += 0.0189873417721519;
      } else {
        result[0] += 0.09037656903765691;
        result[1] += 0.005857740585774059;
        result[2] += 0.002510460251046025;
        result[3] += 0.07782426778242678;
        result[4] += 0.08200836820083682;
        result[5] += 0.7414225941422594;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)59.5) ) ) {
        result[0] += 0;
        result[1] += 0.9556451612903226;
        result[2] += 0;
        result[3] += 0.006048387096774193;
        result[4] += 0.038306451612903226;
        result[5] += 0;
      } else {
        result[0] += 0.5541327124563445;
        result[1] += 0.03667054714784633;
        result[2] += 0.07974388824214203;
        result[3] += 0.1362048894062864;
        result[4] += 0.08032596041909197;
        result[5] += 0.11292200232828871;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)74.5) ) ) {
        result[0] += 0;
        result[1] += 0.010526315789473684;
        result[2] += 0.10526315789473684;
        result[3] += 0.23157894736842105;
        result[4] += 0.08421052631578947;
        result[5] += 0.5684210526315789;
      } else {
        result[0] += 0.0962962962962963;
        result[1] += 0.014814814814814815;
        result[2] += 0.45185185185185184;
        result[3] += 0.37037037037037035;
        result[4] += 0.02962962962962963;
        result[5] += 0.037037037037037035;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
        result[0] += 0.42857142857142855;
        result[1] += 0;
        result[2] += 0.5;
        result[3] += 0.047619047619047616;
        result[4] += 0;
        result[5] += 0.023809523809523808;
      } else {
        result[0] += 0.009650180940892641;
        result[1] += 0;
        result[2] += 0.9541616405307599;
        result[3] += 0.031363088057901084;
        result[4] += 0;
        result[5] += 0.0048250904704463205;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0.01048951048951049;
        result[1] += 0.027972027972027972;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9370629370629371;
        result[5] += 0.024475524475524476;
      } else {
        result[0] += 0.05702066999287242;
        result[1] += 0.006414825374198147;
        result[2] += 0.0007127583749109052;
        result[3] += 0.16037063435495366;
        result[4] += 0.05345687811831789;
        result[5] += 0.722024233784747;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)57.5) ) ) {
        result[0] += 0;
        result[1] += 0.9144050104384134;
        result[2] += 0;
        result[3] += 0.0020876826722338203;
        result[4] += 0.08350730688935282;
        result[5] += 0;
      } else {
        result[0] += 0.6489693941286696;
        result[1] += 0.03497813866333541;
        result[2] += 0.07058088694565896;
        result[3] += 0.08619612742036227;
        result[4] += 0.0905683947532792;
        result[5] += 0.06870705808869457;
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.26506024096385544;
        result[3] += 0.39759036144578314;
        result[4] += 0;
        result[5] += 0.3373493975903614;
      } else {
        result[0] += 0.05555555555555555;
        result[1] += 0.05555555555555555;
        result[2] += 0.6888888888888889;
        result[3] += 0.07777777777777778;
        result[4] += 0;
        result[5] += 0.12222222222222222;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.2;
        result[3] += 0.6;
        result[4] += 0;
        result[5] += 0.2;
      } else {
        result[0] += 0.0034129692832764505;
        result[1] += 0;
        result[2] += 0.9431171786120591;
        result[3] += 0.04436860068259386;
        result[4] += 0.0022753128555176336;
        result[5] += 0.006825938566552901;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)66.5) ) ) {
        result[0] += 0.003703703703703704;
        result[1] += 0.011111111111111112;
        result[2] += 0;
        result[3] += 0.007407407407407408;
        result[4] += 0.9481481481481482;
        result[5] += 0.02962962962962963;
      } else {
        result[0] += 0;
        result[1] += 0.35714285714285715;
        result[2] += 0;
        result[3] += 0.42857142857142855;
        result[4] += 0;
        result[5] += 0.21428571428571427;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
        result[0] += 0.043520309477756286;
        result[1] += 0.0009671179883945841;
        result[2] += 0.0009671179883945841;
        result[3] += 0.0425531914893617;
        result[4] += 0.08220502901353965;
        result[5] += 0.8297872340425532;
      } else {
        result[0] += 0.07710280373831775;
        result[1] += 0.002336448598130841;
        result[2] += 0;
        result[3] += 0.5070093457943925;
        result[4] += 0.030373831775700934;
        result[5] += 0.38317757009345793;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)103.5) ) ) {
        result[0] += 0.704561403508772;
        result[1] += 0.08350877192982457;
        result[2] += 0.03228070175438597;
        result[3] += 0.04140350877192983;
        result[4] += 0.10947368421052633;
        result[5] += 0.028771929824561407;
      } else {
        result[0] += 0.007444168734491316;
        result[1] += 0.9826302729528537;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.009925558312655089;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        result[0] += 0.004273504273504274;
        result[1] += 0.038461538461538464;
        result[2] += 0.4017094017094017;
        result[3] += 0.3547008547008547;
        result[4] += 0.017094017094017096;
        result[5] += 0.18376068376068377;
      } else {
        result[0] += 0.025540275049115914;
        result[1] += 0.0009823182711198428;
        result[2] += 0.8821218074656189;
        result[3] += 0.0618860510805501;
        result[4] += 0.0019646365422396855;
        result[5] += 0.0275049115913556;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        result[0] += 0.19402985074626866;
        result[1] += 0.04477611940298507;
        result[2] += 0;
        result[3] += 0.0024875621890547263;
        result[4] += 0.6691542288557214;
        result[5] += 0.08955223880597014;
      } else {
        result[0] += 0.005591054313099041;
        result[1] += 0.003993610223642172;
        result[2] += 0;
        result[3] += 0.18450479233226838;
        result[4] += 0.06070287539936102;
        result[5] += 0.7452076677316294;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)55.5) ) ) {
        result[0] += 0.0020161290322580645;
        result[1] += 0.9193548387096774;
        result[2] += 0;
        result[3] += 0.008064516129032258;
        result[4] += 0.06854838709677419;
        result[5] += 0.0020161290322580645;
      } else {
        result[0] += 0.6227581941867657;
        result[1] += 0.037105751391465686;
        result[2] += 0.07668521954236242;
        result[3] += 0.0927643784786642;
        result[4] += 0.10142238713667287;
        result[5] += 0.06926406926406928;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
        result[0] += 0;
        result[1] += 0.018518518518518517;
        result[2] += 0.25;
        result[3] += 0.4444444444444444;
        result[4] += 0.018518518518518517;
        result[5] += 0.26851851851851855;
      } else {
        result[0] += 0.03296703296703297;
        result[1] += 0;
        result[2] += 0.7692307692307693;
        result[3] += 0.1813186813186813;
        result[4] += 0;
        result[5] += 0.016483516483516484;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0.024390243902439025;
        result[2] += 0.6341463414634146;
        result[3] += 0.0975609756097561;
        result[4] += 0;
        result[5] += 0.24390243902439024;
      } else {
        result[0] += 0.0013736263736263737;
        result[1] += 0;
        result[2] += 0.967032967032967;
        result[3] += 0.03021978021978022;
        result[4] += 0;
        result[5] += 0.0013736263736263737;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)83.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        result[0] += 0.017857142857142856;
        result[1] += 0.9642857142857143;
        result[2] += 0;
        result[3] += 0.004464285714285714;
        result[4] += 0.013392857142857142;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
        result[0] += 0.021512838306731435;
        result[1] += 0.005551700208188758;
        result[2] += 0.002081887578070784;
        result[3] += 0.1304649548924358;
        result[4] += 0.19083969465648856;
        result[5] += 0.6495489243580846;
      } else {
        result[0] += 0.5770877944325482;
        result[1] += 0.05353319057815846;
        result[2] += 0.05513918629550321;
        result[3] += 0.08618843683083512;
        result[4] += 0.1322269807280514;
        result[5] += 0.09582441113490364;
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)99.5) ) ) {
        result[0] += 0.012658227848101266;
        result[1] += 0;
        result[2] += 0.25316455696202533;
        result[3] += 0.620253164556962;
        result[4] += 0;
        result[5] += 0.11392405063291139;
      } else {
        result[0] += 0.02631578947368421;
        result[1] += 0;
        result[2] += 0.7894736842105263;
        result[3] += 0.14912280701754385;
        result[4] += 0;
        result[5] += 0.03508771929824561;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        result[0] += 0.047619047619047616;
        result[1] += 0;
        result[2] += 0.7792207792207793;
        result[3] += 0.15151515151515152;
        result[4] += 0;
        result[5] += 0.021645021645021644;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9764521193092621;
        result[3] += 0.02040816326530612;
        result[4] += 0;
        result[5] += 0.0031397174254317113;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)58.5) ) ) {
        result[0] += 0;
        result[1] += 0.02857142857142857;
        result[2] += 0;
        result[3] += 0.024489795918367346;
        result[4] += 0.9346938775510204;
        result[5] += 0.012244897959183673;
      } else {
        result[0] += 0.04172560113154172;
        result[1] += 0.019094766619519095;
        result[2] += 0.013437057991513438;
        result[3] += 0.1746817538896747;
        result[4] += 0.05021216407355021;
        result[5] += 0.7008486562942009;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        result[0] += 0.006932409012131715;
        result[1] += 0.7920277296360485;
        result[2] += 0.005199306759098787;
        result[3] += 0.006932409012131715;
        result[4] += 0.18024263431542462;
        result[5] += 0.008665511265164644;
      } else {
        result[0] += 0.6647691334598355;
        result[1] += 0.019607843137254898;
        result[2] += 0.07210626185958253;
        result[3] += 0.07337128399746994;
        result[4] += 0.09297912713472484;
        result[5] += 0.07716635041113218;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0.09523809523809523;
        result[2] += 0.047619047619047616;
        result[3] += 0.6666666666666666;
        result[4] += 0;
        result[5] += 0.19047619047619047;
      } else {
        result[0] += 0;
        result[1] += 0.044444444444444446;
        result[2] += 0.08888888888888889;
        result[3] += 0.022222222222222223;
        result[4] += 0.08888888888888889;
        result[5] += 0.7555555555555555;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6621621621621622;
        result[3] += 0.27702702702702703;
        result[4] += 0;
        result[5] += 0.060810810810810814;
      } else {
        result[0] += 0.006289308176100629;
        result[1] += 0;
        result[2] += 0.9446540880503145;
        result[3] += 0.0440251572327044;
        result[4] += 0;
        result[5] += 0.005031446540880503;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
        result[0] += 0.018315018315018316;
        result[1] += 0.014652014652014652;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8901098901098901;
        result[5] += 0.07692307692307693;
      } else {
        result[0] += 0.04209690230341541;
        result[1] += 0.017474185861795076;
        result[2] += 0.0015885623510722795;
        result[3] += 0.1596505162827641;
        result[4] += 0.046068308181096106;
        result[5] += 0.7331215250198571;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)50) ) ) {
        result[0] += 0;
        result[1] += 0.9701492537313433;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.029850746268656716;
        result[5] += 0;
      } else {
        result[0] += 0.5782869612656846;
        result[1] += 0.028368794326241127;
        result[2] += 0.0791052918712493;
        result[3] += 0.10420076377523184;
        result[4] += 0.12656846699399887;
        result[5] += 0.0834697217675941;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.05333333333333334;
        result[3] += 0.29333333333333333;
        result[4] += 0.013333333333333334;
        result[5] += 0.64;
      } else {
        result[0] += 0.043478260869565216;
        result[1] += 0.13043478260869565;
        result[2] += 0.5391304347826087;
        result[3] += 0.19130434782608696;
        result[4] += 0;
        result[5] += 0.09565217391304348;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.32142857142857145;
        result[3] += 0.32142857142857145;
        result[4] += 0;
        result[5] += 0.35714285714285715;
      } else {
        result[0] += 0.0035671819262782403;
        result[1] += 0;
        result[2] += 0.9346016646848989;
        result[3] += 0.0558858501783591;
        result[4] += 0;
        result[5] += 0.005945303210463734;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        result[0] += 0.00392156862745098;
        result[1] += 0.0196078431372549;
        result[2] += 0;
        result[3] += 0.01568627450980392;
        result[4] += 0.8745098039215686;
        result[5] += 0.08627450980392157;
      } else {
        result[0] += 0.03417533432392273;
        result[1] += 0.007429420505200594;
        result[2] += 0.002228826151560178;
        result[3] += 0.1612184249628529;
        result[4] += 0.06835066864784546;
        result[5] += 0.7265973254086181;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.988479262672811;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.01152073732718894;
        result[5] += 0;
      } else {
        result[0] += 0.622960372960373;
        result[1] += 0.03496503496503497;
        result[2] += 0.0775058275058275;
        result[3] += 0.0979020979020979;
        result[4] += 0.10314685314685315;
        result[5] += 0.06351981351981352;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.10144927536231886;
        result[3] += 0.4347826086956522;
        result[4] += 0.014492753623188408;
        result[5] += 0.44927536231884063;
      } else {
        result[0] += 0.18181818181818182;
        result[1] += 0.055944055944055944;
        result[2] += 0.5454545454545454;
        result[3] += 0.18181818181818182;
        result[4] += 0;
        result[5] += 0.03496503496503497;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)86.5) ) ) {
        result[0] += 0.003952569169960474;
        result[1] += 0.003952569169960474;
        result[2] += 0.8063241106719368;
        result[3] += 0.1541501976284585;
        result[4] += 0;
        result[5] += 0.03162055335968379;
      } else {
        result[0] += 0.0032786885245901644;
        result[1] += 0;
        result[2] += 0.9737704918032788;
        result[3] += 0.021311475409836068;
        result[4] += 0;
        result[5] += 0.0016393442622950822;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.007067137809187279;
        result[1] += 0.06713780918727916;
        result[2] += 0;
        result[3] += 0.007067137809187279;
        result[4] += 0.8692579505300353;
        result[5] += 0.04946996466431095;
      } else {
        result[0] += 0.027287319422150885;
        result[1] += 0.018459069020866775;
        result[2] += 0.006420545746388443;
        result[3] += 0.1653290529695024;
        result[4] += 0.0593900481540931;
        result[5] += 0.7231139646869984;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
        result[0] += 0.008532423208191127;
        result[1] += 0.7781569965870307;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.20648464163822525;
        result[5] += 0.006825938566552901;
      } else {
        result[0] += 0.6406926406926406;
        result[1] += 0.025974025974025976;
        result[2] += 0.04267161410018553;
        result[3] += 0.10451453308596166;
        result[4] += 0.06617192331478046;
        result[5] += 0.11997526283240569;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.15789473684210525;
        result[3] += 0.7017543859649122;
        result[4] += 0;
        result[5] += 0.14035087719298245;
      } else {
        result[0] += 0.007194244604316548;
        result[1] += 0;
        result[2] += 0.6330935251798562;
        result[3] += 0.2877697841726619;
        result[4] += 0;
        result[5] += 0.07194244604316548;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        result[0] += 0.027027027027027032;
        result[1] += 0;
        result[2] += 0.6081081081081082;
        result[3] += 0.24324324324324328;
        result[4] += 0.013513513513513516;
        result[5] += 0.10810810810810813;
      } else {
        result[0] += 0.01699029126213592;
        result[1] += 0;
        result[2] += 0.9381067961165048;
        result[3] += 0.03762135922330097;
        result[4] += 0;
        result[5] += 0.007281553398058253;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97) ) ) {
        result[0] += 0.011876484560570071;
        result[1] += 0.0665083135391924;
        result[2] += 0.0023752969121140144;
        result[3] += 0;
        result[4] += 0.8408551068883611;
        result[5] += 0.07838479809976247;
      } else {
        result[0] += 0.004618937644341801;
        result[1] += 0.9953810623556582;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
        result[0] += 0.028044871794871796;
        result[1] += 0.00641025641025641;
        result[2] += 0.004006410256410256;
        result[3] += 0.18189102564102563;
        result[4] += 0.05929487179487179;
        result[5] += 0.7203525641025641;
      } else {
        result[0] += 0.659161976235147;
        result[1] += 0.028767979987492188;
        result[2] += 0.07191994996873047;
        result[3] += 0.09443402126328956;
        result[4] += 0.0594121325828643;
        result[5] += 0.08630393996247657;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.034482758620689655;
        result[3] += 0;
        result[4] += 0.10344827586206896;
        result[5] += 0.8620689655172413;
      } else {
        result[0] += 0.035502958579881665;
        result[1] += 0.02958579881656805;
        result[2] += 0.43786982248520717;
        result[3] += 0.31360946745562135;
        result[4] += 0.035502958579881665;
        result[5] += 0.14792899408284027;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.4318181818181818;
        result[3] += 0.4318181818181818;
        result[4] += 0;
        result[5] += 0.13636363636363635;
      } else {
        result[0] += 0.009060022650056626;
        result[1] += 0;
        result[2] += 0.9252548131370328;
        result[3] += 0.057757644394110984;
        result[4] += 0;
        result[5] += 0.007927519818799546;
      }
    }
  }
  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)93.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        result[0] += 0.025078369905956112;
        result[1] += 0.025078369905956112;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9278996865203761;
        result[5] += 0.0219435736677116;
      } else {
        result[0] += 0;
        result[1] += 0.09803921568627451;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.49019607843137253;
        result[5] += 0.4117647058823529;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
        result[0] += 0.002506265664160401;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.018796992481203006;
        result[4] += 0.022556390977443608;
        result[5] += 0.956140350877193;
      } else {
        result[0] += 0.24195804195804196;
        result[1] += 0.01818181818181818;
        result[2] += 0.005594405594405594;
        result[3] += 0.26573426573426573;
        result[4] += 0.1034965034965035;
        result[5] += 0.365034965034965;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)69.5) ) ) {
        result[0] += 0.012320328542094456;
        result[1] += 0.9240246406570842;
        result[2] += 0;
        result[3] += 0.004106776180698152;
        result[4] += 0.059548254620123205;
        result[5] += 0;
      } else {
        result[0] += 0.7991304347826087;
        result[1] += 0.022608695652173914;
        result[2] += 0.03391304347826087;
        result[3] += 0.059130434782608696;
        result[4] += 0.04;
        result[5] += 0.04521739130434783;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
        result[0] += 0;
        result[1] += 0.03846153846153846;
        result[2] += 0.3846153846153845;
        result[3] += 0.409090909090909;
        result[4] += 0.010489510489510488;
        result[5] += 0.15734265734265732;
      } else {
        result[0] += 0.021568627450980392;
        result[1] += 0.00196078431372549;
        result[2] += 0.888235294117647;
        result[3] += 0.05588235294117647;
        result[4] += 0.012745098039215686;
        result[5] += 0.0196078431372549;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        result[0] += 0.12179487179487179;
        result[1] += 0.022435897435897436;
        result[2] += 0.00641025641025641;
        result[3] += 0.022435897435897436;
        result[4] += 0.7147435897435898;
        result[5] += 0.11217948717948718;
      } else {
        result[0] += 0.004262574595055414;
        result[1] += 0.00937766410912191;
        result[2] += 0.008525149190110827;
        result[3] += 0.16027280477408354;
        result[4] += 0.04688832054560955;
        result[5] += 0.7706734867860188;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9833729216152018;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.0166270783847981;
        result[5] += 0;
      } else {
        result[0] += 0.6594333936106088;
        result[1] += 0.04822182037371911;
        result[2] += 0.044002411091018684;
        result[3] += 0.060880048221820374;
        result[4] += 0.11332127787823991;
        result[5] += 0.07414104882459313;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)99) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.07407407407407407;
        result[3] += 0.47530864197530864;
        result[4] += 0.07407407407407407;
        result[5] += 0.3765432098765432;
      } else {
        result[0] += 0;
        result[1] += 0.00966183574879227;
        result[2] += 0.6231884057971014;
        result[3] += 0.2753623188405797;
        result[4] += 0.004830917874396135;
        result[5] += 0.08695652173913043;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
        result[0] += 0.08771929824561404;
        result[1] += 0.052631578947368425;
        result[2] += 0.26315789473684215;
        result[3] += 0.01754385964912281;
        result[4] += 0.1929824561403509;
        result[5] += 0.3859649122807018;
      } else {
        result[0] += 0.0011976047904191617;
        result[1] += 0;
        result[2] += 0.9365269461077844;
        result[3] += 0.046706586826347304;
        result[4] += 0;
        result[5] += 0.015568862275449102;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        result[0] += 0.01171875;
        result[1] += 0.015625;
        result[2] += 0.00390625;
        result[3] += 0.00390625;
        result[4] += 0.94921875;
        result[5] += 0.015625;
      } else {
        result[0] += 0.046086320409656184;
        result[1] += 0.0073152889539136795;
        result[2] += 0.0036576444769568397;
        result[3] += 0.14118507681053402;
        result[4] += 0.06217995610826628;
        result[5] += 0.7395757132406731;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        result[0] += 0;
        result[1] += 0.8396039603960396;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.1603960396039604;
        result[5] += 0;
      } else {
        result[0] += 0.775272727272727;
        result[1] += 0.04581818181818181;
        result[2] += 0.02981818181818181;
        result[3] += 0.05381818181818181;
        result[4] += 0.05818181818181817;
        result[5] += 0.037090909090909084;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0.0196078431372549;
        result[2] += 0.0392156862745098;
        result[3] += 0.30392156862745096;
        result[4] += 0.0392156862745098;
        result[5] += 0.5980392156862745;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.48484848484848486;
        result[3] += 0.4292929292929293;
        result[4] += 0;
        result[5] += 0.08585858585858586;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
        result[0] += 0.09345794392523364;
        result[1] += 0.037383177570093455;
        result[2] += 0.5607476635514018;
        result[3] += 0.1308411214953271;
        result[4] += 0.056074766355140186;
        result[5] += 0.12149532710280374;
      } else {
        result[0] += 0.0032751091703056767;
        result[1] += 0;
        result[2] += 0.9334061135371179;
        result[3] += 0.05895196506550218;
        result[4] += 0;
        result[5] += 0.004366812227074236;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        result[0] += 0.2036613272311213;
        result[1] += 0.006864988558352402;
        result[2] += 0.002288329519450801;
        result[3] += 0;
        result[4] += 0.6910755148741419;
        result[5] += 0.09610983981693363;
      } else {
        result[0] += 0.001953125;
        result[1] += 0.0166015625;
        result[2] += 0.0048828125;
        result[3] += 0.0927734375;
        result[4] += 0.0654296875;
        result[5] += 0.818359375;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.9330628803245437;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.06693711967545639;
        result[5] += 0;
      } else {
        result[0] += 0.566090351366425;
        result[1] += 0.023424428332403796;
        result[2] += 0.06358059118795316;
        result[3] += 0.1578360290016732;
        result[4] += 0.06413831567205802;
        result[5] += 0.12493028443948692;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 1;
      } else {
        result[0] += 0.0075187969924812035;
        result[1] += 0.02255639097744361;
        result[2] += 0.3834586466165414;
        result[3] += 0.4135338345864662;
        result[4] += 0.0075187969924812035;
        result[5] += 0.16541353383458648;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)89.5) ) ) {
        result[0] += 0;
        result[1] += 0.15384615384615385;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.5384615384615384;
        result[5] += 0.3076923076923077;
      } else {
        result[0] += 0.013100436681222707;
        result[1] += 0;
        result[2] += 0.9104803493449781;
        result[3] += 0.06441048034934498;
        result[4] += 0;
        result[5] += 0.012008733624454149;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        result[0] += 0.004149377593360996;
        result[1] += 0.05394190871369295;
        result[2] += 0;
        result[3] += 0.004149377593360996;
        result[4] += 0.91701244813278;
        result[5] += 0.02074688796680498;
      } else {
        result[0] += 0.041573867854491464;
        result[1] += 0.009651076466221232;
        result[2] += 0.012620638455827766;
        result[3] += 0.15219005196733482;
        result[4] += 0.08982925018559762;
        result[5] += 0.694135115070527;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0.9503239740820735;
        result[2] += 0;
        result[3] += 0.0064794816414686825;
        result[4] += 0.0367170626349892;
        result[5] += 0.0064794816414686825;
      } else {
        result[0] += 0.6382978723404256;
        result[1] += 0.04018912529550828;
        result[2] += 0.0591016548463357;
        result[3] += 0.08569739952718676;
        result[4] += 0.10106382978723404;
        result[5] += 0.07565011820330969;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
        result[0] += 0.03896103896103896;
        result[1] += 0.03896103896103896;
        result[2] += 0.05194805194805195;
        result[3] += 0.3116883116883117;
        result[4] += 0.07792207792207792;
        result[5] += 0.4805194805194805;
      } else {
        result[0] += 0.21359223300970875;
        result[1] += 0.07766990291262137;
        result[2] += 0.5339805825242719;
        result[3] += 0.0679611650485437;
        result[4] += 0;
        result[5] += 0.10679611650485438;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)83.5) ) ) {
        result[0] += 0.013513513513513514;
        result[1] += 0;
        result[2] += 0.6418918918918919;
        result[3] += 0.3108108108108108;
        result[4] += 0;
        result[5] += 0.033783783783783786;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9456953642384106;
        result[3] += 0.04768211920529802;
        result[4] += 0;
        result[5] += 0.006622516556291391;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        result[0] += 0.13746630727762804;
        result[1] += 0.008086253369272238;
        result[2] += 0;
        result[3] += 0.02425876010781671;
        result[4] += 0.6900269541778976;
        result[5] += 0.14016172506738545;
      } else {
        result[0] += 0;
        result[1] += 0.006488240064882401;
        result[2] += 0.0016220600162206002;
        result[3] += 0.1573398215733982;
        result[4] += 0.046228710462287104;
        result[5] += 0.7883211678832117;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)67.5) ) ) {
        result[0] += 0.008635578583765112;
        result[1] += 0.8169257340241797;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.17443868739205526;
        result[5] += 0;
      } else {
        result[0] += 0.6684107259646828;
        result[1] += 0.02158273381294964;
        result[2] += 0.08175277959450622;
        result[3] += 0.10202746893394375;
        result[4] += 0.05624591236102027;
        result[5] += 0.06998037933289732;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.08064516129032258;
        result[3] += 0.532258064516129;
        result[4] += 0;
        result[5] += 0.3870967741935484;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6;
        result[3] += 0.15555555555555556;
        result[4] += 0;
        result[5] += 0.24444444444444444;
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
        result[0] += 0;
        result[1] += 0.006920415224913495;
        result[2] += 0.8062283737024222;
        result[3] += 0.16608996539792387;
        result[4] += 0;
        result[5] += 0.020761245674740483;
      } else {
        result[0] += 0.004178272980501392;
        result[1] += 0;
        result[2] += 0.9526462395543174;
        result[3] += 0.02785515320334261;
        result[4] += 0.004178272980501392;
        result[5] += 0.011142061281337046;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
        result[0] += 0.004651162790697674;
        result[1] += 0.06046511627906977;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9162790697674419;
        result[5] += 0.018604651162790697;
      } else {
        result[0] += 0.7702702702702703;
        result[1] += 0.02702702702702703;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.13513513513513514;
        result[5] += 0.06756756756756757;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)85.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.005747126436781609;
        result[3] += 0.03218390804597701;
        result[4] += 0.07586206896551724;
        result[5] += 0.8862068965517241;
      } else {
        result[0] += 0.018442622950819672;
        result[1] += 0.012295081967213115;
        result[2] += 0.012295081967213115;
        result[3] += 0.444672131147541;
        result[4] += 0.05737704918032787;
        result[5] += 0.45491803278688525;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)90.5) ) ) {
        result[0] += 0;
        result[1] += 0.43902439024390244;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.5609756097560976;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.9976470588235294;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.002352941176470588;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
        result[0] += 0.7692307692307693;
        result[1] += 0.031804733727810654;
        result[2] += 0.011834319526627219;
        result[3] += 0.05029585798816568;
        result[4] += 0.10355029585798817;
        result[5] += 0.03328402366863906;
      } else {
        result[0] += 0.03333333333333333;
        result[1] += 0;
        result[2] += 0.7886363636363637;
        result[3] += 0.12045454545454545;
        result[4] += 0.005303030303030303;
        result[5] += 0.05227272727272727;
      }
    }
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        result[0] += 0.004366812227074236;
        result[1] += 0.03056768558951965;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.925764192139738;
        result[5] += 0.039301310043668124;
      } else {
        result[0] += 0.38095238095238093;
        result[1] += 0.009523809523809525;
        result[2] += 0.009523809523809525;
        result[3] += 0;
        result[4] += 0.3047619047619048;
        result[5] += 0.29523809523809524;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)87.5) ) ) {
        result[0] += 0.00117096018735363;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.05620608899297424;
        result[4] += 0.05035128805620609;
        result[5] += 0.892271662763466;
      } else {
        result[0] += 0;
        result[1] += 0.05570291777188329;
        result[2] += 0.05570291777188329;
        result[3] += 0.4535809018567639;
        result[4] += 0.029177718832891247;
        result[5] += 0.40583554376657827;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)53.5) ) ) {
        result[0] += 0.006864988558352402;
        result[1] += 0.9221967963386728;
        result[2] += 0.013729977116704805;
        result[3] += 0;
        result[4] += 0.05491990846681922;
        result[5] += 0.002288329519450801;
      } else {
        result[0] += 0.643180349062702;
        result[1] += 0.03619909502262444;
        result[2] += 0.03232062055591468;
        result[3] += 0.05042016806722689;
        result[4] += 0.1480284421460892;
        result[5] += 0.08985132514544279;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        result[0] += 0.09278350515463918;
        result[1] += 0.037800687285223365;
        result[2] += 0.46735395189003437;
        result[3] += 0.281786941580756;
        result[4] += 0.024054982817869417;
        result[5] += 0.09621993127147767;
      } else {
        result[0] += 0.008633093525179856;
        result[1] += 0;
        result[2] += 0.9424460431654677;
        result[3] += 0.04028776978417266;
        result[4] += 0;
        result[5] += 0.008633093525179856;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        result[0] += 0.1632047477744807;
        result[1] += 0.011869436201780416;
        result[2] += 0;
        result[3] += 0.002967359050445104;
        result[4] += 0.6913946587537092;
        result[5] += 0.13056379821958458;
      } else {
        result[0] += 0.0025380710659898475;
        result[1] += 0.024534686971235193;
        result[2] += 0.004230118443316413;
        result[3] += 0.1700507614213198;
        result[4] += 0.03976311336717428;
        result[5] += 0.7588832487309645;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)56.5) ) ) {
        result[0] += 0.00398406374501992;
        result[1] += 0.8804780876494024;
        result[2] += 0.00199203187250996;
        result[3] += 0;
        result[4] += 0.10756972111553785;
        result[5] += 0.00597609561752988;
      } else {
        result[0] += 0.626207729468599;
        result[1] += 0.022342995169082124;
        result[2] += 0.06944444444444445;
        result[3] += 0.0821256038647343;
        result[4] += 0.11714975845410629;
        result[5] += 0.08272946859903382;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.045454545454545456;
        result[4] += 0.15151515151515152;
        result[5] += 0.803030303030303;
      } else {
        result[0] += 0;
        result[1] += 0.012987012987012988;
        result[2] += 0.4025974025974026;
        result[3] += 0.3961038961038961;
        result[4] += 0.012987012987012988;
        result[5] += 0.17532467532467533;
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
        result[0] += 0.37209302325581395;
        result[1] += 0.06976744186046512;
        result[2] += 0.4883720930232558;
        result[3] += 0.023255813953488372;
        result[4] += 0.023255813953488372;
        result[5] += 0.023255813953488372;
      } else {
        result[0] += 0.019187358916478554;
        result[1] += 0.001128668171557562;
        result[2] += 0.917607223476298;
        result[3] += 0.05417607223476298;
        result[4] += 0;
        result[5] += 0.007900677200902935;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.01724137931034483;
        result[1] += 0.020689655172413796;
        result[2] += 0.006896551724137932;
        result[3] += 0;
        result[4] += 0.9172413793103449;
        result[5] += 0.03793103448275863;
      } else {
        result[0] += 0.030254777070063694;
        result[1] += 0.011146496815286623;
        result[2] += 0.0031847133757961785;
        result[3] += 0.15764331210191082;
        result[4] += 0.06130573248407643;
        result[5] += 0.7364649681528662;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9436008676789588;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.05639913232104121;
        result[5] += 0;
      } else {
        result[0] += 0.6145348837209301;
        result[1] += 0.026162790697674413;
        result[2] += 0.06686046511627905;
        result[3] += 0.08720930232558138;
        result[4] += 0.11569767441860462;
        result[5] += 0.08953488372093021;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)101) ) ) {
        result[0] += 0;
        result[1] += 0.045454545454545456;
        result[2] += 0.14393939393939395;
        result[3] += 0.3560606060606061;
        result[4] += 0.09848484848484848;
        result[5] += 0.3560606060606061;
      } else {
        result[0] += 0.15555555555555556;
        result[1] += 0;
        result[2] += 0.6444444444444445;
        result[3] += 0.1111111111111111;
        result[4] += 0;
        result[5] += 0.08888888888888889;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)101) ) ) {
        result[0] += 0.0041841004184100415;
        result[1] += 0;
        result[2] += 0.7531380753138075;
        result[3] += 0.20502092050209206;
        result[4] += 0;
        result[5] += 0.03765690376569038;
      } else {
        result[0] += 0.0014641288433382138;
        result[1] += 0;
        result[2] += 0.9604685212298683;
        result[3] += 0.03513909224011713;
        result[4] += 0;
        result[5] += 0.0029282576866764276;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.13069908814589665;
        result[1] += 0.060790273556231005;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.6808510638297872;
        result[5] += 0.1276595744680851;
      } else {
        result[0] += 0;
        result[1] += 0.017079419299743808;
        result[2] += 0.017933390264730998;
        result[3] += 0.18360375747224594;
        result[4] += 0.03928266438941076;
        result[5] += 0.7421007685738685;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)102.5) ) ) {
        result[0] += 0.581767955801105;
        result[1] += 0.03812154696132597;
        result[2] += 0.0707182320441989;
        result[3] += 0.09502762430939227;
        result[4] += 0.12596685082872927;
        result[5] += 0.08839779005524862;
      } else {
        result[0] += 0.02926829268292683;
        result[1] += 0.9707317073170731;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)75.5) ) ) {
        result[0] += 0;
        result[1] += 0.018867924528301886;
        result[2] += 0.03773584905660377;
        result[3] += 0.03773584905660377;
        result[4] += 0.1320754716981132;
        result[5] += 0.7735849056603774;
      } else {
        result[0] += 0;
        result[1] += 0.015748031496062992;
        result[2] += 0.4566929133858268;
        result[3] += 0.3700787401574803;
        result[4] += 0;
        result[5] += 0.15748031496062992;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85.5) ) ) {
        result[0] += 0.017167381974248924;
        result[1] += 0;
        result[2] += 0.7381974248927038;
        result[3] += 0.18454935622317595;
        result[4] += 0.012875536480686692;
        result[5] += 0.04721030042918454;
      } else {
        result[0] += 0.002886002886002886;
        result[1] += 0;
        result[2] += 0.9668109668109668;
        result[3] += 0.027417027417027416;
        result[4] += 0;
        result[5] += 0.002886002886002886;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.003703703703703704;
        result[1] += 0.003703703703703704;
        result[2] += 0;
        result[3] += 0.003703703703703704;
        result[4] += 0.9518518518518518;
        result[5] += 0.037037037037037035;
      } else {
        result[0] += 0.033279220779220776;
        result[1] += 0.003246753246753247;
        result[2] += 0;
        result[3] += 0.1525974025974026;
        result[4] += 0.05357142857142857;
        result[5] += 0.7573051948051948;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9706546275395034;
        result[2] += 0;
        result[3] += 0.002257336343115124;
        result[4] += 0.02708803611738149;
        result[5] += 0;
      } else {
        result[0] += 0.6104553119730185;
        result[1] += 0.03485103991006183;
        result[2] += 0.07476110174255199;
        result[3] += 0.08712759977515458;
        result[4] += 0.1101742551995503;
        result[5] += 0.08263069139966273;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
        result[0] += 0.025;
        result[1] += 0.175;
        result[2] += 0.0375;
        result[3] += 0.0625;
        result[4] += 0.1;
        result[5] += 0.6;
      } else {
        result[0] += 0.13793103448275862;
        result[1] += 0;
        result[2] += 0.4482758620689655;
        result[3] += 0.3103448275862069;
        result[4] += 0;
        result[5] += 0.10344827586206896;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
        result[0] += 0.12631578947368421;
        result[1] += 0;
        result[2] += 0.5263157894736842;
        result[3] += 0.23157894736842105;
        result[4] += 0.010526315789473684;
        result[5] += 0.10526315789473684;
      } else {
        result[0] += 0.0034522439585730727;
        result[1] += 0;
        result[2] += 0.949367088607595;
        result[3] += 0.043728423475258925;
        result[4] += 0;
        result[5] += 0.0034522439585730727;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.038869257950530034;
        result[4] += 0.9081272084805654;
        result[5] += 0.053003533568904596;
      } else {
        result[0] += 0.03125;
        result[1] += 0.003720238095238095;
        result[2] += 0.001488095238095238;
        result[3] += 0.13020833333333334;
        result[4] += 0.05952380952380952;
        result[5] += 0.7738095238095238;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)102.5) ) ) {
        result[0] += 0.5821071218363744;
        result[1] += 0.05768098881695115;
        result[2] += 0.07533843437316068;
        result[3] += 0.09064155385520895;
        result[4] += 0.1153619776339023;
        result[5] += 0.0788699234844026;
      } else {
        result[0] += 0.02457002457002457;
        result[1] += 0.9656019656019657;
        result[2] += 0.009828009828009828;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0.009259259259259259;
        result[2] += 0.08333333333333333;
        result[3] += 0.3425925925925926;
        result[4] += 0.1111111111111111;
        result[5] += 0.4537037037037037;
      } else {
        result[0] += 0.38271604938271603;
        result[1] += 0.07407407407407407;
        result[2] += 0.4567901234567901;
        result[3] += 0.07407407407407407;
        result[4] += 0;
        result[5] += 0.012345679012345678;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)85.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.776;
        result[3] += 0.188;
        result[4] += 0;
        result[5] += 0.036;
      } else {
        result[0] += 0.0030581039755351682;
        result[1] += 0;
        result[2] += 0.963302752293578;
        result[3] += 0.03058103975535168;
        result[4] += 0;
        result[5] += 0.0030581039755351682;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        result[0] += 0.003125;
        result[1] += 0.034375;
        result[2] += 0;
        result[3] += 0.009375;
        result[4] += 0.909375;
        result[5] += 0.04375;
      } else {
        result[0] += 0.04775481111903065;
        result[1] += 0.004989308624376337;
        result[2] += 0;
        result[3] += 0.16678545972915182;
        result[4] += 0.05203136136849608;
        result[5] += 0.7284390591589451;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0.9593147751605996;
        result[2] += 0;
        result[3] += 0.0021413276231263384;
        result[4] += 0.03854389721627409;
        result[5] += 0;
      } else {
        result[0] += 0.6063701923076923;
        result[1] += 0.03245192307692308;
        result[2] += 0.08774038461538461;
        result[3] += 0.10276442307692307;
        result[4] += 0.1015625;
        result[5] += 0.06911057692307693;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)99.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.15;
        result[3] += 0.525;
        result[4] += 0;
        result[5] += 0.325;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6666666666666666;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.3333333333333333;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
        result[0] += 0.003952569169960475;
        result[1] += 0.003952569169960475;
        result[2] += 0.7944664031620554;
        result[3] += 0.17786561264822137;
        result[4] += 0.00790513833992095;
        result[5] += 0.011857707509881424;
      } else {
        result[0] += 0;
        result[1] += 0.0015128593040847202;
        result[2] += 0.9561270801815431;
        result[3] += 0.030257186081694403;
        result[4] += 0;
        result[5] += 0.012102874432677761;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)80.5) ) ) {
        result[0] += 0;
        result[1] += 0.6666666666666666;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.3333333333333333;
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
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)75.5) ) ) {
        result[0] += 0.05905511811023622;
        result[1] += 0.00843644544431946;
        result[2] += 0.013498312710911136;
        result[3] += 0.15354330708661418;
        result[4] += 0.21991001124859394;
        result[5] += 0.545556805399325;
      } else {
        result[0] += 0.6531713900134952;
        result[1] += 0.05735492577597841;
        result[2] += 0.05195681511470985;
        result[3] += 0.06612685560053981;
        result[4] += 0.10053981106612686;
        result[5] += 0.0708502024291498;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
        result[0] += 0.03867403314917127;
        result[1] += 0.0055248618784530384;
        result[2] += 0.3149171270718232;
        result[3] += 0.3425414364640884;
        result[4] += 0.011049723756906077;
        result[5] += 0.287292817679558;
      } else {
        result[0] += 0.06222222222222222;
        result[1] += 0.035555555555555556;
        result[2] += 0.7244444444444444;
        result[3] += 0.16;
        result[4] += 0;
        result[5] += 0.017777777777777778;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)85.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.8895705521472393;
        result[3] += 0.10429447852760737;
        result[4] += 0;
        result[5] += 0.006134969325153375;
      } else {
        result[0] += 0.003629764065335753;
        result[1] += 0;
        result[2] += 0.9836660617059891;
        result[3] += 0.012704174228675136;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)99.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
        result[0] += 0.0032025620496397116;
        result[1] += 0;
        result[2] += 0.0032025620496397116;
        result[3] += 0.08646917534027222;
        result[4] += 0.19935948759007205;
        result[5] += 0.7077662129703763;
      } else {
        result[0] += 0.3420875420875421;
        result[1] += 0.08148148148148149;
        result[2] += 0.03771043771043771;
        result[3] += 0.20202020202020202;
        result[4] += 0.16498316498316498;
        result[5] += 0.1717171717171717;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)77) ) ) {
        result[0] += 0;
        result[1] += 0.9858823529411765;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.011764705882352943;
        result[5] += 0.0023529411764705885;
      } else {
        result[0] += 0.26666666666666666;
        result[1] += 0.26666666666666666;
        result[2] += 0.06666666666666667;
        result[3] += 0.2;
        result[4] += 0.2;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)93) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)71.5) ) ) {
        result[0] += 0.8364485981308413;
        result[1] += 0;
        result[2] += 0.11682242990654207;
        result[3] += 0.014018691588785048;
        result[4] += 0.009345794392523366;
        result[5] += 0.023364485981308414;
      } else {
        result[0] += 0.03380588876772083;
        result[1] += 0;
        result[2] += 0.8691384950926936;
        result[3] += 0.07851690294438386;
        result[4] += 0.0021810250817884407;
        result[5] += 0.016357688113413305;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
        result[0] += 0.9809782608695653;
        result[1] += 0;
        result[2] += 0.013586956521739132;
        result[3] += 0;
        result[4] += 0.0027173913043478264;
        result[5] += 0.0027173913043478264;
      } else {
        result[0] += 0.09803921568627451;
        result[1] += 0;
        result[2] += 0.9019607843137255;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)102) ) ) {
        result[0] += 0;
        result[1] += 0.007407407407407408;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9259259259259259;
        result[5] += 0.06666666666666667;
      } else {
        result[0] += 0;
        result[1] += 0.8333333333333334;
        result[2] += 0;
        result[3] += 0.16666666666666666;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)87.5) ) ) {
        result[0] += 0.026;
        result[1] += 0.001;
        result[2] += 0.006;
        result[3] += 0.058;
        result[4] += 0.081;
        result[5] += 0.828;
      } else {
        result[0] += 0.06031746031746032;
        result[1] += 0.0031746031746031746;
        result[2] += 0.0380952380952381;
        result[3] += 0.526984126984127;
        result[4] += 0.009523809523809525;
        result[5] += 0.3619047619047619;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)53.5) ) ) {
        result[0] += 0.002188183807439825;
        result[1] += 0.9824945295404814;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.015317286652078774;
        result[5] += 0;
      } else {
        result[0] += 0.6869679109364768;
        result[1] += 0.043222003929273084;
        result[2] += 0.0091683038637852;
        result[3] += 0.07138179436804191;
        result[4] += 0.1100196463654224;
        result[5] += 0.07924034053700066;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)96.5) ) ) {
        result[0] += 0.03985507246376811;
        result[1] += 0.0036231884057971015;
        result[2] += 0.4420289855072464;
        result[3] += 0.35144927536231885;
        result[4] += 0.007246376811594203;
        result[5] += 0.15579710144927536;
      } else {
        result[0] += 0.03134796238244514;
        result[1] += 0;
        result[2] += 0.8934169278996865;
        result[3] += 0.06792058516196448;
        result[4] += 0.0010449320794148381;
        result[5] += 0.006269592476489028;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        result[0] += 0.1702127659574468;
        result[1] += 0.004728132387706856;
        result[2] += 0;
        result[3] += 0.01182033096926714;
        result[4] += 0.7021276595744681;
        result[5] += 0.1111111111111111;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0015479876160990713;
        result[3] += 0.18188854489164086;
        result[4] += 0.07585139318885449;
        result[5] += 0.7407120743034056;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        result[0] += 0.007843137254901962;
        result[1] += 0.9215686274509804;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.07058823529411766;
        result[5] += 0;
      } else {
        result[0] += 0.6595881595881596;
        result[1] += 0.02445302445302445;
        result[2] += 0.07271557271557272;
        result[3] += 0.09652509652509653;
        result[4] += 0.08236808236808237;
        result[5] += 0.06435006435006435;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)72.5) ) ) {
        result[0] += 0.037037037037037035;
        result[1] += 0.1111111111111111;
        result[2] += 0.018518518518518517;
        result[3] += 0;
        result[4] += 0.2222222222222222;
        result[5] += 0.6111111111111112;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.33035714285714285;
        result[3] += 0.48214285714285715;
        result[4] += 0;
        result[5] += 0.1875;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
        result[0] += 0.0267175572519084;
        result[1] += 0;
        result[2] += 0.7862595419847329;
        result[3] += 0.17557251908396948;
        result[4] += 0;
        result[5] += 0.011450381679389315;
      } else {
        result[0] += 0.0016155088852988692;
        result[1] += 0;
        result[2] += 0.9676898222940227;
        result[3] += 0.029079159935379646;
        result[4] += 0;
        result[5] += 0.0016155088852988692;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        result[0] += 0.1976470588235294;
        result[1] += 0.01647058823529412;
        result[2] += 0;
        result[3] += 0.009411764705882352;
        result[4] += 0.7058823529411765;
        result[5] += 0.07058823529411765;
      } else {
        result[0] += 0.000968054211035818;
        result[1] += 0.001936108422071636;
        result[2] += 0.001936108422071636;
        result[3] += 0.07163601161665054;
        result[4] += 0.06582768635043562;
        result[5] += 0.8576960309777347;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        result[0] += 0.009803921568627453;
        result[1] += 0.8666666666666668;
        result[2] += 0.0019607843137254906;
        result[3] += 0.013725490196078433;
        result[4] += 0.103921568627451;
        result[5] += 0.003921568627450981;
      } else {
        result[0] += 0.5816503173687247;
        result[1] += 0.026543566070398154;
        result[2] += 0.06635891517599539;
        result[3] += 0.16676283900750144;
        result[4] += 0.05135603000577034;
        result[5] += 0.10732833237160992;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)88.5) ) ) {
        result[0] += 0;
        result[1] += 0.030303030303030304;
        result[2] += 0.030303030303030304;
        result[3] += 0;
        result[4] += 0.06060606060606061;
        result[5] += 0.8787878787878788;
      } else {
        result[0] += 0;
        result[1] += 0.012578616352201259;
        result[2] += 0.37735849056603776;
        result[3] += 0.46540880503144655;
        result[4] += 0.012578616352201259;
        result[5] += 0.1320754716981132;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
        result[0] += 0.1308411214953271;
        result[1] += 0.056074766355140186;
        result[2] += 0.48598130841121495;
        result[3] += 0.1588785046728972;
        result[4] += 0.037383177570093455;
        result[5] += 0.1308411214953271;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9491525423728814;
        result[3] += 0.04600484261501211;
        result[4] += 0;
        result[5] += 0.004842615012106538;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        result[0] += 0.11149825783972125;
        result[1] += 0.013937282229965157;
        result[2] += 0;
        result[3] += 0.010452961672473868;
        result[4] += 0.759581881533101;
        result[5] += 0.10452961672473868;
      } else {
        result[0] += 0.0026857654431512983;
        result[1] += 0.017009847806624886;
        result[2] += 0.0035810205908683975;
        result[3] += 0.1521933751119069;
        result[4] += 0.043867502238137866;
        result[5] += 0.7806624888093107;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0.9691358024691358;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.030864197530864196;
        result[5] += 0;
      } else {
        result[0] += 0.5850267379679145;
        result[1] += 0.034759358288770054;
        result[2] += 0.05454545454545454;
        result[3] += 0.10481283422459893;
        result[4] += 0.11978609625668449;
        result[5] += 0.10106951871657754;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)104.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.15254237288135594;
        result[3] += 0.2542372881355932;
        result[4] += 0;
        result[5] += 0.5932203389830508;
      } else {
        result[0] += 0.09433962264150944;
        result[1] += 0.11320754716981132;
        result[2] += 0.6037735849056604;
        result[3] += 0.03773584905660377;
        result[4] += 0.05660377358490566;
        result[5] += 0.09433962264150944;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6875;
        result[3] += 0.23958333333333334;
        result[4] += 0;
        result[5] += 0.07291666666666667;
      } else {
        result[0] += 0.006561679790026247;
        result[1] += 0;
        result[2] += 0.9553805774278216;
        result[3] += 0.03805774278215223;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)95) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.3162393162393162;
        result[1] += 0.0547008547008547;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.5709401709401709;
        result[5] += 0.05811965811965812;
      } else {
        result[0] += 0.020833333333333332;
        result[1] += 0.013392857142857142;
        result[2] += 0.017857142857142856;
        result[3] += 0.17485119047619047;
        result[4] += 0.05133928571428571;
        result[5] += 0.7217261904761905;
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6508161816891413;
        result[1] += 0.0596167494677076;
        result[2] += 0.07097232079489;
        result[3] += 0.0894251242015614;
        result[4] += 0.07665010645848121;
        result[5] += 0.052519517388218605;
      } else {
        result[0] += 0.012626262626262626;
        result[1] += 0.9823232323232324;
        result[2] += 0;
        result[3] += 0.0025252525252525255;
        result[4] += 0.0025252525252525255;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)83.5) ) ) {
        result[0] += 0;
        result[1] += 0.13725490196078433;
        result[2] += 0.058823529411764705;
        result[3] += 0.0196078431372549;
        result[4] += 0.13725490196078433;
        result[5] += 0.6470588235294118;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.22807017543859648;
        result[3] += 0.543859649122807;
        result[4] += 0.03508771929824561;
        result[5] += 0.19298245614035087;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
        result[0] += 0.10416666666666667;
        result[1] += 0.052083333333333336;
        result[2] += 0.5208333333333334;
        result[3] += 0.22916666666666666;
        result[4] += 0.010416666666666666;
        result[5] += 0.08333333333333333;
      } else {
        result[0] += 0.0045045045045045045;
        result[1] += 0;
        result[2] += 0.9391891891891891;
        result[3] += 0.04391891891891892;
        result[4] += 0;
        result[5] += 0.012387387387387387;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.03734439834024896;
        result[2] += 0;
        result[3] += 0.008298755186721992;
        result[4] += 0.9253112033195021;
        result[5] += 0.029045643153526972;
      } else {
        result[0] += 0.0391566265060241;
        result[1] += 0.012048192771084338;
        result[2] += 0.024096385542168676;
        result[3] += 0.15813253012048192;
        result[4] += 0.04969879518072289;
        result[5] += 0.7168674698795181;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
        result[0] += 0.0035650623885918;
        result[1] += 0.8235294117647058;
        result[2] += 0.0017825311942959;
        result[3] += 0;
        result[4] += 0.1622103386809269;
        result[5] += 0.008912655971479501;
      } else {
        result[0] += 0.6425970873786409;
        result[1] += 0.029733009708737868;
        result[2] += 0.07342233009708739;
        result[3] += 0.09162621359223302;
        result[4] += 0.08495145631067963;
        result[5] += 0.07766990291262137;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)80.5) ) ) {
        result[0] += 0;
        result[1] += 0.025974025974025976;
        result[2] += 0.19480519480519481;
        result[3] += 0.5974025974025974;
        result[4] += 0.03896103896103896;
        result[5] += 0.14285714285714285;
      } else {
        result[0] += 0.04225352112676056;
        result[1] += 0.014084507042253521;
        result[2] += 0.4507042253521127;
        result[3] += 0.056338028169014086;
        result[4] += 0.11267605633802817;
        result[5] += 0.323943661971831;
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)85.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7966804979253113;
        result[3] += 0.17427385892116184;
        result[4] += 0;
        result[5] += 0.029045643153526975;
      } else {
        result[0] += 0.010622154779969651;
        result[1] += 0;
        result[2] += 0.9514415781487102;
        result[3] += 0.03793626707132018;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)79.5) ) ) {
        result[0] += 0.00813008130081301;
        result[1] += 0.004065040650406505;
        result[2] += 0;
        result[3] += 0.004065040650406505;
        result[4] += 0.951219512195122;
        result[5] += 0.03252032520325204;
      } else {
        result[0] += 0;
        result[1] += 0.12;
        result[2] += 0;
        result[3] += 0.24;
        result[4] += 0;
        result[5] += 0.64;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
        result[0] += 0.544;
        result[1] += 0.032;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.384;
        result[5] += 0.04;
      } else {
        result[0] += 0.012393493415956624;
        result[1] += 0.003098373353989156;
        result[2] += 0.008520526723470178;
        result[3] += 0.17273431448489543;
        result[4] += 0.041828040278853604;
        result[5] += 0.761425251742835;
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        result[0] += 0.0019157088122605363;
        result[1] += 0.8582375478927203;
        result[2] += 0;
        result[3] += 0.011494252873563218;
        result[4] += 0.1111111111111111;
        result[5] += 0.017241379310344827;
      } else {
        result[0] += 0.7477203647416413;
        result[1] += 0.03799392097264437;
        result[2] += 0.04483282674772036;
        result[3] += 0.050151975683890564;
        result[4] += 0.07522796352583586;
        result[5] += 0.04407294832826747;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        result[0] += 0.023333333333333334;
        result[1] += 0.01;
        result[2] += 0.2966666666666667;
        result[3] += 0.41;
        result[4] += 0.07333333333333333;
        result[5] += 0.18666666666666668;
      } else {
        result[0] += 0.00999000999000999;
        result[1] += 0.001998001998001998;
        result[2] += 0.8791208791208791;
        result[3] += 0.07792207792207792;
        result[4] += 0.000999000999000999;
        result[5] += 0.029970029970029972;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.025362318840579712;
        result[2] += 0;
        result[3] += 0.04710144927536232;
        result[4] += 0.8731884057971014;
        result[5] += 0.05434782608695652;
      } else {
        result[0] += 0.06437454279444038;
        result[1] += 0.0036576444769568397;
        result[2] += 0.000731528895391368;
        result[3] += 0.14484272128749084;
        result[4] += 0.061448427212874905;
        result[5] += 0.7249451353328457;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)53.5) ) ) {
        result[0] += 0.0049261083743842365;
        result[1] += 0.958128078817734;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.03694581280788178;
        result[5] += 0;
      } else {
        result[0] += 0.6153395784543325;
        result[1] += 0.04274004683840749;
        result[2] += 0.07552693208430913;
        result[3] += 0.08372365339578454;
        result[4] += 0.12060889929742388;
        result[5] += 0.06206088992974239;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)100.5) ) ) {
        result[0] += 0;
        result[1] += 0.10309278350515463;
        result[2] += 0.16494845360824742;
        result[3] += 0.27835051546391754;
        result[4] += 0.010309278350515464;
        result[5] += 0.44329896907216493;
      } else {
        result[0] += 0.024390243902439025;
        result[1] += 0;
        result[2] += 0.7804878048780488;
        result[3] += 0.07317073170731707;
        result[4] += 0;
        result[5] += 0.12195121951219512;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
        result[0] += 0.043795620437956206;
        result[1] += 0.010948905109489052;
        result[2] += 0.7299270072992701;
        result[3] += 0.13503649635036497;
        result[4] += 0;
        result[5] += 0.08029197080291971;
      } else {
        result[0] += 0.004566210045662101;
        result[1] += 0;
        result[2] += 0.9680365296803654;
        result[3] += 0.027397260273972605;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.0060790273556231;
        result[1] += 0.11854103343465046;
        result[2] += 0;
        result[3] += 0.00911854103343465;
        result[4] += 0.8328267477203647;
        result[5] += 0.03343465045592705;
      } else {
        result[0] += 0.06449375866851595;
        result[1] += 0.0034674063800277394;
        result[2] += 0.016643550624133148;
        result[3] += 0.1664355062413315;
        result[4] += 0.05894590846047157;
        result[5] += 0.6900138696255201;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
        result[0] += 0.007575757575757576;
        result[1] += 0.8560606060606061;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.125;
        result[5] += 0.011363636363636364;
      } else {
        result[0] += 0.7082738944365193;
        result[1] += 0.01640513552068474;
        result[2] += 0.07703281027104138;
        result[3] += 0.07203994293865908;
        result[4] += 0.05848787446504994;
        result[5] += 0.06776034236804566;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)90.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.08888888888888889;
        result[3] += 0.08888888888888889;
        result[4] += 0.15555555555555556;
        result[5] += 0.6666666666666666;
      } else {
        result[0] += 0.02531645569620253;
        result[1] += 0.06329113924050633;
        result[2] += 0.37341772151898733;
        result[3] += 0.4430379746835443;
        result[4] += 0;
        result[5] += 0.0949367088607595;
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.36363636363636365;
        result[3] += 0.24242424242424243;
        result[4] += 0;
        result[5] += 0.3939393939393939;
      } else {
        result[0] += 0.008998875140607425;
        result[1] += 0.003374578177727784;
        result[2] += 0.9358830146231721;
        result[3] += 0.04499437570303712;
        result[4] += 0;
        result[5] += 0.006749156355455568;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
        result[0] += 0.11572700296735905;
        result[1] += 0.03560830860534125;
        result[2] += 0;
        result[3] += 0.03857566765578635;
        result[4] += 0.7032640949554896;
        result[5] += 0.10682492581602374;
      } else {
        result[0] += 0.004347826086956522;
        result[1] += 0;
        result[2] += 0.00782608695652174;
        result[3] += 0.15304347826086956;
        result[4] += 0.07304347826086957;
        result[5] += 0.7617391304347826;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0.9487179487179487;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.05128205128205128;
        result[5] += 0;
      } else {
        result[0] += 0.6044444444444443;
        result[1] += 0.024999999999999994;
        result[2] += 0.06055555555555554;
        result[3] += 0.10111111111111108;
        result[4] += 0.12666666666666665;
        result[5] += 0.08222222222222221;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
        result[0] += 0;
        result[1] += 0.034482758620689655;
        result[2] += 0.13793103448275862;
        result[3] += 0.3793103448275862;
        result[4] += 0.05172413793103448;
        result[5] += 0.39655172413793105;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6644736842105263;
        result[3] += 0.2894736842105263;
        result[4] += 0;
        result[5] += 0.046052631578947366;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
        result[0] += 0.023255813953488372;
        result[1] += 0.046511627906976744;
        result[2] += 0.5116279069767442;
        result[3] += 0.13953488372093023;
        result[4] += 0.046511627906976744;
        result[5] += 0.23255813953488372;
      } else {
        result[0] += 0.011002444987775063;
        result[1] += 0;
        result[2] += 0.9217603911980441;
        result[3] += 0.06479217603911981;
        result[4] += 0;
        result[5] += 0.002444987775061125;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.003636363636363637;
        result[1] += 0.007272727272727274;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9418181818181819;
        result[5] += 0.04727272727272728;
      } else {
        result[0] += 0.038102643856920686;
        result[1] += 0.005443234836702955;
        result[2] += 0.0007776049766718507;
        result[3] += 0.1702954898911353;
        result[4] += 0.0645412130637636;
        result[5] += 0.7208398133748056;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        result[0] += 0.005628517823639775;
        result[1] += 0.9024390243902439;
        result[2] += 0;
        result[3] += 0.00375234521575985;
        result[4] += 0.08818011257035648;
        result[5] += 0;
      } else {
        result[0] += 0.721093202522775;
        result[1] += 0.028030833917309032;
        result[2] += 0.034337771548703565;
        result[3] += 0.0784863349684653;
        result[4] += 0.09390329362298526;
        result[5] += 0.044148563419761734;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.18235294117647058;
        result[3] += 0.5588235294117647;
        result[4] += 0;
        result[5] += 0.25882352941176473;
      } else {
        result[0] += 0.0410958904109589;
        result[1] += 0.0684931506849315;
        result[2] += 0.726027397260274;
        result[3] += 0.1232876712328767;
        result[4] += 0.0273972602739726;
        result[5] += 0.0136986301369863;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)91.5) ) ) {
        result[0] += 0.04081632653061224;
        result[1] += 0.04081632653061224;
        result[2] += 0.3673469387755102;
        result[3] += 0.16326530612244897;
        result[4] += 0;
        result[5] += 0.3877551020408163;
      } else {
        result[0] += 0.014522821576763488;
        result[1] += 0;
        result[2] += 0.9066390041493777;
        result[3] += 0.0632780082987552;
        result[4] += 0.003112033195020747;
        result[5] += 0.012448132780082988;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)47) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)88.5) ) ) {
        result[0] += 0;
        result[1] += 0.48;
        result[2] += 0;
        result[3] += 0.04;
        result[4] += 0.48;
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
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
        result[0] += 0.0493046776232617;
        result[1] += 0.010745891276864728;
        result[2] += 0.00695322376738306;
        result[3] += 0.14096080910240202;
        result[4] += 0.23135271807838179;
        result[5] += 0.5606826801517067;
      } else {
        result[0] += 0.6104513064133018;
        result[1] += 0.03741092636579573;
        result[2] += 0.0647268408551069;
        result[3] += 0.09204275534441807;
        result[4] += 0.10035629453681712;
        result[5] += 0.09501187648456058;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)93.5) ) ) {
        result[0] += 0.019230769230769232;
        result[1] += 0;
        result[2] += 0.17307692307692307;
        result[3] += 0.09615384615384616;
        result[4] += 0.09615384615384616;
        result[5] += 0.6153846153846154;
      } else {
        result[0] += 0.06766917293233082;
        result[1] += 0.09022556390977443;
        result[2] += 0.5037593984962406;
        result[3] += 0.22556390977443608;
        result[4] += 0.015037593984962405;
        result[5] += 0.09774436090225563;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
        result[0] += 0.03636363636363636;
        result[1] += 0;
        result[2] += 0.4727272727272727;
        result[3] += 0.34545454545454546;
        result[4] += 0;
        result[5] += 0.14545454545454545;
      } else {
        result[0] += 0.003472222222222222;
        result[1] += 0;
        result[2] += 0.9340277777777778;
        result[3] += 0.05787037037037037;
        result[4] += 0;
        result[5] += 0.004629629629629629;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)69.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.0392156862745098;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9411764705882353;
        result[5] += 0.0196078431372549;
      } else {
        result[0] += 0.014910536779324055;
        result[1] += 0.002982107355864811;
        result[2] += 0.002982107355864811;
        result[3] += 0.07952286282306163;
        result[4] += 0.05168986083499006;
        result[5] += 0.8479125248508946;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9616306954436451;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.03836930455635491;
        result[5] += 0;
      } else {
        result[0] += 0.5214007782101168;
        result[1] += 0.03404669260700389;
        result[2] += 0.04815175097276265;
        result[3] += 0.14105058365758755;
        result[4] += 0.1259727626459144;
        result[5] += 0.1293774319066148;
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.2898550724637681;
        result[3] += 0.463768115942029;
        result[4] += 0.014492753623188406;
        result[5] += 0.2318840579710145;
      } else {
        result[0] += 0.04878048780487805;
        result[1] += 0;
        result[2] += 0.7317073170731707;
        result[3] += 0.2032520325203252;
        result[4] += 0;
        result[5] += 0.016260162601626018;
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
        result[0] += 0.015463917525773196;
        result[1] += 0;
        result[2] += 0.7319587628865979;
        result[3] += 0.20103092783505155;
        result[4] += 0;
        result[5] += 0.05154639175257732;
      } else {
        result[0] += 0.014164305949008499;
        result[1] += 0;
        result[2] += 0.9518413597733711;
        result[3] += 0.031161473087818695;
        result[4] += 0;
        result[5] += 0.0028328611898017;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        result[0] += 0.13213213213213212;
        result[1] += 0.018018018018018018;
        result[2] += 0;
        result[3] += 0.003003003003003003;
        result[4] += 0.7717717717717718;
        result[5] += 0.07507507507507508;
      } else {
        result[0] += 0.002413515687851971;
        result[1] += 0.012872083668543845;
        result[2] += 0.02011263073209976;
        result[3] += 0.16170555108608206;
        result[4] += 0.08125502815768303;
        result[5] += 0.7216411906677394;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)104.5) ) ) {
        result[0] += 0.6144578313253013;
        result[1] += 0.0527825588066552;
        result[2] += 0.056798623063683315;
        result[3] += 0.07573149741824442;
        result[4] += 0.10327022375215147;
        result[5] += 0.09695926563396444;
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
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
        result[0] += 0;
        result[1] += 0.07692307692307693;
        result[2] += 0.038461538461538464;
        result[3] += 0.5576923076923077;
        result[4] += 0;
        result[5] += 0.3269230769230769;
      } else {
        result[0] += 0.014084507042253521;
        result[1] += 0.04225352112676056;
        result[2] += 0.49295774647887325;
        result[3] += 0.09859154929577464;
        result[4] += 0.014084507042253521;
        result[5] += 0.3380281690140845;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        result[0] += 0.011583011583011582;
        result[1] += 0;
        result[2] += 0.7760617760617761;
        result[3] += 0.16988416988416988;
        result[4] += 0;
        result[5] += 0.04247104247104247;
      } else {
        result[0] += 0.002805049088359046;
        result[1] += 0;
        result[2] += 0.9635343618513323;
        result[3] += 0.033660589060308554;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
        result[0] += 0.014370245139475908;
        result[1] += 0.005917159763313609;
        result[2] += 0;
        result[3] += 0.039729501267962805;
        result[4] += 0.23076923076923078;
        result[5] += 0.7092138630600169;
      } else {
        result[0] += 0.052478134110787174;
        result[1] += 0.037900874635568516;
        result[2] += 0.05830903790087463;
        result[3] += 0.446064139941691;
        result[4] += 0.03498542274052478;
        result[5] += 0.37026239067055394;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)59.5) ) ) {
        result[0] += 0.004048582995951417;
        result[1] += 0.8785425101214575;
        result[2] += 0;
        result[3] += 0.006072874493927126;
        result[4] += 0.11133603238866396;
        result[5] += 0;
      } else {
        result[0] += 0.5958520179372198;
        result[1] += 0.023542600896860985;
        result[2] += 0.08295964125560538;
        result[3] += 0.0992152466367713;
        result[4] += 0.08688340807174888;
        result[5] += 0.11154708520179372;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0.11428571428571428;
        result[2] += 0.05714285714285714;
        result[3] += 0.17142857142857143;
        result[4] += 0;
        result[5] += 0.6571428571428571;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6949152542372882;
        result[3] += 0.1694915254237288;
        result[4] += 0;
        result[5] += 0.13559322033898305;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        result[0] += 0.029315960912052116;
        result[1] += 0;
        result[2] += 0.7719869706840391;
        result[3] += 0.15960912052117263;
        result[4] += 0;
        result[5] += 0.03908794788273615;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9774557165861514;
        result[3] += 0.017713365539452495;
        result[4] += 0;
        result[5] += 0.004830917874396135;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
        result[0] += 0.011730205278592375;
        result[1] += 0.005865102639296188;
        result[2] += 0.002932551319648094;
        result[3] += 0.017595307917888565;
        result[4] += 0.8328445747800587;
        result[5] += 0.12903225806451613;
      } else {
        result[0] += 0.04980842911877394;
        result[1] += 0.004597701149425287;
        result[2] += 0.0022988505747126436;
        result[3] += 0.1486590038314176;
        result[4] += 0.0475095785440613;
        result[5] += 0.7471264367816092;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)53.5) ) ) {
        result[0] += 0.00447427293064877;
        result[1] += 0.9686800894854587;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.02684563758389262;
        result[5] += 0;
      } else {
        result[0] += 0.6255924170616115;
        result[1] += 0.050947867298578205;
        result[2] += 0.08175355450236968;
        result[3] += 0.0882701421800948;
        result[4] += 0.10071090047393366;
        result[5] += 0.05272511848341233;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.078125;
        result[3] += 0.171875;
        result[4] += 0.015625;
        result[5] += 0.734375;
      } else {
        result[0] += 0.18604651162790697;
        result[1] += 0.4186046511627907;
        result[2] += 0.2558139534883721;
        result[3] += 0.13953488372093023;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        result[0] += 0.017341040462427744;
        result[1] += 0;
        result[2] += 0.7658959537572254;
        result[3] += 0.1676300578034682;
        result[4] += 0;
        result[5] += 0.049132947976878616;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9864864864864865;
        result[3] += 0.013513513513513514;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)97.5) ) ) {
        result[0] += 0.009049773755656111;
        result[1] += 0.0497737556561086;
        result[2] += 0.002262443438914028;
        result[3] += 0.015837104072398193;
        result[4] += 0.8167420814479639;
        result[5] += 0.10633484162895929;
      } else {
        result[0] += 0.004338394793926247;
        result[1] += 0.9566160520607375;
        result[2] += 0;
        result[3] += 0.015184381778741865;
        result[4] += 0.02386117136659436;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
        result[0] += 0.053994082840236685;
        result[1] += 0.005177514792899409;
        result[2] += 0.0022189349112426036;
        result[3] += 0.16420118343195267;
        result[4] += 0.04437869822485207;
        result[5] += 0.7300295857988166;
      } else {
        result[0] += 0.6751677852348993;
        result[1] += 0.03557046979865772;
        result[2] += 0.05704697986577181;
        result[3] += 0.09194630872483221;
        result[4] += 0.07114093959731543;
        result[5] += 0.0691275167785235;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.09375;
        result[3] += 0.75;
        result[4] += 0;
        result[5] += 0.15625;
      } else {
        result[0] += 0.02;
        result[1] += 0;
        result[2] += 0.63;
        result[3] += 0.2;
        result[4] += 0.03;
        result[5] += 0.12;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)99.5) ) ) {
        result[0] += 0.005636978579481398;
        result[1] += 0;
        result[2] += 0.9267192784667418;
        result[3] += 0.05186020293122886;
        result[4] += 0;
        result[5] += 0.015783540022547914;
      } else {
        result[0] += 0.4;
        result[1] += 0;
        result[2] += 0.6;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.014234875444839857;
        result[1] += 0.03202846975088968;
        result[2] += 0;
        result[3] += 0.0071174377224199285;
        result[4] += 0.9181494661921709;
        result[5] += 0.028469750889679714;
      } else {
        result[0] += 0.03927986906710311;
        result[1] += 0.0008183306055646482;
        result[2] += 0;
        result[3] += 0.1546644844517185;
        result[4] += 0.049099836333878884;
        result[5] += 0.7561374795417348;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        result[0] += 0.004301075268817204;
        result[1] += 0.9720430107526882;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.023655913978494623;
        result[5] += 0;
      } else {
        result[0] += 0.6241534988713319;
        result[1] += 0.035553047404063204;
        result[2] += 0.07110609480812641;
        result[3] += 0.09424379232505643;
        result[4] += 0.11173814898419865;
        result[5] += 0.06320541760722348;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.24793388429752067;
        result[3] += 0.4132231404958678;
        result[4] += 0;
        result[5] += 0.33884297520661155;
      } else {
        result[0] += 0.018018018018018018;
        result[1] += 0.013513513513513514;
        result[2] += 0.7882882882882883;
        result[3] += 0.15315315315315314;
        result[4] += 0;
        result[5] += 0.02702702702702703;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)98.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.16666666666666666;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.8333333333333334;
      } else {
        result[0] += 0.00271370420624152;
        result[1] += 0.00407055630936228;
        result[2] += 0.9538670284938943;
        result[3] += 0.03256445047489824;
        result[4] += 0;
        result[5] += 0.0067842605156038;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)69.5) ) ) {
        result[0] += 0.012;
        result[1] += 0.008;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.868;
        result[5] += 0.112;
      } else {
        result[0] += 0.4566929133858268;
        result[1] += 0.15748031496062992;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.3779527559055118;
        result[5] += 0.007874015748031496;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.037604456824512536;
        result[4] += 0.034818941504178275;
        result[5] += 0.9275766016713092;
      } else {
        result[0] += 0.014675052410901468;
        result[1] += 0.016771488469601678;
        result[2] += 0.033542976939203356;
        result[3] += 0.3920335429769392;
        result[4] += 0.09433962264150944;
        result[5] += 0.44863731656184486;
      }
    }
  } else {
    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)51.5) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)76.5) ) ) {
        result[0] += 0;
        result[1] += 0.3333333333333333;
        result[2] += 0;
        result[3] += 0.13333333333333333;
        result[4] += 0.26666666666666666;
        result[5] += 0.26666666666666666;
      } else {
        result[0] += 0;
        result[1] += 0.9854721549636803;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.012106537530266344;
        result[5] += 0.002421307506053269;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
        result[0] += 0.7104736490993997;
        result[1] += 0.0446964643095397;
        result[2] += 0.006004002668445631;
        result[3] += 0.05336891260840561;
        result[4] += 0.11207471647765178;
        result[5] += 0.07338225483655772;
      } else {
        result[0] += 0.02260738507912585;
        result[1] += 0.0015071590052750565;
        result[2] += 0.7686510926902789;
        result[3] += 0.13112283345892992;
        result[4] += 0.003014318010550113;
        result[5] += 0.07309721175584025;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)70.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.0076045627376425855;
        result[1] += 0.0076045627376425855;
        result[2] += 0;
        result[3] += 0.011406844106463879;
        result[4] += 0.935361216730038;
        result[5] += 0.03802281368821293;
      } else {
        result[0] += 0.015180265654648957;
        result[1] += 0.0009487666034155598;
        result[2] += 0;
        result[3] += 0.1347248576850095;
        result[4] += 0.046489563567362426;
        result[5] += 0.8026565464895635;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        result[0] += 0.007263922518159807;
        result[1] += 0.9491525423728814;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.043583535108958835;
        result[5] += 0;
      } else {
        result[0] += 0.5354777672658467;
        result[1] += 0.04588457899716178;
        result[2] += 0.07473982970671712;
        result[3] += 0.1348155156102176;
        result[4] += 0.1130558183538316;
        result[5] += 0.09602649006622517;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)102.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.7037037037037037;
        result[4] += 0;
        result[5] += 0.2962962962962963;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.8333333333333334;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.16666666666666666;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
        result[0] += 0.06818181818181818;
        result[1] += 0.11363636363636363;
        result[2] += 0.4090909090909091;
        result[3] += 0.13636363636363635;
        result[4] += 0.045454545454545456;
        result[5] += 0.22727272727272727;
      } else {
        result[0] += 0.0055617352614015575;
        result[1] += 0;
        result[2] += 0.9343715239154616;
        result[3] += 0.05116796440489433;
        result[4] += 0;
        result[5] += 0.008898776418242492;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.15718157181571815;
        result[1] += 0.04607046070460705;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7018970189701897;
        result[5] += 0.0948509485094851;
      } else {
        result[0] += 0.0008375209380234506;
        result[1] += 0.01340033500837521;
        result[2] += 0.020938023450586266;
        result[3] += 0.15577889447236182;
        result[4] += 0.048576214405360134;
        result[5] += 0.7604690117252931;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9775967413441955;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.02240325865580448;
        result[5] += 0;
      } else {
        result[0] += 0.6817891373801918;
        result[1] += 0.03067092651757189;
        result[2] += 0.04664536741214058;
        result[3] += 0.07028753993610225;
        result[4] += 0.11565495207667734;
        result[5] += 0.0549520766773163;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.047619047619047616;
        result[3] += 0.06349206349206349;
        result[4] += 0.09523809523809523;
        result[5] += 0.7936507936507936;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.25806451612903225;
        result[3] += 0.5032258064516129;
        result[4] += 0;
        result[5] += 0.23870967741935484;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
        result[0] += 0.07894736842105263;
        result[1] += 0.039473684210526314;
        result[2] += 0.32894736842105265;
        result[3] += 0.13157894736842105;
        result[4] += 0.21052631578947367;
        result[5] += 0.21052631578947367;
      } else {
        result[0] += 0.002190580503833516;
        result[1] += 0.001095290251916758;
        result[2] += 0.9331872946330778;
        result[3] += 0.05805038335158817;
        result[4] += 0;
        result[5] += 0.00547645125958379;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)88.5) ) ) {
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)95) ) ) {
        result[0] += 0.1050646551724138;
        result[1] += 0.007543103448275862;
        result[2] += 0.011853448275862068;
        result[3] += 0.11637931034482758;
        result[4] += 0.22629310344827586;
        result[5] += 0.5328663793103449;
      } else {
        result[0] += 0.726109857035365;
        result[1] += 0.04665161775771257;
        result[2] += 0.039879608728367204;
        result[3] += 0.08126410835214448;
        result[4] += 0.06245297215951844;
        result[5] += 0.04364183596689241;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)88) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.15151515151515152;
        result[5] += 0.8484848484848485;
      } else {
        result[0] += 0.14049586776859505;
        result[1] += 0.0371900826446281;
        result[2] += 0.3760330578512397;
        result[3] += 0.29338842975206614;
        result[4] += 0.008264462809917356;
        result[5] += 0.1446280991735537;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.34146341463414637;
        result[3] += 0.2926829268292683;
        result[4] += 0;
        result[5] += 0.36585365853658536;
      } else {
        result[0] += 0.0011350737797956867;
        result[1] += 0.00340522133938706;
        result[2] += 0.927355278093076;
        result[3] += 0.06469920544835414;
        result[4] += 0;
        result[5] += 0.00340522133938706;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)69.5) ) ) {
        result[0] += 0.003521126760563381;
        result[1] += 0.003521126760563381;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9542253521126761;
        result[5] += 0.03873239436619719;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.75;
        result[4] += 0.25;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
        result[0] += 0.0012642225031605564;
        result[1] += 0;
        result[2] += 0.006321112515802781;
        result[3] += 0.029077117572692796;
        result[4] += 0.03666245259165613;
        result[5] += 0.9266750948166877;
      } else {
        result[0] += 0.12254901960784313;
        result[1] += 0.011437908496732025;
        result[2] += 0.0032679738562091504;
        result[3] += 0.34967320261437906;
        result[4] += 0.08986928104575163;
        result[5] += 0.42320261437908496;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)104.5) ) ) {
        result[0] += 0.7294685990338164;
        result[1] += 0.07315389924085576;
        result[2] += 0.012422360248447204;
        result[3] += 0.03795721187025535;
        result[4] += 0.11594202898550725;
        result[5] += 0.031055900621118012;
      } else {
        result[0] += 0.01;
        result[1] += 0.98;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.01;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
        result[0] += 0.015957446808510637;
        result[1] += 0;
        result[2] += 0.43617021276595747;
        result[3] += 0.39361702127659576;
        result[4] += 0.007978723404255319;
        result[5] += 0.14627659574468085;
      } else {
        result[0] += 0.03406593406593407;
        result[1] += 0.0021978021978021982;
        result[2] += 0.8868131868131869;
        result[3] += 0.04175824175824176;
        result[4] += 0;
        result[5] += 0.03516483516483517;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.00390625;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.96484375;
        result[5] += 0.03125;
      } else {
        result[0] += 0.05898491083676269;
        result[1] += 0.010973936899862825;
        result[2] += 0.0027434842249657062;
        result[3] += 0.18449931412894377;
        result[4] += 0.059670781893004114;
        result[5] += 0.6831275720164609;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69.5) ) ) {
        result[0] += 0.012006861063464836;
        result[1] += 0.8164665523156089;
        result[2] += 0.00686106346483705;
        result[3] += 0.003430531732418525;
        result[4] += 0.16123499142367068;
        result[5] += 0;
      } else {
        result[0] += 0.694019471488178;
        result[1] += 0.030598052851182198;
        result[2] += 0.08623087621696801;
        result[3] += 0.08623087621696801;
        result[4] += 0.048678720445062586;
        result[5] += 0.054242002781641166;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.14084507042253525;
        result[3] += 0.47887323943661975;
        result[4] += 0.028169014084507046;
        result[5] += 0.35211267605633806;
      } else {
        result[0] += 0;
        result[1] += 0.02631578947368421;
        result[2] += 0.6973684210526315;
        result[3] += 0.15789473684210525;
        result[4] += 0.013157894736842105;
        result[5] += 0.10526315789473684;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
        result[0] += 0.29411764705882354;
        result[1] += 0;
        result[2] += 0.3235294117647059;
        result[3] += 0.20588235294117646;
        result[4] += 0;
        result[5] += 0.17647058823529413;
      } else {
        result[0] += 0.0021978021978021982;
        result[1] += 0;
        result[2] += 0.9175824175824177;
        result[3] += 0.07032967032967034;
        result[4] += 0;
        result[5] += 0.009890109890109891;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        result[0] += 0.10256410256410256;
        result[1] += 0.01282051282051282;
        result[2] += 0.003205128205128205;
        result[3] += 0;
        result[4] += 0.7756410256410257;
        result[5] += 0.10576923076923077;
      } else {
        result[0] += 0;
        result[1] += 0.008733624454148471;
        result[2] += 0.0069868995633187774;
        result[3] += 0.15807860262008733;
        result[4] += 0.05764192139737991;
        result[5] += 0.7685589519650655;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)50) ) ) {
        result[0] += 0.002325581395348837;
        result[1] += 0.9674418604651163;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.030232558139534883;
        result[5] += 0;
      } else {
        result[0] += 0.6523096129837704;
        result[1] += 0.049313358302122356;
        result[2] += 0.03495630461922598;
        result[3] += 0.0717852684144819;
        result[4] += 0.11111111111111112;
        result[5] += 0.0805243445692884;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)87.5) ) ) {
        result[0] += 0.016129032258064516;
        result[1] += 0.056451612903225805;
        result[2] += 0.18548387096774194;
        result[3] += 0.08870967741935484;
        result[4] += 0.16129032258064516;
        result[5] += 0.49193548387096775;
      } else {
        result[0] += 0;
        result[1] += 0.020202020202020204;
        result[2] += 0.24242424242424243;
        result[3] += 0.6060606060606061;
        result[4] += 0;
        result[5] += 0.13131313131313133;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
        result[0] += 0.07111111111111111;
        result[1] += 0.008888888888888889;
        result[2] += 0.5333333333333333;
        result[3] += 0.29333333333333333;
        result[4] += 0.0044444444444444444;
        result[5] += 0.08888888888888889;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9313835770528684;
        result[3] += 0.05736782902137234;
        result[4] += 0;
        result[5] += 0.011248593925759281;
      }
    }
  }
  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)69.5) ) ) {
        result[0] += 0.043333333333333335;
        result[1] += 0.023333333333333334;
        result[2] += 0;
        result[3] += 0.03333333333333333;
        result[4] += 0.7633333333333333;
        result[5] += 0.13666666666666666;
      } else {
        result[0] += 0.6319018404907976;
        result[1] += 0.05828220858895705;
        result[2] += 0;
        result[3] += 0.012269938650306749;
        result[4] += 0.2822085889570552;
        result[5] += 0.015337423312883436;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
        result[0] += 0.032461677186654644;
        result[1] += 0.013525698827772768;
        result[2] += 0.002705139765554554;
        result[3] += 0.06672678088367899;
        result[4] += 0.09107303877366997;
        result[5] += 0.7935076645626691;
      } else {
        result[0] += 0.01580135440180587;
        result[1] += 0.01805869074492099;
        result[2] += 0.05869074492099323;
        result[3] += 0.5056433408577878;
        result[4] += 0.03160270880361174;
        result[5] += 0.37020316027088035;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69.5) ) ) {
        result[0] += 0.0102880658436214;
        result[1] += 0.9382716049382716;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.04938271604938271;
        result[5] += 0.00205761316872428;
      } else {
        result[0] += 0.8875545851528385;
        result[1] += 0.028384279475982533;
        result[2] += 0.008733624454148471;
        result[3] += 0.024017467248908297;
        result[4] += 0.034934497816593885;
        result[5] += 0.016375545851528384;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.31914893617021284;
        result[3] += 0.4042553191489362;
        result[4] += 0.026595744680851068;
        result[5] += 0.25000000000000006;
      } else {
        result[0] += 0.035916824196597356;
        result[1] += 0;
        result[2] += 0.8818525519848771;
        result[3] += 0.06805293005671077;
        result[4] += 0.000945179584120983;
        result[5] += 0.013232514177693762;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        result[0] += 0.011450381679389313;
        result[1] += 0.019083969465648856;
        result[2] += 0;
        result[3] += 0.003816793893129771;
        result[4] += 0.9045801526717557;
        result[5] += 0.061068702290076333;
      } else {
        result[0] += 0.026646928201332347;
        result[1] += 0.0044411547002220575;
        result[2] += 0;
        result[3] += 0.153960029607698;
        result[4] += 0.07031828275351591;
        result[5] += 0.7446336047372317;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
        result[0] += 0.00205761316872428;
        result[1] += 0.8662551440329218;
        result[2] += 0;
        result[3] += 0.006172839506172839;
        result[4] += 0.12551440329218108;
        result[5] += 0;
      } else {
        result[0] += 0.6527093596059114;
        result[1] += 0.034482758620689655;
        result[2] += 0.06834975369458128;
        result[3] += 0.09729064039408868;
        result[4] += 0.08004926108374384;
        result[5] += 0.06711822660098522;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.08928571428571429;
        result[3] += 0.19642857142857142;
        result[4] += 0.05357142857142857;
        result[5] += 0.6607142857142857;
      } else {
        result[0] += 0.04861111111111111;
        result[1] += 0.11805555555555555;
        result[2] += 0.4097222222222222;
        result[3] += 0.2847222222222222;
        result[4] += 0.0625;
        result[5] += 0.0763888888888889;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.42857142857142855;
        result[3] += 0.4523809523809524;
        result[4] += 0;
        result[5] += 0.11904761904761904;
      } else {
        result[0] += 0.00232288037166086;
        result[1] += 0;
        result[2] += 0.9477351916376308;
        result[3] += 0.04529616724738677;
        result[4] += 0;
        result[5] += 0.00464576074332172;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)47) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90) ) ) {
        result[0] += 0;
        result[1] += 0.33333333333333337;
        result[2] += 0;
        result[3] += 0.2380952380952381;
        result[4] += 0.33333333333333337;
        result[5] += 0.09523809523809525;
      } else {
        result[0] += 0;
        result[1] += 0.995049504950495;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.0049504950495049506;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
        result[0] += 0.04169611307420495;
        result[1] += 0.007067137809187279;
        result[2] += 0.0007067137809187279;
        result[3] += 0.13427561837455831;
        result[4] += 0.2049469964664311;
        result[5] += 0.6113074204946997;
      } else {
        result[0] += 0.6152471709350805;
        result[1] += 0.05419892793329363;
        result[2] += 0.0440738534842168;
        result[3] += 0.06372840976771889;
        result[4] += 0.14294222751637883;
        result[5] += 0.0798094103633115;
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)80) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.13953488372093023;
        result[3] += 0.23255813953488372;
        result[4] += 0.023255813953488372;
        result[5] += 0.6046511627906976;
      } else {
        result[0] += 0.09090909090909091;
        result[1] += 0.4;
        result[2] += 0.07272727272727272;
        result[3] += 0.32727272727272727;
        result[4] += 0.10909090909090909;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
        result[0] += 0.04722222222222222;
        result[1] += 0.008333333333333333;
        result[2] += 0.6527777777777778;
        result[3] += 0.2222222222222222;
        result[4] += 0;
        result[5] += 0.06944444444444445;
      } else {
        result[0] += 0.002777777777777778;
        result[1] += 0;
        result[2] += 0.9416666666666667;
        result[3] += 0.05555555555555555;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        result[0] += 0.023166023166023165;
        result[1] += 0.019305019305019305;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8996138996138996;
        result[5] += 0.05791505791505792;
      } else {
        result[0] += 0.03271028037383177;
        result[1] += 0.006230529595015576;
        result[2] += 0;
        result[3] += 0.1658878504672897;
        result[4] += 0.056074766355140186;
        result[5] += 0.7390965732087228;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)52.5) ) ) {
        result[0] += 0.0044444444444444444;
        result[1] += 0.9666666666666667;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.028888888888888888;
        result[5] += 0;
      } else {
        result[0] += 0.5849673202614379;
        result[1] += 0.04084967320261438;
        result[2] += 0.08387799564270153;
        result[3] += 0.10729847494553377;
        result[4] += 0.1056644880174292;
        result[5] += 0.07734204793028322;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)113.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.2558139534883721;
        result[3] += 0.20930232558139536;
        result[4] += 0;
        result[5] += 0.5348837209302325;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        result[0] += 0.00684931506849315;
        result[1] += 0.010273972602739725;
        result[2] += 0.8082191780821918;
        result[3] += 0.13013698630136986;
        result[4] += 0.010273972602739725;
        result[5] += 0.03424657534246575;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9740853658536586;
        result[3] += 0.022865853658536585;
        result[4] += 0;
        result[5] += 0.003048780487804878;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        result[0] += 0.013029315960912053;
        result[1] += 0.0781758957654723;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8338762214983714;
        result[5] += 0.0749185667752443;
      } else {
        result[0] += 0.04296545914069082;
        result[1] += 0.005897219882055603;
        result[2] += 0.010951979780960405;
        result[3] += 0.15669755686604886;
        result[4] += 0.06402695871946082;
        result[5] += 0.7194608256107835;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)104.5) ) ) {
        result[0] += 0.6371257485029941;
        result[1] += 0.06526946107784433;
        result[2] += 0.035928143712574856;
        result[3] += 0.08682634730538924;
        result[4] += 0.11736526946107786;
        result[5] += 0.05748502994011977;
      } else {
        result[0] += 0.007874015748031496;
        result[1] += 0.9921259842519685;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
        result[0] += 0;
        result[1] += 0.013100436681222707;
        result[2] += 0.2096069868995633;
        result[3] += 0.45414847161572053;
        result[4] += 0.021834061135371178;
        result[5] += 0.30131004366812225;
      } else {
        result[0] += 0.06557377049180328;
        result[1] += 0.06557377049180328;
        result[2] += 0.7213114754098361;
        result[3] += 0.06557377049180328;
        result[4] += 0.03278688524590164;
        result[5] += 0.04918032786885246;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)75.5) ) ) {
        result[0] += 0.359375;
        result[1] += 0.03125;
        result[2] += 0.3125;
        result[3] += 0.046875;
        result[4] += 0;
        result[5] += 0.25;
      } else {
        result[0] += 0.007551240560949299;
        result[1] += 0;
        result[2] += 0.9255663430420712;
        result[3] += 0.061488673139158574;
        result[4] += 0;
        result[5] += 0.005393743257820928;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.008298755186721992;
        result[2] += 0;
        result[3] += 0.012448132780082987;
        result[4] += 0.8755186721991701;
        result[5] += 0.1037344398340249;
      } else {
        result[0] += 0.03849114703618168;
        result[1] += 0.0023094688221709007;
        result[2] += 0.0007698229407236335;
        result[3] += 0.1578137028483449;
        result[4] += 0.06774441878367975;
        result[5] += 0.7328714395688991;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        result[0] += 0.0022471910112359553;
        result[1] += 0.9685393258426966;
        result[2] += 0;
        result[3] += 0.0022471910112359553;
        result[4] += 0.02696629213483146;
        result[5] += 0;
      } else {
        result[0] += 0.6241610738255035;
        result[1] += 0.05257270693512305;
        result[2] += 0.055369127516778534;
        result[3] += 0.09395973154362418;
        result[4] += 0.10906040268456377;
        result[5] += 0.06487695749440717;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)85.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.25882352941176473;
        result[3] += 0.5294117647058824;
        result[4] += 0.011764705882352941;
        result[5] += 0.2;
      } else {
        result[0] += 0.05454545454545454;
        result[1] += 0;
        result[2] += 0.7272727272727273;
        result[3] += 0.14545454545454545;
        result[4] += 0;
        result[5] += 0.07272727272727272;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
        result[0] += 0.027777777777777776;
        result[1] += 0;
        result[2] += 0.7777777777777778;
        result[3] += 0.14814814814814814;
        result[4] += 0;
        result[5] += 0.046296296296296294;
      } else {
        result[0] += 0.012422360248447204;
        result[1] += 0;
        result[2] += 0.9329192546583851;
        result[3] += 0.05093167701863354;
        result[4] += 0;
        result[5] += 0.0037267080745341614;
      }
    }
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)61.5) ) ) {
        result[0] += 0.004608294930875576;
        result[1] += 0.04608294930875576;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9354838709677419;
        result[5] += 0.013824884792626729;
      } else {
        result[0] += 0.3877551020408163;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.01020408163265306;
        result[4] += 0.2857142857142857;
        result[5] += 0.3163265306122449;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)84.5) ) ) {
        result[0] += 0.0027881040892193307;
        result[1] += 0.010223048327137546;
        result[2] += 0.01486988847583643;
        result[3] += 0.07713754646840149;
        result[4] += 0.07156133828996282;
        result[5] += 0.8234200743494424;
      } else {
        result[0] += 0;
        result[1] += 0.006711409395973154;
        result[2] += 0.013422818791946308;
        result[3] += 0.697986577181208;
        result[4] += 0.013422818791946308;
        result[5] += 0.2684563758389262;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)53.5) ) ) {
        result[0] += 0.0044444444444444444;
        result[1] += 0.9355555555555556;
        result[2] += 0;
        result[3] += 0.0022222222222222222;
        result[4] += 0.057777777777777775;
        result[5] += 0;
      } else {
        result[0] += 0.5922771152754117;
        result[1] += 0.03520726859738785;
        result[2] += 0.05053946621237933;
        result[3] += 0.0868824531516184;
        result[4] += 0.12890403180011356;
        result[5] += 0.10618966496308915;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
        result[0] += 0.08764044943820226;
        result[1] += 0.022471910112359553;
        result[2] += 0.5775280898876406;
        result[3] += 0.24719101123595508;
        result[4] += 0.013483146067415732;
        result[5] += 0.05168539325842697;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9682539682539683;
        result[3] += 0.03015873015873016;
        result[4] += 0;
        result[5] += 0.0015873015873015873;
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
