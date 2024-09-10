
#include "header.h"


static const int32_t num_class[] = {  7, };

int32_t get_num_target(void) {
  return N_TARGET;
}
void get_num_class(int32_t* out) {
  for (int i = 0; i < N_TARGET; ++i) {
    out[i] = num_class[i];
  }
}
int32_t get_num_feature(void) {
  return 7;
}
const char* get_threshold_type(void) {
  return "float32";
}
const char* get_leaf_output_type(void) {
  return "float32";
}


void predict(union Entry* data, int pred_margin, float* result) {
  unsigned int tmp;
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)1725.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
        result[0] += 0.9995372707386841;
        result[1] += 0;
        result[2] += 0.00046272926131583377;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9979919678714859;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.002008032128514056;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-305.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0.0035419126328217238;
        result[1] += 0.0023612750885478157;
        result[2] += 0;
        result[3] += 0.2255017709563164;
        result[4] += 0.768595041322314;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5740169912036689;
        result[1] += 0.0006766408540711225;
        result[2] += 0.005864220735283062;
        result[3] += 0.3983910984136531;
        result[4] += 0.019697767085181565;
        result[5] += 0.0006014585369521089;
        result[6] += 0.0007518231711901361;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.16543665436654367;
        result[1] += 0.015990159901599015;
        result[2] += 0.004305043050430504;
        result[3] += 0.8142681426814268;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
        result[0] += 0.13448873483535528;
        result[1] += 0;
        result[2] += 0.008665511265164644;
        result[3] += 0.7611785095320623;
        result[4] += 0.09289428076256499;
        result[5] += 0.0027729636048526864;
        result[6] += 0;
      } else {
        result[0] += 0.9082658551165698;
        result[1] += 0.00029889679908700614;
        result[2] += 0.0019292429759252216;
        result[3] += 0.08923428074561165;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002717243628063692;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-135) ) ) {
        result[0] += 0.2;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
        result[0] += 0.01529051987767584;
        result[1] += 0.03363914373088685;
        result[2] += 0;
        result[3] += 0.1345565749235474;
        result[4] += 0.8165137614678899;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.1525974025974026;
        result[1] += 0.008928571428571428;
        result[2] += 0;
        result[3] += 0.838474025974026;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        result[0] += 0.2923076923076923;
        result[1] += 0;
        result[2] += 0.036923076923076927;
        result[3] += 0.6707692307692308;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.017982799061767005;
        result[4] += 0.982017200938233;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-185) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
        result[0] += 0.9985020970641102;
        result[1] += 0;
        result[2] += 0.0014979029358897543;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9996509141685213;
        result[1] += 0;
        result[2] += 0.0002618143736091112;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 8.727145786970373e-05;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0.0011947431302270011;
        result[1] += 0.0047789725209080045;
        result[2] += 0;
        result[3] += 0.24014336917562723;
        result[4] += 0.7538829151732378;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5744936234058514;
        result[1] += 0.000900225056264066;
        result[2] += 0.0064516129032258064;
        result[3] += 0.39392348087021756;
        result[4] += 0.022955738934733683;
        result[5] += 0.0006001500375093774;
        result[6] += 0.0006751687921980495;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.17834394904458598;
        result[1] += 0.016560509554140127;
        result[2] += 0.0070063694267515925;
        result[3] += 0.7980891719745223;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)115.5) ) ) {
        result[0] += 0.3440936502305782;
        result[1] += 0.001418942887548776;
        result[2] += 0.005675771550195104;
        result[3] += 0.6481021638879035;
        result[4] += 0.000709471443774388;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.006557377049180328;
        result[1] += 0.019672131147540985;
        result[2] += 0;
        result[3] += 0.21967213114754097;
        result[4] += 0.7540983606557377;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)71) ) ) {
        result[0] += 0.5083333333333333;
        result[1] += 0;
        result[2] += 0.03125;
        result[3] += 0.46041666666666664;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.038280725319006045;
        result[4] += 0.9617192746809939;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
        result[0] += 0.25;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.75;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9996186408359393;
        result[1] += 0;
        result[2] += 0.00034322324765464113;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.813591640607124e-05;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.8040859707132736;
        result[1] += 0.0007085498346717054;
        result[2] += 0.005196032120925839;
        result[3] += 0.18410486537553145;
        result[4] += 0.0043693906471421835;
        result[5] += 0.0005904581955597545;
        result[6] += 0.0009447331128956072;
      } else {
        result[0] += 0;
        result[1] += 0.0010772959870724483;
        result[2] += 0.007541071909507138;
        result[3] += 0.8079719903043362;
        result[4] += 0.1828709938055481;
        result[5] += 0.0005386479935362242;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        result[0] += 0.4614882506527415;
        result[1] += 0;
        result[2] += 0.0097911227154047;
        result[3] += 0.5267624020887729;
        result[4] += 0.0019582245430809398;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.16267547481420314;
        result[1] += 0.009083402146985962;
        result[2] += 0.005780346820809248;
        result[3] += 0.8224607762180016;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.004555808656036446;
        result[1] += 0.018223234624145785;
        result[2] += 0;
        result[3] += 0.5056947608200456;
        result[4] += 0.4715261958997722;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.02169491525423729;
        result[4] += 0.9783050847457627;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82) ) ) {
        result[0] += 0.12534511319712865;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.871893981225842;
        result[4] += 0.0005521811154058532;
        result[5] += 0.0022087244616234127;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.02609727164887307;
        result[3] += 0;
        result[4] += 0.9715302491103203;
        result[5] += 0.002372479240806643;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.9933248684926538;
        result[1] += 0.0006530019952838745;
        result[2] += 0.0009432251042989299;
        result[3] += 0.004679847632867767;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00039905677489570105;
      } else {
        result[0] += 0.6451762523191095;
        result[1] += 0;
        result[2] += 0.003478664192949907;
        result[3] += 0.350765306122449;
        result[4] += 0;
        result[5] += 0.00011595547309833024;
        result[6] += 0.00046382189239332097;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
        result[0] += 0.0010362694300518134;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9989637305699481;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.08942351339083068;
        result[1] += 0;
        result[2] += 0.008170676350431231;
        result[3] += 0.9010440308669996;
        result[4] += 0;
        result[5] += 0.0013617793917385383;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.9867349070398997;
        result[1] += 0.0005222477543346564;
        result[2] += 0.001845275398649119;
        result[3] += 0.010793120256249565;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00010444955086693127;
      } else {
        result[0] += 0.6510538641686183;
        result[1] += 0;
        result[2] += 0.003981264637002343;
        result[3] += 0.34391100702576116;
        result[4] += 0;
        result[5] += 0.0005854800936768151;
        result[6] += 0.0004683840749414521;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.1576862123613312;
        result[1] += 0.01664025356576862;
        result[2] += 0;
        result[3] += 0.8256735340729001;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)16) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.2125;
        result[1] += 0;
        result[2] += 0.028125;
        result[3] += 0.759375;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-327) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9994627575885491;
        result[1] += 0;
        result[2] += 0.0005372424114509383;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
        result[0] += 0.5529127023869138;
        result[1] += 0.0010849607744950762;
        result[2] += 0.005675179435820398;
        result[3] += 0.37931897846770163;
        result[4] += 0.059672842597229186;
        result[5] += 0.0003338340844600234;
        result[6] += 0.0010015022533800702;
      } else {
        result[0] += 0.48411297440423656;
        result[1] += 0;
        result[2] += 0.00617828773168579;
        result[3] += 0.3967343336275375;
        result[4] += 0.11209179170344219;
        result[5] += 0;
        result[6] += 0.00088261253309797;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
        result[0] += 0.13819095477386933;
        result[1] += 0.010678391959798994;
        result[2] += 0.008793969849246231;
        result[3] += 0.8423366834170855;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-327) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.9952221691352127;
        result[1] += 0;
        result[2] += 0.0033444816053511705;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.001433349259436216;
      } else {
        result[0] += 0.9995435495248766;
        result[1] += 0;
        result[2] += 0.0004564504751234491;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)93.5) ) ) {
        result[0] += 0.5355060034305318;
        result[1] += 0.0024871355060034307;
        result[2] += 0.004631217838765009;
        result[3] += 0.3101200686106346;
        result[4] += 0.1471698113207547;
        result[5] += 8.576329331046312e-05;
        result[6] += 0;
      } else {
        result[0] += 0.9598765432098764;
        result[1] += 0;
        result[2] += 0.014917695473251025;
        result[3] += 0.019547325102880656;
        result[4] += 0.0010288065843621398;
        result[5] += 0.0005144032921810699;
        result[6] += 0.004115226337448559;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
        result[0] += 0;
        result[1] += 0.001659475605708596;
        result[2] += 0.010952538997676734;
        result[3] += 0.8367076003982742;
        result[4] += 0.14935280451377364;
        result[5] += 0.001327580484566877;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.6656976744186046;
        result[4] += 0.33430232558139533;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)8.5) ) ) {
        result[0] += 0.276075344391341;
        result[1] += 0.003092493674444757;
        result[2] += 0.002249086308687096;
        result[3] += 0.5184143941523756;
        result[4] += 0.20016868147315153;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9743589743589743;
        result[4] += 0.02564102564102564;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.006042296072507553;
        result[1] += 0.03625377643504532;
        result[2] += 0;
        result[3] += 0.25075528700906347;
        result[4] += 0.7069486404833837;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.03767123287671233;
        result[4] += 0.9623287671232876;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.9372201837950651;
        result[1] += 0.0004712693977850338;
        result[2] += 0.001514794492880466;
        result[3] += 0.055542464738950414;
        result[4] += 0.004981990776584643;
        result[5] += 0.0001346483993671525;
        result[6] += 0.0001346483993671525;
      } else {
        result[0] += 0.6456720212643013;
        result[1] += 0;
        result[2] += 0.005431642205015601;
        result[3] += 0.3467005662775916;
        result[4] += 0.0011556685542586387;
        result[5] += 0.00011556685542586386;
        result[6] += 0.0009245348434069109;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        result[0] += 0.0015375153751537515;
        result[1] += 0;
        result[2] += 0.0027675276752767526;
        result[3] += 0.9529520295202952;
        result[4] += 0.03905289052890529;
        result[5] += 0.0036900369003690036;
        result[6] += 0;
      } else {
        result[0] += 0.5235042735042735;
        result[1] += 0;
        result[2] += 0.004985754985754986;
        result[3] += 0;
        result[4] += 0.47150997150997154;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.28888888888888886;
        result[4] += 0.7111111111111111;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.008778930566640064;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.99122106943336;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
        result[0] += 0.9957786116322702;
        result[1] += 0.0003908692933083177;
        result[2] += 0.0009380863039399625;
        result[3] += 0.002892432770481551;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9935862445414847;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.006277292576419214;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00013646288209606986;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        result[0] += 0.9599168303107313;
        result[1] += 0.0019637287744022182;
        result[2] += 0.0035809171768511035;
        result[3] += 0.034076469908744376;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00046205382927111014;
      } else {
        result[0] += 0.6169580211677964;
        result[1] += 0;
        result[2] += 0.005232488999881079;
        result[3] += 0.37697704840052326;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0008324414317992627;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-310) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
        result[0] += 0.9993696419566314;
        result[1] += 0;
        result[2] += 0.0006303580433686334;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9983552631578947;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.001644736842105263;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.6076070336391438;
        result[1] += 0.0009556574923547402;
        result[2] += 0.004396024464831805;
        result[3] += 0.29931192660550465;
        result[4] += 0.08639143730886852;
        result[5] += 0.00019113149847094804;
        result[6] += 0.0011467889908256884;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.02494802494802495;
        result[3] += 0.851004851004851;
        result[4] += 0.12196812196812197;
        result[5] += 0.002079002079002079;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5457941809124873;
        result[1] += 0.002603871844220537;
        result[2] += 0.006226650062266501;
        result[3] += 0.44311106079474705;
        result[4] += 0;
        result[5] += 0.0012453300124533003;
        result[6] += 0.0010189063738254276;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)53.5) ) ) {
        result[0] += 0.9790046963179289;
        result[1] += 0.0003946485654524646;
        result[2] += 0.0006709025612691898;
        result[3] += 0.019219385137535024;
        result[4] += 0.000513043135088204;
        result[5] += 7.892971309049292e-05;
        result[6] += 0.00011839456963573938;
      } else {
        result[0] += 0.618485410693203;
        result[1] += 0;
        result[2] += 0.0067465002529937595;
        result[3] += 0.3312531624219936;
        result[4] += 0.04250295159386069;
        result[5] += 0.00033732501264968796;
        result[6] += 0.0006746500252993759;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        result[0] += 0.6453097345132743;
        result[1] += 0;
        result[2] += 0.005073746312684366;
        result[3] += 0.34820058997050146;
        result[4] += 0.0009439528023598821;
        result[5] += 0;
        result[6] += 0.00047197640117994103;
      } else {
        result[0] += 0.0014792899408284023;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9985207100591716;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
        result[0] += 0.18432026688907424;
        result[1] += 0.006672226855713094;
        result[2] += 0;
        result[3] += 0.8065054211843202;
        result[4] += 0.0025020850708924102;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0755939524838013;
        result[1] += 0;
        result[2] += 0.008639308855291577;
        result[3] += 0.24838012958963282;
        result[4] += 0.6673866090712743;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
        result[0] += 0.001589825119236884;
        result[1] += 0.019077901430842606;
        result[2] += 0;
        result[3] += 0.033386327503974564;
        result[4] += 0.9459459459459459;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.20489296636085627;
        result[4] += 0.7951070336391437;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.6527143581938103;
        result[1] += 0;
        result[2] += 0.010147133434804667;
        result[3] += 0.33536276002029425;
        result[4] += 0.0005073566717402334;
        result[5] += 0;
        result[6] += 0.0012683916793505834;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9987316642770486;
        result[1] += 0;
        result[2] += 0.0007720304400573508;
        result[3] += 0;
        result[4] += 0.00022058012573067168;
        result[5] += 0;
        result[6] += 0.0002757251571633396;
      } else {
        result[0] += 0.6852895950794464;
        result[1] += 0.0029044934221766614;
        result[2] += 0.0020502306509482316;
        result[3] += 0.2991628224841961;
        result[4] += 0.009738595592004101;
        result[5] += 0.00034170510849137196;
        result[6] += 0.0005125576627370579;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2306.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.2501146263182027;
        result[1] += 0.006189821182943605;
        result[2] += 0.002063273727647868;
        result[3] += 0.7414030261348007;
        result[4] += 0;
        result[5] += 0.00022925263640531868;
        result[6] += 0;
      } else {
        result[0] += 0.4642857142857143;
        result[1] += 0;
        result[2] += 0.02295918367346939;
        result[3] += 0.5127551020408163;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += 0.9943977591036415;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.0056022408963585435;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0021328458257160268;
        result[1] += 0;
        result[2] += 0.007617306520414382;
        result[3] += 0.7096282754418037;
        result[4] += 0.27757464960390005;
        result[5] += 0.0030469226081657527;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.99157223796034;
        result[1] += 0.0006019830028328612;
        result[2] += 0.0013810198300283287;
        result[3] += 0.006090651558073654;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0003541076487252125;
      } else {
        result[0] += 0.6422307962118555;
        result[1] += 0;
        result[2] += 0.005027475739506606;
        result[3] += 0.3521571378463697;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00058459020226821;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
        result[0] += 0.15518546555639667;
        result[1] += 0.00757002271006813;
        result[2] += 0.00757002271006813;
        result[3] += 0.8296744890234671;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0;
        result[1] += 0.037914691943127965;
        result[2] += 0;
        result[3] += 0.3293838862559242;
        result[4] += 0.6327014218009479;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.02308917197452229;
        result[4] += 0.9769108280254777;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        result[0] += 0.8279335488235737;
        result[1] += 0.0011275652108546947;
        result[2] += 0.0027061565060512672;
        result[3] += 0.1672555062767797;
        result[4] += 0.0003758550702848982;
        result[5] += 0.0002255130421709389;
        result[6] += 0.0003758550702848982;
      } else {
        result[0] += 0.969146190957029;
        result[1] += 0;
        result[2] += 0.001795130707954673;
        result[3] += 0.01492202400987322;
        result[4] += 0.013912262986648716;
        result[5] += 0.00022439133849433412;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        result[0] += 0.6439350305264371;
        result[1] += 0;
        result[2] += 0.0048381522866029255;
        result[3] += 0.3496140997580924;
        result[4] += 0.000806358714433821;
        result[5] += 0.00011519410206197443;
        result[6] += 0.0006911646123718466;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)111.5) ) ) {
        result[0] += 0.20902612826603326;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.5736342042755345;
        result[4] += 0.2173396674584323;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.020161290322580645;
        result[1] += 0.012096774193548387;
        result[2] += 0;
        result[3] += 0.1935483870967742;
        result[4] += 0.7741935483870968;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.13073394495412843;
        result[1] += 0.014908256880733946;
        result[2] += 0.013761467889908258;
        result[3] += 0.8405963302752294;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
        result[0] += 0.3657544378698225;
        result[1] += 0.0025887573964497044;
        result[2] += 0.0036982248520710057;
        result[3] += 0.6268491124260355;
        result[4] += 0.0011094674556213018;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.002257336343115124;
        result[1] += 0;
        result[2] += 0.0056433408577878106;
        result[3] += 0.19413092550790068;
        result[4] += 0.7979683972911964;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
        result[0] += 0.006472491909385114;
        result[1] += 0.011326860841423949;
        result[2] += 0;
        result[3] += 0.05501618122977346;
        result[4] += 0.9271844660194175;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.2180232558139535;
        result[4] += 0.7819767441860465;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
        result[0] += 0.9993947189225997;
        result[1] += 0;
        result[2] += 0.000529620942725278;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.566013467503972e-05;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0.002355712603062426;
        result[1] += 0.005889281507656066;
        result[2] += 0;
        result[3] += 0.22025912838633688;
        result[4] += 0.7714958775029447;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5976331360946746;
        result[1] += 0.00034302375439499187;
        result[2] += 0.006860475087899837;
        result[3] += 0.38238573021181715;
        result[4] += 0.011577051710830975;
        result[5] += 0.0009433153245862276;
        result[6] += 0.0002572678157962439;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        result[0] += 0.0062202707647274055;
        result[1] += 0.005122575923893158;
        result[2] += 0.005122575923893158;
        result[3] += 0.7025246981339188;
        result[4] += 0.2810098792535675;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9906444906444907;
        result[1] += 0;
        result[2] += 0.009355509355509356;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)123.5) ) ) {
        result[0] += 0;
        result[1] += 0.0041841004184100415;
        result[2] += 0;
        result[3] += 0.17782426778242677;
        result[4] += 0.8179916317991632;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.010330578512396695;
        result[2] += 0;
        result[3] += 0.022727272727272728;
        result[4] += 0.9669421487603306;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)27) ) ) {
        result[0] += 0.7032743542810657;
        result[1] += 0;
        result[2] += 0.006711409395973154;
        result[3] += 0.2647956070774863;
        result[4] += 0.025015253203172667;
        result[5] += 0;
        result[6] += 0.0002033760423022168;
      } else {
        result[0] += 0.985277969823905;
        result[1] += 0.0006913660579934117;
        result[2] += 0.0005286916914067265;
        result[3] += 0.012932612143641466;
        result[4] += 0.00020334295823335637;
        result[5] += 0.00024401154988002767;
        result[6] += 0.00012200577494001383;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        result[0] += 0.44272388059701495;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.557276119402985;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8101584108624592;
        result[1] += 0;
        result[2] += 0.013075182298214737;
        result[3] += 0.001005783253708826;
        result[4] += 0.17374905707819968;
        result[5] += 0.0007543374402816194;
        result[6] += 0.0012572290671360323;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-7.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9989205720967888;
        result[1] += 0;
        result[2] += 0.0008095709274084735;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002698569758028245;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
        result[0] += 0.0009727626459143969;
        result[1] += 0.008430609597924773;
        result[2] += 0.008106355382619975;
        result[3] += 0.9500648508430609;
        result[4] += 0.030804150453955903;
        result[5] += 0.001621271076523995;
        result[6] += 0;
      } else {
        result[0] += 0.9937808277932662;
        result[1] += 0.0015011794981771391;
        result[2] += 0.0034312674244048897;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0012867252841518336;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        result[0] += 0.1333667585861118;
        result[1] += 0;
        result[2] += 0.006267234895963901;
        result[3] += 0.700175482577087;
        result[4] += 0.1596891451491602;
        result[5] += 0.000501378791677112;
        result[6] += 0;
      } else {
        result[0] += 0.5098765432098766;
        result[1] += 0.001940035273368607;
        result[2] += 0.008818342151675486;
        result[3] += 0.1848324514991182;
        result[4] += 0.2932980599647267;
        result[5] += 0.00017636684303350974;
        result[6] += 0.0010582010582010585;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9985141158989599;
        result[1] += 0;
        result[2] += 0.0014858841010401188;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)89.5) ) ) {
        result[0] += 0.5181292695743562;
        result[1] += 0;
        result[2] += 0.008232615169031354;
        result[3] += 0.4252933963916623;
        result[4] += 0.04764407076545805;
        result[5] += 0.00017516202487300754;
        result[6] += 0.0005254860746190226;
      } else {
        result[0] += 0.09508881922675026;
        result[1] += 0.00522466039707419;
        result[2] += 0;
        result[3] += 0.5067920585161965;
        result[4] += 0.3928944618599791;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-327) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9992824419053927;
        result[1] += 0;
        result[2] += 0.000662361318099023;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5.5196776508251916e-05;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        result[0] += 0.543452935694315;
        result[1] += 0.001863932898415657;
        result[2] += 0.005941286113699907;
        result[3] += 0.36940820130475305;
        result[4] += 0.0787511649580615;
        result[5] += 0.00011649580615097856;
        result[6] += 0.00046598322460391424;
      } else {
        result[0] += 0.06423874557410217;
        result[1] += 0.01112797167425392;
        result[2] += 0.004552352048558422;
        result[3] += 0.3712696004046535;
        result[4] += 0.548811330298432;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)22.5) ) ) {
        result[0] += 0.6;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.4;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9991525423728813;
        result[5] += 0.000847457627118644;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0003081664098613251;
        result[1] += 0.0021571648690292757;
        result[2] += 0.008320493066255779;
        result[3] += 0.986748844375963;
        result[4] += 0;
        result[5] += 0.002465331278890601;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9987936154417224;
        result[1] += 0;
        result[2] += 0.0009279881217520416;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002783964365256125;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
        result[0] += 0.6612559872272487;
        result[1] += 0.004656732304417244;
        result[2] += 0.011442256519425228;
        result[3] += 0.32131452900478985;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0013304949441192125;
      } else {
        result[0] += 0.7332080789102865;
        result[1] += 0;
        result[2] += 0.0011742602160638798;
        result[3] += 0.26420854861437293;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0014091122592766556;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        result[0] += 0.001156737998843262;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9363794100636206;
        result[4] += 0.062174667437825334;
        result[5] += 0.0002891844997108155;
        result[6] += 0;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
        result[0] += 0.9662921348314607;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.033707865168539325;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.005226480836236934;
        result[2] += 0.013501742160278746;
        result[3] += 0;
        result[4] += 0.9812717770034843;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9984144749113971;
        result[1] += 0;
        result[2] += 0.0013057265435553068;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002797985450475658;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        result[0] += 0.515923566878981;
        result[1] += 0.001455868971792539;
        result[2] += 0.0034576888080072796;
        result[3] += 0.47861692447679716;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005459508644222021;
      } else {
        result[0] += 0.8496165388462821;
        result[1] += 0.0006668889629876625;
        result[2] += 0.010003334444814937;
        result[3] += 0.1385461820606869;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0011670556852284096;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)22.5) ) ) {
        result[0] += 0.5;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.5;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9991846718304117;
        result[5] += 0.0008153281695882593;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        result[0] += 0.05960502692998205;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9396768402154398;
        result[4] += 0;
        result[5] += 0.000718132854578097;
        result[6] += 0;
      } else {
        result[0] += 0.5384615384615384;
        result[1] += 0.11538461538461539;
        result[2] += 0.3333333333333333;
        result[3] += 0.01282051282051282;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
        result[0] += 0.9990803752069156;
        result[1] += 0;
        result[2] += 0.0009196247930844216;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.4756798161623899;
        result[1] += 0.0034469551895825352;
        result[2] += 0.0075322354142729475;
        result[3] += 0.51295799821269;
        result[4] += 0;
        result[5] += 0.00012766500702157538;
        result[6] += 0.00025533001404315077;
      } else {
        result[0] += 0.9649446494464945;
        result[1] += 0;
        result[2] += 0.008763837638376383;
        result[3] += 0.024907749077490774;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0013837638376383763;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9995812395309883;
        result[5] += 0.0004187604690117253;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.003038590094196293;
        result[2] += 0.007900334244910361;
        result[3] += 0.9875417806137952;
        result[4] += 0;
        result[5] += 0.0015192950470981465;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
        result[0] += 0.9705882352941176;
        result[1] += 0.029411764705882353;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.13347921225382933;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8665207877461707;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.9955956678700361;
        result[1] += 0.0005776173285198556;
        result[2] += 0.0022743682310469313;
        result[3] += 0.001299638989169675;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002527075812274368;
      } else {
        result[0] += 0.6424749941846941;
        result[1] += 0;
        result[2] += 0.004419632472668062;
        result[3] += 0.3524075366364271;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006978367062107466;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-327) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.9887892376681614;
        result[1] += 0;
        result[2] += 0.011210762331838564;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9995735277013144;
        result[1] += 0;
        result[2] += 0.00031016167177141084;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00011631062691427906;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
        result[0] += 0.20353982300884957;
        result[1] += 0.004635482511588706;
        result[2] += 0.0058997050147492625;
        result[3] += 0.43552465233881166;
        result[4] += 0.3504003371260008;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.7896053679062889;
        result[1] += 0.0010235414534288637;
        result[2] += 0.006596156033208232;
        result[3] += 0.18582963721141815;
        result[4] += 0.015353121801432954;
        result[5] += 0.0010235414534288637;
        result[6] += 0.0005686341407938132;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)21) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.013595166163141994;
        result[3] += 0;
        result[4] += 0.9803625377643505;
        result[5] += 0.006042296072507553;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0009813542688910696;
        result[2] += 0.006542361792607131;
        result[3] += 0.9924762839385018;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
        result[0] += 0.11772151898734179;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8443037974683545;
        result[4] += 0.037974683544303806;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.05172413793103448;
        result[1] += 0.009404388714733543;
        result[2] += 0.02664576802507837;
        result[3] += 0;
        result[4] += 0.9106583072100314;
        result[5] += 0.001567398119122257;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        result[0] += 0.0011350737797956867;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9988649262202043;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.22932790224032587;
        result[1] += 0.0012219959266802445;
        result[2] += 0.0036659877800407333;
        result[3] += 0.7641547861507129;
        result[4] += 0;
        result[5] += 0.001629327902240326;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.6708939708939708;
        result[1] += 0;
        result[2] += 0.007068607068607069;
        result[3] += 0.32141372141372143;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006237006237006237;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.999195124755663;
        result[1] += 0;
        result[2] += 0.000689893066574681;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00011498217776244683;
      } else {
        result[0] += 0.7005513926198219;
        result[1] += 0.0035345680757811397;
        result[2] += 0.005372543475187332;
        result[3] += 0.2902587303831472;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002827654460624912;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        result[0] += 0.9772455089820359;
        result[1] += 0;
        result[2] += 0.022754491017964073;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.08840864440078586;
        result[1] += 0.0019646365422396855;
        result[2] += 0;
        result[3] += 0.9081532416502947;
        result[4] += 0.0014734774066797642;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-23) ) ) {
        result[0] += 0.0009345794392523365;
        result[1] += 0.010280373831775701;
        result[2] += 0;
        result[3] += 0.22990654205607478;
        result[4] += 0.7588785046728972;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        result[0] += 0.9807186259030668;
        result[1] += 0.00028706760442084113;
        result[2] += 0.000956892014736137;
        result[3] += 0.017654657671881728;
        result[4] += 0.00023922300368403425;
        result[5] += 4.784460073680685e-05;
        result[6] += 9.56892014736137e-05;
      } else {
        result[0] += 0.7292923433874711;
        result[1] += 0.00040603248259860796;
        result[2] += 0.004466357308584688;
        result[3] += 0.25626450116009286;
        result[4] += 0.008816705336426915;
        result[5] += 0.00029002320185614853;
        result[6] += 0.00046403712296983764;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)113.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-327) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9990936282062902;
        result[1] += 0;
        result[2] += 0.0008157346143388018;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9.063717937097797e-05;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        result[0] += 0.8429009193054137;
        result[1] += 0.0022471910112359553;
        result[2] += 0.0030643513789581204;
        result[3] += 0.1501532175689479;
        result[4] += 0;
        result[5] += 0.0006128702757916241;
        result[6] += 0.0010214504596527069;
      } else {
        result[0] += 0.17427701674277016;
        result[1] += 0.004185692541856925;
        result[2] += 0.004946727549467275;
        result[3] += 0.776255707762557;
        result[4] += 0.04033485540334855;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
        result[0] += 0.12146545365134005;
        result[1] += 0;
        result[2] += 0.008605851979345954;
        result[3] += 0.6958446029014015;
        result[4] += 0.17285468404229162;
        result[5] += 0.0012294074256208507;
        result[6] += 0;
      } else {
        result[0] += 0.5124826629680997;
        result[1] += 0.0012135922330097084;
        result[2] += 0.009361997226074894;
        result[3] += 0.18689320388349512;
        result[4] += 0.2877947295423023;
        result[5] += 0.0008668515950069346;
        result[6] += 0.0013869625520110955;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)57) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9995866060355518;
        result[5] += 0.00041339396444811904;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0007692307692307692;
        result[1] += 0.003076923076923077;
        result[2] += 0.009615384615384616;
        result[3] += 0.9834615384615385;
        result[4] += 0;
        result[5] += 0.003076923076923077;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
        result[0] += 0.5284373274434014;
        result[1] += 0.0016565433462175593;
        result[2] += 0.0005521811154058532;
        result[3] += 0.46935394809497516;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9956909144025708;
        result[1] += 0.0010224948875255625;
        result[2] += 0.001570260005842828;
        result[3] += 0.001387671633070406;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00032865907099035934;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += 0.20014680694886225;
        result[1] += 0;
        result[2] += 0.002202104232933692;
        result[3] += 0.7969170540738928;
        result[4] += 0;
        result[5] += 0.0007340347443112308;
        result[6] += 0;
      } else {
        result[0] += 0.9933867735470941;
        result[1] += 0;
        result[2] += 0.004809619238476954;
        result[3] += 0.0008016032064128256;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.001002004008016032;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        result[0] += 0.466884328358209;
        result[1] += 0;
        result[2] += 0.006996268656716418;
        result[3] += 0.4141791044776119;
        result[4] += 0.11194029850746269;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.09691417550626807;
        result[1] += 0.003857280617164899;
        result[2] += 0.00819672131147541;
        result[3] += 0.5998071359691417;
        result[4] += 0.29122468659594986;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.016286644951140065;
        result[1] += 0.04234527687296417;
        result[2] += 0;
        result[3] += 0.2736156351791531;
        result[4] += 0.6677524429967426;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.043076923076923075;
        result[4] += 0.9569230769230769;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-305.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.999239977199316;
        result[1] += 0;
        result[2] += 0.0006080182405472165;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00015200456013680412;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0.0022675736961451248;
        result[1] += 0.003401360544217687;
        result[2] += 0;
        result[3] += 0.21315192743764172;
        result[4] += 0.7811791383219955;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.594193780334352;
        result[1] += 0.0008089160524896639;
        result[2] += 0.005842171490203127;
        result[3] += 0.39385223800107855;
        result[4] += 0.004314218946611541;
        result[5] += 0.00017975912277548085;
        result[6] += 0.0008089160524896639;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.06646058732612056;
        result[1] += 0.006955177743431221;
        result[2] += 0.010046367851622875;
        result[3] += 0.9142194744976816;
        result[4] += 0;
        result[5] += 0.00231839258114374;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-5) ) ) {
        result[0] += 0.30809399477806787;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.6919060052219321;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8845648604269294;
        result[1] += 0;
        result[2] += 0.0028735632183908046;
        result[3] += 0.11206896551724138;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004926108374384236;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.3045288912024987;
        result[1] += 0.009370119729307652;
        result[2] += 0.013014055179593961;
        result[3] += 0.6730869338885996;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        result[0] += 0.8918514434248357;
        result[1] += 0.0004726084045527943;
        result[2] += 0.0018116655507857116;
        result[3] += 0.10117758260801073;
        result[4] += 0.004253475640975149;
        result[5] += 0.00027568823598913005;
        result[6] += 0.00015753613485093145;
      } else {
        result[0] += 0.004048582995951417;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9959514170040485;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.06756756756756757;
        result[1] += 0.006756756756756757;
        result[2] += 0;
        result[3] += 0.6043543543543544;
        result[4] += 0.3213213213213213;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        result[0] += 0.955260721999383;
        result[1] += 0;
        result[2] += 0.001388460351743289;
        result[3] += 0.016970070965751313;
        result[4] += 0.026380746683122493;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.6978847332924586;
        result[1] += 0;
        result[2] += 0.005977927651747394;
        result[3] += 0.2904659717964439;
        result[4] += 0.004291845493562232;
        result[5] += 0.0006131207847946045;
        result[6] += 0.0007664009809932557;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        result[0] += 0.06961429915333961;
        result[1] += 0;
        result[2] += 0.004703668861712135;
        result[3] += 0.6580432737535278;
        result[4] += 0.2676387582314205;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0037965072133637054;
        result[2] += 0;
        result[3] += 0.06226271829916477;
        result[4] += 0.9339407744874715;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)20.5) ) ) {
        result[0] += 0.9069201857174441;
        result[1] += 0.0008843687817820031;
        result[2] += 0.002034048198098607;
        result[3] += 0.08985186822905152;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00030952907362370106;
      } else {
        result[0] += 0.8867521367521368;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.11253561253561255;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0007122507122507124;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        result[0] += 0.006238859180035651;
        result[1] += 0.008021390374331552;
        result[2] += 0.006238859180035651;
        result[3] += 0.9795008912655971;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9889676910953507;
        result[1] += 0;
        result[2] += 0.01103230890464933;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        result[0] += 0.12448132780082988;
        result[1] += 0;
        result[2] += 0.005334914048606995;
        result[3] += 0.8375815056312982;
        result[4] += 0.02845287492590397;
        result[5] += 0.004149377593360996;
        result[6] += 0;
      } else {
        result[0] += 0.99500752542124;
        result[1] += 0.0005506405785397012;
        result[2] += 0.0010645717851767557;
        result[3] += 0.00304687786791968;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0003303843471238207;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += 0.15521628498727738;
        result[1] += 0;
        result[2] += 0.007170946102243813;
        result[3] += 0.691880638445524;
        result[4] += 0.14550080962294706;
        result[5] += 0.00023132084200786494;
        result[6] += 0;
      } else {
        result[0] += 0.9919100236779794;
        result[1] += 0;
        result[2] += 0.005130228887134964;
        result[3] += 0.001973164956590371;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009865824782951855;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
        result[0] += 0.022222222222222223;
        result[1] += 0.03333333333333333;
        result[2] += 0;
        result[3] += 0.1259259259259259;
        result[4] += 0.8185185185185185;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.32129277566539927;
        result[1] += 0.0038022813688212928;
        result[2] += 0.0038022813688212928;
        result[3] += 0.6699619771863118;
        result[4] += 0.0011406844106463879;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)73) ) ) {
        result[0] += 0.36792452830188677;
        result[1] += 0;
        result[2] += 0.040880503144654086;
        result[3] += 0.5911949685534591;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.031294452347083924;
        result[4] += 0.968705547652916;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)50) ) ) {
        result[0] += 0.0023364485981308414;
        result[1] += 0;
        result[2] += 0.005257009345794393;
        result[3] += 0.891355140186916;
        result[4] += 0.10046728971962618;
        result[5] += 0.0005841121495327103;
        result[6] += 0;
      } else {
        result[0] += 0.22737556561085973;
        result[1] += 0;
        result[2] += 0.01583710407239819;
        result[3] += 0;
        result[4] += 0.7567873303167421;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9993834534314671;
        result[1] += 0;
        result[2] += 0.0005009440869330662;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00011560248159993836;
      } else {
        result[0] += 0.6838996998741408;
        result[1] += 0.0013554071062058283;
        result[2] += 0.006002517184625811;
        result[3] += 0.3077742279020234;
        result[4] += 0;
        result[5] += 0.00038725917320166524;
        result[6] += 0.0005808887598024978;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2306.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9991568296795953;
        result[5] += 0.0008431703204047217;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.000630715862503942;
        result[1] += 0.003468937243771681;
        result[2] += 0.009776095868811101;
        result[3] += 0.9832860296436455;
        result[4] += 0;
        result[5] += 0.002838221381267739;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)23.5) ) ) {
        result[0] += 0.4003831417624521;
        result[1] += 0.019157088122605363;
        result[2] += 0;
        result[3] += 0.5804597701149425;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
        result[0] += 0.9366330529745915;
        result[1] += 0.0008807080893038003;
        result[2] += 0.0026861596723765906;
        result[3] += 0.05940376062354133;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0003963186401867101;
      } else {
        result[0] += 0.8696553696553696;
        result[1] += 0;
        result[2] += 0.001287001287001287;
        result[3] += 0.12905762905762905;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)224.5) ) ) {
        result[0] += 0;
        result[1] += 0.013513513513513514;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9864864864864865;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.25;
        result[4] += 0.75;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0.0005847953216374269;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9994152046783625;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0723293768545994;
        result[1] += 0;
        result[2] += 0.007047477744807121;
        result[3] += 0.9202522255192879;
        result[4] += 0;
        result[5] += 0.000370919881305638;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)55) ) ) {
        result[0] += 0.9928566401576465;
        result[1] += 0.0005278344711098599;
        result[2] += 0.001724259272292209;
        result[3] += 0.0045041874868041384;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00038707861214723065;
      } else {
        result[0] += 0.11328976034858387;
        result[1] += 0.00980392156862745;
        result[2] += 0.0032679738562091504;
        result[3] += 0.8736383442265795;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += 0.18525088697415104;
        result[1] += 0;
        result[2] += 0.007095793208312215;
        result[3] += 0.8073998986315256;
        result[4] += 0;
        result[5] += 0.00025342118601115053;
        result[6] += 0;
      } else {
        result[0] += 0.9932912391475928;
        result[1] += 0;
        result[2] += 0.003946329913180742;
        result[3] += 0.0015785319652722968;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0011838989739542227;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9791666666666666;
        result[1] += 0;
        result[2] += 0.020833333333333332;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.9984787018255578;
        result[1] += 0;
        result[2] += 0.0015212981744421906;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9999158957106813;
        result[1] += 0;
        result[2] += 8.410428931875525e-05;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0;
        result[1] += 0.008978675645342313;
        result[2] += 0;
        result[3] += 0.2222222222222222;
        result[4] += 0.7687991021324355;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5626447673194357;
        result[1] += 0.0015441847406471537;
        result[2] += 0.005825787885168808;
        result[3] += 0.42766898294377764;
        result[4] += 0.0007720923703235769;
        result[5] += 0.0007019021548396153;
        result[6] += 0.0008422825858075384;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.006787330316742082;
        result[1] += 0.024886877828054297;
        result[2] += 0;
        result[3] += 0.9683257918552036;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-305.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9996186408359393;
        result[1] += 0;
        result[2] += 0.0003813591640607124;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
        result[0] += 0.6106138613861386;
        result[1] += 0.0014257425742574257;
        result[2] += 0.004356435643564357;
        result[3] += 0.33132673267326734;
        result[4] += 0.05085148514851485;
        result[5] += 0.00039603960396039607;
        result[6] += 0.0010297029702970298;
      } else {
        result[0] += 0.00574345883854499;
        result[1] += 0;
        result[2] += 0.010848755583918315;
        result[3] += 0.8136566687938737;
        result[4] += 0.1684747925973197;
        result[5] += 0.0012763241863433313;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        result[0] += 0.6335403726708074;
        result[1] += 0;
        result[2] += 0.018633540372670808;
        result[3] += 0.34782608695652173;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.016824395373291272;
        result[2] += 0;
        result[3] += 0.9831756046267087;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-26) ) ) {
        result[0] += 0.0021253985122210413;
        result[1] += 0.009564293304994687;
        result[2] += 0;
        result[3] += 0.1785334750265675;
        result[4] += 0.8097768331562167;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)926.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.00220125786163522;
        result[2] += 0.007861635220125786;
        result[3] += 0.9886792452830189;
        result[4] += 0;
        result[5] += 0.0012578616352201257;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.012861736334405145;
        result[1] += 0.06109324758842444;
        result[2] += 0;
        result[3] += 0.9260450160771704;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9996860529000864;
        result[1] += 0;
        result[2] += 0.00031394709991366455;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.7020016156538911;
        result[1] += 0.0012566196930257607;
        result[2] += 0.006911408311641684;
        result[3] += 0.2889327708464231;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0008975854950184005;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4568) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.9946808510638298;
        result[1] += 0;
        result[2] += 0.005319148936170213;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9995379105856983;
        result[1] += 0;
        result[2] += 0.00042358196310986174;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.850745119180561e-05;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += 0.006600660066006601;
        result[1] += 0.0033003300330033004;
        result[2] += 0.009488448844884489;
        result[3] += 0.7058580858085809;
        result[4] += 0.2726897689768977;
        result[5] += 0.0020627062706270625;
        result[6] += 0;
      } else {
        result[0] += 0.014238253440911248;
        result[1] += 0.006169909824394874;
        result[2] += 0.005457997152349312;
        result[3] += 0.5498338870431894;
        result[4] += 0.42311343141907926;
        result[5] += 0.0011865211200759373;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.5895308011490584;
        result[1] += 0.00015959144589849984;
        result[2] += 0.0031918289179699967;
        result[3] += 0.4067985955952761;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0003191828917969997;
      } else {
        result[0] += 0.9679320914878566;
        result[1] += 0;
        result[2] += 0.006366423013440227;
        result[3] += 0.024994105163876443;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0007073803348266918;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9910529938059188;
        result[1] += 0;
        result[2] += 0.006882312456985547;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0020646937370956643;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
        result[0] += 0.9994457445498214;
        result[1] += 0;
        result[2] += 0.0005542554501785934;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        result[0] += 0.02401239349341596;
        result[1] += 0.005422153369481023;
        result[2] += 0.01136070229796024;
        result[3] += 0.7136586625355023;
        result[4] += 0.24348050606764784;
        result[5] += 0.0020655822359927707;
        result[6] += 0;
      } else {
        result[0] += 0.7390882638215325;
        result[1] += 0;
        result[2] += 0.003297769156159069;
        result[3] += 0.256741028128031;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0008729388942774006;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-34) ) ) {
        result[0] += 0.0014705882352941176;
        result[1] += 0.010294117647058823;
        result[2] += 0;
        result[3] += 0.08970588235294118;
        result[4] += 0.8985294117647059;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.11814159292035398;
        result[1] += 0.0035398230088495575;
        result[2] += 0.003982300884955752;
        result[3] += 0.5380530973451327;
        result[4] += 0.336283185840708;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += 0.9963547995139733;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.0036452004860267314;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.000512557662737058;
        result[1] += 0;
        result[2] += 0.007175807278318812;
        result[3] += 0.7988211173757048;
        result[4] += 0.19144028703229116;
        result[5] += 0.002050230650948232;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.7828282828282829;
        result[4] += 0.21717171717171718;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0076650943396226415;
        result[2] += 0;
        result[3] += 0.010023584905660377;
        result[4] += 0.9823113207547169;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9991366175723717;
        result[1] += 0;
        result[2] += 0.0007618080243778568;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00010157440325038091;
      } else {
        result[0] += 0.6533864541832669;
        result[1] += 0.027888446215139442;
        result[2] += 0;
        result[3] += 0.3187250996015936;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        result[0] += 0.960668290985033;
        result[1] += 0.003132613992342499;
        result[2] += 0.0027845457709711106;
        result[3] += 0.032718412808910545;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006961364427427776;
      } else {
        result[0] += 0.6121860353322918;
        result[1] += 0;
        result[2] += 0.004086047350078116;
        result[3] += 0.38324720586467975;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00048071145295036654;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-7) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.9976065102920058;
        result[1] += 0;
        result[2] += 0.0019147917663954045;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004786979415988511;
      } else {
        result[0] += 0.9997105165212357;
        result[1] += 0;
        result[2] += 0.0002894834787643191;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
        result[0] += 0.00040933278755628325;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9991813344248874;
        result[5] += 0.00040933278755628325;
        result[6] += 0;
      } else {
        result[0] += 0.02012121212121212;
        result[1] += 0.00896969696969697;
        result[2] += 0.013575757575757576;
        result[3] += 0.9556363636363636;
        result[4] += 0;
        result[5] += 0.001696969696969697;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
        result[0] += 0.7302836774097727;
        result[1] += 0.0001485222040695084;
        result[2] += 0.0035645328976682015;
        result[3] += 0.26451804544779445;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0014852220406950838;
      } else {
        result[0] += 0.7818877551020408;
        result[1] += 0;
        result[2] += 0.0012755102040816326;
        result[3] += 0.21683673469387754;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)26.5) ) ) {
        result[0] += 0.36013590033975085;
        result[1] += 0.003775009437523594;
        result[2] += 0.0056625141562853904;
        result[3] += 0.6296715741789355;
        result[4] += 0.0007550018875047187;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.11607142857142858;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8839285714285714;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.015267175572519083;
        result[1] += 0.03435114503816794;
        result[2] += 0;
        result[3] += 0.950381679389313;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
        result[0] += 0.9760362465045486;
        result[1] += 0.0007433365190612722;
        result[2] += 0.000778733496159428;
        result[3] += 0.02191072882375845;
        result[4] += 3.5396977098155815e-05;
        result[5] += 7.079395419631163e-05;
        result[6] += 0.00042476372517786983;
      } else {
        result[0] += 0.024390243902439025;
        result[1] += 0;
        result[2] += 0.012615643397813289;
        result[3] += 0.8519764507989908;
        result[4] += 0.10765349032800672;
        result[5] += 0.00336417157275021;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.36027558393547304;
        result[1] += 0;
        result[2] += 0.0068895983868257436;
        result[3] += 0.51520752814653;
        result[4] += 0.11611493866577045;
        result[5] += 0.0003360779700890607;
        result[6] += 0.0011762728953117123;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2306.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0008230452674897119;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9987654320987654;
        result[5] += 0.00041152263374485596;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        result[0] += 0.0015564202334630351;
        result[1] += 0.0038910505836575876;
        result[2] += 0.0031128404669260703;
        result[3] += 0.9883268482490273;
        result[4] += 0;
        result[5] += 0.0031128404669260703;
        result[6] += 0;
      } else {
        result[0] += 0.9574468085106383;
        result[1] += 0;
        result[2] += 0.0425531914893617;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9993698235505941;
        result[1] += 0;
        result[2] += 0.0006301764494058336;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
        result[0] += 0.7140379700620665;
        result[1] += 0.002099306316173786;
        result[2] += 0.007667031763417305;
        result[3] += 0.2751004016064257;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.001095290251916758;
      } else {
        result[0] += 0.15011547344110854;
        result[1] += 0.012317167051578136;
        result[2] += 0.010007698229407237;
        result[3] += 0.8267898383371824;
        result[4] += 0;
        result[5] += 0.0007698229407236335;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4979) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
        result[0] += 0.9976076555023924;
        result[1] += 0;
        result[2] += 0.0019138755980861245;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004784688995215311;
      } else {
        result[0] += 0.9999092641321115;
        result[1] += 0;
        result[2] += 9.073586788857636e-05;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-310) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
        result[0] += 0.0006784260515603799;
        result[1] += 0.008141112618724558;
        result[2] += 0.0047489823609226595;
        result[3] += 0.9470827679782904;
        result[4] += 0.03765264586160109;
        result[5] += 0.0016960651289009499;
        result[6] += 0;
      } else {
        result[0] += 0.9963243243243244;
        result[1] += 0.000864864864864865;
        result[2] += 0.0015135135135135138;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0012972972972972974;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.5611753371868979;
        result[1] += 0.002408477842003854;
        result[2] += 0.008028259473346181;
        result[3] += 0.16040462427745666;
        result[4] += 0.2665382145150932;
        result[5] += 0.0004816955684007708;
        result[6] += 0.0009633911368015416;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.008354940939210602;
        result[3] += 0.7986171132238548;
        result[4] += 0.1930279458369346;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
        result[0] += 0;
        result[1] += 0.0038048343777976725;
        result[2] += 0.005819158460161146;
        result[3] += 0.609892569382274;
        result[4] += 0.38048343777976723;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9929048414023373;
        result[1] += 0.0008347245409015025;
        result[2] += 0.006260434056761269;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)51.5) ) ) {
        result[0] += 0.983131067961165;
        result[1] += 0.0007686084142394822;
        result[2] += 0.0006067961165048543;
        result[3] += 0.01476537216828479;
        result[4] += 0.0002831715210355987;
        result[5] += 0.00036407766990291263;
        result[6] += 8.090614886731392e-05;
      } else {
        result[0] += 0.795783381562629;
        result[1] += 0;
        result[2] += 0.0016535758577924757;
        result[3] += 0.20008267879288957;
        result[4] += 0.00041339396444811893;
        result[5] += 0.001240181893344357;
        result[6] += 0.0008267879288962379;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += 0.22068168688619294;
        result[1] += 0;
        result[2] += 0.016753321779318313;
        result[3] += 0.6556903523974581;
        result[4] += 0.10687463893703061;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.4363586808394658;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.4360861270100845;
        result[4] += 0.12755519215044972;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)48.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9904030710172744;
        result[4] += 0.009596928982725527;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9946868008948546;
        result[1] += 0;
        result[2] += 0.005313199105145414;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0008556759840273817;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9301197946377638;
        result[4] += 0.06788362806617228;
        result[5] += 0.0011409013120365088;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9995525727069351;
        result[5] += 0.00044742729306487697;
        result[6] += 0;
      } else {
        result[0] += 0.6194029850746269;
        result[1] += 0.05223880597014925;
        result[2] += 0.291044776119403;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.03731343283582089;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91) ) ) {
        result[0] += 0.9970568999345979;
        result[1] += 0.0008356950802993969;
        result[2] += 0.0017440592980161327;
        result[3] += 0.00018167284354334717;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00018167284354334717;
      } else {
        result[0] += 0.3057324840764331;
        result[1] += 0.027600849256900213;
        result[2] += 0;
        result[3] += 0.6666666666666666;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += 0.20435553304634085;
        result[1] += 0;
        result[2] += 0.0050645733096986575;
        result[3] += 0.7905798936439605;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9938455429819337;
        result[1] += 0;
        result[2] += 0.004764740917212627;
        result[3] += 0.0007941234862021044;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005955926146515784;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-3.5) ) ) {
        result[0] += 0;
        result[1] += 0.02976190476190476;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9702380952380952;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0.2066420664206642;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.18450184501845018;
        result[4] += 0.6060885608856088;
        result[5] += 0.0027675276752767526;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.006866952789699569;
        result[3] += 0.700143061516452;
        result[4] += 0.29213161659513587;
        result[5] += 0.0008583690987124461;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        result[0] += 0.9876182771114004;
        result[1] += 0.0005979809349607795;
        result[2] += 0.0015125400119596188;
        result[3] += 0.009989799148756551;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00028140279292271977;
      } else {
        result[0] += 0.2532239155920281;
        result[1] += 0.016412661195779603;
        result[2] += 0.0035169988276670576;
        result[3] += 0.7268464243845252;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.40393454679168966;
        result[1] += 0;
        result[2] += 0.0058834344548630265;
        result[3] += 0.5874241588527302;
        result[4] += 0;
        result[5] += 0.001287001287001287;
        result[6] += 0.0014708586137157566;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.32223147377185685;
        result[1] += 0.010824313072439636;
        result[2] += 0;
        result[3] += 0.6294754371357203;
        result[4] += 0.03746877601998336;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.1706896551724138;
        result[1] += 0;
        result[2] += 0.01206896551724138;
        result[3] += 0.16379310344827586;
        result[4] += 0.653448275862069;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        result[0] += 0.36188545362392294;
        result[1] += 0.007095793208312215;
        result[2] += 0.016218955904713634;
        result[3] += 0.6066903193106944;
        result[4] += 0.008109477952356817;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0014265335235378032;
        result[2] += 0;
        result[3] += 0.11269614835948645;
        result[4] += 0.8858773181169758;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-272) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9993883090568491;
        result[1] += 0;
        result[2] += 0.0005734602592040372;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.823068394693581e-05;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
        result[0] += 0.6587962066963422;
        result[1] += 0.0017418231081865686;
        result[2] += 0.0059028449777433715;
        result[3] += 0.3212695955099671;
        result[4] += 0.011612154054577124;
        result[5] += 9.676795045480937e-05;
        result[6] += 0.0005806077027288562;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.005399568034557236;
        result[3] += 0.66036717062635;
        result[4] += 0.33099352051835856;
        result[5] += 0.0032397408207343417;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        result[0] += 0.0015179113539769277;
        result[1] += 0;
        result[2] += 0.003946569520340012;
        result[3] += 0.9532483302975107;
        result[4] += 0.03764420157862781;
        result[5] += 0.0036429872495446266;
        result[6] += 0;
      } else {
        result[0] += 0.5308219178082192;
        result[1] += 0;
        result[2] += 0.010273972602739725;
        result[3] += 0;
        result[4] += 0.4589041095890411;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.09558823529411764;
        result[2] += 0;
        result[3] += 0.9044117647058824;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-7.5) ) ) {
        result[0] += 0.8871849579943992;
        result[1] += 0;
        result[2] += 0.001866915588745166;
        result[3] += 0.11094812641685559;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8620967741935484;
        result[1] += 0;
        result[2] += 0.0036290322580645163;
        result[3] += 0.1338709677419355;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004032258064516129;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9990931247520264;
        result[1] += 0;
        result[2] += 0.0007935158419769882;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00011335940599671259;
      } else {
        result[0] += 0.6859195402298851;
        result[1] += 0.004454022988505747;
        result[2] += 0.008333333333333333;
        result[3] += 0.30086206896551726;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004310344827586207;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-327) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4.5) ) ) {
        result[0] += 0.9989672088820036;
        result[1] += 0;
        result[2] += 0.0008262328943971082;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00020655822359927706;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
        result[0] += 0.31656642974302895;
        result[1] += 0.005467468562055768;
        result[2] += 0.006014215418261345;
        result[3] += 0.6200109349371241;
        result[4] += 0.0519409513395298;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.6907040328092959;
        result[1] += 0.0037593984962406013;
        result[2] += 0.0015379357484620643;
        result[3] += 0.3017771701982228;
        result[4] += 0.00017088174982911826;
        result[5] += 0.001367053998632946;
        result[6] += 0.000683526999316473;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += 0.003020187569543793;
        result[1] += 0.0006358289620092195;
        result[2] += 0.006676204101096805;
        result[3] += 0.6213638531235097;
        result[4] += 0.3678270545223335;
        result[5] += 0.0004768717215069146;
        result[6] += 0;
      } else {
        result[0] += 0.9882629107981221;
        result[1] += 0;
        result[2] += 0.008215962441314555;
        result[3] += 0.0029342723004694834;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005868544600938967;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
        result[0] += 0.1534273694630042;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.7931205147240782;
        result[4] += 0.053452115812917596;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.05896805896805897;
        result[1] += 0.0042997542997543;
        result[2] += 0.005528255528255528;
        result[3] += 0;
        result[4] += 0.9305896805896806;
        result[5] += 0.0006142506142506142;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        result[0] += 0.9955131400897373;
        result[1] += 0.0007478099850438004;
        result[2] += 0.0016380599672388009;
        result[3] += 0.001816109963677801;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00028487999430240016;
      } else {
        result[0] += 0.006493506493506494;
        result[1] += 0.048701298701298704;
        result[2] += 0;
        result[3] += 0.9448051948051948;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)49) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.005319148936170213;
        result[3] += 0.8231382978723404;
        result[4] += 0.17154255319148937;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9913202375513933;
        result[1] += 0;
        result[2] += 0.006852444038373686;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.001827318410232983;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2106) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.999165623696287;
        result[5] += 0.0008343763037129745;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
        result[0] += 0.08814229249011858;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9114624505928853;
        result[4] += 0;
        result[5] += 0.0003952569169960474;
        result[6] += 0;
      } else {
        result[0] += 0.3504218040233614;
        result[1] += 0.004542504866969501;
        result[2] += 0.012978585334198572;
        result[3] += 0.6294613887086308;
        result[4] += 0;
        result[5] += 0.0025957170668397143;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
        result[0] += 0.36619718309859156;
        result[1] += 0.018108651911468814;
        result[2] += 0;
        result[3] += 0.6156941649899397;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9969545754751598;
        result[1] += 0.0007705290966463639;
        result[2] += 0.0019813605342335074;
        result[3] += 0.0002201511704703897;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.33837234901299e-05;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.4085159451273829;
        result[1] += 0;
        result[2] += 0.006235524674861928;
        result[3] += 0.5845358988063424;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0007126313914127917;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        result[0] += 0.0069864927806241265;
        result[1] += 0.012575687005123428;
        result[2] += 0.002328830926874709;
        result[3] += 0.9781089892873778;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9874715261958997;
        result[1] += 0;
        result[2] += 0.012528473804100227;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        result[0] += 0.0029291154071470417;
        result[1] += 0;
        result[2] += 0.0035149384885764497;
        result[3] += 0.9168131224370241;
        result[4] += 0.07381370826010544;
        result[5] += 0.0029291154071470417;
        result[6] += 0;
      } else {
        result[0] += 0.22234392113910187;
        result[1] += 0;
        result[2] += 0.008762322015334063;
        result[3] += 0;
        result[4] += 0.768893756845564;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.8853900925256064;
        result[1] += 0.0003807638122072878;
        result[2] += 0.002094200967140083;
        result[3] += 0.11175417888283898;
        result[4] += 0;
        result[5] += 7.615276244145757e-05;
        result[6] += 0.0003046110497658303;
      } else {
        result[0] += 0.9872821950731024;
        result[1] += 0;
        result[2] += 0.002703785299419187;
        result[3] += 0.009613458842379333;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00040056078509913886;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)373) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
        result[0] += 0.9986633398681162;
        result[1] += 0;
        result[2] += 0.0012475494564248798;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 8.911067545891998e-05;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        result[0] += 0.7847420069642291;
        result[1] += 0.00411522633744856;
        result[2] += 0.004431782209559987;
        result[3] += 0.2025957581513137;
        result[4] += 0.0012662234884457107;
        result[5] += 0.0006331117442228553;
        result[6] += 0.0022158911047799935;
      } else {
        result[0] += 0.4700954154060973;
        result[1] += 0.0023272050267628577;
        result[2] += 0.003025366534791715;
        result[3] += 0.5066325343262742;
        result[4] += 0.017919478706074004;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += 0.0036894449791466154;
        result[1] += 0.0016041065126724415;
        result[2] += 0.00850176451716394;
        result[3] += 0.6092396535129933;
        result[4] += 0.3755213346166185;
        result[5] += 0.0014436958614051972;
        result[6] += 0;
      } else {
        result[0] += 0.9906732730982221;
        result[1] += 0;
        result[2] += 0.005537744097930632;
        result[3] += 0.0020402215097639173;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0017487612940833576;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)236) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)33.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9990825220449564;
        result[1] += 0;
        result[2] += 0.0009174779550435802;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        result[0] += 0.01212915915423701;
        result[1] += 0.0062284871332568435;
        result[2] += 0.004097688903458449;
        result[3] += 0.6869365677757745;
        result[4] += 0.2899524668087199;
        result[5] += 0.0006556302245533519;
        result[6] += 0;
      } else {
        result[0] += 0.7165837654778283;
        result[1] += 0.00021166260979997884;
        result[2] += 0.002539951317599746;
        result[3] += 0.28045295798497194;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00021166260979997884;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
        result[0] += 0.9597701149425287;
        result[1] += 0;
        result[2] += 0.03366174055829228;
        result[3] += 0.003284072249589491;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.003284072249589491;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0015432098765432098;
        result[3] += 0;
        result[4] += 0.9969135802469136;
        result[5] += 0.0015432098765432098;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        result[0] += 0.4898388227049755;
        result[1] += 0;
        result[2] += 0.011212333566923615;
        result[3] += 0.4968465311843027;
        result[4] += 0.002102312543798178;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.14119472459270752;
        result[1] += 0.010861132660977503;
        result[2] += 0.008533747090768037;
        result[3] += 0.839410395655547;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.01060070671378092;
        result[1] += 0.04240282685512368;
        result[2] += 0;
        result[3] += 0.9469964664310954;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-174.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9996557132473892;
        result[1] += 0;
        result[2] += 0.0002677785853639877;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.650816724685362e-05;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.3655259531465319;
        result[1] += 0.001607717041800643;
        result[2] += 0.006316031235645383;
        result[3] += 0.5277905374368397;
        result[4] += 0.09680753330271015;
        result[5] += 0.0011483693155718878;
        result[6] += 0.0008038585209003215;
      } else {
        result[0] += 0.9711632453567938;
        result[1] += 0;
        result[2] += 0.005131964809384164;
        result[3] += 0.022727272727272728;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009775171065493646;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4979) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.984375;
        result[1] += 0;
        result[2] += 0.015625;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9995751911639762;
        result[1] += 0;
        result[2] += 0.0004248088360237893;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-310) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        result[0] += 0.019077196095829637;
        result[1] += 0.00510204081632653;
        result[2] += 0.010425909494232475;
        result[3] += 0.8189884649511979;
        result[4] += 0.14418811002661935;
        result[5] += 0.0022182786157941437;
        result[6] += 0;
      } else {
        result[0] += 0.7420168067226891;
        result[1] += 0;
        result[2] += 0.004388422035480859;
        result[3] += 0.2526610644257703;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009337068160597573;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.008595988538681949;
        result[1] += 0.03151862464183381;
        result[2] += 0;
        result[3] += 0.9598853868194842;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)85.5) ) ) {
        result[0] += 0.5347298787210585;
        result[1] += 0;
        result[2] += 0.009922822491730982;
        result[3] += 0.41565600882028664;
        result[4] += 0.03969128996692393;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.10614345448697331;
        result[1] += 0.004503055644901898;
        result[2] += 0;
        result[3] += 0.3785783210035381;
        result[4] += 0.5107751688645867;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)50.5) ) ) {
        result[0] += 0.9830466830466831;
        result[1] += 0.0007371007371007371;
        result[2] += 0.0007780507780507781;
        result[3] += 0.01506961506961507;
        result[4] += 0.00020475020475020476;
        result[5] += 8.19000819000819e-05;
        result[6] += 8.19000819000819e-05;
      } else {
        result[0] += 0.791905307369225;
        result[1] += 0;
        result[2] += 0.003818251240931654;
        result[3] += 0.20274914089347082;
        result[4] += 0.0003818251240931654;
        result[5] += 0;
        result[6] += 0.0011454753722794963;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
        result[0] += 0.40900601784602614;
        result[1] += 0;
        result[2] += 0.009960572732932143;
        result[3] += 0.5802033616932973;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0008300477277443454;
      } else {
        result[0] += 0.19029850746268656;
        result[1] += 0;
        result[2] += 0.006716417910447761;
        result[3] += 0.2738805970149254;
        result[4] += 0.5268656716417911;
        result[5] += 0.002238805970149254;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        result[0] += 0.0019047619047619048;
        result[1] += 0;
        result[2] += 0.005333333333333333;
        result[3] += 0.8830476190476191;
        result[4] += 0.10819047619047618;
        result[5] += 0.0015238095238095239;
        result[6] += 0;
      } else {
        result[0] += 0.3857008466603951;
        result[1] += 0;
        result[2] += 0.01599247412982126;
        result[3] += 0;
        result[4] += 0.5983066792097836;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.8802221047065045;
        result[1] += 0.0004910478205031352;
        result[2] += 0.0025307849210546196;
        result[3] += 0.11668051673339881;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.554581853894387e-05;
      } else {
        result[0] += 0.9877157063468851;
        result[1] += 0;
        result[2] += 0.0026323486399532025;
        result[3] += 0.00926196743687238;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00038997757628936335;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)115.5) ) ) {
        result[0] += 0.1597682119205298;
        result[1] += 0.009105960264900662;
        result[2] += 0;
        result[3] += 0.8311258278145696;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.00625;
        result[1] += 0.03125;
        result[2] += 0;
        result[3] += 0.203125;
        result[4] += 0.759375;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
        result[0] += 0.013428120063191154;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.0315955766192733;
        result[4] += 0.9549763033175356;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.23344947735191637;
        result[1] += 0;
        result[2] += 0.03832752613240418;
        result[3] += 0.7282229965156795;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
        result[0] += 0.9725274725274725;
        result[1] += 0;
        result[2] += 0.027472527472527472;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.08157349896480331;
        result[1] += 0.008695652173913044;
        result[2] += 0.004140786749482402;
        result[3] += 0.9055900621118013;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += 0.923510137210731;
        result[1] += 0;
        result[2] += 0.0006143764079459349;
        result[3] += 0.07526110997337702;
        result[4] += 0.00020479213598197828;
        result[5] += 0.00030718820397296744;
        result[6] += 0.00010239606799098914;
      } else {
        result[0] += 0.9506397586601477;
        result[1] += 0.0007281805887860189;
        result[2] += 0.001300322479975034;
        result[3] += 0.04415895141995215;
        result[4] += 0.002496619161552065;
        result[5] += 0.0003120773951940081;
        result[6] += 0.00036409029439300945;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        result[0] += 0.6455887481111241;
        result[1] += 0;
        result[2] += 0.0052307334650703256;
        result[3] += 0.3476694176450076;
        result[4] += 0.0010461466930140652;
        result[5] += 0.00011623852144600722;
        result[6] += 0.00034871556433802166;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9310344827586207;
        result[4] += 0.06896551724137931;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.39067325509573814;
        result[1] += 0.0030883261272390363;
        result[2] += 0.0067943174799258805;
        result[3] += 0.5895614576899321;
        result[4] += 0.009882643607164917;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
        result[0] += 0.0008410428931875525;
        result[1] += 0.00672834314550042;
        result[2] += 0;
        result[3] += 0.2607232968881413;
        result[4] += 0.7317073170731707;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        result[0] += 0.9828506097560976;
        result[1] += 0.0002858231707317073;
        result[2] += 0.000857469512195122;
        result[3] += 0.015529725609756097;
        result[4] += 0.0002858231707317073;
        result[5] += 9.527439024390244e-05;
        result[6] += 9.527439024390244e-05;
      } else {
        result[0] += 0.7438936349416435;
        result[1] += 0.0010227409457345684;
        result[2] += 0.00385031885453014;
        result[3] += 0.2473829864035615;
        result[4] += 0.0030080616051016717;
        result[5] += 0.00018048369630610032;
        result[6] += 0.0006617735531223678;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-272) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)33.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9988808058198098;
        result[1] += 0;
        result[2] += 0.0009157043292465788;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00020348985094368417;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)58.5) ) ) {
        result[0] += 0.7680459075807913;
        result[1] += 0.005436424041075204;
        result[2] += 0.004228329809725159;
        result[3] += 0.21806100875868317;
        result[4] += 0.0015101177891875567;
        result[5] += 0.001812141347025068;
        result[6] += 0.000906070673512534;
      } else {
        result[0] += 0.47513940520446096;
        result[1] += 0.0023234200743494425;
        result[2] += 0.0032527881040892194;
        result[3] += 0.4944237918215613;
        result[4] += 0.024860594795539034;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
        result[0] += 0.4315989847715736;
        result[1] += 0;
        result[2] += 0.010406091370558375;
        result[3] += 0.4697969543147208;
        result[4] += 0.0868020304568528;
        result[5] += 0.0006345177664974619;
        result[6] += 0.0007614213197969543;
      } else {
        result[0] += 0;
        result[1] += 0.007849293563579277;
        result[2] += 0;
        result[3] += 0.09314495028780743;
        result[4] += 0.8990057561486133;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
        result[0] += 0.9985452429444283;
        result[1] += 0;
        result[2] += 0.0014547570555717194;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9996491689689954;
        result[1] += 0;
        result[2] += 0.0003508310310046924;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0.001148105625717566;
        result[1] += 0.004592422502870264;
        result[2] += 0;
        result[3] += 0.21469575200918484;
        result[4] += 0.7795637198622273;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5675295441755768;
        result[1] += 0.0015475520540236354;
        result[2] += 0.006963984243106359;
        result[3] += 0.4220596510973551;
        result[4] += 0.0005627462014631402;
        result[5] += 0.0005627462014631402;
        result[6] += 0.0007737760270118177;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        result[0] += 0.003937007874015748;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.44750656167979;
        result[4] += 0.5485564304461942;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0007107320540156361;
        result[1] += 0.0035536602700781805;
        result[2] += 0;
        result[3] += 0.04975124378109453;
        result[4] += 0.9459843638948117;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9990018148820327;
        result[1] += 0;
        result[2] += 0.000544464609800363;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00045372050816696913;
      }
    } else {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
        result[0] += 0.6132126979174791;
        result[1] += 0.0011699555416894158;
        result[2] += 0.0064737539973481;
        result[3] += 0.32618360502300914;
        result[4] += 0.05163403790655955;
        result[5] += 0.000545979252788394;
        result[6] += 0.0007799703611262772;
      } else {
        result[0] += 0.07731755424063116;
        result[1] += 0.003155818540433925;
        result[2] += 0.010256410256410256;
        result[3] += 0.8863905325443787;
        result[4] += 0.022485207100591716;
        result[5] += 0.0003944773175542406;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.39622641509433965;
        result[4] += 0.6037735849056604;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.000723589001447178;
        result[1] += 0.008683068017366137;
        result[2] += 0;
        result[3] += 0.04630969609261939;
        result[4] += 0.9442836468885673;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        result[0] += 0.9833710194083286;
        result[1] += 0.0002826455624646693;
        result[2] += 0.0011776898436027887;
        result[3] += 0.014980214810627474;
        result[4] += 9.42151874882231e-05;
        result[5] += 4.710759374411155e-05;
        result[6] += 4.710759374411155e-05;
      } else {
        result[0] += 0.7117184977940385;
        result[1] += 0.0003228236306897665;
        result[2] += 0.004842354460346497;
        result[3] += 0.2684816528569891;
        result[4] += 0.014096631873453136;
        result[5] += 0.00026901969224147205;
        result[6] += 0.00026901969224147205;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-81) ) ) {
        result[0] += 0.5;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.5;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)109) ) ) {
        result[0] += 0.15325994919559696;
        result[1] += 0.01100762066045724;
        result[2] += 0;
        result[3] += 0.8357324301439458;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.028688524590163935;
        result[2] += 0;
        result[3] += 0.004098360655737705;
        result[4] += 0.9672131147540983;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
        result[0] += 0.015161957270847692;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.15161957270847692;
        result[4] += 0.8332184700206754;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5726495726495726;
        result[1] += 0;
        result[2] += 0.05982905982905983;
        result[3] += 0.36752136752136755;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9459459459459459;
        result[1] += 0;
        result[2] += 0.05405405405405406;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9985919459307238;
        result[1] += 0;
        result[2] += 0.0013141837979911762;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9.387027128508402e-05;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.7363575333269397;
        result[1] += 0.0006713340366356574;
        result[2] += 0.005466577155461782;
        result[3] += 0.2316102426393018;
        result[4] += 0.02464754963076628;
        result[5] += 0.00038361944950609;
        result[6] += 0.0008631437613887024;
      } else {
        result[0] += 0;
        result[1] += 0.0007845188284518828;
        result[2] += 0.006276150627615063;
        result[3] += 0.821652719665272;
        result[4] += 0.17102510460251047;
        result[5] += 0.0002615062761506276;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.13852242744063326;
        result[1] += 0.011873350923482849;
        result[2] += 0;
        result[3] += 0.6860158311345647;
        result[4] += 0.16358839050131926;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.06809583858764187;
        result[1] += 0;
        result[2] += 0.0037831021437578815;
        result[3] += 0.14312736443883986;
        result[4] += 0.7849936948297604;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        result[0] += 0.9485945022519026;
        result[1] += 0;
        result[2] += 0.002484857897189005;
        result[3] += 0.022984935548998296;
        result[4] += 0.025780400683335924;
        result[5] += 0.0001553036185743128;
        result[6] += 0;
      } else {
        result[0] += 0.7933070866141733;
        result[1] += 0;
        result[2] += 0.005905511811023622;
        result[3] += 0.20078740157480315;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)89.5) ) ) {
        result[0] += 0.654832033115746;
        result[1] += 0;
        result[2] += 0.0038210476038847323;
        result[3] += 0.3236745741124025;
        result[4] += 0.016876293583824236;
        result[5] += 0.00047763095048559154;
        result[6] += 0.00031842063365706104;
      } else {
        result[0] += 0.10384215991692627;
        result[1] += 0.008307372793354102;
        result[2] += 0;
        result[3] += 0.5244029075804777;
        result[4] += 0.363447559709242;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        result[0] += 0.9827024827024825;
        result[1] += 0.00020350020350020344;
        result[2] += 0.0004748338081671414;
        result[3] += 0.013091846425179755;
        result[4] += 0.003256003256003255;
        result[5] += 0;
        result[6] += 0.00027133360466693795;
      } else {
        result[0] += 0.8176363441551484;
        result[1] += 0.0022500803600128574;
        result[2] += 0.0023572270438229938;
        result[3] += 0.17711346833815494;
        result[4] += 0;
        result[5] += 0.0003214400514304082;
        result[6] += 0.0003214400514304082;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
        result[0] += 0.0017523364485981308;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9982476635514018;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.2833443928334439;
        result[1] += 0.004976775049767751;
        result[2] += 0.013271400132714002;
        result[3] += 0.6974120769741208;
        result[4] += 0;
        result[5] += 0.0009953550099535502;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        result[0] += 0.0014689680499449136;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9706206390011017;
        result[4] += 0.025339698861549763;
        result[5] += 0.002570694087403599;
        result[6] += 0;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)26.5) ) ) {
        result[0] += 0.9361702127659575;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.06382978723404255;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.002518891687657431;
        result[2] += 0.00881612090680101;
        result[3] += 0.000839630562552477;
        result[4] += 0.9869857262804367;
        result[5] += 0.000839630562552477;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9990951863916033;
        result[1] += 0;
        result[2] += 0.0008143322475570033;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9.048136083966703e-05;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
        result[0] += 0.9337815810920946;
        result[1] += 0.0034637326813365937;
        result[2] += 0.005297473512632438;
        result[3] += 0.056845965770171154;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006112469437652813;
      } else {
        result[0] += 0.4632311977715877;
        result[1] += 0;
        result[2] += 0.00766016713091922;
        result[3] += 0.527715877437326;
        result[4] += 0;
        result[5] += 0.0002785515320334262;
        result[6] += 0.0011142061281337048;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        result[0] += 0.010005558643690939;
        result[1] += 0.006670372429127293;
        result[2] += 0.005558643690939411;
        result[3] += 0.9766536964980544;
        result[4] += 0.0011117287381878821;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9865841073271414;
        result[1] += 0;
        result[2] += 0.013415892672858616;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.0066518847006651885;
        result[1] += 0.022172949002217297;
        result[2] += 0;
        result[3] += 0.458980044345898;
        result[4] += 0.5121951219512195;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.02991162474507138;
        result[4] += 0.9700883752549286;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-166) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9994681053151476;
        result[1] += 0;
        result[2] += 0.0004939022073629421;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.799247748945709e-05;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
        result[0] += 0.0011534025374855825;
        result[1] += 0.00922722029988466;
        result[2] += 0;
        result[3] += 0.23760092272202998;
        result[4] += 0.7508650519031141;
        result[5] += 0.0011534025374855825;
        result[6] += 0;
      } else {
        result[0] += 0.5866104466052836;
        result[1] += 0.0008605111436193101;
        result[2] += 0.0070561913776783424;
        result[3] += 0.3912744170037003;
        result[4] += 0.012993718268651583;
        result[5] += 0.000688408914895448;
        result[6] += 0.000516306686171586;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
        result[0] += 0.12092862092862093;
        result[1] += 0;
        result[2] += 0.00796950796950797;
        result[3] += 0.7602217602217602;
        result[4] += 0.10672210672210672;
        result[5] += 0.004158004158004158;
        result[6] += 0;
      } else {
        result[0] += 0.9104579073308681;
        result[1] += 0.0004894496410702634;
        result[2] += 0.002474439852077442;
        result[3] += 0.08617032847509247;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00040787470089188605;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4516) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
        result[0] += 0.3525835866261398;
        result[1] += 0;
        result[2] += 0.0486322188449848;
        result[3] += 0.5987841945288754;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.14312096029547552;
        result[1] += 0.010156971375807941;
        result[2] += 0;
        result[3] += 0.8467220683287165;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.016129032258064516;
        result[1] += 0.043010752688172046;
        result[2] += 0;
        result[3] += 0.9408602150537635;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-310) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.9962511715089035;
        result[1] += 0;
        result[2] += 0.0028116213683223993;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009372071227741331;
      } else {
        result[0] += 0.9998339353178063;
        result[1] += 0;
        result[2] += 0.00016606468219371444;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.6925880923450791;
        result[1] += 0.0019961812185384487;
        result[2] += 0.005294219753515015;
        result[3] += 0.29421975351501484;
        result[4] += 0.004947057802464851;
        result[5] += 0.0005207429265752474;
        result[6] += 0.0004339524388127062;
      } else {
        result[0] += 0;
        result[1] += 0.0013412017167381974;
        result[2] += 0.008315450643776824;
        result[3] += 0.8033798283261803;
        result[4] += 0.1869635193133047;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
        result[0] += 0.000856898029134533;
        result[1] += 0.011139674378748929;
        result[2] += 0;
        result[3] += 0.25107112253641817;
        result[4] += 0.7369323050556984;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-305.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.9903147699757869;
        result[1] += 0;
        result[2] += 0.009685230024213076;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9995763201479028;
        result[1] += 0;
        result[2] += 0.00042367985209721526;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.5867080023251308;
        result[1] += 0.0005812826971517147;
        result[2] += 0.0042627397791125754;
        result[3] += 0.3104049602790157;
        result[4] += 0.09629916682813408;
        result[5] += 0.0011625653943034295;
        result[6] += 0.0005812826971517147;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.017857142857142856;
        result[3] += 0.8630952380952381;
        result[4] += 0.11838624338624339;
        result[5] += 0.0006613756613756613;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
        result[0] += 0.0011204481792717086;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9988795518207283;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.552798615118292;
        result[1] += 0.003462204270051933;
        result[2] += 0.005770340450086555;
        result[3] += 0.43635314483554527;
        result[4] += 0;
        result[5] += 0.00103866128101558;
        result[6] += 0.0005770340450086555;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.006034124011652101;
        result[3] += 0.6764461090303787;
        result[4] += 0.3150228880565959;
        result[5] += 0.0024968789013732834;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.009345794392523364;
        result[2] += 0;
        result[3] += 0.0035046728971962616;
        result[4] += 0.9871495327102804;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
        result[0] += 0.6043276661514683;
        result[1] += 0.00463678516228748;
        result[2] += 0;
        result[3] += 0.3910355486862442;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9960061556500074;
        result[1] += 0.0009160193463285946;
        result[2] += 0.0015755532756851827;
        result[3] += 0.0013923494064194638;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00010992232155943135;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.41363799928031664;
        result[1] += 0;
        result[2] += 0.007016912558474271;
        result[3] += 0.5779057214825477;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0014393666786613889;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
        result[0] += 0.9992587101556709;
        result[1] += 0;
        result[2] += 0.0007412898443291327;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)89.5) ) ) {
        result[0] += 0.5301374691575608;
        result[1] += 0;
        result[2] += 0.007754670426506873;
        result[3] += 0.41205498766302434;
        result[4] += 0.04846669016566796;
        result[5] += 0.00035248501938667606;
        result[6] += 0.0012336975678533663;
      } else {
        result[0] += 0.10594059405940594;
        result[1] += 0.006930693069306931;
        result[2] += 0;
        result[3] += 0.504950495049505;
        result[4] += 0.3821782178217822;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        result[0] += 0.06729559748427673;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9062893081761006;
        result[4] += 0.02389937106918239;
        result[5] += 0.0025157232704402514;
        result[6] += 0;
      } else {
        result[0] += 0.024337479718766902;
        result[1] += 0.001081665765278529;
        result[2] += 0.0075716603569497025;
        result[3] += 0.001081665765278529;
        result[4] += 0.96322336398053;
        result[5] += 0.0027041644131963224;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
        result[0] += 0.5770491803278689;
        result[1] += 0.003278688524590164;
        result[2] += 0.000819672131147541;
        result[3] += 0.41885245901639345;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9155115511551155;
        result[1] += 0.0011551155115511551;
        result[2] += 0.0028052805280528053;
        result[3] += 0.0801980198019802;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00033003300330033004;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-9.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9991827097711588;
        result[1] += 0;
        result[2] += 0.000726480203414457;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9.081002542680712e-05;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        result[0] += 0.013420567018956551;
        result[1] += 0.006039255158530448;
        result[2] += 0.009058882737795673;
        result[3] += 0.6765643348431472;
        result[4] += 0.29307163227646366;
        result[5] += 0.0018453279651065259;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.9811181044057756;
        result[1] += 0;
        result[2] += 0.0055534987041836355;
        result[3] += 0.012341108231519191;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009872886585215353;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0011614401858304297;
        result[3] += 0.9988385598141696;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)1753.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9986533800161594;
        result[1] += 0;
        result[2] += 0.0012568453182511894;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 8.977466558937069e-05;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)2309.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        result[0] += 0.01579925650557621;
        result[1] += 0.00650557620817844;
        result[2] += 0.004646840148698886;
        result[3] += 0.6425650557620819;
        result[4] += 0.32992565055762085;
        result[5] += 0.0005576208178438663;
        result[6] += 0;
      } else {
        result[0] += 0.9828942439755275;
        result[1] += 0;
        result[2] += 0.003870645523785741;
        result[3] += 0.012236234236483956;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.000998876264202772;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9985443959243085;
        result[5] += 0.001455604075691412;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0003244646333549643;
        result[2] += 0.010382868267358857;
        result[3] += 0.9889682024659312;
        result[4] += 0;
        result[5] += 0.0003244646333549643;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-178) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9988257609971999;
        result[1] += 0;
        result[2] += 0.0011742390028001083;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
        result[0] += 0.32340862422997946;
        result[1] += 0.005646817248459959;
        result[2] += 0.00513347022587269;
        result[3] += 0.6216632443531828;
        result[4] += 0.044147843942505136;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.6944153577661432;
        result[1] += 0.002268760907504363;
        result[2] += 0.0019197207678883072;
        result[3] += 0.2996509598603839;
        result[4] += 0.00034904013961605586;
        result[5] += 0.0008726003490401396;
        result[6] += 0.0005235602094240838;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += 0.002860320991577944;
        result[1] += 0.001430160495788972;
        result[2] += 0.008580962974733831;
        result[3] += 0.6163991736850469;
        result[4] += 0.37072938185285237;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9893586425079092;
        result[1] += 0;
        result[2] += 0.007477710670117918;
        result[3] += 0.0020132297958009777;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0011504170261719873;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        result[0] += 0.24387646432374868;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.7454739084132055;
        result[4] += 0.003194888178913738;
        result[5] += 0.007454739084132056;
        result[6] += 0;
      } else {
        result[0] += 0.9949163541967119;
        result[1] += 0.0009374098644361119;
        result[2] += 0.000540813383328526;
        result[3] += 0.003425151427747332;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00018027112777617538;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        result[0] += 0.1444154612283614;
        result[1] += 0.001897083234526915;
        result[2] += 0.009011145364002845;
        result[3] += 0.6298316338629357;
        result[4] += 0.21460754090585724;
        result[5] += 0.00023713540431586437;
        result[6] += 0;
      } else {
        result[0] += 0.0010660980810234541;
        result[1] += 0.006396588486140725;
        result[2] += 0;
        result[3] += 0.11194029850746269;
        result[4] += 0.8805970149253731;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.06578947368421052;
        result[1] += 0;
        result[2] += 0.02033492822966507;
        result[3] += 0.8002392344497608;
        result[4] += 0.11244019138755981;
        result[5] += 0.0011961722488038277;
        result[6] += 0;
      } else {
        result[0] += 0.9805238415043653;
        result[1] += 0;
        result[2] += 0.009402283411685695;
        result[3] += 0.006044325050369375;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.004029550033579583;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += 0.1752002786485545;
        result[1] += 0;
        result[2] += 0.0006966213862765587;
        result[3] += 0.6617903169627307;
        result[4] += 0.16231278300243818;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9967014843320505;
        result[1] += 0;
        result[2] += 0.0010995052226498076;
        result[3] += 0.0019241341396371632;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002748763056624519;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.06388888888888888;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9361111111111111;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.3536989326463011;
        result[1] += 0.008833271991166729;
        result[2] += 0.01104158998895841;
        result[3] += 0.6264262053735737;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.12129840546697039;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8741457858769932;
        result[4] += 0.0017084282460136675;
        result[5] += 0.0028473804100227792;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.02669902912621359;
        result[3] += 0;
        result[4] += 0.9720873786407767;
        result[5] += 0.0012135922330097086;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
        result[0] += 0.9603639465453512;
        result[1] += 0.0007392664202445266;
        result[2] += 0.002160932613022462;
        result[3] += 0.03639465453511515;
        result[4] += 0;
        result[5] += 5.686664771111743e-05;
        result[6] += 0.0002843332385555871;
      } else {
        result[0] += 0.8672504566455357;
        result[1] += 0;
        result[2] += 0.0013967981089502528;
        result[3] += 0.1310304072203718;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00032233802514236603;
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
  result[6] /= 80;
  
  // Apply base_scores
  result[0] += 0;
  result[1] += 0;
  result[2] += 0;
  result[3] += 0;
  result[4] += 0;
  result[5] += 0;
  result[6] += 0;
  
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
    

    FILE* file = fopen("./codegen/dataset_148/split_0/test_data.csv", "r");
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
