
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
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.006968641114982578;
        result[1] += 0.1289198606271777;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7770034843205574;
        result[5] += 0.08710801393728224;
      } else {
        result[0] += 0.02969502407704655;
        result[1] += 0.004815409309791332;
        result[2] += 0.0056179775280898875;
        result[3] += 0.1653290529695024;
        result[4] += 0.04173354735152488;
        result[5] += 0.7528089887640449;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        result[0] += 0.5978865406006674;
        result[1] += 0.04560622914349277;
        result[2] += 0.059510567296996664;
        result[3] += 0.0867630700778643;
        result[4] += 0.1167964404894327;
        result[5] += 0.09343715239154617;
      } else {
        result[0] += 0.0106951871657754;
        result[1] += 0.9893048128342246;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
        result[0] += 0;
        result[1] += 0.030927835051546393;
        result[2] += 0.21649484536082475;
        result[3] += 0.5154639175257731;
        result[4] += 0.020618556701030927;
        result[5] += 0.21649484536082475;
      } else {
        result[0] += 0.017045454545454544;
        result[1] += 0;
        result[2] += 0.6534090909090909;
        result[3] += 0.23295454545454544;
        result[4] += 0.011363636363636364;
        result[5] += 0.08522727272727272;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)63.5) ) ) {
        result[0] += 0.75;
        result[1] += 0.25;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.008333333333333335;
        result[1] += 0;
        result[2] += 0.9202380952380953;
        result[3] += 0.0642857142857143;
        result[4] += 0;
        result[5] += 0.0071428571428571435;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
        result[0] += 0.11952191235059761;
        result[1] += 0.05976095617529881;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7888446215139442;
        result[5] += 0.03187250996015936;
      } else {
        result[0] += 0.0064;
        result[1] += 0.0248;
        result[2] += 0.0184;
        result[3] += 0.1256;
        result[4] += 0.0648;
        result[5] += 0.76;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
        result[0] += 0.005405405405405406;
        result[1] += 0.7891891891891892;
        result[2] += 0.0036036036036036037;
        result[3] += 0.018018018018018018;
        result[4] += 0.16576576576576577;
        result[5] += 0.018018018018018018;
      } else {
        result[0] += 0.7233902759526939;
        result[1] += 0.024310118265440217;
        result[2] += 0.03350854139290408;
        result[3] += 0.07293035479632065;
        result[4] += 0.08541392904073589;
        result[5] += 0.0604467805519054;
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.07534246575342467;
        result[3] += 0.5479452054794521;
        result[4] += 0.04794520547945206;
        result[5] += 0.32876712328767127;
      } else {
        result[0] += 0.02127659574468085;
        result[1] += 0;
        result[2] += 0.7446808510638298;
        result[3] += 0.0851063829787234;
        result[4] += 0;
        result[5] += 0.14893617021276595;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
        result[0] += 0.24;
        result[1] += 0.1;
        result[2] += 0.14;
        result[3] += 0.08;
        result[4] += 0.24;
        result[5] += 0.2;
      } else {
        result[0] += 0.008955223880597017;
        result[1] += 0;
        result[2] += 0.8945273631840797;
        result[3] += 0.0746268656716418;
        result[4] += 0;
        result[5] += 0.021890547263681597;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)93) ) ) {
        result[0] += 0;
        result[1] += 0.013574660633484163;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9547511312217195;
        result[5] += 0.03167420814479638;
      } else {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
        result[0] += 0.011506276150627616;
        result[1] += 0;
        result[2] += 0.0041841004184100415;
        result[3] += 0.036610878661087864;
        result[4] += 0.058577405857740586;
        result[5] += 0.8891213389121339;
      } else {
        result[0] += 0.059431524547803614;
        result[1] += 0.028423772609819122;
        result[2] += 0.041343669250646;
        result[3] += 0.4909560723514212;
        result[4] += 0.031007751937984496;
        result[5] += 0.3488372093023256;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.0017482517482517483;
        result[1] += 0.798951048951049;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.1993006993006993;
        result[5] += 0;
      } else {
        result[0] += 0.7235609103078983;
        result[1] += 0.023427041499330656;
        result[2] += 0.009370816599732263;
        result[3] += 0.06559571619812583;
        result[4] += 0.07563587684069611;
        result[5] += 0.10240963855421686;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        result[0] += 0;
        result[1] += 0.00598802395209581;
        result[2] += 0.3353293413173653;
        result[3] += 0.4191616766467066;
        result[4] += 0;
        result[5] += 0.23952095808383236;
      } else {
        result[0] += 0.016666666666666666;
        result[1] += 0;
        result[2] += 0.8745098039215686;
        result[3] += 0.09509803921568627;
        result[4] += 0;
        result[5] += 0.013725490196078431;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.014218009478672985;
        result[2] += 0.004739336492890996;
        result[3] += 0;
        result[4] += 0.976303317535545;
        result[5] += 0.004739336492890996;
      } else {
        result[0] += 0.037933817594834544;
        result[1] += 0.007263922518159807;
        result[2] += 0.003228410008071025;
        result[3] += 0.13317191283292978;
        result[4] += 0.07183212267958031;
        result[5] += 0.7465698143664246;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)52.5) ) ) {
        result[0] += 0;
        result[1] += 0.9906759906759907;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.009324009324009324;
        result[5] += 0;
      } else {
        result[0] += 0.673186119873817;
        result[1] += 0.044794952681388014;
        result[2] += 0.039116719242902206;
        result[3] += 0.06750788643533123;
        result[4] += 0.12176656151419558;
        result[5] += 0.05362776025236593;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.04;
        result[4] += 0.24;
        result[5] += 0.72;
      } else {
        result[0] += 0;
        result[1] += 0.015706806282722512;
        result[2] += 0.193717277486911;
        result[3] += 0.5916230366492147;
        result[4] += 0.005235602094240838;
        result[5] += 0.193717277486911;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        result[0] += 0.01941747572815534;
        result[1] += 0;
        result[2] += 0.28155339805825247;
        result[3] += 0.3689320388349515;
        result[4] += 0.1359223300970874;
        result[5] += 0.19417475728155342;
      } else {
        result[0] += 0.01821668264621285;
        result[1] += 0;
        result[2] += 0.8849472674976031;
        result[3] += 0.07861936720997123;
        result[4] += 0.0028763183125599234;
        result[5] += 0.015340364333652923;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        result[0] += 0.1806282722513089;
        result[1] += 0.020942408376963352;
        result[2] += 0;
        result[3] += 0.020942408376963352;
        result[4] += 0.680628272251309;
        result[5] += 0.0968586387434555;
      } else {
        result[0] += 0.0032414910858995136;
        result[1] += 0.0032414910858995136;
        result[2] += 0.007293354943273906;
        result[3] += 0.15640194489465153;
        result[4] += 0.059967585089141004;
        result[5] += 0.7698541329011345;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)104.5) ) ) {
        result[0] += 0.6549295774647887;
        result[1] += 0.06209987195902689;
        result[2] += 0.04289372599231754;
        result[3] += 0.06274007682458387;
        result[4] += 0.1299615877080666;
        result[5] += 0.04737516005121639;
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
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)94.5) ) ) {
        result[0] += 0;
        result[1] += 0.03184713375796178;
        result[2] += 0.16560509554140126;
        result[3] += 0.39490445859872614;
        result[4] += 0.025477707006369428;
        result[5] += 0.3821656050955414;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6795580110497238;
        result[3] += 0.26519337016574585;
        result[4] += 0;
        result[5] += 0.055248618784530384;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
        result[0] += 0.6956521739130435;
        result[1] += 0;
        result[2] += 0.30434782608695654;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.010192525481313703;
        result[1] += 0.0022650056625141564;
        result[2] += 0.9229898074745186;
        result[3] += 0.056625141562853906;
        result[4] += 0.0011325028312570782;
        result[5] += 0.006795016987542469;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)61.5) ) ) {
        result[0] += 0.01293103448275862;
        result[1] += 0.0603448275862069;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8793103448275862;
        result[5] += 0.04741379310344827;
      } else {
        result[0] += 0.026644462947543714;
        result[1] += 0.017485428809325562;
        result[2] += 0.0016652789342214821;
        result[3] += 0.14154870940882597;
        result[4] += 0.07077435470441298;
        result[5] += 0.7418817651956703;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        result[0] += 0.010989010989010992;
        result[1] += 0.9423076923076924;
        result[2] += 0;
        result[3] += 0.008241758241758244;
        result[4] += 0.03846153846153847;
        result[5] += 0;
      } else {
        result[0] += 0.6409652736904061;
        result[1] += 0.03766921718658034;
        result[2] += 0.03825779870512066;
        result[3] += 0.07828134196586227;
        result[4] += 0.10829899941141848;
        result[5] += 0.09652736904061213;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0880503144654088;
        result[3] += 0.5723270440251572;
        result[4] += 0.06289308176100629;
        result[5] += 0.27672955974842767;
      } else {
        result[0] += 0.02631578947368421;
        result[1] += 0.10526315789473684;
        result[2] += 0.4824561403508772;
        result[3] += 0.08771929824561403;
        result[4] += 0.043859649122807015;
        result[5] += 0.2543859649122807;
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)65.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.16666666666666666;
        result[3] += 0.75;
        result[4] += 0;
        result[5] += 0.08333333333333333;
      } else {
        result[0] += 0.014354066985645933;
        result[1] += 0;
        result[2] += 0.8880382775119617;
        result[3] += 0.07559808612440191;
        result[4] += 0;
        result[5] += 0.02200956937799043;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.008595988538681949;
        result[1] += 0.05157593123209169;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8882521489971347;
        result[5] += 0.05157593123209169;
      } else {
        result[0] += 0.08894044856921887;
        result[1] += 0.002320185614849188;
        result[2] += 0.010054137664346482;
        result[3] += 0.10827532869296211;
        result[4] += 0.06651198762567673;
        result[5] += 0.7238979118329466;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
        result[0] += 0.018292682926829267;
        result[1] += 0.9004065040650406;
        result[2] += 0;
        result[3] += 0.006097560975609756;
        result[4] += 0.06910569105691057;
        result[5] += 0.006097560975609756;
      } else {
        result[0] += 0.6976241900647948;
        result[1] += 0.01655867530597552;
        result[2] += 0.03599712023038157;
        result[3] += 0.1029517638588913;
        result[4] += 0.04607631389488841;
        result[5] += 0.1007919366450684;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97.5) ) ) {
        result[0] += 0;
        result[1] += 0.04242424242424243;
        result[2] += 0.07878787878787878;
        result[3] += 0.5515151515151515;
        result[4] += 0.04242424242424243;
        result[5] += 0.28484848484848485;
      } else {
        result[0] += 0.007352941176470588;
        result[1] += 0.03676470588235294;
        result[2] += 0.5367647058823529;
        result[3] += 0.11764705882352941;
        result[4] += 0.022058823529411766;
        result[5] += 0.27941176470588236;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5714285714285714;
        result[3] += 0.3609022556390977;
        result[4] += 0;
        result[5] += 0.06766917293233082;
      } else {
        result[0] += 0.012658227848101267;
        result[1] += 0;
        result[2] += 0.9205983889528194;
        result[3] += 0.06444188722669737;
        result[4] += 0;
        result[5] += 0.0023014959723820488;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.0045871559633027525;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9954128440366973;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.06557377049180328;
        result[2] += 0;
        result[3] += 0.09836065573770492;
        result[4] += 0.5737704918032787;
        result[5] += 0.26229508196721313;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
        result[0] += 0.7024793388429752;
        result[1] += 0.024793388429752067;
        result[2] += 0;
        result[3] += 0.03305785123966942;
        result[4] += 0.21487603305785125;
        result[5] += 0.024793388429752067;
      } else {
        result[0] += 0.00597460791635549;
        result[1] += 0.0037341299477221808;
        result[2] += 0.016430171769977596;
        result[3] += 0.20612397311426436;
        result[4] += 0.04630321135175504;
        result[5] += 0.7214339058999253;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)67.5) ) ) {
        result[0] += 0.038817005545286505;
        result[1] += 0.8096118299445472;
        result[2] += 0;
        result[3] += 0.0018484288354898336;
        result[4] += 0.14048059149722736;
        result[5] += 0.009242144177449169;
      } else {
        result[0] += 0.8421474358974359;
        result[1] += 0.03365384615384615;
        result[2] += 0.020833333333333332;
        result[3] += 0.021634615384615384;
        result[4] += 0.0641025641025641;
        result[5] += 0.017628205128205128;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
        result[0] += 0;
        result[1] += 0.0057306590257879654;
        result[2] += 0.47277936962750716;
        result[3] += 0.38968481375358166;
        result[4] += 0;
        result[5] += 0.1318051575931232;
      } else {
        result[0] += 0.02423603793466807;
        result[1] += 0.001053740779768177;
        result[2] += 0.8788198103266597;
        result[3] += 0.04952581664910432;
        result[4] += 0.011591148577449948;
        result[5] += 0.03477344573234984;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88.5) ) ) {
        result[0] += 0.0041841004184100415;
        result[1] += 0.0041841004184100415;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9707112970711297;
        result[5] += 0.02092050209205021;
      } else {
        result[0] += 0;
        result[1] += 0.84;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.16;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
        result[0] += 0.002844950213371266;
        result[1] += 0;
        result[2] += 0.002844950213371266;
        result[3] += 0.02418207681365576;
        result[4] += 0.034139402560455195;
        result[5] += 0.9359886201991465;
      } else {
        result[0] += 0.1145374449339207;
        result[1] += 0.027900146842878122;
        result[2] += 0.030837004405286344;
        result[3] += 0.3069016152716593;
        result[4] += 0.07342143906020558;
        result[5] += 0.44640234948604995;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)59) ) ) {
        result[0] += 0.0065075921908893716;
        result[1] += 0.8828633405639914;
        result[2] += 0.002169197396963124;
        result[3] += 0;
        result[4] += 0.1084598698481562;
        result[5] += 0;
      } else {
        result[0] += 0.7064777327935222;
        result[1] += 0.0155195681511471;
        result[2] += 0.030364372469635626;
        result[3] += 0.07017543859649122;
        result[4] += 0.11538461538461539;
        result[5] += 0.0620782726045884;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
        result[0] += 0.003205128205128205;
        result[1] += 0.02564102564102564;
        result[2] += 0.46794871794871795;
        result[3] += 0.38782051282051283;
        result[4] += 0.00641025641025641;
        result[5] += 0.10897435897435898;
      } else {
        result[0] += 0.014084507042253518;
        result[1] += 0.006500541711809316;
        result[2] += 0.9046587215601298;
        result[3] += 0.05308775731310941;
        result[4] += 0.006500541711809316;
        result[5] += 0.015167930660888404;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        result[0] += 0.12615384615384614;
        result[1] += 0.006153846153846154;
        result[2] += 0;
        result[3] += 0.021538461538461538;
        result[4] += 0.7384615384615385;
        result[5] += 0.1076923076923077;
      } else {
        result[0] += 0.0016764459346186086;
        result[1] += 0.002514668901927913;
        result[2] += 0.01173512154233026;
        result[3] += 0.15171835708298406;
        result[4] += 0.05699916177703269;
        result[5] += 0.7753562447611064;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)56.5) ) ) {
        result[0] += 0.005917159763313609;
        result[1] += 0.9171597633136095;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.07692307692307693;
        result[5] += 0;
      } else {
        result[0] += 0.671595810227973;
        result[1] += 0.02834257547751079;
        result[2] += 0.05730129390018485;
        result[3] += 0.08194701170671598;
        result[4] += 0.10166358595194087;
        result[5] += 0.05914972273567469;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)63) ) ) {
        result[0] += 0;
        result[1] += 0.4375;
        result[2] += 0.5;
        result[3] += 0;
        result[4] += 0.0625;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.1415929203539823;
        result[3] += 0.2743362831858407;
        result[4] += 0.04424778761061947;
        result[5] += 0.5398230088495575;
      }
    } else {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6938110749185668;
        result[3] += 0.254071661237785;
        result[4] += 0;
        result[5] += 0.05211726384364821;
      } else {
        result[0] += 0.008086253369272238;
        result[1] += 0;
        result[2] += 0.9353099730458221;
        result[3] += 0.04716981132075472;
        result[4] += 0.0013477088948787063;
        result[5] += 0.008086253369272238;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        result[0] += 0.012461059190031152;
        result[1] += 0.03426791277258567;
        result[2] += 0.012461059190031152;
        result[3] += 0;
        result[4] += 0.9314641744548287;
        result[5] += 0.009345794392523364;
      } else {
        result[0] += 0.07619795758051846;
        result[1] += 0.015710919088766692;
        result[2] += 0.0054988216810683424;
        result[3] += 0.10133542812254517;
        result[4] += 0.08091123330714847;
        result[5] += 0.7203456402199528;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)103.5) ) ) {
        result[0] += 0.5694444444444444;
        result[1] += 0.06166666666666667;
        result[2] += 0.06;
        result[3] += 0.13944444444444445;
        result[4] += 0.07833333333333334;
        result[5] += 0.09111111111111111;
      } else {
        result[0] += 0.024271844660194174;
        result[1] += 0.9611650485436893;
        result[2] += 0;
        result[3] += 0.0024271844660194173;
        result[4] += 0.012135922330097087;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
        result[0] += 0;
        result[1] += 0.11864406779661017;
        result[2] += 0.06779661016949153;
        result[3] += 0.1694915254237288;
        result[4] += 0.11864406779661017;
        result[5] += 0.5254237288135594;
      } else {
        result[0] += 0.07142857142857142;
        result[1] += 0;
        result[2] += 0.6547619047619048;
        result[3] += 0.13095238095238096;
        result[4] += 0;
        result[5] += 0.14285714285714285;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.24;
        result[3] += 0.72;
        result[4] += 0;
        result[5] += 0.04;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9131455399061034;
        result[3] += 0.08215962441314556;
        result[4] += 0;
        result[5] += 0.004694835680751175;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
        result[0] += 0.10714285714285715;
        result[1] += 0.03571428571428572;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8214285714285715;
        result[5] += 0.03571428571428572;
      } else {
        result[0] += 0.0008680555555555555;
        result[1] += 0.013888888888888888;
        result[2] += 0.004340277777777778;
        result[3] += 0.1345486111111111;
        result[4] += 0.0625;
        result[5] += 0.7838541666666666;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9771689497716894;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.0228310502283105;
        result[5] += 0;
      } else {
        result[0] += 0.6185037121644775;
        result[1] += 0.02627070245573958;
        result[2] += 0.050828098229583105;
        result[3] += 0.0890919474585951;
        result[4] += 0.11650485436893206;
        result[5] += 0.09880068532267278;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)91.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.14285714285714285;
        result[3] += 0.08571428571428572;
        result[4] += 0.07142857142857142;
        result[5] += 0.7;
      } else {
        result[0] += 0.004807692307692308;
        result[1] += 0.03365384615384615;
        result[2] += 0.39903846153846156;
        result[3] += 0.4230769230769231;
        result[4] += 0.02403846153846154;
        result[5] += 0.11538461538461539;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
        result[0] += 0.261904761904762;
        result[1] += 0.02380952380952381;
        result[2] += 0.48809523809523814;
        result[3] += 0.08333333333333334;
        result[4] += 0.011904761904761906;
        result[5] += 0.130952380952381;
      } else {
        result[0] += 0.0071174377224199285;
        result[1] += 0;
        result[2] += 0.9323843416370107;
        result[3] += 0.05693950177935943;
        result[4] += 0;
        result[5] += 0.0035587188612099642;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.02857142857142857;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9428571428571428;
        result[5] += 0.02857142857142857;
      } else {
        result[0] += 0.03724696356275304;
        result[1] += 0.0032388663967611335;
        result[2] += 0.0016194331983805667;
        result[3] += 0.15303643724696356;
        result[4] += 0.05263157894736842;
        result[5] += 0.7522267206477733;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        result[0] += 0.00228310502283105;
        result[1] += 0.9726027397260274;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.02511415525114155;
        result[5] += 0;
      } else {
        result[0] += 0.6571936056838366;
        result[1] += 0.03374777975133215;
        result[2] += 0.05210183540556542;
        result[3] += 0.07815275310834814;
        result[4] += 0.11604499703966845;
        result[5] += 0.06275902901124926;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
        result[0] += 0;
        result[1] += 0.08860759493670886;
        result[2] += 0.0379746835443038;
        result[3] += 0.17721518987341772;
        result[4] += 0.11392405063291139;
        result[5] += 0.5822784810126582;
      } else {
        result[0] += 0;
        result[1] += 0.018957345971563982;
        result[2] += 0.41232227488151657;
        result[3] += 0.3981042654028436;
        result[4] += 0;
        result[5] += 0.17061611374407584;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
        result[0] += 0.21333333333333335;
        result[1] += 0.02666666666666667;
        result[2] += 0.5733333333333334;
        result[3] += 0.13333333333333333;
        result[4] += 0.05333333333333334;
        result[5] += 0;
      } else {
        result[0] += 0.0117096018735363;
        result[1] += 0;
        result[2] += 0.9168618266978923;
        result[3] += 0.06440281030444965;
        result[4] += 0;
        result[5] += 0.00702576112412178;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.020202020202020207;
        result[1] += 0.05723905723905725;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8653198653198654;
        result[5] += 0.05723905723905725;
      } else {
        result[0] += 0.036575875486381325;
        result[1] += 0.007003891050583658;
        result[2] += 0.017120622568093387;
        result[3] += 0.16108949416342414;
        result[4] += 0.029571984435797664;
        result[5] += 0.7486381322957198;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        result[0] += 0.0067226890756302525;
        result[1] += 0.8016806722689076;
        result[2] += 0.0067226890756302525;
        result[3] += 0.0067226890756302525;
        result[4] += 0.17647058823529413;
        result[5] += 0.0016806722689075631;
      } else {
        result[0] += 0.6729323308270677;
        result[1] += 0.017543859649122806;
        result[2] += 0.08145363408521303;
        result[3] += 0.08834586466165413;
        result[4] += 0.07518796992481203;
        result[5] += 0.06453634085213032;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)89) ) ) {
        result[0] += 0;
        result[1] += 0.043859649122807015;
        result[2] += 0.2894736842105263;
        result[3] += 0.2543859649122807;
        result[4] += 0.008771929824561403;
        result[5] += 0.40350877192982454;
      } else {
        result[0] += 0.5142857142857142;
        result[1] += 0.34285714285714286;
        result[2] += 0.14285714285714285;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)105.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7400881057268722;
        result[3] += 0.22466960352422907;
        result[4] += 0;
        result[5] += 0.03524229074889868;
      } else {
        result[0] += 0.0014771048744460858;
        result[1] += 0;
        result[2] += 0.9601181683899557;
        result[3] += 0.03692762186115214;
        result[4] += 0;
        result[5] += 0.0014771048744460858;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)60.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)35) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.01568627450980392;
        result[2] += 0.00784313725490196;
        result[3] += 0.01568627450980392;
        result[4] += 0.9098039215686274;
        result[5] += 0.050980392156862744;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
        result[0] += 0;
        result[1] += 0.0013831258644536654;
        result[2] += 0;
        result[3] += 0.05394190871369295;
        result[4] += 0.04149377593360996;
        result[5] += 0.9031811894882434;
      } else {
        result[0] += 0.11827956989247312;
        result[1] += 0.027649769585253458;
        result[2] += 0.02457757296466974;
        result[3] += 0.31797235023041476;
        result[4] += 0.10906298003072197;
        result[5] += 0.402457757296467;
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)56.5) ) ) {
        result[0] += 0;
        result[1] += 0.9019189765458422;
        result[2] += 0;
        result[3] += 0.0021321961620469083;
        result[4] += 0.09594882729211088;
        result[5] += 0;
      } else {
        result[0] += 0.6828193832599119;
        result[1] += 0.028319697923222153;
        result[2] += 0.04090623033354311;
        result[3] += 0.06104468219005664;
        result[4] += 0.0988042794210195;
        result[5] += 0.0881057268722467;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
        result[0] += 0.021505376344086027;
        result[1] += 0.005376344086021507;
        result[2] += 0.36021505376344093;
        result[3] += 0.456989247311828;
        result[4] += 0.021505376344086027;
        result[5] += 0.13440860215053765;
      } else {
        result[0] += 0.014893617021276596;
        result[1] += 0.005319148936170213;
        result[2] += 0.8765957446808511;
        result[3] += 0.08617021276595745;
        result[4] += 0.002127659574468085;
        result[5] += 0.014893617021276596;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        result[0] += 0.11343283582089553;
        result[1] += 0.011940298507462687;
        result[2] += 0.008955223880597015;
        result[3] += 0;
        result[4] += 0.7253731343283583;
        result[5] += 0.14029850746268657;
      } else {
        result[0] += 0.0034423407917383822;
        result[1] += 0.027538726333907058;
        result[2] += 0.0025817555938037868;
        result[3] += 0.16006884681583478;
        result[4] += 0.03700516351118761;
        result[5] += 0.7693631669535284;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        result[0] += 0.009560229445506692;
        result[1] += 0.8221797323135756;
        result[2] += 0;
        result[3] += 0.009560229445506692;
        result[4] += 0.15487571701720843;
        result[5] += 0.0038240917782026767;
      } else {
        result[0] += 0.634453781512605;
        result[1] += 0.019807923169267706;
        result[2] += 0.09723889555822329;
        result[3] += 0.0822328931572629;
        result[4] += 0.07923169267707082;
        result[5] += 0.08703481392557023;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)95) ) ) {
        result[0] += 0.014423076923076924;
        result[1] += 0.07692307692307693;
        result[2] += 0.42788461538461536;
        result[3] += 0.25;
        result[4] += 0.02403846153846154;
        result[5] += 0.20673076923076922;
      } else {
        result[0] += 0.8666666666666667;
        result[1] += 0;
        result[2] += 0.13333333333333333;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)91.5) ) ) {
        result[0] += 0;
        result[1] += 0.14545454545454545;
        result[2] += 0.509090909090909;
        result[3] += 0.14545454545454545;
        result[4] += 0;
        result[5] += 0.2;
      } else {
        result[0] += 0.002320185614849188;
        result[1] += 0;
        result[2] += 0.9303944315545244;
        result[3] += 0.058004640371229696;
        result[4] += 0;
        result[5] += 0.009280742459396751;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
        result[0] += 0.2972972972972973;
        result[1] += 0.015765765765765764;
        result[2] += 0;
        result[3] += 0.02252252252252252;
        result[4] += 0.5833333333333334;
        result[5] += 0.08108108108108109;
      } else {
        result[0] += 0.006666666666666667;
        result[1] += 0.0033333333333333335;
        result[2] += 0.0075;
        result[3] += 0.1175;
        result[4] += 0.105;
        result[5] += 0.76;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        result[0] += 0.01;
        result[1] += 0.904;
        result[2] += 0.008;
        result[3] += 0.006;
        result[4] += 0.068;
        result[5] += 0.004;
      } else {
        result[0] += 0.6933333333333334;
        result[1] += 0.036491228070175435;
        result[2] += 0.0456140350877193;
        result[3] += 0.10736842105263159;
        result[4] += 0.03929824561403509;
        result[5] += 0.07789473684210527;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)89.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.044444444444444446;
        result[3] += 0;
        result[4] += 0.08888888888888889;
        result[5] += 0.8666666666666667;
      } else {
        result[0] += 0;
        result[1] += 0.013888888888888888;
        result[2] += 0.1597222222222222;
        result[3] += 0.5138888888888888;
        result[4] += 0.020833333333333332;
        result[5] += 0.2916666666666667;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        result[0] += 0.004366812227074236;
        result[1] += 0;
        result[2] += 0.5589519650655022;
        result[3] += 0.30131004366812225;
        result[4] += 0.043668122270742356;
        result[5] += 0.09170305676855896;
      } else {
        result[0] += 0.011918951132300359;
        result[1] += 0;
        result[2] += 0.9022646007151371;
        result[3] += 0.07032181168057212;
        result[4] += 0.007151370679380215;
        result[5] += 0.008343265792610252;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.11392405063291139;
        result[1] += 0.056962025316455694;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7088607594936709;
        result[5] += 0.12025316455696203;
      } else {
        result[0] += 0;
        result[1] += 0.0062056737588652485;
        result[2] += 0.0026595744680851063;
        result[3] += 0.15780141843971632;
        result[4] += 0.04609929078014184;
        result[5] += 0.7872340425531915;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9698275862068966;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.03017241379310345;
        result[5] += 0;
      } else {
        result[0] += 0.623263888888889;
        result[1] += 0.022569444444444448;
        result[2] += 0.053819444444444454;
        result[3] += 0.08622685185185186;
        result[4] += 0.11516203703703705;
        result[5] += 0.09895833333333334;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
        result[0] += 0;
        result[1] += 0.07142857142857142;
        result[2] += 0;
        result[3] += 0.017857142857142856;
        result[4] += 0.19642857142857142;
        result[5] += 0.7142857142857143;
      } else {
        result[0] += 0;
        result[1] += 0.035897435897435895;
        result[2] += 0.28205128205128205;
        result[3] += 0.4461538461538462;
        result[4] += 0.005128205128205128;
        result[5] += 0.23076923076923078;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
        result[0] += 0.4210526315789474;
        result[1] += 0;
        result[2] += 0.4210526315789474;
        result[3] += 0.12280701754385966;
        result[4] += 0;
        result[5] += 0.03508771929824562;
      } else {
        result[0] += 0.011337868480725625;
        result[1] += 0;
        result[2] += 0.9024943310657597;
        result[3] += 0.0816326530612245;
        result[4] += 0;
        result[5] += 0.00453514739229025;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.014534883720930232;
        result[1] += 0.055232558139534885;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8517441860465116;
        result[5] += 0.07848837209302326;
      } else {
        result[0] += 0.11128284389489954;
        result[1] += 0.010046367851622875;
        result[2] += 0.008500772797527048;
        result[3] += 0.11360123647604328;
        result[4] += 0.04636785162287481;
        result[5] += 0.7102009273570324;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)52.5) ) ) {
        result[0] += 0;
        result[1] += 0.9952941176470588;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.004705882352941176;
        result[5] += 0;
      } else {
        result[0] += 0.6121247792819305;
        result[1] += 0.0329605650382578;
        result[2] += 0.08357857563272514;
        result[3] += 0.11359623307828134;
        result[4] += 0.07533843437316068;
        result[5] += 0.0824014125956445;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
        result[0] += 0.01298701298701299;
        result[1] += 0.07792207792207793;
        result[2] += 0.16883116883116886;
        result[3] += 0.1168831168831169;
        result[4] += 0.10389610389610392;
        result[5] += 0.5194805194805195;
      } else {
        result[0] += 0;
        result[1] += 0.0078125;
        result[2] += 0.4453125;
        result[3] += 0.421875;
        result[4] += 0;
        result[5] += 0.125;
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)70.5) ) ) {
        result[0] += 0.4074074074074074;
        result[1] += 0.07407407407407407;
        result[2] += 0.48148148148148145;
        result[3] += 0.037037037037037035;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.007211538461538462;
        result[1] += 0;
        result[2] += 0.921875;
        result[3] += 0.06490384615384616;
        result[4] += 0;
        result[5] += 0.006009615384615385;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)70.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.024154589371980676;
        result[4] += 0.8502415458937198;
        result[5] += 0.12560386473429952;
      } else {
        result[0] += 0.006172839506172839;
        result[1] += 0;
        result[2] += 0.007936507936507936;
        result[3] += 0.10141093474426807;
        result[4] += 0.06349206349206349;
        result[5] += 0.8209876543209876;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)50) ) ) {
        result[0] += 0.007246376811594203;
        result[1] += 0.966183574879227;
        result[2] += 0;
        result[3] += 0.007246376811594203;
        result[4] += 0.01932367149758454;
        result[5] += 0;
      } else {
        result[0] += 0.6253537068477646;
        result[1] += 0.04584040747028863;
        result[2] += 0.027164685908319185;
        result[3] += 0.08545557441992077;
        result[4] += 0.13355970571590267;
        result[5] += 0.08262591963780419;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0.01818181818181818;
        result[2] += 0.11818181818181818;
        result[3] += 0.4727272727272727;
        result[4] += 0.01818181818181818;
        result[5] += 0.37272727272727274;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7111111111111111;
        result[3] += 0.16666666666666666;
        result[4] += 0;
        result[5] += 0.12222222222222222;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
        result[0] += 0.459016393442623;
        result[1] += 0.1475409836065574;
        result[2] += 0.27868852459016397;
        result[3] += 0;
        result[4] += 0.049180327868852465;
        result[5] += 0.0655737704918033;
      } else {
        result[0] += 0.011789924973204717;
        result[1] += 0;
        result[2] += 0.887459807073955;
        result[3] += 0.09217577706323687;
        result[4] += 0.0010718113612004287;
        result[5] += 0.007502679528403001;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        result[0] += 0.13293051359516617;
        result[1] += 0.006042296072507553;
        result[2] += 0;
        result[3] += 0.012084592145015106;
        result[4] += 0.716012084592145;
        result[5] += 0.13293051359516617;
      } else {
        result[0] += 0.0026761819803746653;
        result[1] += 0.008028545941123996;
        result[2] += 0.0044603033006244425;
        result[3] += 0.14897413024085637;
        result[4] += 0.04817127564674398;
        result[5] += 0.7876895628902766;
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)104.5) ) ) {
        result[0] += 0.6183920704845814;
        result[1] += 0.05561674008810573;
        result[2] += 0.046255506607929514;
        result[3] += 0.08259911894273128;
        result[4] += 0.11784140969162996;
        result[5] += 0.07929515418502203;
      } else {
        result[0] += 0.004926108374384236;
        result[1] += 0.9802955665024629;
        result[2] += 0.007389162561576353;
        result[3] += 0.002463054187192118;
        result[4] += 0.004926108374384236;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)90.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.13043478260869565;
        result[3] += 0.06521739130434782;
        result[4] += 0.021739130434782608;
        result[5] += 0.782608695652174;
      } else {
        result[0] += 0.02197802197802198;
        result[1] += 0.038461538461538464;
        result[2] += 0.3131868131868132;
        result[3] += 0.46153846153846156;
        result[4] += 0.016483516483516484;
        result[5] += 0.14835164835164835;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
        result[0] += 0.7692307692307693;
        result[1] += 0;
        result[2] += 0.23076923076923078;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.007683863885839737;
        result[1] += 0;
        result[2] += 0.9132821075740944;
        result[3] += 0.07354555433589462;
        result[4] += 0;
        result[5] += 0.005488474204171241;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)70.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        result[0] += 0.00558659217877095;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9497206703910615;
        result[5] += 0.0446927374301676;
      } else {
        result[0] += 0.0045045045045045045;
        result[1] += 0.0009009009009009009;
        result[2] += 0.0036036036036036037;
        result[3] += 0.12072072072072072;
        result[4] += 0.05855855855855856;
        result[5] += 0.8117117117117117;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)103.5) ) ) {
        result[0] += 0.5879237288135594;
        result[1] += 0.0513771186440678;
        result[2] += 0.04343220338983051;
        result[3] += 0.1016949152542373;
        result[4] += 0.1329449152542373;
        result[5] += 0.0826271186440678;
      } else {
        result[0] += 0.015;
        result[1] += 0.9775;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.0075;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)105.5) ) ) {
        result[0] += 0;
        result[1] += 0.21686746987951808;
        result[2] += 0;
        result[3] += 0.26506024096385544;
        result[4] += 0;
        result[5] += 0.5180722891566265;
      } else {
        result[0] += 0.17307692307692307;
        result[1] += 0.019230769230769232;
        result[2] += 0.5;
        result[3] += 0.038461538461538464;
        result[4] += 0.057692307692307696;
        result[5] += 0.21153846153846154;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        result[0] += 0.02763819095477387;
        result[1] += 0;
        result[2] += 0.635678391959799;
        result[3] += 0.28391959798994976;
        result[4] += 0.005025125628140704;
        result[5] += 0.04773869346733668;
      } else {
        result[0] += 0.002793296089385475;
        result[1] += 0;
        result[2] += 0.9553072625698324;
        result[3] += 0.03910614525139665;
        result[4] += 0;
        result[5] += 0.002793296089385475;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.18552036199095023;
        result[1] += 0.042986425339366516;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.6809954751131222;
        result[5] += 0.09049773755656108;
      } else {
        result[0] += 0.003676470588235294;
        result[1] += 0.01011029411764706;
        result[2] += 0.013786764705882353;
        result[3] += 0.10845588235294118;
        result[4] += 0.06801470588235294;
        result[5] += 0.7959558823529411;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)103.5) ) ) {
        result[0] += 0.568231441048035;
        result[1] += 0.04639737991266376;
        result[2] += 0.057314410480349354;
        result[3] += 0.13700873362445418;
        result[4] += 0.09279475982532752;
        result[5] += 0.09825327510917031;
      } else {
        result[0] += 0.012531328320802004;
        result[1] += 0.9874686716791979;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0.1044776119402985;
        result[2] += 0.11940298507462686;
        result[3] += 0.19402985074626866;
        result[4] += 0.05970149253731343;
        result[5] += 0.5223880597014925;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5897435897435898;
        result[3] += 0.32051282051282054;
        result[4] += 0;
        result[5] += 0.08974358974358974;
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7777777777777778;
        result[3] += 0.19753086419753085;
        result[4] += 0;
        result[5] += 0.024691358024691357;
      } else {
        result[0] += 0.005908419497784344;
        result[1] += 0;
        result[2] += 0.9571639586410636;
        result[3] += 0.02806499261447563;
        result[4] += 0;
        result[5] += 0.008862629246676516;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        result[0] += 0.1;
        result[1] += 0.013888888888888888;
        result[2] += 0;
        result[3] += 0.011111111111111112;
        result[4] += 0.7222222222222222;
        result[5] += 0.1527777777777778;
      } else {
        result[0] += 0;
        result[1] += 0.011854360711261643;
        result[2] += 0.02540220152413209;
        result[3] += 0.1718882303132938;
        result[4] += 0.06181202370872142;
        result[5] += 0.729043183742591;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)55.5) ) ) {
        result[0] += 0.009029345372460496;
        result[1] += 0.9232505643340858;
        result[2] += 0;
        result[3] += 0.011286681715575621;
        result[4] += 0.056433408577878104;
        result[5] += 0;
      } else {
        result[0] += 0.6522988505747127;
        result[1] += 0.0235632183908046;
        result[2] += 0.056321839080459776;
        result[3] += 0.08678160919540231;
        result[4] += 0.10747126436781611;
        result[5] += 0.07356321839080461;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)76.5) ) ) {
        result[0] += 0;
        result[1] += 0.075;
        result[2] += 0.1;
        result[3] += 0.2;
        result[4] += 0.075;
        result[5] += 0.55;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5161290322580645;
        result[3] += 0.3548387096774194;
        result[4] += 0;
        result[5] += 0.12903225806451613;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)101) ) ) {
        result[0] += 0;
        result[1] += 0.015544041450777202;
        result[2] += 0.7461139896373057;
        result[3] += 0.19170984455958548;
        result[4] += 0.010362694300518135;
        result[5] += 0.03626943005181347;
      } else {
        result[0] += 0.010738255033557046;
        result[1] += 0.0026845637583892616;
        result[2] += 0.9489932885906041;
        result[3] += 0.02953020134228188;
        result[4] += 0;
        result[5] += 0.008053691275167786;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)59.5) ) ) {
        result[0] += 0.1423728813559322;
        result[1] += 0.010169491525423728;
        result[2] += 0;
        result[3] += 0.006779661016949152;
        result[4] += 0.7898305084745763;
        result[5] += 0.05084745762711865;
      } else {
        result[0] += 0.008216926869350863;
        result[1] += 0.01972062448644207;
        result[2] += 0.0024650780608052587;
        result[3] += 0.17009038619556285;
        result[4] += 0.056696795398520954;
        result[5] += 0.7428101889893179;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0.9571734475374732;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.042826552462526764;
        result[5] += 0;
      } else {
        result[0] += 0.6439522998296423;
        result[1] += 0.024417944349801254;
        result[2] += 0.03975014196479274;
        result[3] += 0.08745031232254402;
        result[4] += 0.11243611584327089;
        result[5] += 0.09199318568994891;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)101) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.2368421052631579;
        result[3] += 0.5921052631578948;
        result[4] += 0;
        result[5] += 0.1710526315789474;
      } else {
        result[0] += 0.02247191011235955;
        result[1] += 0;
        result[2] += 0.7153558052434457;
        result[3] += 0.2247191011235955;
        result[4] += 0;
        result[5] += 0.03745318352059925;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)69) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.004054054054054055;
        result[1] += 0;
        result[2] += 0.9486486486486487;
        result[3] += 0.045945945945945955;
        result[4] += 0;
        result[5] += 0.0013513513513513516;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
        result[0] += 0.018315018315018316;
        result[1] += 0.01098901098901099;
        result[2] += 0;
        result[3] += 0.01098901098901099;
        result[4] += 0.8681318681318682;
        result[5] += 0.09157509157509157;
      } else {
        result[0] += 0.03470540758676352;
        result[1] += 0.003228410008071025;
        result[2] += 0.0008071025020177562;
        result[3] += 0.17675544794188863;
        result[4] += 0.04600484261501211;
        result[5] += 0.738498789346247;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
        result[0] += 0.0018939393939393936;
        result[1] += 0.8484848484848483;
        result[2] += 0;
        result[3] += 0.005681818181818181;
        result[4] += 0.14393939393939392;
        result[5] += 0;
      } else {
        result[0] += 0.6652818991097923;
        result[1] += 0.032047477744807124;
        result[2] += 0.0973293768545994;
        result[3] += 0.07240356083086054;
        result[4] += 0.06587537091988131;
        result[5] += 0.06706231454005934;
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)102.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.08163265306122448;
        result[3] += 0.7346938775510204;
        result[4] += 0.10204081632653061;
        result[5] += 0.08163265306122448;
      } else {
        result[0] += 0.010526315789473684;
        result[1] += 0;
        result[2] += 0.5578947368421052;
        result[3] += 0.15789473684210525;
        result[4] += 0.10526315789473684;
        result[5] += 0.16842105263157894;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
        result[0] += 0.09302325581395349;
        result[1] += 0.13953488372093023;
        result[2] += 0.20930232558139536;
        result[3] += 0.2558139534883721;
        result[4] += 0;
        result[5] += 0.3023255813953488;
      } else {
        result[0] += 0.006564551422319475;
        result[1] += 0;
        result[2] += 0.9223194748358862;
        result[3] += 0.06455142231947483;
        result[4] += 0;
        result[5] += 0.006564551422319475;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.007905138339920948;
        result[2] += 0;
        result[3] += 0.023715415019762844;
        result[4] += 0.9051383399209486;
        result[5] += 0.06324110671936758;
      } else {
        result[0] += 0.02279874213836478;
        result[1] += 0.0031446540880503146;
        result[2] += 0.007075471698113208;
        result[3] += 0.14937106918238993;
        result[4] += 0.059748427672955975;
        result[5] += 0.7578616352201258;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9848866498740554;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.015113350125944584;
        result[5] += 0;
      } else {
        result[0] += 0.6325068870523416;
        result[1] += 0.03746556473829201;
        result[2] += 0.050137741046831955;
        result[3] += 0.08925619834710743;
        result[4] += 0.11349862258953168;
        result[5] += 0.07713498622589532;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.26495726495726496;
        result[3] += 0.6153846153846154;
        result[4] += 0;
        result[5] += 0.11965811965811966;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7708333333333334;
        result[3] += 0.125;
        result[4] += 0;
        result[5] += 0.10416666666666667;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)84) ) ) {
        result[0] += 0.008298755186721992;
        result[1] += 0;
        result[2] += 0.8091286307053942;
        result[3] += 0.17012448132780084;
        result[4] += 0;
        result[5] += 0.012448132780082987;
      } else {
        result[0] += 0.013177159590043924;
        result[1] += 0;
        result[2] += 0.9414348462664714;
        result[3] += 0.043923865300146414;
        result[4] += 0;
        result[5] += 0.0014641288433382138;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
        result[0] += 0.2900232018561485;
        result[1] += 0.018561484918793503;
        result[2] += 0.004640371229698376;
        result[3] += 0.02320185614849188;
        result[4] += 0.5777262180974478;
        result[5] += 0.08584686774941995;
      } else {
        result[0] += 0.007407407407407408;
        result[1] += 0.006584362139917695;
        result[2] += 0.015637860082304528;
        result[3] += 0.11604938271604938;
        result[4] += 0.1102880658436214;
        result[5] += 0.7440329218106996;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
        result[0] += 0.007782101167315176;
        result[1] += 0.9182879377431907;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.07392996108949418;
        result[5] += 0;
      } else {
        result[0] += 0.7013258897418004;
        result[1] += 0.020237264480111653;
        result[2] += 0.052337752965806;
        result[3] += 0.11793440334961619;
        result[4] += 0.03558967201674808;
        result[5] += 0.07257501744591766;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0.02142857142857143;
        result[2] += 0.07857142857142857;
        result[3] += 0.45714285714285713;
        result[4] += 0.02857142857142857;
        result[5] += 0.4142857142857143;
      } else {
        result[0] += 0;
        result[1] += 0.10576923076923077;
        result[2] += 0.47115384615384615;
        result[3] += 0.19230769230769232;
        result[4] += 0.019230769230769232;
        result[5] += 0.21153846153846154;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
        result[0] += 0.7272727272727273;
        result[1] += 0;
        result[2] += 0.18181818181818182;
        result[3] += 0.09090909090909091;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.005230125523012552;
        result[1] += 0;
        result[2] += 0.9100418410041841;
        result[3] += 0.07845188284518828;
        result[4] += 0;
        result[5] += 0.006276150627615063;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        result[0] += 0.004016064257028112;
        result[1] += 0.01606425702811245;
        result[2] += 0;
        result[3] += 0.05220883534136546;
        result[4] += 0.8755020080321285;
        result[5] += 0.05220883534136546;
      } else {
        result[0] += 0.034959349593495934;
        result[1] += 0.007317073170731708;
        result[2] += 0.004878048780487805;
        result[3] += 0.13821138211382114;
        result[4] += 0.06422764227642276;
        result[5] += 0.7504065040650406;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)51.5) ) ) {
        result[0] += 0.004282655246252676;
        result[1] += 0.9614561027837257;
        result[2] += 0;
        result[3] += 0.006423982869379013;
        result[4] += 0.02783725910064239;
        result[5] += 0;
      } else {
        result[0] += 0.6459443457667259;
        result[1] += 0.04085257548845471;
        result[2] += 0.04322084073416223;
        result[3] += 0.07756068679692125;
        result[4] += 0.1290704558910598;
        result[5] += 0.06335109532267615;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
        result[0] += 0.026515151515151516;
        result[1] += 0.015151515151515152;
        result[2] += 0.3106060606060606;
        result[3] += 0.4090909090909091;
        result[4] += 0.026515151515151516;
        result[5] += 0.21212121212121213;
      } else {
        result[0] += 0.07971014492753623;
        result[1] += 0.010869565217391304;
        result[2] += 0.7137681159420289;
        result[3] += 0.13768115942028986;
        result[4] += 0.0036231884057971015;
        result[5] += 0.05434782608695652;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
        result[0] += 0.0049504950495049506;
        result[1] += 0;
        result[2] += 0.8811881188118812;
        result[3] += 0.09405940594059406;
        result[4] += 0;
        result[5] += 0.019801980198019802;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9910913140311804;
        result[3] += 0.008908685968819599;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.07053941908713693;
        result[2] += 0.008298755186721992;
        result[3] += 0;
        result[4] += 0.9045643153526971;
        result[5] += 0.016597510373443983;
      } else {
        result[0] += 0.44660194174757284;
        result[1] += 0.038834951456310676;
        result[2] += 0.019417475728155338;
        result[3] += 0;
        result[4] += 0.20388349514563106;
        result[5] += 0.2912621359223301;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
        result[0] += 0;
        result[1] += 0.01756198347107438;
        result[2] += 0;
        result[3] += 0.05991735537190083;
        result[4] += 0.05268595041322314;
        result[5] += 0.8698347107438017;
      } else {
        result[0] += 0.005847953216374269;
        result[1] += 0.0029239766081871343;
        result[2] += 0.14327485380116958;
        result[3] += 0.4649122807017544;
        result[4] += 0.014619883040935672;
        result[5] += 0.3684210526315789;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6601347213717085;
        result[1] += 0.05511328842620943;
        result[2] += 0.02020820575627679;
        result[3] += 0.04837721984078383;
        result[4] += 0.12553582363747703;
        result[5] += 0.0906307409675444;
      } else {
        result[0] += 0.014778325123152709;
        result[1] += 0.9630541871921182;
        result[2] += 0.0024630541871921183;
        result[3] += 0.0024630541871921183;
        result[4] += 0.017241379310344827;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0.005434782608695652;
        result[2] += 0.33695652173913043;
        result[3] += 0.46195652173913043;
        result[4] += 0;
        result[5] += 0.1956521739130435;
      } else {
        result[0] += 0.02528977871443625;
        result[1] += 0;
        result[2] += 0.8925184404636459;
        result[3] += 0.07270811380400422;
        result[4] += 0.002107481559536354;
        result[5] += 0.007376185458377239;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        result[0] += 0.003257328990228013;
        result[1] += 0.048859934853420196;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9218241042345277;
        result[5] += 0.026058631921824105;
      } else {
        result[0] += 0.07718405428329092;
        result[1] += 0.01441899915182358;
        result[2] += 0.002544529262086514;
        result[3] += 0.07888040712468193;
        result[4] += 0.06446140797285835;
        result[5] += 0.7625106022052587;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        result[0] += 0.0024630541871921183;
        result[1] += 0.9753694581280788;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.022167487684729065;
        result[5] += 0;
      } else {
        result[0] += 0.5729907053034445;
        result[1] += 0.02952433023510115;
        result[2] += 0.049207217058501916;
        result[3] += 0.12903225806451613;
        result[4] += 0.11755057408419901;
        result[5] += 0.1016949152542373;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.13924050632911392;
        result[3] += 0.7341772151898734;
        result[4] += 0;
        result[5] += 0.12658227848101267;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7076923076923077;
        result[3] += 0.2153846153846154;
        result[4] += 0;
        result[5] += 0.07692307692307693;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
        result[0] += 0.025380710659898477;
        result[1] += 0;
        result[2] += 0.8274111675126904;
        result[3] += 0.12436548223350254;
        result[4] += 0;
        result[5] += 0.02284263959390863;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9682539682539683;
        result[3] += 0.021164021164021163;
        result[4] += 0;
        result[5] += 0.010582010582010581;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.06938775510204082;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9102040816326531;
        result[5] += 0.02040816326530612;
      } else {
        result[0] += 0.04363905325443787;
        result[1] += 0.008875739644970414;
        result[2] += 0.015532544378698224;
        result[3] += 0.16198224852071005;
        result[4] += 0.057692307692307696;
        result[5] += 0.7122781065088757;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0.9689578713968958;
        result[2] += 0;
        result[3] += 0.004434589800443459;
        result[4] += 0.026607538802660754;
        result[5] += 0;
      } else {
        result[0] += 0.6404428904428904;
        result[1] += 0.03613053613053612;
        result[2] += 0.06526806526806525;
        result[3] += 0.08275058275058274;
        result[4] += 0.10897435897435895;
        result[5] += 0.06643356643356642;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)88.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.05128205128205128;
        result[3] += 0.05128205128205128;
        result[4] += 0.20512820512820512;
        result[5] += 0.6923076923076923;
      } else {
        result[0] += 0.0374331550802139;
        result[1] += 0.0106951871657754;
        result[2] += 0.4919786096256685;
        result[3] += 0.3582887700534759;
        result[4] += 0.0053475935828877;
        result[5] += 0.0962566844919786;
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7716535433070867;
        result[3] += 0.20472440944881892;
        result[4] += 0;
        result[5] += 0.02362204724409449;
      } else {
        result[0] += 0.0028208744710860366;
        result[1] += 0;
        result[2] += 0.9562764456981664;
        result[3] += 0.0380818053596615;
        result[4] += 0;
        result[5] += 0.0028208744710860366;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
        result[0] += 0.025210084033613446;
        result[1] += 0.07563025210084033;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.865546218487395;
        result[5] += 0.03361344537815126;
      } else {
        result[0] += 0.04560810810810811;
        result[1] += 0.01097972972972973;
        result[2] += 0.0008445945945945946;
        result[3] += 0.14695945945945946;
        result[4] += 0.04983108108108108;
        result[5] += 0.745777027027027;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.0033500837520938024;
        result[1] += 0.7956448911222781;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.19597989949748743;
        result[5] += 0.005025125628140704;
      } else {
        result[0] += 0.7079037800687286;
        result[1] += 0.021305841924398626;
        result[2] += 0.03917525773195876;
        result[3] += 0.07147766323024055;
        result[4] += 0.07216494845360824;
        result[5] += 0.0879725085910653;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)68.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.09090909090909091;
        result[3] += 0.05194805194805195;
        result[4] += 0.14285714285714285;
        result[5] += 0.7142857142857143;
      } else {
        result[0] += 0.011194029850746268;
        result[1] += 0.018656716417910446;
        result[2] += 0.27611940298507465;
        result[3] += 0.47388059701492535;
        result[4] += 0.018656716417910446;
        result[5] += 0.20149253731343283;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
        result[0] += 0.03153153153153153;
        result[1] += 0.018018018018018018;
        result[2] += 0.6576576576576577;
        result[3] += 0.22972972972972974;
        result[4] += 0.02252252252252252;
        result[5] += 0.04054054054054054;
      } else {
        result[0] += 0.04331210191082802;
        result[1] += 0.003821656050955414;
        result[2] += 0.9121019108280255;
        result[3] += 0.03821656050955414;
        result[4] += 0;
        result[5] += 0.0025477707006369425;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)47) ) ) {
        result[0] += 0;
        result[1] += 0.8571428571428571;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.14285714285714285;
        result[5] += 0;
      } else {
        result[0] += 0.0033112582781456954;
        result[1] += 0.016556291390728478;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9370860927152318;
        result[5] += 0.04304635761589404;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
        result[0] += 0;
        result[1] += 0.0012787723785166241;
        result[2] += 0.005115089514066497;
        result[3] += 0.03324808184143223;
        result[4] += 0.049872122762148335;
        result[5] += 0.9104859335038363;
      } else {
        result[0] += 0.1348464619492657;
        result[1] += 0.0026702269692923898;
        result[2] += 0.009345794392523364;
        result[3] += 0.3097463284379172;
        result[4] += 0.08411214953271028;
        result[5] += 0.45927903871829107;
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)104.5) ) ) {
        result[0] += 0.7317251461988304;
        result[1] += 0.06067251461988304;
        result[2] += 0.03070175438596491;
        result[3] += 0.03435672514619883;
        result[4] += 0.11476608187134503;
        result[5] += 0.027777777777777776;
      } else {
        result[0] += 0.0027700831024930752;
        result[1] += 0.9722991689750694;
        result[2] += 0;
        result[3] += 0.0055401662049861505;
        result[4] += 0.016620498614958453;
        result[5] += 0.0027700831024930752;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
        result[0] += 0.10106382978723406;
        result[1] += 0.04521276595744682;
        result[2] += 0.3563829787234043;
        result[3] += 0.2712765957446809;
        result[4] += 0.04255319148936171;
        result[5] += 0.18351063829787237;
      } else {
        result[0] += 0.004540295119182747;
        result[1] += 0;
        result[2] += 0.9023836549375709;
        result[3] += 0.07832009080590238;
        result[4] += 0;
        result[5] += 0.014755959137343927;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
        result[0] += 0.014285714285714285;
        result[1] += 0.014285714285714285;
        result[2] += 0;
        result[3] += 0.004761904761904762;
        result[4] += 0.9333333333333333;
        result[5] += 0.03333333333333333;
      } else {
        result[0] += 0.04272151898734177;
        result[1] += 0.0007911392405063291;
        result[2] += 0.006329113924050633;
        result[3] += 0.15110759493670886;
        result[4] += 0.061708860759493674;
        result[5] += 0.7373417721518988;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)53.5) ) ) {
        result[0] += 0.006756756756756757;
        result[1] += 0.9504504504504504;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.038288288288288286;
        result[5] += 0.0045045045045045045;
      } else {
        result[0] += 0.6886850152905198;
        result[1] += 0.044648318042813454;
        result[2] += 0.03853211009174312;
        result[3] += 0.0672782874617737;
        result[4] += 0.10030581039755351;
        result[5] += 0.060550458715596334;
      }
    }
  } else {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)99) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)89.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.1875;
        result[3] += 0.03125;
        result[4] += 0.171875;
        result[5] += 0.609375;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.2608695652173913;
        result[3] += 0.5845410628019324;
        result[4] += 0.014492753623188406;
        result[5] += 0.14009661835748793;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)95) ) ) {
        result[0] += 0.09523809523809523;
        result[1] += 0.14285714285714285;
        result[2] += 0;
        result[3] += 0.09523809523809523;
        result[4] += 0.14285714285714285;
        result[5] += 0.5238095238095238;
      } else {
        result[0] += 0.019367991845056064;
        result[1] += 0;
        result[2] += 0.891946992864424;
        result[3] += 0.07849133537206932;
        result[4] += 0;
        result[5] += 0.010193679918450561;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
        result[0] += 0.24838709677419354;
        result[1] += 0.07096774193548387;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.6451612903225806;
        result[5] += 0.035483870967741936;
      } else {
        result[0] += 0.005947955390334572;
        result[1] += 0.020817843866171002;
        result[2] += 0.006691449814126394;
        result[3] += 0.16802973977695168;
        result[4] += 0.0654275092936803;
        result[5] += 0.7330855018587361;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)50) ) ) {
        result[0] += 0.002624671916010499;
        result[1] += 0.9816272965879266;
        result[2] += 0;
        result[3] += 0.002624671916010499;
        result[4] += 0.013123359580052495;
        result[5] += 0;
      } else {
        result[0] += 0.6076093128904032;
        result[1] += 0.03861442362294151;
        result[2] += 0.08461101646791595;
        result[3] += 0.0982396365701306;
        result[4] += 0.11073253833049404;
        result[5] += 0.060193072118114706;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.02564102564102564;
        result[4] += 0;
        result[5] += 0.9743589743589743;
      } else {
        result[0] += 0.09876543209876543;
        result[1] += 0;
        result[2] += 0.30864197530864196;
        result[3] += 0.24691358024691357;
        result[4] += 0.20987654320987653;
        result[5] += 0.13580246913580246;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
        result[0] += 0.015748031496062992;
        result[1] += 0;
        result[2] += 0.6299212598425197;
        result[3] += 0.30708661417322836;
        result[4] += 0;
        result[5] += 0.047244094488188976;
      } else {
        result[0] += 0.0012787723785166241;
        result[1] += 0;
        result[2] += 0.9386189258312021;
        result[3] += 0.054987212276214836;
        result[4] += 0;
        result[5] += 0.005115089514066497;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.027559055118110236;
        result[2] += 0.007874015748031496;
        result[3] += 0.051181102362204724;
        result[4] += 0.8661417322834646;
        result[5] += 0.047244094488188976;
      } else {
        result[0] += 0.017614091273018415;
        result[1] += 0.010408326661329063;
        result[2] += 0.010408326661329063;
        result[3] += 0.13931144915932747;
        result[4] += 0.0632506004803843;
        result[5] += 0.7590072057646117;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)51.5) ) ) {
        result[0] += 0.006896551724137931;
        result[1] += 0.9563218390804598;
        result[2] += 0;
        result[3] += 0.004597701149425287;
        result[4] += 0.03218390804597701;
        result[5] += 0;
      } else {
        result[0] += 0.6573099415204678;
        result[1] += 0.049707602339181284;
        result[2] += 0.03216374269005848;
        result[3] += 0.07192982456140351;
        result[4] += 0.10467836257309941;
        result[5] += 0.08421052631578947;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)102.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.18181818181818182;
        result[3] += 0.5664335664335665;
        result[4] += 0;
        result[5] += 0.2517482517482518;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6;
        result[3] += 0.2;
        result[4] += 0.05714285714285714;
        result[5] += 0.14285714285714285;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        result[0] += 0.0390625;
        result[1] += 0;
        result[2] += 0.7265625;
        result[3] += 0.20703125;
        result[4] += 0;
        result[5] += 0.02734375;
      } else {
        result[0] += 0.005376344086021506;
        result[1] += 0;
        result[2] += 0.9502688172043011;
        result[3] += 0.038978494623655914;
        result[4] += 0;
        result[5] += 0.005376344086021506;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        result[0] += 0.16802168021680217;
        result[1] += 0.02981029810298103;
        result[2] += 0;
        result[3] += 0.02710027100271003;
        result[4] += 0.6639566395663956;
        result[5] += 0.1111111111111111;
      } else {
        result[0] += 0.0029717682020802376;
        result[1] += 0.011144130757800892;
        result[2] += 0.005943536404160475;
        result[3] += 0.1589895988112927;
        result[4] += 0.06240713224368499;
        result[5] += 0.7585438335809807;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)66.5) ) ) {
        result[0] += 0;
        result[1] += 0.7881508078994615;
        result[2] += 0.012567324955116699;
        result[3] += 0.0035906642728904853;
        result[4] += 0.19210053859964096;
        result[5] += 0.0035906642728904853;
      } else {
        result[0] += 0.7054840893703453;
        result[1] += 0.025727826675693975;
        result[2] += 0.07921462423832092;
        result[3] += 0.07515233581584292;
        result[4] += 0.05958023019634394;
        result[5] += 0.05484089370345294;
      }
    }
  } else {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)94.5) ) ) {
        result[0] += 0.01834862385321101;
        result[1] += 0.03669724770642202;
        result[2] += 0.1559633027522936;
        result[3] += 0.45871559633027525;
        result[4] += 0.045871559633027525;
        result[5] += 0.28440366972477066;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.75;
        result[3] += 0.18548387096774194;
        result[4] += 0;
        result[5] += 0.06451612903225806;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
        result[0] += 0.14285714285714285;
        result[1] += 0.05714285714285714;
        result[2] += 0.37142857142857144;
        result[3] += 0.34285714285714286;
        result[4] += 0;
        result[5] += 0.08571428571428572;
      } else {
        result[0] += 0.007416563658838073;
        result[1] += 0;
        result[2] += 0.9431396786155749;
        result[3] += 0.04449938195302844;
        result[4] += 0;
        result[5] += 0.004944375772558715;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        result[0] += 0.11956521739130435;
        result[1] += 0.05434782608695652;
        result[2] += 0.008152173913043478;
        result[3] += 0;
        result[4] += 0.6983695652173914;
        result[5] += 0.11956521739130435;
      } else {
        result[0] += 0.004557885141294439;
        result[1] += 0.004557885141294439;
        result[2] += 0.01276207839562443;
        result[3] += 0.1422060164083865;
        result[4] += 0.07110300820419325;
        result[5] += 0.764813126709207;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)50) ) ) {
        result[0] += 0.010822510822510822;
        result[1] += 0.9393939393939394;
        result[2] += 0;
        result[3] += 0.015151515151515152;
        result[4] += 0.03463203463203463;
        result[5] += 0;
      } else {
        result[0] += 0.6528040327662256;
        result[1] += 0.03528670447385003;
        result[2] += 0.034026465028355386;
        result[3] += 0.06742281033396345;
        result[4] += 0.10270951480781348;
        result[5] += 0.10775047258979206;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
        result[0] += 0.03614457831325301;
        result[1] += 0.03614457831325301;
        result[2] += 0.20180722891566266;
        result[3] += 0.4006024096385542;
        result[4] += 0.03614457831325301;
        result[5] += 0.2891566265060241;
      } else {
        result[0] += 0.1483050847457627;
        result[1] += 0;
        result[2] += 0.6567796610169492;
        result[3] += 0.17372881355932204;
        result[4] += 0.00423728813559322;
        result[5] += 0.01694915254237288;
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
        result[0] += 0.0013513513513513514;
        result[1] += 0;
        result[2] += 0.9432432432432433;
        result[3] += 0.052702702702702706;
        result[4] += 0;
        result[5] += 0.002702702702702703;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        result[0] += 0.020080321285140562;
        result[1] += 0.012048192771084338;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8835341365461847;
        result[5] += 0.08433734939759036;
      } else {
        result[0] += 0.036613272311212815;
        result[1] += 0.02822273073989321;
        result[2] += 0.02745995423340961;
        result[3] += 0.13424866514111367;
        result[4] += 0.05110602593440122;
        result[5] += 0.7223493516399695;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        result[0] += 0.007462686567164179;
        result[1] += 0.8041044776119403;
        result[2] += 0;
        result[3] += 0.027985074626865673;
        result[4] += 0.15111940298507462;
        result[5] += 0.009328358208955223;
      } else {
        result[0] += 0.7276933245208196;
        result[1] += 0.021810971579643092;
        result[2] += 0.0495703899537343;
        result[3] += 0.058823529411764705;
        result[4] += 0.08856576338400529;
        result[5] += 0.053536021150033045;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)72.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.21621621621621623;
        result[4] += 0.16216216216216217;
        result[5] += 0.6216216216216216;
      } else {
        result[0] += 0.004524886877828056;
        result[1] += 0;
        result[2] += 0.39366515837104077;
        result[3] += 0.4570135746606335;
        result[4] += 0.0407239819004525;
        result[5] += 0.10407239819004527;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
        result[0] += 0.015384615384615385;
        result[1] += 0;
        result[2] += 0.4;
        result[3] += 0.1076923076923077;
        result[4] += 0.09230769230769231;
        result[5] += 0.38461538461538464;
      } else {
        result[0] += 0.008168028004667444;
        result[1] += 0;
        result[2] += 0.9206534422403734;
        result[3] += 0.059509918319719954;
        result[4] += 0.0011668611435239206;
        result[5] += 0.010501750291715286;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
        result[0] += 0.1956521739130435;
        result[1] += 0.00966183574879227;
        result[2] += 0;
        result[3] += 0.014492753623188406;
        result[4] += 0.6932367149758454;
        result[5] += 0.08695652173913043;
      } else {
        result[0] += 0.005703422053231939;
        result[1] += 0.0028517110266159697;
        result[2] += 0.0038022813688212928;
        result[3] += 0.058935361216730035;
        result[4] += 0.1188212927756654;
        result[5] += 0.8098859315589354;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)56.5) ) ) {
        result[0] += 0.011037527593818985;
        result[1] += 0.9757174392935982;
        result[2] += 0;
        result[3] += 0.002207505518763797;
        result[4] += 0.011037527593818985;
        result[5] += 0;
      } else {
        result[0] += 0.6148367952522256;
        result[1] += 0.03382789317507418;
        result[2] += 0.060534124629080116;
        result[3] += 0.12759643916913946;
        result[4] += 0.06943620178041543;
        result[5] += 0.09376854599406528;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)74.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.06382978723404255;
        result[4] += 0.10638297872340426;
        result[5] += 0.8297872340425532;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.216;
        result[3] += 0.576;
        result[4] += 0.008;
        result[5] += 0.2;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
        result[0] += 0.11764705882352941;
        result[1] += 0.058823529411764705;
        result[2] += 0.09803921568627451;
        result[3] += 0.11764705882352941;
        result[4] += 0.35294117647058826;
        result[5] += 0.2549019607843137;
      } else {
        result[0] += 0.006006006006006006;
        result[1] += 0;
        result[2] += 0.9029029029029029;
        result[3] += 0.07207207207207207;
        result[4] += 0.004004004004004004;
        result[5] += 0.015015015015015015;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
        result[0] += 0.009389671361502348;
        result[1] += 0.11502347417840375;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.812206572769953;
        result[5] += 0.06338028169014084;
      } else {
        result[0] += 0;
        result[1] += 0.954954954954955;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.04504504504504504;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
        result[0] += 0.02622673434856176;
        result[1] += 0.010998307952622674;
        result[2] += 0.01015228426395939;
        result[3] += 0.1455160744500846;
        result[4] += 0.02622673434856176;
        result[5] += 0.7808798646362098;
      } else {
        result[0] += 0.6269610691458454;
        result[1] += 0.014526438117373617;
        result[2] += 0.07379430563625798;
        result[3] += 0.11156304474142938;
        result[4] += 0.0766995932597327;
        result[5] += 0.09645554909936081;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0.06578947368421052;
        result[2] += 0.09210526315789473;
        result[3] += 0.27631578947368424;
        result[4] += 0.07894736842105263;
        result[5] += 0.4868421052631579;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.638888888888889;
        result[3] += 0.3194444444444445;
        result[4] += 0;
        result[5] += 0.04166666666666667;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.675;
        result[3] += 0.3;
        result[4] += 0;
        result[5] += 0.025;
      } else {
        result[0] += 0.0048484848484848485;
        result[1] += 0;
        result[2] += 0.9454545454545454;
        result[3] += 0.041212121212121214;
        result[4] += 0;
        result[5] += 0.008484848484848486;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        result[0] += 0.006872852233676976;
        result[1] += 0.030927835051546393;
        result[2] += 0;
        result[3] += 0.01718213058419244;
        result[4] += 0.9072164948453608;
        result[5] += 0.037800687285223365;
      } else {
        result[0] += 0.08432776451869531;
        result[1] += 0.014319809069212411;
        result[2] += 0.0031821797931583136;
        result[3] += 0.07716785998408911;
        result[4] += 0.07000795544948289;
        result[5] += 0.750994431185362;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)103.5) ) ) {
        result[0] += 0.5532381997804611;
        result[1] += 0.05982436882546652;
        result[2] += 0.05543358946212953;
        result[3] += 0.14818880351262348;
        result[4] += 0.09001097694840834;
        result[5] += 0.09330406147091108;
      } else {
        result[0] += 0.0225;
        result[1] += 0.9625;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.015;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)65) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.10526315789473684;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.8947368421052632;
      } else {
        result[0] += 0;
        result[1] += 0.010869565217391304;
        result[2] += 0.391304347826087;
        result[3] += 0.391304347826087;
        result[4] += 0.010869565217391304;
        result[5] += 0.1956521739130435;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        result[0] += 0.016666666666666666;
        result[1] += 0.004166666666666667;
        result[2] += 0.7041666666666667;
        result[3] += 0.20833333333333334;
        result[4] += 0.008333333333333333;
        result[5] += 0.058333333333333334;
      } else {
        result[0] += 0.0028368794326241137;
        result[1] += 0.0014184397163120568;
        result[2] += 0.9546099290780142;
        result[3] += 0.031205673758865248;
        result[4] += 0;
        result[5] += 0.009929078014184398;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        result[0] += 0.17777777777777778;
        result[1] += 0.015555555555555555;
        result[2] += 0;
        result[3] += 0.008888888888888889;
        result[4] += 0.6911111111111111;
        result[5] += 0.10666666666666667;
      } else {
        result[0] += 0.0009066183136899365;
        result[1] += 0.005439709882139619;
        result[2] += 0.0027198549410698096;
        result[3] += 0.0643699002719855;
        result[4] += 0.06346328195829556;
        result[5] += 0.8631006346328196;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        result[0] += 0.0069605568445475635;
        result[1] += 0.988399071925754;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.004640371229698376;
        result[5] += 0;
      } else {
        result[0] += 0.6044821320411872;
        result[1] += 0.03634161114476075;
        result[2] += 0.043609933373712904;
        result[3] += 0.13688673531193216;
        result[4] += 0.08176862507571168;
        result[5] += 0.09691096305269534;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)91.5) ) ) {
        result[0] += 0.01818181818181818;
        result[1] += 0.07272727272727272;
        result[2] += 0.06363636363636363;
        result[3] += 0.39090909090909093;
        result[4] += 0.08181818181818182;
        result[5] += 0.37272727272727274;
      } else {
        result[0] += 0.008403361344537815;
        result[1] += 0.008403361344537815;
        result[2] += 0.4957983193277311;
        result[3] += 0.3277310924369748;
        result[4] += 0;
        result[5] += 0.15966386554621848;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
        result[0] += 0.023758099352051837;
        result[1] += 0;
        result[2] += 0.8142548596112311;
        result[3] += 0.15334773218142547;
        result[4] += 0;
        result[5] += 0.008639308855291577;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9779559118236473;
        result[3] += 0.018036072144288578;
        result[4] += 0;
        result[5] += 0.004008016032064128;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.015432098765432098;
        result[1] += 0.033950617283950615;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8580246913580247;
        result[5] += 0.09259259259259259;
      } else {
        result[0] += 0.03397683397683398;
        result[1] += 0.006177606177606178;
        result[2] += 0.015444015444015444;
        result[3] += 0.1498069498069498;
        result[4] += 0.040154440154440155;
        result[5] += 0.7544401544401544;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6790757381258022;
        result[1] += 0.05712451861360718;
        result[2] += 0.02439024390243902;
        result[3] += 0.05519897304236199;
        result[4] += 0.12451861360718867;
        result[5] += 0.059691912708600754;
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
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)83.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0.011299435028248588;
        result[2] += 0.1694915254237288;
        result[3] += 0.5536723163841808;
        result[4] += 0;
        result[5] += 0.2655367231638418;
      } else {
        result[0] += 0.043650793650793655;
        result[1] += 0.02777777777777778;
        result[2] += 0.5714285714285715;
        result[3] += 0.13888888888888892;
        result[4] += 0.03174603174603175;
        result[5] += 0.18650793650793654;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6982758620689655;
        result[3] += 0.23275862068965517;
        result[4] += 0;
        result[5] += 0.06896551724137931;
      } else {
        result[0] += 0.006944444444444445;
        result[1] += 0;
        result[2] += 0.9486111111111112;
        result[3] += 0.037500000000000006;
        result[4] += 0;
        result[5] += 0.006944444444444445;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        result[0] += 0.15721649484536082;
        result[1] += 0.002577319587628866;
        result[2] += 0;
        result[3] += 0.005154639175257732;
        result[4] += 0.6907216494845361;
        result[5] += 0.14432989690721648;
      } else {
        result[0] += 0.003457216940363008;
        result[1] += 0.020743301642178046;
        result[2] += 0.0025929127052722557;
        result[3] += 0.17545375972342264;
        result[4] += 0.04235090751944685;
        result[5] += 0.7554019014693172;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        result[0] += 0.630071599045346;
        result[1] += 0.053102625298329355;
        result[2] += 0.046539379474940336;
        result[3] += 0.06205250596658711;
        result[4] += 0.12291169451073986;
        result[5] += 0.08532219570405727;
      } else {
        result[0] += 0.0024813895781637717;
        result[1] += 0.9975186104218362;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0.03125;
        result[1] += 0.057291666666666664;
        result[2] += 0.13541666666666666;
        result[3] += 0.4270833333333333;
        result[4] += 0.026041666666666668;
        result[5] += 0.3229166666666667;
      } else {
        result[0] += 0.1634615384615385;
        result[1] += 0;
        result[2] += 0.6634615384615385;
        result[3] += 0.1634615384615385;
        result[4] += 0;
        result[5] += 0.009615384615384618;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)101) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7692307692307693;
        result[3] += 0.20361990950226244;
        result[4] += 0;
        result[5] += 0.027149321266968326;
      } else {
        result[0] += 0.005839416058394161;
        result[1] += 0;
        result[2] += 0.9547445255474454;
        result[3] += 0.03649635036496351;
        result[4] += 0;
        result[5] += 0.0029197080291970805;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0.003717472118959108;
        result[1] += 0.02602230483271376;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9516728624535317;
        result[5] += 0.018587360594795543;
      } else {
        result[0] += 0.059927797833935016;
        result[1] += 0.002888086642599278;
        result[2] += 0.007942238267148015;
        result[3] += 0.16028880866425993;
        result[4] += 0.0555956678700361;
        result[5] += 0.7133574007220217;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        result[0] += 0.01125703564727955;
        result[1] += 0.8555347091932458;
        result[2] += 0.005628517823639775;
        result[3] += 0.005628517823639775;
        result[4] += 0.11632270168855535;
        result[5] += 0.005628517823639775;
      } else {
        result[0] += 0.688410386320456;
        result[1] += 0.0253324889170361;
        result[2] += 0.07979734008866371;
        result[3] += 0.06459784673844206;
        result[4] += 0.07219759341355288;
        result[5] += 0.06966434452184928;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)93.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0975609756097561;
        result[3] += 0.07317073170731707;
        result[4] += 0.21951219512195122;
        result[5] += 0.6097560975609756;
      } else {
        result[0] += 0.015151515151515154;
        result[1] += 0.05303030303030304;
        result[2] += 0.40151515151515155;
        result[3] += 0.40151515151515155;
        result[4] += 0.015151515151515154;
        result[5] += 0.11363636363636365;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7530120481927711;
        result[3] += 0.23493975903614459;
        result[4] += 0;
        result[5] += 0.012048192771084338;
      } else {
        result[0] += 0.009708737864077669;
        result[1] += 0;
        result[2] += 0.9486823855755895;
        result[3] += 0.04160887656033287;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.0075187969924812035;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.0037593984962406017;
        result[4] += 0.9323308270676692;
        result[5] += 0.056390977443609026;
      } else {
        result[0] += 0.026377036462373934;
        result[1] += 0.004654771140418929;
        result[2] += 0.0031031807602792862;
        result[3] += 0.15671062839410396;
        result[4] += 0.062063615205585725;
        result[5] += 0.7470907680372382;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        result[0] += 0;
        result[1] += 0.8632326820603907;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.13321492007104796;
        result[5] += 0.003552397868561279;
      } else {
        result[0] += 0.6773794808405439;
        result[1] += 0.023485784919653894;
        result[2] += 0.0815822002472188;
        result[3] += 0.07972805933250927;
        result[4] += 0.07107540173053152;
        result[5] += 0.06674907292954264;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
        result[0] += 0;
        result[1] += 0.07619047619047618;
        result[2] += 0.30476190476190473;
        result[3] += 0.27619047619047615;
        result[4] += 0.019047619047619046;
        result[5] += 0.32380952380952377;
      } else {
        result[0] += 0.009174311926605505;
        result[1] += 0.01834862385321101;
        result[2] += 0.7155963302752294;
        result[3] += 0.21100917431192662;
        result[4] += 0;
        result[5] += 0.045871559633027525;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)82.5) ) ) {
        result[0] += 0.04395604395604396;
        result[1] += 0;
        result[2] += 0.7912087912087912;
        result[3] += 0.08791208791208792;
        result[4] += 0;
        result[5] += 0.07692307692307693;
      } else {
        result[0] += 0.0012738853503184713;
        result[1] += 0;
        result[2] += 0.9630573248407643;
        result[3] += 0.034394904458598725;
        result[4] += 0;
        result[5] += 0.0012738853503184713;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        result[0] += 0.1267605633802817;
        result[1] += 0.030985915492957747;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7464788732394366;
        result[5] += 0.09577464788732394;
      } else {
        result[0] += 0.002457002457002457;
        result[1] += 0.000819000819000819;
        result[2] += 0;
        result[3] += 0.16298116298116297;
        result[4] += 0.05405405405405406;
        result[5] += 0.7796887796887797;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        result[0] += 0;
        result[1] += 0.8229755178907722;
        result[2] += 0;
        result[3] += 0.005649717514124294;
        result[4] += 0.160075329566855;
        result[5] += 0.011299435028248588;
      } else {
        result[0] += 0.6403823178016727;
        result[1] += 0.03345280764635603;
        result[2] += 0.08064516129032258;
        result[3] += 0.0991636798088411;
        result[4] += 0.07586618876941457;
        result[5] += 0.07048984468339307;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.23655913978494625;
        result[3] += 0.3655913978494624;
        result[4] += 0.010752688172043012;
        result[5] += 0.3870967741935484;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.75;
        result[3] += 0.225;
        result[4] += 0;
        result[5] += 0.025;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)80) ) ) {
        result[0] += 0.1111111111111111;
        result[1] += 0.6666666666666666;
        result[2] += 0.1111111111111111;
        result[3] += 0;
        result[4] += 0.1111111111111111;
        result[5] += 0;
      } else {
        result[0] += 0.006644518272425249;
        result[1] += 0;
        result[2] += 0.9147286821705426;
        result[3] += 0.07308970099667775;
        result[4] += 0;
        result[5] += 0.005537098560354375;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)47) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.15384615384615385;
        result[4] += 0.15384615384615385;
        result[5] += 0.6923076923076923;
      } else {
        result[0] += 0.008333333333333333;
        result[1] += 0.008333333333333333;
        result[2] += 0;
        result[3] += 0.0125;
        result[4] += 0.9333333333333333;
        result[5] += 0.0375;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
        result[0] += 0.022727272727272728;
        result[1] += 0.008522727272727272;
        result[2] += 0;
        result[3] += 0.048295454545454544;
        result[4] += 0.07007575757575757;
        result[5] += 0.8503787878787878;
      } else {
        result[0] += 0.013698630136986302;
        result[1] += 0;
        result[2] += 0.018264840182648404;
        result[3] += 0.5570776255707763;
        result[4] += 0;
        result[5] += 0.4109589041095891;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)104.5) ) ) {
        result[0] += 0.643985419198056;
        result[1] += 0.06196840826245444;
        result[2] += 0.0267314702308627;
        result[3] += 0.06622114216281896;
        result[4] += 0.1452004860267315;
        result[5] += 0.055893074119076555;
      } else {
        result[0] += 0;
        result[1] += 0.9918478260869565;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.008152173913043478;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        result[0] += 0.02830188679245283;
        result[1] += 0.025157232704402517;
        result[2] += 0.29245283018867924;
        result[3] += 0.3584905660377358;
        result[4] += 0.02830188679245283;
        result[5] += 0.2672955974842767;
      } else {
        result[0] += 0.030020703933747412;
        result[1] += 0.004140786749482402;
        result[2] += 0.8799171842650103;
        result[3] += 0.06832298136645963;
        result[4] += 0;
        result[5] += 0.017598343685300208;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.027777777777777776;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9603174603174603;
        result[5] += 0.011904761904761904;
      } else {
        result[0] += 0.04721030042918455;
        result[1] += 0.007868383404864092;
        result[2] += 0.010014306151645207;
        result[3] += 0.20243204577968527;
        result[4] += 0.06366237482117311;
        result[5] += 0.6688125894134478;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        result[0] += 0.00186219739292365;
        result[1] += 0.8491620111731844;
        result[2] += 0;
        result[3] += 0.0111731843575419;
        result[4] += 0.13221601489757914;
        result[5] += 0.00558659217877095;
      } else {
        result[0] += 0.6761904761904762;
        result[1] += 0.03936507936507937;
        result[2] += 0.05523809523809524;
        result[3] += 0.07301587301587302;
        result[4] += 0.07428571428571429;
        result[5] += 0.08190476190476191;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)82) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.2815533980582524;
        result[3] += 0.5339805825242718;
        result[4] += 0;
        result[5] += 0.18446601941747573;
      } else {
        result[0] += 0.07894736842105263;
        result[1] += 0;
        result[2] += 0.7105263157894737;
        result[3] += 0.18421052631578946;
        result[4] += 0;
        result[5] += 0.02631578947368421;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        result[0] += 0.03311258278145696;
        result[1] += 0;
        result[2] += 0.8211920529801325;
        result[3] += 0.13245033112582785;
        result[4] += 0;
        result[5] += 0.013245033112582783;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9677938808373591;
        result[3] += 0.030595813204508857;
        result[4] += 0;
        result[5] += 0.001610305958132045;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        result[0] += 0.12324929971988798;
        result[1] += 0.07563025210084034;
        result[2] += 0;
        result[3] += 0.033613445378151266;
        result[4] += 0.669467787114846;
        result[5] += 0.09803921568627452;
      } else {
        result[0] += 0.0009149130832570906;
        result[1] += 0.0054894784995425435;
        result[2] += 0.018298261665141813;
        result[3] += 0.12900274473924978;
        result[4] += 0.05489478499542543;
        result[5] += 0.7913998170173834;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
        result[0] += 0.001937984496124031;
        result[1] += 0.8197674418604651;
        result[2] += 0.003875968992248062;
        result[3] += 0;
        result[4] += 0.17054263565891473;
        result[5] += 0.003875968992248062;
      } else {
        result[0] += 0.7083862770012707;
        result[1] += 0.019695044472681066;
        result[2] += 0.02986022871664549;
        result[3] += 0.09085133418043202;
        result[4] += 0.09021601016518424;
        result[5] += 0.060991105463786534;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)92) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.05714285714285714;
        result[3] += 0.04285714285714286;
        result[4] += 0.2714285714285714;
        result[5] += 0.6285714285714286;
      } else {
        result[0] += 0.010309278350515464;
        result[1] += 0.010309278350515464;
        result[2] += 0.30412371134020616;
        result[3] += 0.520618556701031;
        result[4] += 0.010309278350515464;
        result[5] += 0.14432989690721648;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
        result[0] += 0.039473684210526314;
        result[1] += 0;
        result[2] += 0.4342105263157895;
        result[3] += 0.34210526315789475;
        result[4] += 0;
        result[5] += 0.18421052631578946;
      } else {
        result[0] += 0.009513742071881607;
        result[1] += 0;
        result[2] += 0.8879492600422833;
        result[3] += 0.08985200845665962;
        result[4] += 0.0010570824524312897;
        result[5] += 0.011627906976744186;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)60.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)71.5) ) ) {
        result[0] += 0;
        result[1] += 0.004132231404958678;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9917355371900827;
        result[5] += 0.004132231404958678;
      } else {
        result[0] += 0;
        result[1] += 0.10526315789473684;
        result[2] += 0.12280701754385964;
        result[3] += 0.22807017543859648;
        result[4] += 0.3508771929824561;
        result[5] += 0.19298245614035087;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0038860103626943004;
        result[3] += 0.025906735751295335;
        result[4] += 0.05958549222797927;
        result[5] += 0.9106217616580311;
      } else {
        result[0] += 0.12482662968099861;
        result[1] += 0.009708737864077669;
        result[2] += 0.012482662968099861;
        result[3] += 0.34951456310679613;
        result[4] += 0.09153952843273232;
        result[5] += 0.4119278779472954;
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        result[0] += 0;
        result[1] += 0.8271604938271603;
        result[2] += 0.0020576131687242796;
        result[3] += 0.0020576131687242796;
        result[4] += 0.16460905349794236;
        result[5] += 0.004115226337448559;
      } else {
        result[0] += 0.7637195121951219;
        result[1] += 0.036585365853658534;
        result[2] += 0.03353658536585366;
        result[3] += 0.06402439024390244;
        result[4] += 0.0663109756097561;
        result[5] += 0.035823170731707314;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
        result[0] += 0.11976047904191617;
        result[1] += 0.005988023952095809;
        result[2] += 0.2694610778443114;
        result[3] += 0.2215568862275449;
        result[4] += 0.1377245508982036;
        result[5] += 0.24550898203592814;
      } else {
        result[0] += 0.0018709073900841909;
        result[1] += 0;
        result[2] += 0.8662301216089804;
        result[3] += 0.11318989710009354;
        result[4] += 0.002806361085126286;
        result[5] += 0.015902712815715623;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.011583011583011582;
        result[1] += 0.007722007722007722;
        result[2] += 0.011583011583011582;
        result[3] += 0.003861003861003861;
        result[4] += 0.9227799227799228;
        result[5] += 0.04247104247104247;
      } else {
        result[0] += 0.030540328895849646;
        result[1] += 0.0023492560689115116;
        result[2] += 0.0031323414252153485;
        result[3] += 0.13469068128425998;
        result[4] += 0.0548159749412686;
        result[5] += 0.7744714173844949;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)51.5) ) ) {
        result[0] += 0.009029345372460498;
        result[1] += 0.9277652370203161;
        result[2] += 0.022573363431151246;
        result[3] += 0.0022573363431151244;
        result[4] += 0.038374717832957116;
        result[5] += 0;
      } else {
        result[0] += 0.6431463273568537;
        result[1] += 0.04106419895893581;
        result[2] += 0.06015037593984963;
        result[3] += 0.07750144592249857;
        result[4] += 0.11451706188548295;
        result[5] += 0.06362058993637942;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)105.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.26515151515151514;
        result[3] += 0.42424242424242425;
        result[4] += 0.007575757575757576;
        result[5] += 0.30303030303030304;
      } else {
        result[0] += 0;
        result[1] += 0.04046242774566474;
        result[2] += 0.7803468208092486;
        result[3] += 0.15606936416184972;
        result[4] += 0;
        result[5] += 0.023121387283236993;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
        result[0] += 0.44736842105263164;
        result[1] += 0;
        result[2] += 0.4210526315789474;
        result[3] += 0.052631578947368425;
        result[4] += 0.052631578947368425;
        result[5] += 0.026315789473684213;
      } else {
        result[0] += 0.011612903225806452;
        result[1] += 0;
        result[2] += 0.9341935483870968;
        result[3] += 0.04903225806451613;
        result[4] += 0;
        result[5] += 0.005161290322580645;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
        result[0] += 0.1718213058419244;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8041237113402062;
        result[5] += 0.024054982817869417;
      } else {
        result[0] += 0;
        result[1] += 0.004761904761904762;
        result[2] += 0.002380952380952381;
        result[3] += 0.14523809523809525;
        result[4] += 0.07301587301587302;
        result[5] += 0.7746031746031746;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        result[0] += 0.0021739130434782613;
        result[1] += 0.9630434782608697;
        result[2] += 0.008695652173913045;
        result[3] += 0;
        result[4] += 0.026086956521739132;
        result[5] += 0;
      } else {
        result[0] += 0.6274509803921569;
        result[1] += 0.052083333333333336;
        result[2] += 0.05575980392156863;
        result[3] += 0.0741421568627451;
        result[4] += 0.12683823529411764;
        result[5] += 0.06372549019607843;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
        result[0] += 0.006211180124223602;
        result[1] += 0.006211180124223602;
        result[2] += 0.14906832298136646;
        result[3] += 0.5093167701863354;
        result[4] += 0.018633540372670808;
        result[5] += 0.3105590062111801;
      } else {
        result[0] += 0.022222222222222227;
        result[1] += 0.13333333333333336;
        result[2] += 0.6666666666666667;
        result[3] += 0.04444444444444445;
        result[4] += 0;
        result[5] += 0.13333333333333336;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85.5) ) ) {
        result[0] += 0.057692307692307696;
        result[1] += 0;
        result[2] += 0.6955128205128205;
        result[3] += 0.23717948717948717;
        result[4] += 0;
        result[5] += 0.009615384615384616;
      } else {
        result[0] += 0.007518796992481203;
        result[1] += 0;
        result[2] += 0.9443609022556391;
        result[3] += 0.039097744360902256;
        result[4] += 0;
        result[5] += 0.009022556390977444;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        result[0] += 0;
        result[1] += 0.008620689655172414;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9655172413793104;
        result[5] += 0.02586206896551724;
      } else {
        result[0] += 0.42528735632183906;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.05747126436781609;
        result[4] += 0.16091954022988506;
        result[5] += 0.3563218390804598;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.02435723951285521;
        result[4] += 0.05006765899864682;
        result[5] += 0.925575101488498;
      } else {
        result[0] += 0.011135857461024499;
        result[1] += 0.0200445434298441;
        result[2] += 0.011135857461024499;
        result[3] += 0.35634743875278396;
        result[4] += 0.0556792873051225;
        result[5] += 0.5456570155902004;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        result[0] += 0.005253940455341506;
        result[1] += 0.830122591943958;
        result[2] += 0;
        result[3] += 0.0070052539404553416;
        result[4] += 0.15411558669001751;
        result[5] += 0.0035026269702276708;
      } else {
        result[0] += 0.7266091572660917;
        result[1] += 0.021897810218978107;
        result[2] += 0.023888520238885207;
        result[3] += 0.08626410086264102;
        result[4] += 0.06901128069011282;
        result[5] += 0.07232913072329132;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
        result[0] += 0.04878048780487805;
        result[1] += 0.027439024390243903;
        result[2] += 0.4329268292682927;
        result[3] += 0.3048780487804878;
        result[4] += 0.039634146341463415;
        result[5] += 0.14634146341463414;
      } else {
        result[0] += 0.0054764512595837905;
        result[1] += 0;
        result[2] += 0.9047097480832421;
        result[3] += 0.0733844468784228;
        result[4] += 0;
        result[5] += 0.016429353778751373;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
        result[0] += 0.0032258064516129032;
        result[1] += 0.02903225806451613;
        result[2] += 0;
        result[3] += 0.01935483870967742;
        result[4] += 0.8516129032258064;
        result[5] += 0.0967741935483871;
      } else {
        result[0] += 0.04244897959183674;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.12653061224489795;
        result[4] += 0.04653061224489796;
        result[5] += 0.7844897959183673;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        result[0] += 0.0017699115044247787;
        result[1] += 0.7787610619469026;
        result[2] += 0.010619469026548672;
        result[3] += 0.012389380530973451;
        result[4] += 0.18230088495575222;
        result[5] += 0.01415929203539823;
      } else {
        result[0] += 0.7194092827004219;
        result[1] += 0.026722925457102673;
        result[2] += 0.04149085794655415;
        result[3] += 0.07454289732770746;
        result[4] += 0.08368495077355836;
        result[5] += 0.05414908579465542;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
        result[0] += 0;
        result[1] += 0.08021390374331551;
        result[2] += 0.0748663101604278;
        result[3] += 0.3582887700534759;
        result[4] += 0.0213903743315508;
        result[5] += 0.46524064171123;
      } else {
        result[0] += 0;
        result[1] += 0.00625;
        result[2] += 0.51875;
        result[3] += 0.35625;
        result[4] += 0;
        result[5] += 0.11875;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)74.5) ) ) {
        result[0] += 0.36619718309859156;
        result[1] += 0.04225352112676056;
        result[2] += 0.5070422535211268;
        result[3] += 0.028169014084507043;
        result[4] += 0.056338028169014086;
        result[5] += 0;
      } else {
        result[0] += 0.002257336343115124;
        result[1] += 0.002257336343115124;
        result[2] += 0.9164785553047404;
        result[3] += 0.062076749435665914;
        result[4] += 0.003386004514672686;
        result[5] += 0.013544018058690745;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.006968641114982578;
        result[1] += 0.017421602787456445;
        result[2] += 0.027874564459930314;
        result[3] += 0;
        result[4] += 0.9128919860627178;
        result[5] += 0.03484320557491289;
      } else {
        result[0] += 0.03330689928628073;
        result[1] += 0.008723235527359239;
        result[2] += 0.011102299762093577;
        result[3] += 0.1514670896114195;
        result[4] += 0.045995241871530534;
        result[5] += 0.7494052339413164;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        result[0] += 0.004796163069544364;
        result[1] += 0.9616306954436451;
        result[2] += 0;
        result[3] += 0.002398081534772182;
        result[4] += 0.03117505995203837;
        result[5] += 0;
      } else {
        result[0] += 0.6184137548530227;
        result[1] += 0.040488075429839156;
        result[2] += 0.056017748197448695;
        result[3] += 0.09151414309484193;
        result[4] += 0.11591791458679977;
        result[5] += 0.0776483638380477;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
        result[0] += 0;
        result[1] += 0.13333333333333333;
        result[2] += 0.044444444444444446;
        result[3] += 0.08888888888888889;
        result[4] += 0.06666666666666667;
        result[5] += 0.6666666666666666;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.4666666666666667;
        result[3] += 0.4;
        result[4] += 0.044444444444444446;
        result[5] += 0.08888888888888889;
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7194719471947195;
        result[3] += 0.2376237623762376;
        result[4] += 0;
        result[5] += 0.0429042904290429;
      } else {
        result[0] += 0.004511278195488722;
        result[1] += 0;
        result[2] += 0.9654135338345865;
        result[3] += 0.02406015037593985;
        result[4] += 0;
        result[5] += 0.006015037593984963;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.09688581314878893;
        result[2] += 0.006920415224913495;
        result[3] += 0.006920415224913495;
        result[4] += 0.8685121107266436;
        result[5] += 0.020761245674740483;
      } else {
        result[0] += 0.05401234567901234;
        result[1] += 0.0038580246913580245;
        result[2] += 0.012345679012345678;
        result[3] += 0.14660493827160495;
        result[4] += 0.07330246913580248;
        result[5] += 0.7098765432098766;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)56.5) ) ) {
        result[0] += 0;
        result[1] += 0.9159663865546218;
        result[2] += 0;
        result[3] += 0.0021008403361344537;
        result[4] += 0.0819327731092437;
        result[5] += 0;
      } else {
        result[0] += 0.7408177408177408;
        result[1] += 0.02772002772002772;
        result[2] += 0.02564102564102564;
        result[3] += 0.05474705474705475;
        result[4] += 0.088011088011088;
        result[5] += 0.06306306306306306;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)84.5) ) ) {
        result[0] += 0;
        result[1] += 0.0375;
        result[2] += 0.0625;
        result[3] += 0.2;
        result[4] += 0.0625;
        result[5] += 0.6375;
      } else {
        result[0] += 0.03278688524590164;
        result[1] += 0;
        result[2] += 0.18032786885245902;
        result[3] += 0.6229508196721312;
        result[4] += 0;
        result[5] += 0.16393442622950818;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)82.5) ) ) {
        result[0] += 0.12547528517110268;
        result[1] += 0.015209125475285173;
        result[2] += 0.5551330798479088;
        result[3] += 0.1711026615969582;
        result[4] += 0.007604562737642586;
        result[5] += 0.12547528517110268;
      } else {
        result[0] += 0.0011668611435239206;
        result[1] += 0;
        result[2] += 0.9288214702450408;
        result[3] += 0.06884480746791131;
        result[4] += 0;
        result[5] += 0.0011668611435239206;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        result[0] += 0.003663003663003663;
        result[1] += 0.018315018315018316;
        result[2] += 0.02197802197802198;
        result[3] += 0.02197802197802198;
        result[4] += 0.8754578754578755;
        result[5] += 0.05860805860805861;
      } else {
        result[0] += 0.022670025188916875;
        result[1] += 0.007556675062972292;
        result[2] += 0.005877413937867338;
        result[3] += 0.11502938706968933;
        result[4] += 0.052057094878253565;
        result[5] += 0.7968094038623006;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)66.5) ) ) {
        result[0] += 0.018835616438356163;
        result[1] += 0.785958904109589;
        result[2] += 0;
        result[3] += 0.005136986301369863;
        result[4] += 0.1797945205479452;
        result[5] += 0.010273972602739725;
      } else {
        result[0] += 0.7154046997389034;
        result[1] += 0.03524804177545692;
        result[2] += 0.03590078328981723;
        result[3] += 0.0731070496083551;
        result[4] += 0.06331592689295039;
        result[5] += 0.07702349869451697;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
        result[0] += 0;
        result[1] += 0.005813953488372093;
        result[2] += 0.06395348837209303;
        result[3] += 0.436046511627907;
        result[4] += 0.09883720930232558;
        result[5] += 0.3953488372093023;
      } else {
        result[0] += 0.016042780748663107;
        result[1] += 0.016042780748663107;
        result[2] += 0.5240641711229947;
        result[3] += 0.36898395721925137;
        result[4] += 0;
        result[5] += 0.07486631016042782;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
        result[0] += 0.175;
        result[1] += 0.025;
        result[2] += 0.5375;
        result[3] += 0.0625;
        result[4] += 0.05;
        result[5] += 0.15;
      } else {
        result[0] += 0.0012391573729863693;
        result[1] += 0;
        result[2] += 0.9355638166047088;
        result[3] += 0.05452292441140025;
        result[4] += 0;
        result[5] += 0.008674101610904586;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
        result[0] += 0.12890625;
        result[1] += 0.0703125;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.734375;
        result[5] += 0.06640625;
      } else {
        result[0] += 0;
        result[1] += 0.01918047079337402;
        result[2] += 0.01918047079337402;
        result[3] += 0.15867480383609417;
        result[4] += 0.05579773321708806;
        result[5] += 0.7471665213600698;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        result[0] += 0.0018214936247723133;
        result[1] += 0.75591985428051;
        result[2] += 0;
        result[3] += 0.012750455373406194;
        result[4] += 0.22404371584699453;
        result[5] += 0.00546448087431694;
      } else {
        result[0] += 0.7115869017632241;
        result[1] += 0.02959697732997481;
        result[2] += 0.034634760705289674;
        result[3] += 0.06675062972292191;
        result[4] += 0.06234256926952141;
        result[5] += 0.095088161209068;
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)94.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)100.5) ) ) {
        result[0] += 0.017857142857142856;
        result[1] += 0.008928571428571428;
        result[2] += 0.03571428571428571;
        result[3] += 0.6875;
        result[4] += 0;
        result[5] += 0.25;
      } else {
        result[0] += 0.02298850574712644;
        result[1] += 0;
        result[2] += 0.4310344827586207;
        result[3] += 0.16666666666666669;
        result[4] += 0.13218390804597704;
        result[5] += 0.24712643678160923;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6887966804979253;
        result[3] += 0.23236514522821577;
        result[4] += 0;
        result[5] += 0.07883817427385892;
      } else {
        result[0] += 0.014492753623188408;
        result[1] += 0;
        result[2] += 0.9288537549407115;
        result[3] += 0.047430830039525695;
        result[4] += 0;
        result[5] += 0.009222661396574442;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
        result[0] += 0.14785992217898833;
        result[1] += 0.0038910505836575876;
        result[2] += 0.01556420233463035;
        result[3] += 0;
        result[4] += 0.7431906614785992;
        result[5] += 0.08949416342412451;
      } else {
        result[0] += 0;
        result[1] += 0.000819000819000819;
        result[2] += 0;
        result[3] += 0.15315315315315314;
        result[4] += 0.07452907452907453;
        result[5] += 0.7714987714987716;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)59.5) ) ) {
        result[0] += 0;
        result[1] += 0.890909090909091;
        result[2] += 0;
        result[3] += 0.012121212121212123;
        result[4] += 0.09696969696969698;
        result[5] += 0;
      } else {
        result[0] += 0.6846573681018799;
        result[1] += 0.041237113402061855;
        result[2] += 0.04790782292298363;
        result[3] += 0.08550636749545179;
        result[4] += 0.08004851425106124;
        result[5] += 0.06064281382656155;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)89.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.12;
        result[3] += 0;
        result[4] += 0.08;
        result[5] += 0.8;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.16470588235294117;
        result[3] += 0.49411764705882355;
        result[4] += 0;
        result[5] += 0.3411764705882353;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
        result[0] += 0.024691358024691357;
        result[1] += 0.012345679012345678;
        result[2] += 0.6234567901234568;
        result[3] += 0.24691358024691357;
        result[4] += 0.024691358024691357;
        result[5] += 0.06790123456790123;
      } else {
        result[0] += 0.0010729613733905577;
        result[1] += 0.0010729613733905577;
        result[2] += 0.9356223175965663;
        result[3] += 0.054721030042918443;
        result[4] += 0;
        result[5] += 0.007510729613733904;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)59.5) ) ) {
        result[0] += 0.1346938775510204;
        result[1] += 0.004081632653061225;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8122448979591836;
        result[5] += 0.04897959183673469;
      } else {
        result[0] += 0.0014970059880239522;
        result[1] += 0.005988023952095809;
        result[2] += 0.005239520958083832;
        result[3] += 0.156437125748503;
        result[4] += 0.08907185628742514;
        result[5] += 0.7417664670658682;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        result[0] += 0.007339449541284404;
        result[1] += 0.8311926605504587;
        result[2] += 0.001834862385321101;
        result[3] += 0.005504587155963303;
        result[4] += 0.15045871559633028;
        result[5] += 0.003669724770642202;
      } else {
        result[0] += 0.6844951923076923;
        result[1] += 0.03365384615384615;
        result[2] += 0.046274038461538464;
        result[3] += 0.09134615384615384;
        result[4] += 0.07271634615384616;
        result[5] += 0.07151442307692307;
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)77) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.14814814814814814;
        result[3] += 0.5925925925925926;
        result[4] += 0;
        result[5] += 0.25925925925925924;
      } else {
        result[0] += 0.02158273381294964;
        result[1] += 0;
        result[2] += 0.6690647482014388;
        result[3] += 0.2805755395683453;
        result[4] += 0;
        result[5] += 0.02877697841726619;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)85.5) ) ) {
        result[0] += 0.012396694214876033;
        result[1] += 0;
        result[2] += 0.8223140495867769;
        result[3] += 0.1487603305785124;
        result[4] += 0;
        result[5] += 0.01652892561983471;
      } else {
        result[0] += 0.008319467554076539;
        result[1] += 0;
        result[2] += 0.9534109816971714;
        result[3] += 0.024958402662229616;
        result[4] += 0;
        result[5] += 0.013311148086522463;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.013937282229965157;
        result[2] += 0.003484320557491289;
        result[3] += 0.003484320557491289;
        result[4] += 0.9407665505226481;
        result[5] += 0.03832752613240418;
      } else {
        result[0] += 0.0804780876494024;
        result[1] += 0.007171314741035857;
        result[2] += 0;
        result[3] += 0.0796812749003984;
        result[4] += 0.08207171314741035;
        result[5] += 0.750597609561753;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)59.5) ) ) {
        result[0] += 0;
        result[1] += 0.9409368635437882;
        result[2] += 0;
        result[3] += 0.004073319755600815;
        result[4] += 0.04887983706720978;
        result[5] += 0.006109979633401223;
      } else {
        result[0] += 0.6517913262099309;
        result[1] += 0.035826524198617225;
        result[2] += 0.05845380263984915;
        result[3] += 0.11125078566939033;
        result[4] += 0.0666247642991829;
        result[5] += 0.07605279698302954;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
        result[0] += 0;
        result[1] += 0.024096385542168676;
        result[2] += 0.0963855421686747;
        result[3] += 0.5060240963855421;
        result[4] += 0.03614457831325301;
        result[5] += 0.3373493975903614;
      } else {
        result[0] += 0.15625;
        result[1] += 0.015625;
        result[2] += 0.046875;
        result[3] += 0.046875;
        result[4] += 0.234375;
        result[5] += 0.5;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        result[0] += 0.008264462809917356;
        result[1] += 0;
        result[2] += 0.6446280991735537;
        result[3] += 0.26721763085399447;
        result[4] += 0.0027548209366391185;
        result[5] += 0.07713498622589532;
      } else {
        result[0] += 0.001445086705202312;
        result[1] += 0;
        result[2] += 0.9378612716763006;
        result[3] += 0.05346820809248555;
        result[4] += 0;
        result[5] += 0.0072254335260115606;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        result[0] += 0.13019390581717452;
        result[1] += 0.0332409972299169;
        result[2] += 0;
        result[3] += 0.0221606648199446;
        result[4] += 0.7008310249307479;
        result[5] += 0.11357340720221606;
      } else {
        result[0] += 0.004962779156327543;
        result[1] += 0.0024813895781637717;
        result[2] += 0;
        result[3] += 0.16294458229942102;
        result[4] += 0.045492142266335814;
        result[5] += 0.7841191066997518;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)51.5) ) ) {
        result[0] += 0.007228915662650603;
        result[1] += 0.963855421686747;
        result[2] += 0;
        result[3] += 0.004819277108433735;
        result[4] += 0.024096385542168676;
        result[5] += 0;
      } else {
        result[0] += 0.6089601769911503;
        result[1] += 0.04369469026548672;
        result[2] += 0.07245575221238937;
        result[3] += 0.09347345132743362;
        result[4] += 0.11172566371681412;
        result[5] += 0.06969026548672565;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
        result[0] += 0.03846153846153847;
        result[1] += 0.1153846153846154;
        result[2] += 0.13461538461538464;
        result[3] += 0.13461538461538464;
        result[4] += 0;
        result[5] += 0.576923076923077;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5217391304347826;
        result[3] += 0.15217391304347827;
        result[4] += 0.10869565217391304;
        result[5] += 0.21739130434782608;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
        result[0] += 0.009090909090909092;
        result[1] += 0;
        result[2] += 0.787878787878788;
        result[3] += 0.17575757575757578;
        result[4] += 0;
        result[5] += 0.027272727272727275;
      } else {
        result[0] += 0.001652892561983471;
        result[1] += 0;
        result[2] += 0.9669421487603306;
        result[3] += 0.024793388429752067;
        result[4] += 0;
        result[5] += 0.006611570247933884;
      }
    }
  }
  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.023364485981308414;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.97196261682243;
        result[5] += 0.004672897196261683;
      } else {
        result[0] += 0;
        result[1] += 0.0375;
        result[2] += 0;
        result[3] += 0.1;
        result[4] += 0.625;
        result[5] += 0.2375;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
        result[0] += 0.8163265306122449;
        result[1] += 0.01020408163265306;
        result[2] += 0.01020408163265306;
        result[3] += 0;
        result[4] += 0.16326530612244897;
        result[5] += 0;
      } else {
        result[0] += 0.011054421768707483;
        result[1] += 0.005952380952380952;
        result[2] += 0.003401360544217687;
        result[3] += 0.08928571428571429;
        result[4] += 0.08673469387755102;
        result[5] += 0.8035714285714286;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)56.5) ) ) {
        result[0] += 0.008791208791208791;
        result[1] += 0.9846153846153847;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.006593406593406593;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.36;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.64;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)74.5) ) ) {
        result[0] += 0.757477768795473;
        result[1] += 0.04203718674211804;
        result[2] += 0.008892481810832662;
        result[3] += 0.051738075990299115;
        result[4] += 0.07356507679870657;
        result[5] += 0.06628940986257074;
      } else {
        result[0] += 0.05191434133679429;
        result[1] += 0.003244646333549643;
        result[2] += 0.6521739130434783;
        result[3] += 0.19597663854639844;
        result[4] += 0.006489292667099286;
        result[5] += 0.09020116807268008;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.06415094339622641;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9132075471698113;
        result[5] += 0.022641509433962263;
      } else {
        result[0] += 0.028546712802768166;
        result[1] += 0.007785467128027681;
        result[2] += 0.014705882352941176;
        result[3] += 0.1444636678200692;
        result[4] += 0.0657439446366782;
        result[5] += 0.7387543252595156;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)59.5) ) ) {
        result[0] += 0.002212389380530974;
        result[1] += 0.8716814159292037;
        result[2] += 0.002212389380530974;
        result[3] += 0.004424778761061948;
        result[4] += 0.11946902654867259;
        result[5] += 0;
      } else {
        result[0] += 0.6526806526806527;
        result[1] += 0.04895104895104895;
        result[2] += 0.041375291375291376;
        result[3] += 0.08391608391608392;
        result[4] += 0.07342657342657342;
        result[5] += 0.09965034965034965;
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
        result[0] += 0;
        result[1] += 0.012195121951219513;
        result[2] += 0.07926829268292683;
        result[3] += 0.45121951219512196;
        result[4] += 0.10365853658536585;
        result[5] += 0.35365853658536583;
      } else {
        result[0] += 0.007751937984496124;
        result[1] += 0;
        result[2] += 0.5581395348837209;
        result[3] += 0.32558139534883723;
        result[4] += 0;
        result[5] += 0.10852713178294573;
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.125;
        result[3] += 0.125;
        result[4] += 0.041666666666666664;
        result[5] += 0.7083333333333334;
      } else {
        result[0] += 0.013043478260869566;
        result[1] += 0;
        result[2] += 0.8836956521739131;
        result[3] += 0.08260869565217392;
        result[4] += 0.008695652173913045;
        result[5] += 0.011956521739130437;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.019379844961240313;
        result[1] += 0;
        result[2] += 0.01550387596899225;
        result[3] += 0.0038759689922480624;
        result[4] += 0.9263565891472869;
        result[5] += 0.034883720930232565;
      } else {
        result[0] += 0.048652694610778445;
        result[1] += 0.002245508982035928;
        result[2] += 0.0007485029940119761;
        result[3] += 0.1474550898203593;
        result[4] += 0.06811377245508982;
        result[5] += 0.7327844311377245;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)104.5) ) ) {
        result[0] += 0.680392156862745;
        result[1] += 0.04967320261437907;
        result[2] += 0.04705882352941175;
        result[3] += 0.04836601307189541;
        result[4] += 0.126797385620915;
        result[5] += 0.04771241830065358;
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
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.12365591397849462;
        result[3] += 0.553763440860215;
        result[4] += 0.03225806451612903;
        result[5] += 0.2903225806451613;
      } else {
        result[0] += 0.08947368421052633;
        result[1] += 0.04210526315789474;
        result[2] += 0.505263157894737;
        result[3] += 0.12631578947368424;
        result[4] += 0.05789473684210527;
        result[5] += 0.17894736842105266;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        result[0] += 0.04477611940298507;
        result[1] += 0;
        result[2] += 0.4626865671641791;
        result[3] += 0.4626865671641791;
        result[4] += 0;
        result[5] += 0.029850746268656716;
      } else {
        result[0] += 0.0012269938650306751;
        result[1] += 0;
        result[2] += 0.9325153374233129;
        result[3] += 0.06134969325153375;
        result[4] += 0;
        result[5] += 0.0049079754601227005;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9876543209876543;
        result[5] += 0.012345679012345678;
      } else {
        result[0] += 0.11538461538461539;
        result[1] += 0.038461538461538464;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.6923076923076923;
        result[5] += 0.15384615384615385;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.002702702702702703;
        result[3] += 0.02837837837837838;
        result[4] += 0.0445945945945946;
        result[5] += 0.9243243243243243;
      } else {
        result[0] += 0.1325811001410437;
        result[1] += 0.011283497884344146;
        result[2] += 0.014104372355430184;
        result[3] += 0.32581100141043723;
        result[4] += 0.076163610719323;
        result[5] += 0.4400564174894217;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        result[0] += 0.003683241252302026;
        result[1] += 0.8710865561694291;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.12154696132596685;
        result[5] += 0.003683241252302026;
      } else {
        result[0] += 0.7838270616493196;
        result[1] += 0.026421136909527625;
        result[2] += 0.028022417934347482;
        result[3] += 0.0456365092073659;
        result[4] += 0.06645316253002403;
        result[5] += 0.04963971176941554;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        result[0] += 0.036290322580645164;
        result[1] += 0.008064516129032258;
        result[2] += 0.3951612903225806;
        result[3] += 0.3790322580645161;
        result[4] += 0.024193548387096774;
        result[5] += 0.15725806451612903;
      } else {
        result[0] += 0.030710172744721688;
        result[1] += 0.005758157389635317;
        result[2] += 0.8694817658349329;
        result[3] += 0.08349328214971209;
        result[4] += 0;
        result[5] += 0.01055662188099808;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)97.5) ) ) {
        result[0] += 0;
        result[1] += 0.011857707509881422;
        result[2] += 0;
        result[3] += 0.003952569169960474;
        result[4] += 0.9565217391304348;
        result[5] += 0.02766798418972332;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)67.5) ) ) {
        result[0] += 0.0033370411568409346;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.05561735261401557;
        result[4] += 0.04338153503893215;
        result[5] += 0.8976640711902113;
      } else {
        result[0] += 0.10881801125703565;
        result[1] += 0.01125703564727955;
        result[2] += 0.0225140712945591;
        result[3] += 0.34146341463414637;
        result[4] += 0.10881801125703565;
        result[5] += 0.4071294559099437;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
        result[0] += 0.012411347517730497;
        result[1] += 0.8031914893617021;
        result[2] += 0;
        result[3] += 0.0017730496453900709;
        result[4] += 0.18262411347517732;
        result[5] += 0;
      } else {
        result[0] += 0.7891566265060241;
        result[1] += 0.018072289156626505;
        result[2] += 0.03313253012048193;
        result[3] += 0.06325301204819277;
        result[4] += 0.050451807228915665;
        result[5] += 0.04593373493975904;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        result[0] += 0.0045871559633027525;
        result[1] += 0.0045871559633027525;
        result[2] += 0.41284403669724773;
        result[3] += 0.38073394495412843;
        result[4] += 0.0045871559633027525;
        result[5] += 0.1926605504587156;
      } else {
        result[0] += 0.03804878048780488;
        result[1] += 0.007804878048780488;
        result[2] += 0.8624390243902439;
        result[3] += 0.0702439024390244;
        result[4] += 0.004878048780487805;
        result[5] += 0.016585365853658537;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
        result[0] += 0.007692307692307693;
        result[1] += 0.023076923076923078;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8653846153846154;
        result[5] += 0.10384615384615385;
      } else {
        result[0] += 0.03025347506132461;
        result[1] += 0.025347506132461162;
        result[2] += 0.027800490596892886;
        result[3] += 0.17089125102207686;
        result[4] += 0.03515944399018806;
        result[5] += 0.7105478331970564;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)103.5) ) ) {
        result[0] += 0.5842636895268474;
        result[1] += 0.03615098351940457;
        result[2] += 0.057947900053163214;
        result[3] += 0.09728867623604466;
        result[4] += 0.12599681020733652;
        result[5] += 0.09835194045720362;
      } else {
        result[0] += 0.0234192037470726;
        result[1] += 0.9765807962529274;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)98.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.19791666666666666;
        result[3] += 0.5104166666666666;
        result[4] += 0.020833333333333332;
        result[5] += 0.2708333333333333;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6585365853658537;
        result[3] += 0.25609756097560976;
        result[4] += 0;
        result[5] += 0.08536585365853659;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)65) ) ) {
        result[0] += 0.07407407407407408;
        result[1] += 0;
        result[2] += 0.3703703703703704;
        result[3] += 0;
        result[4] += 0.33333333333333337;
        result[5] += 0.22222222222222224;
      } else {
        result[0] += 0.008433734939759036;
        result[1] += 0.0024096385542168677;
        result[2] += 0.9204819277108434;
        result[3] += 0.05783132530120482;
        result[4] += 0;
        result[5] += 0.010843373493975903;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)95.5) ) ) {
        result[0] += 0;
        result[1] += 0.012295081967213115;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9713114754098361;
        result[5] += 0.01639344262295082;
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
        result[0] += 0.022459893048128343;
        result[1] += 0;
        result[2] += 0.0032085561497326204;
        result[3] += 0.05561497326203209;
        result[4] += 0.06096256684491978;
        result[5] += 0.8577540106951872;
      } else {
        result[0] += 0.06628242074927954;
        result[1] += 0.025936599423631124;
        result[2] += 0.04899135446685879;
        result[3] += 0.4553314121037464;
        result[4] += 0.040345821325648415;
        result[5] += 0.3631123919308357;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.8684684684684686;
        result[2] += 0.005405405405405407;
        result[3] += 0.012612612612612614;
        result[4] += 0.11171171171171172;
        result[5] += 0.001801801801801802;
      } else {
        result[0] += 0.6644213104715248;
        result[1] += 0.029393753827311696;
        result[2] += 0.0453153704837722;
        result[3] += 0.08879363135333741;
        result[4] += 0.07532149418248622;
        result[5] += 0.09675443968156766;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        result[0] += 0.047311827956989246;
        result[1] += 0.017204301075268817;
        result[2] += 0.5913978494623656;
        result[3] += 0.2903225806451613;
        result[4] += 0.01935483870967742;
        result[5] += 0.034408602150537634;
      } else {
        result[0] += 0.001564945226917058;
        result[1] += 0;
        result[2] += 0.9655712050078247;
        result[3] += 0.03129890453834116;
        result[4] += 0;
        result[5] += 0.001564945226917058;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.04597701149425287;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9386973180076629;
        result[5] += 0.01532567049808429;
      } else {
        result[0] += 0.050505050505050504;
        result[1] += 0.006493506493506494;
        result[2] += 0.001443001443001443;
        result[3] += 0.1406926406926407;
        result[4] += 0.07792207792207792;
        result[5] += 0.7229437229437229;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)104.5) ) ) {
        result[0] += 0.6596692111959288;
        result[1] += 0.07124681933842239;
        result[2] += 0.045165394402035625;
        result[3] += 0.06552162849872774;
        result[4] += 0.11132315521628498;
        result[5] += 0.047073791348600506;
      } else {
        result[0] += 0.007751937984496124;
        result[1] += 0.9922480620155039;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
        result[0] += 0;
        result[1] += 0.014925373134328358;
        result[2] += 0.05970149253731343;
        result[3] += 0.07462686567164178;
        result[4] += 0.26865671641791045;
        result[5] += 0.582089552238806;
      } else {
        result[0] += 0;
        result[1] += 0.005263157894736841;
        result[2] += 0.31052631578947365;
        result[3] += 0.5105263157894736;
        result[4] += 0.010526315789473682;
        result[5] += 0.16315789473684209;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
        result[0] += 0.08139534883720932;
        result[1] += 0;
        result[2] += 0.6569767441860466;
        result[3] += 0.17441860465116282;
        result[4] += 0.034883720930232565;
        result[5] += 0.05232558139534885;
      } else {
        result[0] += 0.0025284450063211127;
        result[1] += 0;
        result[2] += 0.9329962073324906;
        result[3] += 0.05309734513274336;
        result[4] += 0;
        result[5] += 0.011378002528445006;
      }
    }
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        result[0] += 0.014084507042253523;
        result[1] += 0.010563380281690142;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.943661971830986;
        result[5] += 0.03169014084507043;
      } else {
        result[0] += 0.4175824175824176;
        result[1] += 0.12087912087912088;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.2087912087912088;
        result[5] += 0.25274725274725274;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
        result[0] += 0;
        result[1] += 0.002364066193853428;
        result[2] += 0.004728132387706856;
        result[3] += 0.04846335697399527;
        result[4] += 0.05319148936170213;
        result[5] += 0.8912529550827423;
      } else {
        result[0] += 0.004914004914004914;
        result[1] += 0.019656019656019656;
        result[2] += 0.036855036855036855;
        result[3] += 0.44471744471744473;
        result[4] += 0.044226044226044224;
        result[5] += 0.44963144963144963;
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        result[0] += 0.02333931777378815;
        result[1] += 0.7827648114901257;
        result[2] += 0;
        result[3] += 0.03590664272890485;
        result[4] += 0.14721723518850988;
        result[5] += 0.010771992818671455;
      } else {
        result[0] += 0.7893152746425884;
        result[1] += 0.021068472535741158;
        result[2] += 0.028592927012791574;
        result[3] += 0.05342362678705794;
        result[4] += 0.07524454477050414;
        result[5] += 0.03235515425131678;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
        result[0] += 0.08201892744479496;
        result[1] += 0.01892744479495268;
        result[2] += 0.22082018927444794;
        result[3] += 0.2586750788643533;
        result[4] += 0.06624605678233439;
        result[5] += 0.35331230283911674;
      } else {
        result[0] += 0.010050251256281407;
        result[1] += 0;
        result[2] += 0.8703517587939699;
        result[3] += 0.10150753768844221;
        result[4] += 0;
        result[5] += 0.018090452261306532;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.01754385964912281;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9473684210526316;
        result[5] += 0.03508771929824562;
      } else {
        result[0] += 0.02127659574468085;
        result[1] += 0.00911854103343465;
        result[2] += 0.015197568389057751;
        result[3] += 0.15501519756838905;
        result[4] += 0.05547112462006079;
        result[5] += 0.743920972644377;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)50) ) ) {
        result[0] += 0;
        result[1] += 0.9809069212410502;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.01909307875894988;
        result[5] += 0;
      } else {
        result[0] += 0.6277777777777778;
        result[1] += 0.042222222222222223;
        result[2] += 0.05555555555555555;
        result[3] += 0.08944444444444444;
        result[4] += 0.10611111111111111;
        result[5] += 0.07888888888888888;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)99) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.057692307692307696;
        result[3] += 0.3269230769230769;
        result[4] += 0.019230769230769232;
        result[5] += 0.5961538461538461;
      } else {
        result[0] += 0.016666666666666666;
        result[1] += 0.06666666666666667;
        result[2] += 0.6333333333333333;
        result[3] += 0.08333333333333333;
        result[4] += 0.06666666666666667;
        result[5] += 0.13333333333333333;
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7431693989071039;
        result[3] += 0.20218579234972678;
        result[4] += 0;
        result[5] += 0.0546448087431694;
      } else {
        result[0] += 0.002604166666666667;
        result[1] += 0;
        result[2] += 0.9531250000000001;
        result[3] += 0.03776041666666667;
        result[4] += 0;
        result[5] += 0.006510416666666668;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        result[0] += 0.22376237623762377;
        result[1] += 0.039603960396039604;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.6336633663366337;
        result[5] += 0.10297029702970296;
      } else {
        result[0] += 0.012711864406779662;
        result[1] += 0.002542372881355932;
        result[2] += 0.003389830508474576;
        result[3] += 0.12203389830508475;
        result[4] += 0.08813559322033898;
        result[5] += 0.7711864406779662;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)56.5) ) ) {
        result[0] += 0.004705882352941176;
        result[1] += 0.9764705882352941;
        result[2] += 0.002352941176470588;
        result[3] += 0.002352941176470588;
        result[4] += 0.01411764705882353;
        result[5] += 0;
      } else {
        result[0] += 0.66158940397351;
        result[1] += 0.03377483443708609;
        result[2] += 0.048344370860927154;
        result[3] += 0.11456953642384106;
        result[4] += 0.07549668874172186;
        result[5] += 0.06622516556291391;
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)105.5) ) ) {
        result[0] += 0.020833333333333332;
        result[1] += 0.020833333333333332;
        result[2] += 0.11805555555555555;
        result[3] += 0.5277777777777778;
        result[4] += 0.041666666666666664;
        result[5] += 0.2708333333333333;
      } else {
        result[0] += 0.09523809523809523;
        result[1] += 0.047619047619047616;
        result[2] += 0.5873015873015873;
        result[3] += 0.07936507936507936;
        result[4] += 0.015873015873015872;
        result[5] += 0.1746031746031746;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5096153846153846;
        result[3] += 0.36538461538461536;
        result[4] += 0;
        result[5] += 0.125;
      } else {
        result[0] += 0.021229050279329604;
        result[1] += 0;
        result[2] += 0.8983240223463685;
        result[3] += 0.0759776536312849;
        result[4] += 0;
        result[5] += 0.0044692737430167585;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
        result[0] += 0.13448275862068965;
        result[1] += 0.02413793103448276;
        result[2] += 0.013793103448275862;
        result[3] += 0;
        result[4] += 0.8068965517241379;
        result[5] += 0.020689655172413793;
      } else {
        result[0] += 0.0016764459346186086;
        result[1] += 0.01592623637887678;
        result[2] += 0.00586756077116513;
        result[3] += 0.14836546521374686;
        result[4] += 0.07460184409052809;
        result[5] += 0.7535624476110645;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)56.5) ) ) {
        result[0] += 0;
        result[1] += 0.9052631578947369;
        result[2] += 0;
        result[3] += 0.00631578947368421;
        result[4] += 0.08842105263157894;
        result[5] += 0;
      } else {
        result[0] += 0.6697819314641744;
        result[1] += 0.04361370716510903;
        result[2] += 0.03302180685358255;
        result[3] += 0.06853582554517133;
        result[4] += 0.11152647975077881;
        result[5] += 0.0735202492211838;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)88.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.057692307692307696;
        result[3] += 0.038461538461538464;
        result[4] += 0.23076923076923078;
        result[5] += 0.6730769230769231;
      } else {
        result[0] += 0;
        result[1] += 0.014705882352941176;
        result[2] += 0.25980392156862747;
        result[3] += 0.5686274509803921;
        result[4] += 0.014705882352941176;
        result[5] += 0.14215686274509803;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.20000000000000004;
        result[4] += 0.7000000000000001;
        result[5] += 0.10000000000000002;
      } else {
        result[0] += 0.0160481444332999;
        result[1] += 0;
        result[2] += 0.9017051153460381;
        result[3] += 0.0732196589769308;
        result[4] += 0;
        result[5] += 0.009027081243731194;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        result[0] += 0.0169971671388102;
        result[1] += 0.06232294617563739;
        result[2] += 0;
        result[3] += 0.014164305949008499;
        result[4] += 0.8356940509915014;
        result[5] += 0.0708215297450425;
      } else {
        result[0] += 0.08888888888888889;
        result[1] += 0.0053639846743295016;
        result[2] += 0.010727969348659003;
        result[3] += 0.09885057471264368;
        result[4] += 0.0842911877394636;
        result[5] += 0.7118773946360153;
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)104.5) ) ) {
        result[0] += 0.5977218225419664;
        result[1] += 0.05455635491606715;
        result[2] += 0.0737410071942446;
        result[3] += 0.12589928057553956;
        result[4] += 0.07973621103117506;
        result[5] += 0.0683453237410072;
      } else {
        result[0] += 0.0051813471502590676;
        result[1] += 0.9896373056994818;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.0051813471502590676;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.32222222222222224;
        result[3] += 0.15555555555555556;
        result[4] += 0.044444444444444446;
        result[5] += 0.4777777777777778;
      } else {
        result[0] += 0;
        result[1] += 0.8888888888888888;
        result[2] += 0.05555555555555555;
        result[3] += 0.05555555555555555;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0.028169014084507043;
        result[1] += 0;
        result[2] += 0.36619718309859156;
        result[3] += 0.323943661971831;
        result[4] += 0.014084507042253521;
        result[5] += 0.2676056338028169;
      } else {
        result[0] += 0.016042780748663103;
        result[1] += 0;
        result[2] += 0.9016042780748663;
        result[3] += 0.07700534759358289;
        result[4] += 0;
        result[5] += 0.0053475935828877;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.04693140794223827;
        result[2] += 0.010830324909747292;
        result[3] += 0;
        result[4] += 0.8916967509025271;
        result[5] += 0.05054151624548736;
      } else {
        result[0] += 0.050595238095238096;
        result[1] += 0.00818452380952381;
        result[2] += 0.006696428571428571;
        result[3] += 0.13690476190476192;
        result[4] += 0.08928571428571429;
        result[5] += 0.7083333333333334;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)53.5) ) ) {
        result[0] += 0.00234192037470726;
        result[1] += 0.9742388758782201;
        result[2] += 0;
        result[3] += 0.00468384074941452;
        result[4] += 0.01873536299765808;
        result[5] += 0;
      } else {
        result[0] += 0.6925587467362925;
        result[1] += 0.05548302872062663;
        result[2] += 0.01762402088772846;
        result[3] += 0.047650130548302874;
        result[4] += 0.10509138381201044;
        result[5] += 0.08159268929503917;
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)99.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.09352517985611511;
        result[3] += 0.7266187050359713;
        result[4] += 0;
        result[5] += 0.17985611510791366;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.775;
        result[3] += 0.1;
        result[4] += 0;
        result[5] += 0.125;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        result[0] += 0;
        result[1] += 0.006711409395973154;
        result[2] += 0.5033557046979866;
        result[3] += 0.3288590604026846;
        result[4] += 0;
        result[5] += 0.1610738255033557;
      } else {
        result[0] += 0.023965141612200435;
        result[1] += 0;
        result[2] += 0.9041394335511983;
        result[3] += 0.06427015250544663;
        result[4] += 0;
        result[5] += 0.007625272331154684;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        result[0] += 0.14878048780487804;
        result[1] += 0.00975609756097561;
        result[2] += 0;
        result[3] += 0.014634146341463415;
        result[4] += 0.7170731707317073;
        result[5] += 0.10975609756097561;
      } else {
        result[0] += 0.0030864197530864196;
        result[1] += 0.006172839506172839;
        result[2] += 0.005401234567901234;
        result[3] += 0.17669753086419754;
        result[4] += 0.04938271604938271;
        result[5] += 0.7592592592592593;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0;
        result[1] += 0.8530534351145038;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.14694656488549618;
        result[5] += 0;
      } else {
        result[0] += 0.6891361256544503;
        result[1] += 0.016361256544502618;
        result[2] += 0.08769633507853403;
        result[3] += 0.07722513089005235;
        result[4] += 0.06544502617801047;
        result[5] += 0.06413612565445026;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
        result[0] += 0.006896551724137931;
        result[1] += 0.07586206896551724;
        result[2] += 0.2206896551724138;
        result[3] += 0.4206896551724138;
        result[4] += 0.041379310344827586;
        result[5] += 0.23448275862068965;
      } else {
        result[0] += 0.0851063829787234;
        result[1] += 0;
        result[2] += 0.723404255319149;
        result[3] += 0.010638297872340425;
        result[4] += 0.010638297872340425;
        result[5] += 0.1702127659574468;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6788321167883212;
        result[3] += 0.2992700729927008;
        result[4] += 0;
        result[5] += 0.021897810218978107;
      } else {
        result[0] += 0.004335260115606937;
        result[1] += 0;
        result[2] += 0.9364161849710984;
        result[3] += 0.05491329479768787;
        result[4] += 0;
        result[5] += 0.004335260115606937;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        result[0] += 0.10670731707317073;
        result[1] += 0.03353658536585366;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7378048780487805;
        result[5] += 0.12195121951219512;
      } else {
        result[0] += 0.0026155187445510027;
        result[1] += 0.0008718395815170009;
        result[2] += 0.0017436791630340018;
        result[3] += 0.17349607672188316;
        result[4] += 0.04795117698343505;
        result[5] += 0.7733217088055798;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)53.5) ) ) {
        result[0] += 0.00468384074941452;
        result[1] += 0.927400468384075;
        result[2] += 0;
        result[3] += 0.01405152224824356;
        result[4] += 0.053864168618266976;
        result[5] += 0;
      } else {
        result[0] += 0.5923942153186931;
        result[1] += 0.039100160685591856;
        result[2] += 0.07552222817354044;
        result[3] += 0.09212640599892877;
        result[4] += 0.1146223888591323;
        result[5] += 0.08623460096411355;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)68.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.14814814814814814;
        result[5] += 0.8518518518518519;
      } else {
        result[0] += 0;
        result[1] += 0.028368794326241134;
        result[2] += 0.3900709219858156;
        result[3] += 0.3404255319148936;
        result[4] += 0.0070921985815602835;
        result[5] += 0.23404255319148937;
      }
    } else {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)99) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.14285714285714285;
        result[3] += 0.7857142857142857;
        result[4] += 0;
        result[5] += 0.07142857142857142;
      } else {
        result[0] += 0.008;
        result[1] += 0.010285714285714285;
        result[2] += 0.9154285714285715;
        result[3] += 0.056;
        result[4] += 0;
        result[5] += 0.010285714285714285;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        result[0] += 0.1341772151898734;
        result[1] += 0.053164556962025315;
        result[2] += 0.005063291139240506;
        result[3] += 0.020253164556962026;
        result[4] += 0.7012658227848101;
        result[5] += 0.08607594936708861;
      } else {
        result[0] += 0.007666098807495741;
        result[1] += 0.0017035775127768314;
        result[2] += 0.014480408858603067;
        result[3] += 0.16013628620102216;
        result[4] += 0.05792163543441227;
        result[5] += 0.75809199318569;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)56.5) ) ) {
        result[0] += 0;
        result[1] += 0.9161425576519916;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.08385744234800839;
        result[5] += 0;
      } else {
        result[0] += 0.6462703962703962;
        result[1] += 0.027972027972027965;
        result[2] += 0.0437062937062937;
        result[3] += 0.07867132867132866;
        result[4] += 0.09207459207459207;
        result[5] += 0.11130536130536128;
      }
    }
  } else {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.15730337078651685;
        result[3] += 0.651685393258427;
        result[4] += 0;
        result[5] += 0.19101123595505617;
      } else {
        result[0] += 0.00558659217877095;
        result[1] += 0;
        result[2] += 0.7877094972067039;
        result[3] += 0.18994413407821228;
        result[4] += 0;
        result[5] += 0.01675977653631285;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)86.5) ) ) {
        result[0] += 0.03793103448275862;
        result[1] += 0;
        result[2] += 0.8275862068965517;
        result[3] += 0.1310344827586207;
        result[4] += 0;
        result[5] += 0.0034482758620689655;
      } else {
        result[0] += 0.001976284584980237;
        result[1] += 0;
        result[2] += 0.9782608695652174;
        result[3] += 0.009881422924901186;
        result[4] += 0;
        result[5] += 0.009881422924901186;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        result[0] += 0.13005780346820808;
        result[1] += 0.008670520231213872;
        result[2] += 0.005780346820809248;
        result[3] += 0.03757225433526012;
        result[4] += 0.7109826589595376;
        result[5] += 0.1069364161849711;
      } else {
        result[0] += 0;
        result[1] += 0.0032441200324412004;
        result[2] += 0.0016220600162206002;
        result[3] += 0.17680454176804541;
        result[4] += 0.038929440389294405;
        result[5] += 0.7793998377939984;
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6353529738743746;
        result[1] += 0.06448026681489717;
        result[2] += 0.04613674263479711;
        result[3] += 0.0689271817676487;
        result[4] += 0.11728738187882157;
        result[5] += 0.0678154530294608;
      } else {
        result[0] += 0.01015228426395939;
        result[1] += 0.9771573604060914;
        result[2] += 0.01015228426395939;
        result[3] += 0;
        result[4] += 0.0025380710659898475;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97.5) ) ) {
        result[0] += 0.007633587786259542;
        result[1] += 0;
        result[2] += 0.3893129770992366;
        result[3] += 0.4732824427480916;
        result[4] += 0;
        result[5] += 0.1297709923664122;
      } else {
        result[0] += 0.034482758620689655;
        result[1] += 0;
        result[2] += 0.8078817733990148;
        result[3] += 0.15270935960591134;
        result[4] += 0;
        result[5] += 0.0049261083743842365;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        result[0] += 0.046511627906976744;
        result[1] += 0;
        result[2] += 0.7751937984496124;
        result[3] += 0.16279069767441862;
        result[4] += 0;
        result[5] += 0.015503875968992248;
      } else {
        result[0] += 0.0016920473773265653;
        result[1] += 0;
        result[2] += 0.9610829103214891;
        result[3] += 0.02876480541455161;
        result[4] += 0;
        result[5] += 0.008460236886632827;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)87) ) ) {
        result[0] += 0;
        result[1] += 0.4444444444444444;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.5555555555555556;
        result[5] += 0;
      } else {
        result[0] += 0.002314814814814815;
        result[1] += 0.9791666666666667;
        result[2] += 0;
        result[3] += 0.00462962962962963;
        result[4] += 0.01388888888888889;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
        result[0] += 0.032904148783977114;
        result[1] += 0.002145922746781116;
        result[2] += 0.00357653791130186;
        result[3] += 0.10300429184549356;
        result[4] += 0.21530758226037197;
        result[5] += 0.6430615164520744;
      } else {
        result[0] += 0.6371158392434988;
        result[1] += 0.044326241134751775;
        result[2] += 0.02009456264775414;
        result[3] += 0.05851063829787234;
        result[4] += 0.14125295508274233;
        result[5] += 0.09869976359338062;
      }
    }
  } else {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.1320754716981132;
        result[3] += 0.6477987421383647;
        result[4] += 0;
        result[5] += 0.22012578616352202;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7235294117647059;
        result[3] += 0.17647058823529413;
        result[4] += 0;
        result[5] += 0.1;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        result[0] += 0.05056179775280899;
        result[1] += 0.0028089887640449437;
        result[2] += 0.7359550561797753;
        result[3] += 0.16573033707865167;
        result[4] += 0.0056179775280898875;
        result[5] += 0.03932584269662921;
      } else {
        result[0] += 0.003278688524590164;
        result[1] += 0;
        result[2] += 0.9606557377049181;
        result[3] += 0.03114754098360656;
        result[4] += 0;
        result[5] += 0.004918032786885246;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        result[0] += 0.19419642857142858;
        result[1] += 0.011160714285714286;
        result[2] += 0.004464285714285714;
        result[3] += 0.03125;
        result[4] += 0.6361607142857143;
        result[5] += 0.12276785714285714;
      } else {
        result[0] += 0.005447470817120622;
        result[1] += 0.0023346303501945525;
        result[2] += 0.004669260700389105;
        result[3] += 0.18054474708171206;
        result[4] += 0.054474708171206226;
        result[5] += 0.7525291828793774;
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)104.5) ) ) {
        result[0] += 0.6535867565910485;
        result[1] += 0.06315144083384426;
        result[2] += 0.06560392397302268;
        result[3] += 0.05885959534028203;
        result[4] += 0.10606989576946659;
        result[5] += 0.05272838749233599;
      } else {
        result[0] += 0.0024449877750611247;
        result[1] += 0.9779951100244498;
        result[2] += 0;
        result[3] += 0.009779951100244499;
        result[4] += 0.009779951100244499;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.23232323232323232;
        result[3] += 0.3939393939393939;
        result[4] += 0.010101010101010102;
        result[5] += 0.36363636363636365;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.775;
        result[3] += 0.075;
        result[4] += 0;
        result[5] += 0.15;
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
        result[0] += 0.0035335689045936395;
        result[1] += 0.014134275618374558;
        result[2] += 0.7420494699646644;
        result[3] += 0.21908127208480566;
        result[4] += 0;
        result[5] += 0.02120141342756184;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9540412044374009;
        result[3] += 0.03486529318541997;
        result[4] += 0.003169572107765452;
        result[5] += 0.00792393026941363;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
        result[0] += 0.015748031496062992;
        result[1] += 0.047244094488188976;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9133858267716536;
        result[5] += 0.023622047244094488;
      } else {
        result[0] += 0.44360902255639106;
        result[1] += 0.015037593984962409;
        result[2] += 0;
        result[3] += 0.07518796992481204;
        result[4] += 0.23308270676691734;
        result[5] += 0.23308270676691734;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.001321003963011889;
        result[3] += 0.019815059445178335;
        result[4] += 0.046235138705416116;
        result[5] += 0.9326287978863936;
      } else {
        result[0] += 0.01730103806228374;
        result[1] += 0.00865051903114187;
        result[2] += 0.010380622837370242;
        result[3] += 0.35813148788927335;
        result[4] += 0.07958477508650519;
        result[5] += 0.5259515570934256;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)66.5) ) ) {
        result[0] += 0.0034602076124567475;
        result[1] += 0.7698961937716263;
        result[2] += 0.01384083044982699;
        result[3] += 0.012110726643598616;
        result[4] += 0.19550173010380623;
        result[5] += 0.005190311418685121;
      } else {
        result[0] += 0.7992;
        result[1] += 0.0336;
        result[2] += 0.0144;
        result[3] += 0.0512;
        result[4] += 0.0736;
        result[5] += 0.028;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        result[0] += 0.010135135135135136;
        result[1] += 0.010135135135135136;
        result[2] += 0.34797297297297297;
        result[3] += 0.36486486486486486;
        result[4] += 0.05067567567567568;
        result[5] += 0.21621621621621623;
      } else {
        result[0] += 0.059183673469387764;
        result[1] += 0.010204081632653062;
        result[2] += 0.8510204081632654;
        result[3] += 0.06530612244897961;
        result[4] += 0;
        result[5] += 0.014285714285714287;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.053061224489795916;
        result[2] += 0;
        result[3] += 0.004081632653061225;
        result[4] += 0.926530612244898;
        result[5] += 0.0163265306122449;
      } else {
        result[0] += 0.06202090592334495;
        result[1] += 0.01602787456445993;
        result[2] += 0.006968641114982578;
        result[3] += 0.1651567944250871;
        result[4] += 0.04878048780487805;
        result[5] += 0.7010452961672474;
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)56.5) ) ) {
        result[0] += 0.01059322033898305;
        result[1] += 0.9046610169491526;
        result[2] += 0.00211864406779661;
        result[3] += 0.00211864406779661;
        result[4] += 0.07203389830508475;
        result[5] += 0.00847457627118644;
      } else {
        result[0] += 0.6916890080428955;
        result[1] += 0.029490616621983913;
        result[2] += 0.03284182305630027;
        result[3] += 0.06300268096514745;
        result[4] += 0.10455764075067024;
        result[5] += 0.07841823056300268;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.125;
        result[3] += 0.6666666666666666;
        result[4] += 0;
        result[5] += 0.20833333333333334;
      } else {
        result[0] += 0.05555555555555555;
        result[1] += 0;
        result[2] += 0.6888888888888889;
        result[3] += 0.2111111111111111;
        result[4] += 0;
        result[5] += 0.044444444444444446;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        result[0] += 0.018656716417910446;
        result[1] += 0;
        result[2] += 0.7947761194029851;
        result[3] += 0.15298507462686567;
        result[4] += 0;
        result[5] += 0.033582089552238806;
      } else {
        result[0] += 0.002840909090909091;
        result[1] += 0;
        result[2] += 0.9644886363636364;
        result[3] += 0.026988636363636364;
        result[4] += 0;
        result[5] += 0.005681818181818182;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.11904761904761905;
        result[1] += 0.014880952380952382;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7648809523809524;
        result[5] += 0.1011904761904762;
      } else {
        result[0] += 0.0025380710659898475;
        result[1] += 0.005922165820642978;
        result[2] += 0.00676818950930626;
        result[3] += 0.16751269035532995;
        result[4] += 0.05583756345177665;
        result[5] += 0.7614213197969543;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        result[0] += 0.006507592190889371;
        result[1] += 0.9002169197396963;
        result[2] += 0;
        result[3] += 0.004338394793926247;
        result[4] += 0.08893709327548807;
        result[5] += 0;
      } else {
        result[0] += 0.6886377903327056;
        result[1] += 0.025109855618330193;
        result[2] += 0.027620841180163214;
        result[3] += 0.08286252354048965;
        result[4] += 0.09102322661644696;
        result[5] += 0.0847457627118644;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.11458333333333333;
        result[3] += 0.6979166666666666;
        result[4] += 0;
        result[5] += 0.1875;
      } else {
        result[0] += 0.04878048780487805;
        result[1] += 0;
        result[2] += 0.5284552845528455;
        result[3] += 0.34146341463414637;
        result[4] += 0;
        result[5] += 0.08130081300813008;
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7808764940239045;
        result[3] += 0.1713147410358566;
        result[4] += 0;
        result[5] += 0.04780876494023905;
      } else {
        result[0] += 0.019132653061224494;
        result[1] += 0;
        result[2] += 0.9400510204081634;
        result[3] += 0.034438775510204085;
        result[4] += 0.0012755102040816328;
        result[5] += 0.005102040816326531;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        result[0] += 0.011194029850746268;
        result[1] += 0.0708955223880597;
        result[2] += 0;
        result[3] += 0.014925373134328358;
        result[4] += 0.8544776119402985;
        result[5] += 0.048507462686567165;
      } else {
        result[0] += 0.056732223903177004;
        result[1] += 0.0015128593040847202;
        result[2] += 0.0037821482602118004;
        result[3] += 0.13540090771558244;
        result[4] += 0.049167927382753406;
        result[5] += 0.7534039334341907;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.007619047619047619;
        result[1] += 0.8076190476190476;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.18476190476190477;
        result[5] += 0;
      } else {
        result[0] += 0.8023076923076923;
        result[1] += 0.016153846153846154;
        result[2] += 0.026153846153846153;
        result[3] += 0.04692307692307692;
        result[4] += 0.06384615384615384;
        result[5] += 0.04461538461538461;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.08;
        result[3] += 0.6266666666666667;
        result[4] += 0.03111111111111111;
        result[5] += 0.26222222222222225;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5493827160493827;
        result[3] += 0.2962962962962963;
        result[4] += 0.018518518518518517;
        result[5] += 0.13580246913580246;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)93) ) ) {
        result[0] += 0.10309278350515463;
        result[1] += 0.05154639175257732;
        result[2] += 0.4020618556701031;
        result[3] += 0.08247422680412371;
        result[4] += 0.13402061855670103;
        result[5] += 0.2268041237113402;
      } else {
        result[0] += 0.018338727076591153;
        result[1] += 0;
        result[2] += 0.8975188781014024;
        result[3] += 0.07335490830636461;
        result[4] += 0.002157497303128371;
        result[5] += 0.008629989212513484;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        result[0] += 0.20388349514563106;
        result[1] += 0.024271844660194174;
        result[2] += 0;
        result[3] += 0.01699029126213592;
        result[4] += 0.6504854368932039;
        result[5] += 0.10436893203883495;
      } else {
        result[0] += 0.003971405877680699;
        result[1] += 0.003177124702144559;
        result[2] += 0.004765687053216839;
        result[3] += 0.181890389197776;
        result[4] += 0.05559968228752978;
        result[5] += 0.7505957108816521;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)104.5) ) ) {
        result[0] += 0.643705463182898;
        result[1] += 0.0647268408551069;
        result[2] += 0.051662707838479816;
        result[3] += 0.06710213776722092;
        result[4] += 0.10748218527315916;
        result[5] += 0.0653206650831354;
      } else {
        result[0] += 0.008174386920980926;
        result[1] += 0.9918256130790191;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)99.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.09836065573770492;
        result[3] += 0.7540983606557377;
        result[4] += 0;
        result[5] += 0.14754098360655737;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5714285714285714;
        result[3] += 0.42857142857142855;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)102.5) ) ) {
        result[0] += 0.006535947712418301;
        result[1] += 0;
        result[2] += 0.7549019607843137;
        result[3] += 0.1895424836601307;
        result[4] += 0;
        result[5] += 0.049019607843137254;
      } else {
        result[0] += 0.011065006915629325;
        result[1] += 0;
        result[2] += 0.9502074688796681;
        result[3] += 0.031811894882434306;
        result[4] += 0;
        result[5] += 0.006915629322268327;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)69.5) ) ) {
        result[0] += 0.002564102564102564;
        result[1] += 0.013675213675213675;
        result[2] += 0.005982905982905983;
        result[3] += 0.06581196581196581;
        result[4] += 0.19145299145299147;
        result[5] += 0.7205128205128205;
      } else {
        result[0] += 0.2681564245810056;
        result[1] += 0.036312849162011177;
        result[2] += 0;
        result[3] += 0.09497206703910614;
        result[4] += 0.3575418994413408;
        result[5] += 0.2430167597765363;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)103.5) ) ) {
        result[0] += 0.5669421487603307;
        result[1] += 0.05123966942148761;
        result[2] += 0.07438016528925621;
        result[3] += 0.12617079889807165;
        result[4] += 0.07548209366391186;
        result[5] += 0.10578512396694216;
      } else {
        result[0] += 0.01358695652173913;
        result[1] += 0.9809782608695652;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.005434782608695652;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
        result[0] += 0;
        result[1] += 0.022727272727272728;
        result[2] += 0.11363636363636363;
        result[3] += 0.6363636363636364;
        result[4] += 0.03409090909090909;
        result[5] += 0.19318181818181818;
      } else {
        result[0] += 0.047244094488188976;
        result[1] += 0.031496062992125984;
        result[2] += 0.48031496062992124;
        result[3] += 0.14960629921259844;
        result[4] += 0.07874015748031496;
        result[5] += 0.2125984251968504;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)90) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.2727272727272727;
        result[3] += 0;
        result[4] += 0.09090909090909091;
        result[5] += 0.6363636363636364;
      } else {
        result[0] += 0.003374578177727784;
        result[1] += 0;
        result[2] += 0.9505061867266592;
        result[3] += 0.043869516310461196;
        result[4] += 0;
        result[5] += 0.0022497187851518562;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        result[0] += 0.17574257425742573;
        result[1] += 0.0049504950495049506;
        result[2] += 0.007425742574257425;
        result[3] += 0.03217821782178218;
        result[4] += 0.6584158415841584;
        result[5] += 0.12128712871287128;
      } else {
        result[0] += 0.0022624434389140274;
        result[1] += 0.0022624434389140274;
        result[2] += 0.00904977375565611;
        result[3] += 0.167420814479638;
        result[4] += 0.06711915535444947;
        result[5] += 0.7518853695324283;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        result[0] += 0.001893939393939394;
        result[1] += 0.9299242424242424;
        result[2] += 0;
        result[3] += 0.001893939393939394;
        result[4] += 0.06628787878787878;
        result[5] += 0;
      } else {
        result[0] += 0.6895424836601307;
        result[1] += 0.03594771241830065;
        result[2] += 0.060784313725490195;
        result[3] += 0.07712418300653595;
        result[4] += 0.08888888888888889;
        result[5] += 0.04771241830065359;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.029411764705882353;
        result[3] += 0.9117647058823529;
        result[4] += 0;
        result[5] += 0.058823529411764705;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.4533333333333333;
        result[3] += 0.30666666666666664;
        result[4] += 0;
        result[5] += 0.24;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        result[0] += 0.03550295857988166;
        result[1] += 0;
        result[2] += 0.8136094674556213;
        result[3] += 0.13609467455621302;
        result[4] += 0;
        result[5] += 0.014792899408284023;
      } else {
        result[0] += 0.001692047377326565;
        result[1] += 0;
        result[2] += 0.9678510998307953;
        result[3] += 0.030456852791878174;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
        result[0] += 0.03849114703618168;
        result[1] += 0.0023094688221709007;
        result[2] += 0;
        result[3] += 0.05003849114703618;
        result[4] += 0.2602001539645881;
        result[5] += 0.648960739030023;
      } else {
        result[0] += 0.08482142857142858;
        result[1] += 0.015625;
        result[2] += 0.022321428571428572;
        result[3] += 0.46205357142857145;
        result[4] += 0.049107142857142856;
        result[5] += 0.36607142857142855;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)59) ) ) {
        result[0] += 0.024640657084188913;
        result[1] += 0.893223819301848;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.08213552361396304;
        result[5] += 0;
      } else {
        result[0] += 0.6786188579017265;
        result[1] += 0.037184594953519265;
        result[2] += 0.07768924302788846;
        result[3] += 0.06772908366533865;
        result[4] += 0.09362549800796814;
        result[5] += 0.045152722443559105;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)80.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.23958333333333334;
        result[3] += 0.4375;
        result[4] += 0;
        result[5] += 0.3229166666666667;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7226277372262774;
        result[3] += 0.15328467153284672;
        result[4] += 0;
        result[5] += 0.12408759124087591;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61) ) ) {
        result[0] += 0;
        result[1] += 0.9230769230769231;
        result[2] += 0.07692307692307693;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.0071428571428571435;
        result[1] += 0;
        result[2] += 0.9154761904761906;
        result[3] += 0.07023809523809525;
        result[4] += 0.0011904761904761908;
        result[5] += 0.005952380952380953;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0;
        result[1] += 0.00966183574879227;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9855072463768116;
        result[5] += 0.004830917874396135;
      } else {
        result[0] += 0.041666666666666664;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.2916666666666667;
        result[4] += 0.2916666666666667;
        result[5] += 0.375;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)88.5) ) ) {
        result[0] += 0.03161222339304531;
        result[1] += 0.003161222339304531;
        result[2] += 0.001053740779768177;
        result[3] += 0.044257112750263436;
        result[4] += 0.05690200210748156;
        result[5] += 0.863013698630137;
      } else {
        result[0] += 0.05723905723905724;
        result[1] += 0.006734006734006734;
        result[2] += 0.020202020202020204;
        result[3] += 0.4074074074074074;
        result[4] += 0.037037037037037035;
        result[5] += 0.4713804713804714;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.0036231884057971015;
        result[1] += 0.8170289855072463;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.1721014492753623;
        result[5] += 0.007246376811594203;
      } else {
        result[0] += 0.7407407407407407;
        result[1] += 0.031928480204342274;
        result[2] += 0.015964240102171137;
        result[3] += 0.06704980842911877;
        result[4] += 0.07279693486590039;
        result[5] += 0.07151979565772669;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        result[0] += 0.024896265560165973;
        result[1] += 0;
        result[2] += 0.3941908713692946;
        result[3] += 0.3775933609958506;
        result[4] += 0;
        result[5] += 0.2033195020746888;
      } else {
        result[0] += 0.017598343685300208;
        result[1] += 0;
        result[2] += 0.8861283643892339;
        result[3] += 0.07246376811594203;
        result[4] += 0.0010351966873706005;
        result[5] += 0.022774327122153208;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)67.5) ) ) {
        result[0] += 0;
        result[1] += 0.034782608695652174;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9434782608695652;
        result[5] += 0.021739130434782608;
      } else {
        result[0] += 0;
        result[1] += 0.25;
        result[2] += 0;
        result[3] += 0.25;
        result[4] += 0;
        result[5] += 0.5;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
        result[0] += 0.04838709677419355;
        result[1] += 0;
        result[2] += 0.004743833017077799;
        result[3] += 0.06261859582542695;
        result[4] += 0.0730550284629981;
        result[5] += 0.8111954459203036;
      } else {
        result[0] += 0.008032128514056224;
        result[1] += 0.004016064257028112;
        result[2] += 0.020080321285140562;
        result[3] += 0.5662650602409639;
        result[4] += 0.01606425702811245;
        result[5] += 0.3855421686746988;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)102.5) ) ) {
        result[0] += 0.6743034055727554;
        result[1] += 0.05015479876160991;
        result[2] += 0.02786377708978328;
        result[3] += 0.06253869969040247;
        result[4] += 0.12631578947368421;
        result[5] += 0.058823529411764705;
      } else {
        result[0] += 0.015730337078651686;
        result[1] += 0.9842696629213483;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        result[0] += 0.035196687370600416;
        result[1] += 0.020703933747412008;
        result[2] += 0.5196687370600414;
        result[3] += 0.2753623188405797;
        result[4] += 0.018633540372670808;
        result[5] += 0.13043478260869565;
      } else {
        result[0] += 0.0013477088948787063;
        result[1] += 0;
        result[2] += 0.9353099730458221;
        result[3] += 0.0444743935309973;
        result[4] += 0;
        result[5] += 0.018867924528301886;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)99.5) ) ) {
        result[0] += 0.004338394793926247;
        result[1] += 0.12147505422993492;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8286334056399133;
        result[5] += 0.0455531453362256;
      } else {
        result[0] += 0;
        result[1] += 0.9864559819413092;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.013544018058690745;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)86.5) ) ) {
        result[0] += 0.06762295081967214;
        result[1] += 0.006147540983606557;
        result[2] += 0.0020491803278688526;
        result[3] += 0.06454918032786885;
        result[4] += 0.04405737704918033;
        result[5] += 0.8155737704918032;
      } else {
        result[0] += 0.5656037637219029;
        result[1] += 0.019864087820177734;
        result[2] += 0.06429691583899635;
        result[3] += 0.15420805018295874;
        result[4] += 0.06272869837950863;
        result[5] += 0.13329848405645586;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
        result[0] += 0;
        result[1] += 0.01818181818181818;
        result[2] += 0.12727272727272726;
        result[3] += 0.21818181818181817;
        result[4] += 0.03636363636363636;
        result[5] += 0.6;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.4482758620689655;
        result[3] += 0.5344827586206896;
        result[4] += 0;
        result[5] += 0.017241379310344827;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)84.5) ) ) {
        result[0] += 0.017793594306049824;
        result[1] += 0.0071174377224199285;
        result[2] += 0.7508896797153025;
        result[3] += 0.1601423487544484;
        result[4] += 0.014234875444839857;
        result[5] += 0.0498220640569395;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9640062597809077;
        result[3] += 0.03599374021909233;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.14714714714714713;
        result[1] += 0.06606606606606606;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.6876876876876877;
        result[5] += 0.0990990990990991;
      } else {
        result[0] += 0.004205214465937763;
        result[1] += 0.008410428931875526;
        result[2] += 0.001682085786375105;
        result[3] += 0.15475189234650968;
        result[4] += 0.05382674516400336;
        result[5] += 0.7771236333052985;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)52.5) ) ) {
        result[0] += 0.0023094688221709007;
        result[1] += 0.9353348729792148;
        result[2] += 0;
        result[3] += 0.03002309468822171;
        result[4] += 0.03002309468822171;
        result[5] += 0.0023094688221709007;
      } else {
        result[0] += 0.6351752822341058;
        result[1] += 0.040998217468805706;
        result[2] += 0.035056446821152706;
        result[3] += 0.0689245395127748;
        result[4] += 0.13903743315508021;
        result[5] += 0.08080808080808081;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)97.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.03508771929824561;
        result[3] += 0.7192982456140351;
        result[4] += 0;
        result[5] += 0.24561403508771928;
      } else {
        result[0] += 0.006756756756756758;
        result[1] += 0;
        result[2] += 0.47972972972972977;
        result[3] += 0.39189189189189194;
        result[4] += 0;
        result[5] += 0.12162162162162164;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7439613526570049;
        result[3] += 0.1884057971014493;
        result[4] += 0;
        result[5] += 0.0676328502415459;
      } else {
        result[0] += 0.024484536082474227;
        result[1] += 0;
        result[2] += 0.9510309278350515;
        result[3] += 0.02190721649484536;
        result[4] += 0;
        result[5] += 0.002577319587628866;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        result[0] += 0.011583011583011582;
        result[1] += 0.03474903474903475;
        result[2] += 0;
        result[3] += 0.019305019305019305;
        result[4] += 0.8725868725868726;
        result[5] += 0.06177606177606178;
      } else {
        result[0] += 0.02527379949452401;
        result[1] += 0.009267059814658803;
        result[2] += 0.020219039595619208;
        result[3] += 0.14995787700084245;
        result[4] += 0.06655433866891322;
        result[5] += 0.7287278854254423;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6585223967422921;
        result[1] += 0.0447934845840605;
        result[2] += 0.06050029086678301;
        result[3] += 0.06631762652705062;
        result[4] += 0.11809191390343222;
        result[5] += 0.051774287376381616;
      } else {
        result[0] += 0.01201923076923077;
        result[1] += 0.9879807692307693;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        result[0] += 0;
        result[1] += 0.010810810810810811;
        result[2] += 0.11891891891891893;
        result[3] += 0.4486486486486487;
        result[4] += 0.10810810810810811;
        result[5] += 0.31351351351351353;
      } else {
        result[0] += 0.034722222222222224;
        result[1] += 0;
        result[2] += 0.5694444444444444;
        result[3] += 0.09722222222222222;
        result[4] += 0.05555555555555555;
        result[5] += 0.24305555555555555;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)99.5) ) ) {
        result[0] += 0.01675977653631285;
        result[1] += 0;
        result[2] += 0.6815642458100558;
        result[3] += 0.2569832402234637;
        result[4] += 0.00558659217877095;
        result[5] += 0.03910614525139665;
      } else {
        result[0] += 0.01085481682496608;
        result[1] += 0;
        result[2] += 0.9511533242876528;
        result[3] += 0.03663500678426052;
        result[4] += 0;
        result[5] += 0.00135685210312076;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        result[0] += 0.12893081761006292;
        result[1] += 0.022012578616352203;
        result[2] += 0;
        result[3] += 0.034591194968553465;
        result[4] += 0.7138364779874214;
        result[5] += 0.10062893081761008;
      } else {
        result[0] += 0.004111842105263158;
        result[1] += 0.001644736842105263;
        result[2] += 0.0008223684210526315;
        result[3] += 0.14884868421052633;
        result[4] += 0.038651315789473686;
        result[5] += 0.805921052631579;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)104.5) ) ) {
        result[0] += 0.5800524934383202;
        result[1] += 0.06509186351706037;
        result[2] += 0.07611548556430446;
        result[3] += 0.09763779527559055;
        result[4] += 0.11496062992125984;
        result[5] += 0.06614173228346457;
      } else {
        result[0] += 0.0026455026455026454;
        result[1] += 0.9920634920634921;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.0026455026455026454;
        result[5] += 0.0026455026455026454;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.027777777777777776;
        result[3] += 0.1388888888888889;
        result[4] += 0.1388888888888889;
        result[5] += 0.6944444444444444;
      } else {
        result[0] += 0;
        result[1] += 0.022556390977443608;
        result[2] += 0.47368421052631576;
        result[3] += 0.3233082706766917;
        result[4] += 0.007518796992481203;
        result[5] += 0.17293233082706766;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)68.5) ) ) {
        result[0] += 0.5714285714285715;
        result[1] += 0.28571428571428575;
        result[2] += 0.04761904761904762;
        result[3] += 0.09523809523809525;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.0012210012210012212;
        result[1] += 0;
        result[2] += 0.9206349206349207;
        result[3] += 0.0683760683760684;
        result[4] += 0;
        result[5] += 0.00976800976800977;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        result[0] += 0.007462686567164179;
        result[1] += 0.055970149253731345;
        result[2] += 0;
        result[3] += 0.011194029850746268;
        result[4] += 0.8731343283582089;
        result[5] += 0.05223880597014925;
      } else {
        result[0] += 0.05084745762711865;
        result[1] += 0.0035310734463276836;
        result[2] += 0;
        result[3] += 0.1687853107344633;
        result[4] += 0.0614406779661017;
        result[5] += 0.7153954802259888;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
        result[0] += 0.01171875;
        result[1] += 0.845703125;
        result[2] += 0;
        result[3] += 0.0078125;
        result[4] += 0.126953125;
        result[5] += 0.0078125;
      } else {
        result[0] += 0.6789895255699322;
        result[1] += 0.03203943314849045;
        result[2] += 0.08749229821318547;
        result[3] += 0.08133086876155268;
        result[4] += 0.06777572396796057;
        result[5] += 0.05237215033887862;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)87.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.2;
        result[3] += 0.02857142857142857;
        result[4] += 0.02857142857142857;
        result[5] += 0.7428571428571429;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.22058823529411764;
        result[3] += 0.5441176470588235;
        result[4] += 0;
        result[5] += 0.23529411764705882;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)86.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.790273556231003;
        result[3] += 0.16109422492401215;
        result[4] += 0.00303951367781155;
        result[5] += 0.04559270516717325;
      } else {
        result[0] += 0.006956521739130435;
        result[1] += 0.0052173913043478265;
        result[2] += 0.9634782608695652;
        result[3] += 0.020869565217391306;
        result[4] += 0.0017391304347826088;
        result[5] += 0.0017391304347826088;
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
