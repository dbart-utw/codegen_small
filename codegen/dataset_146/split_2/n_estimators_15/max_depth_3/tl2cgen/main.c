
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
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
        result[0] += 0.007380073800738007;
        result[1] += 0.025830258302583026;
        result[2] += 0;
        result[3] += 0.007380073800738007;
        result[4] += 0.8819188191881919;
        result[5] += 0.07749077490774908;
      } else {
        result[0] += 0.04205607476635514;
        result[1] += 0.02336448598130841;
        result[2] += 0.011682242990654205;
        result[3] += 0.14563862928348908;
        result[4] += 0.03271028037383177;
        result[5] += 0.7445482866043613;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)50) ) ) {
        result[0] += 0.002207505518763797;
        result[1] += 0.977924944812362;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.019867549668874173;
        result[5] += 0;
      } else {
        result[0] += 0.6194073213248111;
        result[1] += 0.03660662405578152;
        result[2] += 0.07669959325973272;
        result[3] += 0.07844276583381755;
        result[4] += 0.12202208018593841;
        result[5] += 0.06682161533991865;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)71.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 1;
      } else {
        result[0] += 0;
        result[1] += 0.029850746268656716;
        result[2] += 0.22388059701492538;
        result[3] += 0.2835820895522388;
        result[4] += 0.208955223880597;
        result[5] += 0.2537313432835821;
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)78.5) ) ) {
        result[0] += 0.024390243902439025;
        result[1] += 0;
        result[2] += 0.4878048780487805;
        result[3] += 0.24390243902439024;
        result[4] += 0;
        result[5] += 0.24390243902439024;
      } else {
        result[0] += 0.008620689655172414;
        result[1] += 0.0021551724137931034;
        result[2] += 0.9224137931034483;
        result[3] += 0.06357758620689655;
        result[4] += 0;
        result[5] += 0.003232758620689655;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.003322259136212625;
        result[1] += 0.09966777408637875;
        result[2] += 0.01993355481727575;
        result[3] += 0.003322259136212625;
        result[4] += 0.8272425249169436;
        result[5] += 0.04651162790697675;
      } else {
        result[0] += 0.03680981595092025;
        result[1] += 0.0015337423312883436;
        result[2] += 0.014570552147239263;
        result[3] += 0.1549079754601227;
        result[4] += 0.07208588957055215;
        result[5] += 0.7200920245398773;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        result[0] += 0.0019267822736030828;
        result[1] += 0.791907514450867;
        result[2] += 0;
        result[3] += 0.009633911368015413;
        result[4] += 0.1791907514450867;
        result[5] += 0.017341040462427744;
      } else {
        result[0] += 0.6775990099009901;
        result[1] += 0.019801980198019802;
        result[2] += 0.06497524752475248;
        result[3] += 0.0952970297029703;
        result[4] += 0.05754950495049505;
        result[5] += 0.08477722772277228;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.6451612903225806;
        result[4] += 0;
        result[5] += 0.3548387096774194;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.4810126582278481;
        result[3] += 0.1518987341772152;
        result[4] += 0.02531645569620253;
        result[5] += 0.34177215189873417;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
        result[0] += 0;
        result[1] += 0.024793388429752067;
        result[2] += 0.6611570247933884;
        result[3] += 0.256198347107438;
        result[4] += 0.008264462809917356;
        result[5] += 0.049586776859504134;
      } else {
        result[0] += 0.0058479532163742695;
        result[1] += 0.003508771929824562;
        result[2] += 0.9274853801169591;
        result[3] += 0.054970760233918135;
        result[4] += 0.001169590643274854;
        result[5] += 0.007017543859649124;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
        result[0] += 0.14233576642335766;
        result[1] += 0.021897810218978103;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7846715328467153;
        result[5] += 0.051094890510948905;
      } else {
        result[0] += 0.0040650406504065045;
        result[1] += 0.0032520325203252032;
        result[2] += 0.0040650406504065045;
        result[3] += 0.14634146341463414;
        result[4] += 0.056910569105691054;
        result[5] += 0.7853658536585366;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)51.5) ) ) {
        result[0] += 0.004319654427645789;
        result[1] += 0.9611231101511879;
        result[2] += 0;
        result[3] += 0.004319654427645789;
        result[4] += 0.03023758099352052;
        result[5] += 0;
      } else {
        result[0] += 0.6014656144306652;
        result[1] += 0.032130777903043965;
        result[2] += 0.06200676437429538;
        result[3] += 0.08906426155580609;
        result[4] += 0.11837655016910936;
        result[5] += 0.09695603156708005;
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        result[0] += 0.006097560975609756;
        result[1] += 0.06097560975609756;
        result[2] += 0.2682926829268293;
        result[3] += 0.3719512195121951;
        result[4] += 0.018292682926829267;
        result[5] += 0.27439024390243905;
      } else {
        result[0] += 0.07547169811320754;
        result[1] += 0;
        result[2] += 0.8018867924528302;
        result[3] += 0.10849056603773585;
        result[4] += 0;
        result[5] += 0.014150943396226415;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5806451612903226;
        result[3] += 0.3870967741935484;
        result[4] += 0;
        result[5] += 0.03225806451612903;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9587020648967552;
        result[3] += 0.03982300884955753;
        result[4] += 0;
        result[5] += 0.0014749262536873158;
      }
    }
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        result[0] += 0.03333333333333333;
        result[1] += 0.016666666666666666;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9444444444444444;
        result[5] += 0.005555555555555556;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.5529411764705883;
        result[5] += 0.4470588235294118;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
        result[0] += 0.0244173140954495;
        result[1] += 0;
        result[2] += 0.0011098779134295228;
        result[3] += 0.04439511653718091;
        result[4] += 0.05660377358490566;
        result[5] += 0.8734739178690344;
      } else {
        result[0] += 0.040983606557377046;
        result[1] += 0.07377049180327869;
        result[2] += 0.05737704918032787;
        result[3] += 0.42896174863387976;
        result[4] += 0.02185792349726776;
        result[5] += 0.3770491803278688;
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)67.5) ) ) {
        result[0] += 0.013157894736842105;
        result[1] += 0.7875939849624061;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.19548872180451127;
        result[5] += 0.0037593984962406013;
      } else {
        result[0] += 0.7981049562682215;
        result[1] += 0.02040816326530612;
        result[2] += 0.034256559766763846;
        result[3] += 0.04591836734693878;
        result[4] += 0.06851311953352769;
        result[5] += 0.03279883381924198;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
        result[0] += 0.0029069767441860465;
        result[1] += 0.0029069767441860465;
        result[2] += 0.28488372093023256;
        result[3] += 0.3430232558139535;
        result[4] += 0.06686046511627906;
        result[5] += 0.29941860465116277;
      } else {
        result[0] += 0.025812619502868072;
        result[1] += 0.005736137667304016;
        result[2] += 0.8489483747609944;
        result[3] += 0.07456978967495222;
        result[4] += 0.01816443594646272;
        result[5] += 0.026768642447418743;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.012145748987854251;
        result[2] += 0.004048582995951417;
        result[3] += 0.004048582995951417;
        result[4] += 0.9149797570850202;
        result[5] += 0.06477732793522267;
      } else {
        result[0] += 0.03333333333333333;
        result[1] += 0.021705426356589147;
        result[2] += 0.003875968992248062;
        result[3] += 0.14573643410852713;
        result[4] += 0.04883720930232558;
        result[5] += 0.7465116279069768;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        result[0] += 0.0038684719535783366;
        result[1] += 0.8278529980657641;
        result[2] += 0;
        result[3] += 0.0038684719535783366;
        result[4] += 0.15860735009671179;
        result[5] += 0.005802707930367505;
      } else {
        result[0] += 0.7085828343313374;
        result[1] += 0.035928143712574856;
        result[2] += 0.019960079840319365;
        result[3] += 0.06986027944111778;
        result[4] += 0.07584830339321359;
        result[5] += 0.08982035928143714;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.19270833333333334;
        result[3] += 0.59375;
        result[4] += 0;
        result[5] += 0.21354166666666666;
      } else {
        result[0] += 0;
        result[1] += 0.015151515151515154;
        result[2] += 0.5606060606060607;
        result[3] += 0.13636363636363638;
        result[4] += 0.015151515151515154;
        result[5] += 0.27272727272727276;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
        result[0] += 0.0345679012345679;
        result[1] += 0;
        result[2] += 0.7802469135802469;
        result[3] += 0.14814814814814814;
        result[4] += 0.0049382716049382715;
        result[5] += 0.03209876543209877;
      } else {
        result[0] += 0.0016501650165016502;
        result[1] += 0;
        result[2] += 0.9554455445544554;
        result[3] += 0.039603960396039604;
        result[4] += 0;
        result[5] += 0.0033003300330033004;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.0035460992907801418;
        result[1] += 0.06028368794326241;
        result[2] += 0.0035460992907801418;
        result[3] += 0.0070921985815602835;
        result[4] += 0.8652482269503546;
        result[5] += 0.06028368794326241;
      } else {
        result[0] += 0.04173354735152488;
        result[1] += 0.0056179775280898875;
        result[2] += 0.0056179775280898875;
        result[3] += 0.11958266452648475;
        result[4] += 0.06019261637239166;
        result[5] += 0.7672552166934189;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)56.5) ) ) {
        result[0] += 0;
        result[1] += 0.9409090909090909;
        result[2] += 0.004545454545454545;
        result[3] += 0;
        result[4] += 0.05454545454545454;
        result[5] += 0;
      } else {
        result[0] += 0.6720623501199041;
        result[1] += 0.03297362110311751;
        result[2] += 0.030575539568345324;
        result[3] += 0.07673860911270983;
        result[4] += 0.08752997601918465;
        result[5] += 0.10011990407673861;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.06756756756756757;
        result[3] += 0.6621621621621622;
        result[4] += 0;
        result[5] += 0.2702702702702703;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5806451612903226;
        result[3] += 0.06451612903225806;
        result[4] += 0;
        result[5] += 0.3548387096774194;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)84) ) ) {
        result[0] += 0.0056022408963585435;
        result[1] += 0;
        result[2] += 0.6862745098039216;
        result[3] += 0.24649859943977592;
        result[4] += 0.0056022408963585435;
        result[5] += 0.056022408963585436;
      } else {
        result[0] += 0.013736263736263738;
        result[1] += 0;
        result[2] += 0.9436813186813188;
        result[3] += 0.037087912087912095;
        result[4] += 0;
        result[5] += 0.005494505494505496;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)97) ) ) {
        result[0] += 0.007662835249042145;
        result[1] += 0.0038314176245210726;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9731800766283525;
        result[5] += 0.01532567049808429;
      } else {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)67.5) ) ) {
        result[0] += 0.004043126684636119;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.03908355795148248;
        result[4] += 0.03234501347708895;
        result[5] += 0.9245283018867925;
      } else {
        result[0] += 0.11256117455138662;
        result[1] += 0.01631321370309951;
        result[2] += 0.03588907014681892;
        result[3] += 0.3034257748776509;
        result[4] += 0.0636215334420881;
        result[5] += 0.46818923327895595;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
        result[0] += 0.0055658627087198514;
        result[1] += 0.8237476808905381;
        result[2] += 0.0055658627087198514;
        result[3] += 0.011131725417439703;
        result[4] += 0.14285714285714285;
        result[5] += 0.011131725417439703;
      } else {
        result[0] += 0.7345132743362832;
        result[1] += 0.02722940776038121;
        result[2] += 0.02314499659632403;
        result[3] += 0.06398910823689585;
        result[4] += 0.08849557522123894;
        result[5] += 0.06262763784887679;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
        result[0] += 0;
        result[1] += 0.007518796992481203;
        result[2] += 0.42857142857142855;
        result[3] += 0.462406015037594;
        result[4] += 0;
        result[5] += 0.10150375939849623;
      } else {
        result[0] += 0.01857923497267759;
        result[1] += 0.003278688524590163;
        result[2] += 0.8983606557377047;
        result[3] += 0.04808743169398906;
        result[4] += 0.006557377049180326;
        result[5] += 0.025136612021857917;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.0034482758620689655;
        result[2] += 0.017241379310344827;
        result[3] += 0;
        result[4] += 0.9379310344827586;
        result[5] += 0.041379310344827586;
      } else {
        result[0] += 0.09134233518665608;
        result[1] += 0.025416997617156472;
        result[2] += 0.009531374106433678;
        result[3] += 0.08419380460683082;
        result[4] += 0.06830818109610802;
        result[5] += 0.7212073073868149;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)56.5) ) ) {
        result[0] += 0;
        result[1] += 0.9665924276169265;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.0334075723830735;
        result[5] += 0;
      } else {
        result[0] += 0.6176641487507263;
        result[1] += 0.017431725740848343;
        result[2] += 0.05229517722254503;
        result[3] += 0.12957582800697268;
        result[4] += 0.08076699593259733;
        result[5] += 0.10226612434631029;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.06944444444444445;
        result[3] += 0.4861111111111111;
        result[4] += 0.013888888888888888;
        result[5] += 0.4305555555555556;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.8;
        result[3] += 0.1;
        result[4] += 0;
        result[5] += 0.1;
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
        result[0] += 0.0030864197530864187;
        result[1] += 0.009259259259259257;
        result[2] += 0.8086419753086418;
        result[3] += 0.16358024691358022;
        result[4] += 0;
        result[5] += 0.015432098765432094;
      } else {
        result[0] += 0.00723589001447178;
        result[1] += 0;
        result[2] += 0.9522431259044862;
        result[3] += 0.03183791606367583;
        result[4] += 0.001447178002894356;
        result[5] += 0.00723589001447178;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
        result[0] += 0.16104868913857678;
        result[1] += 0.00749063670411985;
        result[2] += 0.018726591760299626;
        result[3] += 0;
        result[4] += 0.7827715355805244;
        result[5] += 0.0299625468164794;
      } else {
        result[0] += 0;
        result[1] += 0.004071661237785016;
        result[2] += 0.0024429967426710096;
        result[3] += 0.15553745928338764;
        result[4] += 0.07166123778501629;
        result[5] += 0.7662866449511401;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0.9733009708737864;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.02669902912621359;
        result[5] += 0;
      } else {
        result[0] += 0.6850192061459668;
        result[1] += 0.039692701664532655;
        result[2] += 0.04161331626120359;
        result[3] += 0.07234314980793856;
        result[4] += 0.10371318822023048;
        result[5] += 0.05761843790012805;
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.01834862385321101;
        result[3] += 0.7155963302752294;
        result[4] += 0.009174311926605505;
        result[5] += 0.25688073394495414;
      } else {
        result[0] += 0.020689655172413793;
        result[1] += 0;
        result[2] += 0.4413793103448276;
        result[3] += 0.22758620689655173;
        result[4] += 0.041379310344827586;
        result[5] += 0.2689655172413793;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
        result[0] += 0.03488372093023256;
        result[1] += 0.023255813953488372;
        result[2] += 0.4186046511627907;
        result[3] += 0.11627906976744186;
        result[4] += 0.06976744186046512;
        result[5] += 0.3372093023255814;
      } else {
        result[0] += 0.007866273352999017;
        result[1] += 0.0009832841691248771;
        result[2] += 0.904621435594887;
        result[3] += 0.07177974434611603;
        result[4] += 0.003933136676499509;
        result[5] += 0.010816125860373648;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        result[0] += 0.2431865828092243;
        result[1] += 0.006289308176100629;
        result[2] += 0.006289308176100629;
        result[3] += 0;
        result[4] += 0.6373165618448637;
        result[5] += 0.1069182389937107;
      } else {
        result[0] += 0.0009267840593141798;
        result[1] += 0.0037071362372567192;
        result[2] += 0.0009267840593141798;
        result[3] += 0.10194624652455977;
        result[4] += 0.08063021316033364;
        result[5] += 0.8118628359592215;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)103.5) ) ) {
        result[0] += 0.6477556109725685;
        result[1] += 0.06359102244389025;
        result[2] += 0.034289276807980044;
        result[3] += 0.1047381546134663;
        result[4] += 0.07356608478802991;
        result[5] += 0.07605985037406482;
      } else {
        result[0] += 0.01647058823529412;
        result[1] += 0.9741176470588235;
        result[2] += 0;
        result[3] += 0.002352941176470588;
        result[4] += 0.007058823529411765;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.02912621359223301;
        result[3] += 0.6310679611650486;
        result[4] += 0.009708737864077669;
        result[5] += 0.3300970873786408;
      } else {
        result[0] += 0;
        result[1] += 0.042682926829268296;
        result[2] += 0.47560975609756095;
        result[3] += 0.31097560975609756;
        result[4] += 0.036585365853658534;
        result[5] += 0.13414634146341464;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        result[0] += 0;
        result[1] += 0.027777777777777776;
        result[2] += 0.4722222222222222;
        result[3] += 0.17592592592592593;
        result[4] += 0.027777777777777776;
        result[5] += 0.2962962962962963;
      } else {
        result[0] += 0.013856812933025405;
        result[1] += 0.0011547344110854503;
        result[2] += 0.9064665127020786;
        result[3] += 0.05889145496535797;
        result[4] += 0.0011547344110854503;
        result[5] += 0.018475750577367205;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
        result[0] += 0.15891472868217055;
        result[1] += 0.050387596899224806;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7596899224806202;
        result[5] += 0.031007751937984496;
      } else {
        result[0] += 0.004084967320261438;
        result[1] += 0.013888888888888888;
        result[2] += 0.00980392156862745;
        result[3] += 0.14705882352941177;
        result[4] += 0.07761437908496732;
        result[5] += 0.7475490196078431;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)67.5) ) ) {
        result[0] += 0.01896551724137931;
        result[1] += 0.7724137931034483;
        result[2] += 0;
        result[3] += 0.02413793103448276;
        result[4] += 0.17413793103448275;
        result[5] += 0.010344827586206896;
      } else {
        result[0] += 0.6545562835020846;
        result[1] += 0.019058963668850508;
        result[2] += 0.06491959499702203;
        result[3] += 0.09767718880285885;
        result[4] += 0.08397855866587255;
        result[5] += 0.07980941036331149;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)99) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8333333333333334;
        result[4] += 0;
        result[5] += 0.16666666666666666;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.29032258064516137;
        result[3] += 0.2741935483870968;
        result[4] += 0.03225806451612904;
        result[5] += 0.40322580645161293;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
        result[0] += 0;
        result[1] += 0.020725388601036274;
        result[2] += 0.6424870466321244;
        result[3] += 0.2435233160621762;
        result[4] += 0;
        result[5] += 0.09326424870466322;
      } else {
        result[0] += 0.0012406947890818859;
        result[1] += 0.0012406947890818859;
        result[2] += 0.93424317617866;
        result[3] += 0.05459057071960298;
        result[4] += 0.0024813895781637717;
        result[5] += 0.00620347394540943;
      }
    }
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)41) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.013574660633484163;
        result[1] += 0.004524886877828055;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9502262443438914;
        result[5] += 0.03167420814479638;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
        result[0] += 0.02373887240356083;
        result[1] += 0.01483679525222552;
        result[2] += 0;
        result[3] += 0.06627101879327399;
        result[4] += 0.057368941641938676;
        result[5] += 0.837784371909001;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.053763440860215055;
        result[3] += 0.5232974910394266;
        result[4] += 0.007168458781362007;
        result[5] += 0.4157706093189964;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9530201342281879;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.04697986577181208;
        result[5] += 0;
      } else {
        result[0] += 0.677522349936143;
        result[1] += 0.031928480204342274;
        result[2] += 0.028735632183908046;
        result[3] += 0.06321839080459771;
        result[4] += 0.12260536398467432;
        result[5] += 0.07598978288633461;
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
        result[0] += 0;
        result[1] += 0.047619047619047616;
        result[2] += 0.32967032967032966;
        result[3] += 0.38095238095238093;
        result[4] += 0.03296703296703297;
        result[5] += 0.2087912087912088;
      } else {
        result[0] += 0.036489151873767264;
        result[1] += 0.004930966469428009;
        result[2] += 0.8609467455621302;
        result[3] += 0.07988165680473375;
        result[4] += 0.0019723865877712037;
        result[5] += 0.01577909270216963;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        result[0] += 0.29245283018867924;
        result[1] += 0.04339622641509434;
        result[2] += 0;
        result[3] += 0.005660377358490566;
        result[4] += 0.5792452830188679;
        result[5] += 0.07924528301886792;
      } else {
        result[0] += 0.011933174224343675;
        result[1] += 0.005568814638027049;
        result[2] += 0.012728719172633254;
        result[3] += 0.1288782816229117;
        result[4] += 0.08671439936356404;
        result[5] += 0.7541766109785203;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)56.5) ) ) {
        result[0] += 0;
        result[1] += 0.988479262672811;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.01152073732718894;
        result[5] += 0;
      } else {
        result[0] += 0.631917631917632;
        result[1] += 0.02574002574002574;
        result[2] += 0.0694980694980695;
        result[3] += 0.12162162162162163;
        result[4] += 0.08108108108108109;
        result[5] += 0.07014157014157014;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.29245283018867924;
        result[3] += 0.5377358490566038;
        result[4] += 0;
        result[5] += 0.16981132075471697;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.8076923076923077;
        result[3] += 0.19230769230769232;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
        result[0] += 0.022222222222222223;
        result[1] += 0.044444444444444446;
        result[2] += 0.3333333333333333;
        result[3] += 0.022222222222222223;
        result[4] += 0.08888888888888889;
        result[5] += 0.4888888888888889;
      } else {
        result[0] += 0.004716981132075471;
        result[1] += 0;
        result[2] += 0.936320754716981;
        result[3] += 0.04599056603773584;
        result[4] += 0;
        result[5] += 0.012971698113207544;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        result[0] += 0.13279132791327913;
        result[1] += 0.08943089430894309;
        result[2] += 0;
        result[3] += 0.005420054200542005;
        result[4] += 0.6585365853658537;
        result[5] += 0.11382113821138211;
      } else {
        result[0] += 0.0008445945945945946;
        result[1] += 0;
        result[2] += 0.010135135135135136;
        result[3] += 0.14358108108108109;
        result[4] += 0.07263513513513513;
        result[5] += 0.7728040540540541;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.005825242718446602;
        result[1] += 0.8446601941747572;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.14951456310679612;
        result[5] += 0;
      } else {
        result[0] += 0.6561944279786603;
        result[1] += 0.026081802015411975;
        result[2] += 0.054534676941315946;
        result[3] += 0.09247184350918791;
        result[4] += 0.06046235921754594;
        result[5] += 0.11025489033787789;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)105.5) ) ) {
        result[0] += 0.014925373134328358;
        result[1] += 0;
        result[2] += 0.31343283582089554;
        result[3] += 0.582089552238806;
        result[4] += 0;
        result[5] += 0.08955223880597014;
      } else {
        result[0] += 0.019230769230769232;
        result[1] += 0;
        result[2] += 0.8076923076923077;
        result[3] += 0.09615384615384616;
        result[4] += 0;
        result[5] += 0.07692307692307693;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
        result[0] += 0.025889967637540458;
        result[1] += 0;
        result[2] += 0.8349514563106797;
        result[3] += 0.11650485436893206;
        result[4] += 0;
        result[5] += 0.0226537216828479;
      } else {
        result[0] += 0.001736111111111111;
        result[1] += 0;
        result[2] += 0.9652777777777778;
        result[3] += 0.024305555555555556;
        result[4] += 0;
        result[5] += 0.008680555555555556;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)71.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.04888888888888889;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9155555555555556;
        result[5] += 0.035555555555555556;
      } else {
        result[0] += 0.030852994555353903;
        result[1] += 0.004537205081669692;
        result[2] += 0.0018148820326678765;
        result[3] += 0.12341197822141561;
        result[4] += 0.05263157894736842;
        result[5] += 0.7867513611615246;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)103.5) ) ) {
        result[0] += 0.5777215189873418;
        result[1] += 0.04759493670886076;
        result[2] += 0.05620253164556962;
        result[3] += 0.09012658227848101;
        result[4] += 0.11189873417721519;
        result[5] += 0.11645569620253164;
      } else {
        result[0] += 0.023076923076923078;
        result[1] += 0.9641025641025641;
        result[2] += 0;
        result[3] += 0.002564102564102564;
        result[4] += 0.010256410256410256;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)93) ) ) {
        result[0] += 0;
        result[1] += 0.019230769230769232;
        result[2] += 0.057692307692307696;
        result[3] += 0.2980769230769231;
        result[4] += 0.10576923076923077;
        result[5] += 0.5192307692307693;
      } else {
        result[0] += 0.029411764705882353;
        result[1] += 0.007352941176470588;
        result[2] += 0.4852941176470588;
        result[3] += 0.38235294117647056;
        result[4] += 0;
        result[5] += 0.09558823529411764;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
        result[0] += 0.22727272727272727;
        result[1] += 0;
        result[2] += 0.2727272727272727;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.5;
      } else {
        result[0] += 0.0022935779816513763;
        result[1] += 0;
        result[2] += 0.9128440366972477;
        result[3] += 0.07339449541284404;
        result[4] += 0;
        result[5] += 0.011467889908256881;
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 15;
  result[1] /= 15;
  result[2] /= 15;
  result[3] /= 15;
  result[4] /= 15;
  result[5] /= 15;
  
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
