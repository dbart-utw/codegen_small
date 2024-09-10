
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
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)71.5) ) ) {
          result[0] += 0;
          result[1] += 0.013761467889908258;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9724770642201835;
          result[5] += 0.013761467889908258;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4;
          result[3] += 0;
          result[4] += 0.2;
          result[5] += 0.4;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)67.5) ) ) {
          result[0] += 0.0012195121951219512;
          result[1] += 0;
          result[2] += 0.003658536585365854;
          result[3] += 0.054878048780487805;
          result[4] += 0.05975609756097561;
          result[5] += 0.8804878048780488;
        } else {
          result[0] += 0.13566739606126918;
          result[1] += 0.052516411378555804;
          result[2] += 0.059080962800875284;
          result[3] += 0.34354485776805255;
          result[4] += 0.03282275711159738;
          result[5] += 0.3763676148796499;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0.47368421052631576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5263157894736842;
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
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7706766917293233;
          result[1] += 0.031578947368421054;
          result[2] += 0.0015037593984962407;
          result[3] += 0.017293233082706767;
          result[4] += 0.13984962406015036;
          result[5] += 0.039097744360902256;
        } else {
          result[0] += 0.19789473684210526;
          result[1] += 0.01263157894736842;
          result[2] += 0.2736842105263158;
          result[3] += 0.28421052631578947;
          result[4] += 0.056842105263157895;
          result[5] += 0.17473684210526316;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)61) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.23076923076923078;
          result[3] += 0.11538461538461539;
          result[4] += 0.4230769230769231;
          result[5] += 0.23076923076923078;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0.027027027027027032;
          result[2] += 0.21621621621621626;
          result[3] += 0.5270270270270271;
          result[4] += 0;
          result[5] += 0.22972972972972977;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7846153846153846;
          result[3] += 0.13846153846153847;
          result[4] += 0;
          result[5] += 0.07692307692307693;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)74.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)86.5) ) ) {
          result[0] += 0.006734006734006734;
          result[1] += 0;
          result[2] += 0.8215488215488216;
          result[3] += 0.1447811447811448;
          result[4] += 0.003367003367003367;
          result[5] += 0.02356902356902357;
        } else {
          result[0] += 0.0034602076124567475;
          result[1] += 0;
          result[2] += 0.9757785467128027;
          result[3] += 0.01903114186851211;
          result[4] += 0;
          result[5] += 0.0017301038062283738;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)65) ) ) {
          result[0] += 0.008333333333333333;
          result[1] += 0.004166666666666667;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9583333333333334;
          result[5] += 0.029166666666666667;
        } else {
          result[0] += 0;
          result[1] += 0.6071428571428571;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.39285714285714285;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          result[0] += 0.0014367816091954023;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.028735632183908046;
          result[4] += 0.020114942528735632;
          result[5] += 0.9497126436781609;
        } else {
          result[0] += 0.10800744878957169;
          result[1] += 0.0260707635009311;
          result[2] += 0.0037243947858473;
          result[3] += 0.2849162011173184;
          result[4] += 0.0782122905027933;
          result[5] += 0.49906890130353815;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)85) ) ) {
          result[0] += 0;
          result[1] += 0.6595744680851064;
          result[2] += 0;
          result[3] += 0.04255319148936171;
          result[4] += 0.25531914893617025;
          result[5] += 0.04255319148936171;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)74) ) ) {
          result[0] += 0.24253731343283583;
          result[1] += 0.1455223880597015;
          result[2] += 0.022388059701492536;
          result[3] += 0.011194029850746268;
          result[4] += 0.503731343283582;
          result[5] += 0.07462686567164178;
        } else {
          result[0] += 0.7880523731587561;
          result[1] += 0.004909983633387889;
          result[2] += 0.03273322422258593;
          result[3] += 0.05810147299509002;
          result[4] += 0.03600654664484452;
          result[5] += 0.08019639934533551;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)77) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)69.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.15;
          result[3] += 0.125;
          result[4] += 0.075;
          result[5] += 0.65;
        } else {
          result[0] += 0;
          result[1] += 0.005319148936170213;
          result[2] += 0.16489361702127658;
          result[3] += 0.6063829787234043;
          result[4] += 0.0425531914893617;
          result[5] += 0.18085106382978725;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)106.5) ) ) {
          result[0] += 0.10317460317460317;
          result[1] += 0.023809523809523808;
          result[2] += 0.5396825396825397;
          result[3] += 0.19047619047619047;
          result[4] += 0.023809523809523808;
          result[5] += 0.11904761904761904;
        } else {
          result[0] += 0;
          result[1] += 0.9285714285714286;
          result[2] += 0;
          result[3] += 0.07142857142857142;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)97.5) ) ) {
          result[0] += 0.017391304347826087;
          result[1] += 0;
          result[2] += 0.8492753623188406;
          result[3] += 0.11884057971014493;
          result[4] += 0;
          result[5] += 0.014492753623188406;
        } else {
          result[0] += 0.8333333333333334;
          result[1] += 0;
          result[2] += 0.16666666666666666;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9032258064516129;
          result[3] += 0.0967741935483871;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0021008403361344537;
          result[1] += 0;
          result[2] += 0.9852941176470589;
          result[3] += 0.012605042016806723;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
          result[0] += 0.015151515151515152;
          result[1] += 0.015151515151515152;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9507575757575758;
          result[5] += 0.01893939393939394;
        } else {
          result[0] += 0;
          result[1] += 0.030303030303030304;
          result[2] += 0;
          result[3] += 0.2727272727272727;
          result[4] += 0.42424242424242425;
          result[5] += 0.2727272727272727;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
          result[0] += 0.7045454545454546;
          result[1] += 0.007575757575757576;
          result[2] += 0.015151515151515152;
          result[3] += 0;
          result[4] += 0.26515151515151514;
          result[5] += 0.007575757575757576;
        } else {
          result[0] += 0.005361930294906166;
          result[1] += 0.004468275245755138;
          result[2] += 0.002680965147453083;
          result[3] += 0.08668453976764968;
          result[4] += 0.0840035746201966;
          result[5] += 0.8168007149240393;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)49.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)70.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.7894736842105263;
          result[1] += 0.21052631578947367;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)77) ) ) {
          result[0] += 0.15592515592515593;
          result[1] += 0.07484407484407485;
          result[2] += 0.0498960498960499;
          result[3] += 0.3492723492723493;
          result[4] += 0.06652806652806653;
          result[5] += 0.30353430353430355;
        } else {
          result[0] += 0.6977777777777777;
          result[1] += 0.06370370370370369;
          result[2] += 0.07259259259259258;
          result[3] += 0.05555555555555554;
          result[4] += 0.08148148148148147;
          result[5] += 0.02888888888888888;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)60) ) ) {
          result[0] += 0;
          result[1] += 0.2;
          result[2] += 0.2;
          result[3] += 0;
          result[4] += 0.6;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.041666666666666664;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.9583333333333334;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2924528301886793;
          result[3] += 0.6415094339622642;
          result[4] += 0;
          result[5] += 0.06603773584905662;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8548387096774194;
          result[3] += 0.06451612903225806;
          result[4] += 0.016129032258064516;
          result[5] += 0.06451612903225806;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
          result[0] += 0.18181818181818182;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2727272727272727;
          result[5] += 0.5454545454545454;
        } else {
          result[0] += 0;
          result[1] += 0.006329113924050633;
          result[2] += 0.7911392405063291;
          result[3] += 0.16455696202531644;
          result[4] += 0;
          result[5] += 0.0379746835443038;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)90) ) ) {
          result[0] += 0.5;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9693877551020408;
          result[3] += 0.026530612244897958;
          result[4] += 0;
          result[5] += 0.004081632653061225;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)101.5) ) ) {
          result[0] += 0.1019830028328612;
          result[1] += 0.011331444759206801;
          result[2] += 0.0028328611898017003;
          result[3] += 0;
          result[4] += 0.7847025495750709;
          result[5] += 0.0991501416430595;
        } else {
          result[0] += 0.047619047619047616;
          result[1] += 0.9047619047619048;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.047619047619047616;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.006072874493927126;
          result[3] += 0.0860323886639676;
          result[4] += 0.0728744939271255;
          result[5] += 0.8350202429149798;
        } else {
          result[0] += 0.006993006993006994;
          result[1] += 0.006993006993006994;
          result[2] += 0.006993006993006994;
          result[3] += 0.6573426573426574;
          result[4] += 0.06293706293706296;
          result[5] += 0.2587412587412588;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)92.5) ) ) {
          result[0] += 0;
          result[1] += 0.19642857142857142;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8035714285714286;
          result[5] += 0;
        } else {
          result[0] += 0.002070393374741201;
          result[1] += 0.94824016563147;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.049689440993788817;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.8533333333333334;
          result[1] += 0.022745098039215685;
          result[2] += 0.01411764705882353;
          result[3] += 0.02431372549019608;
          result[4] += 0.05568627450980392;
          result[5] += 0.02980392156862745;
        } else {
          result[0] += 0.17329545454545456;
          result[1] += 0.008522727272727272;
          result[2] += 0.16761363636363635;
          result[3] += 0.2528409090909091;
          result[4] += 0.06534090909090909;
          result[5] += 0.33238636363636365;
        }
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.03333333333333333;
          result[5] += 0.9666666666666667;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.11475409836065574;
          result[3] += 0.5409836065573771;
          result[4] += 0;
          result[5] += 0.3442622950819672;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3;
          result[3] += 0.7;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9166666666666666;
          result[3] += 0.08333333333333333;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06060606060606061;
          result[3] += 0.7575757575757576;
          result[4] += 0;
          result[5] += 0.18181818181818182;
        } else {
          result[0] += 0.09090909090909091;
          result[1] += 0;
          result[2] += 0.8181818181818182;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.09090909090909091;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
          result[0] += 0.02097902097902098;
          result[1] += 0.01048951048951049;
          result[2] += 0.7132867132867133;
          result[3] += 0.2062937062937063;
          result[4] += 0.027972027972027972;
          result[5] += 0.02097902097902098;
        } else {
          result[0] += 0.004213483146067415;
          result[1] += 0.0028089887640449433;
          result[2] += 0.9466292134831459;
          result[3] += 0.03230337078651685;
          result[4] += 0;
          result[5] += 0.014044943820224715;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
          result[0] += 0.009259259259259259;
          result[1] += 0;
          result[2] += 0.004629629629629629;
          result[3] += 0;
          result[4] += 0.9768518518518519;
          result[5] += 0.009259259259259259;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6521739130434783;
          result[5] += 0.34782608695652173;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)60) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.15789473684210525;
          result[3] += 0.10526315789473684;
          result[4] += 0.2631578947368421;
          result[5] += 0.47368421052631576;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)55.5) ) ) {
          result[0] += 0.1111111111111111;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7777777777777778;
          result[5] += 0.1111111111111111;
        } else {
          result[0] += 0;
          result[1] += 0.002785515320334262;
          result[2] += 0.002785515320334262;
          result[3] += 0.016713091922005572;
          result[4] += 0.018105849582172703;
          result[5] += 0.9596100278551533;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)57.5) ) ) {
          result[0] += 0.9166666666666666;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.08333333333333333;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.02390438247011952;
          result[2] += 0.00597609561752988;
          result[3] += 0.31274900398406374;
          result[4] += 0.099601593625498;
          result[5] += 0.5577689243027888;
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)53.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.8235294117647058;
          result[2] += 0;
          result[3] += 0.029411764705882353;
          result[4] += 0.14705882352941177;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)67.5) ) ) {
          result[0] += 0.13076923076923078;
          result[1] += 0.2076923076923077;
          result[2] += 0;
          result[3] += 0.023076923076923078;
          result[4] += 0.6384615384615384;
          result[5] += 0;
        } else {
          result[0] += 0.784756527875794;
          result[1] += 0.020465772759350742;
          result[2] += 0.022582921665490474;
          result[3] += 0.056457304163726185;
          result[4] += 0.07621736062103035;
          result[5] += 0.03952011291460833;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0.01486988847583643;
          result[2] += 0.24907063197026022;
          result[3] += 0.3940520446096654;
          result[4] += 0.01858736059479554;
          result[5] += 0.32342007434944237;
        } else {
          result[0] += 0.04027504911591356;
          result[1] += 0.0068762278978389;
          result[2] += 0.8379174852652259;
          result[3] += 0.07465618860510806;
          result[4] += 0.014734774066797643;
          result[5] += 0.025540275049115914;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.059907834101382486;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9400921658986175;
          result[5] += 0;
        } else {
          result[0] += 0.3076923076923077;
          result[1] += 0.07179487179487179;
          result[2] += 0.015384615384615385;
          result[3] += 0.05128205128205128;
          result[4] += 0.3128205128205128;
          result[5] += 0.24102564102564103;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.026923076923076925;
          result[4] += 0.04358974358974359;
          result[5] += 0.9294871794871795;
        } else {
          result[0] += 0.022727272727272728;
          result[1] += 0;
          result[2] += 0.05397727272727273;
          result[3] += 0.45738636363636365;
          result[4] += 0.11647727272727272;
          result[5] += 0.3494318181818182;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.7617187500000001;
          result[1] += 0.06328125000000001;
          result[2] += 0.007031250000000001;
          result[3] += 0.028125000000000004;
          result[4] += 0.11171875000000002;
          result[5] += 0.028125000000000004;
        } else {
          result[0] += 0.16736401673640167;
          result[1] += 0.03765690376569038;
          result[2] += 0.0794979079497908;
          result[3] += 0.2384937238493724;
          result[4] += 0.09623430962343096;
          result[5] += 0.3807531380753138;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
          result[0] += 0;
          result[1] += 0.9976635514018691;
          result[2] += 0.002336448598130841;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0.018691588785046728;
          result[2] += 0.018691588785046728;
          result[3] += 0.22429906542056074;
          result[4] += 0.04672897196261682;
          result[5] += 0.6915887850467289;
        } else {
          result[0] += 0;
          result[1] += 0.0625;
          result[2] += 0.625;
          result[3] += 0.0625;
          result[4] += 0.125;
          result[5] += 0.125;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09230769230769231;
          result[3] += 0.6923076923076923;
          result[4] += 0;
          result[5] += 0.2153846153846154;
        } else {
          result[0] += 0.0693069306930693;
          result[1] += 0;
          result[2] += 0.5544554455445544;
          result[3] += 0.3168316831683168;
          result[4] += 0.0099009900990099;
          result[5] += 0.04950495049504949;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)93) ) ) {
          result[0] += 0.3181818181818182;
          result[1] += 0.09090909090909091;
          result[2] += 0.5909090909090909;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.8888888888888888;
          result[1] += 0;
          result[2] += 0.05555555555555555;
          result[3] += 0;
          result[4] += 0.05555555555555555;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.041666666666666664;
          result[3] += 0.041666666666666664;
          result[4] += 0;
          result[5] += 0.9166666666666666;
        } else {
          result[0] += 0.005112474437627813;
          result[1] += 0.0030674846625766876;
          result[2] += 0.9110429447852761;
          result[3] += 0.0685071574642127;
          result[4] += 0.0030674846625766876;
          result[5] += 0.009202453987730064;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          result[0] += 0.005235602094240838;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9947643979057592;
          result[5] += 0;
        } else {
          result[0] += 0.05128205128205128;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5641025641025641;
          result[5] += 0.38461538461538464;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0014005602240896359;
          result[3] += 0.03221288515406162;
          result[4] += 0.03361344537815126;
          result[5] += 0.9327731092436975;
        } else {
          result[0] += 0.061452513966480445;
          result[1] += 0.05027932960893855;
          result[2] += 0.00931098696461825;
          result[3] += 0.3500931098696462;
          result[4] += 0.0670391061452514;
          result[5] += 0.4618249534450652;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)97.5) ) ) {
          result[0] += 0.006329113924050634;
          result[1] += 0.21518987341772156;
          result[2] += 0.025316455696202535;
          result[3] += 0.012658227848101267;
          result[4] += 0.7215189873417722;
          result[5] += 0.018987341772151903;
        } else {
          result[0] += 0.010025062656641603;
          result[1] += 0.9598997493734336;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.03007518796992481;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0.8129277566539924;
          result[1] += 0.04410646387832699;
          result[2] += 0.0045627376425855515;
          result[3] += 0.03193916349809886;
          result[4] += 0.08517110266159696;
          result[5] += 0.02129277566539924;
        } else {
          result[0] += 0.14678899082568808;
          result[1] += 0.011467889908256881;
          result[2] += 0.1926605504587156;
          result[3] += 0.26146788990825687;
          result[4] += 0.08027522935779817;
          result[5] += 0.3073394495412844;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)102.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.018867924528301886;
          result[3] += 0.8867924528301887;
          result[4] += 0;
          result[5] += 0.09433962264150944;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5555555555555556;
          result[3] += 0.1111111111111111;
          result[4] += 0.3333333333333333;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05263157894736842;
          result[3] += 0.47368421052631576;
          result[4] += 0;
          result[5] += 0.47368421052631576;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9069767441860465;
          result[3] += 0.09302325581395349;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)99) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7894736842105263;
          result[3] += 0.20647773279352227;
          result[4] += 0;
          result[5] += 0.004048582995951417;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)72.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.012121212121212121;
          result[1] += 0;
          result[2] += 0.9484848484848485;
          result[3] += 0.03333333333333333;
          result[4] += 0;
          result[5] += 0.006060606060606061;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
          result[0] += 0.012738853503184714;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9872611464968153;
          result[5] += 0;
        } else {
          result[0] += 0.26262626262626265;
          result[1] += 0.010101010101010102;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5252525252525253;
          result[5] += 0.20202020202020202;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.0044742729306487695;
          result[2] += 0;
          result[3] += 0.040268456375838924;
          result[4] += 0.05704697986577181;
          result[5] += 0.8982102908277405;
        } else {
          result[0] += 0.006557377049180328;
          result[1] += 0.04262295081967213;
          result[2] += 0.036065573770491806;
          result[3] += 0.49836065573770494;
          result[4] += 0.05573770491803279;
          result[5] += 0.36065573770491804;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0.27777777777777785;
          result[2] += 0;
          result[3] += 0.00925925925925926;
          result[4] += 0.6944444444444445;
          result[5] += 0.01851851851851852;
        } else {
          result[0] += 0.004301075268817204;
          result[1] += 0.956989247311828;
          result[2] += 0.004301075268817204;
          result[3] += 0;
          result[4] += 0.034408602150537634;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.8429149797570851;
          result[1] += 0.03562753036437247;
          result[2] += 0.0016194331983805667;
          result[3] += 0.012145748987854251;
          result[4] += 0.08097165991902834;
          result[5] += 0.026720647773279354;
        } else {
          result[0] += 0.10344827586206898;
          result[1] += 0.03651115618661258;
          result[2] += 0.22312373225152132;
          result[3] += 0.2900608519269777;
          result[4] += 0.03245436105476674;
          result[5] += 0.3144016227180528;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
          result[0] += 0.11764705882352941;
          result[1] += 0.23529411764705882;
          result[2] += 0;
          result[3] += 0.058823529411764705;
          result[4] += 0.11764705882352941;
          result[5] += 0.47058823529411764;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.12195121951219512;
          result[3] += 0.7560975609756098;
          result[4] += 0;
          result[5] += 0.12195121951219512;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)89) ) ) {
          result[0] += 0.024390243902439025;
          result[1] += 0.0975609756097561;
          result[2] += 0.07317073170731707;
          result[3] += 0.0975609756097561;
          result[4] += 0.07317073170731707;
          result[5] += 0.6341463414634146;
        } else {
          result[0] += 0.02439024390243902;
          result[1] += 0;
          result[2] += 0.5365853658536585;
          result[3] += 0.3414634146341463;
          result[4] += 0;
          result[5] += 0.09756097560975607;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)108.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8104575163398693;
          result[3] += 0.16993464052287582;
          result[4] += 0;
          result[5] += 0.0196078431372549;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9487179487179487;
          result[3] += 0.05128205128205128;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
          result[0] += 0.7;
          result[1] += 0;
          result[2] += 0.3;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.01149425287356322;
          result[1] += 0;
          result[2] += 0.9507389162561577;
          result[3] += 0.036124794745484405;
          result[4] += 0;
          result[5] += 0.0016420361247947456;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.004081632653061225;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9469387755102041;
          result[5] += 0.04897959183673469;
        } else {
          result[0] += 0;
          result[1] += 0.8;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)66.5) ) ) {
          result[0] += 0.0013717421124828531;
          result[1] += 0;
          result[2] += 0.0027434842249657062;
          result[3] += 0.03429355281207133;
          result[4] += 0.03017832647462277;
          result[5] += 0.9314128943758574;
        } else {
          result[0] += 0.08576998050682261;
          result[1] += 0.007797270955165692;
          result[2] += 0.007797270955165692;
          result[3] += 0.3216374269005848;
          result[4] += 0.06627680311890838;
          result[5] += 0.5107212475633528;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)45.5) ) ) {
          result[0] += 0;
          result[1] += 0.9954954954954955;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0045045045045045045;
          result[5] += 0;
        } else {
          result[0] += 0.062111801242236024;
          result[1] += 0.2919254658385093;
          result[2] += 0.09316770186335403;
          result[3] += 0.024844720496894408;
          result[4] += 0.45962732919254656;
          result[5] += 0.06832298136645963;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
          result[0] += 0.43060959792477305;
          result[1] += 0.07782101167315175;
          result[2] += 0.08041504539559015;
          result[3] += 0.16472114137483787;
          result[4] += 0.10894941634241245;
          result[5] += 0.13748378728923477;
        } else {
          result[0] += 0.8891402714932126;
          result[1] += 0.013574660633484163;
          result[2] += 0.02828054298642534;
          result[3] += 0.01583710407239819;
          result[4] += 0.048642533936651584;
          result[5] += 0.004524886877828055;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
          result[0] += 0;
          result[1] += 0.06666666666666665;
          result[2] += 0.1333333333333333;
          result[3] += 0.5833333333333333;
          result[4] += 0.016666666666666663;
          result[5] += 0.19999999999999996;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03571428571428571;
          result[3] += 0.2857142857142857;
          result[4] += 0;
          result[5] += 0.6785714285714286;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)116) ) ) {
          result[0] += 0.016666666666666666;
          result[1] += 0.03333333333333333;
          result[2] += 0.8166666666666667;
          result[3] += 0.06666666666666667;
          result[4] += 0.03333333333333333;
          result[5] += 0.03333333333333333;
        } else {
          result[0] += 0.75;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.28;
          result[3] += 0.44;
          result[4] += 0;
          result[5] += 0.28;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7839195979899498;
          result[3] += 0.20100502512562818;
          result[4] += 0;
          result[5] += 0.015075376884422112;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0.0014641288433382138;
          result[1] += 0;
          result[2] += 0.9531478770131772;
          result[3] += 0.043923865300146414;
          result[4] += 0;
          result[5] += 0.0014641288433382138;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)71.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)64.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.6666666666666666;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3333333333333333;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)76.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3076923076923077;
          result[5] += 0.6923076923076923;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
          result[0] += 0.5952380952380953;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04761904761904762;
          result[4] += 0.14285714285714288;
          result[5] += 0.2142857142857143;
        } else {
          result[0] += 0.0030425963488843813;
          result[1] += 0.004056795131845842;
          result[2] += 0.0030425963488843813;
          result[3] += 0.05476673427991886;
          result[4] += 0.05172413793103448;
          result[5] += 0.8833671399594321;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1111111111111111;
          result[3] += 0.07407407407407407;
          result[4] += 0;
          result[5] += 0.8148148148148148;
        } else {
          result[0] += 0;
          result[1] += 0.010101010101010102;
          result[2] += 0;
          result[3] += 0.7474747474747475;
          result[4] += 0.020202020202020204;
          result[5] += 0.2222222222222222;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)68.5) ) ) {
          result[0] += 0.10752688172043011;
          result[1] += 0.25806451612903225;
          result[2] += 0.014336917562724014;
          result[3] += 0.014336917562724014;
          result[4] += 0.5483870967741935;
          result[5] += 0.05734767025089606;
        } else {
          result[0] += 0.7427217332430603;
          result[1] += 0.014218009478672987;
          result[2] += 0.022342586323628982;
          result[3] += 0.08192281651997294;
          result[4] += 0.07109004739336494;
          result[5] += 0.06770480704129994;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81.5) ) ) {
          result[0] += 0.013574660633484165;
          result[1] += 0.9819004524886878;
          result[2] += 0;
          result[3] += 0.002262443438914028;
          result[4] += 0.002262443438914028;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)80.5) ) ) {
          result[0] += 0;
          result[1] += 0.04487179487179487;
          result[2] += 0.12179487179487179;
          result[3] += 0.5256410256410257;
          result[4] += 0.019230769230769232;
          result[5] += 0.28846153846153844;
        } else {
          result[0] += 0.16734693877551024;
          result[1] += 0.020408163265306124;
          result[2] += 0.47755102040816333;
          result[3] += 0.10612244897959185;
          result[4] += 0.04489795918367347;
          result[5] += 0.18367346938775514;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6028368794326241;
          result[3] += 0.3262411347517731;
          result[4] += 0;
          result[5] += 0.07092198581560284;
        } else {
          result[0] += 0.005657708628005658;
          result[1] += 0.0014144271570014145;
          result[2] += 0.9278642149929278;
          result[3] += 0.06082036775106082;
          result[4] += 0;
          result[5] += 0.004243281471004243;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)70.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0.01764705882352941;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9647058823529412;
          result[5] += 0.01764705882352941;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5862068965517241;
          result[5] += 0.41379310344827586;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)90.5) ) ) {
          result[0] += 0.007276507276507277;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.07484407484407485;
          result[4] += 0.04677754677754678;
          result[5] += 0.8711018711018711;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.04854368932038835;
          result[3] += 0.6504854368932039;
          result[4] += 0.04854368932038835;
          result[5] += 0.2524271844660194;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47) ) ) {
          result[0] += 0;
          result[1] += 0.9877149877149877;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.012285012285012284;
          result[5] += 0;
        } else {
          result[0] += 0.03141361256544503;
          result[1] += 0.27748691099476447;
          result[2] += 0.03141361256544503;
          result[3] += 0.026178010471204192;
          result[4] += 0.6073298429319373;
          result[5] += 0.026178010471204192;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          result[0] += 0.8037453183520598;
          result[1] += 0.03895131086142321;
          result[2] += 0;
          result[3] += 0.022471910112359546;
          result[4] += 0.09363295880149812;
          result[5] += 0.041198501872659166;
        } else {
          result[0] += 0.16808510638297872;
          result[1] += 0.01276595744680851;
          result[2] += 0.18723404255319148;
          result[3] += 0.3595744680851064;
          result[4] += 0.02127659574468085;
          result[5] += 0.251063829787234;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0.05970149253731343;
          result[2] += 0.014925373134328358;
          result[3] += 0.16417910447761194;
          result[4] += 0.05970149253731343;
          result[5] += 0.7014925373134329;
        } else {
          result[0] += 0.011111111111111112;
          result[1] += 0.022222222222222223;
          result[2] += 0.15555555555555556;
          result[3] += 0.6444444444444445;
          result[4] += 0;
          result[5] += 0.16666666666666666;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)91.5) ) ) {
          result[0] += 0.08653846153846154;
          result[1] += 0.07692307692307693;
          result[2] += 0.6346153846153846;
          result[3] += 0.16346153846153846;
          result[4] += 0.019230769230769232;
          result[5] += 0.019230769230769232;
        } else {
          result[0] += 0.8529411764705882;
          result[1] += 0;
          result[2] += 0.11764705882352941;
          result[3] += 0;
          result[4] += 0.029411764705882353;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07692307692307693;
          result[3] += 0;
          result[4] += 0.15384615384615385;
          result[5] += 0.7692307692307693;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.21052631578947367;
          result[3] += 0.7368421052631579;
          result[4] += 0;
          result[5] += 0.05263157894736842;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)101) ) ) {
          result[0] += 0.004219409282700422;
          result[1] += 0;
          result[2] += 0.8059071729957806;
          result[3] += 0.16033755274261605;
          result[4] += 0;
          result[5] += 0.029535864978902954;
        } else {
          result[0] += 0.006722689075630253;
          result[1] += 0;
          result[2] += 0.9512605042016807;
          result[3] += 0.042016806722689086;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.014354066985645933;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9808612440191388;
          result[5] += 0.004784688995215311;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)87.5) ) ) {
          result[0] += 0.03579175704989154;
          result[1] += 0.005422993492407809;
          result[2] += 0.004338394793926247;
          result[3] += 0.04229934924078091;
          result[4] += 0.04880694143167028;
          result[5] += 0.8633405639913232;
        } else {
          result[0] += 0.05519480519480519;
          result[1] += 0.00974025974025974;
          result[2] += 0.003246753246753247;
          result[3] += 0.4707792207792208;
          result[4] += 0.08441558441558442;
          result[5] += 0.37662337662337664;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.7771303714493809;
          result[1] += 0.056081573197378005;
          result[2] += 0.004369992716678805;
          result[3] += 0.01820830298616169;
          result[4] += 0.11507647487254188;
          result[5] += 0.029133284777858703;
        } else {
          result[0] += 0.16390041493775934;
          result[1] += 0.01037344398340249;
          result[2] += 0.23443983402489627;
          result[3] += 0.21784232365145229;
          result[4] += 0.06224066390041494;
          result[5] += 0.3112033195020747;
        }
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
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 0.1;
          result[2] += 0.2;
          result[3] += 0;
          result[4] += 0.7;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.09090909090909091;
          result[5] += 0.9090909090909091;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.17391304347826086;
          result[3] += 0.6086956521739131;
          result[4] += 0.014492753623188406;
          result[5] += 0.2028985507246377;
        } else {
          result[0] += 0.007751937984496122;
          result[1] += 0.015503875968992244;
          result[2] += 0.6511627906976744;
          result[3] += 0.2635658914728682;
          result[4] += 0.007751937984496122;
          result[5] += 0.054263565891472854;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0.7272727272727273;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.09090909090909091;
          result[5] += 0.18181818181818182;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)74.5) ) ) {
          result[0] += 0.3684210526315789;
          result[1] += 0.07894736842105263;
          result[2] += 0.47368421052631576;
          result[3] += 0.07894736842105263;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0035629453681710215;
          result[1] += 0.0011876484560570072;
          result[2] += 0.9263657957244655;
          result[3] += 0.060570071258907364;
          result[4] += 0.0011876484560570072;
          result[5] += 0.007125890736342043;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)55) ) ) {
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
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)67.5) ) ) {
          result[0] += 0.03864734299516908;
          result[1] += 0.10628019323671498;
          result[2] += 0.007246376811594203;
          result[3] += 0.012077294685990338;
          result[4] += 0.7560386473429952;
          result[5] += 0.07971014492753623;
        } else {
          result[0] += 0.9416058394160585;
          result[1] += 0.024330900243309007;
          result[2] += 0;
          result[3] += 0.0048661800486618015;
          result[4] += 0.014598540145985403;
          result[5] += 0.014598540145985403;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
          result[0] += 0.002070393374741201;
          result[1] += 0;
          result[2] += 0.0010351966873706005;
          result[3] += 0.06935817805383022;
          result[4] += 0.07971014492753623;
          result[5] += 0.8478260869565217;
        } else {
          result[0] += 0.14427312775330398;
          result[1] += 0.05947136563876652;
          result[2] += 0.08259911894273128;
          result[3] += 0.30837004405286345;
          result[4] += 0.12334801762114538;
          result[5] += 0.28193832599118945;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0.5;
        } else {
          result[0] += 0.9892665474060823;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.01073345259391771;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)89) ) ) {
          result[0] += 0.022222222222222223;
          result[1] += 0;
          result[2] += 0.8;
          result[3] += 0.08888888888888889;
          result[4] += 0;
          result[5] += 0.08888888888888889;
        } else {
          result[0] += 0.8695652173913043;
          result[1] += 0;
          result[2] += 0.10869565217391304;
          result[3] += 0;
          result[4] += 0.021739130434782608;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
          result[0] += 0.05319148936170213;
          result[1] += 0;
          result[2] += 0.5425531914893617;
          result[3] += 0.3191489361702128;
          result[4] += 0.010638297872340425;
          result[5] += 0.07446808510638298;
        } else {
          result[0] += 0.026680896478121666;
          result[1] += 0;
          result[2] += 0.9135538954108858;
          result[3] += 0.05656350053361793;
          result[4] += 0;
          result[5] += 0.0032017075773745998;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 0.03873239436619719;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9577464788732395;
          result[5] += 0.003521126760563381;
        } else {
          result[0] += 0.021505376344086023;
          result[1] += 0.10752688172043011;
          result[2] += 0.043010752688172046;
          result[3] += 0.010752688172043012;
          result[4] += 0.6021505376344086;
          result[5] += 0.21505376344086022;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)57.5) ) ) {
          result[0] += 0.0022522522522522522;
          result[1] += 0.9977477477477478;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.07692307692307693;
          result[1] += 0.28205128205128205;
          result[2] += 0;
          result[3] += 0.05128205128205128;
          result[4] += 0.5897435897435898;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
          result[0] += 0.8333333333333334;
          result[1] += 0.015873015873015872;
          result[2] += 0;
          result[3] += 0.015873015873015872;
          result[4] += 0.07936507936507936;
          result[5] += 0.05555555555555555;
        } else {
          result[0] += 0.002145922746781116;
          result[1] += 0.00536480686695279;
          result[2] += 0;
          result[3] += 0.07510729613733906;
          result[4] += 0.055793991416309016;
          result[5] += 0.8615879828326181;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8205741626794258;
          result[1] += 0.019138755980861243;
          result[2] += 0.003189792663476874;
          result[3] += 0.05263157894736842;
          result[4] += 0.06379585326953748;
          result[5] += 0.04066985645933014;
        } else {
          result[0] += 0.14590163934426228;
          result[1] += 0.03442622950819672;
          result[2] += 0.17868852459016393;
          result[3] += 0.30327868852459017;
          result[4] += 0.04918032786885246;
          result[5] += 0.28852459016393445;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)93.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61) ) ) {
          result[0] += 0;
          result[1] += 0.2222222222222222;
          result[2] += 0.1111111111111111;
          result[3] += 0;
          result[4] += 0.6666666666666666;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.02702702702702703;
          result[2] += 0;
          result[3] += 0.24324324324324326;
          result[4] += 0.02702702702702703;
          result[5] += 0.7027027027027027;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0.028169014084507043;
          result[2] += 0.29577464788732394;
          result[3] += 0.5352112676056338;
          result[4] += 0;
          result[5] += 0.14084507042253522;
        } else {
          result[0] += 0.07317073170731707;
          result[1] += 0.024390243902439025;
          result[2] += 0.6707317073170732;
          result[3] += 0.13414634146341464;
          result[4] += 0;
          result[5] += 0.0975609756097561;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0;
          result[4] += 0.3333333333333333;
          result[5] += 0.3333333333333333;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)87.5) ) ) {
          result[0] += 0.006006006006006007;
          result[1] += 0;
          result[2] += 0.8378378378378379;
          result[3] += 0.13513513513513517;
          result[4] += 0;
          result[5] += 0.021021021021021026;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.97;
          result[3] += 0.03;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)70.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0.012422360248447204;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9813664596273292;
          result[5] += 0.006211180124223602;
        } else {
          result[0] += 0.02040816326530612;
          result[1] += 0.16326530612244897;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3469387755102041;
          result[5] += 0.46938775510204084;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)84.5) ) ) {
          result[0] += 0.00333889816360601;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.025041736227045076;
          result[4] += 0.035058430717863104;
          result[5] += 0.9365609348914858;
        } else {
          result[0] += 0.04180064308681672;
          result[1] += 0.006430868167202572;
          result[2] += 0.003215434083601286;
          result[3] += 0.24437299035369775;
          result[4] += 0.05144694533762058;
          result[5] += 0.6527331189710611;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9642857142857143;
          result[5] += 0.03571428571428571;
        } else {
          result[0] += 0;
          result[1] += 0.9977272727272727;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0022727272727272726;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          result[0] += 0.7223382045929019;
          result[1] += 0.025052192066805846;
          result[2] += 0.008350730688935281;
          result[3] += 0.03479471120389701;
          result[4] += 0.14961725817675714;
          result[5] += 0.059846903270702856;
        } else {
          result[0] += 0.14705882352941177;
          result[1] += 0.041666666666666664;
          result[2] += 0.1642156862745098;
          result[3] += 0.2818627450980392;
          result[4] += 0.0661764705882353;
          result[5] += 0.29901960784313725;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)64.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6363636363636364;
          result[3] += 0;
          result[4] += 0.36363636363636365;
          result[5] += 0;
        } else {
          result[0] += 0.013333333333333334;
          result[1] += 0.02666666666666667;
          result[2] += 0;
          result[3] += 0.013333333333333334;
          result[4] += 0.06666666666666667;
          result[5] += 0.88;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.12777777777777777;
          result[3] += 0.6444444444444445;
          result[4] += 0.011111111111111112;
          result[5] += 0.21666666666666667;
        } else {
          result[0] += 0.08536585365853659;
          result[1] += 0.10975609756097561;
          result[2] += 0.5;
          result[3] += 0.15853658536585366;
          result[4] += 0.04878048780487805;
          result[5] += 0.0975609756097561;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)64) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)110.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
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
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
          result[0] += 0.5813953488372093;
          result[1] += 0;
          result[2] += 0.3953488372093023;
          result[3] += 0.023255813953488372;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.007049345417925479;
          result[1] += 0;
          result[2] += 0.9133937562940585;
          result[3] += 0.07653575025176235;
          result[4] += 0;
          result[5] += 0.003021148036253777;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
          result[0] += 0.004291845493562232;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.004291845493562232;
          result[4] += 0.9742489270386266;
          result[5] += 0.017167381974248927;
        } else {
          result[0] += 0;
          result[1] += 0.8260869565217391;
          result[2] += 0.08695652173913043;
          result[3] += 0;
          result[4] += 0.043478260869565216;
          result[5] += 0.043478260869565216;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          result[0] += 0.0407149950347567;
          result[1] += 0.01787487586891758;
          result[2] += 0;
          result[3] += 0.036742800397219465;
          result[4] += 0.08838133068520357;
          result[5] += 0.8162859980139027;
        } else {
          result[0] += 0.02575107296137339;
          result[1] += 0.004291845493562232;
          result[2] += 0;
          result[3] += 0.6180257510729614;
          result[4] += 0.008583690987124463;
          result[5] += 0.34334763948497854;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          result[0] += 0.7460207612456746;
          result[1] += 0.038062283737024215;
          result[2] += 0.0006920415224913494;
          result[3] += 0.024221453287197225;
          result[4] += 0.14186851211072662;
          result[5] += 0.0491349480968858;
        } else {
          result[0] += 0.17073170731707318;
          result[1] += 0.017738359201773836;
          result[2] += 0.23059866962305986;
          result[3] += 0.3148558758314856;
          result[4] += 0.031042128603104215;
          result[5] += 0.23503325942350334;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)80) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14285714285714285;
          result[3] += 0.38961038961038963;
          result[4] += 0.012987012987012988;
          result[5] += 0.45454545454545453;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.875;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.125;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)92.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.29411764705882354;
          result[3] += 0.35294117647058826;
          result[4] += 0.11764705882352941;
          result[5] += 0.23529411764705882;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9411764705882353;
          result[3] += 0.058823529411764705;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)38.5) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5714285714285714;
          result[3] += 0.35714285714285715;
          result[4] += 0.07142857142857142;
          result[5] += 0;
        } else {
          result[0] += 0.0034762456546929316;
          result[1] += 0.0011587485515643105;
          result[2] += 0.9212050984936269;
          result[3] += 0.06141367323290846;
          result[4] += 0;
          result[5] += 0.012746234067207415;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
          result[0] += 0.004830917874396135;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9323671497584541;
          result[5] += 0.06280193236714976;
        } else {
          result[0] += 0.35454545454545455;
          result[1] += 0.12727272727272726;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2727272727272727;
          result[5] += 0.24545454545454545;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.004744958481613286;
          result[2] += 0.002372479240806643;
          result[3] += 0.045077105575326216;
          result[4] += 0.045077105575326216;
          result[5] += 0.9027283511269276;
        } else {
          result[0] += 0;
          result[1] += 0.0438871473354232;
          result[2] += 0.02821316614420063;
          result[3] += 0.47962382445141066;
          result[4] += 0.0219435736677116;
          result[5] += 0.4263322884012539;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)52.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)47.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.20833333333333334;
          result[1] += 0.375;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4166666666666667;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)66.5) ) ) {
          result[0] += 0.0472972972972973;
          result[1] += 0.32432432432432434;
          result[2] += 0.013513513513513514;
          result[3] += 0.006756756756756757;
          result[4] += 0.581081081081081;
          result[5] += 0.02702702702702703;
        } else {
          result[0] += 0.7437745740498034;
          result[1] += 0.01703800786369594;
          result[2] += 0.03211009174311927;
          result[3] += 0.06880733944954129;
          result[4] += 0.07011795543905636;
          result[5] += 0.06815203145478375;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)74.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.10714285714285714;
          result[4] += 0;
          result[5] += 0.8928571428571429;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05952380952380952;
          result[3] += 0.7619047619047619;
          result[4] += 0;
          result[5] += 0.17857142857142858;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.17647058823529413;
          result[3] += 0.0784313725490196;
          result[4] += 0.0784313725490196;
          result[5] += 0.6666666666666666;
        } else {
          result[0] += 0;
          result[1] += 0.07142857142857144;
          result[2] += 0.5714285714285715;
          result[3] += 0.07142857142857144;
          result[4] += 0.14285714285714288;
          result[5] += 0.14285714285714288;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)101.5) ) ) {
          result[0] += 0.03496503496503497;
          result[1] += 0;
          result[2] += 0.3986013986013986;
          result[3] += 0.38461538461538464;
          result[4] += 0.055944055944055944;
          result[5] += 0.1258741258741259;
        } else {
          result[0] += 0.05;
          result[1] += 0.003125;
          result[2] += 0.759375;
          result[3] += 0.1625;
          result[4] += 0;
          result[5] += 0.025;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)94.5) ) ) {
          result[0] += 0.08695652173913043;
          result[1] += 0.17391304347826086;
          result[2] += 0.43478260869565216;
          result[3] += 0.30434782608695654;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0036231884057971015;
          result[1] += 0;
          result[2] += 0.9692028985507246;
          result[3] += 0.02717391304347826;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          result[0] += 0.017699115044247787;
          result[1] += 0.0752212389380531;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8849557522123894;
          result[5] += 0.022123893805309734;
        } else {
          result[0] += 0.514018691588785;
          result[1] += 0.009345794392523364;
          result[2] += 0.009345794392523364;
          result[3] += 0.009345794392523364;
          result[4] += 0.205607476635514;
          result[5] += 0.2523364485981308;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04040404040404041;
          result[4] += 0.05808080808080808;
          result[5] += 0.9015151515151515;
        } else {
          result[0] += 0.00558659217877095;
          result[1] += 0.025139664804469275;
          result[2] += 0.027932960893854747;
          result[3] += 0.33798882681564246;
          result[4] += 0.07541899441340782;
          result[5] += 0.5279329608938548;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)102.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
          result[0] += 0.01910828025477707;
          result[1] += 0.27388535031847133;
          result[2] += 0.03184713375796178;
          result[3] += 0.07643312101910828;
          result[4] += 0.554140127388535;
          result[5] += 0.044585987261146494;
        } else {
          result[0] += 0.7400140154169587;
          result[1] += 0.028731604765241767;
          result[2] += 0.0350385423966363;
          result[3] += 0.06306937631394534;
          result[4] += 0.06377014716187807;
          result[5] += 0.06937631394533987;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)97) ) ) {
          result[0] += 0.012315270935960592;
          result[1] += 0.9876847290640394;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)92.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)69.5) ) ) {
          result[0] += 0;
          result[1] += 0.13043478260869565;
          result[2] += 0.043478260869565216;
          result[3] += 0;
          result[4] += 0.6956521739130435;
          result[5] += 0.13043478260869565;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05154639175257732;
          result[3] += 0.21649484536082475;
          result[4] += 0.041237113402061855;
          result[5] += 0.6907216494845361;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)70.5) ) ) {
          result[0] += 0.4852941176470589;
          result[1] += 0.23529411764705885;
          result[2] += 0.13235294117647062;
          result[3] += 0.04411764705882354;
          result[4] += 0.014705882352941178;
          result[5] += 0.08823529411764708;
        } else {
          result[0] += 0.00892857142857143;
          result[1] += 0.004464285714285715;
          result[2] += 0.4598214285714286;
          result[3] += 0.3660714285714286;
          result[4] += 0.004464285714285715;
          result[5] += 0.15625000000000003;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.46478873239436624;
          result[3] += 0.4225352112676057;
          result[4] += 0;
          result[5] += 0.11267605633802819;
        } else {
          result[0] += 0.026666666666666672;
          result[1] += 0;
          result[2] += 0.7911111111111112;
          result[3] += 0.15555555555555559;
          result[4] += 0;
          result[5] += 0.026666666666666672;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9683544303797469;
          result[3] += 0.03164556962025317;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)58.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9759036144578314;
          result[5] += 0.024096385542168676;
        } else {
          result[0] += 0.028169014084507043;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5774647887323944;
          result[5] += 0.39436619718309857;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0.024361948955916472;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05104408352668213;
          result[4] += 0.037122969837587005;
          result[5] += 0.8874709976798144;
        } else {
          result[0] += 0.06017191977077364;
          result[1] += 0.06303724928366762;
          result[2] += 0.045845272206303724;
          result[3] += 0.41260744985673353;
          result[4] += 0.034383954154727794;
          result[5] += 0.3839541547277937;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)68.5) ) ) {
          result[0] += 0.0744186046511628;
          result[1] += 0.3023255813953489;
          result[2] += 0.00930232558139535;
          result[3] += 0.00930232558139535;
          result[4] += 0.5627906976744187;
          result[5] += 0.041860465116279076;
        } else {
          result[0] += 0.7077205882352942;
          result[1] += 0.011029411764705883;
          result[2] += 0.0545343137254902;
          result[3] += 0.08823529411764706;
          result[4] += 0.05575980392156863;
          result[5] += 0.08272058823529412;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0.9886621315192744;
          result[2] += 0;
          result[3] += 0.0045351473922902496;
          result[4] += 0.006802721088435374;
          result[5] += 0;
        } else {
          result[0] += 0.125;
          result[1] += 0.5625;
          result[2] += 0;
          result[3] += 0.3125;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63) ) ) {
          result[0] += 0;
          result[1] += 0.25;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.75;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.11764705882352941;
          result[4] += 0;
          result[5] += 0.8823529411764706;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.10344827586206896;
          result[3] += 0.8275862068965517;
          result[4] += 0;
          result[5] += 0.06896551724137931;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5909090909090909;
          result[3] += 0.18181818181818182;
          result[4] += 0;
          result[5] += 0.22727272727272727;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)95.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3;
          result[3] += 0.425;
          result[4] += 0.025;
          result[5] += 0.25;
        } else {
          result[0] += 0.03418803418803419;
          result[1] += 0;
          result[2] += 0.6239316239316239;
          result[3] += 0.3076923076923077;
          result[4] += 0.017094017094017096;
          result[5] += 0.017094017094017096;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0.2727272727272727;
          result[2] += 0.18181818181818182;
          result[3] += 0.45454545454545453;
          result[4] += 0;
          result[5] += 0.09090909090909091;
        } else {
          result[0] += 0.008567931456548347;
          result[1] += 0;
          result[2] += 0.9314565483476133;
          result[3] += 0.05385556915544676;
          result[4] += 0.0012239902080783353;
          result[5] += 0.004895960832313341;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)39.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.011029411764705883;
          result[1] += 0.011029411764705883;
          result[2] += 0;
          result[3] += 0.04044117647058824;
          result[4] += 0.9080882352941176;
          result[5] += 0.029411764705882353;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
          result[0] += 0.9621212121212122;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.03787878787878788;
          result[5] += 0;
        } else {
          result[0] += 0.016233766233766232;
          result[1] += 0.0016233766233766235;
          result[2] += 0.00487012987012987;
          result[3] += 0.1185064935064935;
          result[4] += 0.1038961038961039;
          result[5] += 0.7548701298701299;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)59) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)55.5) ) ) {
          result[0] += 0.002386634844868735;
          result[1] += 0.9904534606205251;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.007159904534606206;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.45098039215686275;
          result[2] += 0.0196078431372549;
          result[3] += 0.0784313725490196;
          result[4] += 0.45098039215686275;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
          result[0] += 0.35287081339712917;
          result[1] += 0.05502392344497608;
          result[2] += 0.06937799043062201;
          result[3] += 0.24282296650717702;
          result[4] += 0.10287081339712918;
          result[5] += 0.17703349282296652;
        } else {
          result[0] += 0.8907563025210082;
          result[1] += 0.016806722689075626;
          result[2] += 0.02881152460984393;
          result[3] += 0.0012004801920768304;
          result[4] += 0.06002400960384152;
          result[5] += 0.002400960384153661;
        }
      }
    }
  } else {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)107.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.125;
          result[3] += 0.734375;
          result[4] += 0;
          result[5] += 0.140625;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.875;
          result[3] += 0.125;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0.25;
        } else {
          result[0] += 0.045454545454545456;
          result[1] += 0;
          result[2] += 0.7878787878787878;
          result[3] += 0.07575757575757576;
          result[4] += 0.015151515151515152;
          result[5] += 0.07575757575757576;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07142857142857142;
          result[3] += 0.35714285714285715;
          result[4] += 0;
          result[5] += 0.5714285714285714;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.72;
          result[3] += 0.16;
          result[4] += 0;
          result[5] += 0.12;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)105.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7846153846153846;
          result[3] += 0.2;
          result[4] += 0;
          result[5] += 0.015384615384615385;
        } else {
          result[0] += 0.018156424581005588;
          result[1] += 0;
          result[2] += 0.9511173184357542;
          result[3] += 0.027932960893854747;
          result[4] += 0;
          result[5] += 0.002793296089385475;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
          result[0] += 0.009950248756218905;
          result[1] += 0.03482587064676617;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9353233830845771;
          result[5] += 0.01990049751243781;
        } else {
          result[0] += 0;
          result[1] += 0.016129032258064516;
          result[2] += 0;
          result[3] += 0.2903225806451613;
          result[4] += 0.27419354838709675;
          result[5] += 0.41935483870967744;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
          result[0] += 0.01858736059479554;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03593556381660471;
          result[4] += 0.04460966542750929;
          result[5] += 0.9008674101610905;
        } else {
          result[0] += 0.06206896551724138;
          result[1] += 0.022988505747126436;
          result[2] += 0.0022988505747126436;
          result[3] += 0.31264367816091954;
          result[4] += 0.07126436781609195;
          result[5] += 0.5287356321839081;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)91) ) ) {
          result[0] += 0;
          result[1] += 0.23170731707317074;
          result[2] += 0.024390243902439025;
          result[3] += 0;
          result[4] += 0.7439024390243902;
          result[5] += 0;
        } else {
          result[0] += 0.010230179028132993;
          result[1] += 0.989769820971867;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          result[0] += 0.8150422102839601;
          result[1] += 0.03069838833461243;
          result[2] += 0.0015349194167306216;
          result[3] += 0.026093630084420567;
          result[4] += 0.10974673829623945;
          result[5] += 0.01688411358403684;
        } else {
          result[0] += 0.17272727272727273;
          result[1] += 0;
          result[2] += 0.2636363636363636;
          result[3] += 0.32727272727272727;
          result[4] += 0.01818181818181818;
          result[5] += 0.21818181818181817;
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.013513513513513514;
          result[3] += 0.21621621621621623;
          result[4] += 0.08108108108108109;
          result[5] += 0.6891891891891891;
        } else {
          result[0] += 0;
          result[1] += 0.038461538461538464;
          result[2] += 0.1794871794871795;
          result[3] += 0.5769230769230769;
          result[4] += 0;
          result[5] += 0.20512820512820512;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)75) ) ) {
          result[0] += 0.4090909090909091;
          result[1] += 0.4090909090909091;
          result[2] += 0.09090909090909091;
          result[3] += 0;
          result[4] += 0.09090909090909091;
          result[5] += 0;
        } else {
          result[0] += 0.018867924528301886;
          result[1] += 0;
          result[2] += 0.7924528301886793;
          result[3] += 0.1320754716981132;
          result[4] += 0.03773584905660377;
          result[5] += 0.018867924528301886;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)75.5) ) ) {
          result[0] += 0.2972972972972973;
          result[1] += 0;
          result[2] += 0.21621621621621623;
          result[3] += 0.21621621621621623;
          result[4] += 0;
          result[5] += 0.2702702702702703;
        } else {
          result[0] += 0.0318840579710145;
          result[1] += 0;
          result[2] += 0.7797101449275363;
          result[3] += 0.15942028985507248;
          result[4] += 0;
          result[5] += 0.028985507246376815;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
          result[0] += 0.014354066985645933;
          result[1] += 0.004784688995215311;
          result[2] += 0.861244019138756;
          result[3] += 0.11004784688995216;
          result[4] += 0;
          result[5] += 0.009569377990430622;
        } else {
          result[0] += 0.0025188916876574307;
          result[1] += 0;
          result[2] += 0.9748110831234257;
          result[3] += 0.022670025188916875;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
          result[0] += 0.0031446540880503146;
          result[1] += 0.018867924528301886;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9559748427672956;
          result[5] += 0.0220125786163522;
        } else {
          result[0] += 0.0379746835443038;
          result[1] += 0.21518987341772153;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5569620253164557;
          result[5] += 0.189873417721519;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)57.5) ) ) {
          result[0] += 0;
          result[1] += 0.9956616052060737;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004338394793926247;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.4583333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5416666666666666;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          result[0] += 0.0014970059880239522;
          result[1] += 0.0029940119760479044;
          result[2] += 0;
          result[3] += 0.023952095808383235;
          result[4] += 0.03143712574850299;
          result[5] += 0.9401197604790419;
        } else {
          result[0] += 0.06369426751592357;
          result[1] += 0.012738853503184714;
          result[2] += 0;
          result[3] += 0.3481953290870488;
          result[4] += 0.04883227176220807;
          result[5] += 0.5265392781316348;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0.8333333333333334;
          result[1] += 0.01610305958132045;
          result[2] += 0.001610305958132045;
          result[3] += 0.027375201288244767;
          result[4] += 0.0853462157809984;
          result[5] += 0.036231884057971016;
        } else {
          result[0] += 0.16404494382022472;
          result[1] += 0.060674157303370786;
          result[2] += 0.24044943820224718;
          result[3] += 0.26741573033707866;
          result[4] += 0.058426966292134834;
          result[5] += 0.20898876404494382;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)77) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07936507936507936;
          result[3] += 0.15873015873015872;
          result[4] += 0.12698412698412698;
          result[5] += 0.6349206349206349;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9333333333333333;
          result[4] += 0;
          result[5] += 0.06666666666666667;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)92.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0;
          result[4] += 0.125;
          result[5] += 0.625;
        } else {
          result[0] += 0;
          result[1] += 0.047244094488188976;
          result[2] += 0.5511811023622047;
          result[3] += 0.3543307086614173;
          result[4] += 0;
          result[5] += 0.047244094488188976;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)122.5) ) ) {
          result[0] += 0;
          result[1] += 0.3333333333333333;
          result[2] += 0.3333333333333333;
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
          result[0] += 0.014598540145985401;
          result[1] += 0;
          result[2] += 0.8175182481751825;
          result[3] += 0.15328467153284672;
          result[4] += 0.0072992700729927005;
          result[5] += 0.0072992700729927005;
        } else {
          result[0] += 0.018893387314439947;
          result[1] += 0;
          result[2] += 0.9446693657219973;
          result[3] += 0.03643724696356275;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)71.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)68.5) ) ) {
          result[0] += 0.0044444444444444444;
          result[1] += 0.057777777777777775;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.88;
          result[5] += 0.057777777777777775;
        } else {
          result[0] += 0.3283582089552239;
          result[1] += 0;
          result[2] += 0.029850746268656716;
          result[3] += 0;
          result[4] += 0.3880597014925373;
          result[5] += 0.2537313432835821;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04223433242506812;
          result[4] += 0.04632152588555858;
          result[5] += 0.9114441416893733;
        } else {
          result[0] += 0;
          result[1] += 0.08208955223880597;
          result[2] += 0.048507462686567165;
          result[3] += 0.34701492537313433;
          result[4] += 0.04477611940298507;
          result[5] += 0.47761194029850745;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)68.5) ) ) {
          result[0] += 0.15019762845849802;
          result[1] += 0.20948616600790515;
          result[2] += 0;
          result[3] += 0.03557312252964427;
          result[4] += 0.5731225296442688;
          result[5] += 0.03162055335968379;
        } else {
          result[0] += 0.7090322580645162;
          result[1] += 0.007741935483870969;
          result[2] += 0.03161290322580646;
          result[3] += 0.0870967741935484;
          result[4] += 0.06451612903225808;
          result[5] += 0.10000000000000002;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0.9780487804878049;
          result[2] += 0;
          result[3] += 0.007317073170731708;
          result[4] += 0.012195121951219513;
          result[5] += 0.0024390243902439024;
        } else {
          result[0] += 0.375;
          result[1] += 0.25;
          result[2] += 0.375;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)87.5) ) ) {
          result[0] += 0.057692307692307696;
          result[1] += 0.07692307692307693;
          result[2] += 0.038461538461538464;
          result[3] += 0.25;
          result[4] += 0.057692307692307696;
          result[5] += 0.5192307692307693;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06741573033707865;
          result[3] += 0.6853932584269663;
          result[4] += 0.0449438202247191;
          result[5] += 0.20224719101123595;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0.015625;
          result[2] += 0.015625;
          result[3] += 0.171875;
          result[4] += 0.125;
          result[5] += 0.671875;
        } else {
          result[0] += 0.01;
          result[1] += 0.01;
          result[2] += 0.7;
          result[3] += 0.17;
          result[4] += 0.03;
          result[5] += 0.08;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)111.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7277227722772277;
          result[3] += 0.2524752475247525;
          result[4] += 0;
          result[5] += 0.019801980198019802;
        } else {
          result[0] += 0.02127659574468085;
          result[1] += 0;
          result[2] += 0.925531914893617;
          result[3] += 0.05319148936170213;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
          result[0] += 0.6428571428571429;
          result[1] += 0;
          result[2] += 0.35714285714285715;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.005747126436781609;
          result[1] += 0;
          result[2] += 0.9597701149425287;
          result[3] += 0.028735632183908046;
          result[4] += 0;
          result[5] += 0.005747126436781609;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)47.5) ) ) {
          result[0] += 0;
          result[1] += 0.9166666666666666;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.08333333333333333;
          result[5] += 0;
        } else {
          result[0] += 0.007633587786259542;
          result[1] += 0.019083969465648856;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9274809160305344;
          result[5] += 0.04580152671755725;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
          result[0] += 0.8378378378378378;
          result[1] += 0.006756756756756757;
          result[2] += 0;
          result[3] += 0.033783783783783786;
          result[4] += 0.07432432432432433;
          result[5] += 0.0472972972972973;
        } else {
          result[0] += 0.02115541090317331;
          result[1] += 0.007323026851098454;
          result[2] += 0.0008136696501220504;
          result[3] += 0.11472742066720912;
          result[4] += 0.07323026851098453;
          result[5] += 0.7827502034174125;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)86.5) ) ) {
          result[0] += 0.045454545454545456;
          result[1] += 0.36363636363636365;
          result[2] += 0;
          result[3] += 0.09090909090909091;
          result[4] += 0.5;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9977220956719818;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002277904328018223;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0.7985074626865671;
          result[1] += 0.0406301824212272;
          result[2] += 0.006633499170812604;
          result[3] += 0.03067993366500829;
          result[4] += 0.0978441127694859;
          result[5] += 0.02570480928689884;
        } else {
          result[0] += 0.16338028169014085;
          result[1] += 0.016901408450704224;
          result[2] += 0.18873239436619718;
          result[3] += 0.36056338028169016;
          result[4] += 0.056338028169014086;
          result[5] += 0.2140845070422535;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)74) ) ) {
          result[0] += 0;
          result[1] += 0.125;
          result[2] += 0.08333333333333333;
          result[3] += 0.125;
          result[4] += 0.5416666666666666;
          result[5] += 0.125;
        } else {
          result[0] += 0.027777777777777776;
          result[1] += 0.041666666666666664;
          result[2] += 0.06944444444444445;
          result[3] += 0.3472222222222222;
          result[4] += 0.08333333333333333;
          result[5] += 0.4305555555555556;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.043478260869565216;
          result[3] += 0.6521739130434783;
          result[4] += 0;
          result[5] += 0.30434782608695654;
        } else {
          result[0] += 0.020618556701030927;
          result[1] += 0;
          result[2] += 0.6082474226804123;
          result[3] += 0.30927835051546393;
          result[4] += 0;
          result[5] += 0.061855670103092786;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)108.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
          result[0] += 0.28571428571428575;
          result[1] += 0;
          result[2] += 0.28571428571428575;
          result[3] += 0.14285714285714288;
          result[4] += 0;
          result[5] += 0.28571428571428575;
        } else {
          result[0] += 0.008450704225352112;
          result[1] += 0;
          result[2] += 0.819718309859155;
          result[3] += 0.15774647887323945;
          result[4] += 0;
          result[5] += 0.014084507042253521;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          result[0] += 0.6428571428571429;
          result[1] += 0;
          result[2] += 0.35714285714285715;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0055762081784386614;
          result[1] += 0;
          result[2] += 0.966542750929368;
          result[3] += 0.027881040892193308;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)93.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)97) ) ) {
          result[0] += 0.012345679012345678;
          result[1] += 0.012345679012345678;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8981481481481481;
          result[5] += 0.07716049382716049;
        } else {
          result[0] += 0;
          result[1] += 0.88;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.12;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)56.5) ) ) {
          result[0] += 0;
          result[1] += 0.9913793103448276;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.008620689655172414;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.6440677966101696;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.33898305084745767;
          result[5] += 0.016949152542372885;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0.034292035398230086;
          result[1] += 0;
          result[2] += 0.0011061946902654867;
          result[3] += 0.032079646017699116;
          result[4] += 0.028761061946902654;
          result[5] += 0.9037610619469026;
        } else {
          result[0] += 0.0584958217270195;
          result[1] += 0.03899721448467967;
          result[2] += 0.008356545961002786;
          result[3] += 0.467966573816156;
          result[4] += 0.022284122562674095;
          result[5] += 0.403899721448468;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          result[0] += 0.8233851185609158;
          result[1] += 0.018806214227309895;
          result[2] += 0.006541291905151268;
          result[3] += 0.032706459525756335;
          result[4] += 0.0678659035159444;
          result[5] += 0.050695012264922325;
        } else {
          result[0] += 0.19371727748691103;
          result[1] += 0.023560209424083774;
          result[2] += 0.2172774869109948;
          result[3] += 0.29319371727748694;
          result[4] += 0.052356020942408384;
          result[5] += 0.21989528795811522;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.21348314606741572;
          result[3] += 0.5955056179775281;
          result[4] += 0.011235955056179775;
          result[5] += 0.1797752808988764;
        } else {
          result[0] += 0.08333333333333333;
          result[1] += 0;
          result[2] += 0.5833333333333334;
          result[3] += 0.1388888888888889;
          result[4] += 0;
          result[5] += 0.19444444444444445;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)107) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5714285714285715;
          result[3] += 0.3214285714285715;
          result[4] += 0;
          result[5] += 0.10714285714285715;
        } else {
          result[0] += 0.04477611940298507;
          result[1] += 0;
          result[2] += 0.8880597014925373;
          result[3] += 0.06716417910447761;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)71.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.75;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)94.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0.75;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.004149377593360997;
          result[1] += 0;
          result[2] += 0.9474412171507608;
          result[3] += 0.04564315352697096;
          result[4] += 0;
          result[5] += 0.002766251728907331;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9882352941176471;
          result[5] += 0.011764705882352941;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5740740740740741;
          result[5] += 0.42592592592592593;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
          result[0] += 0.02453271028037383;
          result[1] += 0.005841121495327103;
          result[2] += 0.007009345794392523;
          result[3] += 0.0397196261682243;
          result[4] += 0.07593457943925233;
          result[5] += 0.8469626168224299;
        } else {
          result[0] += 0.03283582089552239;
          result[1] += 0.008955223880597015;
          result[2] += 0.005970149253731343;
          result[3] += 0.46865671641791046;
          result[4] += 0.050746268656716415;
          result[5] += 0.43283582089552236;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)50) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)89) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.0022573363431151244;
          result[1] += 0.9932279909706547;
          result[2] += 0;
          result[3] += 0.0022573363431151244;
          result[4] += 0.0022573363431151244;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7760758570386579;
          result[1] += 0.05324580598103574;
          result[2] += 0.005105762217359592;
          result[3] += 0.016046681254558718;
          result[4] += 0.11962071480671042;
          result[5] += 0.029905178701677606;
        } else {
          result[0] += 0.15456238361266295;
          result[1] += 0.05772811918063315;
          result[2] += 0.21601489757914338;
          result[3] += 0.29236499068901306;
          result[4] += 0.07262569832402235;
          result[5] += 0.20670391061452514;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)106.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.022727272727272728;
          result[3] += 0.13636363636363635;
          result[4] += 0.022727272727272728;
          result[5] += 0.8181818181818182;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6666666666666666;
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)102.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1896551724137931;
          result[3] += 0.6379310344827587;
          result[4] += 0;
          result[5] += 0.1724137931034483;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8666666666666667;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.13333333333333333;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2903225806451613;
          result[3] += 0.6774193548387096;
          result[4] += 0;
          result[5] += 0.03225806451612903;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7254901960784313;
          result[3] += 0.22549019607843138;
          result[4] += 0;
          result[5] += 0.049019607843137254;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
          result[0] += 0.06349206349206349;
          result[1] += 0.06349206349206349;
          result[2] += 0.6825396825396826;
          result[3] += 0;
          result[4] += 0.031746031746031744;
          result[5] += 0.15873015873015872;
        } else {
          result[0] += 0.004043126684636119;
          result[1] += 0.0013477088948787063;
          result[2] += 0.9393530997304582;
          result[3] += 0.05390835579514825;
          result[4] += 0;
          result[5] += 0.0013477088948787063;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0091324200913242;
          result[2] += 0;
          result[3] += 0.0045662100456621;
          result[4] += 0.9726027397260274;
          result[5] += 0.0136986301369863;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2903225806451613;
          result[5] += 0.7096774193548387;
        } else {
          result[0] += 0;
          result[1] += 0.6551724137931034;
          result[2] += 0;
          result[3] += 0.20689655172413793;
          result[4] += 0;
          result[5] += 0.13793103448275862;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
          result[0] += 0.3013698630136986;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4931506849315068;
          result[5] += 0.2054794520547945;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.001218026796589525;
          result[3] += 0.049939098660170524;
          result[4] += 0.020706455542021926;
          result[5] += 0.928136419001218;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
          result[0] += 0.14358974358974358;
          result[1] += 0;
          result[2] += 0.015384615384615385;
          result[3] += 0.13846153846153847;
          result[4] += 0.08205128205128205;
          result[5] += 0.6205128205128205;
        } else {
          result[0] += 0.02197802197802198;
          result[1] += 0;
          result[2] += 0.04395604395604396;
          result[3] += 0.7472527472527473;
          result[4] += 0.005494505494505495;
          result[5] += 0.1813186813186813;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)92) ) ) {
          result[0] += 0;
          result[1] += 0.16666666666666666;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8333333333333334;
          result[5] += 0;
        } else {
          result[0] += 0.0064794816414686825;
          result[1] += 0.9827213822894169;
          result[2] += 0;
          result[3] += 0.0021598272138228943;
          result[4] += 0.0064794816414686825;
          result[5] += 0.0021598272138228943;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)70.5) ) ) {
          result[0] += 0.15289256198347106;
          result[1] += 0.24793388429752067;
          result[2] += 0.028925619834710745;
          result[3] += 0.004132231404958678;
          result[4] += 0.5165289256198347;
          result[5] += 0.049586776859504134;
        } else {
          result[0] += 0.7657393850658858;
          result[1] += 0.007320644216691069;
          result[2] += 0.018301610541727673;
          result[3] += 0.053440702781844804;
          result[4] += 0.06588579795021962;
          result[5] += 0.08931185944363104;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.21739130434782608;
          result[3] += 0.6086956521739131;
          result[4] += 0;
          result[5] += 0.17391304347826086;
        } else {
          result[0] += 0.02272727272727273;
          result[1] += 0;
          result[2] += 0.6818181818181819;
          result[3] += 0.09090909090909093;
          result[4] += 0.04545454545454546;
          result[5] += 0.15909090909090912;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)67.5) ) ) {
          result[0] += 0.8571428571428572;
          result[1] += 0.07142857142857144;
          result[2] += 0.07142857142857144;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.014749262536873156;
          result[1] += 0;
          result[2] += 0.8859390363815143;
          result[3] += 0.0776794493608653;
          result[4] += 0.0029498525073746312;
          result[5] += 0.018682399213372666;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
          result[0] += 0.009302325581395349;
          result[1] += 0.027906976744186046;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9348837209302325;
          result[5] += 0.027906976744186046;
        } else {
          result[0] += 0.5603448275862069;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.28448275862068967;
          result[5] += 0.15517241379310345;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0.0012787723785166241;
          result[2] += 0.0012787723785166241;
          result[3] += 0.020460358056265986;
          result[4] += 0.05370843989769821;
          result[5] += 0.9232736572890026;
        } else {
          result[0] += 0.007017543859649123;
          result[1] += 0.028070175438596492;
          result[2] += 0.008771929824561403;
          result[3] += 0.3649122807017544;
          result[4] += 0.07543859649122807;
          result[5] += 0.5157894736842106;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)65) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)54) ) ) {
          result[0] += 0.004454342984409799;
          result[1] += 0.955456570155902;
          result[2] += 0;
          result[3] += 0.0022271714922048997;
          result[4] += 0.0378619153674833;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.1953125;
          result[2] += 0.0234375;
          result[3] += 0.0234375;
          result[4] += 0.703125;
          result[5] += 0.0546875;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
          result[0] += 0.4079207920792079;
          result[1] += 0.023762376237623763;
          result[2] += 0.12079207920792079;
          result[3] += 0.1900990099009901;
          result[4] += 0.07326732673267326;
          result[5] += 0.18415841584158416;
        } else {
          result[0] += 0.8439581351094196;
          result[1] += 0.029495718363463368;
          result[2] += 0.05042816365366318;
          result[3] += 0.011417697431018078;
          result[4] += 0.05042816365366318;
          result[5] += 0.014272121788772598;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1;
          result[3] += 0.25;
          result[4] += 0.05;
          result[5] += 0.6;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1590909090909091;
          result[3] += 0.7727272727272727;
          result[4] += 0;
          result[5] += 0.06818181818181818;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6216216216216216;
          result[3] += 0.2702702702702703;
          result[4] += 0;
          result[5] += 0.10810810810810811;
        } else {
          result[0] += 0.06451612903225806;
          result[1] += 0;
          result[2] += 0.9354838709677419;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)85) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8888888888888888;
          result[4] += 0;
          result[5] += 0.1111111111111111;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8032786885245902;
          result[3] += 0.15846994535519127;
          result[4] += 0;
          result[5] += 0.03825136612021858;
        } else {
          result[0] += 0.008771929824561403;
          result[1] += 0;
          result[2] += 0.9546783625730995;
          result[3] += 0.033625730994152045;
          result[4] += 0;
          result[5] += 0.0029239766081871343;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)43.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.004347826086956522;
          result[1] += 0.013043478260869565;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9347826086956522;
          result[5] += 0.04782608695652174;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)70.5) ) ) {
          result[0] += 0.012658227848101266;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.46835443037974683;
          result[5] += 0.5189873417721519;
        } else {
          result[0] += 0.8461538461538461;
          result[1] += 0.11538461538461539;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.038461538461538464;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6666666666666666;
          result[5] += 0.3333333333333333;
        } else {
          result[0] += 0.002466091245376079;
          result[1] += 0.002466091245376079;
          result[2] += 0.0012330456226880395;
          result[3] += 0.03822441430332922;
          result[4] += 0.027127003699136867;
          result[5] += 0.9284833538840938;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0.010582010582010581;
          result[2] += 0.015873015873015872;
          result[3] += 0.2222222222222222;
          result[4] += 0.07407407407407407;
          result[5] += 0.6772486772486772;
        } else {
          result[0] += 0.006060606060606061;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6545454545454545;
          result[4] += 0;
          result[5] += 0.3393939393939394;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)92) ) ) {
          result[0] += 0;
          result[1] += 0.0945945945945946;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8648648648648649;
          result[5] += 0.04054054054054054;
        } else {
          result[0] += 0.00202020202020202;
          result[1] += 0.9313131313131313;
          result[2] += 0;
          result[3] += 0.00404040404040404;
          result[4] += 0.06262626262626263;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
          result[0] += 0.21888412017167383;
          result[1] += 0.008583690987124463;
          result[2] += 0.08583690987124463;
          result[3] += 0.2575107296137339;
          result[4] += 0.16738197424892703;
          result[5] += 0.26180257510729615;
        } else {
          result[0] += 0.8263665594855305;
          result[1] += 0.04421221864951769;
          result[2] += 0.021704180064308683;
          result[3] += 0.024115755627009645;
          result[4] += 0.07395498392282958;
          result[5] += 0.00964630225080386;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0.006578947368421052;
          result[2] += 0.23684210526315788;
          result[3] += 0.5789473684210527;
          result[4] += 0.03289473684210526;
          result[5] += 0.14473684210526316;
        } else {
          result[0] += 0.13194444444444445;
          result[1] += 0.11805555555555555;
          result[2] += 0.5208333333333334;
          result[3] += 0.09722222222222222;
          result[4] += 0.006944444444444444;
          result[5] += 0.125;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05555555555555555;
          result[3] += 0.6666666666666666;
          result[4] += 0;
          result[5] += 0.2777777777777778;
        } else {
          result[0] += 0.00663716814159292;
          result[1] += 0;
          result[2] += 0.9092920353982301;
          result[3] += 0.06747787610619468;
          result[4] += 0;
          result[5] += 0.016592920353982302;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)87.5) ) ) {
          result[0] += 0.012903225806451613;
          result[1] += 0.01935483870967742;
          result[2] += 0.0032258064516129032;
          result[3] += 0.0064516129032258064;
          result[4] += 0.8612903225806452;
          result[5] += 0.0967741935483871;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          result[0] += 0.0029154518950437317;
          result[1] += 0.0029154518950437317;
          result[2] += 0;
          result[3] += 0.026239067055393587;
          result[4] += 0.03935860058309038;
          result[5] += 0.9285714285714286;
        } else {
          result[0] += 0.06004618937644342;
          result[1] += 0.0023094688221709007;
          result[2] += 0.009237875288683603;
          result[3] += 0.3233256351039261;
          result[4] += 0.09237875288683603;
          result[5] += 0.5127020785219399;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90) ) ) {
          result[0] += 0;
          result[1] += 0.04081632653061224;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9591836734693877;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9897750511247444;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.010224948875255624;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.8451816745655608;
          result[1] += 0.019747235387045814;
          result[2] += 0.0039494470774091624;
          result[3] += 0.013428120063191154;
          result[4] += 0.07740916271721959;
          result[5] += 0.04028436018957346;
        } else {
          result[0] += 0.1892744479495268;
          result[1] += 0.022082018927444796;
          result[2] += 0.15457413249211358;
          result[3] += 0.2807570977917981;
          result[4] += 0.0473186119873817;
          result[5] += 0.305993690851735;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)111.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.024390243902439025;
          result[4] += 0.2926829268292683;
          result[5] += 0.6829268292682927;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)72.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09090909090909091;
          result[3] += 0.045454545454545456;
          result[4] += 0;
          result[5] += 0.8636363636363636;
        } else {
          result[0] += 0.004901960784313725;
          result[1] += 0.00980392156862745;
          result[2] += 0.29411764705882354;
          result[3] += 0.5245098039215687;
          result[4] += 0.004901960784313725;
          result[5] += 0.16176470588235295;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.26666666666666666;
          result[3] += 0.13333333333333333;
          result[4] += 0;
          result[5] += 0.6;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7813765182186235;
          result[3] += 0.20242914979757085;
          result[4] += 0;
          result[5] += 0.016194331983805668;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
          result[0] += 0.48148148148148145;
          result[1] += 0;
          result[2] += 0.48148148148148145;
          result[3] += 0.037037037037037035;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.004285714285714286;
          result[1] += 0;
          result[2] += 0.9571428571428572;
          result[3] += 0.037142857142857144;
          result[4] += 0;
          result[5] += 0.0014285714285714286;
        }
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
