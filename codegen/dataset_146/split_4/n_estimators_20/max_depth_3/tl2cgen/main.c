
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
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        result[0] += 0.15151515151515152;
        result[1] += 0.03333333333333333;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7272727272727273;
        result[5] += 0.08787878787878788;
      } else {
        result[0] += 0.0037735849056603774;
        result[1] += 0.0009433962264150943;
        result[2] += 0.0037735849056603774;
        result[3] += 0.1650943396226415;
        result[4] += 0.045283018867924525;
        result[5] += 0.7811320754716982;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.001694915254237288;
        result[1] += 0.8288135593220339;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.16779661016949152;
        result[5] += 0.001694915254237288;
      } else {
        result[0] += 0.672496984318456;
        result[1] += 0.026537997587454766;
        result[2] += 0.07177322074788903;
        result[3] += 0.097708082026538;
        result[4] += 0.07056694813027745;
        result[5] += 0.0609167671893848;
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)94.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
        result[0] += 0;
        result[1] += 0.02127659574468085;
        result[2] += 0.09219858156028368;
        result[3] += 0.2765957446808511;
        result[4] += 0.10638297872340426;
        result[5] += 0.5035460992907801;
      } else {
        result[0] += 0.034482758620689655;
        result[1] += 0;
        result[2] += 0.7241379310344828;
        result[3] += 0.1206896551724138;
        result[4] += 0;
        result[5] += 0.1206896551724138;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.2857142857142857;
        result[3] += 0.3492063492063492;
        result[4] += 0;
        result[5] += 0.36507936507936506;
      } else {
        result[0] += 0.005399568034557235;
        result[1] += 0.0021598272138228943;
        result[2] += 0.9146868250539957;
        result[3] += 0.07451403887688984;
        result[4] += 0;
        result[5] += 0.0032397408207343412;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        result[0] += 0.13881748071979436;
        result[1] += 0.028277634961439587;
        result[2] += 0;
        result[3] += 0.02056555269922879;
        result[4] += 0.6735218508997429;
        result[5] += 0.13881748071979436;
      } else {
        result[0] += 0.004266211604095563;
        result[1] += 0.002559726962457338;
        result[2] += 0.0017064846416382253;
        result[3] += 0.15102389078498293;
        result[4] += 0.04778156996587031;
        result[5] += 0.7926621160409556;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.0018018018018018018;
        result[1] += 0.8216216216216217;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.17297297297297298;
        result[5] += 0.0036036036036036037;
      } else {
        result[0] += 0.7055374592833876;
        result[1] += 0.024755700325732898;
        result[2] += 0.04495114006514658;
        result[3] += 0.07296416938110749;
        result[4] += 0.08990228013029317;
        result[5] += 0.06188925081433225;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
        result[0] += 0;
        result[1] += 0.056818181818181816;
        result[2] += 0.07954545454545454;
        result[3] += 0.625;
        result[4] += 0.07954545454545454;
        result[5] += 0.1590909090909091;
      } else {
        result[0] += 0.14054054054054052;
        result[1] += 0.03243243243243243;
        result[2] += 0.4918918918918918;
        result[3] += 0.18918918918918914;
        result[4] += 0.03243243243243243;
        result[5] += 0.11351351351351349;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.3333333333333333;
        result[3] += 0.5416666666666666;
        result[4] += 0;
        result[5] += 0.125;
      } else {
        result[0] += 0.003416856492027335;
        result[1] += 0;
        result[2] += 0.9248291571753986;
        result[3] += 0.0683371298405467;
        result[4] += 0;
        result[5] += 0.003416856492027335;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        result[0] += 0.016339869281045753;
        result[1] += 0.0032679738562091504;
        result[2] += 0.016339869281045753;
        result[3] += 0;
        result[4] += 0.8921568627450981;
        result[5] += 0.0718954248366013;
      } else {
        result[0] += 0.030477759472817133;
        result[1] += 0.008237232289950576;
        result[2] += 0;
        result[3] += 0.1556836902800659;
        result[4] += 0.05930807248764415;
        result[5] += 0.7462932454695222;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)52.5) ) ) {
        result[0] += 0.008602150537634409;
        result[1] += 0.9483870967741935;
        result[2] += 0.0064516129032258064;
        result[3] += 0.010752688172043012;
        result[4] += 0.023655913978494623;
        result[5] += 0.002150537634408602;
      } else {
        result[0] += 0.6355194428322692;
        result[1] += 0.035403366221706326;
        result[2] += 0.0673244341265235;
        result[3] += 0.07893209518282066;
        result[4] += 0.11201392919326755;
        result[5] += 0.07080673244341265;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)91.5) ) ) {
        result[0] += 0;
        result[1] += 0.1125;
        result[2] += 0.0625;
        result[3] += 0.15;
        result[4] += 0.075;
        result[5] += 0.6;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.4634146341463415;
        result[3] += 0.36585365853658536;
        result[4] += 0;
        result[5] += 0.17073170731707318;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
        result[0] += 0.012295081967213115;
        result[1] += 0;
        result[2] += 0.7663934426229508;
        result[3] += 0.20081967213114754;
        result[4] += 0.004098360655737705;
        result[5] += 0.01639344262295082;
      } else {
        result[0] += 0.026685393258426966;
        result[1] += 0;
        result[2] += 0.9396067415730337;
        result[3] += 0.03089887640449438;
        result[4] += 0;
        result[5] += 0.0028089887640449437;
      }
    }
  }
  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)69.5) ) ) {
        result[0] += 0.01937984496124031;
        result[1] += 0.01937984496124031;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8410852713178295;
        result[5] += 0.12015503875968993;
      } else {
        result[0] += 0.5590361445783133;
        result[1] += 0.06506024096385542;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.3614457831325301;
        result[5] += 0.014457831325301205;
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0011389521640091116;
        result[3] += 0.05466970387243736;
        result[4] += 0.05694760820045558;
        result[5] += 0.8872437357630979;
      } else {
        result[0] += 0.030534351145038167;
        result[1] += 0.03816793893129771;
        result[2] += 0.061068702290076333;
        result[3] += 0.4213740458015267;
        result[4] += 0.10381679389312977;
        result[5] += 0.3450381679389313;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69.5) ) ) {
        result[0] += 0.006160164271047226;
        result[1] += 0.9137577002053386;
        result[2] += 0.008213552361396302;
        result[3] += 0;
        result[4] += 0.06981519507186856;
        result[5] += 0.0020533880903490756;
      } else {
        result[0] += 0.8546209761163032;
        result[1] += 0.023883696780893044;
        result[2] += 0.04257528556593977;
        result[3] += 0.029075804776739357;
        result[4] += 0.036344755970924195;
        result[5] += 0.013499480789200415;
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)78.5) ) ) {
        result[0] += 0.23376623376623376;
        result[1] += 0.012987012987012988;
        result[2] += 0.38961038961038963;
        result[3] += 0.2077922077922078;
        result[4] += 0.012987012987012988;
        result[5] += 0.14285714285714285;
      } else {
        result[0] += 0.026532479414455627;
        result[1] += 0.0027447392497712718;
        result[2] += 0.868252516010979;
        result[3] += 0.07959743824336687;
        result[4] += 0.0018298261665141812;
        result[5] += 0.021043000914913082;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.03272727272727273;
        result[2] += 0;
        result[3] += 0.03272727272727273;
        result[4] += 0.8654545454545455;
        result[5] += 0.06909090909090909;
      } else {
        result[0] += 0.046031746031746035;
        result[1] += 0.006349206349206349;
        result[2] += 0.003968253968253968;
        result[3] += 0.14761904761904762;
        result[4] += 0.06111111111111111;
        result[5] += 0.734920634920635;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        result[0] += 0.002192982456140351;
        result[1] += 0.9583333333333335;
        result[2] += 0;
        result[3] += 0.002192982456140351;
        result[4] += 0.03728070175438597;
        result[5] += 0;
      } else {
        result[0] += 0.6173325830050648;
        result[1] += 0.0517726505346089;
        result[2] += 0.05627462014631403;
        result[3] += 0.08216094541361847;
        result[4] += 0.12886888013505912;
        result[5] += 0.06359032076533484;
      }
    }
  } else {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)103) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        result[0] += 0.018018018018018018;
        result[1] += 0;
        result[2] += 0.3783783783783784;
        result[3] += 0.46846846846846846;
        result[4] += 0;
        result[5] += 0.13513513513513514;
      } else {
        result[0] += 0.010101010101010102;
        result[1] += 0;
        result[2] += 0.8282828282828283;
        result[3] += 0.13131313131313133;
        result[4] += 0;
        result[5] += 0.030303030303030304;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.48;
        result[3] += 0.24;
        result[4] += 0;
        result[5] += 0.28;
      } else {
        result[0] += 0.014580801944106925;
        result[1] += 0;
        result[2] += 0.9331713244228432;
        result[3] += 0.0425273390036452;
        result[4] += 0;
        result[5] += 0.009720534629404616;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
        result[0] += 0.013029315960912053;
        result[1] += 0.003257328990228013;
        result[2] += 0.019543973941368076;
        result[3] += 0.006514657980456026;
        result[4] += 0.8566775244299675;
        result[5] += 0.10097719869706841;
      } else {
        result[0] += 0.030508474576271188;
        result[1] += 0.00423728813559322;
        result[2] += 0.005084745762711864;
        result[3] += 0.15932203389830507;
        result[4] += 0.03898305084745763;
        result[5] += 0.761864406779661;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9878048780487805;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.012195121951219513;
        result[5] += 0;
      } else {
        result[0] += 0.640625;
        result[1] += 0.024305555555555556;
        result[2] += 0.078125;
        result[3] += 0.0931712962962963;
        result[4] += 0.09259259259259259;
        result[5] += 0.07118055555555555;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)72.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.03125;
        result[3] += 0;
        result[4] += 0.09375;
        result[5] += 0.875;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.21666666666666667;
        result[3] += 0.45;
        result[4] += 0.016666666666666666;
        result[5] += 0.31666666666666665;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        result[0] += 0.0462046204620462;
        result[1] += 0.026402640264026403;
        result[2] += 0.6501650165016502;
        result[3] += 0.1848184818481848;
        result[4] += 0.006600660066006601;
        result[5] += 0.0858085808580858;
      } else {
        result[0] += 0.0027624309392265197;
        result[1] += 0.00828729281767956;
        result[2] += 0.9337016574585636;
        result[3] += 0.0483425414364641;
        result[4] += 0;
        result[5] += 0.006906077348066299;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
        result[0] += 0.018292682926829267;
        result[1] += 0.01524390243902439;
        result[2] += 0;
        result[3] += 0.003048780487804878;
        result[4] += 0.8902439024390244;
        result[5] += 0.07317073170731707;
      } else {
        result[0] += 0.04328621908127209;
        result[1] += 0.0008833922261484099;
        result[2] += 0.00265017667844523;
        result[3] += 0.1519434628975265;
        result[4] += 0.03445229681978799;
        result[5] += 0.7667844522968198;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        result[0] += 0.007130124777183601;
        result[1] += 0.8377896613190732;
        result[2] += 0.005347593582887701;
        result[3] += 0.0035650623885918006;
        result[4] += 0.13903743315508024;
        result[5] += 0.007130124777183601;
      } else {
        result[0] += 0.7180616740088106;
        result[1] += 0.04216488357457521;
        result[2] += 0.03901825047199497;
        result[3] += 0.07551919446192575;
        result[4] += 0.07174323473882946;
        result[5] += 0.05349276274386407;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)50) ) ) {
        result[0] += 0;
        result[1] += 0.8421052631578947;
        result[2] += 0.10526315789473684;
        result[3] += 0.05263157894736842;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.03488372093023256;
        result[1] += 0.023255813953488372;
        result[2] += 0.18604651162790697;
        result[3] += 0.37209302325581395;
        result[4] += 0.08139534883720931;
        result[5] += 0.3023255813953488;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        result[0] += 0.06137184115523466;
        result[1] += 0;
        result[2] += 0.700361010830325;
        result[3] += 0.184115523465704;
        result[4] += 0;
        result[5] += 0.05415162454873647;
      } else {
        result[0] += 0.004010695187165776;
        result[1] += 0;
        result[2] += 0.9585561497326203;
        result[3] += 0.03342245989304813;
        result[4] += 0;
        result[5] += 0.004010695187165776;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
        result[0] += 0.2349137931034483;
        result[1] += 0.00646551724137931;
        result[2] += 0.004310344827586207;
        result[3] += 0.010775862068965518;
        result[4] += 0.6573275862068966;
        result[5] += 0.08620689655172414;
      } else {
        result[0] += 0.004591368227731864;
        result[1] += 0.0036730945821854912;
        result[2] += 0.0018365472910927456;
        result[3] += 0.09825528007346189;
        result[4] += 0.11386593204775022;
        result[5] += 0.7777777777777778;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        result[0] += 0.006185567010309278;
        result[1] += 0.934020618556701;
        result[2] += 0;
        result[3] += 0.008247422680412371;
        result[4] += 0.05154639175257732;
        result[5] += 0;
      } else {
        result[0] += 0.5906705539358602;
        result[1] += 0.032069970845481056;
        result[2] += 0.07463556851311955;
        result[3] += 0.15860058309037903;
        result[4] += 0.0577259475218659;
        result[5] += 0.08629737609329448;
      }
    }
  } else {
    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)97.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.11627906976744186;
        result[3] += 0.32558139534883723;
        result[4] += 0;
        result[5] += 0.5581395348837209;
      } else {
        result[0] += 0.05357142857142857;
        result[1] += 0.17857142857142858;
        result[2] += 0.5714285714285714;
        result[3] += 0.03571428571428571;
        result[4] += 0.03571428571428571;
        result[5] += 0.125;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5;
        result[3] += 0.3194444444444444;
        result[4] += 0;
        result[5] += 0.18055555555555555;
      } else {
        result[0] += 0.011086474501108648;
        result[1] += 0;
        result[2] += 0.9223946784922394;
        result[3] += 0.06541019955654102;
        result[4] += 0;
        result[5] += 0.0011086474501108647;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.004081632653061225;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9755102040816327;
        result[5] += 0.02040816326530612;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.5454545454545454;
        result[5] += 0.45454545454545453;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
        result[0] += 0.001358695652173913;
        result[1] += 0.001358695652173913;
        result[2] += 0.004076086956521739;
        result[3] += 0.029891304347826088;
        result[4] += 0.03260869565217391;
        result[5] += 0.9307065217391305;
      } else {
        result[0] += 0.10357142857142858;
        result[1] += 0.014285714285714285;
        result[2] += 0;
        result[3] += 0.32857142857142857;
        result[4] += 0.05892857142857143;
        result[5] += 0.49464285714285716;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        result[0] += 0.015929203539823012;
        result[1] += 0.8017699115044249;
        result[2] += 0.001769911504424779;
        result[3] += 0.003539823008849558;
        result[4] += 0.16283185840707967;
        result[5] += 0.014159292035398232;
      } else {
        result[0] += 0.7676107480029049;
        result[1] += 0.034858387799564274;
        result[2] += 0.006535947712418301;
        result[3] += 0.05737109658678286;
        result[4] += 0.08859840232389252;
        result[5] += 0.04502541757443718;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        result[0] += 0.0032258064516129037;
        result[1] += 0;
        result[2] += 0.40645161290322585;
        result[3] += 0.3516129032258065;
        result[4] += 0.009677419354838712;
        result[5] += 0.22903225806451616;
      } else {
        result[0] += 0.04403131115459882;
        result[1] += 0.0029354207436399216;
        result[2] += 0.8620352250489237;
        result[3] += 0.07045009784735812;
        result[4] += 0.0029354207436399216;
        result[5] += 0.01761252446183953;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.007547169811320755;
        result[1] += 0.03018867924528302;
        result[2] += 0.01509433962264151;
        result[3] += 0;
        result[4] += 0.8679245283018868;
        result[5] += 0.07924528301886792;
      } else {
        result[0] += 0.036057692307692304;
        result[1] += 0.011217948717948718;
        result[2] += 0.019230769230769232;
        result[3] += 0.1674679487179487;
        result[4] += 0.060897435897435896;
        result[5] += 0.7051282051282052;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)54.5) ) ) {
        result[0] += 0;
        result[1] += 0.9584905660377359;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.04150943396226415;
        result[5] += 0;
      } else {
        result[0] += 0.6415954415954416;
        result[1] += 0.02564102564102564;
        result[2] += 0.06153846153846154;
        result[3] += 0.08603988603988603;
        result[4] += 0.11566951566951567;
        result[5] += 0.06951566951566951;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
        result[0] += 0;
        result[1] += 0.037037037037037035;
        result[2] += 0.07407407407407407;
        result[3] += 0.5925925925925926;
        result[4] += 0;
        result[5] += 0.2962962962962963;
      } else {
        result[0] += 0;
        result[1] += 0.07246376811594203;
        result[2] += 0.5362318840579711;
        result[3] += 0.057971014492753624;
        result[4] += 0.014492753623188406;
        result[5] += 0.3188405797101449;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.14285714285714285;
        result[3] += 0.7142857142857143;
        result[4] += 0;
        result[5] += 0.14285714285714285;
      } else {
        result[0] += 0.014476614699331848;
        result[1] += 0;
        result[2] += 0.9164810690423163;
        result[3] += 0.062360801781737196;
        result[4] += 0;
        result[5] += 0.0066815144766146995;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0.004;
        result[1] += 0.028;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.92;
        result[5] += 0.048;
      } else {
        result[0] += 0.03937007874015748;
        result[1] += 0.010498687664041995;
        result[2] += 0.0017497812773403325;
        result[3] += 0.1679790026246719;
        result[4] += 0.03762029746281715;
        result[5] += 0.7427821522309711;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0.9565217391304348;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.043478260869565216;
        result[5] += 0;
      } else {
        result[0] += 0.6259977194982896;
        result[1] += 0.02565564424173318;
        result[2] += 0.056442417331812995;
        result[3] += 0.0895096921322691;
        result[4] += 0.12770809578107184;
        result[5] += 0.07468643101482327;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)91.5) ) ) {
        result[0] += 0;
        result[1] += 0.07086614173228346;
        result[2] += 0.047244094488188976;
        result[3] += 0.2992125984251969;
        result[4] += 0.023622047244094488;
        result[5] += 0.5590551181102362;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5126050420168067;
        result[3] += 0.31932773109243695;
        result[4] += 0;
        result[5] += 0.16806722689075632;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)96.5) ) ) {
        result[0] += 0.011013215859030838;
        result[1] += 0;
        result[2] += 0.9008810572687225;
        result[3] += 0.08480176211453745;
        result[4] += 0;
        result[5] += 0.003303964757709251;
      } else {
        result[0] += 0.3384615384615385;
        result[1] += 0;
        result[2] += 0.6307692307692307;
        result[3] += 0.03076923076923077;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)59.5) ) ) {
        result[0] += 0.1746031746031746;
        result[1] += 0.007936507936507936;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.6785714285714286;
        result[5] += 0.1388888888888889;
      } else {
        result[0] += 0.0008216926869350862;
        result[1] += 0.009038619556285949;
        result[2] += 0.018898931799506986;
        result[3] += 0.14708299096138044;
        result[4] += 0.07313064913722268;
        result[5] += 0.7510271158586689;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        result[0] += 0.0036363636363636364;
        result[1] += 0.8690909090909091;
        result[2] += 0.005454545454545455;
        result[3] += 0;
        result[4] += 0.12181818181818181;
        result[5] += 0;
      } else {
        result[0] += 0.6536697247706422;
        result[1] += 0.014334862385321102;
        result[2] += 0.05791284403669725;
        result[3] += 0.0911697247706422;
        result[4] += 0.10321100917431193;
        result[5] += 0.07970183486238532;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)96) ) ) {
        result[0] += 0;
        result[1] += 0.13333333333333333;
        result[2] += 0.044444444444444446;
        result[3] += 0.17777777777777778;
        result[4] += 0;
        result[5] += 0.6444444444444445;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5517241379310345;
        result[3] += 0.1724137931034483;
        result[4] += 0.06896551724137931;
        result[5] += 0.20689655172413793;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7083333333333334;
        result[3] += 0.2569444444444444;
        result[4] += 0;
        result[5] += 0.034722222222222224;
      } else {
        result[0] += 0.010650887573964499;
        result[1] += 0;
        result[2] += 0.9278106508875741;
        result[3] += 0.049704142011834325;
        result[4] += 0;
        result[5] += 0.01183431952662722;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        result[0] += 0.008086253369272238;
        result[1] += 0.07277628032345014;
        result[2] += 0.0026954177897574125;
        result[3] += 0.01078167115902965;
        result[4] += 0.8086253369272237;
        result[5] += 0.09703504043126684;
      } else {
        result[0] += 0.03852889667250438;
        result[1] += 0;
        result[2] += 0.0070052539404553416;
        result[3] += 0.15148861646234676;
        result[4] += 0.0647985989492119;
        result[5] += 0.7381786339754816;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)53.5) ) ) {
        result[0] += 0.00205761316872428;
        result[1] += 0.9609053497942387;
        result[2] += 0;
        result[3] += 0.00411522633744856;
        result[4] += 0.02880658436213992;
        result[5] += 0.00411522633744856;
      } else {
        result[0] += 0.6443488943488944;
        result[1] += 0.030712530712530717;
        result[2] += 0.038697788697788706;
        result[3] += 0.08476658476658477;
        result[4] += 0.10196560196560198;
        result[5] += 0.09950859950859953;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)97.5) ) ) {
        result[0] += 0;
        result[1] += 0.06557377049180328;
        result[2] += 0.01639344262295082;
        result[3] += 0.7540983606557377;
        result[4] += 0.03278688524590164;
        result[5] += 0.13114754098360656;
      } else {
        result[0] += 0;
        result[1] += 0.021739130434782608;
        result[2] += 0.2717391304347826;
        result[3] += 0.358695652173913;
        result[4] += 0.03260869565217391;
        result[5] += 0.31521739130434784;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        result[0] += 0.014285714285714287;
        result[1] += 0;
        result[2] += 0.6000000000000001;
        result[3] += 0.30000000000000004;
        result[4] += 0;
        result[5] += 0.08571428571428573;
      } else {
        result[0] += 0.03090507726269316;
        result[1] += 0.00772626931567329;
        result[2] += 0.9061810154525386;
        result[3] += 0.04966887417218543;
        result[4] += 0.0011037527593818985;
        result[5] += 0.004415011037527594;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.1638888888888889;
        result[1] += 0.002777777777777778;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7388888888888889;
        result[5] += 0.09444444444444444;
      } else {
        result[0] += 0;
        result[1] += 0.004440497335701598;
        result[2] += 0.006216696269982238;
        result[3] += 0.16785079928952043;
        result[4] += 0.06216696269982238;
        result[5] += 0.7593250444049734;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        result[0] += 0.0036968576709796672;
        result[1] += 0.8391866913123844;
        result[2] += 0.0018484288354898336;
        result[3] += 0.011090573012939002;
        result[4] += 0.14417744916820702;
        result[5] += 0;
      } else {
        result[0] += 0.7219672131147541;
        result[1] += 0.03344262295081967;
        result[2] += 0.0380327868852459;
        result[3] += 0.06622950819672131;
        result[4] += 0.08065573770491803;
        result[5] += 0.05967213114754098;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)75.5) ) ) {
        result[0] += 0;
        result[1] += 0.011764705882352941;
        result[2] += 0;
        result[3] += 0.7647058823529411;
        result[4] += 0.023529411764705882;
        result[5] += 0.2;
      } else {
        result[0] += 0;
        result[1] += 0.017964071856287425;
        result[2] += 0.4431137724550898;
        result[3] += 0.20359281437125748;
        result[4] += 0.017964071856287425;
        result[5] += 0.31736526946107785;
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
        result[0] += 0.1415929203539823;
        result[1] += 0;
        result[2] += 0.5663716814159292;
        result[3] += 0.1592920353982301;
        result[4] += 0.02654867256637168;
        result[5] += 0.10619469026548672;
      } else {
        result[0] += 0.007700770077007701;
        result[1] += 0;
        result[2] += 0.922992299229923;
        result[3] += 0.06050605060506051;
        result[4] += 0;
        result[5] += 0.0088008800880088;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.10726643598615918;
        result[1] += 0.006920415224913495;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7716262975778547;
        result[5] += 0.11418685121107267;
      } else {
        result[0] += 0;
        result[1] += 0.0070921985815602835;
        result[2] += 0.004432624113475178;
        result[3] += 0.14716312056737588;
        result[4] += 0.05585106382978723;
        result[5] += 0.7854609929078015;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
        result[0] += 0;
        result[1] += 0.927734375;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.072265625;
        result[5] += 0;
      } else {
        result[0] += 0.6384149697303247;
        result[1] += 0.02201430930104568;
        result[2] += 0.06494221243808475;
        result[3] += 0.10511832691249312;
        result[4] += 0.09631260319207485;
        result[5] += 0.07319757842597689;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)83.5) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
        result[0] += 0;
        result[1] += 0.02857142857142857;
        result[2] += 0.3047619047619048;
        result[3] += 0.4666666666666667;
        result[4] += 0;
        result[5] += 0.2;
      } else {
        result[0] += 0.05063291139240506;
        result[1] += 0.02531645569620253;
        result[2] += 0.7278481012658228;
        result[3] += 0.08860759493670886;
        result[4] += 0;
        result[5] += 0.10759493670886076;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7966101694915254;
        result[3] += 0.1807909604519774;
        result[4] += 0;
        result[5] += 0.022598870056497175;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9625;
        result[3] += 0.0375;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.01440922190201729;
        result[1] += 0.05475504322766571;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8760806916426513;
        result[5] += 0.05475504322766571;
      } else {
        result[0] += 0.06527977044476327;
        result[1] += 0.01291248206599713;
        result[2] += 0.020086083213773313;
        result[3] += 0.19870875179340028;
        result[4] += 0.04232424677187949;
        result[5] += 0.6606886657101865;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)60.5) ) ) {
        result[0] += 0.014571948998178506;
        result[1] += 0.8761384335154827;
        result[2] += 0.012750455373406194;
        result[3] += 0.014571948998178506;
        result[4] += 0.08196721311475409;
        result[5] += 0;
      } else {
        result[0] += 0.6984858459512838;
        result[1] += 0.03620803159973668;
        result[2] += 0.05529953917050692;
        result[3] += 0.05529953917050692;
        result[4] += 0.0947992100065833;
        result[5] += 0.05990783410138249;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)107) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.23076923076923078;
        result[3] += 0.44871794871794873;
        result[4] += 0;
        result[5] += 0.32051282051282054;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.5;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)90) ) ) {
        result[0] += 0.13953488372093023;
        result[1] += 0.11627906976744186;
        result[2] += 0.4883720930232558;
        result[3] += 0.06976744186046512;
        result[4] += 0;
        result[5] += 0.18604651162790697;
      } else {
        result[0] += 0.004640371229698376;
        result[1] += 0;
        result[2] += 0.9234338747099768;
        result[3] += 0.060324825986078884;
        result[4] += 0;
        result[5] += 0.01160092807424594;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        result[0] += 0.0037174721189591076;
        result[1] += 0.026022304832713755;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9442379182156134;
        result[5] += 0.026022304832713755;
      } else {
        result[0] += 0.053747161241483724;
        result[1] += 0.009084027252081756;
        result[2] += 0.000757002271006813;
        result[3] += 0.161998485995458;
        result[4] += 0.07191521574564724;
        result[5] += 0.7024981074943225;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)58.5) ) ) {
        result[0] += 0;
        result[1] += 0.9278752436647173;
        result[2] += 0.011695906432748537;
        result[3] += 0.007797270955165692;
        result[4] += 0.050682261208576995;
        result[5] += 0.001949317738791423;
      } else {
        result[0] += 0.6910828025477708;
        result[1] += 0.020382165605095544;
        result[2] += 0.06433121019108282;
        result[3] += 0.08598726114649682;
        result[4] += 0.08343949044585988;
        result[5] += 0.054777070063694276;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)75.5) ) ) {
        result[0] += 0.0761904761904762;
        result[1] += 0.08571428571428572;
        result[2] += 0.1619047619047619;
        result[3] += 0.09523809523809523;
        result[4] += 0.19047619047619047;
        result[5] += 0.3904761904761905;
      } else {
        result[0] += 0.03139013452914798;
        result[1] += 0.004484304932735426;
        result[2] += 0.515695067264574;
        result[3] += 0.30493273542600896;
        result[4] += 0.004484304932735426;
        result[5] += 0.13901345291479822;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        result[0] += 0.024242424242424242;
        result[1] += 0;
        result[2] += 0.7818181818181819;
        result[3] += 0.15757575757575756;
        result[4] += 0;
        result[5] += 0.03636363636363636;
      } else {
        result[0] += 0.0015151515151515154;
        result[1] += 0;
        result[2] += 0.9636363636363637;
        result[3] += 0.03333333333333334;
        result[4] += 0;
        result[5] += 0.0015151515151515154;
      }
    }
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)84.5) ) ) {
        result[0] += 0.05019305019305019;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.806949806949807;
        result[5] += 0.14285714285714285;
      } else {
        result[0] += 0.3473684210526316;
        result[1] += 0.3263157894736842;
        result[2] += 0;
        result[3] += 0.021052631578947368;
        result[4] += 0.25263157894736843;
        result[5] += 0.05263157894736842;
      }
    } else {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)85.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0028653295128939827;
        result[3] += 0.024355300859598854;
        result[4] += 0.055873925501432664;
        result[5] += 0.9169054441260746;
      } else {
        result[0] += 0;
        result[1] += 0.016018306636155607;
        result[2] += 0.043478260869565216;
        result[3] += 0.38215102974828374;
        result[4] += 0.059496567505720827;
        result[5] += 0.4988558352402746;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        result[0] += 0.005660377358490566;
        result[1] += 0.8452830188679246;
        result[2] += 0;
        result[3] += 0.011320754716981131;
        result[4] += 0.1320754716981132;
        result[5] += 0.005660377358490566;
      } else {
        result[0] += 0.7223313686967912;
        result[1] += 0.039947609692206947;
        result[2] += 0.02357563850687623;
        result[3] += 0.06679764243614933;
        result[4] += 0.09823182711198429;
        result[5] += 0.049115913555992145;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        result[0] += 0.031055900621118012;
        result[1] += 0.024844720496894408;
        result[2] += 0.2857142857142857;
        result[3] += 0.34782608695652173;
        result[4] += 0.046583850931677016;
        result[5] += 0.2639751552795031;
      } else {
        result[0] += 0.020876826722338204;
        result[1] += 0;
        result[2] += 0.8903966597077244;
        result[3] += 0.07724425887265135;
        result[4] += 0;
        result[5] += 0.011482254697286013;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        result[0] += 0.0035971223021582736;
        result[1] += 0.0539568345323741;
        result[2] += 0;
        result[3] += 0.017985611510791366;
        result[4] += 0.89568345323741;
        result[5] += 0.02877697841726619;
      } else {
        result[0] += 0.05697151424287856;
        result[1] += 0.006746626686656672;
        result[2] += 0.02623688155922039;
        result[3] += 0.15442278860569716;
        result[4] += 0.09820089955022489;
        result[5] += 0.6574212893553223;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        result[0] += 0.00390625;
        result[1] += 0.84765625;
        result[2] += 0.00390625;
        result[3] += 0.01953125;
        result[4] += 0.115234375;
        result[5] += 0.009765625;
      } else {
        result[0] += 0.6990536277602524;
        result[1] += 0.022712933753943218;
        result[2] += 0.050473186119873815;
        result[3] += 0.07066246056782334;
        result[4] += 0.05741324921135647;
        result[5] += 0.09968454258675079;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)90) ) ) {
        result[0] += 0;
        result[1] += 0.015625;
        result[2] += 0.125;
        result[3] += 0.078125;
        result[4] += 0.15625;
        result[5] += 0.625;
      } else {
        result[0] += 0.06;
        result[1] += 0.02;
        result[2] += 0.24;
        result[3] += 0.54;
        result[4] += 0;
        result[5] += 0.14;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5714285714285714;
        result[3] += 0.37142857142857144;
        result[4] += 0;
        result[5] += 0.05714285714285714;
      } else {
        result[0] += 0.0200445434298441;
        result[1] += 0.005567928730512249;
        result[2] += 0.9086859688195991;
        result[3] += 0.05011135857461024;
        result[4] += 0;
        result[5] += 0.015590200445434299;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)99) ) ) {
        result[0] += 0.011261261261261262;
        result[1] += 0.09234234234234236;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8265765765765767;
        result[5] += 0.06981981981981983;
      } else {
        result[0] += 0.00221729490022173;
        result[1] += 0.9645232815964524;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.03325942350332595;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
        result[0] += 0.05578011317704123;
        result[1] += 0.012934518997574777;
        result[2] += 0.012934518997574777;
        result[3] += 0.1746160064672595;
        result[4] += 0.038803556992724336;
        result[5] += 0.7049312853678253;
      } else {
        result[0] += 0.6650031191515907;
        result[1] += 0.01684341859014348;
        result[2] += 0.06737367436057393;
        result[3] += 0.08858390517779165;
        result[4] += 0.08234560199625701;
        result[5] += 0.07985028072364317;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
        result[0] += 0.010638297872340425;
        result[1] += 0.0851063829787234;
        result[2] += 0.18085106382978725;
        result[3] += 0.3829787234042553;
        result[4] += 0.031914893617021274;
        result[5] += 0.30851063829787234;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7307692307692307;
        result[3] += 0.19230769230769232;
        result[4] += 0;
        result[5] += 0.07692307692307693;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
        result[0] += 0.3181818181818182;
        result[1] += 0.09090909090909091;
        result[2] += 0.13636363636363635;
        result[3] += 0;
        result[4] += 0.2727272727272727;
        result[5] += 0.18181818181818182;
      } else {
        result[0] += 0.004333694474539545;
        result[1] += 0;
        result[2] += 0.9306608884073673;
        result[3] += 0.05742145178764897;
        result[4] += 0;
        result[5] += 0.007583965330444204;
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
