
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
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        result[0] += 0.11988304093567252;
        result[1] += 0.0029239766081871348;
        result[2] += 0.011695906432748539;
        result[3] += 0;
        result[4] += 0.7836257309941521;
        result[5] += 0.08187134502923978;
      } else {
        result[0] += 0;
        result[1] += 0.004230118443316413;
        result[2] += 0.00338409475465313;
        result[3] += 0.1692047377326565;
        result[4] += 0.05245346869712352;
        result[5] += 0.7707275803722504;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        result[0] += 0.00749063670411985;
        result[1] += 0.9101123595505618;
        result[2] += 0;
        result[3] += 0.003745318352059925;
        result[4] += 0.07865168539325842;
        result[5] += 0;
      } else {
        result[0] += 0.6590241034685479;
        result[1] += 0.029982363315696647;
        result[2] += 0.04526748971193416;
        result[3] += 0.08994708994708994;
        result[4] += 0.1011169900058789;
        result[5] += 0.07466196355085244;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.061224489795918366;
        result[3] += 0.7142857142857143;
        result[4] += 0;
        result[5] += 0.22448979591836735;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5789473684210527;
        result[3] += 0.17543859649122806;
        result[4] += 0.017543859649122806;
        result[5] += 0.22807017543859648;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)85.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.8375;
        result[3] += 0.146875;
        result[4] += 0;
        result[5] += 0.015625;
      } else {
        result[0] += 0.0109204368174727;
        result[1] += 0;
        result[2] += 0.9672386895475819;
        result[3] += 0.0187207488299532;
        result[4] += 0;
        result[5] += 0.0031201248049922;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.026402640264026403;
        result[1] += 0.0165016501650165;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8547854785478548;
        result[5] += 0.10231023102310231;
      } else {
        result[0] += 0.03501628664495114;
        result[1] += 0.006514657980456026;
        result[2] += 0.005700325732899023;
        result[3] += 0.16123778501628663;
        result[4] += 0.039902280130293157;
        result[5] += 0.751628664495114;
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)104.5) ) ) {
        result[0] += 0.6206703910614525;
        result[1] += 0.05921787709497207;
        result[2] += 0.05418994413407821;
        result[3] += 0.08212290502793296;
        result[4] += 0.11899441340782123;
        result[5] += 0.06480446927374302;
      } else {
        result[0] += 0.01072961373390558;
        result[1] += 0.9763948497854077;
        result[2] += 0.004291845493562232;
        result[3] += 0.002145922746781116;
        result[4] += 0.006437768240343348;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
        result[0] += 0.029411764705882353;
        result[1] += 0.04411764705882353;
        result[2] += 0.17647058823529413;
        result[3] += 0.3382352941176471;
        result[4] += 0;
        result[5] += 0.4117647058823529;
      } else {
        result[0] += 0;
        result[1] += 0.31818181818181823;
        result[2] += 0.5000000000000001;
        result[3] += 0;
        result[4] += 0.04545454545454546;
        result[5] += 0.13636363636363638;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
        result[0] += 0.01079136690647482;
        result[1] += 0;
        result[2] += 0.7661870503597122;
        result[3] += 0.15827338129496402;
        result[4] += 0;
        result[5] += 0.06474820143884892;
      } else {
        result[0] += 0.005961251862891207;
        result[1] += 0;
        result[2] += 0.9672131147540983;
        result[3] += 0.026825633383010434;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        result[0] += 0.2026726057906459;
        result[1] += 0.07126948775055679;
        result[2] += 0;
        result[3] += 0.0066815144766146995;
        result[4] += 0.6146993318485523;
        result[5] += 0.10467706013363029;
      } else {
        result[0] += 0.010612244897959184;
        result[1] += 0.0008163265306122449;
        result[2] += 0.017142857142857144;
        result[3] += 0.20081632653061224;
        result[4] += 0.08489795918367347;
        result[5] += 0.6857142857142857;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.888235294117647;
        result[2] += 0.0058823529411764705;
        result[3] += 0.00784313725490196;
        result[4] += 0.08235294117647059;
        result[5] += 0.01568627450980392;
      } else {
        result[0] += 0.6753246753246753;
        result[1] += 0.03896103896103896;
        result[2] += 0.04285714285714286;
        result[3] += 0.06493506493506493;
        result[4] += 0.08181818181818182;
        result[5] += 0.09610389610389611;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
        result[0] += 0.0196078431372549;
        result[1] += 0;
        result[2] += 0.23529411764705882;
        result[3] += 0.5588235294117647;
        result[4] += 0.0196078431372549;
        result[5] += 0.16666666666666666;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7878787878787878;
        result[3] += 0.18181818181818182;
        result[4] += 0;
        result[5] += 0.030303030303030304;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        result[0] += 0.03508771929824561;
        result[1] += 0;
        result[2] += 0.8070175438596491;
        result[3] += 0.14035087719298245;
        result[4] += 0;
        result[5] += 0.017543859649122806;
      } else {
        result[0] += 0.0084985835694051;
        result[1] += 0;
        result[2] += 0.9447592067988668;
        result[3] += 0.039660056657223795;
        result[4] += 0;
        result[5] += 0.007082152974504249;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)71.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.0033333333333333335;
        result[1] += 0.05333333333333334;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8366666666666667;
        result[5] += 0.10666666666666667;
      } else {
        result[0] += 0.03714565004887586;
        result[1] += 0.0039100684261974585;
        result[2] += 0.0009775171065493646;
        result[3] += 0.10654936461388075;
        result[4] += 0.03519061583577713;
        result[5] += 0.8162267839687195;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        result[0] += 0;
        result[1] += 0.8117443868739206;
        result[2] += 0;
        result[3] += 0.012089810017271158;
        result[4] += 0.14853195164075994;
        result[5] += 0.027633851468048358;
      } else {
        result[0] += 0.6466165413533834;
        result[1] += 0.031810294968189705;
        result[2] += 0.02834008097165992;
        result[3] += 0.11162521688837479;
        result[4] += 0.06940427993059572;
        result[5] += 0.11220358588779641;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)91.5) ) ) {
        result[0] += 0;
        result[1] += 0.015625;
        result[2] += 0.0625;
        result[3] += 0.078125;
        result[4] += 0.140625;
        result[5] += 0.703125;
      } else {
        result[0] += 0;
        result[1] += 0.08695652173913043;
        result[2] += 0.18478260869565216;
        result[3] += 0.5434782608695652;
        result[4] += 0;
        result[5] += 0.18478260869565216;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0.018018018018018018;
        result[1] += 0.009009009009009009;
        result[2] += 0.5045045045045045;
        result[3] += 0.27927927927927926;
        result[4] += 0.018018018018018018;
        result[5] += 0.17117117117117117;
      } else {
        result[0] += 0.019396551724137935;
        result[1] += 0;
        result[2] += 0.9094827586206897;
        result[3] += 0.06681034482758622;
        result[4] += 0;
        result[5] += 0.004310344827586208;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)46.5) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.7804878048780488;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.21951219512195122;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
        result[0] += 0.02706359945872801;
        result[1] += 0.008119079837618403;
        result[2] += 0.010148849797023005;
        result[3] += 0.13328822733423545;
        result[4] += 0.19621109607577808;
        result[5] += 0.625169147496617;
      } else {
        result[0] += 0.6408045977011494;
        result[1] += 0.027011494252873563;
        result[2] += 0.06954022988505747;
        result[3] += 0.0764367816091954;
        result[4] += 0.11264367816091954;
        result[5] += 0.0735632183908046;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)95) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.03125;
        result[4] += 0;
        result[5] += 0.96875;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.4444444444444444;
        result[4] += 0.07407407407407407;
        result[5] += 0.48148148148148145;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)96.5) ) ) {
        result[0] += 0.03349282296650718;
        result[1] += 0.08133971291866028;
        result[2] += 0.5502392344497608;
        result[3] += 0.18660287081339713;
        result[4] += 0.014354066985645933;
        result[5] += 0.1339712918660287;
      } else {
        result[0] += 0.010428736964078795;
        result[1] += 0.0034762456546929316;
        result[2] += 0.9165701042873696;
        result[3] += 0.0660486674391657;
        result[4] += 0;
        result[5] += 0.0034762456546929316;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.049342105263157895;
        result[2] += 0;
        result[3] += 0.03289473684210526;
        result[4] += 0.8618421052631579;
        result[5] += 0.05592105263157895;
      } else {
        result[0] += 0.0794979079497908;
        result[1] += 0.0048814504881450485;
        result[2] += 0.008368200836820083;
        result[3] += 0.15690376569037656;
        result[4] += 0.07182705718270571;
        result[5] += 0.6785216178521618;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)53.5) ) ) {
        result[0] += 0.002008032128514056;
        result[1] += 0.9839357429718876;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.014056224899598393;
        result[5] += 0;
      } else {
        result[0] += 0.678916827852998;
        result[1] += 0.029658284977433908;
        result[2] += 0.07543520309477755;
        result[3] += 0.05351386202450031;
        result[4] += 0.10767246937459701;
        result[5] += 0.054803352675693084;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.05;
        result[3] += 0.225;
        result[4] += 0;
        result[5] += 0.725;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6216216216216216;
        result[3] += 0.2972972972972973;
        result[4] += 0;
        result[5] += 0.08108108108108109;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)109.5) ) ) {
        result[0] += 0.008695652173913044;
        result[1] += 0;
        result[2] += 0.9453416149068323;
        result[3] += 0.034782608695652174;
        result[4] += 0.004968944099378882;
        result[5] += 0.006211180124223602;
      } else {
        result[0] += 0;
        result[1] += 0.6666666666666666;
        result[2] += 0;
        result[3] += 0.3333333333333333;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.00823045267489712;
        result[1] += 0.04938271604938271;
        result[2] += 0;
        result[3] += 0.00411522633744856;
        result[4] += 0.897119341563786;
        result[5] += 0.0411522633744856;
      } else {
        result[0] += 0.049841772151898736;
        result[1] += 0.011075949367088608;
        result[2] += 0.007911392405063292;
        result[3] += 0.12895569620253164;
        result[4] += 0.05221518987341772;
        result[5] += 0.75;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
        result[0] += 0.0035778175313059034;
        result[1] += 0.8032200357781754;
        result[2] += 0.01073345259391771;
        result[3] += 0.0035778175313059034;
        result[4] += 0.16815742397137745;
        result[5] += 0.01073345259391771;
      } else {
        result[0] += 0.7319316688567674;
        result[1] += 0.028252299605781867;
        result[2] += 0.028252299605781867;
        result[3] += 0.05781865965834428;
        result[4] += 0.10578186596583443;
        result[5] += 0.047963206307490146;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)86) ) ) {
        result[0] += 0.03125;
        result[1] += 0.0625;
        result[2] += 0.10416666666666667;
        result[3] += 0.14583333333333334;
        result[4] += 0.11458333333333333;
        result[5] += 0.5416666666666666;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.36875;
        result[3] += 0.4625;
        result[4] += 0.0125;
        result[5] += 0.15625;
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
        result[0] += 0.017361111111111112;
        result[1] += 0;
        result[2] += 0.8159722222222222;
        result[3] += 0.1597222222222222;
        result[4] += 0;
        result[5] += 0.006944444444444444;
      } else {
        result[0] += 0.03025936599423631;
        result[1] += 0;
        result[2] += 0.9423631123919308;
        result[3] += 0.025936599423631124;
        result[4] += 0;
        result[5] += 0.001440922190201729;
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)58) ) ) {
        result[0] += 0.002506265664160401;
        result[1] += 0.9974937343358395;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.6964285714285714;
        result[2] += 0;
        result[3] += 0.10714285714285714;
        result[4] += 0.17857142857142858;
        result[5] += 0.017857142857142856;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        result[0] += 0.014767932489451477;
        result[1] += 0.16455696202531644;
        result[2] += 0.002109704641350211;
        result[3] += 0.027426160337552744;
        result[4] += 0.7130801687763713;
        result[5] += 0.07805907172995781;
      } else {
        result[0] += 0.25355239786856126;
        result[1] += 0.011545293072824156;
        result[2] += 0.03463587921847247;
        result[3] += 0.15674955595026643;
        result[4] += 0.08214920071047957;
        result[5] += 0.4613676731793961;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)93.5) ) ) {
        result[0] += 0.1111111111111111;
        result[1] += 0;
        result[2] += 0.5925925925925926;
        result[3] += 0.2962962962962963;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.9777424483306836;
        result[1] += 0;
        result[2] += 0.017488076311605722;
        result[3] += 0.003179650238473768;
        result[4] += 0;
        result[5] += 0.001589825119236884;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
        result[0] += 0.4634146341463415;
        result[1] += 0;
        result[2] += 0.43902439024390244;
        result[3] += 0.0975609756097561;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.0031645569620253164;
        result[1] += 0;
        result[2] += 0.9124472573839663;
        result[3] += 0.07172995780590717;
        result[4] += 0;
        result[5] += 0.012658227848101266;
      }
    }
  }
  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99) ) ) {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
        result[0] += 0.009677419354838712;
        result[1] += 0.0774193548387097;
        result[2] += 0;
        result[3] += 0.006451612903225807;
        result[4] += 0.8129032258064517;
        result[5] += 0.09354838709677421;
      } else {
        result[0] += 0.8373702422145329;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.10726643598615919;
        result[5] += 0.05536332179930797;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.005479452054794521;
        result[3] += 0.0273972602739726;
        result[4] += 0.05342465753424658;
        result[5] += 0.9136986301369863;
      } else {
        result[0] += 0.034924330616996506;
        result[1] += 0.030267753201396973;
        result[2] += 0.034924330616996506;
        result[3] += 0.3760186263096624;
        result[4] += 0.1350407450523865;
        result[5] += 0.38882421420256114;
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)67.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)59) ) ) {
        result[0] += 0;
        result[1] += 0.9977628635346756;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.0022371364653243847;
        result[5] += 0;
      } else {
        result[0] += 0.061224489795918366;
        result[1] += 0.46938775510204084;
        result[2] += 0;
        result[3] += 0.04081632653061224;
        result[4] += 0.42857142857142855;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
        result[0] += 0.824376199616123;
        result[1] += 0.022072936660268716;
        result[2] += 0.05086372360844531;
        result[3] += 0.028790786948176588;
        result[4] += 0.05182341650671786;
        result[5] += 0.022072936660268716;
      } else {
        result[0] += 0.02727272727272727;
        result[1] += 0.0027272727272727275;
        result[2] += 0.8372727272727273;
        result[3] += 0.09454545454545454;
        result[4] += 0.0036363636363636364;
        result[5] += 0.034545454545454546;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)50) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)81.5) ) ) {
        result[0] += 0;
        result[1] += 0.16666666666666666;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8333333333333334;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.9896907216494846;
        result[2] += 0;
        result[3] += 0.002061855670103093;
        result[4] += 0.008247422680412371;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
        result[0] += 0.09027027027027026;
        result[1] += 0.015675675675675675;
        result[2] += 0.005405405405405406;
        result[3] += 0.14864864864864866;
        result[4] += 0.1827027027027027;
        result[5] += 0.5572972972972973;
      } else {
        result[0] += 0.6503785271851343;
        result[1] += 0.039917412250516184;
        result[2] += 0.07570543702684103;
        result[3] += 0.05643496214728149;
        result[4] += 0.11631108052305576;
        result[5] += 0.06125258086717138;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
        result[0] += 0;
        result[1] += 0.05194805194805195;
        result[2] += 0.12987012987012986;
        result[3] += 0.22077922077922077;
        result[4] += 0;
        result[5] += 0.5974025974025974;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6818181818181818;
        result[3] += 0.20454545454545456;
        result[4] += 0;
        result[5] += 0.11363636363636363;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
        result[0] += 0.004901960784313726;
        result[1] += 0;
        result[2] += 0.7647058823529412;
        result[3] += 0.20098039215686278;
        result[4] += 0;
        result[5] += 0.029411764705882356;
      } else {
        result[0] += 0.011922503725782416;
        result[1] += 0;
        result[2] += 0.9493293591654248;
        result[3] += 0.03725782414307005;
        result[4] += 0;
        result[5] += 0.001490312965722802;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        result[0] += 0.01298701298701299;
        result[1] += 0.030303030303030307;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8701298701298702;
        result[5] += 0.08658008658008659;
      } else {
        result[0] += 0.03739837398373984;
        result[1] += 0.0040650406504065045;
        result[2] += 0.0016260162601626016;
        result[3] += 0.13170731707317074;
        result[4] += 0.06747967479674796;
        result[5] += 0.7577235772357723;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)55.5) ) ) {
        result[0] += 0;
        result[1] += 0.924;
        result[2] += 0;
        result[3] += 0.006;
        result[4] += 0.07;
        result[5] += 0;
      } else {
        result[0] += 0.6542111506524318;
        result[1] += 0.03143534994068803;
        result[2] += 0.038552787663107956;
        result[3] += 0.07473309608540926;
        result[4] += 0.12514827995255046;
        result[5] += 0.0759193357058126;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.11764705882352941;
        result[3] += 0.5588235294117647;
        result[4] += 0;
        result[5] += 0.3235294117647059;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.65;
        result[3] += 0.05;
        result[4] += 0;
        result[5] += 0.3;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)94.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5512820512820513;
        result[3] += 0.2692307692307692;
        result[4] += 0;
        result[5] += 0.1794871794871795;
      } else {
        result[0] += 0.018386108273748723;
        result[1] += 0;
        result[2] += 0.9009193054136875;
        result[3] += 0.07150153217568948;
        result[4] += 0.0010214504596527069;
        result[5] += 0.008171603677221655;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
        result[0] += 0;
        result[1] += 0.9953703703703703;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.004629629629629629;
        result[5] += 0;
      } else {
        result[0] += 0.16666666666666666;
        result[1] += 0.16666666666666666;
        result[2] += 0;
        result[3] += 0.6666666666666666;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
        result[0] += 0.03806451612903226;
        result[1] += 0.01032258064516129;
        result[2] += 0.005806451612903226;
        result[3] += 0.1503225806451613;
        result[4] += 0.23161290322580644;
        result[5] += 0.5638709677419355;
      } else {
        result[0] += 0.6204583566238122;
        result[1] += 0.041922861934041364;
        result[2] += 0.07434320849636669;
        result[3] += 0.07210732252655115;
        result[4] += 0.0888764673001677;
        result[5] += 0.10229178311906093;
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
        result[0] += 0;
        result[1] += 0.03361344537815126;
        result[2] += 0.2689075630252101;
        result[3] += 0.4957983193277311;
        result[4] += 0.058823529411764705;
        result[5] += 0.14285714285714285;
      } else {
        result[0] += 0.023255813953488372;
        result[1] += 0;
        result[2] += 0.7093023255813954;
        result[3] += 0.046511627906976744;
        result[4] += 0.03488372093023256;
        result[5] += 0.18604651162790697;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)85.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7932489451476793;
        result[3] += 0.16033755274261605;
        result[4] += 0;
        result[5] += 0.046413502109704644;
      } else {
        result[0] += 0.0032948929159802307;
        result[1] += 0;
        result[2] += 0.9637561779242174;
        result[3] += 0.032948929159802305;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.18401937046004843;
        result[1] += 0.009685230024213076;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7263922518159807;
        result[5] += 0.07990314769975787;
      } else {
        result[0] += 0;
        result[1] += 0.004032258064516129;
        result[2] += 0.0010080645161290322;
        result[3] += 0.0715725806451613;
        result[4] += 0.08971774193548387;
        result[5] += 0.8336693548387096;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        result[0] += 0.0019230769230769232;
        result[1] += 0.9230769230769231;
        result[2] += 0.007692307692307693;
        result[3] += 0.0019230769230769232;
        result[4] += 0.06153846153846154;
        result[5] += 0.0038461538461538464;
      } else {
        result[0] += 0.6247848537005164;
        result[1] += 0.03671830177854274;
        result[2] += 0.029259896729776247;
        result[3] += 0.15261044176706828;
        result[4] += 0.055077452667814115;
        result[5] += 0.10154905335628227;
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
        result[0] += 0.012987012987012988;
        result[1] += 0;
        result[2] += 0.23376623376623376;
        result[3] += 0.538961038961039;
        result[4] += 0;
        result[5] += 0.21428571428571427;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.8085106382978724;
        result[3] += 0.06382978723404256;
        result[4] += 0.010638297872340427;
        result[5] += 0.1170212765957447;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
        result[0] += 0.5161290322580645;
        result[1] += 0;
        result[2] += 0.41935483870967744;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.06451612903225806;
      } else {
        result[0] += 0.010238907849829351;
        result[1] += 0;
        result[2] += 0.9237770193401593;
        result[3] += 0.055745164960182024;
        result[4] += 0;
        result[5] += 0.010238907849829351;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)50) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
        result[0] += 0;
        result[1] += 0.03333333333333333;
        result[2] += 0;
        result[3] += 0.03333333333333333;
        result[4] += 0.9333333333333333;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.989451476793249;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.010548523206751054;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
        result[0] += 0.029093369418132613;
        result[1] += 0;
        result[2] += 0.0013531799729364006;
        result[3] += 0.13870094722598106;
        result[4] += 0.18470906630581868;
        result[5] += 0.6461434370771313;
      } else {
        result[0] += 0.6118568232662193;
        result[1] += 0.04865771812080537;
        result[2] += 0.08221476510067115;
        result[3] += 0.08277404921700224;
        result[4] += 0.10850111856823266;
        result[5] += 0.06599552572706935;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
        result[0] += 0.006849315068493151;
        result[1] += 0.06164383561643836;
        result[2] += 0.15753424657534248;
        result[3] += 0.36986301369863017;
        result[4] += 0.09589041095890412;
        result[5] += 0.30821917808219185;
      } else {
        result[0] += 0.06849315068493152;
        result[1] += 0.09589041095890412;
        result[2] += 0.767123287671233;
        result[3] += 0;
        result[4] += 0.04109589041095891;
        result[5] += 0.027397260273972605;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)95) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.18181818181818182;
        result[3] += 0.6363636363636364;
        result[4] += 0;
        result[5] += 0.18181818181818182;
      } else {
        result[0] += 0.013317191283292978;
        result[1] += 0;
        result[2] += 0.914043583535109;
        result[3] += 0.07021791767554479;
        result[4] += 0;
        result[5] += 0.002421307506053269;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        result[0] += 0;
        result[1] += 0.076;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.856;
        result[5] += 0.068;
      } else {
        result[0] += 0.03413821815154038;
        result[1] += 0.014154870940882597;
        result[2] += 0.0033305578684429643;
        result[3] += 0.1582014987510408;
        result[4] += 0.04329725228975854;
        result[5] += 0.7468776019983348;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)50) ) ) {
        result[0] += 0.006224066390041494;
        result[1] += 0.9460580912863071;
        result[2] += 0.0020746887966804984;
        result[3] += 0;
        result[4] += 0.03734439834024897;
        result[5] += 0.008298755186721993;
      } else {
        result[0] += 0.5884615384615386;
        result[1] += 0.04615384615384616;
        result[2] += 0.041208791208791215;
        result[3] += 0.09285714285714287;
        result[4] += 0.1296703296703297;
        result[5] += 0.10164835164835166;
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
        result[0] += 0.008264462809917357;
        result[1] += 0;
        result[2] += 0.27272727272727276;
        result[3] += 0.5454545454545455;
        result[4] += 0;
        result[5] += 0.1735537190082645;
      } else {
        result[0] += 0.06354515050167224;
        result[1] += 0;
        result[2] += 0.7859531772575251;
        result[3] += 0.10367892976588629;
        result[4] += 0;
        result[5] += 0.046822742474916385;
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)86.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.8817733990147784;
        result[3] += 0.10837438423645321;
        result[4] += 0;
        result[5] += 0.009852216748768473;
      } else {
        result[0] += 0.0022222222222222222;
        result[1] += 0;
        result[2] += 0.9888888888888889;
        result[3] += 0.008888888888888889;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)70.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
        result[0] += 0.039285714285714285;
        result[1] += 0.02142857142857143;
        result[2] += 0.014285714285714285;
        result[3] += 0.02142857142857143;
        result[4] += 0.775;
        result[5] += 0.12857142857142856;
      } else {
        result[0] += 0;
        result[1] += 0.013820335636722606;
        result[2] += 0.003948667324777887;
        result[3] += 0.10069101678183613;
        result[4] += 0.08094768015794669;
        result[5] += 0.8005923000987167;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9891774891774892;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.010822510822510822;
        result[5] += 0;
      } else {
        result[0] += 0.5739732805541812;
        result[1] += 0.03067788223651658;
        result[2] += 0.04255319148936171;
        result[3] += 0.10984661058881744;
        result[4] += 0.11776348342404752;
        result[5] += 0.12518555170707574;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.3380281690140845;
        result[3] += 0.4507042253521127;
        result[4] += 0;
        result[5] += 0.2112676056338028;
      } else {
        result[0] += 0.013043478260869565;
        result[1] += 0;
        result[2] += 0.7478260869565218;
        result[3] += 0.2217391304347826;
        result[4] += 0;
        result[5] += 0.017391304347826087;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)69.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 1;
      } else {
        result[0] += 0.006693440428380187;
        result[1] += 0;
        result[2] += 0.965194109772423;
        result[3] += 0.0214190093708166;
        result[4] += 0;
        result[5] += 0.006693440428380187;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
        result[0] += 0.021021021021021023;
        result[1] += 0.06906906906906907;
        result[2] += 0.009009009009009009;
        result[3] += 0.012012012012012012;
        result[4] += 0.7837837837837838;
        result[5] += 0.10510510510510511;
      } else {
        result[0] += 0.031578947368421054;
        result[1] += 0.004784688995215311;
        result[2] += 0.005741626794258373;
        result[3] += 0.14736842105263157;
        result[4] += 0.05263157894736842;
        result[5] += 0.7578947368421053;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)50) ) ) {
        result[0] += 0.0042105263157894745;
        result[1] += 0.9431578947368422;
        result[2] += 0;
        result[3] += 0.006315789473684211;
        result[4] += 0.03157894736842106;
        result[5] += 0.01473684210526316;
      } else {
        result[0] += 0.6454066705675833;
        result[1] += 0.040374488004681096;
        result[2] += 0.03569338794616734;
        result[3] += 0.07372732592159156;
        result[4] += 0.10122878876535983;
        result[5] += 0.1035693387946167;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)94.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0.006097560975609756;
        result[1] += 0.036585365853658534;
        result[2] += 0.09146341463414634;
        result[3] += 0.3719512195121951;
        result[4] += 0.08536585365853659;
        result[5] += 0.40853658536585363;
      } else {
        result[0] += 0.09756097560975611;
        result[1] += 0;
        result[2] += 0.7560975609756099;
        result[3] += 0.07317073170731708;
        result[4] += 0;
        result[5] += 0.07317073170731708;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)79.5) ) ) {
        result[0] += 0.13709677419354838;
        result[1] += 0.016129032258064516;
        result[2] += 0.5;
        result[3] += 0.21774193548387097;
        result[4] += 0.008064516129032258;
        result[5] += 0.12096774193548387;
      } else {
        result[0] += 0.0021390374331550803;
        result[1] += 0.0032085561497326204;
        result[2] += 0.9165775401069519;
        result[3] += 0.06737967914438503;
        result[4] += 0;
        result[5] += 0.0106951871657754;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0.01119402985074627;
        result[1] += 0.0746268656716418;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.873134328358209;
        result[5] += 0.04104477611940299;
      } else {
        result[0] += 0.043859649122807015;
        result[1] += 0.011164274322169059;
        result[2] += 0.011961722488038277;
        result[3] += 0.16188197767145135;
        result[4] += 0.04704944178628389;
        result[5] += 0.7240829346092504;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        result[0] += 0.010221465076660987;
        result[1] += 0.807495741056218;
        result[2] += 0;
        result[3] += 0.02555366269165247;
        result[4] += 0.14480408858603067;
        result[5] += 0.01192504258943782;
      } else {
        result[0] += 0.6556776556776557;
        result[1] += 0.022588522588522588;
        result[2] += 0.061660561660561664;
        result[3] += 0.09829059829059829;
        result[4] += 0.08852258852258853;
        result[5] += 0.07326007326007326;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
        result[0] += 0.037037037037037035;
        result[1] += 0.07407407407407407;
        result[2] += 0.16666666666666666;
        result[3] += 0.24074074074074073;
        result[4] += 0;
        result[5] += 0.48148148148148145;
      } else {
        result[0] += 0.04444444444444445;
        result[1] += 0;
        result[2] += 0.6814814814814816;
        result[3] += 0.20000000000000004;
        result[4] += 0;
        result[5] += 0.07407407407407408;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.4;
        result[3] += 0.4666666666666667;
        result[4] += 0;
        result[5] += 0.13333333333333333;
      } else {
        result[0] += 0.004571428571428572;
        result[1] += 0.004571428571428572;
        result[2] += 0.9325714285714286;
        result[3] += 0.045714285714285714;
        result[4] += 0;
        result[5] += 0.012571428571428572;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.004405286343612335;
        result[1] += 0.02643171806167401;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9295154185022027;
        result[5] += 0.039647577092511016;
      } else {
        result[0] += 0.042113955408753095;
        result[1] += 0.016515276630883566;
        result[2] += 0.004128819157720892;
        result[3] += 0.1593724194880264;
        result[4] += 0.04706853839801817;
        result[5] += 0.7308009909165979;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0.9552845528455285;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.044715447154471545;
        result[5] += 0;
      } else {
        result[0] += 0.612450925406618;
        result[1] += 0.03196859226023556;
        result[2] += 0.050476724621424565;
        result[3] += 0.09927089175546831;
        result[4] += 0.11160964666292765;
        result[5] += 0.09422321929332586;
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
        result[0] += 0.017857142857142856;
        result[1] += 0;
        result[2] += 0.33035714285714285;
        result[3] += 0.5;
        result[4] += 0.017857142857142856;
        result[5] += 0.13392857142857142;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7777777777777778;
        result[3] += 0.16049382716049382;
        result[4] += 0;
        result[5] += 0.06172839506172839;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
        result[0] += 0.37037037037037035;
        result[1] += 0;
        result[2] += 0.5925925925925926;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.037037037037037035;
      } else {
        result[0] += 0.007838745800671894;
        result[1] += 0;
        result[2] += 0.929451287793953;
        result[3] += 0.052631578947368425;
        result[4] += 0;
        result[5] += 0.01007838745800672;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)96.5) ) ) {
        result[0] += 0.011682242990654207;
        result[1] += 0.08411214953271029;
        result[2] += 0.011682242990654207;
        result[3] += 0.0023364485981308414;
        result[4] += 0.8200934579439253;
        result[5] += 0.07009345794392524;
      } else {
        result[0] += 0;
        result[1] += 0.9886877828054299;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.011312217194570135;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
        result[0] += 0.07227722772277227;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.07227722772277227;
        result[4] += 0.10792079207920792;
        result[5] += 0.7475247524752475;
      } else {
        result[0] += 0.5872061235647895;
        result[1] += 0.02569710224166211;
        result[2] += 0.06287588846364134;
        result[3] += 0.15527610716238383;
        result[4] += 0.05358119190814653;
        result[5] += 0.11536358665937671;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)105) ) ) {
        result[0] += 0.02040816326530612;
        result[1] += 0.08163265306122448;
        result[2] += 0.29081632653061223;
        result[3] += 0.3520408163265306;
        result[4] += 0.02040816326530612;
        result[5] += 0.23469387755102042;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.8888888888888888;
        result[3] += 0;
        result[4] += 0.1111111111111111;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)89) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 1;
      } else {
        result[0] += 0.012471655328798186;
        result[1] += 0;
        result[2] += 0.9217687074829932;
        result[3] += 0.061224489795918366;
        result[4] += 0;
        result[5] += 0.0045351473922902496;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
        result[0] += 0.02444987775061125;
        result[1] += 0.09046454767726161;
        result[2] += 0.014669926650366748;
        result[3] += 0.004889975550122249;
        result[4] += 0.8068459657701712;
        result[5] += 0.05867970660146699;
      } else {
        result[0] += 0;
        result[1] += 0.9783549783549783;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.021645021645021644;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
        result[0] += 0.048031496062992125;
        result[1] += 0.007874015748031496;
        result[2] += 0.01653543307086614;
        result[3] += 0.15354330708661418;
        result[4] += 0.049606299212598425;
        result[5] += 0.7244094488188977;
      } else {
        result[0] += 0.662431941923775;
        result[1] += 0.022988505747126436;
        result[2] += 0.07078039927404718;
        result[3] += 0.09679370840895342;
        result[4] += 0.08106473079249849;
        result[5] += 0.06594071385359952;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)89.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.125;
        result[4] += 0;
        result[5] += 0.875;
      } else {
        result[0] += 0.010101010101010102;
        result[1] += 0;
        result[2] += 0.3939393939393939;
        result[3] += 0.3939393939393939;
        result[4] += 0.04040404040404041;
        result[5] += 0.16161616161616163;
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)105.5) ) ) {
        result[0] += 0.004629629629629629;
        result[1] += 0.004629629629629629;
        result[2] += 0.7962962962962963;
        result[3] += 0.14814814814814814;
        result[4] += 0.009259259259259259;
        result[5] += 0.037037037037037035;
      } else {
        result[0] += 0.005706134094151213;
        result[1] += 0;
        result[2] += 0.9500713266761769;
        result[3] += 0.0442225392296719;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
        result[0] += 0.011363636363636364;
        result[1] += 0.030303030303030304;
        result[2] += 0.011363636363636364;
        result[3] += 0.007575757575757576;
        result[4] += 0.8825757575757576;
        result[5] += 0.056818181818181816;
      } else {
        result[0] += 0.04049586776859504;
        result[1] += 0.013223140495867768;
        result[2] += 0.01487603305785124;
        result[3] += 0.1396694214876033;
        result[4] += 0.0603305785123967;
        result[5] += 0.731404958677686;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6806722689075632;
        result[1] += 0.05642256902761105;
        result[2] += 0.04681872749099641;
        result[3] += 0.05402160864345739;
        result[4] += 0.10564225690276112;
        result[5] += 0.05642256902761105;
      } else {
        result[0] += 0.012135922330097087;
        result[1] += 0.9878640776699029;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
        result[0] += 0.020618556701030927;
        result[1] += 0.020618556701030927;
        result[2] += 0.1134020618556701;
        result[3] += 0.061855670103092786;
        result[4] += 0.15463917525773196;
        result[5] += 0.6288659793814433;
      } else {
        result[0] += 0.06250000000000001;
        result[1] += 0;
        result[2] += 0.22321428571428575;
        result[3] += 0.5625000000000001;
        result[4] += 0.04464285714285715;
        result[5] += 0.10714285714285715;
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)107) ) ) {
        result[0] += 0.002398081534772182;
        result[1] += 0;
        result[2] += 0.7170263788968825;
        result[3] += 0.2278177458033573;
        result[4] += 0.004796163069544364;
        result[5] += 0.047961630695443645;
      } else {
        result[0] += 0.007716049382716049;
        result[1] += 0;
        result[2] += 0.9459876543209876;
        result[3] += 0.035493827160493825;
        result[4] += 0;
        result[5] += 0.010802469135802469;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
        result[0] += 0.16716417910447762;
        result[1] += 0.011940298507462687;
        result[2] += 0;
        result[3] += 0.01791044776119403;
        result[4] += 0.7313432835820896;
        result[5] += 0.07164179104477612;
      } else {
        result[0] += 0.0015936254980079682;
        result[1] += 0.0015936254980079682;
        result[2] += 0.0015936254980079682;
        result[3] += 0.15139442231075698;
        result[4] += 0.07808764940239044;
        result[5] += 0.7657370517928287;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)51.5) ) ) {
        result[0] += 0.011037527593818987;
        result[1] += 0.9690949227373069;
        result[2] += 0;
        result[3] += 0.0022075055187637973;
        result[4] += 0.01766004415011038;
        result[5] += 0;
      } else {
        result[0] += 0.6724890829694323;
        result[1] += 0.045539613225202745;
        result[2] += 0.056768558951965066;
        result[3] += 0.06924516531503432;
        result[4] += 0.10542732376793512;
        result[5] += 0.050530255770430445;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
        result[0] += 0.041666666666666664;
        result[1] += 0.020833333333333332;
        result[2] += 0.28125;
        result[3] += 0.4114583333333333;
        result[4] += 0.06770833333333333;
        result[5] += 0.17708333333333334;
      } else {
        result[0] += 0.053811659192825115;
        result[1] += 0.04484304932735426;
        result[2] += 0.7399103139013453;
        result[3] += 0.08968609865470852;
        result[4] += 0;
        result[5] += 0.07174887892376682;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
        result[0] += 0.0875;
        result[1] += 0.0125;
        result[2] += 0.6125;
        result[3] += 0.1625;
        result[4] += 0.025;
        result[5] += 0.1;
      } else {
        result[0] += 0.004379562043795621;
        result[1] += 0;
        result[2] += 0.9532846715328467;
        result[3] += 0.042335766423357665;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.015544041450777202;
        result[2] += 0.0051813471502590676;
        result[3] += 0;
        result[4] += 0.9015544041450777;
        result[5] += 0.07772020725388601;
      } else {
        result[0] += 0.030708661417322834;
        result[1] += 0.026771653543307086;
        result[2] += 0.025984251968503937;
        result[3] += 0.14566929133858267;
        result[4] += 0.05590551181102362;
        result[5] += 0.7149606299212599;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)104.5) ) ) {
        result[0] += 0.6102900930487137;
        result[1] += 0.058018609742747675;
        result[2] += 0.04542966611932129;
        result[3] += 0.07991242474001095;
        result[4] += 0.12588943623426382;
        result[5] += 0.08045977011494253;
      } else {
        result[0] += 0;
        result[1] += 0.9948717948717949;
        result[2] += 0.002564102564102564;
        result[3] += 0;
        result[4] += 0.002564102564102564;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)94.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.41304347826086957;
        result[4] += 0.07608695652173914;
        result[5] += 0.5108695652173914;
      } else {
        result[0] += 0.008264462809917357;
        result[1] += 0;
        result[2] += 0.578512396694215;
        result[3] += 0.18181818181818185;
        result[4] += 0.057851239669421496;
        result[5] += 0.1735537190082645;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)98.5) ) ) {
        result[0] += 0.0071428571428571435;
        result[1] += 0;
        result[2] += 0.6714285714285715;
        result[3] += 0.2285714285714286;
        result[4] += 0.0071428571428571435;
        result[5] += 0.08571428571428573;
      } else {
        result[0] += 0.006305170239596469;
        result[1] += 0;
        result[2] += 0.9331651954602774;
        result[3] += 0.05296343001261034;
        result[4] += 0;
        result[5] += 0.007566204287515763;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
        result[0] += 0.12931034482758622;
        result[1] += 0.020114942528735632;
        result[2] += 0;
        result[3] += 0.028735632183908046;
        result[4] += 0.6982758620689655;
        result[5] += 0.1235632183908046;
      } else {
        result[0] += 0.006357856494096276;
        result[1] += 0.009082652134423252;
        result[2] += 0;
        result[3] += 0.13805631244323344;
        result[4] += 0.053587647593097185;
        result[5] += 0.7929155313351499;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        result[0] += 0.005357142857142857;
        result[1] += 0.8357142857142857;
        result[2] += 0;
        result[3] += 0.01607142857142857;
        result[4] += 0.1357142857142857;
        result[5] += 0.007142857142857143;
      } else {
        result[0] += 0.6916873449131514;
        result[1] += 0.024813895781637722;
        result[2] += 0.05086848635235733;
        result[3] += 0.08622828784119108;
        result[4] += 0.07878411910669976;
        result[5] += 0.06761786600496279;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
        result[0] += 0.03296703296703297;
        result[1] += 0.01098901098901099;
        result[2] += 0.03296703296703297;
        result[3] += 0.0989010989010989;
        result[4] += 0.18681318681318682;
        result[5] += 0.6373626373626373;
      } else {
        result[0] += 0;
        result[1] += 0.017142857142857144;
        result[2] += 0.30857142857142855;
        result[3] += 0.44;
        result[4] += 0.022857142857142857;
        result[5] += 0.21142857142857144;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
        result[0] += 0.006578947368421052;
        result[1] += 0;
        result[2] += 0.6973684210526315;
        result[3] += 0.2565789473684211;
        result[4] += 0.019736842105263157;
        result[5] += 0.019736842105263157;
      } else {
        result[0] += 0.010165184243964424;
        result[1] += 0;
        result[2] += 0.9479034307496824;
        result[3] += 0.03939008894536214;
        result[4] += 0;
        result[5] += 0.002541296060991106;
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
        result[0] += 0.4651711924439197;
        result[1] += 0.07792207792207792;
        result[2] += 0.011806375442739079;
        result[3] += 0.01652892561983471;
        result[4] += 0.3707201889020071;
        result[5] += 0.05785123966942149;
      } else {
        result[0] += 0.0804416403785489;
        result[1] += 0.012092534174553101;
        result[2] += 0.0341745531019979;
        result[3] += 0.19873817034700317;
        result[4] += 0.09305993690851735;
        result[5] += 0.5814931650893796;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)56.5) ) ) {
        result[0] += 0;
        result[1] += 0.9956043956043956;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.004395604395604396;
        result[5] += 0;
      } else {
        result[0] += 0.0967741935483871;
        result[1] += 0.5483870967741935;
        result[2] += 0.03225806451612903;
        result[3] += 0;
        result[4] += 0.3225806451612903;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)77.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 1;
      } else {
        result[0] += 0.9910873440285205;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.0035650623885918;
        result[4] += 0.0053475935828877;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)97.5) ) ) {
        result[0] += 0.017311608961303463;
        result[1] += 0;
        result[2] += 0.8879837067209776;
        result[3] += 0.07637474541751528;
        result[4] += 0;
        result[5] += 0.018329938900203666;
      } else {
        result[0] += 0.43478260869565216;
        result[1] += 0;
        result[2] += 0.5652173913043478;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)92.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        result[0] += 0.2541322314049587;
        result[1] += 0.030991735537190087;
        result[2] += 0;
        result[3] += 0.02272727272727273;
        result[4] += 0.6280991735537191;
        result[5] += 0.06404958677685951;
      } else {
        result[0] += 0.015943312666076175;
        result[1] += 0.005314437555358724;
        result[2] += 0.001771479185119575;
        result[3] += 0.1275465013286094;
        result[4] += 0.09300265721877768;
        result[5] += 0.7564216120460585;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6340694006309149;
        result[1] += 0.061829652996845424;
        result[2] += 0.05993690851735016;
        result[3] += 0.09842271293375394;
        result[4] += 0.07949526813880126;
        result[5] += 0.06624605678233439;
      } else {
        result[0] += 0.019002375296912115;
        result[1] += 0.9738717339667459;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.004750593824228029;
        result[5] += 0.0023752969121140144;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
        result[0] += 0.03875968992248062;
        result[1] += 0.007751937984496124;
        result[2] += 0.11627906976744186;
        result[3] += 0.34108527131782945;
        result[4] += 0.07751937984496124;
        result[5] += 0.4186046511627907;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5771812080536913;
        result[3] += 0.348993288590604;
        result[4] += 0;
        result[5] += 0.0738255033557047;
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0.06060606060606061;
        result[2] += 0.30303030303030304;
        result[3] += 0.30303030303030304;
        result[4] += 0;
        result[5] += 0.3333333333333333;
      } else {
        result[0] += 0.030133928571428572;
        result[1] += 0.004464285714285714;
        result[2] += 0.9140625;
        result[3] += 0.04575892857142857;
        result[4] += 0.0011160714285714285;
        result[5] += 0.004464285714285714;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.034722222222222224;
        result[2] += 0;
        result[3] += 0.017361111111111112;
        result[4] += 0.9097222222222222;
        result[5] += 0.03819444444444445;
      } else {
        result[0] += 0.09420289855072464;
        result[1] += 0.0036231884057971015;
        result[2] += 0.002898550724637681;
        result[3] += 0.10507246376811594;
        result[4] += 0.10072463768115943;
        result[5] += 0.6934782608695652;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.001953125;
        result[1] += 0.923828125;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.07421875;
        result[5] += 0;
      } else {
        result[0] += 0.6900742741390953;
        result[1] += 0.021607022282241733;
        result[2] += 0.03983794733288319;
        result[3] += 0.1073598919648886;
        result[4] += 0.06617150573936531;
        result[5] += 0.07494935854152601;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0.02403846153846154;
        result[1] += 0.07211538461538461;
        result[2] += 0.15384615384615385;
        result[3] += 0.4230769230769231;
        result[4] += 0.052884615384615384;
        result[5] += 0.27403846153846156;
      } else {
        result[0] += 0.12903225806451613;
        result[1] += 0;
        result[2] += 0.7354838709677419;
        result[3] += 0.12258064516129032;
        result[4] += 0;
        result[5] += 0.012903225806451613;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)86.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.836;
        result[3] += 0.136;
        result[4] += 0;
        result[5] += 0.028;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9692028985507246;
        result[3] += 0.030797101449275364;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.005780346820809248;
        result[1] += 0.08092485549132948;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8728323699421965;
        result[5] += 0.04046242774566474;
      } else {
        result[0] += 0.08812818645302258;
        result[1] += 0.005098324836125273;
        result[2] += 0.003641660597232338;
        result[3] += 0.16824471959213402;
        result[4] += 0.06482155863073562;
        result[5] += 0.6700655498907502;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        result[0] += 0.003937007874015749;
        result[1] += 0.891732283464567;
        result[2] += 0;
        result[3] += 0.009842519685039372;
        result[4] += 0.08858267716535434;
        result[5] += 0.005905511811023623;
      } else {
        result[0] += 0.7302904564315352;
        result[1] += 0.022821576763485476;
        result[2] += 0.029737206085753802;
        result[3] += 0.06293222683264177;
        result[4] += 0.0698478561549101;
        result[5] += 0.08437067773167359;
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.24324324324324326;
        result[3] += 0.5315315315315315;
        result[4] += 0;
        result[5] += 0.22522522522522523;
      } else {
        result[0] += 0.038461538461538464;
        result[1] += 0;
        result[2] += 0.7230769230769231;
        result[3] += 0.18461538461538463;
        result[4] += 0;
        result[5] += 0.05384615384615385;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
        result[0] += 0.10810810810810811;
        result[1] += 0;
        result[2] += 0.6486486486486487;
        result[3] += 0.10810810810810811;
        result[4] += 0.02702702702702703;
        result[5] += 0.10810810810810811;
      } else {
        result[0] += 0.0059665871121718375;
        result[1] += 0;
        result[2] += 0.9439140811455847;
        result[3] += 0.050119331742243436;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.02880658436213992;
        result[2] += 0;
        result[3] += 0.00823045267489712;
        result[4] += 0.9218106995884774;
        result[5] += 0.0411522633744856;
      } else {
        result[0] += 0.04198473282442748;
        result[1] += 0.019083969465648856;
        result[2] += 0.0015267175572519084;
        result[3] += 0.16412213740458015;
        result[4] += 0.0450381679389313;
        result[5] += 0.7282442748091603;
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6177777777777778;
        result[1] += 0.05444444444444444;
        result[2] += 0.052222222222222225;
        result[3] += 0.07166666666666667;
        result[4] += 0.1272222222222222;
        result[5] += 0.07666666666666666;
      } else {
        result[0] += 0.009501187648456057;
        result[1] += 0.9786223277909739;
        result[2] += 0;
        result[3] += 0.009501187648456057;
        result[4] += 0.0023752969121140144;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.058823529411764705;
        result[3] += 0.6176470588235294;
        result[4] += 0;
        result[5] += 0.3235294117647059;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.875;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.125;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.2857142857142857;
        result[3] += 0.5714285714285714;
        result[4] += 0;
        result[5] += 0.14285714285714285;
      } else {
        result[0] += 0.01834862385321101;
        result[1] += 0;
        result[2] += 0.9194699286442406;
        result[3] += 0.05402650356778797;
        result[4] += 0.0010193679918450561;
        result[5] += 0.007135575942915392;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)88.5) ) ) {
        result[0] += 0.015070921985815602;
        result[1] += 0.0008865248226950354;
        result[2] += 0;
        result[3] += 0.04343971631205674;
        result[4] += 0.24202127659574468;
        result[5] += 0.6985815602836879;
      } else {
        result[0] += 0.09734513274336283;
        result[1] += 0.04129793510324484;
        result[2] += 0.014749262536873156;
        result[3] += 0.4837758112094395;
        result[4] += 0.09734513274336283;
        result[5] += 0.26548672566371684;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        result[0] += 0.004228329809725159;
        result[1] += 0.9492600422832981;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.046511627906976744;
        result[5] += 0;
      } else {
        result[0] += 0.6129959746981024;
        result[1] += 0.023001725129384705;
        result[2] += 0.0718803910293272;
        result[3] += 0.08453133985048879;
        result[4] += 0.10983323749281196;
        result[5] += 0.097757331799885;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)87.5) ) ) {
        result[0] += 0.015;
        result[1] += 0.015;
        result[2] += 0.29;
        result[3] += 0.3;
        result[4] += 0.06;
        result[5] += 0.32;
      } else {
        result[0] += 0.8666666666666667;
        result[1] += 0.022222222222222223;
        result[2] += 0.1111111111111111;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)106.5) ) ) {
        result[0] += 0.010011123470522803;
        result[1] += 0;
        result[2] += 0.9265850945494994;
        result[3] += 0.05561735261401557;
        result[4] += 0;
        result[5] += 0.00778642936596218;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.006711409395973154;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9630872483221476;
        result[5] += 0.030201342281879196;
      } else {
        result[0] += 0.08699324324324324;
        result[1] += 0.0016891891891891893;
        result[2] += 0.0033783783783783786;
        result[3] += 0.10388513513513513;
        result[4] += 0.0633445945945946;
        result[5] += 0.7407094594594594;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)57) ) ) {
        result[0] += 0.004201680672268908;
        result[1] += 0.9747899159663866;
        result[2] += 0.006302521008403362;
        result[3] += 0;
        result[4] += 0.014705882352941178;
        result[5] += 0;
      } else {
        result[0] += 0.5998896247240618;
        result[1] += 0.039183222958057394;
        result[2] += 0.045805739514348784;
        result[3] += 0.15507726269315672;
        result[4] += 0.061258278145695365;
        result[5] += 0.09878587196467992;
      }
    }
  } else {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)99) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)110.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.3285714285714286;
        result[3] += 0.5000000000000001;
        result[4] += 0.014285714285714287;
        result[5] += 0.15714285714285717;
      } else {
        result[0] += 0.047619047619047616;
        result[1] += 0;
        result[2] += 0.9523809523809523;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6237623762376238;
        result[3] += 0.25742574257425743;
        result[4] += 0;
        result[5] += 0.1188118811881188;
      } else {
        result[0] += 0.016203703703703703;
        result[1] += 0;
        result[2] += 0.9270833333333334;
        result[3] += 0.04861111111111111;
        result[4] += 0;
        result[5] += 0.008101851851851851;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)111.5) ) ) {
        result[0] += 0.010067114093959731;
        result[1] += 0.006711409395973154;
        result[2] += 0.003355704697986577;
        result[3] += 0;
        result[4] += 0.9362416107382551;
        result[5] += 0.0436241610738255;
      } else {
        result[0] += 0;
        result[1] += 0.5;
        result[2] += 0.5;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.002717391304347826;
        result[3] += 0.03260869565217391;
        result[4] += 0.03260869565217391;
        result[5] += 0.9320652173913043;
      } else {
        result[0] += 0.12916111850865514;
        result[1] += 0.011984021304926764;
        result[2] += 0.019973368841544607;
        result[3] += 0.35019973368841545;
        result[4] += 0.07456724367509987;
        result[5] += 0.4141145139813582;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
        result[0] += 0.01620745542949757;
        result[1] += 0.8541329011345219;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.12965964343598055;
        result[5] += 0;
      } else {
        result[0] += 0.8020050125313284;
        result[1] += 0.015037593984962407;
        result[2] += 0.023391812865497078;
        result[3] += 0.050125313283208024;
        result[4] += 0.06432748538011697;
        result[5] += 0.04511278195488722;
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)100.5) ) ) {
        result[0] += 0.05092592592592592;
        result[1] += 0.046296296296296294;
        result[2] += 0.36574074074074076;
        result[3] += 0.2824074074074074;
        result[4] += 0.0787037037037037;
        result[5] += 0.17592592592592593;
      } else {
        result[0] += 0.04270109235352532;
        result[1] += 0.004965243296921549;
        result[2] += 0.8679245283018868;
        result[3] += 0.06355511420059583;
        result[4] += 0.0019860973187686196;
        result[5] += 0.018867924528301886;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.023529411764705882;
        result[1] += 0.01568627450980392;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9254901960784314;
        result[5] += 0.03529411764705882;
      } else {
        result[0] += 0.4588235294117647;
        result[1] += 0.023529411764705882;
        result[2] += 0.023529411764705882;
        result[3] += 0.08235294117647059;
        result[4] += 0.09411764705882353;
        result[5] += 0.3176470588235294;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.05687693898655636;
        result[4] += 0.0641158221302999;
        result[5] += 0.8790072388831437;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.027777777777777776;
        result[3] += 0.5590277777777778;
        result[4] += 0.04861111111111111;
        result[5] += 0.3645833333333333;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        result[0] += 0.003824091778202677;
        result[1] += 0.852772466539197;
        result[2] += 0;
        result[3] += 0.0019120458891013386;
        result[4] += 0.1376673040152964;
        result[5] += 0.003824091778202677;
      } else {
        result[0] += 0.765489673550966;
        result[1] += 0.03530979347101932;
        result[2] += 0.030646235842771485;
        result[3] += 0.0519653564290473;
        result[4] += 0.07195203197868089;
        result[5] += 0.04463690872751499;
      }
    } else {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
        result[0] += 0.015444015444015444;
        result[1] += 0;
        result[2] += 0.3938223938223938;
        result[3] += 0.3359073359073359;
        result[4] += 0.07335907335907337;
        result[5] += 0.18146718146718147;
      } else {
        result[0] += 0.027426160337552744;
        result[1] += 0.00949367088607595;
        result[2] += 0.8765822784810127;
        result[3] += 0.06751054852320675;
        result[4] += 0.0010548523206751054;
        result[5] += 0.017932489451476793;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)47) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)87.5) ) ) {
        result[0] += 0;
        result[1] += 0.16666666666666666;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8333333333333334;
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
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)95) ) ) {
        result[0] += 0.1155778894472362;
        result[1] += 0.010050251256281409;
        result[2] += 0.002791736460078169;
        result[3] += 0.11334450027917366;
        result[4] += 0.22668900055834731;
        result[5] += 0.5315466219988834;
      } else {
        result[0] += 0.6655148583275743;
        result[1] += 0.0497581202487906;
        result[2] += 0.06772633033863165;
        result[3] += 0.08638562543192813;
        result[4] += 0.0801658604008293;
        result[5] += 0.05044920525224603;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)88.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.13513513513513514;
        result[3] += 0.02702702702702703;
        result[4] += 0.02702702702702703;
        result[5] += 0.8108108108108109;
      } else {
        result[0] += 0.05555555555555555;
        result[1] += 0.04861111111111111;
        result[2] += 0.3402777777777778;
        result[3] += 0.4305555555555556;
        result[4] += 0.020833333333333332;
        result[5] += 0.10416666666666667;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
        result[0] += 0.027932960893854747;
        result[1] += 0;
        result[2] += 0.8184357541899442;
        result[3] += 0.12290502793296089;
        result[4] += 0;
        result[5] += 0.030726256983240222;
      } else {
        result[0] += 0.007220216606498195;
        result[1] += 0;
        result[2] += 0.9693140794223827;
        result[3] += 0.021660649819494584;
        result[4] += 0;
        result[5] += 0.0018050541516245488;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        result[0] += 0.17201166180758018;
        result[1] += 0.04664723032069971;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.6618075801749271;
        result[5] += 0.119533527696793;
      } else {
        result[0] += 0.0016680567139282735;
        result[1] += 0.0008340283569641367;
        result[2] += 0.0008340283569641367;
        result[3] += 0.17264386989157632;
        result[4] += 0.05087572977481234;
        result[5] += 0.7731442869057548;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        result[0] += 0.005199306759098787;
        result[1] += 0.8232235701906413;
        result[2] += 0;
        result[3] += 0.005199306759098787;
        result[4] += 0.16291161178509533;
        result[5] += 0.0034662045060658577;
      } else {
        result[0] += 0.6783343391671696;
        result[1] += 0.02896801448400724;
        result[2] += 0.04828002414001207;
        result[3] += 0.08388654194327097;
        result[4] += 0.08931804465902234;
        result[5] += 0.0712130356065178;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.19753086419753085;
        result[3] += 0.654320987654321;
        result[4] += 0;
        result[5] += 0.14814814814814814;
      } else {
        result[0] += 0.022222222222222223;
        result[1] += 0;
        result[2] += 0.7;
        result[3] += 0.2;
        result[4] += 0;
        result[5] += 0.07777777777777778;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)105.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.813953488372093;
        result[3] += 0.16279069767441862;
        result[4] += 0;
        result[5] += 0.023255813953488372;
      } else {
        result[0] += 0.01272984441301273;
        result[1] += 0;
        result[2] += 0.9504950495049505;
        result[3] += 0.0297029702970297;
        result[4] += 0;
        result[5] += 0.007072135785007072;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.19036697247706422;
        result[1] += 0.0481651376146789;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.6743119266055045;
        result[5] += 0.0871559633027523;
      } else {
        result[0] += 0.006933744221879815;
        result[1] += 0.0023112480739599386;
        result[2] += 0.02234206471494607;
        result[3] += 0.20261941448382126;
        result[4] += 0.07087827426810478;
        result[5] += 0.6949152542372882;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        result[0] += 0.0019193857965451055;
        result[1] += 0.9193857965451055;
        result[2] += 0;
        result[3] += 0.007677543186180422;
        result[4] += 0.0690978886756238;
        result[5] += 0.0019193857965451055;
      } else {
        result[0] += 0.7061745919091555;
        result[1] += 0.0518097941802697;
        result[2] += 0.0432931156848829;
        result[3] += 0.0645848119233499;
        result[4] += 0.0645848119233499;
        result[5] += 0.06955287437899221;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)85.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.03333333333333333;
        result[3] += 0.26666666666666666;
        result[4] += 0.03333333333333333;
        result[5] += 0.6666666666666666;
      } else {
        result[0] += 0.02702702702702703;
        result[1] += 0;
        result[2] += 0.5675675675675675;
        result[3] += 0.21621621621621623;
        result[4] += 0.05405405405405406;
        result[5] += 0.13513513513513514;
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
        result[0] += 0.009202453987730062;
        result[1] += 0.015337423312883436;
        result[2] += 0.7331288343558282;
        result[3] += 0.22699386503067484;
        result[4] += 0;
        result[5] += 0.015337423312883436;
      } else {
        result[0] += 0.023564064801178206;
        result[1] += 0.0058910162002945516;
        result[2] += 0.9145802650957291;
        result[3] += 0.0427098674521355;
        result[4] += 0.0029455081001472758;
        result[5] += 0.010309278350515465;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)74.5) ) ) {
        result[0] += 0;
        result[1] += 0.9166666666666666;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.08333333333333333;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)99) ) ) {
        result[0] += 0.1357354392892399;
        result[1] += 0.016288252714708785;
        result[2] += 0.012339585389930898;
        result[3] += 0.1441263573543929;
        result[4] += 0.2226061204343534;
        result[5] += 0.46890424481737414;
      } else {
        result[0] += 0.7156626506024096;
        result[1] += 0.043373493975903614;
        result[2] += 0.05783132530120482;
        result[3] += 0.04819277108433735;
        result[4] += 0.07309236947791165;
        result[5] += 0.061847389558232935;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.24675324675324678;
        result[3] += 0.5194805194805195;
        result[4] += 0;
        result[5] += 0.2337662337662338;
      } else {
        result[0] += 0.1111111111111111;
        result[1] += 0;
        result[2] += 0.6190476190476191;
        result[3] += 0.1111111111111111;
        result[4] += 0.015873015873015872;
        result[5] += 0.14285714285714285;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)88.5) ) ) {
        result[0] += 0.07317073170731707;
        result[1] += 0;
        result[2] += 0.6585365853658537;
        result[3] += 0.0975609756097561;
        result[4] += 0;
        result[5] += 0.17073170731707318;
      } else {
        result[0] += 0.010822510822510822;
        result[1] += 0;
        result[2] += 0.9199134199134199;
        result[3] += 0.06168831168831169;
        result[4] += 0;
        result[5] += 0.007575757575757576;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.006968641114982578;
        result[1] += 0.04529616724738676;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8745644599303136;
        result[5] += 0.07317073170731707;
      } else {
        result[0] += 0.03556658395368073;
        result[1] += 0.008271298593879239;
        result[2] += 0.023986765922249794;
        result[3] += 0.18031430934656742;
        result[4] += 0.04880066170388751;
        result[5] += 0.7030603804797353;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)59.5) ) ) {
        result[0] += 0.001984126984126984;
        result[1] += 0.9246031746031746;
        result[2] += 0.001984126984126984;
        result[3] += 0;
        result[4] += 0.07142857142857142;
        result[5] += 0;
      } else {
        result[0] += 0.6288776085730401;
        result[1] += 0.03553299492385787;
        result[2] += 0.03948110547095319;
        result[3] += 0.09080654258319233;
        result[4] += 0.08798646362098139;
        result[5] += 0.11731528482797518;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.21621621621621623;
        result[3] += 0.5;
        result[4] += 0.02702702702702703;
        result[5] += 0.25675675675675674;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6595744680851064;
        result[3] += 0.12765957446808512;
        result[4] += 0;
        result[5] += 0.21276595744680854;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
        result[0] += 0.021212121212121213;
        result[1] += 0;
        result[2] += 0.8303030303030303;
        result[3] += 0.13636363636363635;
        result[4] += 0;
        result[5] += 0.012121212121212121;
      } else {
        result[0] += 0.011627906976744186;
        result[1] += 0;
        result[2] += 0.9651162790697675;
        result[3] += 0.023255813953488372;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
        result[0] += 0.35650224215246634;
        result[1] += 0.02242152466367713;
        result[2] += 0.004484304932735426;
        result[3] += 0.004484304932735426;
        result[4] += 0.5381165919282511;
        result[5] += 0.07399103139013453;
      } else {
        result[0] += 0.010190217391304348;
        result[1] += 0.018342391304347828;
        result[2] += 0.015625;
        result[3] += 0.19633152173913043;
        result[4] += 0.08559782608695653;
        result[5] += 0.6739130434782609;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
        result[0] += 0;
        result[1] += 0.9621380846325167;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.0378619153674833;
        result[5] += 0;
      } else {
        result[0] += 0.7080028839221341;
        result[1] += 0.023792357606344627;
        result[2] += 0.0547945205479452;
        result[3] += 0.04542177361211247;
        result[4] += 0.09949531362653208;
        result[5] += 0.0684931506849315;
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0.030303030303030304;
        result[1] += 0.03787878787878788;
        result[2] += 0.2196969696969697;
        result[3] += 0.42424242424242425;
        result[4] += 0.08333333333333333;
        result[5] += 0.20454545454545456;
      } else {
        result[0] += 0.057553956834532384;
        result[1] += 0;
        result[2] += 0.7410071942446044;
        result[3] += 0.1654676258992806;
        result[4] += 0;
        result[5] += 0.03597122302158274;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)86.5) ) ) {
        result[0] += 0.03065134099616858;
        result[1] += 0;
        result[2] += 0.8045977011494253;
        result[3] += 0.13793103448275862;
        result[4] += 0;
        result[5] += 0.02681992337164751;
      } else {
        result[0] += 0.003703703703703704;
        result[1] += 0;
        result[2] += 0.975925925925926;
        result[3] += 0.020370370370370372;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
        result[0] += 0;
        result[1] += 0.008130081300813009;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9634146341463414;
        result[5] += 0.028455284552845527;
      } else {
        result[0] += 0;
        result[1] += 0.7777777777777778;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.2222222222222222;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
        result[0] += 0.03325942350332594;
        result[1] += 0.0011086474501108647;
        result[2] += 0.0011086474501108647;
        result[3] += 0.04767184035476718;
        result[4] += 0.06762749445676275;
        result[5] += 0.8492239467849224;
      } else {
        result[0] += 0.05654761904761905;
        result[1] += 0.011904761904761904;
        result[2] += 0.008928571428571428;
        result[3] += 0.44047619047619047;
        result[4] += 0.023809523809523808;
        result[5] += 0.4583333333333333;
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        result[0] += 0.001851851851851852;
        result[1] += 0.8888888888888888;
        result[2] += 0.001851851851851852;
        result[3] += 0;
        result[4] += 0.10740740740740741;
        result[5] += 0;
      } else {
        result[0] += 0.7096153846153846;
        result[1] += 0.02435897435897436;
        result[2] += 0.047435897435897434;
        result[3] += 0.06217948717948718;
        result[4] += 0.0967948717948718;
        result[5] += 0.05961538461538462;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0.02040816326530612;
        result[1] += 0.0326530612244898;
        result[2] += 0.20816326530612245;
        result[3] += 0.40816326530612246;
        result[4] += 0.0653061224489796;
        result[5] += 0.2653061224489796;
      } else {
        result[0] += 0.01417004048582996;
        result[1] += 0;
        result[2] += 0.9068825910931174;
        result[3] += 0.06983805668016195;
        result[4] += 0;
        result[5] += 0.009109311740890687;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.010869565217391304;
        result[2] += 0.007246376811594203;
        result[3] += 0.025362318840579712;
        result[4] += 0.8731884057971014;
        result[5] += 0.08333333333333333;
      } else {
        result[0] += 0.038525963149078725;
        result[1] += 0.002512562814070352;
        result[2] += 0.0016750418760469012;
        result[3] += 0.1440536013400335;
        result[4] += 0.05695142378559464;
        result[5] += 0.7562814070351759;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)55.5) ) ) {
        result[0] += 0;
        result[1] += 0.9622641509433962;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.03773584905660377;
        result[5] += 0;
      } else {
        result[0] += 0.6631049654305469;
        result[1] += 0.0295411690760528;
        result[2] += 0.04022627278441232;
        result[3] += 0.08296668761785041;
        result[4] += 0.10999371464487744;
        result[5] += 0.07416719044626022;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)69) ) ) {
        result[0] += 0;
        result[1] += 0.02127659574468085;
        result[2] += 0.1276595744680851;
        result[3] += 0.10638297872340426;
        result[4] += 0.02127659574468085;
        result[5] += 0.723404255319149;
      } else {
        result[0] += 0.01932367149758454;
        result[1] += 0.03864734299516908;
        result[2] += 0.2898550724637681;
        result[3] += 0.4782608695652174;
        result[4] += 0.028985507246376812;
        result[5] += 0.14492753623188406;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97.5) ) ) {
        result[0] += 0.07627118644067797;
        result[1] += 0;
        result[2] += 0.7372881355932204;
        result[3] += 0.07627118644067797;
        result[4] += 0.00847457627118644;
        result[5] += 0.1016949152542373;
      } else {
        result[0] += 0.023174971031286212;
        result[1] += 0;
        result[2] += 0.9200463499420626;
        result[3] += 0.05330243337195829;
        result[4] += 0;
        result[5] += 0.0034762456546929316;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.032388663967611336;
        result[2] += 0.024291497975708502;
        result[3] += 0.02834008097165992;
        result[4] += 0.8825910931174089;
        result[5] += 0.032388663967611336;
      } else {
        result[0] += 0.03527481542247744;
        result[1] += 0.014766201804757998;
        result[2] += 0.005742411812961444;
        result[3] += 0.16406890894175555;
        result[4] += 0.0475799835931091;
        result[5] += 0.7325676784249385;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)50) ) ) {
        result[0] += 0;
        result[1] += 0.9871244635193133;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.012875536480686695;
        result[5] += 0;
      } else {
        result[0] += 0.6113270405330372;
        result[1] += 0.018323153803442533;
        result[2] += 0.0694058856191005;
        result[3] += 0.09439200444197668;
        result[4] += 0.13381454747362576;
        result[5] += 0.07273736812881733;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)83.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0.02112676056338028;
        result[1] += 0.09154929577464789;
        result[2] += 0.176056338028169;
        result[3] += 0.2605633802816901;
        result[4] += 0.07042253521126761;
        result[5] += 0.38028169014084506;
      } else {
        result[0] += 0.07954545454545454;
        result[1] += 0;
        result[2] += 0.7443181818181818;
        result[3] += 0.13068181818181818;
        result[4] += 0;
        result[5] += 0.045454545454545456;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)75.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.36363636363636365;
        result[3] += 0.45454545454545453;
        result[4] += 0;
        result[5] += 0.18181818181818182;
      } else {
        result[0] += 0.0013089005235602095;
        result[1] += 0;
        result[2] += 0.9384816753926701;
        result[3] += 0.056282722513089;
        result[4] += 0;
        result[5] += 0.003926701570680628;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.00390625;
        result[1] += 0.0078125;
        result[2] += 0.01171875;
        result[3] += 0.0078125;
        result[4] += 0.94921875;
        result[5] += 0.01953125;
      } else {
        result[0] += 0.046379170056956874;
        result[1] += 0.0032546786004882017;
        result[2] += 0.0024410089503661514;
        result[3] += 0.1757526444263629;
        result[4] += 0.06590724165988608;
        result[5] += 0.7062652563059398;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6328125;
        result[1] += 0.05524553571428571;
        result[2] += 0.04185267857142857;
        result[3] += 0.09430803571428571;
        result[4] += 0.10825892857142858;
        result[5] += 0.06752232142857142;
      } else {
        result[0] += 0.009174311926605505;
        result[1] += 0.9908256880733946;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)101) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.2596153846153847;
        result[3] += 0.576923076923077;
        result[4] += 0;
        result[5] += 0.1634615384615385;
      } else {
        result[0] += 0.11594202898550725;
        result[1] += 0;
        result[2] += 0.6231884057971014;
        result[3] += 0.10144927536231885;
        result[4] += 0;
        result[5] += 0.15942028985507245;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
        result[0] += 0.025;
        result[1] += 0;
        result[2] += 0.7714285714285715;
        result[3] += 0.16428571428571428;
        result[4] += 0;
        result[5] += 0.039285714285714285;
      } else {
        result[0] += 0.004545454545454545;
        result[1] += 0;
        result[2] += 0.9545454545454546;
        result[3] += 0.04090909090909091;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.02247191011235955;
        result[1] += 0.03745318352059925;
        result[2] += 0.00749063670411985;
        result[3] += 0.003745318352059925;
        result[4] += 0.8838951310861424;
        result[5] += 0.0449438202247191;
      } else {
        result[0] += 0.046153846153846156;
        result[1] += 0.01700404858299595;
        result[2] += 0.004858299595141701;
        result[3] += 0.17651821862348177;
        result[4] += 0.03562753036437247;
        result[5] += 0.719838056680162;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        result[0] += 0.008576329331046312;
        result[1] += 0.7770154373927959;
        result[2] += 0;
        result[3] += 0.02058319039451115;
        result[4] += 0.17667238421955403;
        result[5] += 0.017152658662092625;
      } else {
        result[0] += 0.6436233611442194;
        result[1] += 0.020858164481525627;
        result[2] += 0.08164481525625746;
        result[3] += 0.10607866507747318;
        result[4] += 0.07449344457687723;
        result[5] += 0.0733015494636472;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.06;
        result[3] += 0.3;
        result[4] += 0.02;
        result[5] += 0.62;
      } else {
        result[0] += 0;
        result[1] += 0.14655172413793102;
        result[2] += 0.46551724137931033;
        result[3] += 0.1810344827586207;
        result[4] += 0.017241379310344827;
        result[5] += 0.1896551724137931;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
        result[0] += 0;
        result[1] += 0.13636363636363635;
        result[2] += 0;
        result[3] += 0.22727272727272727;
        result[4] += 0.045454545454545456;
        result[5] += 0.5909090909090909;
      } else {
        result[0] += 0.013714285714285714;
        result[1] += 0;
        result[2] += 0.9005714285714286;
        result[3] += 0.08228571428571428;
        result[4] += 0;
        result[5] += 0.0034285714285714284;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)65) ) ) {
        result[0] += 0.016181229773462782;
        result[1] += 0.009708737864077669;
        result[2] += 0;
        result[3] += 0.03559870550161812;
        result[4] += 0.8381877022653722;
        result[5] += 0.10032362459546926;
      } else {
        result[0] += 0.02578268876611418;
        result[1] += 0;
        result[2] += 0.001841620626151013;
        result[3] += 0.13351749539594843;
        result[4] += 0.06353591160220995;
        result[5] += 0.7753222836095764;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)55.5) ) ) {
        result[0] += 0;
        result[1] += 0.9606625258799172;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.039337474120082816;
        result[5] += 0;
      } else {
        result[0] += 0.6611238532110092;
        result[1] += 0.03211009174311927;
        result[2] += 0.03727064220183486;
        result[3] += 0.07740825688073394;
        result[4] += 0.11295871559633028;
        result[5] += 0.07912844036697247;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)99) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)96.5) ) ) {
        result[0] += 0.01;
        result[1] += 0.02;
        result[2] += 0.13;
        result[3] += 0.53;
        result[4] += 0.05;
        result[5] += 0.26;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6153846153846154;
        result[3] += 0.15384615384615385;
        result[4] += 0;
        result[5] += 0.23076923076923078;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
        result[0] += 0.13513513513513517;
        result[1] += 0.06306306306306307;
        result[2] += 0.5045045045045046;
        result[3] += 0.10810810810810813;
        result[4] += 0.03603603603603604;
        result[5] += 0.15315315315315317;
      } else {
        result[0] += 0.015940488841657816;
        result[1] += 0;
        result[2] += 0.911795961742827;
        result[3] += 0.06588735387885229;
        result[4] += 0.0010626992561105209;
        result[5] += 0.005313496280552605;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.036585365853658534;
        result[2] += 0.0040650406504065045;
        result[3] += 0.02032520325203252;
        result[4] += 0.9308943089430894;
        result[5] += 0.008130081300813009;
      } else {
        result[0] += 0.05110062893081761;
        result[1] += 0.013364779874213837;
        result[2] += 0.0015723270440251573;
        result[3] += 0.139937106918239;
        result[4] += 0.060534591194968554;
        result[5] += 0.7334905660377359;
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)104.5) ) ) {
        result[0] += 0.6158785755983655;
        result[1] += 0.06830122591943957;
        result[2] += 0.030939871570344425;
        result[3] += 0.07063631056625802;
        result[4] += 0.13776999416228838;
        result[5] += 0.07647402218330414;
      } else {
        result[0] += 0.0047169811320754715;
        result[1] += 0.9693396226415094;
        result[2] += 0;
        result[3] += 0.02122641509433962;
        result[4] += 0.0047169811320754715;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)101.5) ) ) {
        result[0] += 0.01680672268907563;
        result[1] += 0;
        result[2] += 0.226890756302521;
        result[3] += 0.5462184873949579;
        result[4] += 0.01680672268907563;
        result[5] += 0.19327731092436976;
      } else {
        result[0] += 0.03571428571428571;
        result[1] += 0;
        result[2] += 0.7053571428571429;
        result[3] += 0.13392857142857142;
        result[4] += 0.008928571428571428;
        result[5] += 0.11607142857142858;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        result[0] += 0.044444444444444446;
        result[1] += 0;
        result[2] += 0.7111111111111111;
        result[3] += 0.19555555555555557;
        result[4] += 0.0044444444444444444;
        result[5] += 0.044444444444444446;
      } else {
        result[0] += 0.005594405594405594;
        result[1] += 0;
        result[2] += 0.9692307692307692;
        result[3] += 0.023776223776223775;
        result[4] += 0;
        result[5] += 0.0013986013986013986;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.023880597014925373;
        result[2] += 0;
        result[3] += 0.0029850746268656717;
        result[4] += 0.9402985074626866;
        result[5] += 0.03283582089552239;
      } else {
        result[0] += 0.085619285120532;
        result[1] += 0.004156275976724855;
        result[2] += 0.0008312551953449709;
        result[3] += 0.0714879467996675;
        result[4] += 0.08478802992518704;
        result[5] += 0.7531172069825436;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)104.5) ) ) {
        result[0] += 0.6105263157894737;
        result[1] += 0.06900584795321638;
        result[2] += 0.03508771929824561;
        result[3] += 0.11929824561403508;
        result[4] += 0.0847953216374269;
        result[5] += 0.08128654970760234;
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
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0.017391304347826087;
        result[1] += 0;
        result[2] += 0.19130434782608696;
        result[3] += 0.5130434782608696;
        result[4] += 0.008695652173913044;
        result[5] += 0.26956521739130435;
      } else {
        result[0] += 0.05319148936170213;
        result[1] += 0;
        result[2] += 0.6914893617021277;
        result[3] += 0.1595744680851064;
        result[4] += 0;
        result[5] += 0.09574468085106383;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        result[0] += 0.021739130434782608;
        result[1] += 0;
        result[2] += 0.5108695652173914;
        result[3] += 0.3804347826086957;
        result[4] += 0;
        result[5] += 0.08695652173913043;
      } else {
        result[0] += 0.010309278350515465;
        result[1] += 0;
        result[2] += 0.9198167239404353;
        result[3] += 0.057273768613974804;
        result[4] += 0;
        result[5] += 0.012600229095074458;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)93.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
        result[0] += 0.32746478873239443;
        result[1] += 0.04577464788732395;
        result[2] += 0.007042253521126762;
        result[3] += 0.014084507042253523;
        result[4] += 0.5352112676056339;
        result[5] += 0.07042253521126762;
      } else {
        result[0] += 0.022585669781931463;
        result[1] += 0.008566978193146417;
        result[2] += 0.011682242990654205;
        result[3] += 0.16978193146417445;
        result[4] += 0.09501557632398754;
        result[5] += 0.692367601246106;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)57.5) ) ) {
        result[0] += 0.0042194092827004225;
        result[1] += 0.9831223628691984;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.012658227848101267;
        result[5] += 0;
      } else {
        result[0] += 0.6701607267645004;
        result[1] += 0.018169112508735152;
        result[2] += 0.07127882599580714;
        result[3] += 0.08944793850454229;
        result[4] += 0.0705800139762404;
        result[5] += 0.08036338225017471;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.08333333333333333;
        result[3] += 0.5833333333333334;
        result[4] += 0.041666666666666664;
        result[5] += 0.2916666666666667;
      } else {
        result[0] += 0;
        result[1] += 0.10416666666666667;
        result[2] += 0.125;
        result[3] += 0.10416666666666667;
        result[4] += 0;
        result[5] += 0.6666666666666666;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        result[0] += 0.045714285714285714;
        result[1] += 0;
        result[2] += 0.78;
        result[3] += 0.14857142857142858;
        result[4] += 0;
        result[5] += 0.025714285714285714;
      } else {
        result[0] += 0.0030911901081916537;
        result[1] += 0;
        result[2] += 0.9690880989180835;
        result[3] += 0.02472952086553323;
        result[4] += 0;
        result[5] += 0.0030911901081916537;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.01226993865030675;
        result[1] += 0.015337423312883437;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9263803680981596;
        result[5] += 0.04601226993865031;
      } else {
        result[0] += 0.09611650485436893;
        result[1] += 0.001941747572815534;
        result[2] += 0;
        result[3] += 0.062135922330097085;
        result[4] += 0.05533980582524272;
        result[5] += 0.7844660194174757;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
        result[0] += 0.0018867924528301887;
        result[1] += 0.8716981132075472;
        result[2] += 0.0037735849056603774;
        result[3] += 0.018867924528301886;
        result[4] += 0.09811320754716982;
        result[5] += 0.005660377358490566;
      } else {
        result[0] += 0.6515783204288267;
        result[1] += 0.03156640857653365;
        result[2] += 0.030970815961882073;
        result[3] += 0.12983918999404406;
        result[4] += 0.061941631923764146;
        result[5] += 0.09410363311494938;
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)93) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)82.5) ) ) {
        result[0] += 0;
        result[1] += 0.03816793893129771;
        result[2] += 0.07633587786259542;
        result[3] += 0.33587786259541985;
        result[4] += 0.06870229007633588;
        result[5] += 0.48091603053435117;
      } else {
        result[0] += 0.0759493670886076;
        result[1] += 0.0759493670886076;
        result[2] += 0.6329113924050633;
        result[3] += 0.10126582278481013;
        result[4] += 0;
        result[5] += 0.11392405063291139;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        result[0] += 0.018867924528301886;
        result[1] += 0;
        result[2] += 0.7012578616352201;
        result[3] += 0.19811320754716982;
        result[4] += 0.006289308176100629;
        result[5] += 0.07547169811320754;
      } else {
        result[0] += 0.009549795361527967;
        result[1] += 0;
        result[2] += 0.9427012278308322;
        result[3] += 0.047748976807639835;
        result[4] += 0;
        result[5] += 0;
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
