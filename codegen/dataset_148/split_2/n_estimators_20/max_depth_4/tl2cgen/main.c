
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
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
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
          result[0] += 0.9993422051308;
          result[1] += 0;
          result[2] += 0.0006071952638769417;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 5.059960532307848e-05;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 0.002306805074971165;
          result[2] += 0;
          result[3] += 0.209919261822376;
          result[4] += 0.7843137254901961;
          result[5] += 0.0034602076124567475;
          result[6] += 0;
        } else {
          result[0] += 0.027538726333907058;
          result[1] += 0.0037865748709122204;
          result[2] += 0.024784853700516352;
          result[3] += 0.8523235800344234;
          result[4] += 0.09018932874354561;
          result[5] += 0.001376936316695353;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 0.5824975736007764;
          result[1] += 0;
          result[2] += 0.002911679068262698;
          result[3] += 0.41329666774506624;
          result[4] += 0;
          result[5] += 0.00016175994823681655;
          result[6] += 0.0011323196376577158;
        } else {
          result[0] += 0.9700285442435775;
          result[1] += 0;
          result[2] += 0.004281636536631779;
          result[3] += 0.023549000951474785;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0021408182683158895;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
          result[0] += 0.5135135135135135;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.4864864864864865;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.20738636363636365;
          result[1] += 0.01278409090909091;
          result[2] += 0;
          result[3] += 0.7798295454545454;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)61) ) ) {
          result[0] += 0.3864734299516908;
          result[1] += 0;
          result[2] += 0.03864734299516908;
          result[3] += 0.5748792270531401;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.03454231433506045;
          result[2] += 0;
          result[3] += 0.9654576856649395;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)14) ) ) {
          result[0] += 0.25;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.75;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9987373737373737;
          result[5] += 0.0012626262626262627;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)29) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0006395906619763352;
          result[2] += 0.007675087943716022;
          result[3] += 0.9910457307323313;
          result[4] += 0;
          result[5] += 0.0006395906619763352;
          result[6] += 0;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)94) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9375;
          result[2] += 0;
          result[3] += 0.0625;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.986046511627907;
          result[1] += 0;
          result[2] += 0.013953488372093023;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9954977488744372;
          result[1] += 0;
          result[2] += 0.004502251125562781;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9998713881505616;
          result[1] += 0;
          result[2] += 0.00012861184943839491;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          result[0] += 0.0764904386951631;
          result[1] += 0.02924634420697413;
          result[2] += 0.04499437570303712;
          result[3] += 0.8492688413948256;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5851670741646292;
          result[1] += 0.00016299918500407498;
          result[2] += 0.0026079869600651997;
          result[3] += 0.41189894050529746;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00016299918500407498;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.8902439024390244;
          result[1] += 0;
          result[2] += 0.0011086474501108647;
          result[3] += 0.10864745011086474;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9892908827785818;
          result[1] += 0;
          result[2] += 0.006367583212735167;
          result[3] += 0.0026049204052098407;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0017366136034732273;
        }
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9850931677018634;
          result[1] += 0;
          result[2] += 0.011180124223602485;
          result[3] += 0.0037267080745341614;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 0.009965122072745391;
          result[2] += 0;
          result[3] += 0.9900348779272546;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9896640826873385;
          result[1] += 0;
          result[2] += 0.0103359173126615;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9993864324883998;
          result[1] += 0;
          result[2] += 0.0005752195421252445;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 3.8347969475016295e-05;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 0.45852432352506284;
          result[1] += 0.0031051308590862043;
          result[2] += 0.005323081472719208;
          result[3] += 0.49090640248410466;
          result[4] += 0.04140174478781606;
          result[5] += 0.00044359012272660064;
          result[6] += 0.0002957267484844004;
        } else {
          result[0] += 0.968407960199005;
          result[1] += 0;
          result[2] += 0.0037313432835820895;
          result[3] += 0.027114427860696518;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007462686567164179;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.993006993006993;
          result[4] += 0.002997002997002997;
          result[5] += 0.003996003996003996;
          result[6] += 0;
        } else {
          result[0] += 0.033600000000000005;
          result[1] += 0;
          result[2] += 0.019200000000000002;
          result[3] += 0.17760000000000004;
          result[4] += 0.7664000000000001;
          result[5] += 0.0032000000000000006;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0.001519756838905775;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9969604863221885;
          result[5] += 0.001519756838905775;
          result[6] += 0;
        } else {
          result[0] += 0.9850409682026611;
          result[1] += 0.00022551304217093888;
          result[2] += 0.0007517101405697963;
          result[3] += 0.013981808614598211;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
          result[0] += 0.9862511457378552;
          result[1] += 0;
          result[2] += 0.0016804155209288116;
          result[3] += 0.011457378551787351;
          result[4] += 0.0006110601894286587;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9732528041415013;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.026747195858498704;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 0.5222577829502474;
          result[1] += 0.0016002327611288917;
          result[2] += 0.004073319755600815;
          result[3] += 0.47134128600523717;
          result[4] += 0;
          result[5] += 0.0004364271166715159;
          result[6] += 0.00029095141111434397;
        } else {
          result[0] += 0.9876975289002015;
          result[1] += 0;
          result[2] += 0.001590836780146357;
          result[3] += 0.010393466963622866;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003181673560292714;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)78.5) ) ) {
          result[0] += 0.010101010101010102;
          result[1] += 0;
          result[2] += 0.0016835016835016834;
          result[3] += 0.9764309764309764;
          result[4] += 0.010942760942760943;
          result[5] += 0.0008417508417508417;
          result[6] += 0;
        } else {
          result[0] += 0.28501628664495116;
          result[1] += 0;
          result[2] += 0.018729641693811076;
          result[3] += 0.4731270358306189;
          result[4] += 0.22312703583061888;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          result[0] += 0.2612137203166227;
          result[1] += 0.011873350923482849;
          result[2] += 0;
          result[3] += 0.7269129287598944;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0486815415821501;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9411764705882353;
          result[4] += 0.010141987829614604;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)20) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.2290909090909091;
          result[1] += 0;
          result[2] += 0.04;
          result[3] += 0.730909090909091;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
          result[0] += 0.03225806451612903;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.967741935483871;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
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
          result[0] += 0.15;
          result[1] += 0.85;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9838308457711443;
          result[1] += 0;
          result[2] += 0.014925373134328358;
          result[3] += 0.0012437810945273632;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          result[0] += 0.14431934493346982;
          result[1] += 0.015353121801432957;
          result[2] += 0.0030706243602865915;
          result[3] += 0.8372569089048106;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0010672358591248667;
          result[1] += 0;
          result[2] += 0.0010672358591248667;
          result[3] += 0.9978655282817502;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-23) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7295597484276729;
          result[4] += 0.27044025157232704;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0010976948408342481;
          result[1] += 0.015367727771679473;
          result[2] += 0;
          result[3] += 0.13830954994511527;
          result[4] += 0.845225027442371;
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
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)1399) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9891891891891892;
          result[1] += 0;
          result[2] += 0.010810810810810811;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9997302504816956;
          result[1] += 0;
          result[2] += 0.0002697495183044316;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)2060.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 0.7097798475867909;
          result[1] += 0.0019051651143099071;
          result[2] += 0.002116850127011008;
          result[3] += 0.28598645215918717;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00021168501270110078;
        } else {
          result[0] += 0.8905232698336147;
          result[1] += 0.00024113817217265497;
          result[2] += 0.011815770436460094;
          result[3] += 0.06341933928140826;
          result[4] += 0.031589100554617805;
          result[5] += 0.0007234145165179649;
          result[6] += 0.0016879672052085848;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
          result[0] += 0;
          result[1] += 0.00099601593625498;
          result[2] += 0;
          result[3] += 0.9943559096945551;
          result[4] += 0.00398406374501992;
          result[5] += 0.0006640106241699867;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.045112781954887216;
          result[3] += 0;
          result[4] += 0.9548872180451128;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
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
          result[3] += 0.9941964285714285;
          result[4] += 0.002232142857142857;
          result[5] += 0.0035714285714285713;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
          result[0] += 0.06666666666666667;
          result[1] += 0;
          result[2] += 0.6;
          result[3] += 0;
          result[4] += 0.3333333333333333;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.01781970649895178;
          result[3] += 0;
          result[4] += 0.9811320754716981;
          result[5] += 0.0010482180293501049;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
          result[0] += 0.7159309021113244;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2840690978886756;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9973144268987002;
          result[1] += 0.0002148458481039854;
          result[2] += 0.0021126508396891895;
          result[3] += 0.00017903820675332116;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00017903820675332116;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.16561423650975893;
          result[1] += 0;
          result[2] += 0.005166475315729048;
          result[3] += 0.8283582089552239;
          result[4] += 0;
          result[5] += 0.0008610792192881746;
          result[6] += 0;
        } else {
          result[0] += 0.9933601609657947;
          result[1] += 0;
          result[2] += 0.004024144869215292;
          result[3] += 0.0012072434607645875;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0014084507042253522;
        }
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0.008025682182985553;
          result[2] += 0.0008025682182985554;
          result[3] += 0.9911717495987159;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.8235294117647058;
          result[2] += 0;
          result[3] += 0.17647058823529413;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8625;
          result[1] += 0;
          result[2] += 0.1375;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)31.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9955041746949261;
          result[1] += 0;
          result[2] += 0.0038535645472061657;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006422607578676942;
        } else {
          result[0] += 0.9995957554320364;
          result[1] += 0;
          result[2] += 0.000404244567963618;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9940476190476191;
          result[5] += 0.005952380952380952;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
          result[0] += 0.4132231404958678;
          result[1] += 0.008264462809917356;
          result[2] += 0;
          result[3] += 0.5785123966942148;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.005989518342899926;
          result[1] += 0.010980783628649864;
          result[2] += 0.015972048914399805;
          result[3] += 0.966308959321188;
          result[4] += 0;
          result[5] += 0.0007486897928624907;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0.7938144329896908;
          result[1] += 0;
          result[2] += 0.012371134020618558;
          result[3] += 0.19381443298969075;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.994238683127572;
          result[1] += 0;
          result[2] += 0.0037860082304526747;
          result[3] += 0.0018106995884773663;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001646090534979424;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.971919770773639;
          result[1] += 0;
          result[2] += 0.010315186246418338;
          result[3] += 0.0166189111747851;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001146131805157593;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0011862396204033216;
          result[3] += 0.9988137603795967;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          result[0] += 0.9777562862669246;
          result[1] += 0;
          result[2] += 0.022243713733075435;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6938775510204082;
          result[1] += 0;
          result[2] += 0.30612244897959184;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)10.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0816593886462882;
          result[1] += 0.004366812227074236;
          result[2] += 0.003056768558951965;
          result[3] += 0.9109170305676856;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-144) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.01705237515225335;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9829476248477467;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)67) ) ) {
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9989945155393053;
          result[1] += 0;
          result[2] += 0.0009140767824497258;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 9.140767824497258e-05;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 0.7328767123287672;
          result[1] += 0.002209456473707468;
          result[2] += 0.001104728236853734;
          result[3] += 0.2624834290764472;
          result[4] += 0;
          result[5] += 0.0004418912947414936;
          result[6] += 0.0008837825894829872;
        } else {
          result[0] += 0.9118695873662761;
          result[1] += 0;
          result[2] += 0.007386653082017321;
          result[3] += 0.06979113601630157;
          result[4] += 0.008405501782985226;
          result[5] += 0.0010188487009679063;
          result[6] += 0.0015282730514518594;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
          result[0] += 0;
          result[1] += 0.0006682258603407952;
          result[2] += 0.00835282325425994;
          result[3] += 0.9909789508853992;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0031201248049922;
          result[3] += 0;
          result[4] += 0.9953198127925117;
          result[5] += 0.0015600624024961;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)79) ) ) {
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)185) ) ) {
          result[0] += 0;
          result[1] += 0.01608187134502924;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9839181286549707;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9993943064809206;
          result[5] += 0.0006056935190793458;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0070626003210272886;
          result[3] += 0.9910112359550562;
          result[4] += 0;
          result[5] += 0.001926163723916533;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)19) ) ) {
          result[0] += 0.9772429405456928;
          result[1] += 0.0005361610866198022;
          result[2] += 0.0018467770761348742;
          result[3] += 0.020076254021208148;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002978672703443346;
        } else {
          result[0] += 0.06596306068601583;
          result[1] += 0.014511873350923483;
          result[2] += 0.03430079155672823;
          result[3] += 0.8852242744063324;
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
          result[0] += 0.5362663495838288;
          result[1] += 0;
          result[2] += 0.0015854141894569957;
          result[3] += 0.46135552913198574;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007927070947284979;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)111.5) ) ) {
          result[0] += 0.9920000000000001;
          result[1] += 0;
          result[2] += 0.003771428571428572;
          result[3] += 0.0036571428571428575;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005714285714285716;
        } else {
          result[0] += 0.4;
          result[1] += 0;
          result[2] += 0.6;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)51) ) ) {
          result[0] += 0.9184834123222749;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.08151658767772511;
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
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-5) ) ) {
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9986740331491712;
          result[1] += 0;
          result[2] += 0.0013259668508287293;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9986979166666666;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0013020833333333333;
        } else {
          result[0] += 0.9999289015286171;
          result[1] += 0;
          result[2] += 7.109847138286527e-05;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          result[0] += 0.5008693873376292;
          result[1] += 0.002557021581262146;
          result[2] += 0.005727728342027207;
          result[3] += 0.4856295387133068;
          result[4] += 0.004807200572772835;
          result[5] += 0.00030684258975145756;
          result[6] += 0.00010228086325048585;
        } else {
          result[0] += 0.6044880785413744;
          result[1] += 0;
          result[2] += 0.033660589060308554;
          result[3] += 0.002805049088359046;
          result[4] += 0.3506311360448808;
          result[5] += 0.002805049088359046;
          result[6] += 0.005610098176718092;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8502722323049002;
          result[4] += 0.14972776769509982;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7790544977019042;
          result[1] += 0;
          result[2] += 0.00032829940906106366;
          result[3] += 0.21996060407091267;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006565988181221273;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
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
          result[0] += 0.015873015873015872;
          result[1] += 0.12698412698412698;
          result[2] += 0;
          result[3] += 0.8571428571428571;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28.5) ) ) {
          result[0] += 0.9903381642512077;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.00966183574879227;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.00040192926045016077;
          result[2] += 0.003215434083601286;
          result[3] += 0.8866559485530546;
          result[4] += 0.10811897106109325;
          result[5] += 0.001607717041800643;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
          result[0] += 0.9971519100003561;
          result[1] += 0.00042721349994659835;
          result[2] += 0.0016020506247997439;
          result[3] += 0.0006764213749154474;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00014240449998219947;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08947368421052632;
          result[3] += 0.9105263157894737;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
          result[0] += 0.441017733230532;
          result[1] += 0;
          result[2] += 0.013878180416345412;
          result[3] += 0.02235929067077872;
          result[4] += 0.5227447956823439;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.016289893617021278;
          result[1] += 0;
          result[2] += 0.005651595744680851;
          result[3] += 0.9740691489361702;
          result[4] += 0.003324468085106383;
          result[5] += 0.0006648936170212766;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
          result[0] += 0.75;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.25;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9955573505654282;
          result[1] += 0;
          result[2] += 0.004240710823909532;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00020193861066235866;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)110) ) ) {
          result[0] += 0.025;
          result[1] += 0.15;
          result[2] += 0;
          result[3] += 0.825;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.05394190871369295;
          result[2] += 0;
          result[3] += 0.004149377593360996;
          result[4] += 0.941908713692946;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          result[0] += 0.27341389728096677;
          result[1] += 0.01661631419939577;
          result[2] += 0;
          result[3] += 0.7099697885196374;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
          result[0] += 0.07547169811320754;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9245283018867925;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.018447348193697154;
          result[4] += 0.9815526518063028;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)49.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.22916666666666666;
          result[3] += 0.7708333333333334;
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
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)33) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)16.5) ) ) {
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
          result[4] += 0.9985096870342772;
          result[5] += 0.0014903129657228018;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0.0015595757953836558;
          result[1] += 0.00031191515907673113;
          result[2] += 0;
          result[3] += 0.9978165938864629;
          result[4] += 0;
          result[5] += 0.00031191515907673113;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.3548387096774194;
          result[2] += 0.5483870967741935;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.0967741935483871;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)32) ) ) {
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
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          result[0] += 0.9967009402320338;
          result[1] += 0.0006048276241271237;
          result[2] += 0.002419310496508495;
          result[3] += 0.00016495298839830648;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00010996865893220432;
        } else {
          result[0] += 0.9995757318625372;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.00010606703436571915;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00031820110309715744;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          result[0] += 0;
          result[1] += 0.05303030303030303;
          result[2] += 0;
          result[3] += 0.946969696969697;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.22651622002820873;
          result[1] += 0;
          result[2] += 0.0028208744710860366;
          result[3] += 0.7706629055007053;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9975201487910725;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0024798512089274642;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)49.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.020454545454545454;
          result[3] += 0.9795454545454545;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9936176385262547;
          result[1] += 0;
          result[2] += 0.0040615027560197275;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0023208587177255585;
        }
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)112) ) ) {
          result[0] += 0;
          result[1] += 0.00031645569620253165;
          result[2] += 0;
          result[3] += 0.9971518987341772;
          result[4] += 0.0015822784810126582;
          result[5] += 0.0009493670886075949;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.013636363636363636;
          result[4] += 0.9863636363636363;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-9) ) ) {
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
          result[0] += 0;
          result[1] += 0.015037593984962405;
          result[2] += 0.02443609022556391;
          result[3] += 0;
          result[4] += 0.9548872180451128;
          result[5] += 0.005639097744360902;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0005934718100890207;
          result[2] += 0.00830860534124629;
          result[3] += 0;
          result[4] += 0.9905044510385757;
          result[5] += 0.0005934718100890207;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)33.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
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
          result[0] += 0.9983440052991831;
          result[1] += 0;
          result[2] += 0.0014351954073746967;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000220799293442261;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          result[0] += 0.11879895561357702;
          result[1] += 0.02741514360313316;
          result[2] += 0.030026109660574413;
          result[3] += 0.8237597911227154;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9789320741009807;
          result[1] += 0.0001210800339024095;
          result[2] += 0.005206441457803608;
          result[3] += 0.01465068410219155;
          result[4] += 0;
          result[5] += 0.000242160067804819;
          result[6] += 0.0008475602373168665;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
          result[0] += 0;
          result[1] += 0.0003699593044765076;
          result[2] += 0;
          result[3] += 0.9996300406955235;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)79) ) ) {
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.000304228780042592;
          result[2] += 0.006388804380894433;
          result[3] += 0.99178582293885;
          result[4] += 0;
          result[5] += 0.0015211439002129601;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)117) ) ) {
          result[0] += 0;
          result[1] += 0.048701298701298704;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9512987012987013;
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
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
          result[0] += 0.996187634675949;
          result[1] += 0;
          result[2] += 0.0004972650422675286;
          result[3] += 0.003315100281783524;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.77337431252022;
          result[1] += 0;
          result[2] += 0.006793917825946296;
          result[3] += 0.21821417017146555;
          result[4] += 0;
          result[5] += 0.00032351989647363315;
          result[6] += 0.0012940795858945326;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
          result[0] += 0.9655957279173597;
          result[1] += 0.001750853541101287;
          result[2] += 0.0027138229887069946;
          result[3] += 0.029589424844611748;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00035017070822025736;
        } else {
          result[0] += 0.8850110794555239;
          result[1] += 0;
          result[2] += 0.0015827793605571383;
          result[3] += 0.1133270022158911;
          result[4] += 0;
          result[5] += 0;
          result[6] += 7.913896802785692e-05;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-5) ) ) {
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
          result[0] += 0.9801324503311258;
          result[1] += 0;
          result[2] += 0.019867549668874173;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9960019990004998;
          result[1] += 0;
          result[2] += 0.0029985007496251873;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009995002498750624;
        } else {
          result[0] += 0.9999163249937244;
          result[1] += 0;
          result[2] += 8.367500627562547e-05;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
          result[0] += 0.0180280436234142;
          result[1] += 0.00445136879590474;
          result[2] += 0.006454484754061874;
          result[3] += 0.7674159804139773;
          result[4] += 0.2025372802136657;
          result[5] += 0.001112842198976185;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.009345794392523364;
          result[2] += 0;
          result[3] += 0.09553478712357218;
          result[4] += 0.8951194184839044;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          result[0] += 0.9860842674913027;
          result[1] += 0;
          result[2] += 0.004767426877979643;
          result[3] += 0.008246360005153977;
          result[4] += 0;
          result[5] += 0.0001288493750805309;
          result[6] += 0.0007730962504831852;
        } else {
          result[0] += 0.8430034129692833;
          result[1] += 0.0034129692832764505;
          result[2] += 0.04436860068259386;
          result[3] += 0.10921501706484642;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.31221719457013575;
          result[4] += 0.6877828054298643;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.011655011655011656;
          result[2] += 0.002331002331002331;
          result[3] += 0.12121212121212122;
          result[4] += 0.8648018648018648;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9947015188979159;
          result[4] += 0.0035323207347227126;
          result[5] += 0.0017661603673613563;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
          result[0] += 0.21657458563535914;
          result[1] += 0.001104972375690608;
          result[2] += 0;
          result[3] += 0.7756906077348067;
          result[4] += 0.004419889502762432;
          result[5] += 0.002209944751381216;
          result[6] += 0;
        } else {
          result[0] += 0.995373215253931;
          result[1] += 0.0006144948490872944;
          result[2] += 0.0006144948490872944;
          result[3] += 0.0031809145129224653;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00021688053497198628;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)72) ) ) {
          result[0] += 0.006457564575645757;
          result[1] += 0;
          result[2] += 0.005535055350553505;
          result[3] += 0.9870848708487084;
          result[4] += 0;
          result[5] += 0.0009225092250922509;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
          result[0] += 0.004291845493562232;
          result[1] += 0.03862660944206009;
          result[2] += 0;
          result[3] += 0.20600858369098712;
          result[4] += 0.7510729613733905;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0037174721189591076;
          result[2] += 0;
          result[3] += 0.05762081784386617;
          result[4] += 0.9386617100371747;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0.23333333333333334;
          result[1] += 0;
          result[2] += 0.007017543859649123;
          result[3] += 0.5008771929824561;
          result[4] += 0.25877192982456143;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.22023276633840644;
          result[1] += 0.004476275738585497;
          result[2] += 0.017905102954341987;
          result[3] += 0.41450313339301703;
          result[4] += 0.3428827215756491;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
          result[0] += 0.9432989690721649;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05670103092783505;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.009900990099009901;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9900990099009901;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)108.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
          result[0] += 0.9821917808219178;
          result[1] += 0;
          result[2] += 0.013356164383561644;
          result[3] += 0.0017123287671232876;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0027397260273972603;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0015873015873015873;
          result[3] += 0;
          result[4] += 0.9984126984126984;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
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
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)14) ) ) {
          result[0] += 0.6666666666666666;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3333333333333333;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)29) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.000335795836131632;
          result[2] += 0.008059100067159167;
          result[3] += 0.9905977165883143;
          result[4] += 0;
          result[5] += 0.0010073875083948958;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)94) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.011481056257175661;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9885189437428243;
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
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
          result[0] += 0.9978107167210994;
          result[1] += 0.0006460180167246885;
          result[2] += 0.0013279259232674154;
          result[3] += 7.17797796360765e-05;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000143559559272153;
        } else {
          result[0] += 0.7560975609756098;
          result[1] += 0;
          result[2] += 0.09146341463414634;
          result[3] += 0.1524390243902439;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0.17857142857142858;
          result[2] += 0;
          result[3] += 0.8214285714285714;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
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
          result[2] += 0.004136175628380528;
          result[3] += 0.995227489659561;
          result[4] += 0;
          result[5] += 0.0006363347120585428;
          result[6] += 0;
        } else {
          result[0] += 0.9886524822695035;
          result[1] += 0;
          result[2] += 0.009456264775413711;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0018912529550827422;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)110) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1487) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.05970149253731343;
          result[2] += 0;
          result[3] += 0.9402985074626866;
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
          result[0] += 0.2;
          result[1] += 0.6;
          result[2] += 0;
          result[3] += 0.2;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          result[0] += 0;
          result[1] += 0.0084985835694051;
          result[2] += 0.00793201133144476;
          result[3] += 0.9586402266288951;
          result[4] += 0.024929178470254956;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9988950276243094;
          result[1] += 0.0011049723756906078;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)20) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.010810810810810811;
          result[1] += 0;
          result[2] += 0.06486486486486487;
          result[3] += 0.9243243243243243;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)25) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 0.6184122748498999;
          result[1] += 0;
          result[2] += 0.00333555703802535;
          result[3] += 0.3772515010006671;
          result[4] += 0;
          result[5] += 0.00066711140760507;
          result[6] += 0.000333555703802535;
        } else {
          result[0] += 0.8147186147186147;
          result[1] += 0;
          result[2] += 0.019913419913419914;
          result[3] += 0.05108225108225108;
          result[4] += 0.11428571428571428;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47.5) ) ) {
          result[0] += 0.9858889934148636;
          result[1] += 0.00034208500812451896;
          result[2] += 0.0004276062601556487;
          result[3] += 0.013127512186778415;
          result[4] += 0.00017104250406225948;
          result[5] += 4.276062601556487e-05;
          result[6] += 0;
        } else {
          result[0] += 0.9019149929939281;
          result[1] += 0.006539000467071462;
          result[2] += 0.0018682858477347033;
          result[3] += 0.08967772069126577;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          result[0] += 0.30963302752293576;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6903669724770642;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5955528846153846;
          result[1] += 0;
          result[2] += 0.018028846153846152;
          result[3] += 0.001201923076923077;
          result[4] += 0.38521634615384615;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)11) ) ) {
          result[0] += 0.75;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.25;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9429510155316607;
          result[1] += 0;
          result[2] += 0.0047789725209080045;
          result[3] += 0.04659498207885305;
          result[4] += 0.0032855436081242534;
          result[5] += 0.0002986857825567503;
          result[6] += 0.002090800477897252;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
          result[0] += 0.9885714285714285;
          result[1] += 0;
          result[2] += 0.011428571428571429;
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
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
          result[0] += 0.013133208255159476;
          result[1] += 0;
          result[2] += 0.010631644777986242;
          result[3] += 0.8893058161350844;
          result[4] += 0.08630393996247655;
          result[5] += 0.0006253908692933083;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.021052631578947368;
          result[2] += 0;
          result[3] += 0.23333333333333334;
          result[4] += 0.7456140350877193;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
          result[0] += 0.5551932929669307;
          result[1] += 0;
          result[2] += 0.0018630647414997672;
          result[3] += 0.44294364229156963;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9546979865771812;
          result[1] += 0;
          result[2] += 0.006152125279642058;
          result[3] += 0.035794183445190156;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.003355704697986577;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-29) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.08695652173913043;
          result[2] += 0;
          result[3] += 0.9130434782608695;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)85.5) ) ) {
          result[0] += 0.4504792332268371;
          result[1] += 0;
          result[2] += 0.02023429179978701;
          result[3] += 0.5154419595314164;
          result[4] += 0.013844515441959531;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.10344827586206896;
          result[1] += 0.008150470219435737;
          result[2] += 0.00877742946708464;
          result[3] += 0.48589341692789967;
          result[4] += 0.39373040752351096;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9991513287010025;
          result[1] += 0;
          result[2] += 0.000848671298997507;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)94.5) ) ) {
          result[0] += 0.7196320301066277;
          result[1] += 0.0029270332427346855;
          result[2] += 0.004390549864102028;
          result[3] += 0.24461634957139872;
          result[4] += 0.0269705205937696;
          result[5] += 0.0006272214091574326;
          result[6] += 0.00083629521220991;
        } else {
          result[0] += 0.3439039408866995;
          result[1] += 0;
          result[2] += 0.003694581280788177;
          result[3] += 0.4929187192118227;
          result[4] += 0.15886699507389163;
          result[5] += 0.0003078817733990148;
          result[6] += 0.0003078817733990148;
        }
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
          result[0] += 0.5;
          result[1] += 0;
          result[2] += 0.4411764705882353;
          result[3] += 0.058823529411764705;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.01200192030724916;
          result[2] += 0.0014402304368698992;
          result[3] += 0.986557849255881;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9849246231155779;
          result[1] += 0;
          result[2] += 0.01507537688442211;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          result[0] += 0.9975845410628019;
          result[1] += 0;
          result[2] += 0.0024154589371980675;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9997716269297524;
          result[1] += 0;
          result[2] += 0.00022837307024755642;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 0.4085403920589338;
          result[1] += 0.0021226120614308906;
          result[2] += 0.006118117118241979;
          result[3] += 0.5632413534773381;
          result[4] += 0.018104632288675242;
          result[5] += 0.0012485953302534651;
          result[6] += 0.0006242976651267326;
        } else {
          result[0] += 0.9676063303659743;
          result[1] += 0;
          result[2] += 0.0066765578635014835;
          result[3] += 0.024975272007912958;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000741839762611276;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-114.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
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
  
  // Average tree outputs
  result[0] /= 20;
  result[1] /= 20;
  result[2] /= 20;
  result[3] /= 20;
  result[4] /= 20;
  result[5] /= 20;
  result[6] /= 20;
  
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
    

    FILE* file = fopen("./codegen/dataset_148/split_2/test_data.csv", "r");
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
